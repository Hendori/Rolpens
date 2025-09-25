/* ShaderEditorPlugin::selected_notify() */void ShaderEditorPlugin::selected_notify(void) {
   return;
}
/* ShaderEditorPlugin::_shader_selected(int) */void ShaderEditorPlugin::_shader_selected(ShaderEditorPlugin *this, int param_1) {
   uint uVar1;
   long *plVar2;
   code *pcVar3;
   uVar1 = *(uint*)( this + 0x660 );
   if ((int)uVar1 <= param_1) {
      return;
   }

   if ((uint)param_1 < uVar1) {
      plVar2 = *(long**)( *(long*)( this + 0x668 ) + (ulong)(uint)param_1 * 0x28 + 0x10 );
      if (plVar2 != (long*)0x0) {
         ( **(code**)( *plVar2 + 0x380 ) )();
      }

      TabContainer::set_current_tab((int)*(undefined8*)( this + 0x688 ));
      ItemList::select((int)*(undefined8*)( this + 0x680 ), SUB41(param_1, 0));
      return;
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)(uint)param_1, (ulong)uVar1, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* ShaderEditorPlugin::_window_changed(bool) */void ShaderEditorPlugin::_window_changed(bool param_1) {
   undefined7 in_register_00000039;
   CanvasItem::set_visible(SUB81(*(undefined8*)( CONCAT71(in_register_00000039, param_1) + 0x6b0 ), 0));
   return;
}
/* ShaderEditorPlugin::make_visible(bool) */void ShaderEditorPlugin::make_visible(ShaderEditorPlugin *this, bool param_1) {
   if (!param_1) {
      return;
   }

   EditorBottomPanel::make_item_visible(*(Control**)( EditorNode::singleton + 0xa40 ), SUB81(*(undefined8*)( this + 0x6a8 ), 0), true);
   return;
}
/* ShaderEditorPlugin::apply_changes() */void ShaderEditorPlugin::apply_changes(ShaderEditorPlugin *this) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x668 );
   lVar1 = lVar2 + ( ulong ) * (uint*)( this + 0x660 ) * 0x28;
   for (; lVar1 != lVar2; lVar2 = lVar2 + 0x28) {
      if (*(long**)( lVar2 + 0x10 ) != (long*)0x0) {
         ( **(code**)( **(long**)( lVar2 + 0x10 ) + 0x368 ) )();
      }

   }

   return;
}
/* ShaderEditorPlugin::_set_text_shader_zoom_factor(float) [clone .part.0] */void ShaderEditorPlugin::_set_text_shader_zoom_factor(ShaderEditorPlugin *this, float param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   float fVar4;
   lVar3 = *(long*)( this + 0x668 );
   *(float*)( this + 0x6c0 ) = param_1;
   lVar1 = lVar3 + ( ulong ) * (uint*)( this + 0x660 ) * 0x28;
   joined_r0x001001ae:do {
      if (lVar3 == lVar1) {
         return;
      }

      if (( ( *(long*)( lVar3 + 0x10 ) != 0 ) && ( lVar2 = __dynamic_cast(*(long*)( lVar3 + 0x10 ), &Object::typeinfo, &TextShaderEditor::typeinfo, 0) ),lVar2 != 0 )) {
         fVar4 = (float)CodeTextEditor::get_zoom_factor();
         if (fVar4 != *(float*)( this + 0x6c0 )) {
            lVar3 = lVar3 + 0x28;
            CodeTextEditor::set_zoom_factor(*(float*)( this + 0x6c0 ));
            goto joined_r0x001001ae;
         }

      }

      lVar3 = lVar3 + 0x28;
   }
 while ( true );
}
/* ShaderEditorPlugin::_set_text_shader_zoom_factor(float) */void ShaderEditorPlugin::_set_text_shader_zoom_factor(ShaderEditorPlugin *this, float param_1) {
   if (param_1 != *(float*)( this + 0x6c0 )) {
      _set_text_shader_zoom_factor(this, param_1);
      return;
   }

   return;
}
/* ShaderEditorPlugin::handles(Object*) const */bool ShaderEditorPlugin::handles(ShaderEditorPlugin *this, Object *param_1) {
   long lVar1;
   if (param_1 == (Object*)0x0) {
      return false;
   }

   lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Shader::typeinfo, 0);
   if (lVar1 != 0) {
      return true;
   }

   lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &ShaderInclude::typeinfo, 0);
   return lVar1 != 0;
}
/* void Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shader> const&) [clone .isra.0] */void Ref<Resource>::operator =(Ref<Resource> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Resource::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* void Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<ShaderInclude> const&) [clone .isra.0] */void Ref<Resource>::operator =(Ref<Resource> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Resource::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* ShaderEditorPlugin::_get_current_shader() */void ShaderEditorPlugin::_get_current_shader(void) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   long in_RSI;
   long *in_RDI;
   uVar4 = TabContainer::get_current_tab();
   if (( -1 < (int)uVar4 ) && ( iVar5 = TabContainer::get_tab_count() ),(int)uVar4 < iVar5) {
      if (*(uint*)( in_RSI + 0x660 ) <= uVar4) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (long)(int)uVar4, ( ulong ) * (uint*)( in_RSI + 0x660 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      plVar1 = (long*)( *(long*)( in_RSI + 0x668 ) + (long)(int)uVar4 * 0x28 );
      lVar6 = *plVar1;
      *in_RDI = 0;
      if (( ( lVar6 != 0 ) || ( lVar6 = plVar1[1] ),lVar6 != 0 )) &&( lVar6 = lVar6 != 0 ) * in_RDI = lVar6;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
iVar5 = TabContainer::get_tab_count();_err_print_index_error("_get_current_shader", "editor/plugins/shader_editor_plugin.cpp", 0x33, (long)(int)uVar4, (long)iVar5, "index", "shader_tabs->get_tab_count()", "", false, false);*in_RDI = 0;return;}/* ShaderEditorPlugin::_update_shader_list_status() */void ShaderEditorPlugin::_update_shader_list_status(ShaderEditorPlugin *this) {
   undefined8 uVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   Ref *pRVar6;
   long in_FS_OFFSET;
   Object *local_48;
   long local_40;
   pRVar6 = (Ref*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      iVar4 = ItemList::get_item_count();
      if (iVar4 <= (int)pRVar6) break;
      lVar5 = TabContainer::get_tab_control((int)*(undefined8*)( this + 0x688 ));
      if (lVar5 != 0) {
         lVar5 = __dynamic_cast(lVar5, &Object::typeinfo, &TextShaderEditor::typeinfo, 0);
         uVar1 = *(undefined8*)( this + 0x680 );
         if (lVar5 != 0) {
            if (*(char*)( lVar5 + 0xa20 ) == '\0') {
               if ((_update_shader_list_status()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar4 = __cxa_guard_acquire(&_update_shader_list_status()::{lambda()#1}::operator()()
                                           ::sname), iVar4 != 0))
               {
                  _scs_create((char *)&_update_shader_list_status()::{lambda()
                  #1
                  true;
                  __cxa_atexit(StringName::~StringName, &_update_shader_list_status()::, {
                        lambda()
                        #1
                        &__dso_handle;
                        __cxa_guard_release(&_update_shader_list_status()::{lambda()#1}::operator()()::sname);
          }, Control::get_editor_theme_icon((StringName*)&local_48));
                     }
, else {
          local_48 = (Object *);
               }

               ItemList::set_item_tag_icon((int)uVar1, pRVar6);
               if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      pRVar6 = (Ref*)( ulong )((int)pRVar6 + 1);
   }
;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderEditorPlugin::get_shader_editor(Ref<Shader> const&) */long ShaderEditorPlugin::get_shader_editor(ShaderEditorPlugin *this, Ref *param_1) {
   long *plVar1;
   long *plVar2;
   plVar2 = *(long**)( this + 0x668 );
   plVar1 = plVar2 + ( ulong ) * (uint*)( this + 0x660 ) * 5;
   if (plVar1 != plVar2) {
      do {
         if (*plVar2 == *(long*)param_1) {
            return plVar2[2];
         }

         plVar2 = plVar2 + 5;
      }
 while ( plVar1 != plVar2 );
   }

   return 0;
}
/* ShaderEditorPlugin::_set_file_specific_items_disabled(bool) */void ShaderEditorPlugin::_set_file_specific_items_disabled(bool param_1) {
   bool bVar1;
   int iVar2;
   iVar2 = MenuButton::get_popup();
   for (int i = 0; i < 5; i++) {
      bVar1 = (bool)PopupMenu::get_item_index(iVar2);
      PopupMenu::set_item_disabled(iVar2, bVar1);
   }

   return;
}
/* ShaderEditorPlugin::_notification(int) [clone .part.0] */void ShaderEditorPlugin::_notification(int param_1) {
   code *pcVar1;
   undefined8 uVar2;
   long *plVar3;
   CallableCustom *pCVar4;
   undefined4 in_register_0000003c;
   char *pcVar5;
   long in_FS_OFFSET;
   long local_60;
   Callable local_58[24];
   long local_40;
   plVar3 = EditorNode::singleton;
   pcVar5 = (char*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pcVar1 = *(code**)( *EditorNode::singleton + 0x108 );
   pCVar4 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar4);
   *(undefined**)( pCVar4 + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar4 = &PTR_hash_00116048;
   *(undefined8*)( pCVar4 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( pcVar5 + 0x60 );
   *(undefined8*)( pCVar4 + 0x10 ) = 0;
   *(undefined8*)( pCVar4 + 0x30 ) = uVar2;
   *(code**)( pCVar4 + 0x38 ) = _resource_saved;
   *(char**)( pCVar4 + 0x28 ) = pcVar5;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
   *(char**)( pCVar4 + 0x20 ) = "ShaderEditorPlugin::_resource_saved";
   Callable::Callable(local_58, pCVar4);
   StringName::StringName((StringName*)&local_60, "resource_saved", false);
   ( *pcVar1 )(plVar3, (StringName*)&local_60, local_58, 1);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_58);
   plVar3 = EditorNode::singleton;
   pcVar1 = *(code**)( *EditorNode::singleton + 0x108 );
   create_custom_callable_function_pointer<ShaderEditorPlugin,String_const&>((ShaderEditorPlugin*)local_58, pcVar5, (_func_void_String_ptr*)"&ShaderEditorPlugin::_close_builtin_shaders_from_scene");
   StringName::StringName((StringName*)&local_60, "scene_closed", false);
   ( *pcVar1 )(plVar3, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_58);
   plVar3 = FileSystemDock::singleton;
   pcVar1 = *(code**)( *FileSystemDock::singleton + 0x108 );
   create_custom_callable_function_pointer<ShaderEditorPlugin,String_const&>((ShaderEditorPlugin*)local_58, pcVar5, (_func_void_String_ptr*)"&ShaderEditorPlugin::_file_removed");
   StringName::StringName((StringName*)&local_60, "file_removed", false);
   ( *pcVar1 )(plVar3, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_58);
   plVar3 = EditorNode::singleton;
   pcVar1 = *(code**)( *EditorNode::singleton + 0x108 );
   pCVar4 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar4);
   *(undefined**)( pCVar4 + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar4 = &PTR_hash_00116168;
   *(undefined8*)( pCVar4 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( pcVar5 + 0x60 );
   *(undefined8*)( pCVar4 + 0x10 ) = 0;
   *(undefined8*)( pCVar4 + 0x30 ) = uVar2;
   *(code**)( pCVar4 + 0x38 ) = _res_saved_callback;
   *(char**)( pCVar4 + 0x28 ) = pcVar5;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
   *(char**)( pCVar4 + 0x20 ) = "ShaderEditorPlugin::_res_saved_callback";
   Callable::Callable(local_58, pCVar4);
   StringName::StringName((StringName*)&local_60, "resource_saved", false);
   ( *pcVar1 )(plVar3, (StringName*)&local_60, local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable(local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_notification(int) */void ShaderEditorPlugin::_notification(ShaderEditorPlugin *this, int param_1) {
   if (param_1 != 0xd) {
      return;
   }

   _notification((int)this);
   return;
}
/* ShaderEditorPlugin::_shader_include_created(Ref<ShaderInclude>) */void ShaderEditorPlugin::_shader_include_created(undefined8 param_1, undefined8 *param_2) {
   Object *pOVar1;
   long in_FS_OFFSET;
   undefined8 local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   pOVar1 = EditorNode::singleton;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC4;
   local_30 = 0;
   String::parse_latin1((StrRange*)&local_40);
   EditorNode::push_item(pOVar1, (String*)*param_2, SUB81((StrRange*)&local_40, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_shader_created(Ref<Shader>) */void ShaderEditorPlugin::_shader_created(undefined8 param_1, undefined8 *param_2) {
   Object *pOVar1;
   long in_FS_OFFSET;
   undefined8 local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   pOVar1 = EditorNode::singleton;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC4;
   local_30 = 0;
   String::parse_latin1((StrRange*)&local_40);
   EditorNode::push_item(pOVar1, (String*)*param_2, SUB81((StrRange*)&local_40, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::get_drag_data_fw(Vector2 const&, Control*) */ShaderEditorPlugin * __thiscall
ShaderEditorPlugin::get_drag_data_fw(ShaderEditorPlugin *this,Vector2 *param_1,Control *param_2){
   char cVar1;
   int iVar2;
   BoxContainer *this_00;
   TextureRect *this_01;
   Label *this_02;
   Variant *pVVar3;
   long in_FS_OFFSET;
   CowData<char32_t> local_90[8];
   Object *local_88;
   Dictionary local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ItemList::get_item_count();
   if (iVar2 != 0) {
      iVar2 = ItemList::get_item_at_position(*(Vector2**)( param_1 + 0x680 ), SUB81(param_2, 0));
      if (-1 < iVar2) {
         this_00 = (BoxContainer*)operator_new(0xa10, "");
         BoxContainer::BoxContainer(this_00, false);
         this_00[0xa0c] = (BoxContainer)0x1;
         *(undefined***)this_00 = &PTR__initialize_classv_00115218;
         postinitialize_handler((Object*)this_00);
         ItemList::get_item_text((int)local_90);
         ItemList::get_item_icon((int)&local_88);
         if (local_88 != (Object*)0x0) {
            this_01 = (TextureRect*)operator_new(0x9e0, "");
            TextureRect::TextureRect(this_01);
            postinitialize_handler((Object*)this_01);
            TextureRect::set_texture((Ref*)this_01);
            TextureRect::set_stretch_mode(this_01, 3);
            Node::add_child(this_00, this_01, 0, 0);
         }

         this_02 = (Label*)operator_new(0xad8, "");
         Label::Label(this_02, (String*)local_90);
         postinitialize_handler((Object*)this_02);
         Node::set_auto_translate_mode(this_02, 2);
         Node::add_child(this_00, this_02, 0, 0);
         Control::set_drag_preview(*(Control**)( param_1 + 0x670 ));
         Dictionary::Dictionary(local_80);
         Variant::Variant((Variant*)local_58, "shader_list_element");
         Variant::Variant((Variant*)local_78, "type");
         pVVar3 = (Variant*)Dictionary::operator []((Variant*)local_80);
         if (pVVar3 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar3 = 0;
            *(int*)pVVar3 = local_58[0];
            *(undefined8*)( pVVar3 + 8 ) = local_50;
            *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, iVar2);
         Variant::Variant((Variant*)local_78, "shader_list_element");
         pVVar3 = (Variant*)Dictionary::operator []((Variant*)local_80);
         if (pVVar3 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar3 = 0;
            *(int*)pVVar3 = local_58[0];
            *(undefined8*)( pVVar3 + 8 ) = local_50;
            *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)this, local_80);
         Dictionary::~Dictionary(local_80);
         if (local_88 != (Object*)0x0) {
            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(local_88);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)local_88 + 0x140 ) )(local_88);
                  Memory::free_static(local_88, false);
               }

            }

         }

         CowData<char32_t>::_unref(local_90);
         goto LAB_00100cc9;
      }

   }

   *(undefined4*)this = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   LAB_00100cc9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *puVar3 = *(undefined4*)param_1;
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
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
/* ShaderEditorPlugin::_update_shader_list() */void ShaderEditorPlugin::_update_shader_list(ShaderEditorPlugin *this) {
   long *plVar1;
   StringName *pSVar2;
   undefined8 uVar3;
   Object *pOVar4;
   char *pcVar5;
   char cVar6;
   bool bVar7;
   int iVar8;
   Object *pOVar9;
   long *plVar10;
   long in_FS_OFFSET;
   CowData<char32_t> local_88[8];
   char *local_80;
   long local_78;
   CowData<char32_t> local_70[8];
   undefined8 local_68;
   Object *local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ItemList::clear();
   plVar10 = *(long**)( this + 0x668 );
   plVar1 = plVar10 + ( ulong ) * (uint*)( this + 0x660 ) * 5;
   if (plVar10 != plVar1) {
      LAB_001012ce:do if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) plVar10 = plVar10 + 5; while ( plVar1 != plVar10 );
   }

   iVar8 = TabContainer::get_tab_count();
   if (iVar8 != 0) {
      uVar3 = *(undefined8*)( this + 0x680 );
      bVar7 = (bool)TabContainer::get_current_tab();
      ItemList::select((int)uVar3, bVar7);
   }

   _set_file_specific_items_disabled(SUB81(this, 0));
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   _update_shader_list_status(this);
   return;
}
/* ShaderEditorPlugin::save_external_data() */void ShaderEditorPlugin::save_external_data(ShaderEditorPlugin *this) {
   long lVar1;
   long *plVar2;
   code *pcVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   lVar4 = *(long*)( this + 0x668 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = lVar4 + ( ulong ) * (uint*)( this + 0x660 ) * 0x28;
   for (; lVar1 != lVar4; lVar4 = lVar4 + 0x28) {
      plVar2 = *(long**)( lVar4 + 0x10 );
      if (plVar2 != (long*)0x0) {
         local_60 = 0;
         local_58 = &_LC4;
         local_50 = 0;
         pcVar3 = *(code**)( *plVar2 + 0x378 );
         String::parse_latin1((StrRange*)&local_60);
         ( *pcVar3 )(plVar2, (StrRange*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _update_shader_list(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_resource_saved(Object*) */void ShaderEditorPlugin::_resource_saved(ShaderEditorPlugin *this, Object *param_1) {
   long *plVar1;
   long *plVar2;
   plVar2 = *(long**)( this + 0x668 );
   plVar1 = plVar2 + ( ulong ) * (uint*)( this + 0x660 ) * 5;
   if (plVar1 == plVar2) {
      return;
   }

   while (( param_1 != (Object*)*plVar2 && ( param_1 != (Object*)plVar2[1] ) )) {
      plVar2 = plVar2 + 5;
      if (plVar1 == plVar2) {
         return;
      }

   }
;
   _update_shader_list(this);
   return;
}
/* ShaderEditorPlugin::get_window_layout(Ref<ConfigFile>) */void ShaderEditorPlugin::get_window_layout(ShaderEditorPlugin *this, undefined8 *param_2) {
   String *pSVar1;
   code *pcVar2;
   Object *pOVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined1 auVar9[16];
   Array local_b8[8];
   undefined8 local_b0;
   long local_a8;
   long local_a0;
   Object *local_98;
   Object *local_90;
   long local_88;
   CowData<char32_t> local_80[8];
   CowData<char32_t> local_78[16];
   undefined1 local_68[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar5 = WindowWrapper::get_window_enabled();
   if (cVar5 == '\0') {
      local_98 = (Object*)0x0;
      pSVar1 = (String*)*param_2;
      String::parse_latin1((String*)&local_98, "window_rect");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "ShaderEditor");
      cVar5 = ConfigFile::has_section_key(pSVar1, (String*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (cVar5 != '\0') {
         local_98 = (Object*)0x0;
         pSVar1 = (String*)*param_2;
         String::parse_latin1((String*)&local_98, "window_rect");
         local_a0 = 0;
         String::parse_latin1((String*)&local_a0, "ShaderEditor");
         ConfigFile::erase_section_key(pSVar1, (String*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      }

      local_98 = (Object*)0x0;
      pSVar1 = (String*)*param_2;
      String::parse_latin1((String*)&local_98, "window_screen");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "ShaderEditor");
      cVar5 = ConfigFile::has_section_key(pSVar1, (String*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (cVar5 != '\0') {
         local_98 = (Object*)0x0;
         pSVar1 = (String*)*param_2;
         String::parse_latin1((String*)&local_98, "window_screen");
         local_a0 = 0;
         String::parse_latin1((String*)&local_a0, "ShaderEditor");
         ConfigFile::erase_section_key(pSVar1, (String*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      }

      local_98 = (Object*)0x0;
      pSVar1 = (String*)*param_2;
      String::parse_latin1((String*)&local_98, "window_screen_rect");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "ShaderEditor");
      cVar5 = ConfigFile::has_section_key(pSVar1, (String*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (cVar5 != '\0') {
         local_98 = (Object*)0x0;
         pSVar1 = (String*)*param_2;
         String::parse_latin1((String*)&local_98, "window_screen_rect");
         local_a0 = 0;
         String::parse_latin1((String*)&local_a0, "ShaderEditor");
         ConfigFile::erase_section_key(pSVar1, (String*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      }

   }
 else {
      pSVar1 = (String*)*param_2;
      local_68 = WindowWrapper::get_window_rect();
      Variant::Variant((Variant*)local_58, (Rect2i*)local_68);
      local_98 = (Object*)0x0;
      String::parse_latin1((String*)&local_98, "window_rect");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "ShaderEditor");
      ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      iVar6 = WindowWrapper::get_window_screen();
      pSVar1 = (String*)*param_2;
      Variant::Variant((Variant*)local_58, iVar6);
      local_98 = (Object*)0x0;
      String::parse_latin1((String*)&local_98, "window_screen");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "ShaderEditor");
      ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pSVar1 = (String*)*param_2;
      auVar9 = ( **(code**)( *DisplayServer::singleton + 0x428 ) )(DisplayServer::singleton, iVar6);
      local_68 = auVar9;
      Variant::Variant((Variant*)local_58, (Rect2i*)local_68);
      local_98 = (Object*)0x0;
      String::parse_latin1((String*)&local_98, "window_screen_rect");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "ShaderEditor");
      ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   lVar8 = 0;
   Array::Array(local_b8);
   local_b0 = 0;
   while (true) {
      iVar6 = TabContainer::get_tab_count();
      if (iVar6 <= (int)(uint)lVar8) break;
      if (*(uint*)( this + 0x660 ) <= (uint)lVar8) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, lVar8, ( ulong ) * (uint*)( this + 0x660 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      EditedShader::EditedShader((EditedShader*)&local_98, (EditedShader*)( *(long*)( this + 0x668 ) + lVar8 * 0x28 ));
      lVar4 = local_88;
      if (local_88 != 0) {
         local_a8 = 0;
         Resource::get_path();
         if (local_a8 != local_a0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            local_a8 = local_a0;
            local_a0 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         Variant::Variant((Variant*)local_58, (String*)&local_a8);
         Array::push_back((Variant*)local_b8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar7 = TabContainer::get_current_tab_control();
         if (lVar7 != 0) {
            lVar7 = __dynamic_cast(lVar7, &Object::typeinfo, &ShaderEditor::typeinfo, 0);
            if (( lVar4 == lVar7 ) && ( lVar7 != 0 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_a8);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      }

      CowData<char32_t>::_unref(local_78);
      CowData<char32_t>::_unref(local_80);
      pOVar3 = local_90;
      if (local_90 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar3);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      pOVar3 = local_98;
      if (local_98 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar3);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      lVar8 = lVar8 + 1;
   }
;
   pSVar1 = (String*)*param_2;
   Variant::Variant((Variant*)local_58, local_b8);
   local_98 = (Object*)0x0;
   String::parse_latin1((String*)&local_98, "open_shaders");
   local_a0 = 0;
   String::parse_latin1((String*)&local_a0, "ShaderEditor");
   ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar1 = (String*)*param_2;
   iVar6 = SplitContainer::get_split_offset();
   Variant::Variant((Variant*)local_58, iVar6);
   local_98 = (Object*)0x0;
   String::parse_latin1((String*)&local_98, "split_offset");
   local_a0 = 0;
   String::parse_latin1((String*)&local_a0, "ShaderEditor");
   ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar1 = (String*)*param_2;
   Variant::Variant((Variant*)local_58, (String*)&local_b0);
   local_98 = (Object*)0x0;
   String::parse_latin1((String*)&local_98, "selected_shader");
   local_a0 = 0;
   String::parse_latin1((String*)&local_a0, "ShaderEditor");
   ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pSVar1 = (String*)*param_2;
   Variant::Variant((Variant*)local_58, *(float*)( this + 0x6c0 ));
   local_98 = (Object*)0x0;
   String::parse_latin1((String*)&local_98, "text_shader_zoom_factor");
   local_a0 = 0;
   String::parse_latin1((String*)&local_a0, "ShaderEditor");
   ConfigFile::set_value(pSVar1, (String*)&local_a0, (Variant*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   Array::~Array(local_b8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_close_shader(int) */void ShaderEditorPlugin::_close_shader(ShaderEditorPlugin *this, int param_1) {
   char cVar1;
   int iVar2;
   Object *pOVar3;
   if (-1 < param_1) {
      iVar2 = TabContainer::get_tab_count();
      if (param_1 < iVar2) {
         pOVar3 = (Object*)TabContainer::get_tab_control((int)*(undefined8*)( this + 0x688 ));
         cVar1 = predelete_handler(pOVar3);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::remove_at((LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>*)( this + 0x660 ), param_1);
         _update_shader_list(this);
         iVar2 = EditorUndoRedoManager::get_singleton();
         EditorUndoRedoManager::clear_history(iVar2, true);
         iVar2 = TabContainer::get_tab_count();
         if (iVar2 != 0) {
            return;
         }

         CanvasItem::show();
         return;
      }

   }

   iVar2 = TabContainer::get_tab_count();
   _err_print_index_error("_close_shader", "editor/plugins/shader_editor_plugin.cpp", 0x1b5, (long)param_1, (long)iVar2, "p_index", "shader_tabs->get_tab_count()", "", false, false);
   return;
}
/* ShaderEditorPlugin::_close_builtin_shaders_from_scene(String const&) */void ShaderEditorPlugin::_close_builtin_shaders_from_scene(String *param_1) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   long in_FS_OFFSET;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x660 ) != 0) {
      uVar6 = 0;
      do {
         while (true) {
            lVar5 = (ulong)uVar6 * 0x28;
            lVar1 = *(long*)( *(long*)( param_1 + 0x668 ) + lVar5 );
            if (lVar1 == 0) break;
            if (( *(long*)( lVar1 + 0x188 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar1 + 0x188 ) + -8 ) )) {
               iVar4 = String::find((char*)( lVar1 + 0x188 ), 0x10839b);
               if (( iVar4 == -1 ) && ( cVar3 = String::begins_with((char*)( lVar1 + 0x188 )) ),cVar3 == '\0') break;
            }

            Resource::get_path();
            cVar3 = String::begins_with(local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
            if (cVar3 == '\0') break;
            LAB_00102406:_close_shader((ShaderEditorPlugin*)param_1, uVar6);
            if (*(uint*)( param_1 + 0x660 ) <= uVar6) goto LAB_0010241d;
         }
;
         uVar7 = *(uint*)( param_1 + 0x660 );
         if (uVar7 <= uVar6) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar6, (ulong)uVar7, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = *(long*)( lVar5 + *(long*)( param_1 + 0x668 ) + 8 );
         if (lVar1 != 0) {
            if (( *(long*)( lVar1 + 0x188 ) == 0 ) || ( *(uint*)( *(long*)( lVar1 + 0x188 ) + -8 ) < 2 )) {
               LAB_00102378:Resource::get_path();
               cVar3 = String::begins_with(local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
               if (cVar3 != '\0') goto LAB_00102406;
            }
 else {
               iVar4 = String::find((char*)( lVar1 + 0x188 ), 0x10839b);
               if (( iVar4 != -1 ) || ( cVar3 = String::begins_with((char*)( lVar1 + 0x188 )) ),cVar3 != '\0') goto LAB_00102378;
            }

            uVar7 = *(uint*)( param_1 + 0x660 );
         }

         uVar6 = uVar6 + 1;
      }
 while ( uVar6 < uVar7 );
   }

   LAB_0010241d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderEditorPlugin::_file_removed(String const&) */void ShaderEditorPlugin::_file_removed(ShaderEditorPlugin *this, String *param_1) {
   char cVar1;
   uint uVar2;
   long lVar3;
   if (*(int*)( this + 0x660 ) == 0) {
      return;
   }

   lVar3 = 0;
   uVar2 = 0;
   do {
      cVar1 = String::operator ==((String*)( *(long*)( this + 0x668 ) + lVar3 + 0x18 ), param_1);
      if (cVar1 != '\0') {
         _close_shader(this, uVar2);
         return;
      }

      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x28;
   }
 while ( uVar2 < *(uint*)( this + 0x660 ) );
   return;
}
/* ShaderEditorPlugin::set_window_layout(Ref<ConfigFile>) */void ShaderEditorPlugin::set_window_layout(ShaderEditorPlugin *this, undefined8 *param_2) {
   String *pSVar1;
   undefined8 uVar2;
   bool bVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   long in_FS_OFFSET;
   float fVar8;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined8 local_130;
   long local_128;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   undefined8 local_108;
   undefined8 local_100;
   int local_f8[8];
   int local_d8[8];
   int local_b8[8];
   int local_98[8];
   int local_78[2];
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_130 = 0;
   String::parse_latin1((String*)&local_130, "interface/multi_window/restore_windows_on_load");
   _EDITOR_GET((String*)local_58);
   bVar3 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (( bVar3 ) && ( cVar4 = cVar4 != '\0' )) {
      local_120 = 0;
      pSVar1 = (String*)*param_2;
      String::parse_latin1((String*)&local_120, "window_rect");
      local_128 = 0;
      String::parse_latin1((String*)&local_128, "ShaderEditor");
      cVar4 = ConfigFile::has_section_key(pSVar1, (String*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
      if (cVar4 != '\0') {
         uVar2 = *(undefined8*)( this + 0x6a8 );
         local_108 = 0;
         local_100 = 0;
         pSVar1 = (String*)*param_2;
         Variant::Variant((Variant*)local_78, (Rect2i*)&local_108);
         local_120 = 0;
         String::parse_latin1((String*)&local_120, "window_screen_rect");
         local_128 = 0;
         String::parse_latin1((String*)&local_128, "ShaderEditor");
         ConfigFile::get_value((String*)local_58, pSVar1, (Variant*)&local_128);
         Variant::operator_cast_to_Rect2((Variant*)local_58);
         pSVar1 = (String*)*param_2;
         Variant::Variant((Variant*)local_b8, -1);
         local_130 = 0;
         String::parse_latin1((String*)&local_130, "window_screen");
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "ShaderEditor");
         ConfigFile::get_value((String*)local_98, pSVar1, (Variant*)&local_138);
         iVar5 = Variant::operator_cast_to_int((Variant*)local_98);
         local_118 = 0;
         local_110 = 0;
         pSVar1 = (String*)*param_2;
         Variant::Variant((Variant*)local_f8, (Rect2i*)&local_118);
         local_140 = 0;
         String::parse_latin1((String*)&local_140, "window_rect");
         local_148 = 0;
         String::parse_latin1((String*)&local_148, "ShaderEditor");
         ConfigFile::get_value((String*)local_d8, pSVar1, (Variant*)&local_148);
         Variant::operator_cast_to_Rect2((Variant*)local_d8);
         WindowWrapper::restore_window_from_saved_position(uVar2, iVar5);
         if (Variant::needs_deinit[local_d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_148);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
         if (Variant::needs_deinit[local_f8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
         if (Variant::needs_deinit[local_b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00102665;
      }

   }
 else {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   }

   WindowWrapper::set_window_enabled(SUB81(*(undefined8*)( this + 0x6a8 ), 0));
   LAB_00102665:local_120 = 0;
   String::parse_latin1((String*)&local_120, "editors/shader_editor/behavior/files/restore_shaders_on_load");
   _EDITOR_GET((String*)local_58);
   bVar3 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   if (bVar3) {
      local_120 = 0;
      pSVar1 = (String*)*param_2;
      String::parse_latin1((String*)&local_120, "ShaderEditor");
      cVar4 = ConfigFile::has_section(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
      if (cVar4 != '\0') {
         pSVar1 = (String*)*param_2;
         local_130 = 0;
         String::parse_latin1((String*)&local_130, "open_shaders");
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "ShaderEditor");
         cVar4 = ConfigFile::has_section_key(pSVar1, (String*)&local_138);
         if (cVar4 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
         }
 else {
            local_120 = 0;
            pSVar1 = (String*)*param_2;
            String::parse_latin1((String*)&local_120, "selected_shader");
            local_128 = 0;
            String::parse_latin1((String*)&local_128, "ShaderEditor");
            cVar4 = ConfigFile::has_section_key(pSVar1, (String*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
            if (cVar4 != '\0') {
               local_70 = (undefined1[16])0x0;
               local_78[0] = 0;
               local_78[1] = 0;
               pSVar1 = (String*)*param_2;
               local_120 = 0;
               String::parse_latin1((String*)&local_120, "open_shaders");
               local_128 = 0;
               String::parse_latin1((String*)&local_128, "ShaderEditor");
               ConfigFile::get_value((String*)local_58, pSVar1, (Variant*)&local_128);
               Variant::operator_cast_to_Array((Variant*)&local_140);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               local_70 = (undefined1[16])0x0;
               local_78[0] = 0;
               local_78[1] = 0;
               pSVar1 = (String*)*param_2;
               local_120 = 0;
               String::parse_latin1((String*)&local_120, "selected_shader");
               local_128 = 0;
               String::parse_latin1((String*)&local_128, "ShaderEditor");
               ConfigFile::get_value((String*)local_58, pSVar1, (Variant*)&local_128);
               Variant::operator_cast_to_String((Variant*)&local_138);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               iVar5 = 0;
               for (iVar7 = 0; iVar6 = Array::size(),iVar7 < iVar6; iVar7 = iVar7 + 1) {
                  Array::operator []((int)(Variant*)&local_140);
                  Variant::operator_cast_to_String((Variant*)&local_130);
                  local_120 = 0;
                  String::parse_latin1((String*)&local_120, "");
                  ResourceLoader::load((String*)&local_128, (String*)&local_130, (String*)&local_120, 1, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
                  if (local_128 != 0) {
                     ( **(code**)( *(long*)this + 0x220 ) )(this);
                  }

                  cVar4 = String::operator ==((String*)&local_138, (String*)&local_130);
                  if (cVar4 != '\0') {
                     iVar5 = iVar7;
                  }

                  Ref<Resource>::unref((Ref<Resource>*)&local_128);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
               }

               local_120 = 0;
               pSVar1 = (String*)*param_2;
               String::parse_latin1((String*)&local_120, "split_offset");
               local_128 = 0;
               String::parse_latin1((String*)&local_128, "ShaderEditor");
               cVar4 = ConfigFile::has_section_key(pSVar1, (String*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               if (cVar4 != '\0') {
                  uVar2 = *(undefined8*)( this + 0x670 );
                  local_70 = (undefined1[16])0x0;
                  local_78[0] = 0;
                  local_78[1] = 0;
                  pSVar1 = (String*)*param_2;
                  local_120 = 0;
                  String::parse_latin1((String*)&local_120, "split_offset");
                  local_128 = 0;
                  String::parse_latin1((String*)&local_128, "ShaderEditor");
                  ConfigFile::get_value((String*)local_58, pSVar1, (Variant*)&local_128);
                  Variant::operator_cast_to_int((Variant*)local_58);
                  SplitContainer::set_split_offset((int)uVar2);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               _update_shader_list(this);
               _shader_selected(this, iVar5);
               pSVar1 = (String*)*param_2;
               Variant::Variant((Variant*)local_78, _LC82);
               local_120 = 0;
               String::parse_latin1((String*)&local_120, "text_shader_zoom_factor");
               local_128 = 0;
               String::parse_latin1((String*)&local_128, "ShaderEditor");
               ConfigFile::get_value((String*)local_58, pSVar1, (Variant*)&local_128);
               fVar8 = Variant::operator_cast_to_float((Variant*)local_58);
               if (fVar8 != *(float*)( this + 0x6c0 )) {
                  _set_text_shader_zoom_factor(this, fVar8);
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               Array::~Array((Array*)&local_140);
            }

         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderEditorPlugin::_res_saved_callback(Ref<Resource> const&) */void ShaderEditorPlugin::_res_saved_callback(ShaderEditorPlugin *this, Ref *param_1) {
   long *plVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   long lVar5;
   long *plVar6;
   long in_FS_OFFSET;
   String local_60[8];
   Object *local_58;
   CowData<char32_t> local_50[8];
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 != 0) {
      Resource::get_path();
      plVar6 = *(long**)( this + 0x668 );
      plVar1 = plVar6 + ( ulong ) * (uint*)( this + 0x660 ) * 5;
      for (; plVar6 != plVar1; plVar6 = plVar6 + 5) {
         local_58 = (Object*)0x0;
         if (( *plVar6 == 0 ) || ( pOVar4 = (Object*)__dynamic_cast(*plVar6, &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar4 == (Object*)0x0) {
            LAB_001031e3:if (( plVar6[1] != 0 ) && ( pOVar4 = (Object*)__dynamic_cast(plVar6[1], &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar4 != (Object*)0x0) {
               local_58 = pOVar4;
               cVar2 = RefCounted::reference();
               if (cVar2 != '\0') goto LAB_00103230;
               local_58 = (Object*)0x0;
            }

            _err_print_error("_res_saved_callback", "editor/plugins/shader_editor_plugin.cpp", 0x2ea, "Condition \"shader_res.is_null()\" is true.", 0, 0);
            Ref<Resource>::unref((Ref<Resource>*)&local_58);
            break;
         }

         local_58 = pOVar4;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_58 = (Object*)0x0;
            goto LAB_001031e3;
         }

         LAB_00103230:if (( plVar6[2] == 0 ) || ( lVar5 = __dynamic_cast(plVar6[2], &Object::typeinfo, &TextShaderEditor::typeinfo, 0) ),lVar5 == 0) {
            LAB_00103390:Ref<Resource>::unref((Ref<Resource>*)&local_58);
         }
 else {
            if (( *(long*)( pOVar4 + 0x188 ) != 0 ) && ( 1 < *(uint*)( *(long*)( pOVar4 + 0x188 ) + -8 ) )) {
               iVar3 = String::find((char*)( pOVar4 + 0x188 ), 0x10839b);
               if (( iVar3 == -1 ) && ( cVar2 = String::begins_with((char*)( pOVar4 + 0x188 )) ),cVar2 == '\0') goto LAB_00103390;
            }

            Resource::get_path();
            String::get_slice((char*)local_48, (int)local_50);
            cVar2 = String::operator ==(local_48, local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
            CowData<char32_t>::_unref(local_50);
            if (cVar2 == '\0') {
               cVar2 = RefCounted::unreference();
            }
 else {
               TextShaderEditor::tag_saved_version();
               _update_shader_list(this);
               cVar2 = RefCounted::unreference();
            }

            if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderEditorPlugin::_menu_item_pressed(int) */void ShaderEditorPlugin::_menu_item_pressed(ShaderEditorPlugin *this, int param_1) {
   uint uVar1;
   code *pcVar2;
   Ref *pRVar3;
   Object *pOVar4;
   long *plVar5;
   char cVar6;
   uint uVar7;
   int iVar8;
   int iVar9;
   char *pcVar10;
   String *pSVar11;
   ulong uVar12;
   long lVar13;
   long lVar14;
   String *pSVar15;
   undefined8 *puVar16;
   long lVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   Ref *local_78;
   CowData<char32_t> local_60[8];
   long local_58;
   long local_50[4];
   pSVar15 = InspectorDock::singleton;
   local_50[2] = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_1) {
      case 0:
    FileSystemDock::get_current_path();
    String::get_base_dir();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    local_58 = 0;
    pSVar11 = *(String **)(this + 0x6b8);
    String::parse_latin1((String *)&local_58,"new_shader");
    String::path_join((String *)local_50);
    iVar8 = 0;
    goto LAB_0010357f;
      case 1:
    FileSystemDock::get_current_path();
    String::get_base_dir();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    local_58 = 0;
    pSVar11 = *(String **)(this + 0x6b8);
    String::parse_latin1((String *)&local_58,"new_shader");
    String::path_join((String *)local_50);
    iVar8 = 2;
LAB_0010357f:
    pSVar15 = (String *)local_60;
    ShaderCreateDialog::config(pSVar11,SUB81((CowData<char32_t> *)local_50,0),false,0,iVar8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_50[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0x6b8));
LAB_001035b8:
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar15);
    break;
      case 2:
    pcVar10 = "Shader";
    goto LAB_0010365c;
      case 3:
    pcVar10 = "ShaderInclude";
LAB_0010365c:
    local_50[0] = 0;
    String::parse_latin1((String *)local_50,pcVar10);
    InspectorDock::open_resource(pSVar15);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    break;
      case 4:
    uVar7 = TabContainer::get_current_tab();
    if (((int)uVar7 < 0) || (iVar8 = TabContainer::get_tab_count(), iVar8 <= (int)uVar7)) {
      iVar8 = TabContainer::get_tab_count();
      _err_print_index_error
                ("_menu_item_pressed","editor/plugins/shader_editor_plugin.cpp",499,(long)(int)uVar7
                 ,(long)iVar8,"index","shader_tabs->get_tab_count()","",false,false);
    }
    else {
      uVar12 = (ulong)*(uint *)(this + 0x660);
      if (*(uint *)(this + 0x660) <= uVar7) {
LAB_00103b38:
        uVar18 = (ulong)(int)uVar7;
        goto LAB_00103b56;
      }
      uVar18 = (ulong)(int)uVar7;
      puVar16 = (undefined8 *)(*(long *)(this + 0x668) + uVar18 * 0x28);
      lVar14 = puVar16[2];
      if ((lVar14 != 0) &&
         (lVar14 = __dynamic_cast(lVar14,&Object::typeinfo,&TextShaderEditor::typeinfo,0),
         lVar14 != 0)) {
        if (*(char *)(lVar14 + 0xa3c) == '\0') {
          if (*(char *)(lVar14 + 0xa3d) == '\0') goto LAB_00103736;
LAB_00103d53:
          TextShaderEditor::trim_final_newlines();
        }
        else {
          TextShaderEditor::trim_trailing_whitespace();
          if (*(char *)(lVar14 + 0xa3d) != '\0') goto LAB_00103d53;
        }
        uVar12 = (ulong)*(uint *)(this + 0x660);
        if (*(uint *)(this + 0x660) <= uVar7) goto LAB_00103b56;
        puVar16 = (undefined8 *)(*(long *)(this + 0x668) + uVar18 * 0x28);
      }
LAB_00103736:
      pRVar3 = EditorNode::singleton;
      local_50[0] = 0;
      if ((Ref *)*puVar16 == (Ref *)0x0) {
        Ref<Resource>::operator=((Ref<Resource> *)local_50,(Ref *)puVar16[1]);
      }
      else {
        Ref<Resource>::operator=((Ref<Resource> *)local_50,(Ref *)*puVar16);
      }
      EditorNode::save_resource(pRVar3);
      Ref<Resource>::unref((Ref<Resource> *)local_50);
      if (lVar14 != 0) {
        if (local_50[2] == *(long *)(in_FS_OFFSET + 0x28)) {
          TextShaderEditor::tag_saved_version();
          return;
        }
        goto LAB_00103e14;
      }
    }
    break;
      case 5:
    uVar7 = TabContainer::get_current_tab();
    if (((int)uVar7 < 0) || (iVar8 = TabContainer::get_tab_count(), iVar8 <= (int)uVar7)) {
      iVar8 = TabContainer::get_tab_count();
      _err_print_index_error
                ("_menu_item_pressed","editor/plugins/shader_editor_plugin.cpp",0x209,
                 (long)(int)uVar7,(long)iVar8,"index","shader_tabs->get_tab_count()","",false,false)
      ;
      break;
    }
    uVar12 = (ulong)*(uint *)(this + 0x660);
    if (*(uint *)(this + 0x660) <= uVar7) goto LAB_00103b38;
    uVar18 = (ulong)(int)uVar7;
    lVar13 = *(long *)(this + 0x668);
    lVar17 = uVar18 * 0x28;
    lVar14 = *(long *)(lVar13 + 0x10 + lVar17);
    if ((lVar14 == 0) ||
       (lVar14 = __dynamic_cast(lVar14,&Object::typeinfo,&TextShaderEditor::typeinfo,0), lVar14 == 0
       )) {
      lVar14 = 0;
    }
    else {
      if (*(char *)(lVar14 + 0xa3c) != '\0') {
        TextShaderEditor::trim_trailing_whitespace();
      }
      if (*(char *)(lVar14 + 0xa3d) != '\0') {
        TextShaderEditor::trim_final_newlines();
      }
      local_58 = 0;
      uVar12 = (ulong)*(uint *)(this + 0x660);
      if (*(uint *)(this + 0x660) <= uVar7) goto LAB_00103b56;
      lVar13 = *(long *)(this + 0x668);
    }
    local_58 = 0;
    if (*(long *)(lVar13 + lVar17) == 0) {
      Resource::get_path();
      if (local_58 != local_50[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        local_58 = local_50[0];
        local_50[0] = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      cVar6 = String::is_resource_file();
      if (cVar6 == '\0') {
        String::parse_latin1((String *)&local_58,"");
      }
      uVar12 = (ulong)*(uint *)(this + 0x660);
      local_78 = EditorNode::singleton;
      if (*(uint *)(this + 0x660) <= uVar7) goto LAB_00103b56;
      local_50[0] = 0;
      Ref<Resource>::operator=
                ((Ref<Resource> *)local_50,*(Ref **)(lVar17 + *(long *)(this + 0x668) + 8));
    }
    else {
      Resource::get_path();
      if (local_58 != local_50[0]) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        local_58 = local_50[0];
        local_50[0] = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      cVar6 = String::is_resource_file();
      if (cVar6 == '\0') {
        String::parse_latin1((String *)&local_58,"");
      }
      uVar12 = (ulong)*(uint *)(this + 0x660);
      local_78 = EditorNode::singleton;
      if (*(uint *)(this + 0x660) <= uVar7) goto LAB_00103b56;
      local_50[0] = 0;
      Ref<Resource>::operator=
                ((Ref<Resource> *)local_50,*(Ref **)(lVar17 + *(long *)(this + 0x668)));
    }
    pSVar15 = (String *)&local_58;
    EditorNode::save_resource_as(local_78,(String *)local_50);
    Ref<Resource>::unref((Ref<Resource> *)local_50);
    if (lVar14 != 0) {
      TextShaderEditor::tag_saved_version();
    }
    goto LAB_001035b8;
      case 6:
    uVar7 = TabContainer::get_current_tab();
    if ((-1 < (int)uVar7) &&
       (iVar8 = TabContainer::get_tab_count(), pOVar4 = (Object *)EditorNode::singleton,
       (int)uVar7 < iVar8)) {
      uVar12 = (ulong)*(uint *)(this + 0x660);
      if (*(uint *)(this + 0x660) <= uVar7) goto LAB_00103b38;
      uVar18 = (ulong)(int)uVar7;
      pSVar15 = (String *)local_50;
      lVar14 = uVar18 * 0x28;
      local_50[0] = 0;
      if (*(long *)(*(long *)(this + 0x668) + lVar14) == 0) {
        String::parse_latin1(pSVar15,"");
        uVar1 = *(uint *)(this + 0x660);
        if (uVar1 <= uVar7) goto LAB_00103dc0;
        pSVar11 = *(String **)(*(long *)(this + 0x668) + 8 + lVar14);
      }
      else {
        String::parse_latin1(pSVar15,"");
        uVar1 = *(uint *)(this + 0x660);
        if (uVar1 <= uVar7) {
LAB_00103dc0:
          uVar12 = (ulong)uVar1;
LAB_00103b56:
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xb2,uVar18,uVar12,"p_index",
                     "count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        pSVar11 = *(String **)(*(long *)(this + 0x668) + lVar14);
      }
      EditorNode::push_item(pOVar4,pSVar11,SUB81(pSVar15,0));
      goto LAB_001035b8;
    }
    iVar8 = TabContainer::get_tab_count();
    _err_print_index_error
              ("_menu_item_pressed","editor/plugins/shader_editor_plugin.cpp",0x228,(long)(int)uVar7
               ,(long)iVar8,"index","shader_tabs->get_tab_count()","",false,false);
    break;
      case 7:
    uVar7 = TabContainer::get_current_tab();
    uVar12 = (ulong)*(uint *)(this + 0x660);
    if (*(uint *)(this + 0x660) <= uVar7) {
      uVar18 = (ulong)uVar7;
      goto LAB_00103b56;
    }
    if (*(long *)(*(long *)(this + 0x668) + (ulong)uVar7 * 0x28) != 0) {
      if (local_50[2] == *(long *)(in_FS_OFFSET + 0x28)) {
        Shader::inspect_native_shader_code();
        return;
      }
      goto LAB_00103e14;
    }
    break;
      case 8:
    iVar8 = TabContainer::get_current_tab();
    if (local_50[2] == *(long *)(in_FS_OFFSET + 0x28)) {
      _close_shader(this,iVar8);
      return;
    }
    goto LAB_00103e14;
      case 9:
    while (iVar8 = TabContainer::get_tab_count(), 0 < iVar8) {
      _close_shader(this,0);
    }
    break;
      case 10:
    iVar9 = 0;
    iVar8 = TabContainer::get_current_tab();
    if (0 < iVar8) {
      do {
        iVar9 = iVar9 + 1;
        _close_shader(this,0);
      } while (iVar8 != iVar9);
    }
    while (iVar8 = TabContainer::get_tab_count(), 1 < iVar8) {
      _close_shader(this,1);
    }
    break;
      case 0xb:
    _get_current_shader();
    Resource::get_path();
    if ((local_50[0] != 0) && (1 < *(uint *)(local_50[0] + -8))) {
      FileSystemDock::navigate_to_path(FileSystemDock::singleton);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    Ref<Resource>::unref((Ref<Resource> *)&local_58);
    break;
      case 0xc:
    _get_current_shader();
    plVar5 = DisplayServer::singleton;
    pcVar2 = *(code **)(*DisplayServer::singleton + 0x3b0);
    Resource::get_path();
    (*pcVar2)(plVar5,(CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    Ref<Resource>::unref((Ref<Resource> *)&local_58);
   }

   if (local_50[2] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103e14:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShaderEditorPlugin::_setup_popup_menu(ShaderEditorPlugin::PopupMenuType, PopupMenu*) */void ShaderEditorPlugin::_setup_popup_menu(undefined8 param_1, int param_2, Ref *param_3) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "New Shader...");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "shader_editor/new");
      ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0x100004e, 0);
      iVar3 = (int)(Ref<Shortcut>*)&local_48;
      PopupMenu::add_shortcut(param_3, iVar3, false, false);
      Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "New Shader Include...");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "shader_editor/new_include");
      ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0x300004e, 0);
      PopupMenu::add_shortcut(param_3, iVar3, true, false);
      Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_48 = (Object*)0x0;
      PopupMenu::add_separator((String*)param_3, iVar3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "Load Shader File...");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "shader_editor/open");
      ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0x100004f, 0);
      PopupMenu::add_shortcut(param_3, iVar3, true, false);
      Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "Load Shader Include File...");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "shader_editor/open_include");
      ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0x300004f, 0);
      PopupMenu::add_shortcut(param_3, iVar3, true, false);
      Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      LAB_001041db:local_50 = 0;
      String::parse_latin1((String*)&local_50, "Save File");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "shader_editor/save");
      ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0x5000053, 0);
      iVar3 = (int)(Ref<Shortcut>*)&local_48;
      PopupMenu::add_shortcut(param_3, iVar3, true, false);
      Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "Save File As...");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "shader_editor/save_as");
      ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0, 0);
      PopupMenu::add_shortcut(param_3, iVar3, true, false);
      Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      if (param_2 == 0) {
         local_48 = (Object*)0x0;
         PopupMenu::add_separator((String*)param_3, iVar3);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "");
         local_58 = 0;
         String::parse_latin1((String*)&local_58, "Open File in Inspector");
         TTR((String*)&local_48, (String*)&local_58);
         PopupMenu::add_item(param_3, (Ref<Shortcut>*)&local_48, 6, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "");
         local_58 = 0;
         String::parse_latin1((String*)&local_58, "Inspect Native Shader Code...");
         TTR((String*)&local_48, (String*)&local_58);
         PopupMenu::add_item(param_3, (Ref<Shortcut>*)&local_48, 7, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         local_48 = (Object*)0x0;
         PopupMenu::add_separator((String*)param_3, iVar3);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Close File");
         local_58 = 0;
         String::parse_latin1((String*)&local_58, "shader_editor/close_file");
         ED_SHORTCUT((Ref<Shortcut>*)&local_48, &local_58, (String*)&local_50, 0x1000057, 0);
         PopupMenu::add_shortcut(param_3, iVar3, true, false);
         Ref<Shortcut>::unref((Ref<Shortcut>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         goto LAB_00103fbe;
      }

   }
 else if (param_2 == 2) goto LAB_001041db;
   local_50 = 0;
   String::parse_latin1((String*)&local_50, "Close File");
   local_58 = 0;
   String::parse_latin1((String*)&local_58, "shader_editor/close_file");
   ED_SHORTCUT((String*)&local_48, &local_58, (String*)&local_50, 0x1000057, 0);
   iVar3 = (int)(String*)&local_48;
   PopupMenu::add_shortcut(param_3, iVar3, true, false);
   if (local_48 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_48;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_48);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_50 = 0;
   String::parse_latin1((String*)&local_50, "");
   local_58 = 0;
   String::parse_latin1((String*)&local_58, "Close All");
   TTR((String*)&local_48, (String*)&local_58);
   PopupMenu::add_item(param_3, (String*)&local_48, 9, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_50 = 0;
   String::parse_latin1((String*)&local_50, "");
   local_58 = 0;
   String::parse_latin1((String*)&local_58, "Close Other Tabs");
   TTR((String*)&local_48, (String*)&local_58);
   PopupMenu::add_item(param_3, (String*)&local_48, 10, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (param_2 == 2) {
      local_48 = (Object*)0x0;
      PopupMenu::add_separator((String*)param_3, iVar3);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "Copy Script Path");
      TTR((String*)&local_48, (String*)&local_58);
      PopupMenu::add_item(param_3, (String*)&local_48, 0xc, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      local_50 = 0;
      String::parse_latin1((String*)&local_50, "");
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "Show in FileSystem");
      TTR((String*)&local_48, (String*)&local_58);
      PopupMenu::add_item(param_3, (String*)&local_48, 0xb, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   LAB_00103fbe:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_make_script_list_context_menu() */void ShaderEditorPlugin::_make_script_list_context_menu(ShaderEditorPlugin *this) {
   Vector2i *pVVar1;
   bool bVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   long in_FS_OFFSET;
   undefined8 uVar8;
   undefined8 local_40;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   PopupMenu::clear(SUB81(*(undefined8*)( this + 0x6a0 ), 0));
   iVar3 = TabContainer::get_current_tab();
   if (iVar3 < 0) goto LAB_001045d2;
   iVar4 = TabContainer::get_tab_count();
   if (iVar4 <= iVar3) goto LAB_001045d2;
   lVar5 = TabContainer::get_tab_control((int)*(undefined8*)( this + 0x688 ));
   if (lVar5 == 0) {
      LAB_00104760:uVar8 = *(undefined8*)( this + 0x6a0 );
      uVar7 = 1;
   }
 else {
      lVar6 = __dynamic_cast(lVar5, &Object::typeinfo, &TextShaderEditor::typeinfo, 0);
      if (lVar6 == 0) {
         lVar5 = __dynamic_cast(lVar5, &Object::typeinfo, &VisualShaderEditor::typeinfo, 0);
         if (lVar5 == 0) goto LAB_00104760;
      }

      uVar8 = *(undefined8*)( this + 0x6a0 );
      uVar7 = 2;
   }

   _setup_popup_menu(this, uVar7, uVar8);
   uVar8 = *(undefined8*)( this + 0x6a0 );
   TabContainer::get_tab_count();
   bVar2 = (bool)PopupMenu::get_item_index((int)*(undefined8*)( this + 0x6a0 ));
   PopupMenu::set_item_disabled((int)uVar8, bVar2);
   uVar8 = *(undefined8*)( this + 0x6a0 );
   TabContainer::get_tab_count();
   bVar2 = (bool)PopupMenu::get_item_index((int)*(undefined8*)( this + 0x6a0 ));
   PopupMenu::set_item_disabled((int)uVar8, bVar2);
   pVVar1 = *(Vector2i**)( this + 0x6a0 );
   uVar8 = CanvasItem::get_local_mouse_position();
   uVar7 = Control::get_screen_position();
   local_40 = CONCAT44((float)( (ulong)uVar7 >> 0x20 ) + (float)( (ulong)uVar8 >> 0x20 ), (float)uVar7 + (float)uVar8);
   local_38 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_40);
   Window::set_position(pVVar1);
   Window::reset_size();
   local_38 = 0;
   local_30 = 0;
   ( **(code**)( **(long**)( this + 0x6a0 ) + 0x240 ) )(*(long**)( this + 0x6a0 ), &local_38);
   LAB_001045d2:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_shader_list_clicked(int, Vector2, MouseButton) */void ShaderEditorPlugin::_shader_list_clicked(ShaderEditorPlugin *param_1, int param_2, int param_3) {
   if (param_3 == 3) {
      _close_shader(param_1, param_2);
      return;
   }

   if (param_3 != 2) {
      return;
   }

   _make_script_list_context_menu(param_1);
   return;
}
/* ShaderEditorPlugin::ShaderEditorPlugin() */void ShaderEditorPlugin::ShaderEditorPlugin(ShaderEditorPlugin *this) {
   String *pSVar1;
   code *pcVar2;
   long lVar3;
   Vector2 *pVVar4;
   undefined8 uVar5;
   char cVar6;
   WindowWrapper *this_00;
   SplitContainer *this_01;
   BoxContainer *pBVar7;
   MenuButton *this_02;
   undefined8 uVar8;
   long *plVar9;
   PopupMenu *this_03;
   Control *this_04;
   ScreenSelect *this_05;
   CallableCustom *pCVar10;
   ItemList *this_06;
   TabContainer *this_07;
   StyleBox *this_08;
   ShaderCreateDialog *this_09;
   Object *pOVar11;
   StyleBox *pSVar12;
   StringName *pSVar13;
   long in_FS_OFFSET;
   float fVar14;
   Ref<Shortcut> local_f8[8];
   CowData<char32_t> local_f0[8];
   undefined8 local_e8[2];
   undefined8 local_d8[2];
   undefined8 local_c8[2];
   long local_b8[2];
   long local_a8[2];
   Object *local_98[2];
   Variant *local_88;
   undefined8 local_78[3];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::Node((Node*)this);
   *(code**)this = Variant::Variant;
   *(undefined2*)( this + 0x408 ) = 0;
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x420 ), "_forward_canvas_gui_input", false);
   this[0x428] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
   this[0x440] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
   this[0x458] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
   this[0x470] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x478 ) = 0;
   StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
   this[0x488] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x490 ) = 0;
   StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
   this[0x4a0] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x4a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
   this[0x4b8] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
   this[0x4d0] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
   this[0x4e8] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x4f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
   this[0x500] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x508 ) = 0;
   StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
   this[0x518] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x520 ) = 0;
   StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
   this[0x530] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x538 ) = 0;
   StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
   this[0x548] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x550 ) = 0;
   StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
   this[0x560] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x568 ) = 0;
   StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
   this[0x578] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x580 ) = 0;
   StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
   this[0x590] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x598 ) = 0;
   StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
   this[0x5a8] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
   this[0x5c0] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x5c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
   this[0x5d8] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
   this[0x5f0] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
   this[0x608] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x610 ) = 0;
   StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
   this[0x620] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x628 ) = 0;
   StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
   this[0x638] = (ShaderEditorPlugin)0x0;
   *(undefined8*)( this + 0x640 ) = 0;
   StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
   this[0x650] = (ShaderEditorPlugin)0x0;
   *(undefined***)this = &PTR__initialize_classv_00115c80;
   *(undefined8*)( this + 0x658 ) = 0;
   *(undefined8*)( this + 0x660 ) = 0;
   *(undefined8*)( this + 0x6b8 ) = 0;
   *(undefined4*)( this + 0x6c0 ) = 0x3f800000;
   for (int i = 0; i < 5; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 1640 ) ) = (undefined1[16])0;
   }

   this_00 = (WindowWrapper*)operator_new(0xa48, "");
   WindowWrapper::WindowWrapper(this_00);
   postinitialize_handler((Object*)this_00);
   *(WindowWrapper**)( this + 0x6a8 ) = this_00;
   local_98[0] = (Object*)0x0;
   String::parse_latin1((String*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String*)local_a8, "Shader Editor");
   TTR((String*)local_b8, (String*)local_a8);
   local_c8[0] = 0;
   String::parse_latin1((String*)local_c8, "");
   local_d8[0] = 0;
   String::parse_latin1((String*)local_d8, "%s - Godot Engine");
   TTR((String*)local_e8, (String*)local_d8);
   vformat<String>(local_f0, (String*)local_e8, (String*)local_b8);
   WindowWrapper::set_window_title((String*)this_00);
   CowData<char32_t>::_unref(local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   WindowWrapper::set_margins_enabled(SUB81(*(undefined8*)( this + 0x6a8 ), 0));
   this_01 = (SplitContainer*)operator_new(0xa70, "");
   SplitContainer::SplitContainer(this_01, false);
   this_01[0xa68] = (SplitContainer)0x1;
   *(undefined***)this_01 = &PTR__initialize_classv_00115908;
   postinitialize_handler((Object*)this_01);
   *(SplitContainer**)( this + 0x670 ) = this_01;
   EditorScale::get_scale();
   SplitContainer::set_split_offset((int)this_01);
   local_98[0] = (Object*)0x0;
   String::parse_latin1((String*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String*)local_a8, "Make Floating");
   local_b8[0] = 0;
   String::parse_latin1((String*)local_b8, "shader_editor/make_floating");
   ED_SHORTCUT_AND_COMMAND(local_f8, (String*)local_b8, (String*)local_a8, 0, (String*)local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   WindowWrapper::set_wrapped_control(*(Control**)( this + 0x6a8 ), *(Ref**)( this + 0x670 ));
   pBVar7 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar7, true);
   pBVar7[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar7 = &PTR__initialize_classv_00115590;
   postinitialize_handler((Object*)pBVar7);
   *(BoxContainer**)( this + 0x678 ) = pBVar7;
   pBVar7 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar7, false);
   pBVar7[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar7 = &PTR__initialize_classv_00115218;
   postinitialize_handler((Object*)pBVar7);
   Node::add_child(*(undefined8*)( this + 0x678 ), pBVar7, 0, 0);
   this_02 = (MenuButton*)operator_new(0xc68, "");
   local_98[0] = (Object*)0x0;
   MenuButton::MenuButton(this_02, (String*)local_98);
   postinitialize_handler((Object*)this_02);
   *(MenuButton**)( this + 0x698 ) = this_02;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   pSVar1 = *(String**)( this + 0x698 );
   local_98[0] = (Object*)0x0;
   String::parse_latin1((String*)local_98, "");
   local_a8[0] = 0;
   String::parse_latin1((String*)local_a8, "File");
   TTR((String*)local_b8, (String*)local_a8);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   Control::set_shortcut_context(*(Node**)( this + 0x698 ));
   uVar8 = MenuButton::get_popup();
   _setup_popup_menu(this, 0, uVar8);
   plVar9 = (long*)MenuButton::get_popup();
   pcVar2 = *(code**)( *plVar9 + 0x108 );
   create_custom_callable_function_pointer<ShaderEditorPlugin,int>((ShaderEditorPlugin*)local_98, (char*)this, (_func_void_int*)"&ShaderEditorPlugin::_menu_item_pressed");
   ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (String*)local_98);
   Callable::~Callable((Callable*)local_98);
   Node::add_child(pBVar7, *(undefined8*)( this + 0x698 ), 0, 0);
   _set_file_specific_items_disabled(SUB81(this, 0));
   this_03 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(this_03);
   postinitialize_handler((Object*)this_03);
   *(PopupMenu**)( this + 0x6a0 ) = this_03;
   Node::add_child(this, this_03, 0, 0);
   plVar9 = *(long**)( this + 0x6a0 );
   pcVar2 = *(code**)( *plVar9 + 0x108 );
   create_custom_callable_function_pointer<ShaderEditorPlugin,int>((ShaderEditorPlugin*)local_98, (char*)this, (_func_void_int*)"&ShaderEditorPlugin::_menu_item_pressed");
   ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x240, (String*)local_98);
   Callable::~Callable((Callable*)local_98);
   this_04 = (Control*)operator_new(0x9c8, "");
   Control::Control(this_04);
   postinitialize_handler((Object*)this_04);
   Control::set_h_size_flags(this_04, 3);
   Node::add_child(pBVar7, this_04, 0, 0);
   this_05 = (ScreenSelect*)operator_new(0xc20, "");
   ScreenSelect::ScreenSelect(this_05);
   postinitialize_handler((Object*)this_05);
   *(ScreenSelect**)( this + 0x6b0 ) = this_05;
   Button::set_flat(SUB81(this_05, 0));
   plVar9 = *(long**)( this + 0x6b0 );
   lVar3 = *(long*)( this + 0x6a8 );
   pcVar2 = *(code**)( *plVar9 + 0x108 );
   pCVar10 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar10);
   *(undefined**)( pCVar10 + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( pCVar10 + 0x40 ) = 0;
   *(long*)( pCVar10 + 0x28 ) = lVar3;
   uVar8 = *(undefined8*)( lVar3 + 0x60 );
   *(undefined***)pCVar10 = &PTR_hash_00116288;
   *(undefined8*)( pCVar10 + 0x30 ) = uVar8;
   *(undefined8*)( pCVar10 + 0x10 ) = 0;
   *(code**)( pCVar10 + 0x38 ) = WindowWrapper::enable_window_on_screen;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);
   *(char**)( pCVar10 + 0x20 ) = "WindowWrapper::enable_window_on_screen";
   Callable::Callable((Callable*)local_98, pCVar10);
   Variant::Variant((Variant*)local_78, true);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   local_88 = (Variant*)local_78;
   Callable::bindp((Variant**)local_a8, (int)(String*)local_98);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   StringName::StringName((StringName*)local_b8, "request_open_in_screen", false);
   ( *pcVar2 )(plVar9, (String*)local_b8, (String*)local_a8, 0);
   if (( StringName::configured != '\0' ) && ( local_b8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)local_98);
   cVar6 = BaseButton::is_disabled();
   if (cVar6 == '\0') {
      pSVar1 = *(String**)( this + 0x6b0 );
      local_98[0] = (Object*)0x0;
      String::parse_latin1((String*)local_98, "");
      local_a8[0] = 0;
      String::parse_latin1((String*)local_a8, "Make the shader editor floating.\nRight-click to open the screen selector.");
      TTR((String*)local_b8, (String*)local_a8);
      Control::set_tooltip_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   }

   Node::add_child(pBVar7, *(undefined8*)( this + 0x6b0 ), 0, 0);
   plVar9 = *(long**)( this + 0x6a8 );
   pcVar2 = *(code**)( *plVar9 + 0x108 );
   pCVar10 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar10);
   *(undefined**)( pCVar10 + 0x20 ) = &_LC4;
   *(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar10 = &PTR_hash_00116318;
   *(undefined8*)( pCVar10 + 0x40 ) = 0;
   uVar8 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar10 + 0x10 ) = 0;
   *(undefined8*)( pCVar10 + 0x30 ) = uVar8;
   *(code**)( pCVar10 + 0x38 ) = _window_changed;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);
   *(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::_window_changed";
   Callable::Callable((Callable*)local_98, pCVar10);
   StringName::StringName((StringName*)local_a8, "window_visibility_changed", false);
   ( *pcVar2 )(plVar9, (String*)local_a8, (String*)local_98, 0);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_98);
   this_06 = (ItemList*)operator_new(0xb80, "");
   ItemList::ItemList(this_06);
   postinitialize_handler((Object*)this_06);
   *(ItemList**)( this + 0x680 ) = this_06;
   Node::set_auto_translate_mode(this_06, 2);
   Control::set_v_size_flags(*(undefined8*)( this + 0x680 ), 3);
   pSVar13 = *(StringName**)( this + 0x680 );
   StringName::StringName((StringName*)local_98, "ItemListSecondary", false);
   Control::set_theme_type_variation(pSVar13);
   if (( StringName::configured != '\0' ) && ( local_98[0] != (Object*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(*(undefined8*)( this + 0x678 ), *(undefined8*)( this + 0x680 ), 0, 0);
   plVar9 = *(long**)( this + 0x680 );
   pcVar2 = *(code**)( *plVar9 + 0x108 );
   create_custom_callable_function_pointer<ShaderEditorPlugin,int>((ShaderEditorPlugin*)local_98, (char*)this, (_func_void_int*)"&ShaderEditorPlugin::_shader_selected");
   ( *pcVar2 )(plVar9, SceneStringNames::singleton + 0x260, (String*)local_98, 0);
   Callable::~Callable((Callable*)local_98);
   plVar9 = *(long**)( this + 0x680 );
   pcVar2 = *(code**)( *plVar9 + 0x108 );
   pCVar10 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar10);
   *(undefined**)( pCVar10 + 0x20 ) = &_LC4;
   *(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar10 = &PTR_hash_001163a8;
   *(undefined8*)( pCVar10 + 0x40 ) = 0;
   uVar8 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar10 + 0x10 ) = 0;
   *(undefined8*)( pCVar10 + 0x30 ) = uVar8;
   *(code**)( pCVar10 + 0x38 ) = _shader_list_clicked;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);
   *(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::_shader_list_clicked";
   Callable::Callable((Callable*)local_98, pCVar10);
   StringName::StringName((StringName*)local_a8, "item_clicked", false);
   ( *pcVar2 )(plVar9, (String*)local_a8, (String*)local_98, 0);
   if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_98);
   ItemList::set_allow_rmb_select(SUB81(*(undefined8*)( this + 0x680 ), 0));
   plVar9 = *(long**)( this + 0x680 );
   pcVar2 = *(code**)( *plVar9 + 0x318 );
   pCVar10 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar10);
   *(undefined**)( pCVar10 + 0x20 ) = &_LC4;
   *(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar10 = &PTR_hash_00116558;
   *(undefined8*)( pCVar10 + 0x40 ) = 0;
   uVar8 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar10 + 0x10 ) = 0;
   *(undefined8*)( pCVar10 + 0x30 ) = uVar8;
   *(code**)( pCVar10 + 0x38 ) = drop_data_fw;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);
   *(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::drop_data_fw";
   Callable::Callable((Callable*)local_98, pCVar10);
   Callable::bind<ItemList*>((ItemList*)local_a8);
   pCVar10 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar10);
   *(undefined**)( pCVar10 + 0x20 ) = &_LC4;
   *(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar10 = &PTR_hash_001164c8;
   *(undefined8*)( pCVar10 + 0x40 ) = 0;
   uVar8 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar10 + 0x10 ) = 0;
   *(undefined8*)( pCVar10 + 0x30 ) = uVar8;
   *(code**)( pCVar10 + 0x38 ) = can_drop_data_fw;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);
   *(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::can_drop_data_fw";
   Callable::Callable((Callable*)local_b8, pCVar10);
   Callable::bind<ItemList*>((ItemList*)local_c8);
   pCVar10 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar10);
   *(undefined**)( pCVar10 + 0x20 ) = &_LC4;
   *(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar10 = &PTR_hash_00116438;
   *(undefined8*)( pCVar10 + 0x40 ) = 0;
   uVar8 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar10 + 0x10 ) = 0;
   *(undefined8*)( pCVar10 + 0x30 ) = uVar8;
   *(code**)( pCVar10 + 0x38 ) = get_drag_data_fw;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);
   *(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::get_drag_data_fw";
   Callable::Callable((Callable*)local_d8, pCVar10);
   Callable::bind<ItemList*>((ItemList*)local_e8);
   ( *pcVar2 )(plVar9, (String*)local_e8, (String*)local_c8, (String*)local_a8);
   Callable::~Callable((Callable*)local_e8);
   Callable::~Callable((Callable*)local_d8);
   Callable::~Callable((Callable*)local_c8);
   Callable::~Callable((Callable*)local_b8);
   Callable::~Callable((Callable*)local_a8);
   Callable::~Callable((Callable*)local_98);
   Node::add_child(*(undefined8*)( this + 0x670 ), *(undefined8*)( this + 0x678 ), 0, 0);
   pVVar4 = *(Vector2**)( this + 0x678 );
   fVar14 = (float)EditorScale::get_scale();
   local_78[0] = CONCAT44(fVar14 * _LC152._4_4_, fVar14 * (float)_LC152);
   Control::set_custom_minimum_size(pVVar4);
   this_07 = (TabContainer*)operator_new(0xb40, "");
   TabContainer::TabContainer(this_07);
   postinitialize_handler((Object*)this_07);
   *(TabContainer**)( this + 0x688 ) = this_07;
   fVar14 = (float)EditorScale::get_scale();
   local_78[0] = CONCAT44(fVar14 * _LC153._4_4_, fVar14 * (float)_LC153);
   Control::set_custom_minimum_size((Vector2*)this_07);
   TabContainer::set_tabs_visible(SUB81(*(undefined8*)( this + 0x688 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0x688 ), 3);
   Node::add_child(*(undefined8*)( this + 0x670 ), *(undefined8*)( this + 0x688 ), 0, 0);
   this_08 = (StyleBox*)operator_new(0x2b0, "");
   StyleBox::StyleBox(this_08);
   *(undefined***)this_08 = &PTR__initialize_classv_00115018;
   postinitialize_handler((Object*)this_08);
   cVar6 = RefCounted::init_ref();
   if (cVar6 != '\0') {
      cVar6 = RefCounted::reference();
      if (cVar6 != '\0') {
         cVar6 = RefCounted::unreference();
         pSVar12 = this_08;
         if (( cVar6 == '\0' ) || ( cVar6 = predelete_handler((Object*)this_08) ),cVar6 == '\0') {
            pSVar13 = *(StringName**)( this + 0x688 );
         }
 else {
            LAB_00105db0:( **(code**)( *(long*)this_08 + 0x140 ) )(this_08);
            Memory::free_static(this_08, false);
            pSVar13 = *(StringName**)( this + 0x688 );
            local_98[0] = (Object*)0x0;
            if (pSVar12 == (StyleBox*)0x0) goto LAB_0010595a;
         }

         local_98[0] = (Object*)0x0;
         pOVar11 = (Object*)__dynamic_cast(pSVar12, &Object::typeinfo, &StyleBox::typeinfo, 0);
         if (( pOVar11 != (Object*)0x0 ) && ( local_98[0] = pOVar11 ),cVar6 = RefCounted::reference(),cVar6 == '\0') {
            local_98[0] = (Object*)0x0;
         }

         goto LAB_0010595a;
      }

      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         pSVar12 = (StyleBox*)0x0;
         cVar6 = predelete_handler((Object*)this_08);
         if (cVar6 == '\0') {
            local_98[0] = (Object*)0x0;
            pSVar13 = *(StringName**)( this + 0x688 );
            goto LAB_0010595a;
         }

         goto LAB_00105db0;
      }

   }

   local_98[0] = (Object*)0x0;
   pSVar13 = *(StringName**)( this + 0x688 );
   pSVar12 = (StyleBox*)0x0;
   LAB_0010595a:Control::add_theme_style_override(pSVar13, (Ref*)( SceneStringNames::singleton + 600 ));
   if (( ( local_98[0] != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar11 = local_98[0],cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
   Memory::free_static(pOVar11, false);
}
uVar8 = *(undefined8*)( EditorNode::singleton + 0xa40 );local_98[0] = (Object*)0x0;String::parse_latin1((String*)local_98, "");local_a8[0] = 0;String::parse_latin1((String*)local_a8, "Toggle Shader Editor Bottom Panel");local_b8[0] = 0;String::parse_latin1((String*)local_b8, "bottom_panels/toggle_shader_editor_bottom_panel");ED_SHORTCUT_AND_COMMAND((String*)local_c8, (String*)local_b8, (String*)local_a8, 0x4000053, (String*)local_98);uVar5 = *(undefined8*)( this + 0x6a8 );local_d8[0] = 0;String::parse_latin1((String*)local_d8, "");local_e8[0] = 0;String::parse_latin1((String*)local_e8, "Shader Editor");TTR((String*)local_f0, (String*)local_e8);uVar8 = EditorBottomPanel::add_item(uVar8, local_f0, uVar5, (String*)local_c8, 0);*(undefined8*)( this + 0x690 ) = uVar8;CowData<char32_t>::_unref(local_f0);CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);Ref<Shortcut>::unref((Ref<Shortcut>*)local_c8);CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);CowData<char32_t>::_unref((CowData<char32_t>*)local_98);this_09 = (ShaderCreateDialog*)operator_new(0xe38, "");ShaderCreateDialog::ShaderCreateDialog(this_09);postinitialize_handler((Object*)this_09);*(ShaderCreateDialog**)( this + 0x6b8 ) = this_09;Node::add_child(*(undefined8*)( this + 0x670 ), this_09, 0, 0);plVar9 = *(long**)( this + 0x6b8 );pcVar2 = *(code**)( *plVar9 + 0x108 );pCVar10 = (CallableCustom*)operator_new(0x48, "");CallableCustom::CallableCustom(pCVar10);*(undefined**)( pCVar10 + 0x20 ) = &_LC4;*(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;*(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;*(undefined***)pCVar10 = &PTR_hash_001165e8;*(undefined8*)( pCVar10 + 0x40 ) = 0;uVar8 = *(undefined8*)( this + 0x60 );*(undefined8*)( pCVar10 + 0x10 ) = 0;*(undefined8*)( pCVar10 + 0x30 ) = uVar8;*(code**)( pCVar10 + 0x38 ) = _shader_created;CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);*(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::_shader_created";Callable::Callable((Callable*)local_98, pCVar10);StringName::StringName((StringName*)local_a8, "shader_created", false);( *pcVar2 )(plVar9, (String*)local_a8, (String*)local_98, 0);if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_98);plVar9 = *(long**)( this + 0x6b8 );pcVar2 = *(code**)( *plVar9 + 0x108 );pCVar10 = (CallableCustom*)operator_new(0x48, "");CallableCustom::CallableCustom(pCVar10);*(undefined**)( pCVar10 + 0x20 ) = &_LC4;*(ShaderEditorPlugin**)( pCVar10 + 0x28 ) = this;*(undefined1(*) [16])( pCVar10 + 0x30 ) = (undefined1[16])0x0;*(undefined***)pCVar10 = &PTR_hash_00116678;*(undefined8*)( pCVar10 + 0x40 ) = 0;uVar8 = *(undefined8*)( this + 0x60 );*(undefined8*)( pCVar10 + 0x10 ) = 0;*(undefined8*)( pCVar10 + 0x30 ) = uVar8;*(code**)( pCVar10 + 0x38 ) = _shader_include_created;CallableCustomMethodPointerBase::_setup((uint*)pCVar10, (int)pCVar10 + 0x28);*(char**)( pCVar10 + 0x20 ) = "ShaderEditorPlugin::_shader_include_created";Callable::Callable((Callable*)local_98, pCVar10);StringName::StringName((StringName*)local_a8, "shader_include_created", false);( *pcVar2 )(plVar9, (String*)local_a8, (String*)local_98, 0);if (( StringName::configured != '\0' ) && ( local_a8[0] != 0 )) {
   StringName::unref();
}
Callable::~Callable((Callable*)local_98);if (( ( pSVar12 != (StyleBox*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pSVar12 + 0x140 ))(pSVar12);Memory::free_static(pSVar12, false);}Ref<Shortcut>::unref(local_f8);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* ShaderEditorPlugin::edit(Object*) */void ShaderEditorPlugin::edit(ShaderEditorPlugin *this, Object *param_1) {
   int iVar1;
   uint uVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   char cVar7;
   Object *pOVar8;
   long *plVar9;
   TextShaderEditor *pTVar10;
   CallableCustom *pCVar11;
   VisualShaderEditor *this_00;
   long lVar12;
   ulong uVar13;
   int iVar14;
   Object *pOVar15;
   long in_FS_OFFSET;
   Object *local_a0;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined8 local_68[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (Object*)0x0) goto LAB_0010601c;
   local_78 = 0;
   local_98 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   pOVar8 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &ShaderInclude::typeinfo, 0);
   iVar1 = *(int*)( this + 0x660 );
   if (pOVar8 == (Object*)0x0) {
      pOVar8 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Shader::typeinfo, 0);
      if (iVar1 != 0) {
         plVar9 = *(long**)( this + 0x668 );
         iVar14 = 0;
         do {
            if ((Object*)*plVar9 == pOVar8) goto LAB_00105ff1;
            iVar14 = iVar14 + 1;
            plVar9 = plVar9 + 5;
         }
 while ( iVar14 != iVar1 );
      }

      local_a0 = (Object*)0x0;
      if (pOVar8 != (Object*)0x0) {
         local_68[0] = 0;
         local_a0 = pOVar8;
         cVar7 = RefCounted::init_ref();
         if (cVar7 == '\0') {
            local_a0 = (Object*)0x0;
            Ref<Shader>::unref((Ref<Shader>*)local_68);
            pOVar15 = (Object*)local_98._0_8_;
            if ((Object*)local_98._0_8_ != (Object*)0x0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = local_98._8_8_;
               local_98 = auVar5 << 0x40;
               LAB_001064ca:cVar7 = RefCounted::unreference();
               if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
                  ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
                  Memory::free_static(pOVar15, false);
               }

            }

         }
 else {
            Ref<Shader>::unref((Ref<Shader>*)local_68);
            pOVar15 = (Object*)local_98._0_8_;
            if (pOVar8 != (Object*)local_98._0_8_) {
               local_98._0_8_ = pOVar8;
               cVar7 = RefCounted::reference();
               if (cVar7 == '\0') {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = local_98._8_8_;
                  local_98 = auVar6 << 0x40;
               }

               if (pOVar15 != (Object*)0x0) goto LAB_001064ca;
            }

         }

      }

      Ref<Shader>::unref((Ref<Shader>*)&local_a0);
      if (( ( local_98._0_8_ == 0 ) || ( pOVar8 = (Object*)__dynamic_cast(local_98._0_8_, &Object::typeinfo, &VisualShader::typeinfo, 0) ),pOVar8 == (Object*)0x0 )) {
         pTVar10 = (TextShaderEditor*)operator_new(0xa40, "");
         TextShaderEditor::TextShaderEditor(pTVar10);
         postinitialize_handler((Object*)pTVar10);
         CodeTextEditor::set_toggle_list_control(*(Control**)( pTVar10 + 0xa18 ));
         local_88._0_8_ = pTVar10;
         Node::add_child(*(undefined8*)( this + 0x688 ), pTVar10, 0, 0);
         ( **(code**)( *(long*)local_88._0_8_ + 0x358 ) )(local_88._0_8_, local_98);
      }
 else {
         this_00 = (VisualShaderEditor*)operator_new(0xd00, "");
         VisualShaderEditor::VisualShaderEditor(this_00);
         postinitialize_handler((Object*)this_00);
         local_88._0_8_ = this_00;
         Node::add_child(*(undefined8*)( this + 0x688 ), this_00, 0, 0);
         ( **(code**)( *(long*)local_88._0_8_ + 0x358 ) )();
         cVar7 = RefCounted::unreference();
         if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }

      }

   }
 else {
      if (iVar1 != 0) {
         iVar14 = 0;
         plVar9 = (long*)( *(long*)( this + 0x668 ) + 8 );
         do {
            if ((Object*)*plVar9 == pOVar8) goto LAB_00105ff1;
            iVar14 = iVar14 + 1;
            plVar9 = plVar9 + 5;
         }
 while ( iVar14 != iVar1 );
      }

      local_68[0] = 0;
      local_a0 = pOVar8;
      cVar7 = RefCounted::init_ref();
      if (cVar7 == '\0') {
         local_a0 = (Object*)0x0;
         Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)local_68);
         pOVar15 = (Object*)local_98._8_8_;
         if ((Object*)local_98._8_8_ != (Object*)0x0) {
            local_98._8_8_ = 0;
            LAB_001060c6:cVar7 = RefCounted::unreference();
            if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
               ( **(code**)( *(long*)pOVar15 + 0x140 ) )(pOVar15);
               Memory::free_static(pOVar15, false);
            }

         }

      }
 else {
         Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)local_68);
         pOVar15 = (Object*)local_98._8_8_;
         if (pOVar8 != (Object*)local_98._8_8_) {
            local_98._8_8_ = pOVar8;
            cVar7 = RefCounted::reference();
            if (cVar7 == '\0') {
               local_98._8_8_ = 0;
            }

            if (pOVar15 != (Object*)0x0) goto LAB_001060c6;
         }

      }

      Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_a0);
      pTVar10 = (TextShaderEditor*)operator_new(0xa40, "");
      TextShaderEditor::TextShaderEditor(pTVar10);
      postinitialize_handler((Object*)pTVar10);
      CodeTextEditor::set_toggle_list_control(*(Control**)( pTVar10 + 0xa18 ));
      local_88._0_8_ = pTVar10;
      pcVar3 = *(code**)( *(long*)pTVar10 + 0x360 );
      local_68[0] = 0;
      local_a0 = pOVar8;
      cVar7 = RefCounted::init_ref();
      if (cVar7 == '\0') {
         local_a0 = (Object*)0x0;
      }

      Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)local_68);
      ( *pcVar3 )(pTVar10, (Ref<ShaderInclude>*)&local_a0);
      Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_a0);
      Node::add_child(*(undefined8*)( this + 0x688 ), local_88._0_8_, 0, 0);
   }

   if (( local_88._0_8_ != 0 ) && ( plVar9 = (long*)__dynamic_cast(local_88._0_8_, &Object::typeinfo, &TextShaderEditor::typeinfo, 0) ),plVar9 != (long*)0x0) {
      pcVar3 = *(code**)( *plVar9 + 0x108 );
      pCVar11 = (CallableCustom*)operator_new(0x48, "");
      CallableCustom::CallableCustom(pCVar11);
      *(undefined1(*) [16])( pCVar11 + 0x30 ) = (undefined1[16])0x0;
      *(undefined8*)( pCVar11 + 0x40 ) = 0;
      uVar4 = *(undefined8*)( this + 0x60 );
      *(undefined***)pCVar11 = &PTR_hash_00115f28;
      *(undefined8*)( pCVar11 + 0x30 ) = uVar4;
      *(code**)( pCVar11 + 0x38 ) = _update_shader_list;
      *(undefined8*)( pCVar11 + 0x10 ) = 0;
      *(undefined**)( pCVar11 + 0x20 ) = &_LC4;
      *(ShaderEditorPlugin**)( pCVar11 + 0x28 ) = this;
      CallableCustomMethodPointerBase::_setup((uint*)pCVar11, (int)pCVar11 + 0x28);
      *(char**)( pCVar11 + 0x20 ) = "ShaderEditorPlugin::_update_shader_list";
      Callable::Callable((Callable*)local_68, pCVar11);
      StringName::StringName((StringName*)&local_a0, "validation_changed", false);
      ( *pcVar3 )(plVar9, (StringName*)&local_a0, (Callable*)local_68, 0);
      if (( StringName::configured != '\0' ) && ( local_a0 != (Object*)0x0 )) {
         StringName::unref();
      }

      Callable::~Callable((Callable*)local_68);
      plVar9 = (long*)plVar9[0x143];
      if (plVar9 != (long*)0x0) {
         CodeTextEditor::set_zoom_factor(*(float*)( this + 0x6c0 ));
         pcVar3 = *(code**)( *plVar9 + 0x108 );
         pCVar11 = (CallableCustom*)operator_new(0x48, "");
         CallableCustom::CallableCustom(pCVar11);
         *(undefined**)( pCVar11 + 0x20 ) = &_LC4;
         *(ShaderEditorPlugin**)( pCVar11 + 0x28 ) = this;
         *(undefined1(*) [16])( pCVar11 + 0x30 ) = (undefined1[16])0x0;
         *(undefined***)pCVar11 = &PTR_hash_00115fb8;
         *(undefined8*)( pCVar11 + 0x40 ) = 0;
         uVar4 = *(undefined8*)( this + 0x60 );
         *(undefined8*)( pCVar11 + 0x10 ) = 0;
         *(undefined8*)( pCVar11 + 0x30 ) = uVar4;
         *(code**)( pCVar11 + 0x38 ) = _set_text_shader_zoom_factor;
         CallableCustomMethodPointerBase::_setup((uint*)pCVar11, (int)pCVar11 + 0x28);
         *(char**)( pCVar11 + 0x20 ) = "ShaderEditorPlugin::_set_text_shader_zoom_factor";
         Callable::Callable((Callable*)local_68, pCVar11);
         StringName::StringName((StringName*)&local_a0, "zoomed", false);
         ( *pcVar3 )(plVar9, (StringName*)&local_a0, (Callable*)local_68, 0);
         if (( StringName::configured != '\0' ) && ( local_a0 != (Object*)0x0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_68);
      }

   }

   uVar4 = *(undefined8*)( this + 0x688 );
   TabContainer::get_tab_count();
   TabContainer::set_current_tab((int)uVar4);
   EditedShader::EditedShader((EditedShader*)local_68, (EditedShader*)local_98);
   uVar2 = *(uint*)( this + 0x660 );
   if (uVar2 == *(uint*)( this + 0x664 )) {
      uVar13 = ( ulong )(uVar2 * 2);
      if (uVar2 * 2 == 0) {
         uVar13 = 1;
      }

      *(int*)( this + 0x664 ) = (int)uVar13;
      lVar12 = Memory::realloc_static(*(void**)( this + 0x668 ), uVar13 * 0x28, false);
      *(long*)( this + 0x668 ) = lVar12;
      if (lVar12 == 0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      uVar2 = *(uint*)( this + 0x660 );
   }
 else {
      lVar12 = *(long*)( this + 0x668 );
   }

   *(uint*)( this + 0x660 ) = uVar2 + 1;
   EditedShader::EditedShader((EditedShader*)( lVar12 + (ulong)uVar2 * 0x28 ), (EditedShader*)local_68);
   EditedShader::~EditedShader((EditedShader*)local_68);
   _update_shader_list(this);
   EditedShader::~EditedShader((EditedShader*)local_98);
   LAB_0010601c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00105ff1:TabContainer::set_current_tab((int)*(undefined8*)( this + 0x688 ));
   ItemList::select((int)*(undefined8*)( this + 0x680 ), SUB41(iVar14, 0));
   EditedShader::~EditedShader((EditedShader*)local_98);
   goto LAB_0010601c;
}
/* ShaderEditorPlugin::_move_shader_tab(int, int) */void ShaderEditorPlugin::_move_shader_tab(ShaderEditorPlugin *this, int param_1, int param_2) {
   uint uVar1;
   long *plVar2;
   long *plVar3;
   undefined8 *puVar4;
   uint uVar5;
   Object *pOVar6;
   Object *pOVar7;
   Node *pNVar8;
   code *pcVar9;
   undefined1 auVar10[16];
   undefined8 uVar11;
   char cVar12;
   int iVar13;
   ulong uVar14;
   void *pvVar15;
   long lVar16;
   long in_FS_OFFSET;
   bool bVar17;
   Object *local_c8;
   Object *local_c0;
   CowData<char32_t> local_b0[8];
   CowData<char32_t> local_a8[16];
   Object *local_98;
   Object *local_90;
   undefined8 local_88;
   undefined1 auStack_80[16];
   Object *local_68;
   Object *local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != param_2) {
      if (*(uint*)( this + 0x660 ) <= (uint)param_1) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)(uint)param_1, ( ulong ) * (uint*)( this + 0x660 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar9 = (code*)invalidInstructionException();
         ( *pcVar9 )();
      }

      EditedShader::EditedShader((EditedShader*)&local_c8, (EditedShader*)( *(long*)( this + 0x668 ) + (ulong)(uint)param_1 * 0x28 ));
      LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::remove_at((LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>*)( this + 0x660 ), param_1);
      EditedShader::EditedShader((EditedShader*)&local_98, (EditedShader*)&local_c8);
      uVar5 = *(int*)( this + 0x660 ) + 1;
      if ((uint)param_2 < uVar5) {
         if (param_2 == *(int*)( this + 0x660 )) {
            if (local_98 == (Object*)0x0) {
               LAB_00106afe:local_68 = (Object*)0x0;
            }
 else {
               local_68 = local_98;
               cVar12 = RefCounted::reference();
               if (cVar12 == '\0') goto LAB_00106afe;
            }

            local_60 = (Object*)0x0;
            if (local_90 != (Object*)0x0) {
               local_60 = local_90;
               cVar12 = RefCounted::reference();
               if (cVar12 == '\0') {
                  local_60 = (Object*)0x0;
               }

            }

            local_48 = auStack_80._8_8_;
            uStack_50 = auStack_80._0_8_;
            pvVar15 = *(void**)( this + 0x668 );
            auStack_80 = (undefined1[16])0x0;
            uVar5 = *(uint*)( this + 0x660 );
            local_58 = local_88;
            if (uVar5 == *(uint*)( this + 0x664 )) {
               uVar14 = ( ulong )(uVar5 * 2);
               if (uVar5 * 2 == 0) {
                  uVar14 = 1;
               }

               *(int*)( this + 0x664 ) = (int)uVar14;
               pvVar15 = (void*)Memory::realloc_static(pvVar15, uVar14 * 0x28, false);
               *(void**)( this + 0x668 ) = pvVar15;
               if (pvVar15 == (void*)0x0) {
                  _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar9 = (code*)invalidInstructionException();
                  ( *pcVar9 )();
               }

               uVar5 = *(uint*)( this + 0x660 );
            }

            *(uint*)( this + 0x660 ) = uVar5 + 1;
            EditedShader::EditedShader((EditedShader*)( (long)pvVar15 + (ulong)uVar5 * 0x28 ), (EditedShader*)&local_68);
            EditedShader::~EditedShader((EditedShader*)&local_68);
         }
 else {
            LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::resize((LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>*)( this + 0x660 ), uVar5);
            uVar5 = *(int*)( this + 0x660 ) - 1;
            if ((uint)param_2 < uVar5) {
               uVar1 = *(int*)( this + 0x660 ) - 2;
               uVar14 = (ulong)uVar1;
               lVar16 = uVar14 * 0x28;
               do if (pOVar6 != pOVar7) lVar16 = lVar16 + -0x28; while ( bVar17 );
            }

            puVar4 = (undefined8*)( *(long*)( this + 0x668 ) + (ulong)(uint)param_2 * 0x28 );
            pOVar6 = (Object*)*puVar4;
            if (pOVar6 != local_98) {
               *puVar4 = local_98;
               if (( local_98 != (Object*)0x0 ) && ( cVar12 = cVar12 == '\0' )) {
                  *puVar4 = 0;
               }

               if (( ( pOVar6 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

         pOVar6 = (Object*)puVar4[1];
         if (local_90 != pOVar6) {
            puVar4[1] = local_90;
            local_68 = pOVar6;
            if (( local_90 != (Object*)0x0 ) && ( cVar12 = cVar12 == '\0' )) {
               puVar4[1] = 0;
            }

            Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_68);
         }

         puVar4[2] = local_88;
         if (puVar4[3] != auStack_80._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 3 ));
            puVar4[3] = auStack_80._0_8_;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = auStack_80._8_8_;
            auStack_80 = auVar10 << 0x40;
         }

         uVar11 = auStack_80._8_8_;
         if (puVar4[4] != auStack_80._8_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 4 ));
            puVar4[4] = uVar11;
            auStack_80._8_8_ = 0;
         }

      }

   }
 else {
      _err_print_index_error("insert", "./core/templates/local_vector.h", 0xf7, (ulong)(uint)param_2, (ulong)uVar5, "p_pos", "count + 1", "", false, false);
   }

   EditedShader::~EditedShader((EditedShader*)&local_98);
   pNVar8 = *(Node**)( this + 0x688 );
   iVar13 = TabContainer::get_tab_control((int)pNVar8);
   Node::move_child(pNVar8, iVar13);
   _update_shader_list(this);
   CowData<char32_t>::_unref(local_a8);
   CowData<char32_t>::_unref(local_b0);
   if (( ( local_c0 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)local_c0 + 0x140 ))(local_c0);
   Memory::free_static(local_c0, false);
}
if (( ( local_c8 != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0' )) &&( cVar12 = cVar12 != '\0' )(**(code**)( *(long*)local_c8 + 0x140 ))(local_c8);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   Memory::free_static(local_c8, false);
   return;
}
goto LAB_00106dd2;}
  }if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00106dd2:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ShaderEditorPlugin::~ShaderEditorPlugin() */void ShaderEditorPlugin::~ShaderEditorPlugin(ShaderEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00115c80;
   if (*(long*)( this + 0x668 ) != 0) {
      LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::resize((LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>*)( this + 0x660 ), 0);
      if (*(void**)( this + 0x668 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x668 ), false);
      }

   }

   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   return;
}
/* ShaderEditorPlugin::~ShaderEditorPlugin() */void ShaderEditorPlugin::~ShaderEditorPlugin(ShaderEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00115c80;
   if (*(long*)( this + 0x668 ) != 0) {
      LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::resize((LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>*)( this + 0x660 ), 0);
      if (*(void**)( this + 0x668 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x668 ), false);
      }

   }

   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   operator_delete(this, 0x6c8);
   return;
}
/* ShaderEditorPlugin::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */uint ShaderEditorPlugin::can_drop_data_fw(Vector2 *param_1, Variant *param_2, Control *param_3) {
   String *pSVar1;
   char cVar2;
   byte bVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   Variant local_90[8];
   long local_88;
   undefined8 local_80;
   long local_78;
   undefined8 local_70;
   Variant local_68[8];
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_Dictionary(local_90);
   Variant::Variant((Variant*)local_58, "type");
   cVar2 = Dictionary::has(local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "type");
      Dictionary::operator [](local_90);
      Variant::operator_cast_to_String(local_68);
      uVar4 = String::operator ==((String*)local_68, "shader_list_element");
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if ((char)uVar4 != '\0') goto LAB_00106f04;
      Variant::Variant((Variant*)local_58, "type");
      Dictionary::operator [](local_90);
      Variant::operator_cast_to_String(local_68);
      bVar3 = String::operator ==((String*)local_68, "files");
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (bVar3 != 0) {
         Variant::Variant((Variant*)local_58, "files");
         Dictionary::operator [](local_90);
         Variant::operator_cast_to_Vector(local_68);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( local_60 != 0 ) && ( lVar5 = lVar5 != 0 )) {
            lVar6 = 0;
            while (lVar6 < lVar5) {
               pSVar1 = (String*)( local_60 + lVar6 * 8 );
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Shader");
               cVar2 = ResourceLoader::exists(pSVar1, (String*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (cVar2 != '\0') {
                  local_80 = 0;
                  String::parse_latin1((String*)&local_80, "");
                  ResourceLoader::load((Ref<Resource>*)&local_78, pSVar1, (String*)&local_80, 1, 0);
                  local_88 = 0;
                  if (local_78 == 0) {
                     LAB_00107132:Ref<Resource>::unref((Ref<Resource>*)&local_78);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                     goto LAB_00107142;
                  }

                  lVar5 = __dynamic_cast(local_78, &Object::typeinfo, &Shader::typeinfo, 0);
                  if (lVar5 == 0) goto LAB_00107132;
                  local_70 = 0;
                  local_88 = lVar5;
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     Ref<Shader>::unref((Ref<Shader>*)&local_70);
                     goto LAB_00107132;
                  }

                  Ref<Shader>::unref((Ref<Shader>*)&local_70);
                  Ref<Resource>::unref((Ref<Resource>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  Ref<Shader>::unref((Ref<Shader>*)&local_88);
                  LAB_00107283:uVar4 = (uint)bVar3;
                  goto LAB_00107235;
               }

               LAB_00107142:local_70 = 0;
               String::parse_latin1((String*)&local_70, "ShaderInclude");
               cVar2 = ResourceLoader::exists(pSVar1, (String*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (cVar2 != '\0') {
                  local_80 = 0;
                  String::parse_latin1((String*)&local_80, "");
                  ResourceLoader::load((Ref<Resource>*)&local_78, pSVar1, (String*)&local_80, 1, 0);
                  local_88 = 0;
                  if (local_78 != 0) {
                     lVar5 = __dynamic_cast(local_78, &Object::typeinfo, &ShaderInclude::typeinfo, 0);
                     if (lVar5 != 0) {
                        local_70 = 0;
                        local_88 = lVar5;
                        cVar2 = RefCounted::reference();
                        if (cVar2 != '\0') {
                           Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_70);
                           Ref<Resource>::unref((Ref<Resource>*)&local_78);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                           Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_88);
                           goto LAB_00107283;
                        }

                        local_88 = 0;
                        Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_70);
                     }

                  }

                  Ref<Resource>::unref((Ref<Resource>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_88);
               }

               lVar6 = lVar6 + 1;
               if (local_60 == 0) break;
               lVar5 = *(long*)( local_60 + -8 );
            }
;
            uVar4 = uVar4 & 0xff;
         }

         LAB_00107235:CowData<String>::_unref((CowData<String>*)&local_60);
         goto LAB_00106f04;
      }

   }

   uVar4 = 0;
   LAB_00106f04:Dictionary::~Dictionary((Dictionary*)local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::drop_data_fw(Vector2 const&, Variant const&, Control*) */void ShaderEditorPlugin::drop_data_fw(Vector2 *param_1, Variant *param_2, Control *param_3) {
   String *pSVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   Variant *this;
   long lVar6;
   long in_FS_OFFSET;
   Variant local_90[8];
   long local_88;
   undefined8 local_80;
   long local_78;
   undefined8 local_70;
   Variant local_68[8];
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = can_drop_data_fw(param_1, param_2, param_3);
   if (cVar3 != '\0') {
      Variant::operator_cast_to_Dictionary(local_90);
      Variant::Variant((Variant*)local_58, "type");
      cVar3 = Dictionary::has(local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (cVar3 != '\0') {
         Variant::Variant((Variant*)local_58, "type");
         Dictionary::operator [](local_90);
         Variant::operator_cast_to_String(local_68);
         cVar3 = String::operator ==((String*)local_68, "shader_list_element");
         CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (cVar3 == '\0') {
            Variant::Variant((Variant*)local_58, "type");
            Dictionary::operator [](local_90);
            Variant::operator_cast_to_String(local_68);
            cVar3 = String::operator ==((String*)local_68, "files");
            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar3 != '\0') {
               Variant::Variant((Variant*)local_58, "files");
               Dictionary::operator [](local_90);
               Variant::operator_cast_to_Vector(local_68);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               for (lVar6 = 0; ( local_60 != 0 && ( lVar6 < *(long*)( local_60 + -8 ) ) ); lVar6 = lVar6 + 1) {
                  pSVar1 = (String*)( local_60 + lVar6 * 8 );
                  local_88 = 0;
                  local_78 = 0;
                  String::parse_latin1((String*)&local_78, "Shader");
                  cVar3 = ResourceLoader::exists(pSVar1, (String*)&local_78);
                  if (cVar3 == '\0') {
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "ShaderInclude");
                     cVar3 = ResourceLoader::exists(pSVar1, (String*)&local_70);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     if (cVar3 != '\0') goto LAB_00107538;
                  }
 else {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                     LAB_00107538:local_80 = 0;
                     String::parse_latin1((String*)&local_80, "");
                     ResourceLoader::load((CowData<char32_t>*)&local_78, pSVar1, (String*)&local_80, 1, 0);
                     lVar2 = local_78;
                     if (local_78 != 0) {
                        local_88 = local_78;
                        local_70 = 0;
                        cVar3 = RefCounted::reference();
                        if (cVar3 != '\0') {
                           Ref<Resource>::unref((Ref<Resource>*)&local_70);
                           Ref<Resource>::unref((Ref<Resource>*)&local_78);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                           ( **(code**)( *(long*)param_1 + 0x220 ) )(param_1, lVar2);
                           goto LAB_001075c0;
                        }

                        local_88 = 0;
                        Ref<Resource>::unref((Ref<Resource>*)&local_70);
                     }

                     Ref<Resource>::unref((Ref<Resource>*)&local_78);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  }

                  LAB_001075c0:Ref<Resource>::unref((Ref<Resource>*)&local_88);
               }

               CowData<String>::_unref((CowData<String>*)&local_60);
            }

         }
 else {
            Variant::Variant((Variant*)local_58, "shader_list_element");
            this(Variant * Dictionary::operator [](local_90));
            iVar4 = Variant::operator_cast_to_int(this);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            iVar5 = ItemList::get_item_at_position(*(Vector2**)( param_1 + 0x680 ), SUB81(param_2, 0));
            _move_shader_tab((ShaderEditorPlugin*)param_1, iVar4, iVar5);
         }

      }

      Dictionary::~Dictionary((Dictionary*)local_90);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
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
/* ShaderEditorPlugin::get_unsaved_status(String const&) const */String *ShaderEditorPlugin::get_unsaved_status(String *param_1) {
   uint uVar1;
   long *plVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   long *in_RDX;
   String *pSVar6;
   ulong uVar7;
   long in_RSI;
   String *pSVar8;
   String *pSVar9;
   long in_FS_OFFSET;
   CowData<String> *local_b8;
   CowData<char32_t> local_90[8];
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   Vector<String> local_68[8];
   String *local_60;
   undefined8 local_58;
   long local_50[2];
   long local_40;
   uVar7 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (String*)0x0;
   if (*(int*)( in_RSI + 0x660 ) != 0) {
      do {
         plVar2 = *(long**)( *(long*)( in_RSI + 0x668 ) + 0x10 + uVar7 * 0x28 );
         if (( plVar2 != (long*)0x0 ) && ( cVar4 = ( **(code**)( *plVar2 + 0x370 ) )() ),cVar4 != '\0') {
            if (local_60 == (String*)0x0) {
               local_78 = 0;
               String::parse_latin1((String*)&local_78, "");
               local_80 = 0;
               String::parse_latin1((String*)&local_80, "Save changes to the following shaders(s) before quitting?");
               TTR((String*)&local_70, (String*)&local_80);
               local_58 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
               Vector<String>::push_back(local_68, (CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               uVar1 = *(uint*)( in_RSI + 0x660 );
            }
 else {
               uVar1 = *(uint*)( in_RSI + 0x660 );
            }

            if (uVar1 <= (uint)uVar7) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, uVar7 & 0xffffffff, (ulong)uVar1, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            String::trim_suffix((char*)&local_70);
            local_58 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_70);
            Vector<String>::push_back(local_68, (CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         }

         uVar7 = uVar7 + 1;
      }
 while ( (uint)uVar7 < *(uint*)( in_RSI + 0x660 ) );
   }

   if (( *in_RDX == 0 ) || ( *(uint*)( *in_RDX + -8 ) < 2 )) {
      local_58 = 0;
      String::parse_latin1((String*)&local_58, "\n");
      String::join(param_1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }
 else {
      local_50[0] = 0;
      String::get_file();
      CowData<String>::_copy_on_write((CowData<String>*)&local_60);
      pSVar8 = local_60;
      CowData<String>::_copy_on_write((CowData<String>*)&local_60);
      pSVar6 = local_60;
      if (local_60 != (String*)0x0) {
         pSVar6 = local_60 + *(long*)( local_60 + -8 ) * 8;
      }

      for (; pSVar8 != pSVar6; pSVar8 = pSVar8 + 8) {
         while (( cVar4 = String::is_resource_file() ),cVar4 == '\0' && ( iVar5 = iVar5 != -1 )) {
            if (local_50[0] == 0) {
               local_80 = 0;
               String::parse_latin1((String*)&local_80, "");
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "There are unsaved changes in the following built-in shaders(s):");
               TTR((String*)&local_78, (String*)&local_88);
               local_70 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_78);
               Vector<String>::push_back((Vector<String>*)&local_58, (CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            }

            local_70 = 0;
            pSVar9 = pSVar8 + 8;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)pSVar8);
            Vector<String>::push_back((Vector<String>*)&local_58, (CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            pSVar8 = pSVar9;
            if (pSVar6 == pSVar9) goto LAB_00107c80;
         }
;
      }

      LAB_00107c80:if (local_50[0] == 0) {
         *(undefined8*)param_1 = 0;
      }
 else {
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "\n");
         String::join(param_1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

      CowData<char32_t>::_unref(local_90);
      CowData<String>::_unref((CowData<String>*)local_50);
   }

   local_b8 = (CowData<String>*)&local_60;
   CowData<String>::_unref(local_b8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* StyleBoxEmpty::is_class_ptr(void*) const */uint StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this, void *param_1) {
   return (uint)CONCAT71(0x116b, (undefined4*)param_1 == &StyleBox::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */undefined8 StyleBoxEmpty::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */undefined8 StyleBoxEmpty::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxEmpty::_notificationv(int, bool) */void StyleBoxEmpty::_notificationv(int param_1, bool param_2) {
   return;
}
/* StyleBoxEmpty::get_style_margin(Side) const */undefined8 StyleBoxEmpty::get_style_margin(void) {
   return 0;
}
/* StyleBoxEmpty::draw(RID, Rect2 const&) const */void StyleBoxEmpty::draw(void) {
   return;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* EditorPlugin::edited_scene_changed() */void EditorPlugin::edited_scene_changed(void) {
   return;
}
/* ShaderEditorPlugin::is_class_ptr(void*) const */uint ShaderEditorPlugin::is_class_ptr(ShaderEditorPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x116b, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ShaderEditorPlugin::_getv(StringName const&, Variant&) const */undefined8 ShaderEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderEditorPlugin::_setv(StringName const&, Variant const&) */undefined8 ShaderEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderEditorPlugin::_property_can_revertv(StringName const&) const */undefined8 ShaderEditorPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ShaderEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 ShaderEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<ShaderInclude>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Shader>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*> *this) {
   return;
}
/* CallableCustomMethodPointerC<ShaderEditorPlugin, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */void CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*>::~CallableCustomMethodPointerC(CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int, Vector2,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<WindowWrapper, void, int, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<WindowWrapper,void,int,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<WindowWrapper,void,int,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Resource>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,float> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<ShaderInclude>
   >::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Shader> >::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointerC<ShaderEditorPlugin, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*>::get_argument_count(CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int, Vector2,
   MouseButton>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,bool>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<WindowWrapper, void, int, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<WindowWrapper,void,int,bool>::get_argument_count(CallableCustomMethodPointer<WindowWrapper,void,int,bool> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,int>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Resource>
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, String const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Object*>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, float>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,float>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void,float> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void>::get_argument_count(CallableCustomMethodPointer<ShaderEditorPlugin,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,float> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Resource>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<WindowWrapper, void, int, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<WindowWrapper,void,int,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<WindowWrapper,void,int,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int, Vector2,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerC<ShaderEditorPlugin, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */void CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*>::~CallableCustomMethodPointerC(CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Shader>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<ShaderInclude>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
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
/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HSplitContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011c008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011c008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* HSplitContainer::_property_can_revertv(StringName const&) const */undefined8 HSplitContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0011c008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ShaderEditorPlugin::_validate_propertyv(PropertyInfo&) const */void ShaderEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)PTR__validate_property_0011c010 != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }

   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&> *this) {
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
         goto LAB_001090cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001090cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001090cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, Variant, Vector2 const&, Control*>::get_object()
   const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*> *this) {
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
         goto LAB_001091cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001091cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001091cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<WindowWrapper, void, int, bool>::get_object() const */undefined8 CallableCustomMethodPointer<WindowWrapper,void,int,bool>::get_object(CallableCustomMethodPointer<WindowWrapper,void,int,bool> *this) {
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
         goto LAB_001092cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001092cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001092cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Resource> const&>::get_object() const
    */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&> *this) {
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
         goto LAB_001093cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001093cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001093cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<ShaderInclude> >::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>> *this) {
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
         goto LAB_001094cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001094cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001094cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointerC<ShaderEditorPlugin, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */undefined8 CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*>::get_object(CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*> *this) {
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
         goto LAB_001095cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001095cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001095cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, float>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,float>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,float> *this) {
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
         goto LAB_001096cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001096cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001096cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*> *this) {
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
         goto LAB_001097cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001097cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001097cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void> *this) {
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
         goto LAB_001098cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001098cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001098cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,bool>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,bool> *this) {
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
         goto LAB_001099cd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001099cd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001099cd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Object*>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*> *this) {
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
         goto LAB_00109acd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00109acd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00109acd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int, Vector2, MouseButton>::get_object()
   const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton> *this) {
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
         goto LAB_00109bcd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00109bcd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00109bcd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,int>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,int> *this) {
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
         goto LAB_00109ccd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00109ccd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00109ccd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Shader> >::get_object() const */undefined8 CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>>::get_object(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>> *this) {
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
         goto LAB_00109dcd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00109dcd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00109dcd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* HSplitContainer::is_class_ptr(void*) const */uint HSplitContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x116b, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1169, in_RSI == &SplitContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x116b, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x116b, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x116b, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0011c018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */void HSplitContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0011c020 == Control::_validate_property) {
      return;
   }

   SplitContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0011c018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011c028 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HSplitContainer::_setv(StringName const&, Variant const&) */undefined8 HSplitContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011c028 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0011c028 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010a2e8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011c030 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010a358) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011c030 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010a3c8) *//* HSplitContainer::_getv(StringName const&, Variant&) const */undefined8 HSplitContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0011c030 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* StyleBox::get_base_extension() const */StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this){
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
/* StyleBox::get_save_class() const */StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this){
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
/* ShaderEditorPlugin::get_plugin_name() const */ShaderEditorPlugin * __thiscall ShaderEditorPlugin::get_plugin_name(ShaderEditorPlugin *this){
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
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &StyleBox::vtable;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a570;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a570:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &StyleBox::vtable;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a5d0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a5d0:Control::~Control((Control*)this);
   return;
}
/* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a66e;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a66e;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a66e;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a66e:Resource::~Resource((Resource*)this);
   return;
}
/* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a70e;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a70e;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a70e;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a70e:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2b0);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &StyleBox::vtable;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a780;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a780:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &StyleBox::vtable;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010a7f0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010a7f0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011c038 != Container::_notification) {
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

   if ((code*)PTR__notification_0011c038 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HSplitContainer::_notificationv(int, bool) */void HSplitContainer::_notificationv(HSplitContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011c040 != Container::_notification) {
         SplitContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0011c040 == Container::_notification) {
      return;
   }

   SplitContainer::_notification(iVar1);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0011c038 != Container::_notification) {
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

   if ((code*)PTR__notification_0011c038 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
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
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined**)this = &__dso_handle;
   if (*(long*)( this + 0xa60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa50 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa50 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa48 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa48 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &StyleBox::vtable;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ac9f;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010ac9f:Control::~Control((Control*)this);
   return;
}
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined**)this = &__dso_handle;
   if (*(long*)( this + 0xa60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa50 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa50 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa48 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa48 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &StyleBox::vtable;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ae4f;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010ae4f:Control::~Control((Control*)this);
   operator_delete(this, 0xa70);
   return;
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
         LAB_0010af93:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010af93;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_0010affe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_0010affe:return &_get_class_namev();
}
/* StyleBoxEmpty::_get_class_namev() const */undefined8 *StyleBoxEmpty::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b083:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b083;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxEmpty");
         goto LAB_0010b0ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxEmpty");
   LAB_0010b0ee:return &_get_class_namev();
}
/* ShaderEditorPlugin::_get_class_namev() const */undefined8 *ShaderEditorPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b173:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b173;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderEditorPlugin");
         goto LAB_0010b1de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderEditorPlugin");
   LAB_0010b1de:return &_get_class_namev();
}
/* HSplitContainer::_get_class_namev() const */undefined8 *HSplitContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b263:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b263;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
         goto LAB_0010b2ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
   LAB_0010b2ce:return &_get_class_namev();
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
         LAB_0010b353:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b353;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0010b3be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0010b3be:return &_get_class_namev();
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
/* Callable create_custom_callable_function_pointer<ShaderEditorPlugin, String
   const&>(ShaderEditorPlugin*, char const*, void (ShaderEditorPlugin::*)(String const&)) */ShaderEditorPlugin *create_custom_callable_function_pointer<ShaderEditorPlugin,String_const&>(ShaderEditorPlugin *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001160d8;
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
/* ShaderEditorPlugin::_notificationv(int, bool) */void ShaderEditorPlugin::_notificationv(ShaderEditorPlugin *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 0xd) {
         _notification(iVar1);
      }

      if ((code*)PTR__notification_0011c048 != Node::_notification) {
         EditorPlugin::_notification(iVar1);
      }

      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   if ((code*)PTR__notification_0011c048 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
   }

   if (param_1 != 0xd) {
      return;
   }

   _notification(iVar1);
   return;
}
/* Callable create_custom_callable_function_pointer<ShaderEditorPlugin, int>(ShaderEditorPlugin*,
   char const*, void (ShaderEditorPlugin::*)(int)) */ShaderEditorPlugin *create_custom_callable_function_pointer<ShaderEditorPlugin,int>(ShaderEditorPlugin *param_1, char *param_2, _func_void_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001161f8;
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
/* Callable Callable::bind<ItemList*>(ItemList*) const */ItemList *Callable::bind<ItemList*>(ItemList *param_1) {
   char cVar1;
   Object *in_RDX;
   int in_ESI;
   long in_FS_OFFSET;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_RDX);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   Callable::bindp((Variant**)param_1, in_ESI);
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Variant::Variant;
   if (bVar1) {
      if (*(long*)( this + 0x648 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x630 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x618 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x5e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x5d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x5b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x5a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x588 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x570 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x558 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x540 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x528 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x510 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x4f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x4e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x4c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x4b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x498 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x480 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x468 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x450 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x438 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010bb2a;
      }

      if (*(long*)( this + 0x420 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010bb2a:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x418 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x410 ));
   Node::~Node((Node*)this);
   return;
}
/* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   ~EditorPlugin(this)
   ;;
   operator_delete(this, 0x660);
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010bd08) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010bff0) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
/* ShaderEditorPlugin::EditedShader::~EditedShader() */void ShaderEditorPlugin::EditedShader::~EditedShader(EditedShader *this) {
   Object *pOVar1;
   char cVar2;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
   if (*(long*)( this + 8 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 8 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            return;
         }

      }

   }

   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* ShaderEditorPlugin::get_class() const */void ShaderEditorPlugin::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "ShaderEditorPlugin");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HSplitContainer::get_class() const */void HSplitContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "HSplitContainer");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "VBoxContainer");
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
            String::parse_latin1((StrRange*)in_RDI);
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
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "HBoxContainer");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBoxEmpty::get_class() const */void StyleBoxEmpty::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "StyleBoxEmpty");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::EditedShader::EditedShader(ShaderEditorPlugin::EditedShader const&) */void ShaderEditorPlugin::EditedShader::EditedShader(EditedShader *this, EditedShader *param_1) {
   undefined8 uVar1;
   char cVar2;
   *(undefined8*)this = 0;
   if (*(long*)param_1 != 0) {
      *(long*)this = *(long*)param_1;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

   }

   *(undefined8*)( this + 8 ) = 0;
   if (*(long*)( param_1 + 8 ) != 0) {
      *(long*)( this + 8 ) = *(long*)( param_1 + 8 );
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)( this + 8 ) = 0;
      }

   }

   uVar1 = *(undefined8*)( param_1 + 0x10 );
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = uVar1;
   CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x18 ), (CowData*)( param_1 + 0x18 ));
   *(undefined8*)( this + 0x20 ) = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)( param_1 + 0x20 ));
   return;
}
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, undefined4 param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined4*)( this + 0x18 ) = param_4;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
   *(undefined4*)( this + 0x28 ) = param_6;
   if (*(int*)( this + 0x18 ) == 0x11) {
      StringName::StringName((StringName*)&local_38, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_38) {
         if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_38;
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010c96f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010c96f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010c948. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010ca20;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010c96f:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010ca20:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   Object *pOVar5;
   Object *pOVar6;
   long lVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_80[8];
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   String local_68[8];
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_68[0] = (String)0x0;
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
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
            if (3 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0010caf5;
            }

            if (param_2 != 3) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0010caf5;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 0x18);
            if (cVar4 == '\0') {
               LAB_0010cb7f:uVar3 = _LC42;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = param_1[2];
               pOVar5 = Variant::operator_cast_to_Object_(this_00);
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar6 == (Object*)0x0 ) || ( lVar7 = __dynamic_cast(pOVar6, &Object::typeinfo, &Control::typeinfo, 0) ),lVar7 == 0 )) goto LAB_0010cb7f;
            }

            pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
            if (pOVar5 != (Object*)0x0) {
               pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Control::typeinfo, 0);
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0);
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = 1;
            }

            Variant::Variant((Variant*)local_58, param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
            uVar3 = _LC44;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            local_60 = Variant::operator_cast_to_Vector2(*param_1);
            ( *pcVar10 )((long*)( lVar1 + lVar2 ), &local_60, (Variant*)local_58, pOVar5);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            goto LAB_0010caf5;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_70 = 0;
   String::parse_latin1((String*)&local_70, "\', can\'t call method.");
   uitos((ulong)local_80);
   operator+((char *)
   local_78,(String*)"Invalid Object id \'";
   String::operator +(local_68, (String*)local_78);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   CowData<char32_t>::_unref(local_78);
   CowData<char32_t>::_unref(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   LAB_0010caf5:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointerC<ShaderEditorPlugin, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*>::call(CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   Object *pOVar5;
   Object *pOVar6;
   long lVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_a0[8];
   CowData<char32_t> local_98[8];
   undefined8 local_90;
   String local_88[8];
   undefined8 local_80;
   undefined4 local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_88[0] = (String)0x0;
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
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
            if (3 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0010ce64;
            }

            if (param_2 != 3) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 3;
               goto LAB_0010ce64;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 0x18);
            if (cVar4 == '\0') {
               LAB_0010ceec:uVar3 = _LC42;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = param_1[2];
               pOVar5 = Variant::operator_cast_to_Object_(this_00);
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar6 == (Object*)0x0 ) || ( lVar7 = __dynamic_cast(pOVar6, &Object::typeinfo, &Control::typeinfo, 0) ),lVar7 == 0 )) goto LAB_0010ceec;
            }

            pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
            if (pOVar5 != (Object*)0x0) {
               pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Control::typeinfo, 0);
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0);
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = 1;
            }

            Variant::Variant((Variant*)local_58, param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
            uVar3 = _LC44;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            local_80 = Variant::operator_cast_to_Vector2(*param_1);
            bVar11 = (bool)( *pcVar10 )((long*)( lVar1 + lVar2 ), &local_80, (Variant*)local_58, pOVar5);
            Variant::Variant((Variant*)local_78, bVar11);
            if (Variant::needs_deinit[*(int*)param_3] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_3 = local_78[0];
            *(undefined8*)( param_3 + 8 ) = local_70;
            *(undefined8*)( param_3 + 0x10 ) = uStack_68;
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            goto LAB_0010ce64;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_90 = 0;
   String::parse_latin1((String*)&local_90, "\', can\'t call method.");
   uitos((ulong)local_a0);
   operator+((char *)
   local_98,(String*)"Invalid Object id \'";
   String::operator +(local_88, (String*)local_98);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0xad, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_88, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref(local_98);
   CowData<char32_t>::_unref(local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   LAB_0010ce64:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*>::call(CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   Object *pOVar5;
   Object *pOVar6;
   long lVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_80[8];
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   String local_68[8];
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_68[0] = (String)0x0;
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
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
            if (2 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 2;
               goto LAB_0010d1fc;
            }

            if (param_2 != 2) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 2;
               goto LAB_0010d1fc;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0x18);
            if (cVar4 == '\0') {
               LAB_0010d27c:uVar3 = _LC45;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = param_1[1];
               pOVar5 = Variant::operator_cast_to_Object_(this_00);
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar6 == (Object*)0x0 ) || ( lVar7 = __dynamic_cast(pOVar6, &Object::typeinfo, &Control::typeinfo, 0) ),lVar7 == 0 )) goto LAB_0010d27c;
            }

            pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
            if (pOVar5 != (Object*)0x0) {
               pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Control::typeinfo, 0);
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 5);
            uVar3 = _LC44;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            local_60 = Variant::operator_cast_to_Vector2(*param_1);
            ( *pcVar10 )(local_58, (long*)( lVar1 + lVar2 ), &local_60, pOVar5);
            if (Variant::needs_deinit[*(int*)param_3] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_3 = local_58[0];
            *(undefined8*)( param_3 + 8 ) = local_50;
            *(undefined8*)( param_3 + 0x10 ) = uStack_48;
            goto LAB_0010d1fc;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_70 = 0;
   String::parse_latin1((String*)&local_70, "\', can\'t call method.");
   uitos((ulong)local_80);
   operator+((char *)
   local_78,(String*)"Invalid Object id \'";
   String::operator +(local_68, (String*)local_78);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   CowData<char32_t>::_unref(local_78);
   CowData<char32_t>::_unref(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   LAB_0010d1fc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010d628;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010d628;
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
            uVar3 = _LC46;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010d5d7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5);
               return;
            }

            goto LAB_0010d6d9;
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
      LAB_0010d628:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010d6d9:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, int, Vector2, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   ulong uVar6;
   uint uVar7;
   ulong *puVar8;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar9;
   undefined8 uVar10;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010d90b;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_0010d90b;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 4) {
         if (param_2 == 3) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
            uVar3 = _LC47;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar6 = Variant::operator_cast_to_long(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 5);
            uVar3 = _LC48;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar10 = Variant::operator_cast_to_Vector2(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar3 = _LC46;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010d8e4. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(uVar10, (long*)( lVar1 + lVar2 ), iVar5, uVar6 & 0xffffffff);
               return;
            }

            goto LAB_0010d9bc;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 3;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 3;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010d90b:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010d9bc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<WindowWrapper, void, int, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<WindowWrapper,void,int,bool>::call(CallableCustomMethodPointer<WindowWrapper,void,int,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010dbbe;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_0010dbbe;
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
            uVar3 = _LC49;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar8 = Variant::operator_cast_to_bool(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar3 = _LC46;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010db97. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5, bVar8);
               return;
            }

            goto LAB_0010dc6f;
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
      LAB_0010dbbe:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010dc6f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,bool>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar7;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar7 = (char)ObjectDB::spin_lock == '\0';
         if (bVar7) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar7) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010de39;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_0010de39;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar3 = _LC50;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar7 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010dde8. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar7);
               return;
            }

            goto LAB_0010deea;
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
      LAB_0010de39:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010deea:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   Object *pOVar5;
   Object *pOVar6;
   uint uVar7;
   ulong *puVar8;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48[0] = (String)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010e0d9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_0010e0d9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar4 == '\0') {
               LAB_0010e030:uVar3 = _LC51;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = *param_1;
               pOVar5 = Variant::operator_cast_to_Object_(this_00);
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               if (( pOVar6 == (Object*)0x0 ) && ( pOVar5 != (Object*)0x0 )) goto LAB_0010e030;
            }

            pOVar5 = Variant::operator_cast_to_Object_(*param_1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010e077. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar5);
               return;
            }

            goto LAB_0010e18a;
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
      LAB_0010e0d9:local_50 = 0;
      String::parse_latin1((String*)&local_50, "\', can\'t call method.");
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +(local_48, (String*)local_58);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010e18a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, float>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,float>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,float> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar7;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar7 = (char)ObjectDB::spin_lock == '\0';
         if (bVar7) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar7) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010e346;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_0010e346;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 3);
            uVar3 = _LC52;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            Variant::operator_cast_to_float(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010e2f5. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ));
               return;
            }

            goto LAB_0010e3f7;
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
      LAB_0010e346:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010e3f7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  uVar3 = _LC53;
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

            goto LAB_0010e4ce;
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
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_0010e4ce:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* StyleBoxEmpty::_initialize_classv() */void StyleBoxEmpty::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (StyleBox::initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
            if (RefCounted::initialize_class() == '\0') {
               Object::initialize_class();
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Object");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "RefCounted");
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
               if ((code*)PTR__bind_methods_0011c058 != RefCounted::_bind_methods) {
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

         local_60 = 0;
         String::parse_latin1((String*)&local_60, "Resource");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "StyleBox");
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
         if ((code*)PTR__bind_methods_0011c050 != Resource::_bind_methods) {
            StyleBox::_bind_methods();
         }

         StyleBox::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "StyleBox";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "StyleBoxEmpty";
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::_initialize_classv() */void ShaderEditorPlugin::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (EditorPlugin::initialize_class() == '\0') {
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
            if ((code*)PTR__bind_methods_0011c058 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Node");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "EditorPlugin");
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
         if ((code*)PTR__bind_methods_0011c060 != Node::_bind_methods) {
            EditorPlugin::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0011c068 != Object::_bind_compatibility_methods) {
            EditorPlugin::_bind_compatibility_methods();
         }

         EditorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "EditorPlugin");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "ShaderEditorPlugin");
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
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
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
                     if ((code*)PTR__bind_methods_0011c058 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0011c070 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0011c078 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HSplitContainer::_initialize_classv() */void HSplitContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (SplitContainer::initialize_class() == '\0') {
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
                     if ((code*)PTR__bind_methods_0011c058 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0011c070 != Object::_bind_compatibility_methods) {
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
         String::parse_latin1((String*)&local_60, "SplitContainer");
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
         if ((code*)PTR__bind_methods_0011c080 != Container::_bind_methods) {
            SplitContainer::_bind_methods();
         }

         SplitContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "SplitContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "HSplitContainer");
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
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
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
                     if ((code*)PTR__bind_methods_0011c058 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0011c070 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0011c078 != Container::_bind_methods) {
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
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010ffe3;
   }

   cVar4 = String::operator ==(param_1, "Node");
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
         if (cVar4 != '\0') goto LAB_0010ffe3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = String::operator ==(param_1, "Object");
         return uVar5;
      }

   }
 else {
      LAB_0010ffe3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderEditorPlugin::is_class(String const&) const */undefined8 ShaderEditorPlugin::is_class(ShaderEditorPlugin *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_001101c3;
   }

   cVar4 = String::operator ==(param_1, "ShaderEditorPlugin");
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
         if (cVar4 != '\0') goto LAB_001101c3;
      }

      cVar4 = String::operator ==(param_1, "EditorPlugin");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Node::is_class((Node*)this, param_1);
            return uVar5;
         }

         goto LAB_001102ce;
      }

   }

   LAB_001101c3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001102ce:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_001103b3;
   }

   cVar4 = String::operator ==(param_1, "Control");
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
         if (cVar4 != '\0') goto LAB_001103b3;
      }

      cVar4 = String::operator ==(param_1, "CanvasItem");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Node::is_class((Node*)this, param_1);
            return uVar5;
         }

         goto LAB_001104be;
      }

   }

   LAB_001103b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001104be:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_001105a3;
   }

   cVar4 = String::operator ==(param_1, "RefCounted");
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
         if (cVar4 != '\0') goto LAB_001105a3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = String::operator ==(param_1, "Object");
         return uVar5;
      }

   }
 else {
      LAB_001105a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_0011078b;
   }

   cVar3 = String::operator ==(param_1, "Resource");
   if (cVar3 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar4;
      }

   }
 else {
      LAB_0011078b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBoxEmpty::is_class(String const&) const */undefined8 StyleBoxEmpty::is_class(StyleBoxEmpty *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_001108b3;
   }

   cVar4 = String::operator ==(param_1, "StyleBoxEmpty");
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
         if (cVar4 != '\0') goto LAB_001108b3;
      }

      cVar4 = String::operator ==(param_1, "StyleBox");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Resource::is_class((Resource*)this, param_1);
            return uVar5;
         }

         goto LAB_001109be;
      }

   }

   LAB_001108b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001109be:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* LocalVector<ShaderEditorPlugin::EditedShader, unsigned int, false, false>::remove_at(unsigned
   int) */void LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::remove_at(LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false> *this, uint param_1) {
   long *plVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   uint uVar5;
   long *plVar7;
   uint uVar8;
   long lVar9;
   ulong uVar6;
   uVar6 = (ulong)param_1;
   uVar8 = *(uint*)this;
   if (uVar8 <= param_1) {
      _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, (ulong)param_1, (ulong)uVar8, "p_index", "count", "", false, false);
      return;
   }

   uVar8 = uVar8 - 1;
   *(uint*)this = uVar8;
   if (param_1 < uVar8) {
      lVar9 = (ulong)param_1 * 0x28;
      do if (pOVar2 != pOVar3) lVar9 = lVar9 + 0x28; while ( uVar5 < uVar8 );
   }

   plVar1 = (long*)( *(long*)( this + 8 ) + (ulong)uVar8 * 0x28 );
   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar1 + 4 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar1 + 3 ));
   if (( plVar1[1] != 0 ) && ( cVar4 = cVar4 != '\0' )) {
      pOVar2 = (Object*)plVar1[1];
      cVar4 = predelete_handler(pOVar2);
      if (cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
         lVar9 = *plVar1;
         goto joined_r0x00110b9e;
      }

   }

   lVar9 = *plVar1;
   joined_r0x00110b9e:if (( lVar9 != 0 ) && ( cVar4 = cVar4 != '\0' )) {
      pOVar2 = (Object*)*plVar1;
      cVar4 = predelete_handler(pOVar2);
      if (cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
         return;
      }

   }

   return;
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
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
            if (pvVar3 == (void*)0x0) goto LAB_00110d6f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00110d6f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_00110ea3;
   }

   cVar4 = String::operator ==(param_1, "BoxContainer");
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
         if (cVar4 != '\0') goto LAB_00110ea3;
      }

      cVar4 = String::operator ==(param_1, "Container");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Control::is_class((Control*)this, param_1);
            return uVar5;
         }

         goto LAB_00110fae;
      }

   }

   LAB_00110ea3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00110fae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_0011109b;
   }

   cVar3 = String::operator ==(param_1, "VBoxContainer");
   if (cVar3 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar4;
      }

   }
 else {
      LAB_0011109b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_001111cb;
   }

   cVar3 = String::operator ==(param_1, "HBoxContainer");
   if (cVar3 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar4;
      }

   }
 else {
      LAB_001111cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SplitContainer::is_class(String const&) const */undefined8 SplitContainer::is_class(SplitContainer *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_001112f3;
   }

   cVar4 = String::operator ==(param_1, "SplitContainer");
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
         if (cVar4 != '\0') goto LAB_001112f3;
      }

      cVar4 = String::operator ==(param_1, "Container");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Control::is_class((Control*)this, param_1);
            return uVar5;
         }

         goto LAB_001113fe;
      }

   }

   LAB_001112f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001113fe:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HSplitContainer::is_class(String const&) const */undefined8 HSplitContainer::is_class(HSplitContainer *this, String *param_1) {
   long lVar1;
   char *__s;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar2 = *(long*)( lVar1 + 0x20 );
      if (lVar2 == 0) {
         local_60 = 0;
      }
 else {
         __s = *(char**)( lVar2 + 8 );
         local_60 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_001114eb;
   }

   cVar3 = String::operator ==(param_1, "HSplitContainer");
   if (cVar3 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar4 = SplitContainer::is_class((SplitContainer*)this, param_1);
         return uVar4;
      }

   }
 else {
      LAB_001114eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC63;
   local_80 = 0;
   local_88 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = &_LC63;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "CanvasItem";
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0011c088 != Object::_get_property_list) {
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Control";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Control";
   local_90 = 0;
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0011c090 != CanvasItem::_get_property_list) {
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
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "RefCounted";
   local_80 = 0;
   local_88 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "RefCounted";
   local_90 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Resource";
   local_90 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBox::_get_property_listv(StyleBox *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "StyleBox";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "StyleBox";
   local_90 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "StyleBox", false);
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
/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      StyleBox::_get_property_listv((StyleBox*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "StyleBoxEmpty";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "StyleBoxEmpty";
   local_90 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "StyleBoxEmpty", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         StyleBox::_get_property_listv((StyleBox*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorPlugin::_get_property_listv(EditorPlugin *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "EditorPlugin";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "EditorPlugin";
   local_90 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "EditorPlugin", false);
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
/* ShaderEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ShaderEditorPlugin::_get_property_listv(ShaderEditorPlugin *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      EditorPlugin::_get_property_listv((EditorPlugin*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "ShaderEditorPlugin";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "ShaderEditorPlugin";
   local_90 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "ShaderEditorPlugin", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorPlugin::_get_property_listv((EditorPlugin*)this, param_1, true);
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "Container";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "Container";
   local_90 = 0;
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SplitContainer::_get_property_listv(SplitContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "SplitContainer";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "SplitContainer";
   local_90 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "SplitContainer", false);
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
/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HSplitContainer::_get_property_listv(HSplitContainer *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      SplitContainer::_get_property_listv((SplitContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "HSplitContainer";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "HSplitContainer";
   local_90 = 0;
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "HSplitContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         SplitContainer::_get_property_listv((SplitContainer*)this, param_1, true);
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "BoxContainer";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "BoxContainer";
   local_90 = 0;
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "VBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "VBoxContainer";
   local_90 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "HBoxContainer";
   local_90 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
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
/* Ref<Resource>::unref() */void Ref<Resource>::unref(Ref<Resource> *this) {
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
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Resource> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   ulong uVar6;
   uint uVar7;
   ulong *puVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   ulong local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = local_38 >> 8;
         local_38 = uVar3 << 8;
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_38 = uVar3 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar8[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar9 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (1 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011309e;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011309e;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar9 & 1 ) != 0) {
               pcVar9 = *(code**)( pcVar9 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            uVar4 = _LC51;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            local_40 = 0;
            uVar6 = Variant::get_validated_object();
            uVar3 = local_40;
            if (uVar6 != local_40) {
               if (uVar6 == 0) {
                  if (local_40 != 0) {
                     local_40 = 0;
                     local_38 = uVar3;
                     goto LAB_00113172;
                  }

               }
 else {
                  uVar6 = __dynamic_cast(uVar6, &Object::typeinfo, &Resource::typeinfo, 0);
                  if (uVar3 != uVar6) {
                     local_38 = uVar3;
                     local_40 = uVar6;
                     if (( uVar6 != 0 ) && ( cVar5 = cVar5 == '\0' )) {
                        local_40 = 0;
                     }

                     LAB_00113172:Ref<Resource>::unref((Ref<Resource>*)&local_38);
                  }

               }

            }

            ( *pcVar9 )((long*)( lVar1 + lVar2 ), (Ref<Resource>*)&local_40);
            Ref<Resource>::unref((Ref<Resource>*)&local_40);
            goto LAB_0011309e;
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
   String::operator +((String*)&local_38, (String*)local_48);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Ref<Resource>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_0011309e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Ref<Shortcut>::unref() */void Ref<Shortcut>::unref(Ref<Shortcut> *this) {
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
/* Ref<Shader>::unref() */void Ref<Shader>::unref(Ref<Shader> *this) {
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
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Shader> >::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Object *pOVar3;
   ulong uVar4;
   undefined8 uVar5;
   char cVar6;
   Object *pOVar7;
   uint uVar8;
   ulong *puVar9;
   code *pcVar10;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   Object *local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar4 = (ulong)local_38 >> 8;
         local_38 = (Object*)( uVar4 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_38 = (Object*)( uVar4 << 8 );
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
               goto LAB_0011346e;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011346e;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            uVar5 = _LC51;
            if (cVar6 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar5;
            }

            local_40 = (Object*)0x0;
            pOVar7 = (Object*)Variant::get_validated_object();
            pOVar3 = local_40;
            if (pOVar7 != local_40) {
               if (pOVar7 == (Object*)0x0) {
                  if (local_40 != (Object*)0x0) {
                     local_40 = (Object*)0x0;
                     local_38 = pOVar3;
                     goto LAB_00113542;
                  }

               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &Shader::typeinfo, 0);
                  if (pOVar3 != pOVar7) {
                     local_38 = pOVar3;
                     local_40 = pOVar7;
                     if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                        local_40 = (Object*)0x0;
                     }

                     LAB_00113542:Ref<Shader>::unref((Ref<Shader>*)&local_38);
                  }

               }

            }

            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_40 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar3 = local_40,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         goto LAB_0011346e;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_40 = (Object*)0x0;String::parse_latin1((String*)&local_40, "\', can\'t call method.");uitos((ulong)local_50);operator+((char *)local_48,(String *)"Invalid Object id \'");String::operator +((String*)&local_38, (String*)local_48);_err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Ref<Shader>*)&local_38, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);CowData<char32_t>::_unref(local_48);CowData<char32_t>::_unref(local_50);CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);LAB_0011346e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* Ref<ShaderInclude>::unref() */void Ref<ShaderInclude>::unref(Ref<ShaderInclude> *this) {
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
/* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<ShaderInclude> >::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>>::call(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   ulong uVar6;
   uint uVar7;
   ulong *puVar8;
   code *pcVar9;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   ulong local_40;
   ulong local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = local_38 >> 8;
         local_38 = uVar3 << 8;
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_38 = uVar3 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar8[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar9 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (1 < (uint)param_2) {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011380e;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0011380e;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar9 & 1 ) != 0) {
               pcVar9 = *(code**)( pcVar9 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            uVar4 = _LC51;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            local_40 = 0;
            uVar6 = Variant::get_validated_object();
            uVar3 = local_40;
            if (uVar6 != local_40) {
               if (uVar6 == 0) {
                  if (local_40 != 0) {
                     local_40 = 0;
                     local_38 = uVar3;
                     goto LAB_001138e2;
                  }

               }
 else {
                  uVar6 = __dynamic_cast(uVar6, &Object::typeinfo, &ShaderInclude::typeinfo, 0);
                  if (uVar3 != uVar6) {
                     local_38 = uVar3;
                     local_40 = uVar6;
                     if (( uVar6 != 0 ) && ( cVar5 = cVar5 == '\0' )) {
                        local_40 = 0;
                     }

                     LAB_001138e2:Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_38);
                  }

               }

            }

            ( *pcVar9 )((long*)( lVar1 + lVar2 ), (Ref<ShaderInclude>*)&local_40);
            Ref<ShaderInclude>::unref((Ref<ShaderInclude>*)&local_40);
            goto LAB_0011380e;
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
   String::operator +((String*)&local_38, (String*)local_48);
   _err_print_error(&_LC41, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Ref<ShaderInclude>*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_0011380e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* LocalVector<ShaderEditorPlugin::EditedShader, unsigned int, false, false>::resize(unsigned int)
    */void LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false>::resize(LocalVector<ShaderEditorPlugin::EditedShader,unsigned_int,false,false> *this, uint param_1) {
   Object *pOVar1;
   code *pcVar2;
   undefined1(*pauVar3)[16];
   char cVar4;
   undefined1(*pauVar5)[16];
   uint uVar6;
   long *plVar7;
   long lVar8;
   uint uVar9;
   uVar9 = *(uint*)this;
   if (param_1 < uVar9) {
      lVar8 = (ulong)param_1 * 0x28;
      uVar9 = param_1;
      do {
         plVar7 = (long*)( *(long*)( this + 8 ) + lVar8 );
         CowData<char32_t>::_unref((CowData<char32_t>*)( plVar7 + 4 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( plVar7 + 3 ));
         if (( plVar7[1] != 0 ) && ( cVar4 = cVar4 != '\0' )) {
            pOVar1 = (Object*)plVar7[1];
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         if (( *plVar7 != 0 ) && ( cVar4 = cVar4 != '\0' )) {
            pOVar1 = (Object*)*plVar7;
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         uVar9 = uVar9 + 1;
         lVar8 = lVar8 + 0x28;
      }
 while ( uVar9 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar9) {
         return;
      }

      uVar6 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar9 = uVar6 >> 1 | uVar6;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = ( uVar9 | uVar9 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar9;
         lVar8 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar9 * 0x28, false);
         *(long*)( this + 8 ) = lVar8;
         if (lVar8 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         uVar9 = *(uint*)this;
         if (param_1 <= uVar9) goto LAB_00113b39;
      }

      lVar8 = *(long*)( this + 8 );
      pauVar5 = (undefined1(*) [16])( lVar8 + (ulong)uVar9 * 0x28 );
      do {
         *(undefined8*)pauVar5[2] = 0;
         pauVar3 = pauVar5 + 2;
         *pauVar5 = (undefined1[16])0x0;
         pauVar5[1] = (undefined1[16])0x0;
         pauVar5 = (undefined1(*) [16])( *pauVar3 + 8 );
      }
 while ( (undefined1(*) [16])( lVar8 + 0x28 + ( ( ulong )(uVar6 - uVar9) + (ulong)uVar9 ) * 0x28 ) != (undefined1(*) [16])( *pauVar3 + 8 ) );
   }

   LAB_00113b39:*(uint*)this = param_1;
   return;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   CowData<char32_t> *pCVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   CowData<char32_t> *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t>**)this;
      if (pCVar2 != (CowData<char32_t>*)0x0) {
         lVar3 = *(long*)( pCVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = pCVar2;
            do {
               lVar5 = lVar5 + 1;
               CowData<char32_t>::_unref(this_00);
               this_00 = this_00 + 8;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pCVar2 + -0x10, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
      LAB_00114010:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_00114010;
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
      goto LAB_00114066;
   }

   if (lVar9 == lVar5) {
      LAB_00113f8b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00114066:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_00113eff;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_00113f8b;
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
   LAB_00113eff:puVar7[-1] = param_1;
   return 0;
}
/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1) {
   long *plVar1;
   CowData<char32_t> *pCVar2;
   long lVar3;
   code *pcVar4;
   CowData<char32_t> *this;
   long lVar5;
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x68 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x60 ));
   if (*(long*)( param_1 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         pCVar2 = *(CowData<char32_t>**)( param_1 + 0x58 );
         if (pCVar2 == (CowData<char32_t>*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( pCVar2 + -8 );
         *(undefined8*)( param_1 + 0x58 ) = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this =
            pCVar2;
            do {
               lVar5 = lVar5 + 1;
               CowData<char32_t>::_unref(this + 0x20);
               CowData<char32_t>::_unref(this + 0x10);
               CowData<char32_t>::_unref(this + 8);
               CowData<char32_t>::_unref(this);
               this =
               this + 0x28;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pCVar2 + -0x10, false);
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
                        if (pvVar5 == (void*)0x0) goto LAB_00114329;
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
               }

               LAB_00114329:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
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
/* ShaderEditorPlugin::_get_current_shader() */void ShaderEditorPlugin::_GLOBAL__sub_I__get_current_shader(void) {
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

   if (ItemList::base_property_helper == '\0') {
      ItemList::base_property_helper = '\x01';
      ItemList::base_property_helper._64_8_ = 0;
      ItemList::base_property_helper._0_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._24_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._40_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, ItemList::base_property_helper, &__dso_handle);
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

   if (MenuButton::base_property_helper == '\0') {
      MenuButton::base_property_helper = '\x01';
      MenuButton::base_property_helper._64_8_ = 0;
      MenuButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, MenuButton::base_property_helper, &__dso_handle);
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

   if (TabBar::base_property_helper != '\0') {
      return;
   }

   TabBar::base_property_helper = 1;
   TabBar::base_property_helper._64_8_ = 0;
   TabBar::base_property_helper._56_8_ = 2;
   TabBar::base_property_helper._0_16_ = (undefined1[16])0x0;
   TabBar::base_property_helper._24_16_ = (undefined1[16])0x0;
   TabBar::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, TabBar::base_property_helper, &__dso_handle, uStack_8);
   return;
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
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderEditorPlugin::EditedShader::EditedShader(ShaderEditorPlugin::EditedShader const&) */void ShaderEditorPlugin::EditedShader::EditedShader(EditedShader *this, EditedShader *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderEditorPlugin::EditedShader::~EditedShader() */void ShaderEditorPlugin::EditedShader::~EditedShader(EditedShader *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, float>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,float>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Object*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Resource>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Resource>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<WindowWrapper, void, int, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<WindowWrapper,void,int,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<WindowWrapper,void,int,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, int, Vector2,
   MouseButton>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,int,Vector2,MouseButton> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,Variant,Vector2_const&,Control*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointerC<ShaderEditorPlugin, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */void CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*>::~CallableCustomMethodPointerC(CallableCustomMethodPointerC<ShaderEditorPlugin,bool,Vector2_const&,Variant_const&,Control*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Vector2_const&,Variant_const&,Control*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<Shader>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<Shader>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderEditorPlugin, void, Ref<ShaderInclude>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderEditorPlugin,void,Ref<ShaderInclude>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* VoxelGIEditorPlugin::edit(Object*) */void VoxelGIEditorPlugin::edit(VoxelGIEditorPlugin *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &VoxelGI::typeinfo, 0);
      if (lVar1 != 0) {
         *(long*)( this + 0x660 ) = lVar1;
      }

      return;
   }

   return;
}
/* VoxelGIEditorPlugin::make_visible(bool) */void VoxelGIEditorPlugin::make_visible(VoxelGIEditorPlugin *this, bool param_1) {
   if (param_1) {
      CanvasItem::show();
      Node::set_process(SUB81(this, 0));
      return;
   }

   CanvasItem::hide();
   Node::set_process(SUB81(this, 0));
   return;
}
/* VoxelGIEditorPlugin::bake_func_step(int, String const&) */undefined8 VoxelGIEditorPlugin::bake_func_step(int param_1, String *param_2) {
   undefined8 uVar1;
   if (tmp_progress != (String*)0x0) {
      uVar1 = EditorProgress::step(tmp_progress, (int)param_2, SUB41(param_1, 0));
      return uVar1;
   }

   _err_print_error("bake_func_step", "editor/plugins/voxel_gi_editor_plugin.cpp", 0x9c, "Parameter \"tmp_progress\" is null.", 0, 0);
   return 0;
}
/* VoxelGIEditorPlugin::bake_func_end() */void VoxelGIEditorPlugin::bake_func_end(void) {
   EditorProgress *pEVar1;
   pEVar1 = tmp_progress;
   if (tmp_progress != (EditorProgress*)0x0) {
      EditorProgress::~EditorProgress(tmp_progress);
      Memory::free_static(pEVar1, false);
      tmp_progress = (EditorProgress*)0x0;
      return;
   }

   _err_print_error("bake_func_end", "editor/plugins/voxel_gi_editor_plugin.cpp", 0xa1, "Parameter \"tmp_progress\" is null.", 0, 0);
   return;
}
/* VoxelGIEditorPlugin::_voxel_gi_save_path_and_bake(String const&) */void VoxelGIEditorPlugin::_voxel_gi_save_path_and_bake(VoxelGIEditorPlugin *this, String *param_1) {
   char cVar1;
   Object *pOVar2;
   long in_FS_OFFSET;
   Object *local_30;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Window::hide();
   if (*(Node**)( this + 0x660 ) != (Node*)0x0) {
      VoxelGI::bake(*(Node**)( this + 0x660 ), false);
      VoxelGI::get_probe_data();
      if (local_30 == (Object*)0x0) {
         _err_print_error("_voxel_gi_save_path_and_bake", "editor/plugins/voxel_gi_editor_plugin.cpp", 0xae, "Condition \"voxel_gi_data.is_null()\" is true.", 0, 0);
      }
 else {
         ( **(code**)( *(long*)local_30 + 0x188 ) )(local_30, param_1, 0);
         local_28 = (Object*)0x0;
         if (( ( local_30 != (Object*)0x0 ) && ( pOVar2 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar2 != (Object*)0x0 )) {
            local_28 = (Object*)0x0;
         }

         ResourceSaver::save((Ref*)&local_28, param_1, 4);
         if (( ( local_28 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),pOVar2 = local_28,cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
         Memory::free_static(pOVar2, false);
      }

      if (( ( local_30 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)local_30 + 0x140 ))(local_30);
      Memory::free_static(local_30, false);
   }

}
}if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* VoxelGIEditorPlugin::handles(Object*) const */undefined4 VoxelGIEditorPlugin::handles(VoxelGIEditorPlugin *this, Object *param_1) {
   code *pcVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 7;
   pcVar1 = *(code**)( *(long*)param_1 + 0x58 );
   local_38 = "VoxelGI";
   String::parse_latin1((StrRange*)&local_40);
   uVar2 = ( *pcVar1 )(param_1, (StrRange*)&local_40);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VoxelGIEditorPlugin::~VoxelGIEditorPlugin() */void VoxelGIEditorPlugin::~VoxelGIEditorPlugin(VoxelGIEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00107688;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   return;
}
/* VoxelGIEditorPlugin::~VoxelGIEditorPlugin() */void VoxelGIEditorPlugin::~VoxelGIEditorPlugin(VoxelGIEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00107688;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   operator_delete(this, 0x680);
   return;
}
/* VoxelGIEditorPlugin::bake_func_begin() */void VoxelGIEditorPlugin::bake_func_begin(void) {
   EditorProgress *this;
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined8 local_70;
   String local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (tmp_progress == (EditorProgress*)0x0) {
      this(EditorProgress * operator_new(0x10, ""));
      local_58 = "";
      local_70 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_58 = "Bake VoxelGI";
      local_78 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_78);
      TTR(local_68, (String*)&local_78);
      local_58 = "bake_gi";
      local_60 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange*)&local_60);
      EditorProgress::EditorProgress(this, (String*)&local_60, local_68, 1000, true, false);
      tmp_progress = this;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("bake_func_begin", "editor/plugins/voxel_gi_editor_plugin.cpp", 0x96, "Condition \"tmp_progress != nullptr\" is true.", 0, 0);
      return;
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
/* VoxelGIEditorPlugin::VoxelGIEditorPlugin() */void VoxelGIEditorPlugin::VoxelGIEditorPlugin(VoxelGIEditorPlugin *this) {
   long lVar1;
   Ref *pRVar2;
   code *pcVar3;
   String *pSVar4;
   long *plVar5;
   Object *pOVar6;
   char cVar7;
   int iVar8;
   BoxContainer *this_00;
   Button *this_01;
   CallableCustom *pCVar9;
   EditorFileDialog *this_02;
   undefined8 uVar10;
   Object *pOVar11;
   long in_FS_OFFSET;
   String local_68[8];
   long local_60;
   Object *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::Node((Node*)this);
   *(code**)this = Variant::Variant;
   *(undefined2*)( this + 0x408 ) = 0;
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x420 ), "_forward_canvas_gui_input", false);
   this[0x428] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
   this[0x440] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
   this[0x458] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
   this[0x470] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x478 ) = 0;
   StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
   this[0x488] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x490 ) = 0;
   StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
   this[0x4a0] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x4a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
   this[0x4b8] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
   this[0x4d0] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
   this[0x4e8] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x4f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
   this[0x500] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x508 ) = 0;
   StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
   this[0x518] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x520 ) = 0;
   StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
   this[0x530] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x538 ) = 0;
   StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
   this[0x548] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x550 ) = 0;
   StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
   this[0x560] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x568 ) = 0;
   StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
   this[0x578] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x580 ) = 0;
   StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
   this[0x590] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x598 ) = 0;
   StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
   this[0x5a8] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
   this[0x5c0] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x5c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
   this[0x5d8] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
   this[0x5f0] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
   this[0x608] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x610 ) = 0;
   StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
   this[0x620] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x628 ) = 0;
   StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
   this[0x638] = (VoxelGIEditorPlugin)0x0;
   *(undefined8*)( this + 0x640 ) = 0;
   StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
   this[0x650] = (VoxelGIEditorPlugin)0x0;
   *(undefined***)this = &PTR__initialize_classv_00107688;
   *(undefined8*)( this + 0x678 ) = 0;
   *(undefined1(*) [16])( this + 0x658 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x668 ) = (undefined1[16])0x0;
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, false);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_00107310;
   postinitialize_handler((Object*)this_00);
   *(BoxContainer**)( this + 0x668 ) = this_00;
   Control::set_h_size_flags(this_00, 3);
   CanvasItem::hide();
   this_01 = (Button*)operator_new(0xc10, "");
   local_58[0] = (Object*)0x0;
   Button::Button(this_01, (String*)local_58);
   postinitialize_handler((Object*)this_01);
   *(Button**)( this + 0x670 ) = this_01;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   Control::set_theme_type_variation(*(StringName**)( this + 0x670 ));
   pRVar2 = *(Ref**)( this + 0x670 );
   pOVar11 = *(Object**)( EditorNode::singleton + 0x838 );
   if (pOVar11 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   cVar7 = RefCounted::reference();
   if (cVar7 == '\0') {
      pOVar11 = (Object*)0x0;
   }

   pcVar3 = *(code**)( *(long*)pOVar11 + 0x1c8 );
   lVar1 = EditorStringNames::singleton + 0x10;
   if ((VoxelGIEditorPlugin()::{lambda()
   #1
   ( iVar8 = __cxa_guard_acquire(&VoxelGIEditorPlugin()::{lambda()#1}::operator()()::sname),
     iVar8 != 0) );
   {
      _scs_create((char *)&VoxelGIEditorPlugin()::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &VoxelGIEditorPlugin()::, {
            lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&VoxelGIEditorPlugin()::{lambda()#1}::operator()()::sname);
  }, ( *pcVar3 )((CowData<char32_t>*)local_58, pOVar11, &VoxelGIEditorPlugin()::, {
                     lambda()
                     #1
                     Button::set_button_icon(pRVar2);
                     if (( ( local_58[0] == (Object*)0x0 ) || ( cVar7 = RefCounted::unreference() ),pOVar6 = local_58[0],cVar7 == '\0' )) {
                        cVar7 = RefCounted::unreference();
                     }
 else {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                        cVar7 = RefCounted::unreference();
                     }

                     if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
                        ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
                        Memory::free_static(pOVar11, false);
                     }

                     local_58[0] = (Object*)0x0;
                     pSVar4 = *(String**)( this + 0x670 );
                     String::parse_latin1((String*)local_58, "");
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Bake VoxelGI");
                     TTR(local_68, (String*)&local_60);
                     Button::set_text(pSVar4);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                     plVar5 = *(long**)( this + 0x670 );
                     pcVar3 = *(code**)( *plVar5 + 0x108 );
                     pCVar9 = (CallableCustom*)operator_new(0x48, "");
                     CallableCustom::CallableCustom(pCVar9);
                     *(undefined**)( pCVar9 + 0x20 ) = &_LC26;
                     *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
                     *(undefined***)pCVar9 = &PTR_hash_00107930;
                     *(undefined8*)( pCVar9 + 0x40 ) = 0;
                     uVar10 = *(undefined8*)( this + 0x60 );
                     *(undefined8*)( pCVar9 + 0x10 ) = 0;
                     *(undefined8*)( pCVar9 + 0x30 ) = uVar10;
                     *(code**)( pCVar9 + 0x38 ) = _bake;
                     *(VoxelGIEditorPlugin**)( pCVar9 + 0x28 ) = this;
                     CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
                     *(char**)( pCVar9 + 0x20 ) = "VoxelGIEditorPlugin::_bake";
                     Callable::Callable((Callable*)local_58, pCVar9);
                     ( *pcVar3 )(plVar5, SceneStringNames::singleton + 0x238, (CowData<char32_t>*)local_58, 0);
                     Callable::~Callable((Callable*)local_58);
                     Node::add_child(*(undefined8*)( this + 0x668 ), *(undefined8*)( this + 0x670 ), 0, 0);
                     EditorPlugin::add_control_to_container(this, 1, *(undefined8*)( this + 0x668 ));
                     *(undefined8*)( this + 0x660 ) = 0;
                     this_02 = (EditorFileDialog*)operator_new(0x1108, "");
                     EditorFileDialog::EditorFileDialog(this_02);
                     postinitialize_handler((Object*)this_02);
                     *(EditorFileDialog**)( this + 0x678 ) = this_02;
                     EditorFileDialog::set_file_mode(this_02, 4);
                     pSVar4 = *(String**)( this + 0x678 );
                     local_58[0] = (Object*)0x0;
                     String::parse_latin1((String*)local_58, "");
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "*.res");
                     EditorFileDialog::add_filter(pSVar4, (String*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                     plVar5 = *(long**)( this + 0x678 );
                     pcVar3 = *(code**)( *plVar5 + 0x108 );
                     pCVar9 = (CallableCustom*)operator_new(0x48, "");
                     CallableCustom::CallableCustom(pCVar9);
                     *(undefined**)( pCVar9 + 0x20 ) = &_LC26;
                     *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
                     *(undefined***)pCVar9 = &PTR_hash_001079c0;
                     *(undefined8*)( pCVar9 + 0x40 ) = 0;
                     uVar10 = *(undefined8*)( this + 0x60 );
                     *(undefined8*)( pCVar9 + 0x10 ) = 0;
                     *(undefined8*)( pCVar9 + 0x30 ) = uVar10;
                     *(code**)( pCVar9 + 0x38 ) = _voxel_gi_save_path_and_bake;
                     *(VoxelGIEditorPlugin**)( pCVar9 + 0x28 ) = this;
                     CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
                     *(char**)( pCVar9 + 0x20 ) = "VoxelGIEditorPlugin::_voxel_gi_save_path_and_bake";
                     Callable::Callable((Callable*)local_58, pCVar9);
                     StringName::StringName((StringName*)&local_60, "file_selected", false);
                     ( *pcVar3 )(plVar5, (String*)&local_60, (CowData<char32_t>*)local_58, 0);
                     if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                        StringName::unref();
                     }

                     Callable::~Callable((Callable*)local_58);
                     uVar10 = EditorInterface::get_base_control();
                     Node::add_child(uVar10, *(undefined8*)( this + 0x678 ), 0, 0);
                     pSVar4 = *(String**)( this + 0x678 );
                     local_58[0] = (Object*)0x0;
                     String::parse_latin1((String*)local_58, "");
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Select path for VoxelGI Data File");
                     TTR(local_68, (String*)&local_60);
                     Window::set_title(pSVar4);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                     VoxelGI::bake_begin_function = bake_func_begin;
                     VoxelGI::bake_step_function = bake_func_step;
                     VoxelGI::bake_end_function = bake_func_end;
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }
, /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */, /* VoxelGIEditorPlugin::_notification(int) [clone .part.0] */, void VoxelGIEditorPlugin::_notification(int param_1) * puVar4);
            char cVar5;
            undefined *puVar6;
            char *pcVar7;
            undefined4 in_register_0000003c;
            long lVar8;
            long in_FS_OFFSET;
            float fVar9;
            undefined8 uVar10;
            double dVar11;
            float in_XMM1_Da;
            float fVar12;
            undefined *local_b0;
            undefined8 local_a8;
            undefined8 local_a0;
            undefined8 local_98;
            undefined8 local_90;
            undefined8 local_88;
            String local_80[8];
            undefined8 local_78;
            undefined8 local_70;
            undefined *local_68;
            long local_60;
            undefined1 local_58[12];
            undefined8 local_4c;
            long local_40;
            lVar8 = CONCAT44(in_register_0000003c, param_1);
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            if (*(long*)( lVar8 + 0x660 ) != 0) {
               local_58 = VoxelGI::get_estimated_cell_size();
               uVar10 = VoxelGI::get_size();
               uVar3 = local_58._8_4_;
               uVar1 = local_58._0_4_;
               uVar2 = local_58._4_4_;
               local_b0 = (undefined*)0x0;
               local_4c._4_4_ = (float)( (ulong)uVar10 >> 0x20 );
               in_XMM1_Da = in_XMM1_Da * _LC69;
               fVar12 = local_4c._4_4_ * _LC69;
               local_4c._0_4_ = (float)uVar10;
               fVar9 = _LC69 * (float)local_4c;
               dVar11 = (double)( local_58._0_4_ * local_58._4_4_ * local_58._8_4_ * 4 ) * __LC70;
               local_4c = uVar10;
               if (dVar11 < _LC71) {
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "");
                  pcVar7 = "Low";
               }
 else {
                  local_70 = 0;
                  if (_LC73 <= dVar11) {
                     String::parse_latin1((String*)&local_70, "");
                     pcVar7 = "High";
                  }
 else {
                     String::parse_latin1((String*)&local_70, "");
                     pcVar7 = "Moderate";
                  }

               }

               local_78 = 0;
               String::parse_latin1((String*)&local_78, pcVar7);
               TTR((String*)&local_68, (String*)&local_78);
               if (local_68 != (undefined*)0x0) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  local_b0 = local_68;
                  local_68 = (undefined*)0x0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_a8 = 0;
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "\n");
               local_88 = 0;
               puVar4 = &_LC67;
               do {
                  puVar6 = puVar4;
                  puVar4 = puVar6 + 4;
               }
 while ( *(int*)( puVar6 + 4 ) != 0 );
               local_68 = &_LC67;
               local_60 = (long)( puVar6 + -0x10576c ) >> 2;
               String::parse_utf32((StrRange*)&local_88);
               vformat<int,int,int>(local_80, (int)(StrRange*)&local_88, uVar1, uVar2);
               local_98 = 0;
               String::parse_latin1((String*)&local_98, "");
               local_a0 = 0;
               String::parse_latin1((String*)&local_a0, "Subdivisions: %s");
               TTR((String*)&local_90, (String*)&local_a0);
               vformat<String>((String*)&local_78, (String*)&local_90, local_80);
               String::operator +((String*)&local_68, (String*)&local_78);
               String::operator +=((String*)&local_a8, (String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "\n");
               local_88 = 0;
               puVar4 = &_LC68;
               do {
                  puVar6 = puVar4;
                  puVar4 = puVar6 + 4;
               }
 while ( *(int*)( puVar6 + 4 ) != 0 );
               local_60 = (long)( puVar6 + -0x1057a4 ) >> 2;
               local_68 = &_LC68;
               String::parse_utf32((StrRange*)&local_88);
               vformat<float,float,float>(local_80, fVar9 / (float)(int)uVar1, fVar12 / (float)(int)uVar2, in_XMM1_Da / (float)(int)uVar3);
               local_98 = 0;
               String::parse_latin1((String*)&local_98, "");
               local_a0 = 0;
               String::parse_latin1((String*)&local_a0, "Cell size: %s");
               TTR((String*)&local_90, (String*)&local_a0);
               vformat<String>((String*)&local_78, (String*)&local_90, local_80);
               String::operator +((String*)&local_68, (String*)&local_78);
               String::operator +=((String*)&local_a8, (String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_70 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_b0);
               String::num(dVar11, (int)(String*)&local_78);
               local_88 = 0;
               String::parse_latin1((String*)&local_88, "");
               local_90 = 0;
               String::parse_latin1((String*)&local_90, "Video RAM size: %s MB (%s)");
               TTR(local_80, (String*)&local_90);
               vformat<String,String>((String*)&local_68, local_80, (String*)&local_78, (CowData<char32_t>*)&local_70);
               String::operator +=((String*)&local_a8, (String*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               local_4c = 0;
               ( **(code**)( **(long**)( lVar8 + 0x670 ) + 0x348 ) )((String*)&local_68, *(long**)( lVar8 + 0x670 ), &local_4c);
               cVar5 = String::operator ==((String*)&local_68, (String*)&local_a8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if (cVar5 == '\0') {
                  Control::set_tooltip_text(*(String**)( lVar8 + 0x670 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               }
 else {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               }

            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
, /* VoxelGIEditorPlugin::_notification(int) */, void __thiscall VoxelGIEditorPlugin::_notification(VoxelGIEditorPlugin *this,int param_1);
      {
         if (param_1 != 0x11) {
            return;
         }

         _notification((int)this);
         return;
      }

      /* VoxelGIEditorPlugin::_bake() */
      void VoxelGIEditorPlugin::_bake(VoxelGIEditorPlugin *this) {
         String *pSVar1;
         char cVar2;
         int iVar3;
         long lVar4;
         long in_FS_OFFSET;
         CowData<char32_t> *local_c0;
         Object *local_98;
         long local_90;
         CowData<char32_t> local_88[8];
         CowData<char32_t> local_80[8];
         undefined8 local_78;
         undefined8 local_70;
         long local_68;
         undefined8 local_60;
         CowData<char32_t> local_58[8];
         undefined8 local_50;
         long local_48;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(long*)( this + 0x660 ) == 0) goto LAB_001018b0;
         VoxelGI::get_probe_data();
         if (local_98 == (Object*)0x0) {
            if (*(long*)( this + 0x240 ) == 0) {
               _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
            }

            SceneTree::get_edited_scene_root();
            Node::get_scene_file_path();
            if (( local_90 == 0 ) || ( *(uint*)( local_90 + -8 ) < 2 )) {
               local_50 = 0;
               String::parse_latin1((String*)&local_50, "_data.res");
               Node::get_name();
               if (local_68 == 0) {
                  local_60 = 0;
               }
 else {
                  local_60 = 0;
                  if (*(char**)( local_68 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_60, *(char**)( local_68 + 8 ));
                  }

               }

               local_c0 = (CowData<char32_t>*)&local_60;
               operator+((char *)
               local_58,(String*)"res://";
               String::operator +((String*)&local_48, (String*)local_58);
               if (local_90 != local_48) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  local_90 = local_48;
                  local_48 = 0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref(local_58);
               CowData<char32_t>::_unref(local_c0);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            }
 else {
               String::get_extension();
               local_50 = 0;
               String::parse_latin1((String*)&local_50, "_data.res");
               Node::get_name();
               if (local_68 == 0) {
                  local_60 = 0;
               }
 else {
                  local_60 = 0;
                  if (*(char**)( local_68 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_60, *(char**)( local_68 + 8 ));
                  }

               }

               local_c0 = (CowData<char32_t>*)&local_60;
               local_78 = 0;
               String::parse_latin1((String*)&local_78, ".");
               String::get_basename();
               String::operator +((String*)&local_70, (String*)local_80);
               String::operator +((String*)local_58, (String*)&local_70);
               String::operator +((String*)&local_48, (String*)local_58);
               if (local_90 != local_48) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  local_90 = local_48;
                  local_48 = 0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref(local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               CowData<char32_t>::_unref(local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref(local_c0);
               if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               CowData<char32_t>::_unref(local_88);
            }

            EditorFileDialog::set_current_path(*(String**)( this + 0x678 ));
            EditorFileDialog::popup_file_dialog();
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         }
 else {
            Resource::get_path();
            cVar2 = String::is_resource_file();
            if (cVar2 == '\0') {
               iVar3 = String::find((char*)local_80, 0x102889);
               if (iVar3 != -1) {
                  String::substr((int)(String*)&local_78, (int)local_80);
                  ResourceLoader::get_resource_type((String*)&local_48);
                  cVar2 = String::operator ==((String*)&local_48, "PackedScene");
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  if (cVar2 == '\0') {
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, ".import");
                     String::operator +((String*)&local_48, (String*)&local_78);
                     cVar2 = FileAccess::exists((String*)&local_48);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     pSVar1 = EditorNode::singleton;
                     if (cVar2 == '\0') {
                        LAB_001019b1:CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                        goto LAB_00101857;
                     }

                     local_48 = 0;
                     String::parse_latin1((String*)&local_48, "");
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Warning!");
                     TTR((String*)local_58, (String*)&local_50);
                     local_68 = 0;
                     String::parse_latin1((String*)&local_68, "");
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Voxel GI data is part of an imported resource.");
                     TTR((String*)&local_60, (String*)&local_70);
                     EditorNode::show_warning(pSVar1, (String*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref(local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  }
 else {
                     if (*(long*)( this + 0x240 ) == 0) {
                        _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
                     }

                     lVar4 = SceneTree::get_edited_scene_root();
                     if (lVar4 != 0) {
                        if (*(long*)( this + 0x240 ) == 0) {
                           _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
                        }

                        SceneTree::get_edited_scene_root();
                        Node::get_scene_file_path();
                        cVar2 = String::operator !=((String*)&local_48, (String*)&local_78);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                        if (cVar2 == '\0') goto LAB_001019b1;
                     }

                     pSVar1 = EditorNode::singleton;
                     local_48 = 0;
                     String::parse_latin1((String*)&local_48, "");
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Warning!");
                     TTR((String*)local_58, (String*)&local_50);
                     local_68 = 0;
                     String::parse_latin1((String*)&local_68, "");
                     local_70 = 0;
                     String::parse_latin1((String*)&local_70, "Voxel GI data is not local to the scene.");
                     TTR((String*)&local_60, (String*)&local_70);
                     EditorNode::show_warning(pSVar1, (String*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                     CowData<char32_t>::_unref(local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  goto LAB_00101c37;
               }

            }
 else {
               local_50 = 0;
               String::parse_latin1((String*)&local_50, ".import");
               String::operator +((String*)&local_48, (String*)local_80);
               cVar2 = FileAccess::exists((String*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               pSVar1 = EditorNode::singleton;
               if (cVar2 != '\0') {
                  local_48 = 0;
                  String::parse_latin1((String*)&local_48, "");
                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Warning!");
                  TTR((String*)local_58, (String*)&local_50);
                  local_68 = 0;
                  String::parse_latin1((String*)&local_68, "");
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Voxel GI data is an imported resource.");
                  TTR((String*)&local_60, (String*)&local_70);
                  EditorNode::show_warning(pSVar1, (String*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref(local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  LAB_00101c37:CowData<char32_t>::_unref(local_80);
                  goto joined_r0x00101b32;
               }

            }

            LAB_00101857:CowData<char32_t>::_unref(local_80);
            VoxelGI::bake(*(Node**)( this + 0x660 ), false);
         }

         joined_r0x00101b32:if (( ( local_98 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_98 + 0x140 ))(local_98);
         Memory::free_static(local_98, false);
      }

      LAB_001018b0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
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

   /* Control::_top_level_changed() */
   void Control::_top_level_changed(void) {
      return;
   }

   /* EditorPlugin::selected_notify() */
   void EditorPlugin::selected_notify(void) {
      return;
   }

   /* EditorPlugin::edited_scene_changed() */
   void EditorPlugin::edited_scene_changed(void) {
      return;
   }

   /* VoxelGIEditorPlugin::is_class_ptr(void*) const */
   uint VoxelGIEditorPlugin::is_class_ptr(VoxelGIEditorPlugin *this, void *param_1) {
      return (uint)CONCAT71(0x107a, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* VoxelGIEditorPlugin::_getv(StringName const&, Variant&) const */
   undefined8 VoxelGIEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* VoxelGIEditorPlugin::_setv(StringName const&, Variant const&) */
   undefined8 VoxelGIEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* VoxelGIEditorPlugin::_property_can_revertv(StringName const&) const */
   undefined8 VoxelGIEditorPlugin::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* VoxelGIEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 VoxelGIEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* VoxelGIEditorPlugin::has_main_screen() const */
   undefined8 VoxelGIEditorPlugin::has_main_screen(void) {
      return 0;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&> *this) {
      return;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<VoxelGIEditorPlugin,void> *this) {
      return;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void, String const&>::get_argument_count(bool&)
   const */
   undefined8 CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&>::get_argument_count(CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&> *this, bool *param_1) {
      *param_1 = true;
      return 1;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void>::get_argument_count(bool&) const */
   undefined8 CallableCustomMethodPointer<VoxelGIEditorPlugin,void>::get_argument_count(CallableCustomMethodPointer<VoxelGIEditorPlugin,void> *this, bool *param_1) {
      *param_1 = true;
      return 0;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<VoxelGIEditorPlugin,void> *this) {
      operator_delete(this, 0x48);
      return;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&> *this) {
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

   /* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
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
      if ((code*)PTR__property_can_revert_0010a008 != Object::_property_can_revert) {
         uVar1 = Control::_property_can_revert(param_1);
         return uVar1;
      }

      return 0;
   }

   /* VoxelGIEditorPlugin::_validate_propertyv(PropertyInfo&) const */
   void VoxelGIEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
      if ((code*)PTR__validate_property_0010a010 != Object::_validate_property) {
         Node::_validate_property(param_1);
         return;
      }

      return;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void, String const&>::get_object() const */
   undefined8 CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&>::get_object(CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&> *this) {
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
            goto LAB_0010299d;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_0010299d;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_0010299d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar2;
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void>::get_object() const */
   undefined8 CallableCustomMethodPointer<VoxelGIEditorPlugin,void>::get_object(CallableCustomMethodPointer<VoxelGIEditorPlugin,void> *this) {
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
            goto LAB_00102a9d;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_00102a9d;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_00102a9d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
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

      if ((code*)PTR__validate_property_0010a018 == Control::_validate_property) {
         return;
      }

      BoxContainer::_validate_property(param_1);
      return;
   }

   /* HBoxContainer::_setv(StringName const&, Variant const&) */
   undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      uVar1 = CanvasItem::_set(param_1, param_2);
      if ((char)uVar1 == '\0') {
         if ((code*)PTR__set_0010a020 != CanvasItem::_set) {
            uVar1 = Control::_set(param_1, param_2);
            return uVar1;
         }

         uVar1 = 0;
      }

      return uVar1;
   }

   /* WARNING: Removing unreachable block (ram,0x00102c68) */
   /* HBoxContainer::_getv(StringName const&, Variant&) const */
   undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      if (( (code*)PTR__get_0010a028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
         return uVar1;
      }

      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   /* HBoxContainer::is_class_ptr(void*) const */
   uint HBoxContainer::is_class_ptr(void *param_1) {
      uint uVar1;
      undefined4 in_EDX;
      undefined4 *in_RSI;
      uVar1 = 1;
      if (in_RSI != &get_class_ptr_static()::ptr) {
         uVar1 = (uint)CONCAT71(0x107a, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107a, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
      }

      return uVar1;
   }

   /* HBoxContainer::_notificationv(int, bool) */
   void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
      int iVar1;
      iVar1 = (int)this;
      if (param_2) {
         if ((code*)PTR__notification_0010a030 != Container::_notification) {
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

      if ((code*)PTR__notification_0010a030 == Container::_notification) {
         return;
      }

      BoxContainer::_notification(iVar1);
      return;
   }

   /* HBoxContainer::~HBoxContainer() */
   void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
      bool bVar1;
      bVar1 = StringName::configured != '\0';
      *(code**)this = Window::hide;
      if (bVar1) {
         if (*(long*)( this + 0x9e8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102e60;
         }

         if (*(long*)( this + 0x9d0 ) != 0) {
            StringName::unref();
         }

      }

      LAB_00102e60:Control::~Control((Control*)this);
      return;
   }

   /* HBoxContainer::~HBoxContainer() */
   void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
      bool bVar1;
      bVar1 = StringName::configured != '\0';
      *(code**)this = Window::hide;
      if (bVar1) {
         if (*(long*)( this + 0x9e8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00102ec0;
         }

         if (*(long*)( this + 0x9d0 ) != 0) {
            StringName::unref();
         }

      }

      LAB_00102ec0:Control::~Control((Control*)this);
      operator_delete(this, 0xa10);
      return;
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
            LAB_00102f23:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102f23;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
            goto LAB_00102f8e;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
      LAB_00102f8e:return &_get_class_namev();
   }

   /* VoxelGIEditorPlugin::_get_class_namev() const */
   undefined8 *VoxelGIEditorPlugin::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00103013:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103013;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VoxelGIEditorPlugin");
            goto LAB_0010307e;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VoxelGIEditorPlugin");
      LAB_0010307e:return &_get_class_namev();
   }

   /* VoxelGIEditorPlugin::get_plugin_name() const */
   VoxelGIEditorPlugin * VoxelGIEditorPlugin::get_plugin_name(VoxelGIEditorPlugin * this);
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

   /* EditorPlugin::~EditorPlugin() */
   void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
      bool bVar1;
      bVar1 = StringName::configured != '\0';
      *(code**)this = Variant::Variant;
      if (bVar1) {
         if (*(long*)( this + 0x648 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x630 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x618 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x600 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x5e8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x5d0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x5b8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x5a0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x588 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x570 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x558 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x540 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x528 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x510 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x4f8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x4e0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x4c8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x4b0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x498 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x480 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x468 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x450 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x438 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010357a;
         }

         if (*(long*)( this + 0x420 ) != 0) {
            StringName::unref();
         }

      }

      LAB_0010357a:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x418 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x410 ));
      Node::~Node((Node*)this);
      return;
   }

   /* EditorPlugin::~EditorPlugin() */
   void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
      ~EditorPlugin(this)
      ;;
      operator_delete(this, 0x660);
      return;
   }

   /* WARNING: Removing unreachable block (ram,0x00103758) */
   /* String vformat<String>(String const&, String const) */
   undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
                        if ((code*)PTR__bind_methods_0010a048 != Node::_bind_methods) {
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
                     if ((code*)PTR__bind_compatibility_methods_0010a038 != Object::_bind_compatibility_methods) {
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
            if ((code*)PTR__bind_methods_0010a040 != Container::_bind_methods) {
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

   /* WARNING: Removing unreachable block (ram,0x00104040) */
   /* String vformat<int, int, int>(String const&, int const, int const, int const) */
   String *vformat<int,int,int>(String *param_1, int param_2, int param_3, int param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      undefined4 in_register_00000034;
      int iVar3;
      int in_R8D;
      int iVar4;
      long in_FS_OFFSET;
      Array local_f0[8];
      undefined8 local_e8[8];
      Variant local_a8[24];
      Variant local_90[24];
      Variant local_78[24];
      undefined8 local_60;
      undefined1 local_58[16];
      Variant local_48[8];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_a8, param_3);
      iVar4 = 0;
      Variant::Variant(local_90, param_4);
      Variant::Variant(local_78, in_R8D);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_f0);
      iVar3 = (int)local_f0;
      Array::resize(iVar3);
      pVVar2 = local_a8;
      do {
         iVar4 = iVar4 + 1;
         pVVar1 = (Variant*)Array::operator [](iVar3);
         Variant::operator =(pVVar1, pVVar2);
         pVVar2 = pVVar2 + 0x18;
      }
 while ( iVar4 != 3 );
      String::sprintf((Array*)local_e8, (bool*)CONCAT44(in_register_00000034, param_2));
      *(undefined8*)param_1 = local_e8[0];
      local_e8[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
      pVVar2 = local_48;
      Array::~Array(local_f0);
      do {
         pVVar1 = pVVar2 + -0x18;
         pVVar2 = pVVar2 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar2 != local_a8 );
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* WARNING: Removing unreachable block (ram,0x00104300) */
   /* String vformat<float, float, float>(String const&, float const, float const, float const) */
   String *vformat<float,float,float>(String *param_1, float param_2, float param_3, float param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      bool *in_RSI;
      int iVar3;
      int iVar4;
      long in_FS_OFFSET;
      Array local_f0[8];
      undefined8 local_e8[8];
      Variant local_a8[24];
      Variant local_90[24];
      Variant local_78[24];
      undefined8 local_60;
      undefined1 local_58[16];
      Variant local_48[8];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_a8, param_2);
      iVar4 = 0;
      Variant::Variant(local_90, param_3);
      Variant::Variant(local_78, param_4);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_f0);
      iVar3 = (int)local_f0;
      Array::resize(iVar3);
      pVVar2 = local_a8;
      do {
         iVar4 = iVar4 + 1;
         pVVar1 = (Variant*)Array::operator [](iVar3);
         Variant::operator =(pVVar1, pVVar2);
         pVVar2 = pVVar2 + 0x18;
      }
 while ( iVar4 != 3 );
      String::sprintf((Array*)local_e8, in_RSI);
      *(undefined8*)param_1 = local_e8[0];
      local_e8[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
      pVVar2 = local_48;
      Array::~Array(local_f0);
      do {
         pVVar1 = pVVar2 + -0x18;
         pVVar2 = pVVar2 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar2 != local_a8 );
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
   }

   /* WARNING: Removing unreachable block (ram,0x001045b0) */
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

   /* VoxelGIEditorPlugin::get_class() const */
   void VoxelGIEditorPlugin::get_class(void) {
      long lVar1;
      long lVar2;
      char *__s;
      long in_RSI;
      String *in_RDI;
      long in_FS_OFFSET;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      if (*(long*)( in_RSI + 8 ) == 0) {
         *(undefined8*)in_RDI = 0;
         String::parse_latin1(in_RDI, "VoxelGIEditorPlugin");
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

   /* HBoxContainer::get_class() const */
   void HBoxContainer::get_class(void) {
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

            LAB_001049d7:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

            goto LAB_001049d7;
         }

         lVar2 = *(long*)( lVar2 + 8 );
      }
 while ( true );
   }

   /* Node::is_class(String const&) const */
   undefined8 Node::is_class(Node *this, String *param_1) {
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

         if (cVar4 != '\0') goto LAB_00104adb;
      }

      cVar4 = String::operator ==(param_1, "Node");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Object::is_class((Object*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_00104adb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* VoxelGIEditorPlugin::VoxelGIEditorPlugin() [clone .cold] */
   void VoxelGIEditorPlugin::VoxelGIEditorPlugin(VoxelGIEditorPlugin *this) {
      code *pcVar1;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void>::call(CallableCustomMethodPointer<VoxelGIEditorPlugin,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
            goto LAB_00104d2f;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] == 0) goto LAB_00104d2f;
         lVar1 = *(long*)( this + 0x28 );
         UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
         lVar2 = *(long*)( this + 0x40 );
         if (param_2 == 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00104d08. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
               return;
            }

            goto LAB_00104de0;
         }

         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 0;
      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_00104d2f:local_40 = 0;
         String::parse_latin1((String*)&local_40, "\', can\'t call method.");
         uitos((ulong)local_50);
         operator+((char *)
         local_48,(String*)"Invalid Object id \'";
         String::operator +(local_38, (String*)local_48);
         _err_print_error(&_LC64, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
         CowData<char32_t>::_unref(local_48);
         CowData<char32_t>::_unref(local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_00104de0:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&>::call(CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                     uVar3 = _LC65;
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

               goto LAB_00104ebe;
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
      _err_print_error(&_LC64, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      LAB_00104ebe:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* Control::is_class(String const&) const */
   undefined8 Control::is_class(Control *this, String *param_1) {
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
         if (cVar4 != '\0') goto LAB_00105123;
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
            if (cVar4 != '\0') goto LAB_00105123;
         }

         cVar4 = String::operator ==(param_1, "CanvasItem");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = Node::is_class((Node*)this, param_1);
               return uVar5;
            }

            goto LAB_0010522e;
         }

      }

      LAB_00105123:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010522e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* VoxelGIEditorPlugin::is_class(String const&) const */
   undefined8 VoxelGIEditorPlugin::is_class(VoxelGIEditorPlugin *this, String *param_1) {
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
         if (cVar4 != '\0') goto LAB_00105313;
      }

      cVar4 = String::operator ==(param_1, "VoxelGIEditorPlugin");
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
            if (cVar4 != '\0') goto LAB_00105313;
         }

         cVar4 = String::operator ==(param_1, "EditorPlugin");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = Node::is_class((Node*)this, param_1);
               return uVar5;
            }

            goto LAB_0010541e;
         }

      }

      LAB_00105313:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010541e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* BoxContainer::is_class(String const&) const */
   undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
         if (cVar4 != '\0') goto LAB_00105503;
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
            if (cVar4 != '\0') goto LAB_00105503;
         }

         cVar4 = String::operator ==(param_1, "Container");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = Control::is_class((Control*)this, param_1);
               return uVar5;
            }

            goto LAB_0010560e;
         }

      }

      LAB_00105503:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010560e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* HBoxContainer::is_class(String const&) const */
   undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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

         if (cVar4 != '\0') goto LAB_0010571b;
      }

      cVar4 = String::operator ==(param_1, "HBoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = BoxContainer::is_class((BoxContainer*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_0010571b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* VoxelGIEditorPlugin::_notificationv(int, bool) */
   void VoxelGIEditorPlugin::_notificationv(VoxelGIEditorPlugin *this, int param_1, bool param_2) {
      int iVar1;
      iVar1 = (int)this;
      if (!param_2) {
         Node::_notification(iVar1);
         if ((code*)PTR__notification_0010a050 != Node::_notification) {
            EditorPlugin::_notification(iVar1);
         }

         if (param_1 == 0x11) {
            _notification(iVar1);
            return;
         }

         return;
      }

      if (param_1 == 0x11) {
         _notification(iVar1);
         if ((code*)PTR__notification_0010a050 == Node::_notification) goto LAB_00105830;
      }
 else if ((code*)PTR__notification_0010a050 == Node::_notification) goto LAB_00105830;
      EditorPlugin::_notification(iVar1);
      LAB_00105830:Node::_notification(iVar1);
      return;
   }

   /* VoxelGIEditorPlugin::_initialize_classv() */
   void VoxelGIEditorPlugin::_initialize_classv(void) {
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
               if ((code*)PTR__bind_methods_0010a048 != Node::_bind_methods) {
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
            if ((code*)PTR__bind_methods_0010a058 != Node::_bind_methods) {
               EditorPlugin::_bind_methods();
            }

            if ((code*)PTR__bind_compatibility_methods_0010a060 != Object::_bind_compatibility_methods) {
               EditorPlugin::_bind_compatibility_methods();
            }

            EditorPlugin::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "EditorPlugin");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "VoxelGIEditorPlugin");
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
               if (pvVar3 == (void*)0x0) goto LAB_00105c9f;
            }

         }

         Memory::free_static(pvVar3, false);
         Memory::free_static(*(void**)( this + 0x20 ), false);
      }

      LAB_00105c9f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
      return;
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
      local_78 = &_LC19;
      local_88 = 0;
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = &_LC19;
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

   /* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void EditorPlugin::_get_property_listv(EditorPlugin *this, List *param_1, bool param_2) {
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
      local_78 = "EditorPlugin";
      local_70 = 0xc;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "EditorPlugin";
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

   /* VoxelGIEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void VoxelGIEditorPlugin::_get_property_listv(VoxelGIEditorPlugin *this, List *param_1, bool param_2) {
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
         EditorPlugin::_get_property_listv((EditorPlugin*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "VoxelGIEditorPlugin";
      local_70 = 0x13;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "VoxelGIEditorPlugin";
      local_98 = 0;
      local_70 = 0x13;
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

      StringName::StringName((StringName*)&local_78, "VoxelGIEditorPlugin", false);
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

      if ((code*)PTR__get_property_list_0010a068 != Object::_get_property_list) {
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

      if ((code*)PTR__get_property_list_0010a070 != CanvasItem::_get_property_list) {
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

   /* VoxelGIEditorPlugin::_bake() */
   void VoxelGIEditorPlugin::_GLOBAL__sub_I__bake(void) {
      if (EditorFileDialog::base_property_helper != '\0') {
         return;
      }

      EditorFileDialog::base_property_helper = 1;
      EditorFileDialog::base_property_helper._56_8_ = 2;
      EditorFileDialog::base_property_helper._64_8_ = 0;
      EditorFileDialog::base_property_helper._0_16_ = (undefined1[16])0x0;
      EditorFileDialog::base_property_helper._24_16_ = (undefined1[16])0x0;
      EditorFileDialog::base_property_helper._40_16_ = (undefined1[16])0x0;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, EditorFileDialog::base_property_helper, &__dso_handle);
      return;
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

   /* WARNING: Control flow encountered bad instruction data */
   /* EditorPlugin::~EditorPlugin() */
   void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* HBoxContainer::~HBoxContainer() */
   void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<VoxelGIEditorPlugin,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<VoxelGIEditorPlugin, void, String
   const&>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<VoxelGIEditorPlugin,void,String_const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


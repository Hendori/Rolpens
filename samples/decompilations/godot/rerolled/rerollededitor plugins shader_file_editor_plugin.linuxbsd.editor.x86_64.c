/* ShaderFileEditorPlugin::make_visible(bool) */void ShaderFileEditorPlugin::make_visible(ShaderFileEditorPlugin *this, bool param_1) {
   char cVar1;
   if (param_1) {
      CanvasItem::show();
      EditorBottomPanel::make_item_visible(*(Control**)( EditorNode::singleton + 0xa40 ), SUB81(*(undefined8*)( this + 0x660 ), 0), true);
      return;
   }

   CanvasItem::hide();
   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 == '\0') {
      return;
   }

   EditorBottomPanel::hide_bottom_panel();
   return;
}
/* ShaderFileEditorPlugin::handles(Object*) const */bool ShaderFileEditorPlugin::handles(ShaderFileEditorPlugin *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &RDShaderFile::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
/* ShaderFileEditor::_update_version(StringName const&, RenderingDeviceCommons::ShaderStage) */void ShaderFileEditor::_update_version(void) {
   return;
}
/* ShaderFileEditorPlugin::~ShaderFileEditorPlugin() */void ShaderFileEditorPlugin::~ShaderFileEditorPlugin(ShaderFileEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_0010ee40;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   return;
}
/* ShaderFileEditorPlugin::~ShaderFileEditorPlugin() */void ShaderFileEditorPlugin::~ShaderFileEditorPlugin(ShaderFileEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_0010ee40;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   operator_delete(this, 0x670);
   return;
}
/* Container::initialize_class() [clone .part.0] */void Container::initialize_class(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (Control::initialize_class() == '\0') {
      if (CanvasItem::initialize_class() == '\0') {
         if (Node::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Node");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if ((code*)PTR__bind_methods_00113010 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node";
         local_68 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "CanvasItem";
         local_70 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CanvasItem::_bind_methods();
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
         }

         CanvasItem::initialize_class()::initialized =
         '\x01';
      }

      local_68 = 0;
      local_58 = "CanvasItem";
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "Control";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      Control::_bind_methods();
      Control::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "Control";
   local_68 = 0;
   local_50 = 7;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
   local_58 = "Container";
   local_70 = 0;
   local_50 = 9;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
   ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if ((code*)PTR__bind_methods_00113008 != Control::_bind_methods) {
      Container::_bind_methods();
   }

   initialize_class()::initialized =
   1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
/* WARNING: Removing unreachable block (ram,0x00100a00) *//* WARNING: Removing unreachable block (ram,0x00100d60) *//* WARNING: Removing unreachable block (ram,0x00100ca9) *//* WARNING: Removing unreachable block (ram,0x00100d98) *//* WARNING: Removing unreachable block (ram,0x00100da8) *//* WARNING: Removing unreachable block (ram,0x00100d73) *//* WARNING: Removing unreachable block (ram,0x00100d93) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* ShaderFileEditor::ShaderFileEditor() */void ShaderFileEditor::ShaderFileEditor(ShaderFileEditor *this) {
   long *plVar1;
   code *pcVar2;
   Vector2 *pVVar3;
   StringName *pSVar4;
   char *__s;
   char cVar5;
   SplitContainer *this_00;
   ItemList *this_01;
   BoxContainer *this_02;
   BoxContainer *this_03;
   ButtonGroup *this_04;
   Button *this_05;
   size_t sVar6;
   RichTextLabel *this_06;
   ButtonGroup *pBVar7;
   long lVar8;
   long in_FS_OFFSET;
   float fVar9;
   ButtonGroup *local_b0;
   undefined8 local_a8[2];
   char *local_98;
   size_t local_90;
   Vector2i *local_88;
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   PanelContainer::PanelContainer((PanelContainer*)this);
   *(undefined8*)( this + 0xa18 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010e750;
   *(undefined8*)( this + 0xa48 ) = 0;
   *(undefined1(*) [16])( this + 0xa08 ) = (undefined1[16])0x0;
   singleton = this;
   this_00 = (SplitContainer*)operator_new(0xa70, "");
   SplitContainer::SplitContainer(this_00, false);
   this_00[0xa68] = (SplitContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_0010eac8;
   postinitialize_handler((Object*)this_00);
   Node::add_child(this, this_00, 0, 0);
   this_01 = (ItemList*)operator_new(0xb80, "");
   ItemList::ItemList(this_01);
   postinitialize_handler((Object*)this_01);
   *(ItemList**)( this + 0xa18 ) = this_01;
   Node::set_auto_translate_mode(this_01, 2);
   plVar1 = *(long**)( this + 0xa18 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<ShaderFileEditor,int>((ShaderFileEditor*)&local_98, (char*)this, (_func_void_int*)"&ShaderFileEditor::_version_selected");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x260, (ShaderFileEditor*)&local_98, 0);
   Callable::~Callable((Callable*)&local_98);
   pVVar3 = *(Vector2**)( this + 0xa18 );
   fVar9 = (float)EditorScale::get_scale();
   local_78[1] = 0;
   local_78[0] = (int)( fVar9 * __LC35 );
   local_88 = (Vector2i*)Vector2i::operator_cast_to_Vector2((Vector2i*)local_78);
   Control::set_custom_minimum_size(pVVar3);
   pSVar4 = *(StringName**)( this + 0xa18 );
   StringName::StringName((StringName*)&local_98, "TreeSecondary", false);
   Control::set_theme_type_variation(pSVar4);
   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(this_00, *(undefined8*)( this + 0xa18 ), 0, 0);
   this_02 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_02, true);
   this_02[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_02 = &PTR__initialize_classv_0010e3d8;
   postinitialize_handler((Object*)this_02);
   Control::set_h_size_flags(this_02, 3);
   Node::add_child(this_00, this_02, 0, 0);
   this_03 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_03, false);
   this_03[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_03 = &PTR__initialize_classv_0010e060;
   postinitialize_handler((Object*)this_03);
   *(BoxContainer**)( this + 0xa10 ) = this_03;
   Node::add_child(this_02, this_03, 0, 0);
   local_b0 = (ButtonGroup*)0x0;
   this_04 = (ButtonGroup*)operator_new(0x270, "");
   ButtonGroup::ButtonGroup(this_04);
   postinitialize_handler((Object*)this_04);
   cVar5 = RefCounted::init_ref();
   if (cVar5 != '\0') {
      pBVar7 = local_b0;
      if (( this_04 != (ButtonGroup*)0x0 ) && ( cVar5 = RefCounted::reference() ),pBVar7 = this_04,local_b0 = this_04,cVar5 == '\0') {
         local_b0 = (ButtonGroup*)0x0;
      }

      cVar5 = RefCounted::unreference();
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)pBVar7) ),cVar5 != '\0') {
         ( **(code**)( *(long*)pBVar7 + 0x140 ) )(pBVar7);
         Memory::free_static(pBVar7, false);
      }

   }

   lVar8 = 0;
   do {
      this_05 = (Button*)operator_new(0xc10, "");
      local_a8[0] = 0;
      __s = ( &ShaderFileEditor()::stage_str )[lVar8];
      sVar6 = 0;
      if (__s != (char*)0x0) {
         sVar6 = strlen(__s);
      }

      local_98 = __s;
      local_90 = sVar6;
      String::parse_latin1((StrRange*)local_a8);
      Button::Button(this_05, (String_conflict*)local_a8);
      postinitialize_handler((Object*)this_05);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      BaseButton::set_toggle_mode(SUB81(this_05, 0));
      Control::set_focus_mode(this_05, 0);
      Node::add_child(*(undefined8*)( this + 0xa10 ), this_05, 0, 0);
      *(Button**)( this + lVar8 * 8 + 0xa20 ) = this_05;
      BaseButton::set_button_group((Ref*)this_05);
      pcVar2 = *(code**)( *(long*)this_05 + 0x108 );
      create_custom_callable_function_pointer<ShaderFileEditor,int>((ShaderFileEditor*)&local_98, (char*)this, (_func_void_int*)"&ShaderFileEditor::_version_selected");
      Variant::Variant((Variant*)local_78, (int)lVar8);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_88 = (Vector2i*)local_78;
      Callable::bindp((Variant**)local_a8, (int)(ShaderFileEditor*)&local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar8 = lVar8 + 1;
      ( *pcVar2 )(this_05, SceneStringNames::singleton + 0x238, (StrRange*)local_a8);
      Callable::~Callable((Callable*)local_a8);
      Callable::~Callable((Callable*)&local_98);
   }
 while ( lVar8 != 5 );
   this_06 = (RichTextLabel*)operator_new(0xcf0, "");
   local_98 = (char*)0x0;
   RichTextLabel::RichTextLabel(this_06, (String_conflict*)&local_98);
   postinitialize_handler((Object*)this_06);
   *(RichTextLabel**)( this + 0xa48 ) = this_06;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   Control::set_v_size_flags(*(undefined8*)( this + 0xa48 ), 3);
   RichTextLabel::set_selection_enabled(SUB81(*(undefined8*)( this + 0xa48 ), 0));
   RichTextLabel::set_context_menu_enabled(SUB81(*(undefined8*)( this + 0xa48 ), 0));
   Node::add_child(this_02, *(undefined8*)( this + 0xa48 ), 0, 0);
   if (( ( local_b0 != (ButtonGroup*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_b0 + 0x140 ))(local_b0);
   Memory::free_static(local_b0, false);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ShaderFileEditorPlugin::ShaderFileEditorPlugin() */void ShaderFileEditorPlugin::ShaderFileEditorPlugin(ShaderFileEditorPlugin *this) {
   undefined8 uVar1;
   char cVar2;
   ShaderFileEditor *this_00;
   undefined8 uVar3;
   long in_FS_OFFSET;
   float fVar4;
   undefined8 local_88;
   undefined8 local_80;
   Object *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::Node((Node*)this);
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   *(code**)this = Node::_bind_methods;
   *(undefined2*)( this + 0x408 ) = 0;
   StringName::StringName((StringName*)( this + 0x420 ), "_forward_canvas_gui_input", false);
   this[0x428] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
   this[0x440] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
   this[0x458] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
   this[0x470] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x478 ) = 0;
   StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
   this[0x488] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x490 ) = 0;
   StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
   this[0x4a0] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x4a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
   this[0x4b8] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
   this[0x4d0] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
   this[0x4e8] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x4f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
   this[0x500] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x508 ) = 0;
   StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
   this[0x518] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x520 ) = 0;
   StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
   this[0x530] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x538 ) = 0;
   StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
   this[0x548] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x550 ) = 0;
   StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
   this[0x560] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x568 ) = 0;
   StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
   this[0x578] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x580 ) = 0;
   StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
   this[0x590] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x598 ) = 0;
   StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
   this[0x5a8] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
   this[0x5c0] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x5c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
   this[0x5d8] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
   this[0x5f0] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
   this[0x608] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x610 ) = 0;
   StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
   this[0x620] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x628 ) = 0;
   StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
   this[0x638] = (ShaderFileEditorPlugin)0x0;
   *(undefined8*)( this + 0x640 ) = 0;
   StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
   this[0x650] = (ShaderFileEditorPlugin)0x0;
   *(undefined***)this = &PTR__initialize_classv_0010ee40;
   *(undefined8*)( this + 0x668 ) = 0;
   *(undefined1(*) [16])( this + 0x658 ) = (undefined1[16])0x0;
   this_00 = (ShaderFileEditor*)operator_new(0xa50, "");
   ShaderFileEditor::ShaderFileEditor(this_00);
   postinitialize_handler((Object*)this_00);
   *(ShaderFileEditor**)( this + 0x660 ) = this_00;
   fVar4 = (float)EditorScale::get_scale();
   local_48 = CONCAT44(fVar4 * _LC63._4_4_, fVar4 * (float)_LC63);
   Control::set_custom_minimum_size(this_00);
   local_60 = 0;
   uVar3 = *(undefined8*)( EditorNode::singleton + 0xa40 );
   local_58 = "";
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Toggle ShaderFile Bottom Panel";
   local_68 = 0;
   local_50 = 0x1e;
   String::parse_latin1((StrRange*)&local_68);
   local_58 = "bottom_panels/toggle_shader_file_bottom_panel";
   local_70 = 0;
   local_50 = 0x2d;
   String::parse_latin1((StrRange*)&local_70);
   ED_SHORTCUT_AND_COMMAND(&local_78, (StrRange*)&local_70, (StrRange*)&local_68, 0);
   uVar1 = *(undefined8*)( this + 0x660 );
   local_58 = "";
   local_80 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_58 = "ShaderFile";
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_88);
   TTR((String_conflict*)&local_58, (String_conflict*)&local_88);
   uVar3 = EditorBottomPanel::add_item(uVar3, (String_conflict*)&local_58, uVar1, &local_78, 0);
   *(undefined8*)( this + 0x668 ) = uVar3;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (local_78 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_78);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
            Memory::free_static(local_78, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      CanvasItem::hide();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderFileEditor::_version_selected(int) */void ShaderFileEditor::_version_selected(int param_1) {
   long *plVar1;
   Ref *pRVar2;
   String_conflict *pSVar3;
   Object *pOVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   Object *pOVar8;
   long lVar9;
   undefined4 in_register_0000003c;
   StringName *pSVar10;
   CowData *pCVar11;
   CowData *pCVar12;
   long in_FS_OFFSET;
   Object *local_c8;
   long local_90;
   long local_88;
   long local_80;
   Object *local_78;
   undefined8 local_70;
   Object *local_68;
   long local_60;
   int local_58[6];
   long local_40;
   pSVar10 = (StringName*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ItemList::get_current();
   ItemList::get_item_metadata((int)local_58);
   Variant::operator_cast_to_StringName((Variant*)&local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   RDShaderFile::get_spirv((StringName*)&local_88);
   if (local_88 == 0) {
      _err_print_error("_version_selected", "editor/plugins/shader_file_editor_plugin.cpp", 0x39, "Condition \"bytecode.is_null()\" is true.", 0, 0);
   }
 else {
      lVar9 = 0;
      uVar7 = 0xffffffff;
      pCVar12 = (CowData*)( local_88 + 0x248 );
      pCVar11 = (CowData*)( local_88 + 0x290 );
      do {
      local_60 = 0;
      if ((*(long *)pCVar12 == 0) ||
         (CowData<unsigned_char>::_ref((CowData<unsigned_char> *)&local_60,pCVar12), local_60 == 0))
      {
        local_70 = 0;
        local_78 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,pCVar11);
        cVar5 = String::operator==((String_conflict *)&local_78,(String_conflict *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (cVar5 == '\0') goto LAB_0010163a;
        local_68 = (Object *)0x0;
        Button::set_button_icon(*(Ref **)(pSVar10 + lVar9 * 8 + 0xa20));
        if ((local_68 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
          local_c8 = local_68;
          cVar5 = predelete_handler(local_68);
          if (cVar5 == '\0') goto LAB_001015dd;
LAB_001017ab:
          (**(code **)(*(long *)local_c8 + 0x140))();
          Memory::free_static(local_c8,false);
        }
      }
      else {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_60 + -0x10),false);
        }
LAB_0010163a:
        local_78 = (Object *)0x0;
        local_68 = (Object *)0x0;
        local_70 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar11);
        cVar5 = String::operator!=((String_conflict *)&local_70,(String_conflict *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (cVar5 == '\0') {
          if ((_version_selected(int)::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&_version_selected(int)::{lambda()#2}::operator()()::sname
                                         ), iVar6 != 0)) {
            _scs_create((char *)&_version_selected(int)::{lambda()#2}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_version_selected(int)::{lambda()#2}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_version_selected(int)::{lambda()#2}::operator()()::sname);
          }
        }
        else if ((_version_selected(int)::{lambda()#1}::operator()()::sname == '\0') &&
                (iVar6 = __cxa_guard_acquire(&_version_selected(int)::{lambda()#1}::operator()()::
                                              sname), iVar6 != 0)) {
          _scs_create((char *)&_version_selected(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_version_selected(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_version_selected(int)::{lambda()#1}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_68);
        pOVar4 = local_78;
        pOVar8 = local_78;
        if (local_68 == local_78) {
LAB_00101582:
          if (((pOVar8 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar4 = local_68, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))();
            Memory::free_static(pOVar4,false);
          }
        }
        else {
          local_78 = local_68;
          if (local_68 != (Object *)0x0) {
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_78 = (Object *)0x0;
            }
            pOVar8 = local_68;
            if (pOVar4 != (Object *)0x0) goto LAB_00101563;
            goto LAB_00101582;
          }
          if (pOVar4 != (Object *)0x0) {
LAB_00101563:
            cVar5 = RefCounted::unreference();
            pOVar8 = local_68;
            if ((cVar5 != '\0') &&
               (cVar5 = predelete_handler(pOVar4), pOVar8 = local_68, cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
              pOVar8 = local_68;
            }
            goto LAB_00101582;
          }
        }
        Button::set_button_icon(*(Ref **)(pSVar10 + lVar9 * 8 + 0xa20));
        if (uVar7 == 0xffffffff) {
          uVar7 = (uint)lVar9;
        }
        cVar5 = BaseButton::is_pressed();
        if (cVar5 != '\0') {
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
          RichTextLabel::clear();
          goto LAB_0010183f;
        }
        if ((local_78 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
          local_c8 = local_78;
          cVar5 = predelete_handler(local_78);
          if (cVar5 != '\0') goto LAB_001017ab;
        }
   }

   LAB_001015dd:lVar9 = lVar9 + 1;
   pCVar12 = pCVar12 + 0x10;
   pCVar11 = pCVar11 + 8;
}
while (lVar9 != 5) ;;;RichTextLabel::clear();if (uVar7 == 0xffffffff) {
   pSVar3 = *(String_conflict**)( pSVar10 + 0xa48 );
   local_70 = 0;
   String::parse_latin1((String_conflict*)&local_70, "");
   local_78 = (Object*)0x0;
   String::parse_latin1((String_conflict*)&local_78, "No valid shader stages found.");
   TTR((String_conflict*)&local_68, (String_conflict*)&local_78);
   RichTextLabel::add_text(pSVar3);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
}
 else {
   BaseButton::set_pressed(SUB81(*(undefined8*)( pSVar10 + (long)(int)uVar7 * 8 + 0xa20 ), 0));
   pCVar11 = (CowData*)( local_88 + 0x290 + (long)(int)uVar7 * 8 );
   if (uVar7 < 5) {
      LAB_0010183f:local_80 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, pCVar11);
   }
 else {
      _err_print_index_error("get_stage_compile_error", "./servers/rendering/rendering_device_binds.h", 0x13f, (ulong)uVar7, 5, "p_stage", "RD::SHADER_STAGE_MAX", "", false, false);
      local_80 = 0;
   }

   pRVar2 = *(Ref**)( pSVar10 + 0xa48 );
   if ((_version_selected(int)::{lambda()
   #3
   (iVar6 = __cxa_guard_acquire(&_version_selected(int)::{lambda()
   #3
   iVar6 != 0))
   {
      _scs_create((char *)&_version_selected(int)::{lambda()
      #3
      __cxa_atexit(StringName::~StringName,
                     &_version_selected(int)::{lambda()
      #3
      __cxa_guard_release(&_version_selected(int)::{lambda()
      #3
   }

   Control::get_theme_font((StringName*)&local_68, pSVar10);
   RichTextLabel::push_font(pRVar2, (int)(String_conflict*)&local_68);
   if (( ( local_68 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_68,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
pSVar3 = *(String_conflict**)( pSVar10 + 0xa48 );if (( local_80 == 0 ) || ( *(uint*)( local_80 + -8 ) < 2 )) {
   local_70 = 0;
   String::parse_latin1((String_conflict*)&local_70, "");
   local_78 = (Object*)0x0;
   String::parse_latin1((String_conflict*)&local_78, "Shader stage compiled without errors.");
   TTR((String_conflict*)&local_68, (String_conflict*)&local_78);
   RichTextLabel::add_text(pSVar3);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
}
 else {
   RichTextLabel::add_text(pSVar3);
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);}
  }Ref<RDShaderSPIRV>::unref((Ref<RDShaderSPIRV>*)&local_88);if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
   StringName::unref();
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   StringName *this_00;
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
   if (lVar2 * 8 != 0) {
      uVar6 = lVar2 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar5 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_00 = (StringName*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            StringName::StringName(this_00, (StringName*)( *(long*)this + lVar1 ));
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar5 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* ShaderFileEditor::_update_options() */void ShaderFileEditor::_update_options(ShaderFileEditor *this) {
   long *plVar1;
   uint uVar2;
   undefined8 uVar3;
   Ref *pRVar4;
   String_conflict *pSVar5;
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
   code *pcVar22;
   Object *pOVar23;
   char cVar24;
   uint uVar25;
   int iVar26;
   uint uVar27;
   uint uVar28;
   int iVar29;
   long lVar30;
   Object *pOVar31;
   undefined1 *puVar32;
   ShaderFileEditor *pSVar33;
   long lVar34;
   CowData *pCVar35;
   char *pcVar36;
   CowData *pCVar37;
   undefined1 uVar38;
   uint uVar39;
   uint uVar40;
   uint uVar41;
   long lVar42;
   char cVar43;
   ulong uVar44;
   long lVar45;
   long in_FS_OFFSET;
   int local_b0;
   int local_9c;
   undefined8 local_80;
   Object *local_78;
   long local_70;
   Object *local_68;
   Object *local_60;
   Object *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xa08 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_update_options", "editor/plugins/shader_file_editor_plugin.cpp", 0x6a, "Condition \"shader_file.is_null()\" is true.", 0, 0);
         return;
      }

      goto LAB_00102b87;
   }

   local_58 = (Object*)0x0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( *(long*)( this + 0xa08 ) + 0x270 ));
   if (( local_58 == (Object*)0x0 ) || ( uVar3 = *(undefined8*)( local_58 + -8 ) ),(int)uVar3 == 0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      LAB_00101e28:CanvasItem::show();
      CanvasItem::show();
      uVar25 = ItemList::get_current();
      ItemList::clear();
      RDShaderFile::get_version_list();
      iVar26 = Array::size();
      if (iVar26 <= (int)uVar25) {
         iVar26 = Array::size();
         uVar25 = iVar26 - 1;
      }

      uVar2 = 0;
      local_78 = (Object*)0x0;
      uVar27 = 0;
      if (-1 < (int)uVar25) {
         uVar27 = uVar25;
      }

      for (; iVar26 = Array::size(),(int)uVar2 < iVar26; uVar2 = uVar2 + 1) {
         iVar26 = (int)(Array*)&local_80;
         Array::operator [](iVar26);
         Variant::operator_cast_to_String((Variant*)&local_70);
         if (( local_70 == 0 ) || ( *(uint*)( local_70 + -8 ) < 2 )) {
            local_50[0] = 7;
            local_58 = (Object*)0x10829d;
            String::parse_latin1((StrRange*)&local_70);
         }

         local_68 = (Object*)0x0;
         lVar34 = *(long*)( this + 0xa08 );
         Array::operator [](iVar26);
         Variant::operator_cast_to_StringName((Variant*)&local_58);
         if (( *(long*)( lVar34 + 0x248 ) == 0 ) || ( *(int*)( lVar34 + 0x26c ) == 0 )) {
            LAB_001024f8:_err_print_error("get_spirv", "./servers/rendering/rendering_device_binds.h", 0x168, "Condition \"!versions.has(p_version)\" is true. Returning: Ref<RDShaderSPIRV>()", 0, 0);
            LAB_00102526:local_60 = (Object*)0x0;
            if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
               StringName::unref();
            }

            _err_print_error("_update_options", "editor/plugins/shader_file_editor_plugin.cpp", 0x90, "Condition \"bytecode.is_null()\" is true.", 0, 0);
            Ref<RDShaderSPIRV>::unref((Ref<RDShaderSPIRV>*)&local_60);
            Ref<Texture2D>::unref((Ref<Texture2D>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            goto LAB_00102582;
         }

         uVar25 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar34 + 0x268 ) * 4 );
         uVar44 = CONCAT44(0, uVar25);
         lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar34 + 0x268 ) * 8 );
         if (local_58 == (Object*)0x0) {
            uVar28 = StringName::get_empty_hash();
         }
 else {
            uVar28 = *(uint*)( local_58 + 0x20 );
         }

         lVar42 = *(long*)( lVar34 + 0x250 );
         if (uVar28 == 0) {
            uVar28 = 1;
         }

         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar28 * lVar45;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar44;
         lVar30 = SUB168(auVar6 * auVar14, 8);
         uVar39 = *(uint*)( lVar42 + lVar30 * 4 );
         iVar29 = SUB164(auVar6 * auVar14, 8);
         if (uVar39 == 0) goto LAB_001024f8;
         uVar41 = 0;
         while (( uVar28 != uVar39 || ( *(Object**)( *(long*)( *(long*)( lVar34 + 0x248 ) + lVar30 * 8 ) + 0x10 ) != local_58 ) )) {
            uVar41 = uVar41 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(iVar29 + 1) * lVar45;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar44;
            lVar30 = SUB168(auVar7 * auVar15, 8);
            uVar39 = *(uint*)( lVar42 + lVar30 * 4 );
            iVar29 = SUB164(auVar7 * auVar15, 8);
            if (( uVar39 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar39 * lVar45,auVar16._8_8_ = 0,auVar16._0_8_ = uVar44,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar25 + iVar29 ) - SUB164(auVar8 * auVar16, 8)) * lVar45,auVar17._8_8_ = 0,auVar17._0_8_ = uVar44,SUB164(auVar9 * auVar17, 8) < uVar41) goto LAB_001024f8;
         }
;
         if (( *(long*)( lVar34 + 0x248 ) == 0 ) || ( *(int*)( lVar34 + 0x26c ) == 0 )) {
            LAB_001024c8:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar22 = (code*)invalidInstructionException();
            ( *pcVar22 )();
         }

         uVar25 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar34 + 0x268 ) * 4 );
         uVar44 = CONCAT44(0, uVar25);
         lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar34 + 0x268 ) * 8 );
         if (local_58 == (Object*)0x0) {
            uVar28 = StringName::get_empty_hash();
            lVar42 = *(long*)( lVar34 + 0x250 );
         }
 else {
            uVar28 = *(uint*)( local_58 + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar28 * lVar45;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar44;
         lVar30 = SUB168(auVar10 * auVar18, 8);
         uVar39 = *(uint*)( lVar42 + lVar30 * 4 );
         uVar41 = SUB164(auVar10 * auVar18, 8);
         if (uVar39 == 0) goto LAB_001024c8;
         uVar40 = 0;
         while (( uVar39 != uVar28 || ( *(Object**)( *(long*)( *(long*)( lVar34 + 0x248 ) + lVar30 * 8 ) + 0x10 ) != local_58 ) )) {
            uVar40 = uVar40 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar41 + 1) * lVar45;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar44;
            lVar30 = SUB168(auVar11 * auVar19, 8);
            uVar39 = *(uint*)( lVar42 + lVar30 * 4 );
            uVar41 = SUB164(auVar11 * auVar19, 8);
            if (( uVar39 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar39 * lVar45,auVar20._8_8_ = 0,auVar20._0_8_ = uVar44,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar25 + uVar41 ) - SUB164(auVar12 * auVar20, 8)) * lVar45,auVar21._8_8_ = 0,auVar21._0_8_ = uVar44,SUB164(auVar13 * auVar21, 8) < uVar40) goto LAB_001024c8;
         }
;
         pOVar31 = *(Object**)( *(long*)( *(long*)( lVar34 + 0x248 ) + (ulong)uVar41 * 8 ) + 0x18 );
         if (pOVar31 == (Object*)0x0) goto LAB_00102526;
         local_60 = pOVar31;
         cVar24 = RefCounted::reference();
         if (cVar24 == '\0') goto LAB_00102526;
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         pCVar35 = (CowData*)( pOVar31 + 0x290 );
         cVar43 = '\0';
         do {
            local_58 = (Object*)0x0;
            if (( ( *(long*)pCVar35 != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, pCVar35),local_58 != (Object*)0x0 ) ) && ( 1 < *(uint*)( local_58 + -8 ) )) {
               cVar43 = cVar24;
            }

            pCVar35 = pCVar35 + 8;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         }
 while ( (CowData*)( pOVar31 + 0x2b8 ) != pCVar35 );
         if (cVar43 == '\0') {
            if (_update_options()::{lambda()
            #3
            puVar32 = &_update_options()::{lambda()
            #3
            pcVar36 = (char *)&_update_options()::{lambda()
            #3
            iVar29 = __cxa_guard_acquire(&_update_options()::{lambda()#3}::operator()()::sname);
          if (iVar29 != 0) {
            uVar38 = 0xe0;
            goto LAB_001025f0;
          }
        }
      }
      else if (_update_options()::{lambda()#2}::operator()()::sname == '\0') {
        puVar32 = &_update_options()::{lambda()#2}::operator()()::sname;
        pcVar36 = (char *)&_update_options()::{lambda()#2}::operator()()::sname;
        iVar29 = __cxa_guard_acquire(&_update_options()::{lambda()#2}::operator()()::sname);
        uVar38 = 0xd5;
        if (iVar29 != 0) {
LAB_001025f0:
          _scs_create(pcVar36,(bool)uVar38);
          __cxa_atexit(StringName::~StringName,pcVar36,&__dso_handle);
          __cxa_guard_release(puVar32);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_58);
      pOVar23 = local_68;
      pOVar31 = local_68;
      if (local_58 == local_68) {
LAB_0010221e:
        if (((pOVar31 != (Object *)0x0) &&
            (cVar24 = RefCounted::unreference(), pOVar31 = local_58, cVar24 != '\0')) &&
           (cVar24 = predelete_handler(local_58), cVar24 != '\0')) {
          (**(code **)(*(long *)pOVar31 + 0x140))(pOVar31);
          Memory::free_static(pOVar31,false);
        }
      }
      else, {
                  local_68 = local_58;
                  if (local_58 != (Object*)0x0) {
                     cVar24 = RefCounted::reference();
                     if (cVar24 == '\0') {
                        local_68 = (Object*)0x0;
                     }

                     pOVar31 = local_58;
                     if (pOVar23 != (Object*)0x0) {
                        cVar24 = RefCounted::unreference();
                        pOVar31 = local_58;
                        goto joined_r0x00102633;
                     }

                     goto LAB_0010221e;
                  }

                  if (pOVar23 != (Object*)0x0) {
                     cVar24 = RefCounted::unreference();
                     pOVar31 = local_58;
                     joined_r0x00102633:local_58 = pOVar31;
                     if (( cVar24 != '\0' ) && ( cVar24 = predelete_handler(pOVar23) ),pOVar31 = local_58,cVar24 != '\0') {
                        ( **(code**)( *(long*)pOVar23 + 0x140 ) )(pOVar23);
                        Memory::free_static(pOVar23, false);
                        pOVar31 = local_58;
                     }

                     goto LAB_0010221e;
                  }

               }
, ItemList::add_item(*(String_conflict **)(this + 0xa18),(Ref*)&local_70,SUB81(&local_68, 0);
            uVar3 = *(undefined8*)( this + 0xa18 );
            Array::operator [](iVar26);
            ItemList::set_item_metadata((int)uVar3, (Variant*)(ulong)uVar2);
            if (uVar27 == uVar2) {
               ItemList::select((int)*(undefined8*)( this + 0xa18 ), SUB41(uVar27, 0));
               Array::operator [](iVar26);
               Variant::operator_cast_to_StringName((Variant*)&local_58);
               if (local_78 == local_58) {
                  if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
                     StringName::unref();
                  }

               }
 else {
                  StringName::unref();
                  local_78 = local_58;
               }

            }

            pOVar31 = local_60;
            if (( ( local_60 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar31 + 0x140 ))(pOVar31);
            Memory::free_static(pOVar31, false);
         }

         if (( ( local_68 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),pOVar31 = local_68,cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar31 + 0x140 ))(pOVar31);
         Memory::free_static(pOVar31, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   iVar26 = Array::size();
   if (iVar26 == 0) {
      pSVar33 = this + 0xa20;
      do {
         uVar3 = *(undefined8*)pSVar33;
         pSVar33 = pSVar33 + 8;
         BaseButton::set_disabled(SUB81(uVar3, 0));
      }
 while ( pSVar33 != this + 0xa48 );
      LAB_00102582:if (( StringName::configured != '\0' ) && ( local_78 != (Object*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      RDShaderFile::get_spirv((StringName*)&local_68);
      if (local_68 == (Object*)0x0) {
         _err_print_error("_update_options", "editor/plugins/shader_file_editor_plugin.cpp", 0xb1, "Condition \"bytecode.is_null()\" is true.", 0, 0);
         Ref<RDShaderSPIRV>::unref((Ref<RDShaderSPIRV>*)&local_68);
         goto LAB_00102582;
      }

      lVar34 = 0;
      pCVar35 = (CowData*)( local_68 + 0x248 );
      local_9c = -1;
      pCVar37 = (CowData*)( local_68 + 0x290 );
      local_b0 = -1;
      do {
         local_50[0] = 0;
         iVar26 = (int)lVar34;
         if (*(long*)pCVar35 == 0) {
            local_60 = (Object*)0x0;
            if (( *(long*)pCVar37 == 0 ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, pCVar37),local_60 == (Object*)0x0 )) {
               uVar38 = ( undefined1 ) * (undefined8*)( this + lVar34 * 8 + 0xa20 );
            }
 else {
               uVar38 = ( undefined1 ) * (undefined8*)( this + lVar34 * 8 + 0xa20 );
               lVar45 = 0;
               if (1 < *(uint*)( local_60 + -8 )) {
                  LAB_00102a81:BaseButton::set_disabled((bool)uVar38);
                  cVar24 = BaseButton::is_pressed();
                  if (cVar24 != '\0') {
                     local_b0 = iVar26;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  local_9c = iVar26;
                  if (lVar45 != 0) goto LAB_001029de;
                  goto LAB_001029fb;
               }

            }

            LAB_00102a66:BaseButton::set_disabled((bool)uVar38);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }
 else {
            CowData<unsigned_char>::_ref((CowData<unsigned_char>*)local_50, pCVar35);
            lVar45 = local_50[0];
            local_60 = (Object*)0x0;
            if (( *(long*)pCVar37 == 0 ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, pCVar37),local_60 == (Object*)0x0 )) {
               uVar38 = ( undefined1 ) * (undefined8*)( this + lVar34 * 8 + 0xa20 );
            }
 else {
               uVar38 = ( undefined1 ) * (undefined8*)( this + lVar34 * 8 + 0xa20 );
               if (1 < *(uint*)( local_60 + -8 )) goto LAB_00102a81;
            }

            if (lVar45 == 0) goto LAB_00102a66;
            BaseButton::set_disabled((bool)uVar38);
            cVar24 = BaseButton::is_pressed();
            if (cVar24 == '\0') {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            }
 else {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               local_b0 = iVar26;
            }

            LAB_001029de:LOCK();
            plVar1 = (long*)( lVar45 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            local_9c = iVar26;
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_50[0] + -0x10 ), false);
            }

         }

         LAB_001029fb:lVar34 = lVar34 + 1;
         pCVar35 = pCVar35 + 0x10;
         pCVar37 = pCVar37 + 8;
      }
 while ( lVar34 != 5 );
      if (( local_b0 == -1 ) && ( local_9c != -1 )) {
         BaseButton::set_pressed(SUB81(*(undefined8*)( this + (long)local_9c * 8 + 0xa20 ), 0));
      }

      _version_selected((int)this);
      Ref<RDShaderSPIRV>::unref((Ref<RDShaderSPIRV>*)&local_68);
      if (( StringName::configured != '\0' ) && ( local_78 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   Array::~Array((Array*)&local_80);
}
else{CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);if ((int)uVar3 == 1) goto LAB_00101e28;CanvasItem::hide();CanvasItem::hide();RichTextLabel::clear();pRVar4 = *(Ref**)( this + 0xa48 );if ((_update_options()::{lambda()#1( iVar26 = __cxa_guard_acquire(&_update_options()::{lambda()#1}::operator()()::sname),
       iVar26 != 0) );{
   _scs_create((char *)&_update_options()::{lambda()
   #1
   __cxa_atexit(StringName::~StringName, &_update_options()::, {
         lambda()
         #1
         &__dso_handle;
         __cxa_guard_release(&_update_options()::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_font((StringName *)&local_58,(StringName *)this);, RichTextLabel::push_font(pRVar4, (int)(CowData<char32_t>*)&local_58));
         if (( ( local_58 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),pOVar31 = local_58,cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar31 + 0x140 ))(pOVar31);
         Memory::free_static(pOVar31, false);
      }
, pSVar5 = *(String_conflict **)(this + 0xa48);
   Resource::get_path();
   String::get_file();
   local_78 = (Object*)0x0;
   String::parse_latin1((String_conflict*)&local_78, "");
   local_80 = 0;
   String::parse_latin1((String_conflict*)&local_80, "File structure for \'%s\' contains unrecoverable errors:\n\n");
   TTR((String_conflict*)&local_70, (String_conflict*)&local_80);
   vformat<String>((CowData<char32_t>*)&local_58, (String_conflict*)&local_70, (CowData<char32_t>*)&local_60);
   RichTextLabel::add_text(pSVar5);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_58 = (Object*)0x0;
   pSVar5 = *(String_conflict**)( this + 0xa48 );
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( *(long*)( this + 0xa08 ) + 0x270 ));
   RichTextLabel::add_text(pSVar5);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_00102b87:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ShaderFileEditor::_notification(int) */void ShaderFileEditor::_notification(ShaderFileEditor *this, int param_1) {
   char cVar1;
   if (param_1 != 0x3ec) {
      return;
   }

   cVar1 = CanvasItem::is_visible_in_tree();
   if (( cVar1 != '\0' ) && ( *(long*)( this + 0xa08 ) != 0 )) {
      _update_options(this);
      return;
   }

   return;
}
/* ShaderFileEditor::_editor_settings_changed() */void ShaderFileEditor::_editor_settings_changed(ShaderFileEditor *this) {
   char cVar1;
   cVar1 = CanvasItem::is_visible_in_tree();
   if (( cVar1 != '\0' ) && ( *(long*)( this + 0xa08 ) != 0 )) {
      _update_options(this);
      return;
   }

   return;
}
/* ShaderFileEditor::edit(Ref<RDShaderFile> const&) */void ShaderFileEditor::edit(ShaderFileEditor *this, Ref *param_1) {
   Callable *pCVar1;
   Callable *pCVar2;
   char cVar3;
   long in_FS_OFFSET;
   ShaderFileEditor aSStack_38[24];
   long local_20;
   pCVar1 = *(Callable**)param_1;
   pCVar2 = *(Callable**)( this + 0xa08 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pCVar1 == (Callable*)0x0) {
      if (pCVar2 != (Callable*)0x0) {
         create_custom_callable_function_pointer<ShaderFileEditor>(aSStack_38, (char*)this, (_func_void*)"&ShaderFileEditor::_shader_changed");
         Resource::disconnect_changed(pCVar2);
         Callable::~Callable((Callable*)aSStack_38);
      }

   }
 else if (pCVar1 != pCVar2) {
      *(Callable**)( this + 0xa08 ) = pCVar1;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         *(undefined8*)( this + 0xa08 ) = 0;
         if (pCVar2 != (Callable*)0x0) {
            cVar3 = RefCounted::unreference();
            joined_r0x00102ce7:if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pCVar2) ),cVar3 != '\0') {
               ( **(code**)( *(long*)pCVar2 + 0x140 ) )(pCVar2);
               Memory::free_static(pCVar2, false);
            }

            goto LAB_00102c70;
         }

      }
 else {
         if (pCVar2 != (Callable*)0x0) {
            cVar3 = RefCounted::unreference();
            goto joined_r0x00102ce7;
         }

         LAB_00102c70:pCVar1 = *(Callable**)( this + 0xa08 );
         if (pCVar1 != (Callable*)0x0) {
            create_custom_callable_function_pointer<ShaderFileEditor>(aSStack_38, (char*)this, (_func_void*)"&ShaderFileEditor::_shader_changed");
            Resource::connect_changed(pCVar1, (uint)aSStack_38);
            Callable::~Callable((Callable*)aSStack_38);
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _update_options(this);
         return;
      }

      goto LAB_00102d6c;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102d6c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShaderFileEditorPlugin::edit(Object*) */void ShaderFileEditorPlugin::edit(ShaderFileEditorPlugin *this, Object *param_1) {
   ShaderFileEditor *this_00;
   char cVar1;
   Object *pOVar2;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   this_00 = *(ShaderFileEditor**)( this + 0x660 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (Object*)0x0) {
      LAB_00102dd6:local_28 = (Object*)0x0;
      ShaderFileEditor::edit(this_00, (Ref*)&local_28);
   }
 else {
      pOVar2 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &RDShaderFile::typeinfo, 0);
      if (pOVar2 == (Object*)0x0) goto LAB_00102dd6;
      local_28 = pOVar2;
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') goto LAB_00102dd6;
      ShaderFileEditor::edit(this_00, (Ref*)&local_28);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(pOVar2);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar2, false);
               return;
            }

            goto LAB_00102e4f;
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102e4f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShaderFileEditor::_shader_changed() */void ShaderFileEditor::_shader_changed(ShaderFileEditor *this) {
   char cVar1;
   cVar1 = CanvasItem::is_visible_in_tree();
   if (cVar1 == '\0') {
      return;
   }

   _update_options(this);
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
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* EditorPlugin::selected_notify() */void EditorPlugin::selected_notify(void) {
   return;
}
/* EditorPlugin::edited_scene_changed() */void EditorPlugin::edited_scene_changed(void) {
   return;
}
/* ShaderFileEditorPlugin::is_class_ptr(void*) const */uint ShaderFileEditorPlugin::is_class_ptr(ShaderFileEditorPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x10f3, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f2, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ShaderFileEditorPlugin::_getv(StringName const&, Variant&) const */undefined8 ShaderFileEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderFileEditorPlugin::_setv(StringName const&, Variant const&) */undefined8 ShaderFileEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderFileEditorPlugin::_property_can_revertv(StringName const&) const */undefined8 ShaderFileEditorPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ShaderFileEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 ShaderFileEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ShaderFileEditorPlugin::has_main_screen() const */undefined8 ShaderFileEditorPlugin::has_main_screen(void) {
   return 0;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderFileEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderFileEditor,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderFileEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderFileEditor,void> *this) {
   return;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderFileEditor,void,int>::get_argument_count(CallableCustomMethodPointer<ShaderFileEditor,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ShaderFileEditor,void>::get_argument_count(CallableCustomMethodPointer<ShaderFileEditor,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderFileEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderFileEditor,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderFileEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderFileEditor,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ShaderFileEditor::_property_get_revertv(StringName const&, Variant&) const */undefined8 ShaderFileEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HSplitContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_00113018 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ShaderFileEditor::_property_can_revertv(StringName const&) const */undefined8 ShaderFileEditor::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* HSplitContainer::_property_can_revertv(StringName const&) const */undefined8 HSplitContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00113020 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ShaderFileEditorPlugin::_validate_propertyv(PropertyInfo&) const */void ShaderFileEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)PTR__validate_property_00113028 != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }

   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::adjust_heap(long, long, long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::adjust_heap(long param_1, long param_2, long param_3, StringName *param_4, long param_5) {
   byte *pbVar1;
   byte *pbVar2;
   uint uVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   long lVar9;
   byte *pbVar10;
   long lVar11;
   byte *pbVar12;
   StringName *pSVar13;
   StringName *this;
   long lVar14;
   long in_FS_OFFSET;
   StringName *local_50;
   long local_48;
   long local_40;
   lVar11 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = param_2;
   if (lVar11 < param_3) {
      do {
         lVar9 = lVar11 + -1;
         this(StringName * )(param_5 + ( lVar9 + param_1 ) * 8);
         pSVar13 = (StringName*)( param_5 + ( param_1 + lVar11 ) * 8 );
         lVar6 = *(long*)this;
         lVar5 = *(long*)pSVar13;
         if (lVar5 == 0) {
            if (lVar6 != 0) {
               pbVar10 = *(byte**)( lVar6 + 8 );
               uVar8 = 0;
               pbVar12 = &_LC0;
               LAB_0010340c:if (pbVar10 == (byte*)0x0) {
                  lVar5 = 0;
                  uVar3 = **(uint**)( lVar6 + 0x10 );
                  if (uVar3 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_001033c0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001033c0;
                        if (uVar3 < uVar8) break;
                        uVar8 = (uint)(char)pbVar12[lVar5 + 1];
                        uVar3 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
                        lVar5 = lVar5 + 1;
                     }
 while ( uVar8 != 0 || uVar3 != 0 );
                  }

               }
 else {
                  uVar3 = (uint)(char)*pbVar10;
                  bVar4 = (byte)uVar8 | *pbVar10;
                  LAB_0010345e:if (bVar4 != 0) {
                     lVar6 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_001033c0;
                        if (uVar3 == 0) break;
                        if (uVar8 < uVar3) goto LAB_001033c0;
                        if (uVar3 < uVar8) break;
                        pbVar1 = pbVar12 + lVar6;
                        uVar8 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar10 + lVar6;
                        uVar3 = (uint)(char)*pbVar2;
                        lVar6 = lVar6 + 1;
                     }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }

               }

            }

         }
 else {
            pbVar12 = *(byte**)( lVar5 + 8 );
            if (lVar6 == 0) {
               if (pbVar12 != (byte*)0x0) {
                  bVar4 = *pbVar12;
                  uVar8 = (uint)(char)bVar4;
                  pbVar10 = &_LC0;
                  uVar3 = 0;
                  goto LAB_0010345e;
               }

               uVar8 = 0;
               pbVar10 = &_LC0;
            }
 else {
               pbVar10 = *(byte**)( lVar6 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar12;
                  goto LAB_0010340c;
               }

               if (pbVar10 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar6 + 0x10 );
                  uVar3 = **(uint**)( lVar5 + 0x10 );
                  if (uVar8 != 0 || uVar3 != 0) {
                     do {
                        if (uVar3 == 0) goto LAB_001033c0;
                        if (uVar8 == 0) break;
                        if (uVar3 < uVar8) goto LAB_001033c0;
                        if (uVar8 < uVar3) break;
                        uVar3 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar3 != 0 || uVar8 != 0 );
                  }

                  goto LAB_001033e8;
               }

               uVar8 = (uint)(char)*pbVar10;
            }

            lVar6 = 0;
            uVar3 = **(uint**)( lVar5 + 0x10 );
            if (uVar3 != 0 || uVar8 != 0) {
               do {
                  if (uVar3 == 0) goto LAB_001033c0;
                  if (uVar8 == 0) break;
                  if (uVar3 < uVar8) goto LAB_001033c0;
                  if (uVar8 < uVar3) break;
                  uVar3 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                  uVar8 = (uint)(char)pbVar10[lVar6 + 1];
                  lVar6 = lVar6 + 1;
               }
 while ( uVar3 != 0 || uVar8 != 0 );
            }

         }

         LAB_001033e8:lVar9 = lVar11;
         this =
         pSVar13;
         lVar11 = lVar11 + 1;
         LAB_001033c0:lVar11 = lVar11 * 2;
         StringName::operator =((StringName*)( param_5 + ( lVar14 + param_1 ) * 8 ), this);
         lVar14 = lVar9;
      }
 while ( lVar11 < param_3 );
      pSVar13 = this;
      if (lVar11 == param_3) goto LAB_00103828;
   }
 else {
      this(StringName * )(param_5 + ( param_2 + param_1 ) * 8);
      if (lVar11 != param_3) {
         StringName::StringName((StringName*)&local_48, param_4);
         goto LAB_00103602;
      }

      LAB_00103828:lVar9 = lVar11 + -1;
      pSVar13 = (StringName*)( param_5 + ( param_1 + lVar9 ) * 8 );
      StringName::operator =(this, pSVar13);
   }

   StringName::StringName((StringName*)&local_48, param_4);
   lVar11 = ( lVar9 + -1 ) - ( lVar9 + -1 >> 0x3f );
   this =
   pSVar13;
   while (param_2 < lVar9) {
      lVar14 = lVar11 >> 1;
      this(StringName * )(param_5 + ( param_1 + lVar14 ) * 8);
      lVar11 = *(long*)this;
      if (lVar11 == 0) {
         if (local_48 != 0) {
            pbVar10 = *(byte**)( local_48 + 8 );
            uVar3 = 0;
            uVar8 = 0;
            pbVar12 = &_LC0;
            if (pbVar10 != (byte*)0x0) goto LAB_001036c3;
            LAB_00103665:uVar8 = **(uint**)( local_48 + 0x10 );
            if (uVar8 != 0 || uVar3 != 0) {
               lVar11 = 0;
               while (uVar3 != 0) {
                  if (uVar8 == 0) goto LAB_001035f8;
                  if (uVar3 < uVar8) break;
                  if (uVar8 < uVar3) goto LAB_001035f8;
                  uVar3 = (uint)(char)pbVar12[lVar11 + 1];
                  uVar8 = ( *(uint**)( local_48 + 0x10 ) )[lVar11 + 1];
                  lVar11 = lVar11 + 1;
                  if (uVar3 == 0 && uVar8 == 0) goto LAB_001035f8;
               }
;
               goto LAB_001035c0;
            }

         }

         LAB_001035f8 = (StringName*)( param_5 + ( lVar9 + param_1 ) * 8 );
         break;
      }

      pbVar12 = *(byte**)( lVar11 + 8 );
      if (local_48 == 0) {
         uVar8 = 0;
         pbVar10 = &_LC0;
         if (pbVar12 != (byte*)0x0) {
            bVar4 = *pbVar12;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC0;
            uVar3 = 0;
            goto LAB_001036c9;
         }

         LAB_0010372a:uVar3 = **(uint**)( lVar11 + 0x10 );
         if (uVar3 == 0 && uVar8 == 0) goto LAB_001035f8;
         lVar6 = 0;
         while (uVar3 != 0) {
            if (uVar8 == 0) goto LAB_001035f8;
            if (uVar3 < uVar8) break;
            if (uVar8 < uVar3) goto LAB_001035f8;
            uVar3 = ( *(uint**)( lVar11 + 0x10 ) )[lVar6 + 1];
            uVar8 = (uint)(char)pbVar10[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar3 == 0 && uVar8 == 0) goto LAB_001035f8;
         }
;
      }
 else {
         pbVar10 = *(byte**)( local_48 + 8 );
         if (pbVar12 == (byte*)0x0) {
            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_0010372a;
            }

            uVar8 = **(uint**)( local_48 + 0x10 );
            uVar3 = **(uint**)( lVar11 + 0x10 );
            if (uVar8 == 0 && uVar3 == 0) goto LAB_001035f8;
            lVar6 = 4;
            while (uVar3 != 0) {
               if (uVar8 == 0) goto LAB_001035f8;
               if (uVar3 < uVar8) break;
               if (uVar8 < uVar3) goto LAB_001035f8;
               uVar3 = *(uint*)( (long)*(uint**)( lVar11 + 0x10 ) + lVar6 );
               uVar8 = *(uint*)( (long)*(uint**)( local_48 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar3 == 0 && uVar8 == 0) {
                  this(StringName * )(param_5 + ( param_1 + lVar9 ) * 8);
                  goto LAB_00103602;
               }

            }
;
         }
 else {
            uVar3 = (uint)(char)*pbVar12;
            uVar8 = uVar3;
            if (pbVar10 == (byte*)0x0) goto LAB_00103665;
            LAB_001036c3:uVar3 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_001036c9:if (bVar4 == 0) goto LAB_001035f8;
            lVar11 = 1;
            while (uVar8 != 0) {
               if (uVar3 == 0) goto LAB_001035f8;
               if (uVar8 < uVar3) break;
               if (uVar3 < uVar8) goto LAB_001035f8;
               pbVar1 = pbVar12 + lVar11;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar11;
               uVar3 = (uint)(char)*pbVar2;
               lVar11 = lVar11 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001035f8;
            }
;
         }

      }

      LAB_001035c0:StringName::operator =((StringName*)( param_5 + ( lVar9 + param_1 ) * 8 ), this);
      lVar11 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
      lVar9 = lVar14;
   }
;
   LAB_00103602:local_50 = (StringName*)&local_48;
   StringName::operator =(this, local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<StringName, StringName::AlphCompare, true>::unguarded_linear_insert(long, StringName,
   StringName*) const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(long param_1, StringName *param_2, long param_3) {
   byte *pbVar1;
   byte *pbVar2;
   StringName *pSVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   pSVar3 = (StringName*)( param_3 + -8 + param_1 * 8 );
   lVar6 = *(long*)pSVar3;
   lVar5 = *(long*)param_2;
   do {
      if (lVar5 == 0) {
         if (lVar6 == 0) goto LAB_00103acb;
         pbVar10 = *(byte**)( lVar6 + 8 );
         uVar8 = 0;
         pbVar11 = &_LC0;
         LAB_001039d1:if (pbVar10 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_00103acb;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_00103acb;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_00103acb;
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar9 == 0) goto LAB_00103acb;
            }
;
         }
 else {
            uVar9 = (uint)(char)*pbVar10;
            bVar4 = (byte)uVar8 | *pbVar10;
            LAB_00103a2e:if (bVar4 == 0) goto LAB_00103acb;
            lVar6 = 1;
            while (uVar8 != 0) {
               if (uVar9 == 0) goto LAB_00103acb;
               if (uVar8 < uVar9) break;
               if (uVar9 < uVar8) goto LAB_00103acb;
               pbVar1 = pbVar11 + lVar6;
               uVar8 = (uint)(char)*pbVar1;
               pbVar2 = pbVar10 + lVar6;
               uVar9 = (uint)(char)*pbVar2;
               lVar6 = lVar6 + 1;
               if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00103acb;
            }
;
         }

      }
 else {
         pbVar11 = *(byte**)( lVar5 + 8 );
         if (lVar6 == 0) {
            if (pbVar11 != (byte*)0x0) {
               bVar4 = *pbVar11;
               uVar8 = (uint)(char)bVar4;
               pbVar10 = &_LC0;
               uVar9 = 0;
               goto LAB_00103a2e;
            }

            uVar8 = 0;
            pbVar10 = &_LC0;
            LAB_00103947:uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar9 == 0 && uVar8 == 0) goto LAB_00103acb;
            lVar6 = 0;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_00103acb;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_00103acb;
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar10[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_00103acb;
            }
;
         }
 else {
            pbVar10 = *(byte**)( lVar6 + 8 );
            if (pbVar11 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar11;
               goto LAB_001039d1;
            }

            if (pbVar10 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar10;
               goto LAB_00103947;
            }

            uVar8 = **(uint**)( lVar6 + 0x10 );
            uVar9 = **(uint**)( lVar5 + 0x10 );
            if (uVar8 == 0 && uVar9 == 0) goto LAB_00103acb;
            lVar7 = 4;
            while (uVar9 != 0) {
               if (uVar8 == 0) goto LAB_00103acb;
               if (uVar9 < uVar8) break;
               if (uVar8 < uVar9) goto LAB_00103acb;
               uVar9 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
               uVar8 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
               lVar7 = lVar7 + 4;
               if (uVar9 == 0 && uVar8 == 0) goto LAB_00103acb;
            }
;
         }

      }

      param_1 = param_1 + -1;
      if (param_1 == 0) {
         param_1 = 1;
         _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
         LAB_00103acb:StringName::operator =((StringName*)( param_3 + param_1 * 8 ), param_2);
         return;
      }

      StringName::operator =(pSVar3 + 8, pSVar3);
      lVar5 = *(long*)param_2;
      lVar6 = *(long*)( pSVar3 + -8 );
      pSVar3 = pSVar3 + -8;
   }
 while ( true );
}
/* SortArray<StringName, StringName::AlphCompare, true>::linear_insert(long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::linear_insert(long param_1, long param_2, StringName *param_3) {
   StringName *this;
   byte *pbVar1;
   byte *pbVar2;
   byte bVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   StringName *this_00;
   byte *pbVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   this =
   param_3 + param_1 * 8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_50, param_3 + param_2 * 8);
   if (local_50 == 0) {
      lVar4 = *(long*)this;
      if (lVar4 != 0) {
         pbVar8 = *(byte**)( lVar4 + 8 );
         uVar6 = 0;
         pbVar9 = &_LC0;
         LAB_00103ca8:if (pbVar8 == (byte*)0x0) {
            uVar7 = **(uint**)( lVar4 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 0;
               do {
                  if (uVar6 == 0) goto LAB_00103c00;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_00103c00;
                  if (uVar7 < uVar6) break;
                  uVar6 = (uint)(char)pbVar9[lVar5 + 1];
                  uVar7 = ( *(uint**)( lVar4 + 0x10 ) )[lVar5 + 1];
                  lVar5 = lVar5 + 1;
               }
 while ( uVar6 != 0 || uVar7 != 0 );
            }

         }
 else {
            uVar7 = (uint)(char)*pbVar8;
            bVar3 = *pbVar8 | (byte)uVar6;
            LAB_00103d50:if (bVar3 != 0) {
               lVar4 = 1;
               do {
                  if (uVar6 == 0) goto LAB_00103c00;
                  if (uVar7 == 0) break;
                  if (uVar6 < uVar7) goto LAB_00103c00;
                  if (uVar7 < uVar6) break;
                  pbVar1 = pbVar9 + lVar4;
                  uVar6 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar8 + lVar4;
                  uVar7 = (uint)(char)*pbVar2;
                  lVar4 = lVar4 + 1;
               }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
            }

         }

      }

   }
 else {
      lVar4 = *(long*)this;
      pbVar9 = *(byte**)( local_50 + 8 );
      if (lVar4 == 0) {
         if (pbVar9 != (byte*)0x0) {
            bVar3 = *pbVar9;
            uVar6 = (uint)(char)bVar3;
            pbVar8 = &_LC0;
            uVar7 = 0;
            goto LAB_00103d50;
         }

         uVar6 = 0;
         pbVar8 = &_LC0;
      }
 else {
         pbVar8 = *(byte**)( lVar4 + 8 );
         if (pbVar9 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar9;
            goto LAB_00103ca8;
         }

         if (pbVar8 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar4 + 0x10 );
            uVar7 = **(uint**)( local_50 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar5 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00103c00;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00103c00;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( local_50 + 0x10 ) + lVar5 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar4 + 0x10 ) + lVar5 );
                  lVar5 = lVar5 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_00103cf8;
         }

         uVar6 = (uint)(char)*pbVar8;
      }

      uVar7 = **(uint**)( local_50 + 0x10 );
      if (uVar6 != 0 || uVar7 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00103c00;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00103c00;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( local_50 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar8[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   LAB_00103cf8:StringName::StringName((StringName*)&local_48, (StringName*)&local_50);
   unguarded_linear_insert(param_2, (StringName*)&local_48, param_3);
   if (StringName::configured == '\0') goto LAB_00103c46;
   if (local_48 != 0) {
      StringName::unref();
      goto LAB_00103c32;
   }

   goto LAB_00103c36;
   LAB_00103c00:this_00 = param_3 + param_2 * 8;
   if (param_1 < param_2) {
      do {
         param_2 = param_2 + -1;
         StringName::operator =(this_00, this_00 + -8);
         this_00 = this_00 + -8;
      }
 while ( param_1 != param_2 );
   }

   StringName::operator =(this, (StringName*)&local_50);
   LAB_00103c32:if (StringName::configured == '\0') goto LAB_00103c46;
   LAB_00103c36:if (local_50 != 0) {
      StringName::unref();
   }

   LAB_00103c46:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SortArray<StringName, StringName::AlphCompare, true>::median_of_3(StringName const&, StringName
   const&, StringName const&) const [clone .isra.0] */StringName *SortArray<StringName,StringName::AlphCompare,true>::median_of_3(StringName *param_1, StringName *param_2, StringName *param_3) {
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
   lVar8 = *(long*)param_1;
   lVar9 = *(long*)param_3;
   lVar13 = *(long*)param_2;
   if (lVar8 == 0) {
      pbVar15 = &_LC0;
      pbVar16 = &_LC0;
      if (lVar13 == 0) {
         LAB_00104730:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            LAB_00103ffe:uVar5 = (uint)(char)*pbVar16;
            uVar4 = uVar5;
            goto LAB_00104004;
         }

         uVar5 = (uint)(char)*pbVar16;
         uVar6 = 0;
         uVar12 = 0;
         pbVar17 = &_LC0;
         if (*pbVar16 == 0) goto LAB_001042f9;
         LAB_00104152:lVar8 = 1;
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
         }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }
 else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         uVar4 = 0;
         pbVar16 = &_LC0;
         LAB_00103f82:if (pbVar15 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar15;
            bVar11 = *pbVar15 | (byte)uVar4;
            LAB_00104070:if (bVar11 != 0) {
               lVar14 = 1;
               do {
                  if (uVar4 == 0) goto joined_r0x001040b8;
                  if (uVar12 == 0) break;
                  if (uVar4 < uVar12) goto joined_r0x001040b8;
                  if (uVar12 < uVar4) break;
                  pbVar17 = pbVar16 + lVar14;
                  uVar4 = (uint)(char)*pbVar17;
                  pbVar2 = pbVar15 + lVar14;
                  uVar12 = (uint)(char)*pbVar2;
                  lVar14 = lVar14 + 1;
               }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
               goto LAB_00103fe8;
            }

            goto LAB_00104730;
         }

         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar4 == 0) goto joined_r0x001040b8;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x001040b8;
               if (uVar12 < uVar4) break;
               uVar4 = (uint)(char)pbVar16[lVar14 + 1];
               uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00103fe8;
         }

         if (lVar9 == 0) goto LAB_00104351;
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar5 = 0;
         LAB_00104004:if (pbVar17 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar17;
            bVar11 = (byte)uVar4 | *pbVar17;
            goto LAB_00104149;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar10;
         uVar6 = uVar4 | uVar5;
         if (uVar6 == 0) goto LAB_00104636;
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
         }
 while ( uVar5 != 0 || uVar4 != 0 );
      }

      LAB_001042e0:if (pbVar15 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar10 = *(uint**)( lVar9 + 0x10 );
            LAB_0010463f:uVar4 = *puVar10;
            uVar12 = **(uint**)( lVar13 + 0x10 );
            if (uVar12 == 0 && uVar4 == 0) {
               return param_2;
            }

            lVar8 = 4;
            while (true) {
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
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar8 );
               uVar4 = *(uint*)( (long)puVar10 + lVar8 );
               lVar8 = lVar8 + 4;
               if (uVar12 == 0 && uVar4 == 0) {
                  return param_2;
               }

            }
;
            return param_2;
         }

         uVar12 = (uint)(char)*pbVar17;
         LAB_001044c6:uVar4 = **(uint**)( lVar13 + 0x10 );
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

               uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar8 + 1];
               uVar12 = (uint)(char)pbVar17[lVar8 + 1];
               lVar8 = lVar8 + 1;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
         }

         return param_2;
      }

      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar6 = *puVar10;
         LAB_00104528:uVar4 = (uint)(char)*pbVar15;
         if (uVar4 == 0 && uVar6 == 0) {
            return param_2;
         }

         lVar8 = 0;
         while (true) {
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
;
         return param_2;
      }

      uVar12 = (uint)(char)*pbVar17;
      uVar5 = uVar12;
   }
 else {
      pbVar16 = *(byte**)( lVar8 + 8 );
      if (lVar13 == 0) {
         if (pbVar16 != (byte*)0x0) {
            bVar11 = *pbVar16;
            uVar4 = (uint)(char)bVar11;
            uVar12 = 0;
            pbVar15 = &_LC0;
            goto LAB_00104070;
         }

         uVar4 = 0;
         pbVar15 = &_LC0;
         LAB_00103e69:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar4 != 0 || uVar12 != 0) {
            lVar14 = 0;
            do {
               if (uVar12 == 0) goto joined_r0x001040b8;
               if (uVar4 == 0) break;
               if (uVar12 < uVar4) goto joined_r0x001040b8;
               if (uVar4 < uVar12) break;
               uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
               uVar4 = (uint)(char)pbVar15[lVar14 + 1];
               lVar14 = lVar14 + 1;
            }
 while ( uVar12 != 0 || uVar4 != 0 );
         }

         LAB_00103fe8:if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            if (pbVar16 != (byte*)0x0) goto LAB_00103ffe;
            puVar7 = *(uint**)( lVar8 + 0x10 );
            uVar4 = *puVar7;
            LAB_001043e8:if (pbVar17 != (byte*)0x0) {
               uVar12 = (uint)(char)*pbVar17;
               uVar6 = uVar4 | uVar12;
               goto LAB_001046a3;
            }

            puVar10 = *(uint**)( lVar9 + 0x10 );
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
                  uVar4 = *(uint*)( (long)puVar7 + lVar8 );
                  uVar12 = *(uint*)( (long)puVar10 + lVar8 );
                  lVar8 = lVar8 + 4;
               }
 while ( uVar4 != 0 || uVar12 != 0 );
               goto LAB_001042e0;
            }

            LAB_00104636:if (pbVar15 != (byte*)0x0) goto LAB_00104528;
            goto LAB_0010463f;
         }

         if (pbVar16 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar8 + 0x10 );
            goto LAB_00104701;
         }

         LAB_00104351:bVar11 = *pbVar16;
         uVar5 = (uint)(char)bVar11;
         uVar6 = 0;
         pbVar17 = &_LC0;
         LAB_00104149:uVar12 = uVar6;
         if (bVar11 != 0) goto LAB_00104152;
      }
 else {
         pbVar15 = *(byte**)( lVar13 + 8 );
         if (pbVar16 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar16;
            goto LAB_00103f82;
         }

         if (pbVar15 != (byte*)0x0) {
            uVar4 = (uint)(char)*pbVar15;
            goto LAB_00103e69;
         }

         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar12 = **(uint**)( lVar13 + 0x10 );
         uVar4 = *puVar7;
         if (uVar12 != 0 || uVar4 != 0) {
            lVar14 = 4;
            do {
               if (uVar4 == 0) {
                  LAB_00104258:pbVar16 = (byte*)0x0;
                  goto joined_r0x001040b8;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto LAB_00104258;
               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar14 );
               uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
               lVar14 = lVar14 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            pbVar16 = (byte*)0x0;
            goto LAB_00103fe8;
         }

         if (lVar9 != 0) {
            pbVar17 = *(byte**)( lVar9 + 8 );
            uVar4 = 0;
            goto LAB_001043e8;
         }

         LAB_00104701:uVar4 = *puVar7;
         uVar12 = 0;
         pbVar17 = &_LC0;
         uVar6 = uVar4;
         LAB_001046a3:if (uVar6 != 0) {
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
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_001042e0;
         }

      }

      uVar5 = uVar12;
      if (pbVar15 == (byte*)0x0) goto LAB_001044c6;
   }

   LAB_001042f9:bVar11 = *pbVar15;
   if (bVar11 == 0 && (char)uVar5 == '\0') {
      return param_2;
   }

   lVar8 = 1;
   while (true) {
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
;
   return param_2;
   joined_r0x001040b8:if (lVar9 == 0) {
      uVar4 = 0;
      uVar12 = 0;
      bVar11 = 0;
      pbVar17 = &_LC0;
      if (pbVar15 != (byte*)0x0) goto LAB_001041a7;
      LAB_001040d4:uVar6 = **(uint**)( lVar13 + 0x10 );
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
            uVar6 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            uVar12 = (uint)(char)pbVar17[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar6 != 0 || uVar12 != 0 );
         goto LAB_00104270;
      }

      LAB_0010473e:bVar11 = (byte)uVar12;
      if (pbVar16 == (byte*)0x0) goto LAB_0010445e;
   }
 else {
      pbVar17 = *(byte**)( lVar9 + 8 );
      if (pbVar15 == (byte*)0x0) {
         if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            goto LAB_001040d4;
         }

         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar4 = *puVar7;
         uVar6 = **(uint**)( lVar13 + 0x10 );
         uVar12 = uVar4 | uVar6;
         if (uVar12 == 0) goto LAB_001045d9;
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
            uVar6 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            lVar14 = lVar14 + 4;
         }
 while ( uVar6 != 0 || uVar4 != 0 );
      }
 else {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
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
               }
 while ( uVar6 != 0 || uVar4 != 0 );
               goto LAB_00104270;
            }

            LAB_001045d9:if (pbVar16 == (byte*)0x0) goto LAB_001045de;
            goto LAB_00104586;
         }

         bVar11 = *pbVar17;
         uVar4 = (uint)(char)bVar11;
         LAB_001041a7:bVar3 = *pbVar15;
         uVar12 = ( uint )(bVar11 | bVar3);
         if (( bVar11 | bVar3 ) == 0) goto LAB_0010473e;
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
         }
 while ( bVar3 != 0 || *pbVar2 != 0 );
      }

      LAB_00104270:if (pbVar16 == (byte*)0x0) {
         if (pbVar17 == (byte*)0x0) {
            puVar7 = *(uint**)( lVar9 + 0x10 );
            LAB_001045de:uVar4 = *puVar7;
            uVar12 = **(uint**)( lVar8 + 0x10 );
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

            lVar9 = 4;
            while (true) {
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
               uVar12 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
               uVar4 = *(uint*)( (long)puVar7 + lVar9 );
               lVar9 = lVar9 + 4;
               if (uVar12 == 0 && uVar4 == 0) {
                  return param_1;
               }

            }
;
            return param_1;
         }

         uVar4 = (uint)(char)*pbVar17;
         LAB_0010445e:uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

         lVar9 = 0;
         while (true) {
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
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar9 + 1];
            uVar4 = (uint)(char)pbVar17[lVar9 + 1];
            lVar9 = lVar9 + 1;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

         }
;
         return param_1;
      }

      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar7;
         LAB_00104586:uVar4 = (uint)(char)*pbVar16;
         if (uVar4 == 0 && uVar12 == 0) {
            return param_1;
         }

         lVar8 = 0;
         while (true) {
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
;
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
   while (true) {
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
;
   return param_1;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderFileEditor,void,int>::get_object(CallableCustomMethodPointer<ShaderFileEditor,void,int> *this) {
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
         goto LAB_0010489d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010489d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010489d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ShaderFileEditor, void>::get_object() const */undefined8 CallableCustomMethodPointer<ShaderFileEditor,void>::get_object(CallableCustomMethodPointer<ShaderFileEditor,void> *this) {
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
         goto LAB_0010499d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010499d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010499d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* SortArray<StringName, StringName::AlphCompare, true>::partitioner(long, long, StringName,
   StringName*) const [clone .isra.0] */long SortArray<StringName,StringName::AlphCompare,true>::partitioner(long param_1, long param_2, long *param_3, long param_4) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   long lVar4;
   byte *pbVar5;
   uint uVar6;
   uint uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   byte bVar12;
   byte *pbVar13;
   long *plVar14;
   lVar10 = *param_3;
   lVar3 = *(long*)( param_4 + param_1 * 8 );
   lVar9 = param_1;
   lVar8 = param_2;
   joined_r0x00104a4f:if (lVar3 == 0) {
      if (lVar10 == 0) goto LAB_00104b70;
      pbVar5 = *(byte**)( lVar10 + 8 );
      uVar6 = 0;
      pbVar13 = &_LC0;
      LAB_00104b06:if (pbVar5 == (byte*)0x0) {
         uVar7 = **(uint**)( lVar10 + 0x10 );
         if (uVar7 != 0 || uVar6 != 0) {
            lVar3 = 0;
            do {
               if (uVar6 == 0) goto LAB_00104ad0;
               if (uVar7 == 0) break;
               if (uVar6 < uVar7) goto LAB_00104ad0;
               if (uVar7 < uVar6) break;
               uVar6 = (uint)(char)pbVar13[lVar3 + 1];
               uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
               lVar3 = lVar3 + 1;
            }
 while ( uVar6 != 0 || uVar7 != 0 );
         }

         goto LAB_00104b70;
      }

      uVar7 = (uint)(char)*pbVar5;
      bVar12 = (byte)uVar6 | *pbVar5;
      LAB_00104e46:if (bVar12 != 0) {
         lVar3 = 1;
         do {
            if (uVar6 == 0) goto LAB_00104ad0;
            if (uVar7 == 0) break;
            if (uVar6 < uVar7) goto LAB_00104ad0;
            if (uVar7 < uVar6) break;
            pbVar1 = pbVar13 + lVar3;
            uVar6 = (uint)(char)*pbVar1;
            pbVar2 = pbVar5 + lVar3;
            uVar7 = (uint)(char)*pbVar2;
            lVar3 = lVar3 + 1;
         }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }

   }
 else {
      pbVar13 = *(byte**)( lVar3 + 8 );
      if (lVar10 == 0) {
         if (pbVar13 != (byte*)0x0) {
            bVar12 = *pbVar13;
            uVar6 = (uint)(char)bVar12;
            uVar7 = 0;
            pbVar5 = &_LC0;
            goto LAB_00104e46;
         }

         uVar6 = 0;
         pbVar5 = &_LC0;
      }
 else {
         pbVar5 = *(byte**)( lVar10 + 8 );
         if (pbVar13 != (byte*)0x0) {
            uVar6 = (uint)(char)*pbVar13;
            goto LAB_00104b06;
         }

         if (pbVar5 == (byte*)0x0) {
            uVar6 = **(uint**)( lVar10 + 0x10 );
            uVar7 = **(uint**)( lVar3 + 0x10 );
            if (uVar6 != 0 || uVar7 != 0) {
               lVar4 = 4;
               do {
                  if (uVar7 == 0) goto LAB_00104ad0;
                  if (uVar6 == 0) break;
                  if (uVar7 < uVar6) goto LAB_00104ad0;
                  if (uVar6 < uVar7) break;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
               }
 while ( uVar7 != 0 || uVar6 != 0 );
            }

            goto LAB_00104b70;
         }

         uVar6 = (uint)(char)*pbVar5;
      }

      uVar7 = **(uint**)( lVar3 + 0x10 );
      if (uVar7 != 0 || uVar6 != 0) {
         lVar4 = 0;
         do {
            if (uVar7 == 0) goto LAB_00104ad0;
            if (uVar6 == 0) break;
            if (uVar7 < uVar6) goto LAB_00104ad0;
            if (uVar6 < uVar7) break;
            uVar7 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
            uVar6 = (uint)(char)pbVar5[lVar4 + 1];
            lVar4 = lVar4 + 1;
         }
 while ( uVar7 != 0 || uVar6 != 0 );
      }

   }

   goto LAB_00104b70;
   LAB_00104ad0:if (param_2 + -1 == lVar9) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar10 = *param_3;
      LAB_00104b70:plVar11 = (long*)( param_4 + -8 + lVar8 * 8 );
      LAB_00104b80:lVar8 = lVar8 + -1;
      lVar3 = *plVar11;
      if (lVar10 != 0) {
         pbVar13 = *(byte**)( lVar10 + 8 );
         do {
            if (lVar3 == 0) {
               if (pbVar13 != (byte*)0x0) {
                  bVar12 = *pbVar13;
                  uVar7 = (uint)(char)bVar12;
                  pbVar5 = &_LC0;
                  uVar6 = 0;
                  goto LAB_00104d2e;
               }

               uVar6 = 0;
               pbVar5 = &_LC0;
               LAB_00104c4a:uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar7 == 0 && uVar6 == 0) goto LAB_00104da8;
               lVar3 = 0;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00104da8;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00104da8;
                  uVar7 = ( *(uint**)( lVar10 + 0x10 ) )[lVar3 + 1];
                  uVar6 = (uint)(char)pbVar5[lVar3 + 1];
                  lVar3 = lVar3 + 1;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00104da8;
               }
;
            }
 else {
               pbVar5 = *(byte**)( lVar3 + 8 );
               if (pbVar13 != (byte*)0x0) goto LAB_00104d70;
               if (pbVar5 != (byte*)0x0) {
                  uVar6 = (uint)(char)*pbVar5;
                  goto LAB_00104c4a;
               }

               uVar6 = **(uint**)( lVar3 + 0x10 );
               uVar7 = **(uint**)( lVar10 + 0x10 );
               if (uVar6 == 0 && uVar7 == 0) goto LAB_00104da8;
               lVar4 = 4;
               while (uVar7 != 0) {
                  if (uVar6 == 0) goto LAB_00104da8;
                  if (uVar7 < uVar6) break;
                  if (uVar6 < uVar7) goto LAB_00104da8;
                  uVar7 = *(uint*)( (long)*(uint**)( lVar10 + 0x10 ) + lVar4 );
                  uVar6 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar4 );
                  lVar4 = lVar4 + 4;
                  if (uVar7 == 0 && uVar6 == 0) goto LAB_00104da8;
               }
;
            }

            plVar14 = plVar11;
            if (param_1 == lVar8) goto LAB_00104d80;
            lVar3 = plVar11[-1];
            lVar8 = lVar8 + -1;
            plVar11 = plVar11 + -1;
         }
 while ( true );
      }

      if (lVar3 != 0) {
         pbVar5 = *(byte**)( lVar3 + 8 );
         uVar7 = 0;
         bVar12 = 0;
         pbVar13 = &_LC0;
         goto LAB_00104cb9;
      }

      goto LAB_00104da8;
   }

   LAB_00104ade:lVar9 = lVar9 + 1;
   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   goto joined_r0x00104a4f;
   LAB_00104d70:bVar12 = *pbVar13;
   uVar7 = (uint)(char)bVar12;
   LAB_00104cb9:if (pbVar5 == (byte*)0x0) {
      uVar6 = **(uint**)( lVar3 + 0x10 );
      if (uVar6 == 0 && uVar7 == 0) goto LAB_00104da8;
      lVar4 = 0;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00104da8;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00104da8;
         uVar7 = (uint)(char)pbVar13[lVar4 + 1];
         uVar6 = ( *(uint**)( lVar3 + 0x10 ) )[lVar4 + 1];
         lVar4 = lVar4 + 1;
         if (uVar7 == 0 && uVar6 == 0) goto LAB_00104da8;
      }
;
   }
 else {
      uVar6 = (uint)(char)*pbVar5;
      bVar12 = bVar12 | *pbVar5;
      LAB_00104d2e:if (bVar12 == 0) goto LAB_00104da8;
      lVar3 = 1;
      while (plVar14 = plVar11,uVar7 != 0) {
         if (uVar6 == 0) goto LAB_00104da8;
         if (uVar7 < uVar6) break;
         if (uVar6 < uVar7) goto LAB_00104da8;
         pbVar1 = pbVar13 + lVar3;
         uVar7 = (uint)(char)*pbVar1;
         pbVar2 = pbVar5 + lVar3;
         uVar6 = (uint)(char)*pbVar2;
         lVar3 = lVar3 + 1;
         if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00104da8;
      }
;
   }

   plVar11 = plVar14 + -1;
   if (param_1 == lVar8) goto LAB_00104d80;
   goto LAB_00104b80;
   LAB_00104d80:plVar11 = plVar14;
   _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_00104da8:if (lVar8 <= lVar9) {
      return lVar9;
   }

   lVar3 = *(long*)( param_4 + lVar9 * 8 );
   *(undefined8*)( param_4 + lVar9 * 8 ) = 0;
   if (*plVar11 != 0) {
      StringName::unref();
      *(long*)( param_4 + lVar9 * 8 ) = *plVar11;
      *plVar11 = 0;
   }

   if (lVar3 != 0) {
      StringName::unref();
      *plVar11 = lVar3;
   }

   lVar10 = *param_3;
   goto LAB_00104ade;
}
/* HSplitContainer::is_class_ptr(void*) const */uint HSplitContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f3, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f2, in_RSI == &SplitContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* ShaderFileEditor::is_class_ptr(void*) const */uint ShaderFileEditor::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f3, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &PanelContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* ShaderFileEditorPlugin::_notificationv(int, bool) */void ShaderFileEditorPlugin::_notificationv(ShaderFileEditorPlugin *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113030 != Node::_notification) {
         EditorPlugin::_notification(iVar1);
      }

      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   if ((code*)PTR__notification_00113030 == Node::_notification) {
      return;
   }

   EditorPlugin::_notification(iVar1);
   return;
}
/* ShaderFileEditor::_validate_propertyv(PropertyInfo&) const */void ShaderFileEditor::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_00113038 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */void HSplitContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00113040 == Control::_validate_property) {
      return;
   }

   SplitContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00113048 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00113048 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f3, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f3, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f3, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00113050 != CanvasItem::_set) {
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
      if ((code*)PTR__set_00113050 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* ShaderFileEditor::_setv(StringName const&, Variant const&) */undefined8 ShaderFileEditor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00113050 != CanvasItem::_set) {
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
      if ((code*)PTR__set_00113050 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* SortArray<StringName, StringName::AlphCompare, true>::partial_sort(long, long, long, StringName*)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::partial_sort(long param_1, long param_2, long param_3, StringName *param_4) {
   byte *pbVar1;
   byte *pbVar2;
   bool bVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   byte *pbVar11;
   byte *pbVar12;
   StringName *pSVar13;
   long lVar14;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   lVar10 = param_3 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar10 < 2) {
      if (param_2 <= param_3) goto LAB_0010584b;
      LAB_00105636:lVar14 = param_3;
      LAB_00105670:lVar6 = *(long*)( param_4 + lVar14 * 8 );
      lVar5 = *(long*)( param_4 + param_1 * 8 );
      if (lVar6 == 0) {
         if (lVar5 != 0) {
            pbVar11 = *(byte**)( lVar5 + 8 );
            uVar8 = 0;
            pbVar12 = &_LC0;
            LAB_00105884:if (pbVar11 == (byte*)0x0) {
               uVar9 = **(uint**)( lVar5 + 0x10 );
               if (uVar9 != 0 || uVar8 != 0) {
                  lVar6 = 0;
                  do {
                     if (uVar8 == 0) goto LAB_001056f0;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_001056f0;
                     if (uVar9 < uVar8) break;
                     uVar8 = (uint)(char)pbVar12[lVar6 + 1];
                     uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
                     lVar6 = lVar6 + 1;
                  }
 while ( uVar8 != 0 || uVar9 != 0 );
               }

            }
 else {
               uVar9 = (uint)(char)*pbVar11;
               bVar4 = (byte)uVar8 | *pbVar11;
               LAB_001058e6:if (bVar4 != 0) {
                  lVar6 = 1;
                  do {
                     if (uVar8 == 0) goto LAB_001056f0;
                     if (uVar9 == 0) break;
                     if (uVar8 < uVar9) goto LAB_001056f0;
                     if (uVar9 < uVar8) break;
                     pbVar1 = pbVar12 + lVar6;
                     uVar8 = (uint)(char)*pbVar1;
                     pbVar2 = pbVar11 + lVar6;
                     uVar9 = (uint)(char)*pbVar2;
                     lVar6 = lVar6 + 1;
                  }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
               }

            }

         }

      }
 else {
         pbVar12 = *(byte**)( lVar6 + 8 );
         if (lVar5 == 0) {
            if (pbVar12 != (byte*)0x0) {
               bVar4 = *pbVar12;
               uVar8 = (uint)(char)bVar4;
               uVar9 = 0;
               pbVar11 = &_LC0;
               goto LAB_001058e6;
            }

            uVar8 = 0;
            pbVar11 = &_LC0;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar12 != (byte*)0x0) {
               uVar8 = (uint)(char)*pbVar12;
               goto LAB_00105884;
            }

            if (pbVar11 == (byte*)0x0) {
               uVar8 = **(uint**)( lVar5 + 0x10 );
               uVar9 = **(uint**)( lVar6 + 0x10 );
               if (uVar8 != 0 || uVar9 != 0) {
                  lVar7 = 4;
                  do {
                     if (uVar9 == 0) goto LAB_001056f0;
                     if (uVar8 == 0) break;
                     if (uVar9 < uVar8) goto LAB_001056f0;
                     if (uVar8 < uVar9) break;
                     uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                     uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                     lVar7 = lVar7 + 4;
                  }
 while ( uVar9 != 0 || uVar8 != 0 );
               }

               goto LAB_00105778;
            }

            uVar8 = (uint)(char)*pbVar11;
         }

         uVar9 = **(uint**)( lVar6 + 0x10 );
         if (uVar9 != 0 || uVar8 != 0) {
            lVar5 = 0;
            do {
               if (uVar9 == 0) goto LAB_001056f0;
               if (uVar8 == 0) break;
               if (uVar9 < uVar8) goto LAB_001056f0;
               if (uVar8 < uVar9) break;
               uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
               uVar8 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
            }
 while ( uVar9 != 0 || uVar8 != 0 );
         }

      }

      goto LAB_00105778;
   }

   lVar14 = lVar10 + -2 >> 1;
   pSVar13 = param_4 + ( param_1 + lVar14 ) * 8;
   while (true) {
      StringName::StringName((StringName*)&local_48, pSVar13);
      adjust_heap(param_1, lVar14, lVar10, (StringName*)&local_48, param_4);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      pSVar13 = pSVar13 + -8;
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
   }
;
   if (param_3 < param_2) goto LAB_00105636;
   goto LAB_001057ab;
   LAB_001056f0:StringName::StringName((StringName*)&local_50, param_4 + lVar14 * 8);
   StringName::operator =(param_4 + lVar14 * 8, param_4 + param_1 * 8);
   StringName::StringName((StringName*)&local_48, (StringName*)&local_50);
   adjust_heap(param_1, 0, lVar10, (StringName*)&local_48, param_4);
   if (( StringName::configured != '\0' ) && ( ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_50 != 0 ) ) )) {
      StringName::unref();
   }

   LAB_00105778:lVar14 = lVar14 + 1;
   if (param_2 <= lVar14) goto code_r0x00105785;
   goto LAB_00105670;
   code_r0x00105785:if (lVar10 < 2) goto LAB_0010584b;
   LAB_001057ab:pSVar13 = param_4 + param_3 * 8 + -8;
   lVar10 = ( param_3 + -1 ) - param_1;
   do {
      StringName::StringName((StringName*)&local_50, pSVar13);
      StringName::operator =(pSVar13, param_4 + param_1 * 8);
      StringName::StringName((StringName*)&local_48, (StringName*)&local_50);
      adjust_heap(param_1, 0, lVar10, (StringName*)&local_48, param_4);
      if (( ( StringName::configured != '\0' ) && ( ( local_48 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      pSVar13 = pSVar13 + -8;
      bVar3 = 1 < lVar10;
      lVar10 = lVar10 + -1;
   }
 while ( bVar3 );
   LAB_0010584b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00105a48) *//* ShaderFileEditor::_getv(StringName const&, Variant&) const */undefined8 ShaderFileEditor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00113058 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00105ab8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00113058 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00105b28) *//* HSplitContainer::_getv(StringName const&, Variant&) const */undefined8 HSplitContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00113058 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00105b98) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00113058 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105c00;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105c00:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105c60;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105c60:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105cc0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105cc0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105d30;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105d30:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* ShaderFileEditorPlugin::get_plugin_name() const */ShaderFileEditorPlugin * __thiscall
ShaderFileEditorPlugin::get_plugin_name(ShaderFileEditorPlugin *this){
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
/* ShaderFileEditor::~ShaderFileEditor() */void ShaderFileEditor::~ShaderFileEditor(ShaderFileEditor *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_0010e750;
   if (*(long*)( this + 0xa08 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa08 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0xa00 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa00 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105ec7;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105ec7:Control::~Control((Control*)this);
   return;
}
/* ShaderFileEditor::~ShaderFileEditor() */void ShaderFileEditor::~ShaderFileEditor(ShaderFileEditor *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_0010e750;
   if (*(long*)( this + 0xa08 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa08 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0xa00 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa00 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00105fe7;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00105fe7:Control::~Control((Control*)this);
   operator_delete(this, 0xa50);
   return;
}
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = SplitContainer::_notification;
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
   *(code**)this = String::parse_latin1;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010613f;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010613f:Control::~Control((Control*)this);
   return;
}
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = SplitContainer::_notification;
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
   *(code**)this = String::parse_latin1;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001062ef;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001062ef:Control::~Control((Control*)this);
   operator_delete(this, 0xa70);
   return;
}
/* HSplitContainer::_notificationv(int, bool) */void HSplitContainer::_notificationv(HSplitContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113060 != Container::_notification) {
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

   if ((code*)PTR__notification_00113060 == Container::_notification) {
      return;
   }

   SplitContainer::_notification(iVar1);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113068 != Container::_notification) {
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

   if ((code*)PTR__notification_00113068 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113068 != Container::_notification) {
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

   if ((code*)PTR__notification_00113068 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
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
         LAB_00106783:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106783;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_001067ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_001067ee:return &_get_class_namev();
}
/* ShaderFileEditor::_get_class_namev() const */undefined8 *ShaderFileEditor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106873:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106873;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderFileEditor");
         goto LAB_001068de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderFileEditor");
   LAB_001068de:return &_get_class_namev();
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
         LAB_00106963:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106963;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_001069ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_001069ce:return &_get_class_namev();
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
         LAB_00106a53:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106a53;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
         goto LAB_00106abe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
   LAB_00106abe:return &_get_class_namev();
}
/* ShaderFileEditorPlugin::_get_class_namev() const */undefined8 *ShaderFileEditorPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106b43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106b43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderFileEditorPlugin");
         goto LAB_00106bae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ShaderFileEditorPlugin");
   LAB_00106bae:return &_get_class_namev();
}
/* SortArray<StringName, StringName::AlphCompare, true>::introsort(long, long, StringName*, long)
   const [clone .isra.0] */void SortArray<StringName,StringName::AlphCompare,true>::introsort(long param_1, long param_2, StringName *param_3, long param_4) {
   long lVar1;
   StringName *pSVar2;
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
   long in_FS_OFFSET;
   long local_138;
   long local_120;
   long local_100;
   long local_f8;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      LAB_0010761a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (param_4 != 0) {
         lVar12 = param_2 * 8;
         lVar3 = param_2;
         LAB_00106c62:param_4 = param_4 + -1;
         pSVar2 = (StringName*)median_of_3(param_3 + param_1 * 8, param_3 + ( ( lVar1 >> 1 ) + param_1 ) * 8, param_3 + lVar12 + -8);
         StringName::StringName((StringName*)&local_48, pSVar2);
         param_2 = partitioner(param_1, lVar3, (StringName*)&local_48, param_3);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         lVar1 = lVar3 - param_2;
         if (0x10 < lVar1) {
            if (param_4 != 0) {
               lVar12 = param_4;
               lVar4 = lVar3;
               LAB_00106d21:do {
                  lVar12 = lVar12 + -1;
                  pSVar2 = (StringName*)median_of_3(param_3 + param_2 * 8, param_3 + ( ( lVar1 >> 1 ) + param_2 ) * 8, param_3 + lVar4 * 8 + -8);
                  StringName::StringName((StringName*)&local_48, pSVar2);
                  lVar3 = partitioner(param_2, lVar4, (StringName*)&local_48, param_3);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) {
                     if (lVar12 != 0) {
                        lVar13 = lVar12;
                        local_138 = lVar4;
                        LAB_00106de2:do {
                           lVar13 = lVar13 + -1;
                           pSVar2 = (StringName*)median_of_3(param_3 + lVar3 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar3 ) * 8, param_3 + local_138 * 8 + -8);
                           StringName::StringName((StringName*)&local_48, pSVar2);
                           lVar4 = partitioner(lVar3, local_138, (StringName*)&local_48, param_3);
                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                              StringName::unref();
                           }

                           lVar1 = local_138 - lVar4;
                           if (0x10 < lVar1) {
                              if (lVar13 != 0) {
                                 lVar11 = lVar13;
                                 LAB_00106e9c:do {
                                    lVar11 = lVar11 + -1;
                                    lVar9 = local_138 * 8;
                                    pSVar2 = (StringName*)median_of_3(param_3 + lVar4 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar4 ) * 8, param_3 + lVar9 + -8);
                                    StringName::StringName((StringName*)&local_48, pSVar2);
                                    lVar5 = partitioner(lVar4, local_138, (StringName*)&local_48, param_3);
                                    if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                       StringName::unref();
                                    }

                                    lVar1 = local_138 - lVar5;
                                    if (0x10 < lVar1) {
                                       lVar6 = local_138;
                                       if (lVar11 != 0) {
                                          lVar7 = local_138;
                                          local_100 = lVar11;
                                          do {
                                             local_100 = local_100 + -1;
                                             pSVar2 = (StringName*)median_of_3(param_3 + lVar5 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar5 ) * 8, param_3 + lVar9 + -8);
                                             StringName::StringName((StringName*)&local_48, pSVar2);
                                             lVar6 = partitioner(lVar5, lVar7, (StringName*)&local_48, param_3);
                                             if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                StringName::unref();
                                             }

                                             lVar1 = lVar7 - lVar6;
                                             if (0x10 < lVar1) {
                                                if (local_100 != 0) {
                                                   lVar8 = lVar7;
                                                   local_120 = local_100;
                                                   do {
                                                      local_120 = local_120 + -1;
                                                      pSVar2 = (StringName*)median_of_3(param_3 + lVar6 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar6 ) * 8, param_3 + lVar9 + -8);
                                                      StringName::StringName((StringName*)&local_48, pSVar2);
                                                      lVar7 = partitioner(lVar6, lVar8, (StringName*)&local_48, param_3);
                                                      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                         StringName::unref();
                                                      }

                                                      lVar1 = lVar8 - lVar7;
                                                      if (0x10 < lVar1) {
                                                         if (local_120 == 0) {
                                                            LAB_001073ee:partial_sort(lVar7, lVar8, lVar8, param_3);
                                                         }
 else {
                                                            lVar9 = lVar8;
                                                            local_138 = local_120;
                                                            do {
                                                               while (true) {
                                                                  local_138 = local_138 + -1;
                                                                  lVar14 = lVar9 * 8;
                                                                  pSVar2 = (StringName*)median_of_3(param_3 + lVar7 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar7 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName*)&local_48, pSVar2);
                                                                  lVar8 = partitioner(lVar7, lVar9, (StringName*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (0x10 < lVar1) break;
                                                                  LAB_0010735e:lVar1 = lVar8 - lVar7;
                                                                  if (lVar1 < 0x11) {
                                                                     lVar1 = lVar7 - lVar6;
                                                                     if (lVar1 < 0x11) goto LAB_00107310;
                                                                     goto LAB_001073b9;
                                                                  }

                                                                  lVar9 = lVar8;
                                                                  if (local_138 == 0) goto LAB_001073ee;
                                                               }
;
                                                               if (local_138 == 0) {
                                                                  LAB_0010734d:partial_sort(lVar8, lVar9, lVar9, param_3);
                                                                  goto LAB_0010735e;
                                                               }

                                                               lVar10 = lVar9;
                                                               local_f8 = local_138;
                                                               while (true) {
                                                                  local_f8 = local_f8 + -1;
                                                                  pSVar2 = (StringName*)median_of_3(param_3 + lVar8 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar8 ) * 8, param_3 + lVar14 + -8);
                                                                  StringName::StringName((StringName*)&local_48, pSVar2);
                                                                  lVar9 = partitioner(lVar8, lVar10, (StringName*)&local_48, param_3);
                                                                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                     StringName::unref();
                                                                  }

                                                                  lVar1 = lVar10 - lVar9;
                                                                  if (0x10 < lVar1) {
                                                                     if (local_f8 != 0) {
                                                                        lVar14 = local_f8;
                                                                        lVar15 = lVar10;
                                                                        do {
                                                                           lVar14 = lVar14 + -1;
                                                                           pSVar2 = (StringName*)median_of_3(param_3 + lVar9 * 8, param_3 + ( ( lVar1 >> 1 ) + lVar9 ) * 8, param_3 + lVar15 * 8 + -8);
                                                                           StringName::StringName((StringName*)&local_48, pSVar2);
                                                                           lVar10 = partitioner(lVar9, lVar15, (StringName*)&local_48, param_3);
                                                                           if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                                                                              StringName::unref();
                                                                           }

                                                                           introsort(lVar10, lVar15, param_3, lVar14);
                                                                           lVar1 = lVar10 - lVar9;
                                                                           if (lVar1 < 0x11) {
                                                                              lVar1 = lVar9 - lVar8;
                                                                              if (lVar1 < 0x11) goto LAB_0010735e;
                                                                              goto LAB_001072e4;
                                                                           }

                                                                           lVar15 = lVar10;
                                                                        }
 while ( lVar14 != 0 );
                                                                     }

                                                                     partial_sort(lVar9, lVar10, lVar10, param_3);
                                                                  }

                                                                  lVar1 = lVar9 - lVar8;
                                                                  if (lVar1 < 0x11) break;
                                                                  if (local_f8 == 0) goto LAB_0010734d;
                                                                  LAB_001072e4:lVar14 = lVar9 * 8;
                                                                  lVar10 = lVar9;
                                                               }
;
                                                               lVar1 = lVar8 - lVar7;
                                                               lVar9 = lVar8;
                                                            }
 while ( 0x10 < lVar1 );
                                                         }

                                                      }

                                                      lVar1 = lVar7 - lVar6;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar6 - lVar5;
                                                         if (lVar1 < 0x11) goto LAB_00107437;
                                                         goto LAB_00107331;
                                                      }

                                                      if (local_120 == 0) break;
                                                      LAB_001073b9:lVar9 = lVar7 * 8;
                                                      lVar8 = lVar7;
                                                   }
 while ( true );
                                                }

                                                partial_sort(lVar6, lVar7, lVar7, param_3);
                                             }

                                             LAB_00107310:lVar1 = lVar6 - lVar5;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar5 - lVar4;
                                                local_138 = lVar5;
                                                if (lVar1 < 0x11) goto LAB_001074f0;
                                                goto LAB_00106e9c;
                                             }

                                             if (local_100 == 0) break;
                                             LAB_00107331:lVar9 = lVar6 * 8;
                                             lVar7 = lVar6;
                                          }
 while ( true );
                                       }

                                       partial_sort(lVar5, lVar6, lVar6, param_3);
                                    }

                                    LAB_00107437:lVar1 = lVar5 - lVar4;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar4 - lVar3;
                                       local_138 = lVar4;
                                       if (lVar1 < 0x11) goto LAB_00107581;
                                       goto LAB_00106de2;
                                    }

                                    local_138 = lVar5;
                                 }
 while ( lVar11 != 0 );
                              }

                              partial_sort(lVar4, local_138, local_138, param_3);
                           }

                           LAB_001074f0:lVar1 = lVar4 - lVar3;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar3 - param_2;
                              lVar4 = lVar3;
                              if (lVar1 < 0x11) goto LAB_0010760e;
                              goto LAB_00106d21;
                           }

                           local_138 = lVar4;
                        }
 while ( lVar13 != 0 );
                     }

                     partial_sort(lVar3, lVar4, lVar4, param_3);
                  }

                  LAB_00107581:lVar1 = lVar3 - param_2;
                  if (lVar1 < 0x11) goto LAB_0010760e;
                  lVar4 = lVar3;
                  if (lVar12 == 0) break;
               }
 while ( true );
            }

            partial_sort(param_2, lVar3, lVar3, param_3);
         }

         lVar1 = param_2 - param_1;
         if (0x10 < lVar1) {
            if (param_4 != 0) goto LAB_001075ed;
            goto LAB_0010764c;
         }

         goto LAB_0010761a;
      }

      LAB_0010764c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         partial_sort(param_1, param_2, param_2, param_3);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_0010760e:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) goto LAB_0010761a;
   LAB_001075ed:lVar12 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_00106c62;
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String_conflict *this, char *param_1) {
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
/* RDShaderFile::get_spirv(StringName const&) const */StringName *RDShaderFile::get_spirv(StringName *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
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
   code *pcVar19;
   char cVar20;
   uint uVar21;
   int iVar22;
   long *in_RDX;
   long lVar23;
   long in_RSI;
   uint uVar24;
   ulong uVar25;
   uint uVar26;
   uint uVar27;
   long lVar28;
   if (( *(long*)( in_RSI + 0x248 ) != 0 ) && ( *(int*)( in_RSI + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x268 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x268 ) * 8 );
      if (*in_RDX == 0) {
         uVar21 = StringName::get_empty_hash();
      }
 else {
         uVar21 = *(uint*)( *in_RDX + 0x20 );
      }

      uVar25 = CONCAT44(0, uVar1);
      lVar28 = *(long*)( in_RSI + 0x250 );
      if (uVar21 == 0) {
         uVar21 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar21 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar25;
      lVar23 = SUB168(auVar3 * auVar11, 8);
      uVar24 = *(uint*)( lVar28 + lVar23 * 4 );
      iVar22 = SUB164(auVar3 * auVar11, 8);
      if (uVar24 != 0) {
         uVar26 = 0;
         do {
            if (( uVar24 == uVar21 ) && ( lVar23 = *(long*)( *(long*)( *(long*)( in_RSI + 0x248 ) + lVar23 * 8 ) + 0x10 ) ),lVar23 == *in_RDX) {
               if (( *(long*)( in_RSI + 0x248 ) != 0 ) && ( *(int*)( in_RSI + 0x26c ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x268 ) * 4 );
                  uVar25 = CONCAT44(0, uVar1);
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x268 ) * 8 );
                  if (lVar23 == 0) {
                     uVar21 = StringName::get_empty_hash();
                     lVar28 = *(long*)( in_RSI + 0x250 );
                  }
 else {
                     uVar21 = *(uint*)( lVar23 + 0x20 );
                  }

                  if (uVar21 == 0) {
                     uVar21 = 1;
                  }

                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar21 * lVar2;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar25;
                  lVar23 = SUB168(auVar7 * auVar15, 8);
                  uVar24 = *(uint*)( lVar28 + lVar23 * 4 );
                  uVar26 = SUB164(auVar7 * auVar15, 8);
                  if (uVar24 != 0) {
                     uVar27 = 0;
                     do {
                        if (( uVar24 == uVar21 ) && ( *(long*)( *(long*)( *(long*)( in_RSI + 0x248 ) + lVar23 * 8 ) + 0x10 ) == *in_RDX )) {
                           lVar2 = *(long*)( *(long*)( in_RSI + 0x248 ) + (ulong)uVar26 * 8 );
                           *(undefined8*)param_1 = 0;
                           lVar2 = *(long*)( lVar2 + 0x18 );
                           if (lVar2 == 0) {
                              return param_1;
                           }

                           *(long*)param_1 = lVar2;
                           cVar20 = RefCounted::reference();
                           if (cVar20 != '\0') {
                              return param_1;
                           }

                           *(undefined8*)param_1 = 0;
                           return param_1;
                        }

                        uVar27 = uVar27 + 1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = ( ulong )(uVar26 + 1) * lVar2;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = uVar25;
                        lVar23 = SUB168(auVar8 * auVar16, 8);
                        uVar24 = *(uint*)( lVar28 + lVar23 * 4 );
                        uVar26 = SUB164(auVar8 * auVar16, 8);
                     }
 while ( ( uVar24 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar24 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar25,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar26 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar25,uVar27 <= SUB164(auVar10 * auVar18, 8) );
                  }

               }

               _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar19 = (code*)invalidInstructionException();
               ( *pcVar19 )();
            }

            uVar26 = uVar26 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar22 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar25;
            lVar23 = SUB168(auVar4 * auVar12, 8);
            uVar24 = *(uint*)( lVar28 + lVar23 * 4 );
            iVar22 = SUB164(auVar4 * auVar12, 8);
         }
 while ( ( uVar24 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar24 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar25,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar22 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar25,uVar26 <= SUB164(auVar6 * auVar14, 8) );
      }

   }

   _err_print_error("get_spirv", "./servers/rendering/rendering_device_binds.h", 0x168, "Condition \"!versions.has(p_version)\" is true. Returning: Ref<RDShaderSPIRV>()", 0, 0);
   *(undefined8*)param_1 = 0;
   return param_1;
}
/* Callable create_custom_callable_function_pointer<ShaderFileEditor>(ShaderFileEditor*, char
   const*, void (ShaderFileEditor::*)()) */ShaderFileEditor *create_custom_callable_function_pointer<ShaderFileEditor>(ShaderFileEditor *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010f0e8;
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
/* Callable create_custom_callable_function_pointer<ShaderFileEditor, int>(ShaderFileEditor*, char
   const*, void (ShaderFileEditor::*)(int)) */ShaderFileEditor *create_custom_callable_function_pointer<ShaderFileEditor,int>(ShaderFileEditor *param_1, char *param_2, _func_void_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010f178;
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
/* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Node::_bind_methods;
   if (bVar1) {
      if (*(long*)( this + 0x648 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x630 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x618 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x5e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x5d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x5b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x5a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x588 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x570 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x558 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x540 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x528 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x510 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x4f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x4e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x4c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x4b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x498 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x480 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x468 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x450 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x438 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010801a;
      }

      if (*(long*)( this + 0x420 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010801a:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x418 ));
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
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            Container::initialize_class();
         }

         local_58 = 0;
         local_40 = 9;
         local_48 = "Container";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
         local_48 = "BoxContainer";
         local_60 = 0;
         local_40 = 0xc;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00113070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "BoxContainer";
      local_58 = 0;
      local_40 = 0xc;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
      local_48 = "VBoxContainer";
      local_60 = 0;
      local_40 = 0xd;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderFileEditor::_initialize_classv() */void ShaderFileEditor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (PanelContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            Container::initialize_class();
         }

         local_58 = 0;
         local_40 = 9;
         local_48 = "Container";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
         local_48 = "PanelContainer";
         local_60 = 0;
         local_40 = 0xe;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00113078 != Container::_bind_methods) {
            PanelContainer::_bind_methods();
         }

         PanelContainer::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "PanelContainer";
      local_58 = 0;
      local_40 = 0xe;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
      local_48 = "ShaderFileEditor";
      local_60 = 0;
      local_40 = 0x10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HSplitContainer::_initialize_classv() */void HSplitContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (SplitContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            Container::initialize_class();
         }

         local_58 = 0;
         local_40 = 9;
         local_48 = "Container";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
         local_48 = "SplitContainer";
         local_60 = 0;
         local_40 = 0xe;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00113080 != Container::_bind_methods) {
            SplitContainer::_bind_methods();
         }

         SplitContainer::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "SplitContainer";
      local_58 = 0;
      local_40 = 0xe;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
      local_48 = "HSplitContainer";
      local_60 = 0;
      local_40 = 0xf;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00108b58) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* ShaderFileEditorPlugin::get_class() const */void ShaderFileEditorPlugin::get_class(void) {
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
/* HSplitContainer::get_class() const */void HSplitContainer::get_class(void) {
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
/* ShaderFileEditor::get_class() const */void ShaderFileEditor::get_class(void) {
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
/* CallableCustomMethodPointer<ShaderFileEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ShaderFileEditor,void>::call(CallableCustomMethodPointer<ShaderFileEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   String_conflict local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String_conflict)0x0;
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
         goto LAB_0010952f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010952f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00109508. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_001095e0;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010952f:local_40 = 0;
      String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String_conflict*)"Invalid Object id \'";
      String::operator +(local_38, (String_conflict*)local_48);
      _err_print_error(&_LC70, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001095e0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ShaderFileEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ShaderFileEditor,void,int>::call(CallableCustomMethodPointer<ShaderFileEditor,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   String_conflict local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String_conflict)0x0;
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
         goto LAB_001097a8;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001097a8;
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
            uVar3 = _LC71;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00109757. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5);
               return;
            }

            goto LAB_00109859;
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
      LAB_001097a8:local_40 = 0;
      String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String_conflict*)"Invalid Object id \'";
      String::operator +(local_38, (String_conflict*)local_48);
      _err_print_error(&_LC70, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109859:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            Container::initialize_class();
         }

         local_58 = 0;
         local_40 = 9;
         local_48 = "Container";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
         local_48 = "BoxContainer";
         local_60 = 0;
         local_40 = 0xc;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if ((code*)PTR__bind_methods_00113070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "BoxContainer";
      local_58 = 0;
      local_40 = 0xc;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
      local_48 = "HBoxContainer";
      local_60 = 0;
      local_40 = 0xd;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderFileEditorPlugin::_initialize_classv() */void ShaderFileEditorPlugin::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (EditorPlugin::initialize_class() == '\0') {
         if (Node::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "Node");
            StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
            if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if ((code*)PTR__bind_methods_00113010 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node";
         local_68 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "EditorPlugin";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00113088 != Node::_bind_methods) {
            EditorPlugin::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_00113090 != Object::_bind_compatibility_methods) {
            EditorPlugin::_bind_compatibility_methods();
         }

         EditorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "EditorPlugin";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "ShaderFileEditorPlugin";
      local_70 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00109edb;
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00109edb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00109edb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderFileEditorPlugin::is_class(String const&) const */undefined8 ShaderFileEditorPlugin::is_class(ShaderFileEditorPlugin *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010a0db;
   }

   cVar5 = String::operator ==(param_1, "ShaderFileEditorPlugin");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010a0db;
      }

      cVar5 = String::operator ==(param_1, "EditorPlugin");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_0010a1de;
      }

   }

   LAB_0010a0db:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a1de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010a2eb;
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010a2eb;
      }

      cVar5 = String::operator ==(param_1, "CanvasItem");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_0010a3ee;
      }

   }

   LAB_0010a2eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a3ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String_conflict *param_1) {
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

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010a4fb;
   }

   cVar4 = String::operator ==(param_1, "Container");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Control::is_class((Control*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010a4fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HSplitContainer::is_class(String const&) const */undefined8 HSplitContainer::is_class(HSplitContainer *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010a64b;
   }

   cVar5 = String::operator ==(param_1, "HSplitContainer");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010a64b;
      }

      cVar5 = String::operator ==(param_1, "SplitContainer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Container::is_class((Container*)this, param_1);
            return uVar6;
         }

         goto LAB_0010a74e;
      }

   }

   LAB_0010a64b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a74e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ShaderFileEditor::is_class(String const&) const */undefined8 ShaderFileEditor::is_class(ShaderFileEditor *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010a85b;
   }

   cVar5 = String::operator ==(param_1, "ShaderFileEditor");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010a85b;
      }

      cVar5 = String::operator ==(param_1, "PanelContainer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Container::is_class((Container*)this, param_1);
            return uVar6;
         }

         goto LAB_0010a95e;
      }

   }

   LAB_0010a85b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a95e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
            if (pvVar3 == (void*)0x0) goto LAB_0010aa5f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010aa5f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010abbb;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010abbb;
      }

      cVar5 = String::operator ==(param_1, "BoxContainer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Container::is_class((Container*)this, param_1);
            return uVar6;
         }

         goto LAB_0010acbe;
      }

   }

   LAB_0010abbb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010acbe:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010adcb;
   }

   cVar5 = String::operator ==(param_1, "VBoxContainer");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010adcb;
      }

      cVar5 = String::operator ==(param_1, "BoxContainer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Container::is_class((Container*)this, param_1);
            return uVar6;
         }

         goto LAB_0010aece;
      }

   }

   LAB_0010adcb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010aece:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010b03c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b03c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorPlugin::_get_property_listv(EditorPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "EditorPlugin";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorPlugin";
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010b2a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b2a1:local_b0 = (CowData<char32_t>*)&local_58;
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
/* ShaderFileEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ShaderFileEditorPlugin::_get_property_listv(ShaderFileEditorPlugin *this, List *param_1, bool param_2) {
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
      EditorPlugin::_get_property_listv((EditorPlugin*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ShaderFileEditorPlugin";
   local_70 = 0x16;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ShaderFileEditorPlugin";
   local_98 = 0;
   local_70 = 0x16;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010b551;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b551:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "ShaderFileEditorPlugin", false);
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010b801;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b801:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00113098 != Object::_get_property_list) {
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010bad1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010bad1:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_001130a0 != CanvasItem::_get_property_list) {
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010bda1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010bda1:local_b0 = (CowData<char32_t>*)&local_58;
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
/* PanelContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PanelContainer::_get_property_listv(PanelContainer *this, List *param_1, bool param_2) {
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
   local_78 = "PanelContainer";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PanelContainer";
   local_98 = 0;
   local_70 = 0xe;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010c051;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c051:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "PanelContainer", false);
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
/* ShaderFileEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ShaderFileEditor::_get_property_listv(ShaderFileEditor *this, List *param_1, bool param_2) {
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
      PanelContainer::_get_property_listv((PanelContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ShaderFileEditor";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ShaderFileEditor";
   local_98 = 0;
   local_70 = 0x10;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010c301;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c301:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "ShaderFileEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         PanelContainer::_get_property_listv((PanelContainer*)this, param_1, true);
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
   local_78 = "SplitContainer";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SplitContainer";
   local_98 = 0;
   local_70 = 0xe;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010c5b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c5b1:local_b0 = (CowData<char32_t>*)&local_58;
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
      SplitContainer::_get_property_listv((SplitContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HSplitContainer";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HSplitContainer";
   local_98 = 0;
   local_70 = 0xf;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010c861;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c861:local_b0 = (CowData<char32_t>*)&local_58;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010cb11;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010cb11:local_b0 = (CowData<char32_t>*)&local_58;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010cdc1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010cdc1:local_b0 = (CowData<char32_t>*)&local_58;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0010d071;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d071:local_b0 = (CowData<char32_t>*)&local_58;
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
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
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
/* Ref<RDShaderSPIRV>::unref() */void Ref<RDShaderSPIRV>::unref(Ref<RDShaderSPIRV> *this) {
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
/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
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
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 1;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<StringName>::_realloc(long) */undefined8 CowData<StringName>::_realloc(CowData<StringName> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<StringName>::resize<false>(long) */undefined8 CowData<StringName>::resize<false>(CowData<StringName> *this, long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   long lVar8;
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
      LAB_0010d6e0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar8 = uVar6 + 1;
   if (lVar8 == 0) goto LAB_0010d6e0;
   if (param_1 <= lVar4) {
      lVar4 = *(long*)this;
      uVar6 = param_1;
      while (lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar6) {
            LAB_0010d5ba:if (lVar8 != lVar5) {
               uVar2 = _realloc(this, lVar8);
               if ((int)uVar2 != 0) {
                  return uVar2;
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

         while (( StringName::configured == '\0' || ( *(long*)( lVar4 + uVar6 * 8 ) == 0 ) )) {
            uVar6 = uVar6 + 1;
            if (*(ulong*)( lVar4 + -8 ) <= uVar6) goto LAB_0010d5ba;
         }
;
         StringName::unref();
         uVar6 = uVar6 + 1;
         lVar4 = *(long*)this;
      }
;
      goto LAB_0010d587;
   }

   if (lVar8 == lVar5) {
      LAB_0010d65b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_0010d587:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010d63b;
   }
 else {
      if (lVar4 != 0) {
         uVar2 = _realloc(this, lVar8);
         if ((int)uVar2 != 0) {
            return uVar2;
         }

         goto LAB_0010d65b;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0010d63b:puVar7[-1] = param_1;
   return 0;
}
/* RDShaderFile::get_version_list() const */void RDShaderFile::get_version_list(void) {
   int iVar1;
   Variant *pVVar2;
   StringName *pSVar3;
   long lVar4;
   StringName *pSVar5;
   long in_RSI;
   long lVar6;
   uint uVar7;
   Array *in_RDI;
   long *plVar8;
   long lVar9;
   long in_FS_OFFSET;
   long local_90;
   long local_70[2];
   StringName *local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   plVar8 = *(long**)( in_RSI + 600 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = (StringName*)0x0;
   if (plVar8 != (long*)0x0) {
      pSVar5 = (StringName*)0x0;
      do {
         StringName::StringName((StringName*)local_70, (StringName*)( plVar8 + 2 ));
         if (pSVar5 == (StringName*)0x0) {
            lVar6 = 1;
         }
 else {
            lVar6 = *(long*)( pSVar5 + -8 ) + 1;
         }

         iVar1 = CowData<StringName>::resize<false>((CowData<StringName>*)&local_60, lVar6);
         pSVar5 = local_60;
         if (iVar1 == 0) {
            if (local_60 == (StringName*)0x0) {
               lVar9 = -1;
               lVar6 = 0;
            }
 else {
               lVar6 = *(long*)( local_60 + -8 );
               lVar9 = lVar6 + -1;
               if (-1 < lVar9) {
                  CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_60);
                  pSVar5 = local_60;
                  StringName::operator =(local_60 + lVar9 * 8, (StringName*)local_70);
                  goto LAB_0010d85d;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar6, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            pSVar5 = local_60;
         }

         LAB_0010d85d:if (( StringName::configured != '\0' ) && ( local_70[0] != 0 )) {
            StringName::unref();
         }

         plVar8 = (long*)*plVar8;
      }
 while ( plVar8 != (long*)0x0 );
      if (pSVar5 != (StringName*)0x0) {
         lVar6 = *(long*)( pSVar5 + -8 );
         if (( lVar6 != 0 ) && ( CowData<StringName>::_copy_on_write((CowData<StringName>*)&local_60),pSVar5 = local_60,lVar6 != 1 )) {
            local_90 = 0;
            lVar9 = lVar6;
            do {
               lVar9 = lVar9 >> 1;
               local_90 = local_90 + 1;
            }
 while ( lVar9 != 1 );
            local_90 = local_90 * 2;
            lVar9 = lVar6;
            lVar4 = 1;
            if (lVar6 < 0x11) {
               do {
                  lVar9 = lVar4 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar4, pSVar5);
                  lVar4 = lVar9;
               }
 while ( lVar6 != lVar9 );
            }
 else {
               do {
                  local_90 = local_90 + -1;
                  pSVar3 = (StringName*)SortArray<StringName,StringName::AlphCompare,true>::median_of_3(pSVar5, pSVar5 + ( lVar9 >> 1 ) * 8, pSVar5 + lVar9 * 8 + -8);
                  StringName::StringName((StringName*)local_70, pSVar3);
                  lVar4 = SortArray<StringName,StringName::AlphCompare,true>::partitioner(0, lVar9, (StringName*)local_70, pSVar5);
                  if (( StringName::configured != '\0' ) && ( local_70[0] != 0 )) {
                     StringName::unref();
                  }

                  SortArray<StringName,StringName::AlphCompare,true>::introsort(lVar4, lVar9, pSVar5, local_90);
                  lVar9 = 1;
                  if (lVar4 < 0x11) goto LAB_0010db58;
                  lVar9 = lVar4;
               }
 while ( local_90 != 0 );
               SortArray<StringName,StringName::AlphCompare,true>::partial_sort(0, lVar4, lVar4, pSVar5);
               lVar9 = 1;
               LAB_0010db58:do {
                  lVar4 = lVar9 + 1;
                  SortArray<StringName,StringName::AlphCompare,true>::linear_insert(0, lVar9, pSVar5);
                  lVar9 = lVar4;
               }
 while ( lVar4 != 0x10 );
               do {
                  StringName::StringName((StringName*)local_70, pSVar5 + lVar4 * 8);
                  SortArray<StringName,StringName::AlphCompare,true>::unguarded_linear_insert(lVar4, (StringName*)local_70, pSVar5);
                  if (( StringName::configured != '\0' ) && ( local_70[0] != 0 )) {
                     StringName::unref();
                  }

                  lVar4 = lVar4 + 1;
               }
 while ( lVar6 != lVar4 );
            }

         }

         goto LAB_0010d89d;
      }

   }

   pSVar5 = (StringName*)0x0;
   LAB_0010d89d:Array::Array(in_RDI);
   local_58[0] = 0;
   local_58[1] = 0;
   local_70[0] = 0;
   local_50 = (undefined1[16])0x0;
   uVar7 = (uint)in_RDI;
   Array::set_typed(uVar7, (StringName*)0x15, (Variant*)local_70);
   if (( StringName::configured != '\0' ) && ( local_70[0] != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (pSVar5 == (StringName*)0x0) {
      Array::resize(uVar7);
   }
 else {
      Array::resize(uVar7);
      if (0 < *(long*)( pSVar5 + -8 )) {
         lVar6 = 0;
         do {
            while (true) {
               Variant::Variant((Variant*)local_58, pSVar5 + lVar6 * 8);
               pVVar2 = (Variant*)Array::operator [](uVar7);
               if (pVVar2 == (Variant*)local_58) break;
               if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar2 = 0;
               *(int*)pVVar2 = local_58[0];
               *(undefined8*)( pVVar2 + 8 ) = local_50._0_8_;
               *(undefined8*)( pVVar2 + 0x10 ) = local_50._8_8_;
               LAB_0010d95c:lVar6 = lVar6 + 1;
               if (*(long*)( pSVar5 + -8 ) <= lVar6) goto LAB_0010d9b0;
            }
;
            if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010d95c;
            lVar6 = lVar6 + 1;
            Variant::_clear_internal();
         }
 while ( lVar6 < *(long*)( pSVar5 + -8 ) );
      }

   }

   LAB_0010d9b0:CowData<StringName>::_unref((CowData<StringName>*)&local_60);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ShaderFileEditor::_notificationv(int, bool) */void ShaderFileEditor::_notificationv(ShaderFileEditor *this, int param_1, bool param_2) {
   char cVar1;
   int iVar2;
   iVar2 = (int)this;
   if (param_2) {
      if (( ( param_1 == 0x3ec ) && ( cVar1 = CanvasItem::is_visible_in_tree() ),cVar1 != '\0' )) {
         _update_options(this);
      }

      if ((code*)PTR__notification_001130a8 != Container::_notification) {
         PanelContainer::_notification(iVar2);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar2);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar2);
   }

   if ((code*)PTR__notification_001130a8 != Container::_notification) {
      PanelContainer::_notification(iVar2);
   }

   if (( ( param_1 == 0x3ec ) && ( cVar1 = CanvasItem::is_visible_in_tree() ),cVar1 != '\0' )) {
      _update_options(this);
      return;
   }

   return;
}
/* ShaderFileEditor::_update_version(StringName const&, RenderingDeviceCommons::ShaderStage) */void ShaderFileEditor::_GLOBAL__sub_I__update_version(void) {
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

   if (ItemList::base_property_helper != '\0') {
      return;
   }

   ItemList::base_property_helper = 1;
   ItemList::base_property_helper._64_8_ = 0;
   ItemList::base_property_helper._56_8_ = 2;
   ItemList::base_property_helper._0_16_ = (undefined1[16])0x0;
   ItemList::base_property_helper._24_16_ = (undefined1[16])0x0;
   ItemList::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, ItemList::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderFileEditor::~ShaderFileEditor() */void ShaderFileEditor::~ShaderFileEditor(ShaderFileEditor *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderFileEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderFileEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderFileEditor,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ShaderFileEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ShaderFileEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ShaderFileEditor,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


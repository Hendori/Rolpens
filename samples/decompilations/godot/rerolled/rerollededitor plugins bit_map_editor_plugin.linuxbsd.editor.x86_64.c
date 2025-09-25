/* EditorInspectorPluginBitMap::can_handle(Object*) */bool EditorInspectorPluginBitMap::can_handle(EditorInspectorPluginBitMap *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &BitMap::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* BitMapEditorPlugin::BitMapEditorPlugin() */void BitMapEditorPlugin::BitMapEditorPlugin(BitMapEditorPlugin *this) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_30;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::Node((Node*)this);
   *(code**)this = EditorPlugin::add_inspector_plugin;
   *(undefined2*)( this + 0x408 ) = 0;
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x420 ), "_forward_canvas_gui_input", false);
   this[0x428] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
   this[0x440] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
   this[0x458] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
   this[0x470] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x478 ) = 0;
   StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
   this[0x488] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x490 ) = 0;
   StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
   this[0x4a0] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x4a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
   this[0x4b8] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
   this[0x4d0] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
   this[0x4e8] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x4f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
   this[0x500] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x508 ) = 0;
   StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
   this[0x518] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x520 ) = 0;
   StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
   this[0x530] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x538 ) = 0;
   StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
   this[0x548] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x550 ) = 0;
   StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
   this[0x560] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x568 ) = 0;
   StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
   this[0x578] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x580 ) = 0;
   StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
   this[0x590] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x598 ) = 0;
   StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
   this[0x5a8] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
   this[0x5c0] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x5c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
   this[0x5d8] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
   this[0x5f0] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
   this[0x608] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x610 ) = 0;
   StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
   this[0x620] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x628 ) = 0;
   StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
   this[0x638] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x640 ) = 0;
   StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
   this[0x650] = (BitMapEditorPlugin)0x0;
   *(undefined8*)( this + 0x658 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_001087b8;
   local_30 = (Object*)0x0;
   Ref<EditorInspectorPluginBitMap>::instantiate<>((Ref<EditorInspectorPluginBitMap>*)&local_30);
   pOVar1 = local_30;
   local_28 = (Object*)0x0;
   if (local_30 == (Object*)0x0) {
      EditorPlugin::add_inspector_plugin((Ref*)this);
      if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar3 = local_28,cVar2 != '\0' )) goto LAB_001004c4;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &EditorInspectorPlugin::typeinfo, 0);
      if (( pOVar3 != (Object*)0x0 ) && ( local_28 = pOVar3 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_28 = (Object*)0x0;
      }

      EditorPlugin::add_inspector_plugin((Ref*)this);
      if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar3 = local_28,cVar2 != '\0' )) {
         LAB_001004c4:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         if (pOVar1 == (Object*)0x0) goto LAB_001004df;
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pOVar1, false);
            return;
         }

         goto LAB_00100586;
      }

   }

   LAB_001004df:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100586:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BitMapEditor::setup(Ref<BitMap> const&) */void BitMapEditor::setup(Ref *param_1) {
   long *plVar1;
   Ref *pRVar2;
   String_conflict *pSVar3;
   long lVar4;
   undefined *puVar5;
   char cVar6;
   int iVar7;
   Object *pOVar8;
   undefined *puVar9;
   long in_FS_OFFSET;
   Object *local_58;
   Object *local_50;
   Object *local_48;
   long local_40;
   long local_30;
   pRVar2 = *(Ref**)( param_1 + 0xa10 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   BitMap::convert_to_image();
   ImageTexture::create_from_image((Ref*)&local_50);
   local_48 = (Object*)0x0;
   if (local_50 != (Object*)0x0) {
      pOVar8 = (Object*)__dynamic_cast(local_50, &Object::typeinfo, &Texture2D::typeinfo, 0);
      if (pOVar8 != (Object*)0x0) {
         local_48 = pOVar8;
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            local_48 = (Object*)0x0;
         }

      }

   }

   TextureRect::set_texture(pRVar2);
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar8 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }

      }

   }

   if (local_50 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_50);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)local_50 + 0x140 ) )(local_50);
            Memory::free_static(local_50, false);
         }

      }

   }

   if (local_58 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_58);
         if (cVar6 != '\0') {
            if (*(code**)( *(long*)local_58 + 0x140 ) == Image::~Image) {
               *(code**)local_58 = Memory::free_static;
               if (*(long*)( local_58 + 0x250 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( local_58 + 0x250 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( local_58 + 0x250 );
                     *(undefined8*)( local_58 + 0x250 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               Resource::~Resource((Resource*)local_58);
            }
 else {
               ( **(code**)( *(long*)local_58 + 0x140 ) )(local_58);
            }

            Memory::free_static(local_58, false);
         }

      }

   }

   pSVar3 = *(String_conflict**)( param_1 + 0xa18 );
   BitMap::get_size();
   iVar7 = BitMap::get_size();
   local_50 = (Object*)0x0;
   puVar5 = &_LC53;
   do {
      puVar9 = puVar5;
      puVar5 = puVar9 + 4;
   }
 while ( *(int*)( puVar9 + 4 ) != 0 );
   local_48 = (Object*)&_LC53;
   local_40 = (long)( puVar9 + -0x1035e4 ) >> 2;
   String::parse_utf32((StrRange*)&local_50);
   vformat<int,int>((String_conflict*)&local_48, (int)(Ref*)&local_50, iVar7);
   Label::set_text(pSVar3);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* BitMapEditor::BitMapEditor() */void BitMapEditor::BitMapEditor(BitMapEditor *this) {
   Vector2 *pVVar1;
   char cVar2;
   TextureRect *this_00;
   Label *this_01;
   StyleBox *this_02;
   Object *pOVar3;
   StringName *pSVar4;
   StyleBox *pSVar5;
   long in_FS_OFFSET;
   float fVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   Object *local_40;
   undefined8 local_38;
   long local_30;
   undefined8 extraout_XMM0_Qb;
   undefined8 extraout_XMM0_Qb_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   BoxContainer::BoxContainer((BoxContainer*)this, true);
   this[0xa0c] = (BitMapEditor)0x1;
   *(undefined***)this = &PTR__initialize_classv_00108440;
   *(undefined1(*) [16])( this + 0xa10 ) = (undefined1[16])0x0;
   this_00 = (TextureRect*)operator_new(0x9e0, "");
   TextureRect::TextureRect(this_00);
   postinitialize_handler((Object*)this_00);
   *(TextureRect**)( this + 0xa10 ) = this_00;
   TextureRect::set_stretch_mode(this_00, 5);
   ( **(code**)( **(long**)( this + 0xa10 ) + 0x2c8 ) )(*(long**)( this + 0xa10 ), 1);
   pVVar1 = *(Vector2**)( this + 0xa10 );
   fVar6 = (float)EditorScale::get_scale();
   local_38 = CONCAT44(fVar6 * _LC54._4_4_, fVar6 * (float)_LC54);
   Control::set_custom_minimum_size(pVVar1);
   Node::add_child(this, *(undefined8*)( this + 0xa10 ), 0, 0);
   this_01 = (Label*)operator_new(0xad8, "");
   local_40 = (Object*)0x0;
   Label::Label(this_01, (String_conflict*)&local_40);
   postinitialize_handler((Object*)this_01);
   *(Label**)( this + 0xa18 ) = this_01;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   Label::set_horizontal_alignment(*(undefined8*)( this + 0xa18 ), 2);
   Node::add_child(this, *(undefined8*)( this + 0xa18 ), 0, 0);
   this_02 = (StyleBox*)operator_new(0x2b0, "");
   StyleBox::StyleBox(this_02);
   *(undefined***)this_02 = &PTR__initialize_classv_00108240;
   postinitialize_handler((Object*)this_02);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      auVar7._0_8_ = EditorScale::get_scale();
      auVar7._8_8_ = extraout_XMM0_Qb;
      auVar8._4_12_ = auVar7._4_12_;
      auVar8._0_4_ = (float)auVar7._0_8_ * __LC55;
      StyleBox::set_content_margin(auVar8._0_8_, 0, 2);
      pSVar4 = *(StringName**)( this + 0xa18 );
      LAB_00100b4b:local_40 = (Object*)0x0;
      Control::add_theme_style_override(pSVar4, (Ref*)( CoreStringNames::singleton + 0xb8 ));
      if (( local_40 != (Object*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
         pSVar5 = (StyleBox*)0x0;
         LAB_00100cb8:pOVar3 = local_40;
         cVar2 = predelete_handler(local_40);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

         if (pSVar5 != (StyleBox*)0x0) goto LAB_00100c5a;
      }

   }
 else {
      cVar2 = RefCounted::reference();
      pSVar5 = (StyleBox*)0x0;
      if (cVar2 != '\0') {
         pSVar5 = this_02;
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_02) ),cVar2 != '\0') {
         ( **(code**)( *(long*)this_02 + 0x140 ) )(this_02);
         Memory::free_static(this_02, false);
      }

      auVar9._0_8_ = EditorScale::get_scale();
      auVar9._8_8_ = extraout_XMM0_Qb_00;
      auVar10._4_12_ = auVar9._4_12_;
      auVar10._0_4_ = (float)auVar9._0_8_ * __LC55;
      StyleBox::set_content_margin(auVar10._0_8_, pSVar5, 2);
      pSVar4 = *(StringName**)( this + 0xa18 );
      local_40 = (Object*)0x0;
      if (pSVar5 == (StyleBox*)0x0) goto LAB_00100b4b;
      pOVar3 = (Object*)__dynamic_cast(pSVar5, &Object::typeinfo, &StyleBox::typeinfo, 0);
      if (( pOVar3 != (Object*)0x0 ) && ( local_40 = pOVar3 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_40 = (Object*)0x0;
      }

      Control::add_theme_style_override(pSVar4, (Ref*)( CoreStringNames::singleton + 0xb8 ));
      if (( local_40 != (Object*)0x0 ) && ( cVar2 = cVar2 != '\0' )) goto LAB_00100cb8;
      LAB_00100c5a:cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pSVar5) ),cVar2 != '\0') {
         ( **(code**)( *(long*)pSVar5 + 0x140 ) )(pSVar5);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pSVar5, false);
            return;
         }

         goto LAB_00100d1c;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100d1c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorInspectorPluginBitMap::parse_begin(Object*) */void EditorInspectorPluginBitMap::parse_begin(EditorInspectorPluginBitMap *this, Object *param_1) {
   long lVar1;
   char cVar2;
   Object *pOVar3;
   BitMapEditor *pBVar4;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (Object*)0x0) {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &BitMap::typeinfo, 0);
      if (pOVar3 != (Object*)0x0) {
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            pBVar4 = (BitMapEditor*)operator_new(0xa20, "");
            BitMapEditor::BitMapEditor(pBVar4);
            postinitialize_handler((Object*)pBVar4);
            BitMapEditor::setup((Ref*)pBVar4);
            if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
               EditorInspectorPlugin::add_custom_control((Control*)this);
               return;
            }

            goto LAB_00100e8a;
         }

         pBVar4 = (BitMapEditor*)operator_new(0xa20, "");
         BitMapEditor::BitMapEditor(pBVar4);
         postinitialize_handler((Object*)pBVar4);
         BitMapEditor::setup((Ref*)pBVar4);
         EditorInspectorPlugin::add_custom_control((Control*)this);
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar3);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(pOVar3, false);
                  return;
               }

               goto LAB_00100e8a;
            }

         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100e8a:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x108d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
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
   return (uint)CONCAT71(0x108d, (undefined4*)param_1 == &StyleBox::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* EditorPlugin::selected_notify() */void EditorPlugin::selected_notify(void) {
   return;
}
/* EditorPlugin::edited_scene_changed() */void EditorPlugin::edited_scene_changed(void) {
   return;
}
/* EditorInspectorPluginBitMap::is_class_ptr(void*) const */uint EditorInspectorPluginBitMap::is_class_ptr(EditorInspectorPluginBitMap *this, void *param_1) {
   return (uint)CONCAT71(0x108c, (undefined4*)param_1 == &EditorInspectorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorInspectorPluginBitMap::_getv(StringName const&, Variant&) const */undefined8 EditorInspectorPluginBitMap::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorInspectorPluginBitMap::_setv(StringName const&, Variant const&) */undefined8 EditorInspectorPluginBitMap::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorInspectorPluginBitMap::_validate_propertyv(PropertyInfo&) const */void EditorInspectorPluginBitMap::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorInspectorPluginBitMap::_property_can_revertv(StringName const&) const */undefined8 EditorInspectorPluginBitMap::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorInspectorPluginBitMap::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorInspectorPluginBitMap::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorInspectorPluginBitMap::_notificationv(int, bool) */void EditorInspectorPluginBitMap::_notificationv(int param_1, bool param_2) {
   return;
}
/* BitMapEditorPlugin::is_class_ptr(void*) const */uint BitMapEditorPlugin::is_class_ptr(BitMapEditorPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x108c, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* BitMapEditorPlugin::_getv(StringName const&, Variant&) const */undefined8 BitMapEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* BitMapEditorPlugin::_setv(StringName const&, Variant const&) */undefined8 BitMapEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* BitMapEditorPlugin::_property_can_revertv(StringName const&) const */undefined8 BitMapEditorPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* BitMapEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 BitMapEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* BitMapEditor::_property_get_revertv(StringName const&, Variant&) const */undefined8 BitMapEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* BitMapEditor::_property_can_revertv(StringName const&) const */undefined8 BitMapEditor::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010c008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* BitMapEditorPlugin::_validate_propertyv(PropertyInfo&) const */void BitMapEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)PTR__validate_property_0010c010 != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }

   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001080e0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001080e0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
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
         LAB_00101383:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101383;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxEmpty");
         goto LAB_001013ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxEmpty");
   LAB_001013ee:return &_get_class_namev();
}
/* BitMapEditor::_validate_propertyv(PropertyInfo&) const */void BitMapEditor::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010c018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* BitMapEditor::_setv(StringName const&, Variant const&) */undefined8 BitMapEditor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010c020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00101588) *//* BitMapEditor::_getv(StringName const&, Variant&) const */undefined8 BitMapEditor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010c028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* BitMapEditorPlugin::_notificationv(int, bool) */void BitMapEditorPlugin::_notificationv(BitMapEditorPlugin *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010c030 != Node::_notification) {
         EditorPlugin::_notification(iVar1);
      }

      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   if ((code*)PTR__notification_0010c030 == Node::_notification) {
      return;
   }

   EditorPlugin::_notification(iVar1);
   return;
}
/* BitMapEditor::is_class_ptr(void*) const */ulong BitMapEditor::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   if (in_RSI == &VBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static()::ptr) {
      return CONCAT71(0x108c, in_RSI == &VBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static(), ::ptr);
   }

   return ( ulong )((uint)CONCAT71(0x108c, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108c, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x108d, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr));
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* BitMapEditor::~BitMapEditor() */void BitMapEditor::~BitMapEditor(BitMapEditor *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101750;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101750:Control::~Control((Control*)this);
   return;
}
/* BitMapEditor::~BitMapEditor() */void BitMapEditor::~BitMapEditor(BitMapEditor *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001017b0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001017b0:Control::~Control((Control*)this);
   operator_delete(this, 0xa20);
   return;
}
/* EditorInspectorPluginBitMap::_get_class_namev() const */undefined8 *EditorInspectorPluginBitMap::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101823:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101823;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorInspectorPluginBitMap");
         goto LAB_0010188e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorInspectorPluginBitMap");
   LAB_0010188e:return &_get_class_namev();
}
/* BitMapEditorPlugin::_get_class_namev() const */undefined8 *BitMapEditorPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101913:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101913;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "BitMapEditorPlugin");
         goto LAB_0010197e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "BitMapEditorPlugin");
   LAB_0010197e:return &_get_class_namev();
}
/* BitMapEditor::_get_class_namev() const */undefined8 *BitMapEditor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101a03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101a03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "BitMapEditor");
         goto LAB_00101a6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "BitMapEditor");
   LAB_00101a6e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101ae3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101ae3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00101b4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00101b4e:return &_get_class_namev();
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
/* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101cee;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101cee;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101cee;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101cee:Resource::~Resource((Resource*)this);
   return;
}
/* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101d8e;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101d8e;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101d8e;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101d8e:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2b0);
   return;
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
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00101f50) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010c038 != Container::_notification) {
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

   if ((code*)PTR__notification_0010c038 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00102020) *//* BitMapEditor::_notificationv(int, bool) */void BitMapEditor::_notificationv(BitMapEditor *this, int param_1, bool param_2) {
   int iVar1;
   if (param_2) {
      iVar1 = (int)this;
      if ((code*)PTR__notification_0010c038 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* void Ref<EditorInspectorPluginBitMap>::instantiate<>() */void Ref<EditorInspectorPluginBitMap>::instantiate<>(Ref<EditorInspectorPluginBitMap> *this) {
   char cVar1;
   RefCounted *this_00;
   long lVar2;
   RefCounted *pRVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (RefCounted*)operator_new(0x218, "");
   pRVar3 = this_00;
   for (lVar2 = 0x43; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pRVar3 = 0;
      pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   RefCounted::RefCounted(this_00);
   *(undefined8*)( this_00 + 0x180 ) = 0;
   *(code**)this_00 = postinitialize_handler;
   StringName::StringName((StringName*)( this_00 + 0x188 ), "_can_handle", false);
   this_00[400] = (RefCounted)0x0;
   *(undefined8*)( this_00 + 0x198 ) = 0;
   StringName::StringName((StringName*)( this_00 + 0x1a0 ), "_parse_begin", false);
   this_00[0x1a8] = (RefCounted)0x0;
   *(undefined8*)( this_00 + 0x1b0 ) = 0;
   StringName::StringName((StringName*)( this_00 + 0x1b8 ), "_parse_category", false);
   this_00[0x1c0] = (RefCounted)0x0;
   *(undefined8*)( this_00 + 0x1c8 ) = 0;
   StringName::StringName((StringName*)( this_00 + 0x1d0 ), "_parse_group", false);
   this_00[0x1d8] = (RefCounted)0x0;
   *(undefined8*)( this_00 + 0x1e0 ) = 0;
   StringName::StringName((StringName*)( this_00 + 0x1e8 ), "_parse_property", false);
   this_00[0x1f0] = (RefCounted)0x0;
   *(undefined8*)( this_00 + 0x1f8 ) = 0;
   StringName::StringName((StringName*)( this_00 + 0x200 ), "_parse_end", false);
   this_00[0x208] = (RefCounted)0x0;
   *(undefined8*)( this_00 + 0x210 ) = 0;
   *(undefined***)this_00 = &PTR__initialize_classv_00108a60;
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

      this_00 = (RefCounted*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (RefCounted*)pOVar5) goto LAB_00102255;
      *(RefCounted**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00102255;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (RefCounted*)0x0) {
      return;
   }

   LAB_00102255:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      return;
   }

   return;
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
   *(code**)this = EditorPlugin::add_inspector_plugin;
   if (bVar1) {
      if (*(long*)( this + 0x648 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x630 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x618 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x5e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x5d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x5b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x5a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x588 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x570 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x558 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x540 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x528 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x510 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x4f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x4e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x4c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x4b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x498 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x480 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x468 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x450 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x438 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010284a;
      }

      if (*(long*)( this + 0x420 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010284a:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x418 ));
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
/* BitMapEditorPlugin::~BitMapEditorPlugin() */void BitMapEditorPlugin::~BitMapEditorPlugin(BitMapEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_001087b8;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   return;
}
/* BitMapEditorPlugin::~BitMapEditorPlugin() */void BitMapEditorPlugin::~BitMapEditorPlugin(BitMapEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_001087b8;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   operator_delete(this, 0x660);
   return;
}
/* BitMapEditor::_initialize_classv() */void BitMapEditor::_initialize_classv(void) {
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
                        String::parse_latin1((String_conflict*)&local_50, "Object");
                        StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
                        local_60 = 0;
                        String::parse_latin1((String_conflict*)&local_60, "Node");
                        StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                        ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                        if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                        if ((code*)PTR__bind_methods_0010c050 != Node::_bind_methods) {
                           Node::_bind_methods();
                        }

                        Node::initialize_class()::initialized =
                        '\x01';
                     }

                     local_50 = 0;
                     String::parse_latin1((String_conflict*)&local_50, "Node");
                     StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
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
                     if ((code*)PTR__bind_compatibility_methods_0010c040 != Object::_bind_compatibility_methods) {
                        CanvasItem::_bind_compatibility_methods();
                     }

                     CanvasItem::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String_conflict*)&local_50, "CanvasItem");
                  StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Control");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
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
               String::parse_latin1((String_conflict*)&local_50, "Control");
               StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String_conflict*)&local_60, "Container");
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
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
            String::parse_latin1((String_conflict*)&local_50, "Container");
            StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "BoxContainer");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if ((code*)PTR__bind_methods_0010c048 != Container::_bind_methods) {
               BoxContainer::_bind_methods();
            }

            BoxContainer::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String_conflict*)&local_50, "BoxContainer");
         StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "VBoxContainer");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
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
      String::parse_latin1((String_conflict*)&local_50, "VBoxContainer");
      StringName::StringName((StringName*)&local_48, (String_conflict*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String_conflict*)&local_60, "BitMapEditor");
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
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
/* EditorInspectorPluginBitMap::_initialize_classv() */void EditorInspectorPluginBitMap::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (EditorInspectorPlugin::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String_conflict*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String_conflict*)&local_70, "RefCounted");
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
            if ((code*)PTR__bind_methods_0010c050 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String_conflict*)&local_60, "RefCounted");
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "EditorInspectorPlugin");
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
         if ((code*)PTR__bind_methods_0010c058 != RefCounted::_bind_methods) {
            EditorInspectorPlugin::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0010c060 != Object::_bind_compatibility_methods) {
            EditorInspectorPlugin::_bind_compatibility_methods();
         }

         EditorInspectorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "EditorInspectorPlugin";
      local_68 = 0;
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "EditorInspectorPluginBitMap";
      local_70 = 0;
      local_50 = 0x1b;
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
/* WARNING: Removing unreachable block (ram,0x001034a0) *//* String vformat<int, int>(String const&, int const, int const) */String_conflict *vformat<int,int>(String_conflict *param_1, int param_2, int param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   int in_ECX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d0);
   iVar3 = (int)local_d0;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_c8, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c8[0];
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* BitMapEditorPlugin::get_class() const */void BitMapEditorPlugin::get_class(void) {
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
/* BitMapEditor::get_class() const */void BitMapEditor::get_class(void) {
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
/* EditorInspectorPluginBitMap::get_class() const */void EditorInspectorPluginBitMap::get_class(void) {
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
/* StyleBoxEmpty::get_class() const */void StyleBoxEmpty::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
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
      if ((code*)PTR__bind_methods_0010c068 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBoxEmpty::_initialize_classv() */void StyleBoxEmpty::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
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
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
               local_58 = "RefCounted";
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
               if ((code*)PTR__bind_methods_0010c050 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "RefCounted";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
            local_58 = "Resource";
            local_70 = 0;
            local_50 = 8;
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
            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "StyleBox";
         local_70 = 0;
         local_50 = 8;
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
         if ((code*)PTR__bind_methods_0010c070 != Resource::_bind_methods) {
            StyleBox::_bind_methods();
         }

         StyleBox::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "StyleBox";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "StyleBoxEmpty";
      local_70 = 0;
      local_50 = 0xd;
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BitMapEditorPlugin::_initialize_classv() */void BitMapEditorPlugin::_initialize_classv(void) {
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
            if ((code*)PTR__bind_methods_0010c050 != Node::_bind_methods) {
               Node::_bind_methods();
            }

            Node::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Node";
         local_60 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String_conflict*)&local_70, "EditorPlugin");
         StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if ((code*)PTR__bind_methods_0010c078 != Node::_bind_methods) {
            EditorPlugin::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0010c080 != Object::_bind_compatibility_methods) {
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
      local_58 = "BitMapEditorPlugin";
      local_70 = 0;
      local_50 = 0x12;
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
            if (pvVar3 == (void*)0x0) goto LAB_001043ef;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001043ef:CowData<char32_t>::_unref((CowData<char32_t>*)this);
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

      if (cVar5 != '\0') goto LAB_0010454b;
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
         if (cVar5 != '\0') goto LAB_0010454b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010454b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BitMapEditorPlugin::is_class(String const&) const */undefined8 BitMapEditorPlugin::is_class(BitMapEditorPlugin *this, String_conflict *param_1) {
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

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_0010472b;
   }

   cVar4 = String::operator ==(param_1, "BitMapEditorPlugin");
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

         cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_0010472b;
      }

      cVar4 = String::operator ==(param_1, "EditorPlugin");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Node::is_class((Node*)this, param_1);
            return uVar5;
         }

         goto LAB_0010482e;
      }

   }

   LAB_0010472b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010482e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String_conflict *param_1) {
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

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00104913;
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

         cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00104913;
      }

      cVar4 = String::operator ==(param_1, "Control");
      if (cVar4 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar3 = *(long*)( lVar1 + 0x20 );
            if (lVar3 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar3 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar3 + 0x10 ));
               }
 else {
                  String::parse_latin1((String_conflict*)&local_58, *(char**)( lVar3 + 8 ));
               }

            }

            cVar4 = String::operator ==(param_1, (String_conflict*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar4 != '\0') goto LAB_00104913;
         }

         cVar4 = String::operator ==(param_1, "CanvasItem");
         if (cVar4 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = Node::is_class((Node*)this, param_1);
               return uVar5;
            }

            goto LAB_00104aae;
         }

      }

   }

   LAB_00104913:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104aae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String_conflict *param_1) {
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

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00104b9b;
   }

   cVar4 = String::operator ==(param_1, "VBoxContainer");
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

         cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00104b9b;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_00104c9e;
      }

   }

   LAB_00104b9b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104c9e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BitMapEditor::is_class(String const&) const */undefined8 BitMapEditor::is_class(BitMapEditor *this, String_conflict *param_1) {
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

      if (cVar4 != '\0') goto LAB_00104dab;
   }

   cVar4 = String::operator ==(param_1, "BitMapEditor");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = VBoxContainer::is_class((VBoxContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00104dab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String_conflict *param_1) {
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

      if (cVar5 != '\0') goto LAB_00104efb;
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00104efb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00104efb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String_conflict *param_1) {
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

      if (cVar4 != '\0') goto LAB_001050fb;
   }

   cVar4 = String::operator ==(param_1, "Resource");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001050fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBoxEmpty::is_class(String const&) const */undefined8 StyleBoxEmpty::is_class(StyleBoxEmpty *this, String_conflict *param_1) {
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

      cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_0010522b;
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

         cVar4 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_0010522b;
      }

      cVar4 = String::operator ==(param_1, "StyleBox");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Resource::is_class((Resource*)this, param_1);
            return uVar5;
         }

         goto LAB_0010532e;
      }

   }

   LAB_0010522b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010532e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorInspectorPluginBitMap::is_class(String const&) const */undefined8 EditorInspectorPluginBitMap::is_class(EditorInspectorPluginBitMap *this, String_conflict *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010543b;
   }

   cVar5 = String::operator ==(param_1, "EditorInspectorPluginBitMap");
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
         if (cVar5 != '\0') goto LAB_0010543b;
      }

      cVar5 = String::operator ==(param_1, "EditorInspectorPlugin");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar6;
         }

         goto LAB_0010553e;
      }

   }

   LAB_0010543b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010553e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
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
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = &_LC40;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC40;
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorPlugin::_get_property_listv(EditorPlugin *this, List *param_1, bool param_2) {
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
/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBox::_get_property_listv(StyleBox *this, List *param_1, bool param_2) {
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
   local_78 = "StyleBox";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StyleBox";
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
      StyleBox::_get_property_listv((StyleBox*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "StyleBoxEmpty";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StyleBoxEmpty";
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
/* BitMapEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BitMapEditorPlugin::_get_property_listv(BitMapEditorPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "BitMapEditorPlugin";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BitMapEditorPlugin";
   local_98 = 0;
   local_70 = 0x12;
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

   StringName::StringName((StringName*)&local_78, "BitMapEditorPlugin", false);
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
/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "EditorInspectorPlugin";
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorInspectorPlugin";
   local_98 = 0;
   local_70 = 0x15;
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

   StringName::StringName((StringName*)&local_78, "EditorInspectorPlugin", false);
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
/* EditorInspectorPluginBitMap::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorInspectorPluginBitMap::_get_property_listv(EditorInspectorPluginBitMap *this, List *param_1, bool param_2) {
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
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorInspectorPluginBitMap";
   local_70 = 0x1b;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorInspectorPluginBitMap";
   local_98 = 0;
   local_70 = 0x1b;
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

   StringName::StringName((StringName*)&local_78, "EditorInspectorPluginBitMap", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin*)this, param_1, true);
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

   if ((code*)PTR__get_property_list_0010c088 != Object::_get_property_list) {
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

   if ((code*)PTR__get_property_list_0010c090 != CanvasItem::_get_property_list) {
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
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
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
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
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
/* BitMapEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BitMapEditor::_get_property_listv(BitMapEditor *this, List *param_1, bool param_2) {
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
   local_78 = "BitMapEditor";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BitMapEditor";
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

   StringName::StringName((StringName*)&local_78, "BitMapEditor", false);
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
/* void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element,
   DefaultAllocator>(List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element*) */void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>(Element *param_1) {
   long *plVar1;
   CowData<char32_t> *pCVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   CowData<char32_t> *this;
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x18 ));
   if (*(long*)( param_1 + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         pCVar2 = *(CowData<char32_t>**)( param_1 + 0x10 );
         if (pCVar2 == (CowData<char32_t>*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( pCVar2 + -8 );
         *(undefined8*)( param_1 + 0x10 ) = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this =
            pCVar2;
            do {
               lVar5 = lVar5 + 1;
               CowData<char32_t>::_unref(this);
               this =
               this + 8;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pCVar2 + -0x10, false);
      }

   }

   Memory::free_static(param_1, false);
   return;
}
/* EditorInspectorPlugin::~EditorInspectorPlugin() */void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
   Element *pEVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   bool bVar5;
   bVar5 = StringName::configured != '\0';
   *(code**)this = postinitialize_handler;
   if (bVar5) {
      if (*(long*)( this + 0x200 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107d59;
      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107d59;
      }

      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107d59;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107d59;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00107d59;
      }

      if (*(long*)( this + 0x188 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00107d59:plVar4 = *(long**)( this + 0x180 );
   if (plVar4 != (long*)0x0) {
      do {
         pEVar1 = (Element*)*plVar4;
         if (pEVar1 == (Element*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00107dc5;
            }

            break;
         }

         if (*(long**)( pEVar1 + 0x38 ) == plVar4) {
            lVar3 = *(long*)( pEVar1 + 0x28 );
            lVar2 = *(long*)( pEVar1 + 0x30 );
            *plVar4 = lVar3;
            if (pEVar1 == (Element*)plVar4[1]) {
               plVar4[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x28 ) = lVar3;
               lVar3 = *(long*)( pEVar1 + 0x28 );
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x30 ) = lVar2;
            }

            memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>(pEVar1);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar4 = *(long**)( this + 0x180 );
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }

   LAB_00107dc5:*(undefined***)this = &PTR__initialize_classv_001080e0;
   Object::~Object((Object*)this);
   return;
}
/* EditorInspectorPlugin::~EditorInspectorPlugin() */void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
   ~EditorInspectorPlugin(this)
   ;;
   operator_delete(this, 0x218);
   return;
}
/* EditorInspectorPluginBitMap::~EditorInspectorPluginBitMap() */void EditorInspectorPluginBitMap::~EditorInspectorPluginBitMap(EditorInspectorPluginBitMap *this) {
   *(undefined***)this = &PTR__initialize_classv_00108a60;
   EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin*)this);
   return;
}
/* EditorInspectorPluginBitMap::~EditorInspectorPluginBitMap() */void EditorInspectorPluginBitMap::~EditorInspectorPluginBitMap(EditorInspectorPluginBitMap *this) {
   *(undefined***)this = &PTR__initialize_classv_00108a60;
   EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin*)this);
   operator_delete(this, 0x218);
   return;
}
/* BitMapEditor::setup(Ref<BitMap> const&) */void BitMapEditor::_GLOBAL__sub_I_setup(void) {
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

   if (OptionButton::base_property_helper != '\0') {
      return;
   }

   OptionButton::base_property_helper = 1;
   OptionButton::base_property_helper._64_8_ = 0;
   OptionButton::base_property_helper._56_8_ = 2;
   OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
   OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
   OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* BitMapEditorPlugin::~BitMapEditorPlugin() */void BitMapEditorPlugin::~BitMapEditorPlugin(BitMapEditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* BitMapEditor::~BitMapEditor() */void BitMapEditor::~BitMapEditor(BitMapEditor *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorInspectorPluginBitMap::~EditorInspectorPluginBitMap() */void EditorInspectorPluginBitMap::~EditorInspectorPluginBitMap(EditorInspectorPluginBitMap *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorInspectorPlugin::~EditorInspectorPlugin() */void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


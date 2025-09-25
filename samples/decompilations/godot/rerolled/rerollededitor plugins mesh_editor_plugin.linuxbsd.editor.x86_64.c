/* MeshEditor::_on_light_1_switch_pressed() */void MeshEditor::_on_light_1_switch_pressed(MeshEditor *this) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( this + 0xa48 );
   BaseButton::is_pressed();
   Node3D::set_visible(SUB81(uVar1, 0));
   return;
}
/* MeshEditor::_on_light_2_switch_pressed() */void MeshEditor::_on_light_2_switch_pressed(MeshEditor *this) {
   undefined8 uVar1;
   uVar1 = *(undefined8*)( this + 0xa50 );
   BaseButton::is_pressed();
   Node3D::set_visible(SUB81(uVar1, 0));
   return;
}
/* EditorInspectorPluginMesh::can_handle(Object*) */bool EditorInspectorPluginMesh::can_handle(EditorInspectorPluginMesh *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Mesh::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* MeshEditor::_update_theme_item_cache() */void MeshEditor::_update_theme_item_cache(MeshEditor *this) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Control::_update_theme_item_cache();
   if ((_update_theme_item_cache()::{lambda()
   #1
   ( iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname),
     iVar3 != 0) );
   {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_update_theme_item_cache()::, {
            lambda()
            #1
            __cxa_guard_release(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);, pOVar1 = *(Object**)( this + 0xa80 ));
            pOVar4 = pOVar1;
            if (local_38 == pOVar1) {
               LAB_0010013a:if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_38,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }
, else {
    *(Object **)(this + 0xa80) = local_38;
      if (local_38 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0xa80 ) = 0;
         }

         pOVar4 = local_38;
         if (pOVar1 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            goto joined_r0x0010020b;
         }

         goto LAB_0010013a;
      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         joined_r0x0010020b:pOVar4 = local_38;
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),pOVar4 = local_38,cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            pOVar4 = local_38;
         }

         goto LAB_0010013a;
      }

   }

   if ((_update_theme_item_cache()::{lambda()
   #2
   ( iVar3 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname),
     iVar3 != 0) );
   {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()
      #2
      __cxa_atexit(StringName::~StringName, &_update_theme_item_cache()::, {
            lambda()
            #2
            __cxa_guard_release(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_38);, pOVar1 = *(Object**)( this + 0xa88 ));
            pOVar4 = pOVar1;
            if (local_38 != pOVar1) {
               *(Object**)( this + 0xa88 ) = local_38;
               if (local_38 == (Object*)0x0) {
                  if (pOVar1 == (Object*)0x0) goto LAB_001001d5;
                  cVar2 = RefCounted::unreference();
               }
 else {
                  cVar2 = RefCounted::reference();
                  if (cVar2 == '\0') {
                     *(undefined8*)( this + 0xa88 ) = 0;
                  }

                  pOVar4 = local_38;
                  if (pOVar1 == (Object*)0x0) goto LAB_001001c0;
                  cVar2 = RefCounted::unreference();
               }

               pOVar4 = local_38;
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),pOVar4 = local_38,cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                  Memory::free_static(pOVar1, false);
                  pOVar4 = local_38;
               }

            }

            LAB_001001c0:if (( ( pOVar4 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
            Memory::free_static(local_38, false);
         }
, LAB_001001d5:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshEditor::_notification(int) */void MeshEditor::_notification(MeshEditor *this, int param_1) {
   if (param_1 != 0x2d) {
      return;
   }

   Button::set_button_icon(*(Ref**)( this + 0xa70 ));
   Button::set_button_icon(*(Ref**)( this + 0xa78 ));
   return;
}
/* MeshEditor::_update_rotation() */void MeshEditor::_update_rotation(MeshEditor *this) {
   long in_FS_OFFSET;
   Vector3 local_58[16];
   undefined1 local_48[16];
   undefined4 local_38;
   undefined8 local_34;
   undefined4 local_2c;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = (Vector3[16])ZEXT416(_LC13);
   local_48 = ZEXT416(_LC13);
   local_38 = 0x3f800000;
   local_34 = 0;
   local_2c = 0;
   Basis::rotate(local_58, (float)( *(uint*)( this + 0xa2c ) ^ _LC14 ));
   Basis::rotate(local_58, (float)( *(uint*)( this + 0xa28 ) ^ _LC14 ));
   Node3D::set_transform(*(Transform3D**)( this + 0xa40 ));
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MeshEditor::gui_input(Ref<InputEvent> const&) */void MeshEditor::gui_input(MeshEditor *this, Ref *param_1) {
   double dVar1;
   char cVar2;
   Object *pOVar3;
   ulong uVar4;
   float fVar5;
   float extraout_XMM0_Db;
   double dVar6;
   if (*(long*)param_1 == 0) {
      _err_print_error("gui_input", "editor/plugins/mesh_editor_plugin.cpp", 0x27, "Condition \"p_event.is_null()\" is true.", 0, 0);
      return;
   }

   pOVar3 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventMouseMotion::typeinfo, 0);
   if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
      uVar4 = InputEventMouse::get_button_mask();
      if (( uVar4 & 1 ) != 0) {
         InputEventMouseMotion::get_relative();
         *(float*)( this + 0xa28 ) = (float)( (double)*(float*)( this + 0xa28 ) - (double)extraout_XMM0_Db * __LC23 );
         fVar5 = (float)InputEventMouseMotion::get_relative();
         dVar1 = _LC24;
         *(float*)( this + 0xa2c ) = (float)( (double)*(float*)( this + 0xa2c ) - (double)fVar5 * __LC23 );
         dVar6 = (double)*(float*)( this + 0xa28 );
         fVar5 = _LC18;
         if (( dVar1 <= dVar6 ) && ( fVar5 = __LC25 < dVar6 )) {
            fVar5 = _LC19;
         }

         *(float*)( this + 0xa28 ) = fVar5;
         _update_rotation(this);
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         return;
      }

   }

   return;
}
/* MeshEditor::edit(Ref<Mesh>) */void MeshEditor::edit(MeshEditor *this, long *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   long in_FS_OFFSET;
   float fVar4;
   float fVar5;
   float fVar6;
   float local_78;
   float local_74;
   float local_70;
   float local_6c;
   float local_68;
   float local_64;
   Vector3 local_58[4];
   float fStack_54;
   undefined1 local_48[12];
   float fStack_3c;
   float local_38;
   undefined8 local_34;
   uint local_2c;
   long local_20;
   pOVar1 = (Object*)*param_2;
   pOVar2 = *(Object**)( this + 0xa68 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0xa68 ) = pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
         *(undefined8*)( this + 0xa68 ) = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
MeshInstance3D::set_mesh(*(Ref**)( this + 0xa38 ));*(undefined8*)( this + 0xa28 ) = _LC26;_update_rotation(this);( **(code**)( **(long**)( this + 0xa68 ) + 0x230 ) )(&local_78);fVar4 = local_68;if (local_68 <= local_6c) {
   fVar4 = local_6c;
}
fVar5 = local_64;if (local_64 <= fVar4) {
   fVar5 = fVar4;
}
if (fVar5 != 0.0) {
   local_2c = 0;
   local_38 = _LC13;
   fVar6 = local_64 * _LC27 + local_70;
   local_34 = 0;
   _local_58 = ZEXT416((uint)_LC13);
   fVar5 = local_68 * _LC27 + local_74;
   _local_48 = ZEXT416((uint)_LC13);
   fVar4 = local_6c * _LC27 + local_78;
   Basis::scale(local_58);
   local_2c = ( uint )(fVar4 * (float)local_48._8_4_ + fVar5 * fStack_3c + fVar6 * local_38) ^ _LC14;
   local_34 = CONCAT44(( uint )(SUB164(_local_58, 0xc) * fVar4 + (float)local_48._0_4_ * fVar5 + SUB164(_local_48, 4) * fVar6) ^ _LC28._4_4_, ( uint )(SUB164(_local_58, 0) * fVar4 + fStack_54 * fVar5 + SUB164(_local_58, 8) * fVar6) ^ (uint)_LC28);
   Node3D::set_transform(*(Transform3D**)( this + 0xa38 ));
}
if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MeshEditorPlugin::MeshEditorPlugin() */void MeshEditorPlugin::MeshEditorPlugin(MeshEditorPlugin *this) {
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
   this[0x428] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
   this[0x440] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
   this[0x458] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
   this[0x470] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x478 ) = 0;
   StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
   this[0x488] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x490 ) = 0;
   StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
   this[0x4a0] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x4a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
   this[0x4b8] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
   this[0x4d0] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
   this[0x4e8] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x4f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
   this[0x500] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x508 ) = 0;
   StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
   this[0x518] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x520 ) = 0;
   StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
   this[0x530] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x538 ) = 0;
   StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
   this[0x548] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x550 ) = 0;
   StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
   this[0x560] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x568 ) = 0;
   StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
   this[0x578] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x580 ) = 0;
   StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
   this[0x590] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x598 ) = 0;
   StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
   this[0x5a8] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
   this[0x5c0] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x5c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
   this[0x5d8] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
   this[0x5f0] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
   this[0x608] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x610 ) = 0;
   StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
   this[0x620] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x628 ) = 0;
   StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
   this[0x638] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x640 ) = 0;
   StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
   this[0x650] = (MeshEditorPlugin)0x0;
   *(undefined8*)( this + 0x658 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0010a5a8;
   local_30 = (Object*)0x0;
   Ref<EditorInspectorPluginMesh>::instantiate<>((Ref<EditorInspectorPluginMesh>*)&local_30);
   pOVar1 = local_30;
   local_28 = (Object*)0x0;
   if (local_30 == (Object*)0x0) {
      EditorPlugin::add_inspector_plugin((Ref*)this);
      if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar3 = local_28,cVar2 != '\0' )) goto LAB_00100d84;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &EditorInspectorPlugin::typeinfo, 0);
      if (( pOVar3 != (Object*)0x0 ) && ( local_28 = pOVar3 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
         local_28 = (Object*)0x0;
      }

      EditorPlugin::add_inspector_plugin((Ref*)this);
      if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar3 = local_28,cVar2 != '\0' )) {
         LAB_00100d84:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         if (pOVar1 == (Object*)0x0) goto LAB_00100d9f;
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pOVar1, false);
            return;
         }

         goto LAB_00100e46;
      }

   }

   LAB_00100d9f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100e46:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* WARNING: Removing unreachable block (ram,0x00101029) *//* WARNING: Removing unreachable block (ram,0x00101948) *//* WARNING: Removing unreachable block (ram,0x00101721) *//* WARNING: Removing unreachable block (ram,0x00101990) *//* WARNING: Removing unreachable block (ram,0x001019a0) *//* WARNING: Removing unreachable block (ram,0x0010195b) *//* WARNING: Removing unreachable block (ram,0x0010197a) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MeshEditor::MeshEditor() */void MeshEditor::MeshEditor(MeshEditor *this) {
   StringName *pSVar1;
   long *plVar2;
   code *pcVar3;
   uint uVar4;
   char cVar5;
   bool bVar6;
   SubViewport *this_00;
   World3D *this_01;
   Camera3D *this_02;
   DirectionalLight3D *pDVar7;
   Node3D *this_03;
   MeshInstance3D *this_04;
   BoxContainer *this_05;
   BoxContainer *this_06;
   Button *pBVar8;
   CameraAttributesPractical *this_07;
   Object *pOVar9;
   long lVar10;
   Ref *pRVar11;
   long in_FS_OFFSET;
   Object *local_f0;
   World3D *local_e0;
   Object *local_d8[2];
   undefined8 local_c8;
   undefined4 local_c0;
   undefined8 local_b8;
   undefined4 local_b0;
   Vector3 local_a8[16];
   undefined1 local_98[16];
   undefined4 local_88;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined4 local_58;
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   SubViewportContainer::SubViewportContainer((SubViewportContainer*)this);
   *(undefined***)this = &PTR__initialize_classv_0010a850;
   for (int i = 0; i < 6; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 2608 ) ) = (undefined1[16])0;
   }

   this_00 = (SubViewport*)operator_new(0x998, "");
   SubViewport::SubViewport(this_00);
   postinitialize_handler((Object*)this_00);
   *(SubViewport**)( this + 0xa30 ) = this_00;
   local_e0 = (World3D*)0x0;
   this_01 = (World3D*)operator_new(0x2a0, "");
   World3D::World3D(this_01);
   postinitialize_handler((Object*)this_01);
   cVar5 = RefCounted::init_ref();
   if (cVar5 != '\0') {
      pOVar9 = (Object*)0x0;
      if (( this_01 != (World3D*)0x0 ) && ( cVar5 = RefCounted::reference() ),pOVar9 = (Object*)this_01,local_e0 = this_01,cVar5 == '\0') {
         local_e0 = (World3D*)0x0;
      }

      cVar5 = RefCounted::unreference();
      if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }

   Viewport::set_world_3d(*(Ref**)( this + 0xa30 ));
   Node::add_child(this, *(undefined8*)( this + 0xa30 ), 0, 0);
   Viewport::set_disable_input(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   Viewport::set_msaa_3d(*(undefined8*)( this + 0xa30 ), 2);
   SubViewportContainer::set_stretch(SUB81(this, 0));
   this_02 = (Camera3D*)operator_new(0x688, "");
   Camera3D::Camera3D(this_02);
   postinitialize_handler((Object*)this_02);
   uVar4 = _LC13;
   *(Camera3D**)( this + 0xa58 ) = this_02;
   local_a8 = (Vector3[16])ZEXT416(uVar4);
   local_98 = ZEXT416(uVar4);
   local_b8 = 0;
   local_b0 = 0x3f8ccccd;
   local_88 = 0x3f800000;
   Transform3D::Transform3D((Transform3D*)local_78, (Basis*)local_a8, (Vector3*)&local_b8);
   Node3D::set_transform((Transform3D*)this_02);
   Camera3D::set_perspective(_LC65, _LC64, _LC63);
   Node::add_child(*(undefined8*)( this + 0xa30 ), *(undefined8*)( this + 0xa58 ), 0, 0);
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)local_d8, "rendering/lights_and_shadows/use_physical_light_units", false);
   ProjectSettings::get_setting_with_override((StringName*)local_78);
   bVar6 = Variant::operator_cast_to_bool((Variant*)local_78);
   if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_d8[0] != (Object*)0x0 )) {
      StringName::unref();
   }

   if (!bVar6) goto LAB_001011c3;
   this_07 = (CameraAttributesPractical*)operator_new(0x280, "");
   CameraAttributesPractical::CameraAttributesPractical(this_07);
   postinitialize_handler((Object*)this_07);
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      local_f0 = *(Object**)( this + 0xa60 );
      if (local_f0 != (Object*)0x0) {
         *(undefined8*)( this + 0xa60 ) = 0;
         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
            lVar10 = *(long*)local_f0;
            goto LAB_0010192a;
         }

         goto LAB_001017cb;
      }

      local_d8[0] = (Object*)0x0;
      pRVar11 = *(Ref**)( this + 0xa58 );
   }
 else {
      pOVar9 = *(Object**)( this + 0xa60 );
      local_f0 = pOVar9;
      if (this_07 != (CameraAttributesPractical*)pOVar9) {
         *(CameraAttributesPractical**)( this + 0xa60 ) = this_07;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0xa60 ) = 0;
         }

         local_f0 = (Object*)this_07;
         if (( ( pOVar9 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }

   cVar5 = RefCounted::unreference();
   if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
      lVar10 = *(long*)local_f0;
      LAB_0010192a:( **(code**)( lVar10 + 0x140 ) )(local_f0);
      Memory::free_static(local_f0, false);
   }

   LAB_001017cb:pRVar11 = *(Ref**)( this + 0xa58 );
   local_d8[0] = (Object*)0x0;
   if (( ( *(long*)( this + 0xa60 ) != 0 ) && ( pOVar9 = (Object*)__dynamic_cast(*(long*)( this + 0xa60 ), &Object::typeinfo, &CameraAttributes::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
      local_d8[0] = (Object*)0x0;
   }

}
Camera3D::set_attributes(pRVar11);if (( ( local_d8[0] != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar9 = local_d8[0],cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);Memory::free_static(pOVar9, false);}LAB_001011c3:pDVar7 = (DirectionalLight3D*)operator_new(0x628, "");DirectionalLight3D::DirectionalLight3D(pDVar7);postinitialize_handler((Object*)pDVar7);*(DirectionalLight3D**)( this + 0xa48 ) = pDVar7;local_78 = ZEXT416(_LC13);local_68 = ZEXT416(_LC13);local_b8 = _LC15;local_c8 = _LC67;local_58 = 0x3f800000;local_54 = 0;local_4c = 0;local_b0 = 0;local_c0 = 0xbf800000;Transform3D::looking_at(local_a8, (Vector3*)local_78, SUB81(&local_c8, 0));Node3D::set_transform((Transform3D*)pDVar7);Node::add_child(*(undefined8*)( this + 0xa30 ), *(undefined8*)( this + 0xa48 ), 0, 0);pDVar7 = (DirectionalLight3D*)operator_new(0x628, "");DirectionalLight3D::DirectionalLight3D(pDVar7);postinitialize_handler((Object*)pDVar7);*(DirectionalLight3D**)( this + 0xa50 ) = pDVar7;local_78 = ZEXT416(_LC13);local_68 = ZEXT416(_LC13);local_c8 = _LC15;local_58 = 0x3f800000;local_54 = 0;local_4c = 0;local_b8 = 0;local_b0 = 0x3f800000;local_c0 = 0;Transform3D::looking_at(local_a8, (Vector3*)local_78, SUB81(&local_c8, 0));Node3D::set_transform((Transform3D*)pDVar7);local_78[0] = _LC69[0];local_78[1] = _LC69[1];local_78[2] = _LC69[2];local_78[3] = _LC69[3];local_78[4] = _LC69[4];local_78[5] = _LC69[5];local_78[6] = _LC69[6];local_78[7] = _LC69[7];local_78._8_8_ = ram0x0010b068;Light3D::set_color(*(Color**)( this + 0xa50 ));Node::add_child(*(undefined8*)( this + 0xa30 ), *(undefined8*)( this + 0xa50 ), 0, 0);this_03 = (Node3D*)operator_new(0x528, "");Node3D::Node3D(this_03);postinitialize_handler((Object*)this_03);*(Node3D**)( this + 0xa40 ) = this_03;Node::add_child(*(undefined8*)( this + 0xa30 ), this_03, 0, 0);this_04 = (MeshInstance3D*)operator_new(0x6a0, "");MeshInstance3D::MeshInstance3D(this_04);postinitialize_handler((Object*)this_04);*(MeshInstance3D**)( this + 0xa38 ) = this_04;Node::add_child(*(undefined8*)( this + 0xa40 ), this_04, 0, 0);local_78._0_4_ = EditorScale::get_scale();local_78._4_4_ = _LC70 * (float)local_78._0_4_;Control::set_custom_minimum_size((Vector2*)this);this_05 = (BoxContainer*)operator_new(0xa10, "");BoxContainer::BoxContainer(this_05, false);this_05[0xa0c] = (BoxContainer)0x1;*(undefined***)this_05 = &PTR__initialize_classv_00109eb8;postinitialize_handler((Object*)this_05);Node::add_child(this, this_05, 0, 0);Control::set_anchors_and_offsets_preset(this_05, 0xf, 0, 2);BoxContainer::add_spacer(SUB81(this_05, 0));this_06 = (BoxContainer*)operator_new(0xa10, "");BoxContainer::BoxContainer(this_06, true);this_06[0xa0c] = (BoxContainer)0x1;*(undefined***)this_06 = &PTR__initialize_classv_0010a230;postinitialize_handler((Object*)this_06);Node::add_child(this_05, this_06, 0, 0);pBVar8 = (Button*)operator_new(0xc10, "");local_d8[0] = (Object*)0x0;Button::Button(pBVar8, (String*)local_d8);postinitialize_handler((Object*)pBVar8);*(Button**)( this + 0xa70 ) = pBVar8;CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);pSVar1 = *(StringName**)( this + 0xa70 );StringName::StringName((StringName*)local_d8, "PreviewLightButton", false);Control::set_theme_type_variation(pSVar1);if (( StringName::configured != '\0' ) && ( local_d8[0] != (Object*)0x0 )) {
   StringName::unref();
}
BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xa70 ), 0));BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa70 ), 0));Node::add_child(this_06, *(undefined8*)( this + 0xa70 ), 0, 0);plVar2 = *(long**)( this + 0xa70 );pcVar3 = *(code**)( *plVar2 + 0x108 );create_custom_callable_function_pointer<MeshEditor>((MeshEditor*)local_d8, (char*)this, (_func_void*)"&MeshEditor::_on_light_1_switch_pressed");( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (StringName*)local_d8, 0);Callable::~Callable((Callable*)local_d8);pBVar8 = (Button*)operator_new(0xc10, "");local_d8[0] = (Object*)0x0;Button::Button(pBVar8, (String*)local_d8);postinitialize_handler((Object*)pBVar8);*(Button**)( this + 0xa78 ) = pBVar8;CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);pSVar1 = *(StringName**)( this + 0xa78 );StringName::StringName((StringName*)local_d8, "PreviewLightButton", false);Control::set_theme_type_variation(pSVar1);if (( StringName::configured != '\0' ) && ( local_d8[0] != (Object*)0x0 )) {
   StringName::unref();
}
BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xa78 ), 0));BaseButton::set_pressed(SUB81(*(undefined8*)( this + 0xa78 ), 0));Node::add_child(this_06, *(undefined8*)( this + 0xa78 ), 0, 0);plVar2 = *(long**)( this + 0xa78 );pcVar3 = *(code**)( *plVar2 + 0x108 );create_custom_callable_function_pointer<MeshEditor>((MeshEditor*)local_d8, (char*)this, (_func_void*)"&MeshEditor::_on_light_2_switch_pressed");( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (StringName*)local_d8, 0);Callable::~Callable((Callable*)local_d8);*(undefined8*)( this + 0xa28 ) = 0;if (( ( local_e0 != (World3D*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_e0 + 0x140 ))(local_e0);Memory::free_static(local_e0, false);}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorInspectorPluginMesh::parse_begin(Object*) */void EditorInspectorPluginMesh::parse_begin(EditorInspectorPluginMesh *this, Object *param_1) {
   char cVar1;
   Object *pOVar2;
   MeshEditor *pMVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 != (Object*)0x0 ) && ( pOVar2 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Mesh::typeinfo, 0) ),pOVar2 != (Object*)0x0) {
      cVar1 = RefCounted::init_ref();
      if (cVar1 == '\0') {
         pMVar3 = (MeshEditor*)operator_new(0xa90, "");
         MeshEditor::MeshEditor(pMVar3);
         postinitialize_handler((Object*)pMVar3);
         local_28 = (Object*)0x0;
         MeshEditor::edit(pMVar3, &local_28);
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            EditorInspectorPlugin::add_custom_control((Control*)this);
            return;
         }

         goto LAB_00101bf3;
      }

      pMVar3 = (MeshEditor*)operator_new(0xa90, "");
      MeshEditor::MeshEditor(pMVar3);
      postinitialize_handler((Object*)pMVar3);
      local_28 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         local_28 = (Object*)0x0;
         MeshEditor::edit(pMVar3, &local_28);
         EditorInspectorPlugin::add_custom_control((Control*)this);
         cVar1 = RefCounted::unreference();
      }
 else {
         MeshEditor::edit(pMVar3);
         cVar1 = RefCounted::unreference();
         if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

         EditorInspectorPlugin::add_custom_control((Control*)this);
         cVar1 = RefCounted::unreference();
      }

      if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pOVar2, false);
            return;
         }

         goto LAB_00101bf3;
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101bf3:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   return (uint)CONCAT71(0x10af, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* EditorPlugin::selected_notify() */void EditorPlugin::selected_notify(void) {
   return;
}
/* EditorPlugin::edited_scene_changed() */void EditorPlugin::edited_scene_changed(void) {
   return;
}
/* EditorInspectorPluginMesh::is_class_ptr(void*) const */uint EditorInspectorPluginMesh::is_class_ptr(EditorInspectorPluginMesh *this, void *param_1) {
   return (uint)CONCAT71(0x10ae, (undefined4*)param_1 == &EditorInspectorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ad, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorInspectorPluginMesh::_getv(StringName const&, Variant&) const */undefined8 EditorInspectorPluginMesh::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorInspectorPluginMesh::_setv(StringName const&, Variant const&) */undefined8 EditorInspectorPluginMesh::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorInspectorPluginMesh::_validate_propertyv(PropertyInfo&) const */void EditorInspectorPluginMesh::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorInspectorPluginMesh::_property_can_revertv(StringName const&) const */undefined8 EditorInspectorPluginMesh::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorInspectorPluginMesh::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorInspectorPluginMesh::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorInspectorPluginMesh::_notificationv(int, bool) */void EditorInspectorPluginMesh::_notificationv(int param_1, bool param_2) {
   return;
}
/* MeshEditorPlugin::is_class_ptr(void*) const */uint MeshEditorPlugin::is_class_ptr(MeshEditorPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x10ae, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ad, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* MeshEditorPlugin::_getv(StringName const&, Variant&) const */undefined8 MeshEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MeshEditorPlugin::_setv(StringName const&, Variant const&) */undefined8 MeshEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MeshEditorPlugin::_property_can_revertv(StringName const&) const */undefined8 MeshEditorPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* MeshEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 MeshEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<MeshEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<MeshEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<MeshEditor,void> *this) {
   return;
}
/* CallableCustomMethodPointer<MeshEditor, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<MeshEditor,void>::get_argument_count(CallableCustomMethodPointer<MeshEditor,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<MeshEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<MeshEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<MeshEditor,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00109d58;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00109d58;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
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
/* MeshEditor::_property_get_revertv(StringName const&, Variant&) const */undefined8 MeshEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* MeshEditor::_property_can_revertv(StringName const&) const */undefined8 MeshEditor::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* MeshEditorPlugin::_validate_propertyv(PropertyInfo&) const */void MeshEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)PTR__validate_property_0010e010 != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }

   return;
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
         LAB_00102123:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102123;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0010218e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0010218e:return &_get_class_namev();
}
/* CallableCustomMethodPointer<MeshEditor, void>::get_object() const */undefined8 CallableCustomMethodPointer<MeshEditor,void>::get_object(CallableCustomMethodPointer<MeshEditor,void> *this) {
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
         goto LAB_001022bd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001022bd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001022bd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* MeshEditor::_validate_propertyv(PropertyInfo&) const */void MeshEditor::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   CanvasItem::_validate_property(param_1);
   if ((code*)PTR__validate_property_0010e018 == CanvasItem::_validate_property) {
      return;
   }

   Control::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010e020 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010e020 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* MeshEditor::is_class_ptr(void*) const */uint MeshEditor::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10af, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ae, in_RSI == &SubViewportContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* MeshEditorPlugin::_notificationv(int, bool) */void MeshEditorPlugin::_notificationv(MeshEditorPlugin *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010e028 != Node::_notification) {
         EditorPlugin::_notification(iVar1);
      }

      Node::_notification(iVar1);
      return;
   }

   Node::_notification(iVar1);
   if ((code*)PTR__notification_0010e028 == Node::_notification) {
      return;
   }

   EditorPlugin::_notification(iVar1);
   return;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10af, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10af, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10af, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010e030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* MeshEditor::_setv(StringName const&, Variant const&) */undefined8 MeshEditor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010e030 != CanvasItem::_set) {
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
      if ((code*)PTR__set_0010e030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00102838) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010e038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001028a8) *//* MeshEditor::_getv(StringName const&, Variant&) const */undefined8 MeshEditor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010e038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00102918) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010e038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102af0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102af0:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102b50;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102b50:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102bb0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102bb0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102c20;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102c20:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* EditorInspectorPluginMesh::_get_class_namev() const */undefined8 *EditorInspectorPluginMesh::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102c83:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102c83;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorInspectorPluginMesh");
         goto LAB_00102cee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorInspectorPluginMesh");
   LAB_00102cee:return &_get_class_namev();
}
/* MeshEditorPlugin::_get_class_namev() const */undefined8 *MeshEditorPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102d73:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102d73;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshEditorPlugin");
         goto LAB_00102dde;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshEditorPlugin");
   LAB_00102dde:return &_get_class_namev();
}
/* MeshEditor::_get_class_namev() const */undefined8 *MeshEditor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102e53:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102e53;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshEditor");
         goto LAB_00102ebe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshEditor");
   LAB_00102ebe:return &_get_class_namev();
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
         LAB_00102f43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102f43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_00102fae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_00102fae:return &_get_class_namev();
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
         LAB_00103023:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103023;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010308e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010308e:return &_get_class_namev();
}
/* MeshEditorPlugin::get_plugin_name() const */MeshEditorPlugin * __thiscall MeshEditorPlugin::get_plugin_name(MeshEditorPlugin *this){
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
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010e040 != Container::_notification) {
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

   if ((code*)PTR__notification_0010e040 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010e040 != Container::_notification) {
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

   if ((code*)PTR__notification_0010e040 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* MeshEditor::_notificationv(int, bool) */void MeshEditor::_notificationv(MeshEditor *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 0x2d) {
         Button::set_button_icon(*(Ref**)( this + 0xa70 ));
         Button::set_button_icon(*(Ref**)( this + 0xa78 ));
      }

      if ((code*)PTR__notification_0010e048 != Container::_notification) {
         SubViewportContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010e048 != Container::_notification) {
      SubViewportContainer::_notification(iVar1);
   }

   if (param_1 != 0x2d) {
      return;
   }

   Button::set_button_icon(*(Ref**)( this + 0xa70 ));
   Button::set_button_icon(*(Ref**)( this + 0xa78 ));
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
/* MeshEditor::~MeshEditor() */void MeshEditor::~MeshEditor(MeshEditor *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_0010a850;
   if (*(long*)( this + 0xa88 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa88 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa80 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa80 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa68 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa68 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

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

   bVar3 = StringName::configured == '\0';
   *(code**)this = Node3D::set_transform;
   if (bVar3) {
      *(code**)this = String::parse_latin1;
      Control::~Control((Control*)this);
      return;
   }

   if (*(long*)( this + 0xa10 ) == 0) {
      *(code**)this = String::parse_latin1;
   }
 else {
      StringName::unref();
      bVar3 = StringName::configured == '\0';
      *(code**)this = String::parse_latin1;
      if (bVar3) goto LAB_00103660;
   }

   if (*(long*)( this + 0x9e8 ) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103660;
   }

   if (*(long*)( this + 0x9d0 ) != 0) {
      StringName::unref();
   }

   LAB_00103660:Control::~Control((Control*)this);
   return;
}
/* MeshEditor::~MeshEditor() */void MeshEditor::~MeshEditor(MeshEditor *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_0010a850;
   if (*(long*)( this + 0xa88 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa88 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa80 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa80 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa68 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa68 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

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

   bVar3 = StringName::configured == '\0';
   *(code**)this = Node3D::set_transform;
   if (bVar3) {
      *(code**)this = String::parse_latin1;
   }
 else {
      if (*(long*)( this + 0xa10 ) == 0) {
         *(code**)this = String::parse_latin1;
      }
 else {
         StringName::unref();
         bVar3 = StringName::configured == '\0';
         *(code**)this = String::parse_latin1;
         if (bVar3) goto LAB_00103870;
      }

      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103870;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103870:Control::~Control((Control*)this);
   operator_delete(this, 0xa90);
   return;
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
/* Callable create_custom_callable_function_pointer<MeshEditor>(MeshEditor*, char const*, void
   (MeshEditor::*)()) */MeshEditor *create_custom_callable_function_pointer<MeshEditor>(MeshEditor *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC29;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010ad58;
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
/* void Ref<EditorInspectorPluginMesh>::instantiate<>() */void Ref<EditorInspectorPluginMesh>::instantiate<>(Ref<EditorInspectorPluginMesh> *this) {
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
   *(code**)this_00 = RefCounted::init_ref;
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
   *(undefined***)this_00 = &PTR__initialize_classv_0010abc8;
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
      if (this_00 == (RefCounted*)pOVar5) goto LAB_00103e35;
      *(RefCounted**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00103e35;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (RefCounted*)0x0) {
      return;
   }

   LAB_00103e35:cVar1 = RefCounted::unreference();
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
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x630 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x618 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x5e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x5d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x5b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x5a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x588 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x570 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x558 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x540 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x528 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x510 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x4f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x4e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x4c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x4b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x498 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x480 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x468 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x450 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x438 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010424a;
      }

      if (*(long*)( this + 0x420 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010424a:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x418 ));
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
/* MeshEditorPlugin::~MeshEditorPlugin() */void MeshEditorPlugin::~MeshEditorPlugin(MeshEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_0010a5a8;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   return;
}
/* MeshEditorPlugin::~MeshEditorPlugin() */void MeshEditorPlugin::~MeshEditorPlugin(MeshEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_0010a5a8;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   operator_delete(this, 0x660);
   return;
}
/* EditorInspectorPluginMesh::_initialize_classv() */void EditorInspectorPluginMesh::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (EditorInspectorPlugin::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Object");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "RefCounted");
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
            if ((code*)PTR__bind_methods_0010e060 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "RefCounted");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "EditorInspectorPlugin");
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
         if ((code*)PTR__bind_methods_0010e050 != RefCounted::_bind_methods) {
            EditorInspectorPlugin::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0010e058 != Object::_bind_compatibility_methods) {
            EditorInspectorPlugin::_bind_compatibility_methods();
         }

         EditorInspectorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "EditorInspectorPlugin");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "EditorInspectorPluginMesh");
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   if (*(long*)this == *(long*)param_1) {
      return;
   }

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
/* MeshEditorPlugin::get_class() const */void MeshEditorPlugin::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "MeshEditorPlugin");
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
/* MeshEditor::get_class() const */void MeshEditor::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "MeshEditor");
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
/* EditorInspectorPluginMesh::get_class() const */void EditorInspectorPluginMesh::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "EditorInspectorPluginMesh");
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "RefCounted");
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
/* CallableCustomMethodPointer<MeshEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<MeshEditor,void>::call(CallableCustomMethodPointer<MeshEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00104cbf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00104cbf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104c98. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00104d70;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00104cbf:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC79, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104d70:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_0010e068 != Object::_bind_methods) {
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
/* MeshEditorPlugin::_initialize_classv() */void MeshEditorPlugin::_initialize_classv(void) {
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
            if ((code*)PTR__bind_methods_0010e060 != Node::_bind_methods) {
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
         if ((code*)PTR__bind_methods_0010e070 != Node::_bind_methods) {
            EditorPlugin::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0010e078 != Object::_bind_compatibility_methods) {
            EditorPlugin::_bind_compatibility_methods();
         }

         EditorPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "EditorPlugin");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "MeshEditorPlugin");
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
                     if ((code*)PTR__bind_methods_0010e060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0010e080 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0010e088 != Container::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_0010e060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0010e080 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0010e088 != Container::_bind_methods) {
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
/* MeshEditor::_initialize_classv() */void MeshEditor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (SubViewportContainer::initialize_class() == '\0') {
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
                     if ((code*)PTR__bind_methods_0010e060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0010e080 != Object::_bind_compatibility_methods) {
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
         String::parse_latin1((String*)&local_60, "SubViewportContainer");
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
         if ((code*)PTR__bind_methods_0010e090 != Container::_bind_methods) {
            SubViewportContainer::_bind_methods();
         }

         SubViewportContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "SubViewportContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "MeshEditor");
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
            if (pvVar3 == (void*)0x0) goto LAB_0010644f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010644f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
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
      if (cVar4 != '\0') goto LAB_00106583;
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
         if (cVar4 != '\0') goto LAB_00106583;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = String::operator ==(param_1, "Object");
         return uVar5;
      }

   }
 else {
      LAB_00106583:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshEditorPlugin::is_class(String const&) const */undefined8 MeshEditorPlugin::is_class(MeshEditorPlugin *this, String *param_1) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00106763;
   }

   cVar3 = String::operator ==(param_1, "MeshEditorPlugin");
   if (cVar3 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar2 = *(long*)( lVar1 + 0x20 );
         if (lVar2 == 0) {
            local_58 = (char*)0x0;
         }
 else {
            local_58 = (char*)0x0;
            if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
            }

         }

         cVar3 = String::operator ==(param_1, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (cVar3 != '\0') goto LAB_00106763;
      }

      cVar3 = String::operator ==(param_1, "EditorPlugin");
      if (cVar3 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = Node::is_class((Node*)this, param_1);
            return uVar4;
         }

         goto LAB_00106856;
      }

   }

   LAB_00106763:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00106856:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String *param_1) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00106933;
   }

   cVar3 = String::operator ==(param_1, "Container");
   if (cVar3 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar2 = *(long*)( lVar1 + 0x20 );
         if (lVar2 == 0) {
            local_58 = (char*)0x0;
         }
 else {
            local_58 = (char*)0x0;
            if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
            }

         }

         cVar3 = String::operator ==(param_1, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (cVar3 != '\0') goto LAB_00106933;
      }

      cVar3 = String::operator ==(param_1, "Control");
      if (cVar3 == '\0') {
         for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
            lVar2 = *(long*)( lVar1 + 0x20 );
            if (lVar2 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
               }

            }

            cVar3 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar3 != '\0') goto LAB_00106933;
         }

         cVar3 = String::operator ==(param_1, "CanvasItem");
         if (cVar3 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar4 = Node::is_class((Node*)this, param_1);
               return uVar4;
            }

            goto LAB_00106abe;
         }

      }

   }

   LAB_00106933:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00106abe:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MeshEditor::is_class(String const&) const */undefined8 MeshEditor::is_class(MeshEditor *this, String *param_1) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00106ba3;
   }

   cVar3 = String::operator ==(param_1, "MeshEditor");
   if (cVar3 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar2 = *(long*)( lVar1 + 0x20 );
         if (lVar2 == 0) {
            local_58 = (char*)0x0;
         }
 else {
            local_58 = (char*)0x0;
            if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
            }

         }

         cVar3 = String::operator ==(param_1, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (cVar3 != '\0') goto LAB_00106ba3;
      }

      cVar3 = String::operator ==(param_1, "SubViewportContainer");
      if (cVar3 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = Container::is_class((Container*)this, param_1);
            return uVar4;
         }

         goto LAB_00106c96;
      }

   }

   LAB_00106ba3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00106c96:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      if (cVar4 != '\0') goto LAB_00106d73;
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
         if (cVar4 != '\0') goto LAB_00106d73;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = String::operator ==(param_1, "Object");
         return uVar5;
      }

   }
 else {
      LAB_00106d73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorInspectorPluginMesh::is_class(String const&) const */undefined8 EditorInspectorPluginMesh::is_class(EditorInspectorPluginMesh *this, String *param_1) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar3 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar3 != '\0') goto LAB_00106f53;
   }

   cVar3 = String::operator ==(param_1, "EditorInspectorPluginMesh");
   if (cVar3 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar2 = *(long*)( lVar1 + 0x20 );
         if (lVar2 == 0) {
            local_58 = (char*)0x0;
         }
 else {
            local_58 = (char*)0x0;
            if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_58, *(char**)( lVar2 + 8 ));
            }

         }

         cVar3 = String::operator ==(param_1, (String*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (cVar3 != '\0') goto LAB_00106f53;
      }

      cVar3 = String::operator ==(param_1, "EditorInspectorPlugin");
      if (cVar3 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar4 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar4;
         }

         goto LAB_00107046;
      }

   }

   LAB_00106f53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00107046:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   local_78 = &_LC80;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC80;
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

   if ((code*)PTR__get_property_list_0010e098 != Object::_get_property_list) {
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
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_00107853;
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

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00107853;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_0010795e;
      }

   }

   LAB_00107853:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010795e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_00107a43;
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
         if (cVar4 != '\0') goto LAB_00107a43;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_00107b4e;
      }

   }

   LAB_00107a43:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00107b4e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* MeshEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MeshEditorPlugin::_get_property_listv(MeshEditorPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "MeshEditorPlugin";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MeshEditorPlugin";
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

   StringName::StringName((StringName*)&local_78, "MeshEditorPlugin", false);
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
/* EditorInspectorPluginMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void EditorInspectorPluginMesh::_get_property_listv(EditorInspectorPluginMesh *this, List *param_1, bool param_2) {
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
   local_78 = "EditorInspectorPluginMesh";
   local_70 = 0x19;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorInspectorPluginMesh";
   local_98 = 0;
   local_70 = 0x19;
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

   StringName::StringName((StringName*)&local_78, "EditorInspectorPluginMesh", false);
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

   if ((code*)PTR__get_property_list_0010e0a0 != CanvasItem::_get_property_list) {
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
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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
/* SubViewportContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SubViewportContainer::_get_property_listv(SubViewportContainer *this, List *param_1, bool param_2) {
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
   local_78 = "SubViewportContainer";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SubViewportContainer";
   local_98 = 0;
   local_70 = 0x14;
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

   StringName::StringName((StringName*)&local_78, "SubViewportContainer", false);
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
/* MeshEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MeshEditor::_get_property_listv(MeshEditor *this, List *param_1, bool param_2) {
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
      SubViewportContainer::_get_property_listv((SubViewportContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "MeshEditor";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MeshEditor";
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

   StringName::StringName((StringName*)&local_78, "MeshEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         SubViewportContainer::_get_property_listv((SubViewportContainer*)this, param_1, true);
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
   *(code**)this = RefCounted::init_ref;
   if (bVar5) {
      if (*(long*)( this + 0x200 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001099a9;
      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001099a9;
      }

      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001099a9;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001099a9;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001099a9;
      }

      if (*(long*)( this + 0x188 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001099a9:plVar4 = *(long**)( this + 0x180 );
   if (plVar4 != (long*)0x0) {
      do {
         pEVar1 = (Element*)*plVar4;
         if (pEVar1 == (Element*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00109a15;
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

   LAB_00109a15:*(undefined***)this = &PTR__initialize_classv_00109d58;
   Object::~Object((Object*)this);
   return;
}
/* EditorInspectorPlugin::~EditorInspectorPlugin() */void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
   ~EditorInspectorPlugin(this)
   ;;
   operator_delete(this, 0x218);
   return;
}
/* EditorInspectorPluginMesh::~EditorInspectorPluginMesh() */void EditorInspectorPluginMesh::~EditorInspectorPluginMesh(EditorInspectorPluginMesh *this) {
   *(undefined***)this = &PTR__initialize_classv_0010abc8;
   EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin*)this);
   return;
}
/* EditorInspectorPluginMesh::~EditorInspectorPluginMesh() */void EditorInspectorPluginMesh::~EditorInspectorPluginMesh(EditorInspectorPluginMesh *this) {
   *(undefined***)this = &PTR__initialize_classv_0010abc8;
   EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin*)this);
   operator_delete(this, 0x218);
   return;
}
/* MeshEditor::gui_input(Ref<InputEvent> const&) */void MeshEditor::_GLOBAL__sub_I_gui_input(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* MeshEditorPlugin::~MeshEditorPlugin() */void MeshEditorPlugin::~MeshEditorPlugin(MeshEditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorPlugin::~EditorPlugin() */void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MeshEditor::~MeshEditor() */void MeshEditor::~MeshEditor(MeshEditor *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<MeshEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<MeshEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<MeshEditor,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorInspectorPluginMesh::~EditorInspectorPluginMesh() */void EditorInspectorPluginMesh::~EditorInspectorPluginMesh(EditorInspectorPluginMesh *this) {
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


/* Texture3DEditor::_texture_rect_draw() */void Texture3DEditor::_texture_rect_draw(Texture3DEditor *this) {
   Rect2 *pRVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   undefined4 local_28;
   undefined4 uStack_24;
   undefined4 uStack_20;
   undefined4 uStack_1c;
   long local_10;
   pRVar1 = *(Rect2**)( this + 0x9f0 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_28 = _LC1;
   uStack_24 = _LC1;
   uStack_20 = _LC1;
   uStack_1c = _LC1;
   local_30 = Control::get_size();
   local_38 = 0;
   CanvasItem::draw_rect(pRVar1, (Color*)&local_38, SUB81(&local_28, 0), _LC2, true);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorInspectorPlugin3DTexture::can_handle(Object*) */bool EditorInspectorPlugin3DTexture::can_handle(EditorInspectorPlugin3DTexture *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Texture3D::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Texture3DEditor::_update_material(bool) */void Texture3DEditor::_update_material(Texture3DEditor *this, bool param_1) {
   StringName *pSVar1;
   int iVar2;
   long in_FS_OFFSET;
   double dVar3;
   undefined8 local_68;
   long local_60;
   Vector4 local_58[16];
   int local_48[6];
   long local_30;
   pSVar1 = *(StringName**)( this + 0x9e8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   dVar3 = (double)Range::get_value();
   dVar3 = dVar3 + __LC11;
   iVar2 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e0 ) )();
   Variant::Variant((Variant*)local_48, dVar3 / (double)iVar2);
   StringName::StringName((StringName*)&local_60, "layer", false);
   ShaderMaterial::set_shader_parameter(pSVar1, (Variant*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (param_1) {
      pSVar1 = *(StringName**)( this + 0x9e8 );
      local_68 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1c0 ) )();
      Variant::Variant((Variant*)local_48, (RID*)&local_68);
      StringName::StringName((StringName*)&local_60, "tex", false);
      ShaderMaterial::set_shader_parameter(pSVar1, (Variant*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   pSVar1 = *(StringName**)( this + 0x9e8 );
   local_58 = (Vector4[16])ColorChannelSelector::get_selected_channel_factors();
   Variant::Variant((Variant*)local_48, local_58);
   StringName::StringName((StringName*)&local_60, "u_channel_factors", false);
   ShaderMaterial::set_shader_parameter(pSVar1, (Variant*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Texture3DEditor::on_selected_channels_changed() */void Texture3DEditor::on_selected_channels_changed(Texture3DEditor *this) {
   _update_material(this, false);
   return;
}
/* Texture3DEditor::_texture_rect_update_area() */void Texture3DEditor::_texture_rect_update_area(Texture3DEditor *this) {
   long lVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = Control::get_size();
   iVar2 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
   iVar3 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
   if ((float)uVar4 < (float)(int)( ( (float)iVar2 * (float)( (ulong)uVar4 >> 0x20 ) ) / (float)iVar3 )) {
      ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
      ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
   }

   Control::set_position(*(Vector2**)( this + 0x9f0 ), true);
   Control::set_size(*(Vector2**)( this + 0x9f0 ), true);
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Texture3DEditor::_notification(int) */void Texture3DEditor::_notification(Texture3DEditor *this, int param_1) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   Object *local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined4 local_48;
   undefined4 uStack_44;
   undefined4 uStack_40;
   undefined4 uStack_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x28) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _texture_rect_update_area(this);
         return;
      }

      goto LAB_001006e5;
   }

   if (param_1 == 0x2d) {
      if (*(long*)( this + 0x9d0 ) != 0) {
         if ((_notification(int)::{lambda()
         #2
         (iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()
         #2
         iVar2 != 0))
         {
            _scs_create((char *)&_notification(int)::{lambda()
            #2
            __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
      Control::get_theme_font((StringName *)&local_60,(StringName *)this);
      Control::add_theme_font_override
                (*(StringName **)(this + 0x9d0),(Ref *)(SceneStringNames::singleton + 0xa0));
      goto joined_r0x001005c6;
    }
  }
  else if (param_1 == 0x1e), {
                     if ((_notification(int)::{lambda()
                     #1
                     (iVar2 = __cxa_guard_acquire(&_notification(int)::{lambda()
                     #1
                     iVar2 != 0))
                     {
                        _scs_create((char *)&_notification(int)::{lambda()
                        #1
                        __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_60);
    local_50 = Control::get_size();
    local_58 = 0;
    local_48 = _LC1;
    uStack_44 = _LC1;
    uStack_40 = _LC1;
    uStack_3c = _LC1;
    CanvasItem::draw_texture_rect
              (this,(Rect2 *)&local_60,SUB81(&local_58,0),(Color *)0x1,SUB81(&local_48,0));, joined_r0x001005c6(( ( local_60 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) && ( cVar1 = predelete_handler(local_60) ), cVar1 != '\0'));
                        {
                           ( **(code**)( *(long*)local_60 + 0x140 ) )(local_60);
                           Memory::free_static(local_60, false);
                        }

                     }

                     if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     LAB_001006e5:/* WARNING: Subroutine does not return */__stack_chk_fail();
                  }
, /* Texture3DEditor::~Texture3DEditor() */, void __thiscall Texture3DEditor::~Texture3DEditor(Texture3DEditor *this) * pCVar1);
            Object *pOVar2;
            char cVar3;
            long in_FS_OFFSET;
            Texture3DEditor aTStack_38[24];
            long local_20;
            pCVar1 = *(Callable**)( this + 0x9d8 );
            local_20 = *(long*)( in_FS_OFFSET + 0x28 );
            *(undefined***)this = &PTR__initialize_classv_00108c28;
            if (pCVar1 != (Callable*)0x0) {
               create_custom_callable_function_pointer<Texture3DEditor>(aTStack_38, (char*)this, (_func_void*)"&Texture3DEditor::_texture_changed");
               Resource::disconnect_changed(pCVar1);
               Callable::~Callable((Callable*)aTStack_38);
            }

            for (int i = 0; i < 3; i++) {
               if (*(long*)( this + ( -8*i + 2536 ) ) != 0) {
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( this + ( -8*i + 2536 ) );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Control::~Control((Control*)this);
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* Texture3DEditor::~Texture3DEditor() */
         void Texture3DEditor::~Texture3DEditor(Texture3DEditor *this) {
            ~Texture3DEditor(this)
            ;;
            operator_delete(this, 0xa08);
            return;
         }

         /* Texture3DEditorPlugin::Texture3DEditorPlugin() */
         void Texture3DEditorPlugin::Texture3DEditorPlugin(Texture3DEditorPlugin *this) {
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
            this[0x428] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x430 ) = 0;
            StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
            this[0x440] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x448 ) = 0;
            StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
            this[0x458] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x460 ) = 0;
            StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
            this[0x470] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x478 ) = 0;
            StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
            this[0x488] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x490 ) = 0;
            StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
            this[0x4a0] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x4a8 ) = 0;
            StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
            this[0x4b8] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x4c0 ) = 0;
            StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
            this[0x4d0] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x4d8 ) = 0;
            StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
            this[0x4e8] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x4f0 ) = 0;
            StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
            this[0x500] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x508 ) = 0;
            StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
            this[0x518] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x520 ) = 0;
            StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
            this[0x530] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x538 ) = 0;
            StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
            this[0x548] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x550 ) = 0;
            StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
            this[0x560] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x568 ) = 0;
            StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
            this[0x578] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x580 ) = 0;
            StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
            this[0x590] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x598 ) = 0;
            StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
            this[0x5a8] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x5b0 ) = 0;
            StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
            this[0x5c0] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x5c8 ) = 0;
            StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
            this[0x5d8] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x5e0 ) = 0;
            StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
            this[0x5f0] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x5f8 ) = 0;
            StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
            this[0x608] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x610 ) = 0;
            StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
            this[0x620] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x628 ) = 0;
            StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
            this[0x638] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x640 ) = 0;
            StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
            this[0x650] = (Texture3DEditorPlugin)0x0;
            *(undefined8*)( this + 0x658 ) = 0;
            *(undefined***)this = &PTR__initialize_classv_00108980;
            local_30 = (Object*)0x0;
            Ref<EditorInspectorPlugin3DTexture>::instantiate<>((Ref<EditorInspectorPlugin3DTexture>*)&local_30);
            pOVar1 = local_30;
            local_28 = (Object*)0x0;
            if (local_30 == (Object*)0x0) {
               EditorPlugin::add_inspector_plugin(this);
               if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar3 = local_28,cVar2 != '\0' )) goto LAB_00100d04;
            }
 else {
               pOVar3 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &EditorInspectorPlugin::typeinfo, 0);
               if (( pOVar3 != (Object*)0x0 ) && ( local_28 = pOVar3 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
                  local_28 = (Object*)0x0;
               }

               EditorPlugin::add_inspector_plugin(this);
               if (( ( local_28 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar3 = local_28,cVar2 != '\0' )) {
                  LAB_00100d04:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (pOVar1 == (Object*)0x0) goto LAB_00100d1f;
               }

               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
                  ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                  if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static(pOVar1, false);
                     return;
                  }

                  goto LAB_00100dc6;
               }

            }

            LAB_00100d1f:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            LAB_00100dc6:/* WARNING: Subroutine does not return */__stack_chk_fail();
         }

         /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
         /* Texture3DEditor::Texture3DEditor() */
         void Texture3DEditor::Texture3DEditor(Texture3DEditor *this) {
            long *plVar1;
            code *pcVar2;
            undefined8 uVar3;
            long lVar4;
            StringName *pSVar5;
            Control *this_00;
            SpinBox *this_01;
            CallableCustom *this_02;
            ColorChannelSelector *this_03;
            Label *this_04;
            long in_FS_OFFSET;
            float fVar6;
            long local_70;
            long local_68[2];
            undefined8 local_58;
            undefined8 uStack_50;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            Control::Control((Control*)this);
            *(undefined***)this = &PTR__initialize_classv_00108c28;
            *(undefined8*)( this + 0x9f8 ) = 0;
            this[0xa00] = (Texture3DEditor)0x0;
            for (int i = 0; i < 3; i++) {
               *(undefined1(*) [16])( this + ( 16*i + 2504 ) ) = (undefined1[16])0;
            }

            CanvasItem::set_texture_repeat(this, 2);
            fVar6 = (float)EditorScale::get_scale();
            local_58 = CONCAT44(_LC60 * fVar6, fVar6);
            Control::set_custom_minimum_size((Vector2*)this);
            this_00 = (Control*)operator_new(0x9c8, "");
            Control::Control(this_00);
            postinitialize_handler((Object*)this_00);
            *(Control**)( this + 0x9f0 ) = this_00;
            Control::set_mouse_filter(this_00, 2);
            plVar1 = *(long**)( this + 0x9f0 );
            pcVar2 = *(code**)( *plVar1 + 0x108 );
            create_custom_callable_function_pointer<Texture3DEditor>((Texture3DEditor*)local_68, (char*)this, (_func_void*)"&Texture3DEditor::_texture_rect_draw");
            ( *pcVar2 )(plVar1, SceneStringNames::singleton + 8, (Texture3DEditor*)local_68, 0);
            Callable::~Callable((Callable*)local_68);
            Node::add_child(this, *(undefined8*)( this + 0x9f0 ), 0, 0);
            this_01 = (SpinBox*)operator_new(0xba8, "");
            SpinBox::SpinBox(this_01);
            postinitialize_handler((Object*)this_01);
            *(SpinBox**)( this + 0x9c8 ) = this_01;
            Range::set_step(_LC62);
            Range::set_max(_LC63);
            local_58 = CONCAT44(_UNK_00109494, _LC1);
            uStack_50 = _UNK_00109498;
            CanvasItem::set_modulate(*(Color**)( this + 0x9c8 ));
            Control::set_h_grow_direction(*(undefined8*)( this + 0x9c8 ), 0);
            Control::set_anchor(*(undefined8*)( this + 0x9c8 ), 2, 1, 1);
            Control::set_anchor(*(undefined8*)( this + 0x9c8 ), 0, 1, 1);
            plVar1 = *(long**)( this + 0x9c8 );
            pcVar2 = *(code**)( *plVar1 + 0x108 );
            this_02 = (CallableCustom*)operator_new(0x48, "");
            CallableCustom::CallableCustom(this_02);
            *(undefined**)( this_02 + 0x20 ) = &_LC18;
            *(undefined1(*) [16])( this_02 + 0x30 ) = (undefined1[16])0x0;
            *(undefined***)this_02 = &PTR_hash_001091b0;
            *(undefined8*)( this_02 + 0x40 ) = 0;
            uVar3 = *(undefined8*)( this + 0x60 );
            *(undefined8*)( this_02 + 0x10 ) = 0;
            *(undefined8*)( this_02 + 0x30 ) = uVar3;
            *(code**)( this_02 + 0x38 ) = _layer_changed;
            *(Texture3DEditor**)( this_02 + 0x28 ) = this;
            CallableCustomMethodPointerBase::_setup((uint*)this_02, (int)this_02 + 0x28);
            *(char**)( this_02 + 0x20 ) = "Texture3DEditor::_layer_changed";
            Callable::Callable((Callable*)local_68, this_02);
            ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x280, (Texture3DEditor*)local_68, 0);
            Callable::~Callable((Callable*)local_68);
            Node::add_child(this, *(undefined8*)( this + 0x9c8 ), 0, 0);
            this_03 = (ColorChannelSelector*)operator_new(0xa40, "");
            ColorChannelSelector::ColorChannelSelector(this_03);
            postinitialize_handler((Object*)this_03);
            lVar4 = *(long*)this_03;
            *(ColorChannelSelector**)( this + 0x9f8 ) = this_03;
            pcVar2 = *(code**)( lVar4 + 0x108 );
            create_custom_callable_function_pointer<Texture3DEditor>((Texture3DEditor*)local_68, (char*)this, (_func_void*)"&Texture3DEditor::on_selected_channels_changed");
            StringName::StringName((StringName*)&local_70, "selected_channels_changed", false);
            ( *pcVar2 )(this_03, (StringName*)&local_70, (Texture3DEditor*)local_68, 0);
            if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
               StringName::unref();
            }

            Callable::~Callable((Callable*)local_68);
            Control::set_anchors_preset(*(undefined8*)( this + 0x9f8 ), 0, 1);
            Node::add_child(this, *(undefined8*)( this + 0x9f8 ), 0, 0);
            this_04 = (Label*)operator_new(0xad8, "");
            local_68[0] = 0;
            Label::Label(this_04, (String_conflict*)local_68);
            postinitialize_handler((Object*)this_04);
            *(Label**)( this + 0x9d0 ) = this_04;
            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            local_58 = CONCAT44(_LC1, _LC1);
            uStack_50 = CONCAT44(_LC1, _LC1);
            Control::add_theme_color_override(*(StringName**)( this + 0x9d0 ), (Color*)( SceneStringNames::singleton + 0xb0 ));
            pSVar5 = *(StringName**)( this + 0x9d0 );
            local_58 = __LC68;
            uStack_50 = _UNK_001094a8;
            StringName::StringName((StringName*)local_68, "font_shadow_color", false);
            Control::add_theme_color_override(pSVar5, (Color*)local_68);
            if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
               StringName::unref();
            }

            pSVar5 = *(StringName**)( this + 0x9d0 );
            EditorScale::get_scale();
            Control::add_theme_font_size_override(pSVar5, (int)SceneStringNames::singleton + 0xa8);
            pSVar5 = *(StringName**)( this + 0x9d0 );
            local_58 = __LC68;
            uStack_50 = _UNK_001094a8;
            StringName::StringName((StringName*)local_68, "font_outline_color", false);
            Control::add_theme_color_override(pSVar5, (Color*)local_68);
            if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
               StringName::unref();
            }

            pSVar5 = *(StringName**)( this + 0x9d0 );
            EditorScale::get_scale();
            StringName::StringName((StringName*)local_68, "outline_size", false);
            Control::add_theme_constant_override(pSVar5, (int)(Texture3DEditor*)local_68);
            if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
               StringName::unref();
            }

            Control::set_h_grow_direction(*(undefined8*)( this + 0x9d0 ), 0);
            Control::set_v_grow_direction(*(undefined8*)( this + 0x9d0 ), 0);
            Control::set_h_size_flags(*(undefined8*)( this + 0x9d0 ), 8);
            Control::set_v_size_flags(*(undefined8*)( this + 0x9d0 ), 8);
            Control::set_anchor(*(undefined8*)( this + 0x9d0 ), 2, 1, 1);
            Control::set_anchor(*(undefined8*)( this + 0x9d0 ), 0, 1, 1);
            Control::set_anchor(*(undefined8*)( this + 0x9d0 ), 3, 1, 1);
            Control::set_anchor(*(undefined8*)( this + 0x9d0 ), 1, 1, 1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Node::add_child(this, *(undefined8*)( this + 0x9d0 ), 0, 0);
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
         void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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

         /* Texture3DEditor::_update_gui() [clone .part.0] */
         void Texture3DEditor::_update_gui(Texture3DEditor *this) {
            char cVar1;
            int iVar2;
            undefined4 uVar3;
            undefined4 uVar4;
            undefined4 uVar5;
            undefined4 uVar6;
            undefined4 uVar7;
            uint uVar8;
            long in_FS_OFFSET;
            CowData<char32_t> *local_130;
            CowData<char32_t> *local_128;
            CowData<char32_t> *local_120;
            CowData<char32_t> *local_118;
            CowData<char32_t> *local_110;
            CowData<char32_t> *local_108;
            CowData<char32_t> *local_100;
            String_conflict *local_f8;
            CowData<char32_t> *local_f0;
            CowData<char32_t> *local_e8;
            CowData<char32_t> *local_e0;
            CowData local_c8[8];
            String_conflict local_c0[8];
            undefined8 local_b8;
            undefined8 local_b0;
            String_conflict local_a8[8];
            String_conflict local_a0[8];
            undefined8 local_98;
            String_conflict local_90[8];
            undefined8 local_88;
            undefined8 local_80;
            String_conflict local_78[8];
            String_conflict local_70[8];
            undefined8 local_68;
            CowData<char32_t> local_60[8];
            char *local_58;
            undefined8 local_50;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            _texture_rect_update_area(this);
            iVar2 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e0 ) )();
            Range::set_max((double)( iVar2 + -1 ));
            uVar3 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1c8 ) )();
            Image::get_format_name(local_c8, uVar3);
            cVar1 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e8 ) )();
            if (cVar1 == '\0') {
               uVar4 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
               uVar5 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
               Image::get_image_data_size(uVar5, uVar4, uVar3, 0);
               ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e0 ) )();
               local_f8 = *(String_conflict**)( this + 0x9d0 );
               String::humanize_size((ulong)local_60);
               local_68 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_c8);
               uVar4 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e0 ) )();
               uVar5 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
               uVar6 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
               local_58 = "";
               local_80 = 0;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_80);
               local_88 = 0;
               local_58 = "Memory: %s";
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_88);
               TTR(local_78, (String_conflict*)&local_88);
               local_58 = "\n";
               local_98 = 0;
               local_50 = 1;
               String::parse_latin1((StrRange*)&local_98);
               local_58 = "";
               local_b0 = 0;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_b0);
               local_b8 = 0;
               local_58 = "No Mipmaps";
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_b8);
               TTR(local_a8, (String_conflict*)&local_b8);
               String::utf8((char*)local_c0, 0x1034d6);
               String::operator +(local_a0, local_c0);
               String::operator +(local_90, local_a0);
               String::operator +(local_70, local_90);
               vformat<int,int,int,String,String>(&local_58, local_70, uVar6, uVar5, uVar4, (CowData<char32_t>*)&local_68, local_60);
            }
 else {
               uVar4 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
               uVar5 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
               uVar4 = Image::get_image_required_mipmaps(uVar5, uVar4, uVar3);
               uVar5 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
               uVar6 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
               Image::get_image_data_size(uVar6, uVar5, uVar3, 1);
               ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e0 ) )();
               local_f8 = *(String_conflict**)( this + 0x9d0 );
               String::humanize_size((ulong)local_60);
               local_68 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_c8);
               uVar5 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1e0 ) )();
               uVar6 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d8 ) )();
               uVar7 = ( **(code**)( **(long**)( this + 0x9d8 ) + 0x1d0 ) )();
               local_58 = "";
               local_80 = 0;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_80);
               local_88 = 0;
               local_58 = "Memory: %s";
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_88);
               TTR(local_78, (String_conflict*)&local_88);
               local_58 = "\n";
               local_98 = 0;
               local_50 = 1;
               String::parse_latin1((StrRange*)&local_98);
               local_58 = "";
               local_b0 = 0;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_b0);
               local_b8 = 0;
               local_58 = "%s Mipmaps";
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_b8);
               TTR(local_a8, (String_conflict*)&local_b8);
               String::utf8((char*)local_c0, 0x1034d6);
               String::operator +(local_a0, local_c0);
               String::operator +(local_90, local_a0);
               String::operator +(local_70, local_90);
               vformat<int,int,int,String,int,String>(&local_58, local_70, uVar7, uVar6, uVar5, (CowData<char32_t>*)&local_68, uVar4);
            }

            local_e0 = (CowData<char32_t>*)&local_b0;
            local_e8 = (CowData<char32_t>*)&local_98;
            local_f0 = (CowData<char32_t>*)&local_80;
            local_100 = (CowData<char32_t>*)local_90;
            local_108 = (CowData<char32_t>*)local_a0;
            local_110 = (CowData<char32_t>*)local_a8;
            local_118 = (CowData<char32_t>*)&local_b8;
            local_120 = (CowData<char32_t>*)local_78;
            local_128 = (CowData<char32_t>*)&local_88;
            local_130 = (CowData<char32_t>*)&local_68;
            Label::set_text(local_f8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
            CowData<char32_t>::_unref(local_100);
            CowData<char32_t>::_unref(local_108);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
            CowData<char32_t>::_unref(local_110);
            CowData<char32_t>::_unref(local_118);
            CowData<char32_t>::_unref(local_e0);
            CowData<char32_t>::_unref(local_e8);
            CowData<char32_t>::_unref(local_120);
            CowData<char32_t>::_unref(local_128);
            CowData<char32_t>::_unref(local_f0);
            CowData<char32_t>::_unref(local_130);
            CowData<char32_t>::_unref(local_60);
            uVar8 = Image::get_format_component_mask(uVar3);
            if (( uVar8 == 0 ) || ( ( uVar8 - 1 & uVar8 ) != 0 )) {
               CanvasItem::show();
               ColorChannelSelector::set_available_channels_mask(( uint ) * (undefined8*)( this + 0x9f8 ));
            }
 else {
               CanvasItem::hide();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* Texture3DEditor::_update_gui() */
         void Texture3DEditor::_update_gui(Texture3DEditor *this) {
            if (*(long*)( this + 0x9d8 ) != 0) {
               _update_gui(this);
               return;
            }

            return;
         }

         /* Texture3DEditor::_texture_changed() */
         void Texture3DEditor::_texture_changed(Texture3DEditor *this) {
            char cVar1;
            cVar1 = CanvasItem::is_visible();
            if (cVar1 != '\0') {
               this[0xa00] = (Texture3DEditor)0x1;
               if (*(long*)( this + 0x9d8 ) != 0) {
                  _update_gui(this);
               }

               this[0xa00] = (Texture3DEditor)0x0;
               _update_material(this, true);
               CanvasItem::queue_redraw();
               return;
            }

            return;
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

         /* Texture3DEditor::_make_shaders() */
         void Texture3DEditor::_make_shaders(Texture3DEditor *this) {
            char cVar1;
            Shader *this_00;
            ShaderMaterial *this_01;
            Object *pOVar2;
            Object *pOVar3;
            long in_FS_OFFSET;
            undefined8 local_60;
            char *local_58;
            undefined8 local_50;
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            this_00 = (Shader*)operator_new(0x2e8, "");
            Shader::Shader(this_00);
            postinitialize_handler((Object*)this_00);
            cVar1 = RefCounted::init_ref();
            if (cVar1 == '\0') {
               pOVar2 = *(Object**)( this + 0x9e0 );
               if (pOVar2 != (Object*)0x0) {
                  *(undefined8*)( this + 0x9e0 ) = 0;
                  cVar1 = RefCounted::unreference();
                  if (cVar1 != '\0') {
                     this_00 = (Shader*)0x0;
                     cVar1 = predelete_handler(pOVar2);
                     if (cVar1 != '\0') {
                        LAB_00101fd3:( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                        pOVar3 = (Object*)this_00;
                        if (this_00 != (Shader*)0x0) goto LAB_00101f5a;
                     }

                  }

                  goto LAB_00101dba;
               }

            }
 else {
               pOVar2 = *(Object**)( this + 0x9e0 );
               pOVar3 = pOVar2;
               if (this_00 != (Shader*)pOVar2) {
                  *(Shader**)( this + 0x9e0 ) = this_00;
                  cVar1 = RefCounted::reference();
                  pOVar3 = (Object*)this_00;
                  if (cVar1 == '\0') {
                     *(undefined8*)( this + 0x9e0 ) = 0;
                     if (pOVar2 != (Object*)0x0) {
                        cVar1 = RefCounted::unreference();
                        joined_r0x00101faf:if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) goto LAB_00101fd3;
                     }

                  }
 else if (pOVar2 != (Object*)0x0) {
                     cVar1 = RefCounted::unreference();
                     goto joined_r0x00101faf;
                  }

               }

               LAB_00101f5a:cVar1 = RefCounted::unreference();
               if (( cVar1 == '\0' ) || ( cVar1 = cVar1 == '\0' )) {
                  LAB_00101dba:pOVar2 = *(Object**)( this + 0x9e0 );
               }
 else {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  pOVar2 = *(Object**)( this + 0x9e0 );
               }

            }

            local_60 = 0;
            local_58 = "\n\t// Texture3DEditor preview shader.\n\n\tshader_type canvas_item;\n\n\tuniform sampler3D tex;\n\tuniform float layer;\n\n\tuniform vec4 u_channel_factors = vec4(1.0);\n\n\tvec4 filter_preview_colors(vec4 input_color, vec4 factors) {\n\t\t// Filter RGB.\n\t\tvec4 output_color = input_color * vec4(factors.rgb, input_color.a);\n\n\t\t// Remove transparency when alpha is not enabled.\n\t\toutput_color.a = mix(1.0, output_color.a, factors.a);\n\n\t\t// Switch to opaque grayscale when visualizing only one channel.\n\t\tfloat csum = factors.r + factors.g + factors.b + factors.a;\n\t\tfloat single = clamp(2.0 - csum, 0.0, 1.0);\n\t\tfor (int i = 0; i < 4; i++) {\n\t\t\tfloat c = input_color[i];\n\t\t\toutput_color = mix(output_color, vec4(c, c, c, 1.0), factors[i] * single);\n\t\t}\n\n\t\treturn output_color;\n\t}\n\n\tvoid fragment() {\n\t\tCOLOR = textureLod(tex, vec3(UV, layer), 0.0);\n\t\tCOLOR = filter_preview_colors(COLOR, u_channel_factors);\n\t}\n";
            local_50 = 0x37d;
            String::parse_latin1((StrRange*)&local_60);
            Shader::set_code((String_conflict*)pOVar2);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            this_01 = (ShaderMaterial*)operator_new(0x348, "");
            ShaderMaterial::ShaderMaterial(this_01);
            postinitialize_handler((Object*)this_01);
            cVar1 = RefCounted::init_ref();
            if (cVar1 == '\0') {
               pOVar2 = *(Object**)( this + 0x9e8 );
               if (pOVar2 == (Object*)0x0) goto LAB_00101e5e;
               *(undefined8*)( this + 0x9e8 ) = 0;
               cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
                  pOVar2 = *(Object**)( this + 0x9e8 );
                  goto LAB_00101e5e;
               }

            }
 else {
               pOVar2 = *(Object**)( this + 0x9e8 );
               pOVar3 = pOVar2;
               if (this_01 != (ShaderMaterial*)pOVar2) {
                  *(ShaderMaterial**)( this + 0x9e8 ) = this_01;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     *(undefined8*)( this + 0x9e8 ) = 0;
                  }

                  pOVar3 = (Object*)this_01;
                  if (( ( pOVar2 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

            cVar1 = RefCounted::unreference();
            if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
               pOVar2 = *(Object**)( this + 0x9e8 );
               goto LAB_00101e5e;
            }

         }

         pOVar2 = *(Object**)( this + 0x9e8 );
         LAB_00101e5e:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            ShaderMaterial::set_shader(pOVar2);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* Texture3DEditor::edit(Ref<Texture3D>) */
      void Texture3DEditor::edit(Texture3DEditor *this, long *param_2) {
         Callable *pCVar1;
         long *plVar2;
         code *pcVar3;
         char cVar4;
         Object *pOVar5;
         Callable *pCVar6;
         long in_FS_OFFSET;
         Object *local_48[3];
         long local_30;
         pCVar1 = *(Callable**)( this + 0x9d8 );
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (pCVar1 == (Callable*)0x0) {
            if (*param_2 != 0) {
               *(long*)( this + 0x9d8 ) = *param_2;
               cVar4 = RefCounted::reference();
               pCVar6 = (Callable*)0x0;
               if (cVar4 == '\0') {
                  LAB_0010213c:*(undefined8*)( this + 0x9d8 ) = 0;
                  goto LAB_00102147;
               }

               goto LAB_00102160;
            }

         }
 else {
            create_custom_callable_function_pointer<Texture3DEditor>((Texture3DEditor*)local_48, (char*)this, (_func_void*)"&Texture3DEditor::_texture_changed");
            Resource::disconnect_changed(pCVar1);
            Callable::~Callable((Callable*)local_48);
            pOVar5 = (Object*)*param_2;
            pCVar6 = *(Callable**)( this + 0x9d8 );
            if (pOVar5 != (Object*)pCVar6) {
               *(Object**)( this + 0x9d8 ) = pOVar5;
               if (pOVar5 == (Object*)0x0) {
                  LAB_00102147:if (pCVar6 == (Callable*)0x0) goto LAB_001022d0;
               }
 else {
                  cVar4 = RefCounted::reference();
                  if (cVar4 == '\0') goto LAB_0010213c;
                  if (pCVar6 == (Callable*)0x0) goto LAB_00102160;
               }

               cVar4 = RefCounted::unreference();
               if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)pCVar6) ),cVar4 != '\0') {
                  ( **(code**)( *(long*)pCVar6 + 0x140 ) )(pCVar6);
                  Memory::free_static(pCVar6, false);
               }

               LAB_00102160:pCVar6 = *(Callable**)( this + 0x9d8 );
            }

            if (pCVar6 != (Callable*)0x0) {
               if (*(long*)( this + 0x9e0 ) == 0) {
                  _make_shaders(this);
                  pCVar6 = *(Callable**)( this + 0x9d8 );
               }

               create_custom_callable_function_pointer<Texture3DEditor>((Texture3DEditor*)local_48, (char*)this, (_func_void*)"&Texture3DEditor::_texture_changed");
               Resource::connect_changed(pCVar6, (uint)local_48);
               Callable::~Callable((Callable*)local_48);
               plVar2 = *(long**)( this + 0x9f0 );
               pcVar3 = *(code**)( *plVar2 + 0x2b8 );
               local_48[0] = (Object*)0x0;
               if (( ( *(long*)( this + 0x9e8 ) != 0 ) && ( pOVar5 = (Object*)__dynamic_cast(*(long*)( this + 0x9e8 ), &Object::typeinfo, &Material::typeinfo, 0) ),pOVar5 != (Object*)0x0 )) {
                  local_48[0] = (Object*)0x0;
               }

               ( *pcVar3 )(plVar2);
               if (( ( local_48[0] != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar5 = local_48[0],cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
               Memory::free_static(pOVar5, false);
            }

            this[0xa00] = (Texture3DEditor)0x1;
            Range::set_value(0.0);
            CanvasItem::show();
            if (*(long*)( this + 0x9d8 ) != 0) {
               _update_gui(this);
            }

            this[0xa00] = (Texture3DEditor)0x0;
            _update_material(this, true);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               CanvasItem::queue_redraw();
               return;
            }

            goto LAB_0010233c;
         }

      }

      LAB_001022d0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::hide();
         return;
      }

      LAB_0010233c:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* EditorInspectorPlugin3DTexture::parse_begin(Object*) */
   void EditorInspectorPlugin3DTexture::parse_begin(EditorInspectorPlugin3DTexture *this, Object *param_1) {
      char cVar1;
      Object *pOVar2;
      Texture3DEditor *pTVar3;
      long in_FS_OFFSET;
      Object *local_28;
      long local_20;
      local_20 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( param_1 != (Object*)0x0 ) && ( pOVar2 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Texture3D::typeinfo, 0) ),pOVar2 != (Object*)0x0) {
         cVar1 = RefCounted::init_ref();
         if (cVar1 == '\0') {
            pTVar3 = (Texture3DEditor*)operator_new(0xa08, "");
            Texture3DEditor::Texture3DEditor(pTVar3);
            postinitialize_handler((Object*)pTVar3);
            local_28 = (Object*)0x0;
            Texture3DEditor::edit(pTVar3, &local_28);
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               EditorInspectorPlugin::add_custom_control((Control*)this);
               return;
            }

            goto LAB_00102523;
         }

         pTVar3 = (Texture3DEditor*)operator_new(0xa08, "");
         Texture3DEditor::Texture3DEditor(pTVar3);
         postinitialize_handler((Object*)pTVar3);
         local_28 = pOVar2;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            local_28 = (Object*)0x0;
            Texture3DEditor::edit(pTVar3, &local_28);
            EditorInspectorPlugin::add_custom_control((Control*)this);
            cVar1 = RefCounted::unreference();
         }
 else {
            Texture3DEditor::edit(pTVar3);
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

            goto LAB_00102523;
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_00102523:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

   /* RefCounted::is_class_ptr(void*) const */
   uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
      return (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
   }

   /* RefCounted::_getv(StringName const&, Variant&) const */
   undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_setv(StringName const&, Variant const&) */
   undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_validate_propertyv(PropertyInfo&) const */
   void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* RefCounted::_property_can_revertv(StringName const&) const */
   undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* RefCounted::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_notificationv(int, bool) */
   void RefCounted::_notificationv(int param_1, bool param_2) {
      return;
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

   /* Texture3DEditor::is_class_ptr(void*) const */
   uint Texture3DEditor::is_class_ptr(Texture3DEditor *this, void *param_1) {
      return (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1092, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* EditorInspectorPlugin3DTexture::is_class_ptr(void*) const */
   uint EditorInspectorPlugin3DTexture::is_class_ptr(EditorInspectorPlugin3DTexture *this, void *param_1) {
      return (uint)CONCAT71(0x1092, (undefined4*)param_1 == &EditorInspectorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1092, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* EditorInspectorPlugin3DTexture::_getv(StringName const&, Variant&) const */
   undefined8 EditorInspectorPlugin3DTexture::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* EditorInspectorPlugin3DTexture::_setv(StringName const&, Variant const&) */
   undefined8 EditorInspectorPlugin3DTexture::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* EditorInspectorPlugin3DTexture::_validate_propertyv(PropertyInfo&) const */
   void EditorInspectorPlugin3DTexture::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* EditorInspectorPlugin3DTexture::_property_can_revertv(StringName const&) const */
   undefined8 EditorInspectorPlugin3DTexture::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* EditorInspectorPlugin3DTexture::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 EditorInspectorPlugin3DTexture::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* EditorInspectorPlugin3DTexture::_notificationv(int, bool) */
   void EditorInspectorPlugin3DTexture::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* Texture3DEditorPlugin::is_class_ptr(void*) const */
   uint Texture3DEditorPlugin::is_class_ptr(Texture3DEditorPlugin *this, void *param_1) {
      return (uint)CONCAT71(0x1092, (undefined4*)param_1 == &EditorPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1092, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1093, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* Texture3DEditorPlugin::_getv(StringName const&, Variant&) const */
   undefined8 Texture3DEditorPlugin::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Texture3DEditorPlugin::_setv(StringName const&, Variant const&) */
   undefined8 Texture3DEditorPlugin::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* Texture3DEditorPlugin::_property_can_revertv(StringName const&) const */
   undefined8 Texture3DEditorPlugin::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* Texture3DEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 Texture3DEditorPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void, double>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Texture3DEditor,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Texture3DEditor,void,double> *this) {
      return;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Texture3DEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Texture3DEditor,void> *this) {
      return;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void, double>::get_argument_count(bool&) const */
   undefined8 CallableCustomMethodPointer<Texture3DEditor,void,double>::get_argument_count(CallableCustomMethodPointer<Texture3DEditor,void,double> *this, bool *param_1) {
      *param_1 = true;
      return 1;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void>::get_argument_count(bool&) const */
   undefined8 CallableCustomMethodPointer<Texture3DEditor,void>::get_argument_count(CallableCustomMethodPointer<Texture3DEditor,void> *this, bool *param_1) {
      *param_1 = true;
      return 0;
   }

   /* CallableCustomMethodPointerBase::get_method() const */
   void CallableCustomMethodPointerBase::get_method(void) {
      long in_RSI;
      StringName *in_RDI;
      StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
      return;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Texture3DEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Texture3DEditor,void> *this) {
      operator_delete(this, 0x48);
      return;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void, double>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Texture3DEditor,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Texture3DEditor,void,double> *this) {
      operator_delete(this, 0x48);
      return;
   }

   /* Texture3DEditorPlugin::_validate_propertyv(PropertyInfo&) const */
   void Texture3DEditorPlugin::_validate_propertyv(PropertyInfo *param_1) {
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
         Node::_validate_property(param_1);
         return;
      }

      return;
   }

   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      *(undefined***)this = &PTR__initialize_classv_00108820;
      Object::~Object((Object*)this);
      return;
   }

   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      *(undefined***)this = &PTR__initialize_classv_00108820;
      Object::~Object((Object*)this);
      operator_delete(this, 0x180);
      return;
   }

   /* Texture3DEditor::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 Texture3DEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      if ((code*)PTR__property_get_revert_0010c008 != Object::_property_get_revert) {
         uVar1 = Control::_property_get_revert(param_1, param_2);
         return uVar1;
      }

      return 0;
   }

   /* Texture3DEditor::_property_can_revertv(StringName const&) const */
   undefined8 Texture3DEditor::_property_can_revertv(StringName *param_1) {
      undefined8 uVar1;
      if ((code*)PTR__property_can_revert_0010c010 != Object::_property_can_revert) {
         uVar1 = Control::_property_can_revert(param_1);
         return uVar1;
      }

      return 0;
   }

   /* EditorInspectorPlugin3DTexture::_get_class_namev() const */
   undefined8 *EditorInspectorPlugin3DTexture::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00102a33:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102a33;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorInspectorPlugin3DTexture");
            goto LAB_00102a9e;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorInspectorPlugin3DTexture");
      LAB_00102a9e:return &_get_class_namev();
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void>::get_object() const */
   undefined8 CallableCustomMethodPointer<Texture3DEditor,void>::get_object(CallableCustomMethodPointer<Texture3DEditor,void> *this) {
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
            goto LAB_00102bcd;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_00102bcd;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_00102bcd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar2;
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void, double>::get_object() const */
   undefined8 CallableCustomMethodPointer<Texture3DEditor,void,double>::get_object(CallableCustomMethodPointer<Texture3DEditor,void,double> *this) {
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
            goto LAB_00102ccd;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_00102ccd;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_00102ccd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar2;
   }

   /* Texture3DEditor::_validate_propertyv(PropertyInfo&) const */
   void Texture3DEditor::_validate_propertyv(PropertyInfo *param_1) {
      Node::_validate_property(param_1);
      CanvasItem::_validate_property(param_1);
      if ((code*)PTR__validate_property_0010c018 == CanvasItem::_validate_property) {
         return;
      }

      Control::_validate_property(param_1);
      return;
   }

   /* Texture3DEditor::_setv(StringName const&, Variant const&) */
   undefined8 Texture3DEditor::_setv(StringName *param_1, Variant *param_2) {
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

   /* WARNING: Removing unreachable block (ram,0x00102e88) */
   /* Texture3DEditor::_getv(StringName const&, Variant&) const */
   undefined8 Texture3DEditor::_getv(StringName *param_1, Variant *param_2) {
      undefined8 uVar1;
      if (( (code*)PTR__get_0010c028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
         return uVar1;
      }

      uVar1 = CanvasItem::_get(param_1, param_2);
      return uVar1;
   }

   /* Texture3DEditorPlugin::_notificationv(int, bool) */
   void Texture3DEditorPlugin::_notificationv(Texture3DEditorPlugin *this, int param_1, bool param_2) {
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

   /* RefCounted::_get_class_namev() const */
   undefined8 *RefCounted::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00102f53:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102f53;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
            goto LAB_00102fbe;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
      LAB_00102fbe:return &_get_class_namev();
   }

   /* Texture3DEditorPlugin::_get_class_namev() const */
   undefined8 *Texture3DEditorPlugin::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00103043:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103043;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture3DEditorPlugin");
            goto LAB_001030ae;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture3DEditorPlugin");
      LAB_001030ae:return &_get_class_namev();
   }

   /* Texture3DEditor::_get_class_namev() const */
   undefined8 *Texture3DEditor::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00103133:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103133;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture3DEditor");
            goto LAB_0010319e;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Texture3DEditor");
      LAB_0010319e:return &_get_class_namev();
   }

   /* Texture3DEditorPlugin::get_plugin_name() const */
   Texture3DEditorPlugin * Texture3DEditorPlugin::get_plugin_name(Texture3DEditorPlugin * this);
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
   void String::parse_latin1(String_conflict *this, char *param_1) {
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

   /* Texture3DEditor::_layer_changed(double) */
   void Texture3DEditor::_layer_changed(double param_1) {
      Texture3DEditor *in_RDI;
      if (in_RDI[0xa00] != (Texture3DEditor)0x0) {
         return;
      }

      _update_material(in_RDI, false);
      return;
   }

   /* WARNING: Removing unreachable block (ram,0x00103580) */
   /* Texture3DEditor::_notificationv(int, bool) */
   void Texture3DEditor::_notificationv(Texture3DEditor *this, int param_1, bool param_2) {
      int iVar1;
      iVar1 = (int)this;
      if (param_2) {
         _notification(this, param_1);
         if ((code*)PTR__notification_0010c038 != CanvasItem::_notification) {
            Control::_notification(iVar1);
         }

         CanvasItem::_notification(iVar1);
         Node::_notification(iVar1);
         return;
      }

      Node::_notification(iVar1);
      CanvasItem::_notification(iVar1);
      if ((code*)PTR__notification_0010c038 != CanvasItem::_notification) {
         Control::_notification(iVar1);
      }

      _notification(this, param_1);
      return;
   }

   /* Callable create_custom_callable_function_pointer<Texture3DEditor>(Texture3DEditor*, char const*,
   void (Texture3DEditor::*)()) */
   Texture3DEditor *create_custom_callable_function_pointer<Texture3DEditor>(Texture3DEditor *param_1, char *param_2, _func_void *param_3) {
      undefined8 uVar1;
      CallableCustom *this;
      undefined8 in_RCX;
      undefined8 in_R8;
      this(CallableCustom * operator_new(0x48, ""));
      CallableCustom::CallableCustom(this);
      *(undefined**)( this + 0x20 ) = &_LC18;
      *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
      *(undefined8*)( this + 0x40 ) = 0;
      *(undefined***)this = &PTR_hash_00109120;
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

   /* void Ref<EditorInspectorPlugin3DTexture>::instantiate<>() */
   void Ref<EditorInspectorPlugin3DTexture>::instantiate<>(Ref<EditorInspectorPlugin3DTexture> *this) {
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
      *(undefined***)this_00 = &PTR__initialize_classv_00108f90;
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
         if (this_00 == (RefCounted*)pOVar5) goto LAB_00103d75;
         *(RefCounted**)this = this_00;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)this = 0;
         }

         pOVar4 = (Object*)this_00;
         if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00103d75;
      }

      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
      pOVar4 = (Object*)this_00;
      if (this_00 == (RefCounted*)0x0) {
         return;
      }

      LAB_00103d75:cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
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

   /* EditorPlugin::~EditorPlugin() */
   void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
      bool bVar1;
      bVar1 = StringName::configured != '\0';
      *(code**)this = EditorPlugin::add_inspector_plugin;
      if (bVar1) {
         if (*(long*)( this + 0x648 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x630 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x618 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x600 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x5e8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x5d0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x5b8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x5a0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x588 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x570 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x558 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x540 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x528 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x510 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x4f8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x4e0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x4c8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x4b0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x498 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x480 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x468 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x450 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x438 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_0010418a;
         }

         if (*(long*)( this + 0x420 ) != 0) {
            StringName::unref();
         }

      }

      LAB_0010418a:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x418 ));
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

   /* Texture3DEditorPlugin::~Texture3DEditorPlugin() */
   void Texture3DEditorPlugin::~Texture3DEditorPlugin(Texture3DEditorPlugin *this) {
      *(undefined***)this = &PTR__initialize_classv_00108980;
      EditorPlugin::~EditorPlugin((EditorPlugin*)this);
      return;
   }

   /* Texture3DEditorPlugin::~Texture3DEditorPlugin() */
   void Texture3DEditorPlugin::~Texture3DEditorPlugin(Texture3DEditorPlugin *this) {
      *(undefined***)this = &PTR__initialize_classv_00108980;
      EditorPlugin::~EditorPlugin((EditorPlugin*)this);
      operator_delete(this, 0x660);
      return;
   }

   /* Texture3DEditor::_initialize_classv() */
   void Texture3DEditor::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_70;
      long local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
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
                  if ((code*)PTR__bind_methods_0010c050 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_68 = 0;
               local_58 = "Node";
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
               if ((code*)PTR__bind_compatibility_methods_0010c040 != Object::_bind_compatibility_methods) {
                  CanvasItem::_bind_compatibility_methods();
               }

               CanvasItem::initialize_class()::initialized =
               '\x01';
            }

            local_58 = "CanvasItem";
            local_68 = 0;
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
            if ((code*)PTR__bind_methods_0010c048 != CanvasItem::_bind_methods) {
               Control::_bind_methods();
            }

            Control::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Control";
         local_68 = 0;
         local_50 = 7;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "Texture3DEditor";
         local_70 = 0;
         local_50 = 0xf;
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

   /* WARNING: Removing unreachable block (ram,0x001048b8) */
   /* String vformat<int, int, int, String, int, String>(String const&, int const, int const, int
   const, String const, int const, String const) */
   undefined8 *vformat<int,int,int,String,int,String>(undefined8 *param_1, bool *param_2, int param_3, int param_4, int param_5, String_conflict *param_6, int param_7, String_conflict *param_8) {
      Variant *this;
      Variant *pVVar1;
      int iVar2;
      int iVar3;
      long in_FS_OFFSET;
      bool bVar4;
      Array local_130[8];
      undefined8 local_128[8];
      Variant local_e8[24];
      Variant local_d0[24];
      Variant local_b8[24];
      Variant local_a0[24];
      Variant local_88[24];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_e8, param_3);
      Variant::Variant(local_d0, param_4);
      iVar3 = 0;
      Variant::Variant(local_b8, param_5);
      Variant::Variant(local_a0, param_6);
      Variant::Variant(local_88, param_7);
      Variant::Variant(local_70, param_8);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      Array::Array(local_130);
      iVar2 = (int)local_130;
      Array::resize(iVar2);
      pVVar1 = local_e8;
      do {
         iVar3 = iVar3 + 1;
         this(Variant * Array::operator [](iVar2));
         Variant::operator =(this, pVVar1);
         pVVar1 = pVVar1 + 0x18;
      }
 while ( iVar3 != 6 );
      String::sprintf((Array*)local_128, param_2);
      *param_1 = local_128[0];
      local_128[0] = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_128);
      Array::~Array(local_130);
      pVVar1 = (Variant*)&local_58;
      do {
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

         bVar4 = pVVar1 != local_e8;
         pVVar1 = pVVar1 + -0x18;
      }
 while ( bVar4 );
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Removing unreachable block (ram,0x00104ba0) */
   /* String vformat<int, int, int, String, String>(String const&, int const, int const, int const,
   String const, String const) */
   undefined8 *vformat<int,int,int,String,String>(undefined8 *param_1, bool *param_2, int param_3, int param_4, int param_5, String_conflict *param_6, String_conflict *param_7) {
      Variant *pVVar1;
      Variant *pVVar2;
      int iVar3;
      int iVar4;
      long in_FS_OFFSET;
      Array local_120[8];
      undefined8 local_118[8];
      Variant local_d8[24];
      Variant local_c0[24];
      Variant local_a8[24];
      Variant local_90[24];
      Variant local_78[24];
      undefined8 local_60;
      undefined1 local_58[16];
      Variant local_48[8];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_d8, param_3);
      Variant::Variant(local_c0, param_4);
      iVar4 = 0;
      Variant::Variant(local_a8, param_5);
      Variant::Variant(local_90, param_6);
      Variant::Variant(local_78, param_7);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      Array::Array(local_120);
      iVar3 = (int)local_120;
      Array::resize(iVar3);
      pVVar2 = local_d8;
      do {
         iVar4 = iVar4 + 1;
         pVVar1 = (Variant*)Array::operator [](iVar3);
         Variant::operator =(pVVar1, pVVar2);
         pVVar2 = pVVar2 + 0x18;
      }
 while ( iVar4 != 5 );
      String::sprintf((Array*)local_118, param_2);
      *param_1 = local_118[0];
      local_118[0] = 0;
      pVVar2 = local_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      Array::~Array(local_120);
      do {
         pVVar1 = pVVar2 + -0x18;
         pVVar2 = pVVar2 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar2 != local_d8 );
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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

   /* Texture3DEditorPlugin::get_class() const */
   void Texture3DEditorPlugin::get_class(void) {
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

   /* Texture3DEditor::get_class() const */
   void Texture3DEditor::get_class(void) {
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

   /* EditorInspectorPlugin3DTexture::get_class() const */
   void EditorInspectorPlugin3DTexture::get_class(void) {
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

   /* RefCounted::get_class() const */
   void RefCounted::get_class(void) {
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

   /* CallableCustomMethodPointer<Texture3DEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
   void CallableCustomMethodPointer<Texture3DEditor,void>::call(CallableCustomMethodPointer<Texture3DEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
            goto LAB_0010523f;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] == 0) goto LAB_0010523f;
         lVar1 = *(long*)( this + 0x28 );
         UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
         lVar2 = *(long*)( this + 0x40 );
         if (param_2 == 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00105218. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
               return;
            }

            goto LAB_001052f0;
         }

         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 0;
      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_0010523f:local_40 = 0;
         String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
         uitos((ulong)local_50);
         operator+((char *)
         local_48,(String_conflict*)"Invalid Object id \'";
         String::operator +(local_38, (String_conflict*)local_48);
         _err_print_error(&_LC87, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
         CowData<char32_t>::_unref(local_48);
         CowData<char32_t>::_unref(local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_001052f0:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* CallableCustomMethodPointer<Texture3DEditor, void, double>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
   void CallableCustomMethodPointer<Texture3DEditor,void,double>::call(CallableCustomMethodPointer<Texture3DEditor,void,double> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
      String_conflict local_38[8];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
      if (uVar5 < (uint)ObjectDB::slot_max) {
         while (true) {
            local_38[0] = (String_conflict)0x0;
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
            goto LAB_001054b6;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar6[1] == 0) goto LAB_001054b6;
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
               uVar3 = _LC88;
               if (cVar4 == '\0') {
                  *(undefined4*)param_4 = 2;
                  *(undefined8*)( param_4 + 4 ) = uVar3;
               }

               Variant::operator_cast_to_double(*param_1);
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Could not recover jumptable at 0x00105465. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ));
                  return;
               }

               goto LAB_00105567;
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
         LAB_001054b6:local_40 = 0;
         String::parse_latin1((String_conflict*)&local_40, "\', can\'t call method.");
         uitos((ulong)local_50);
         operator+((char *)
         local_48,(String_conflict*)"Invalid Object id \'";
         String::operator +(local_38, (String_conflict*)local_48);
         _err_print_error(&_LC87, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
         CowData<char32_t>::_unref(local_48);
         CowData<char32_t>::_unref(local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_00105567:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* RefCounted::_initialize_classv() */
   void RefCounted::_initialize_classv(void) {
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
         if ((code*)PTR__bind_methods_0010c058 != Object::_bind_methods) {
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

   /* Texture3DEditorPlugin::_initialize_classv() */
   void Texture3DEditorPlugin::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined8 local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (EditorPlugin::initialize_class() == '\0') {
            if (Node::initialize_class() == '\0') {
               Object::initialize_class();
               local_68 = 0;
               local_50 = 6;
               local_58 = "Object";
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
               local_58 = "Node";
               local_70 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               if ((code*)PTR__bind_methods_0010c050 != Node::_bind_methods) {
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
            if ((code*)PTR__bind_methods_0010c060 != Node::_bind_methods) {
               EditorPlugin::_bind_methods();
            }

            if ((code*)PTR__bind_compatibility_methods_0010c068 != Object::_bind_compatibility_methods) {
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
         local_58 = "Texture3DEditorPlugin";
         local_70 = 0;
         local_50 = 0x15;
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

   /* EditorInspectorPlugin3DTexture::_initialize_classv() */
   void EditorInspectorPlugin3DTexture::_initialize_classv(void) {
      long in_FS_OFFSET;
      undefined8 local_70;
      undefined8 local_68;
      long local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (initialize_class() == '\0') {
         if (EditorInspectorPlugin::initialize_class() == '\0') {
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

            local_58 = "RefCounted";
            local_68 = 0;
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
            local_58 = "EditorInspectorPlugin";
            local_70 = 0;
            local_50 = 0x15;
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
            if ((code*)PTR__bind_methods_0010c070 != RefCounted::_bind_methods) {
               EditorInspectorPlugin::_bind_methods();
            }

            if ((code*)PTR__bind_compatibility_methods_0010c078 != Object::_bind_compatibility_methods) {
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
         local_58 = "EditorInspectorPlugin3DTexture";
         local_70 = 0;
         local_50 = 0x1e;
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

   /* PropertyListHelper::~PropertyListHelper() */
   void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
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

                     CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x38 ));
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
               if (pvVar5 == (void*)0x0) goto LAB_00105e96;
            }

         }

         Memory::free_static(pvVar5, false);
         Memory::free_static(*(void**)( this + 0x20 ), false);
      }

      LAB_00105e96:CowData<char32_t>::_unref((CowData<char32_t>*)this);
      return;
   }

   /* RefCounted::is_class(String const&) const */
   undefined8 RefCounted::is_class(RefCounted *this, String_conflict *param_1) {
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

         if (cVar5 != '\0') goto LAB_00105feb;
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
            if (cVar5 != '\0') goto LAB_00105feb;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

      }
 else {
         LAB_00105feb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* EditorInspectorPlugin3DTexture::is_class(String const&) const */
   undefined8 EditorInspectorPlugin3DTexture::is_class(EditorInspectorPlugin3DTexture *this, String_conflict *param_1) {
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

         if (cVar5 != '\0') goto LAB_001061eb;
      }

      cVar5 = String::operator ==(param_1, "EditorInspectorPlugin3DTexture");
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
            if (cVar5 != '\0') goto LAB_001061eb;
         }

         cVar5 = String::operator ==(param_1, "EditorInspectorPlugin");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
               return uVar6;
            }

            goto LAB_001062ee;
         }

      }

      LAB_001061eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_001062ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* Node::is_class(String const&) const */
   undefined8 Node::is_class(Node *this, String_conflict *param_1) {
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

         if (cVar5 != '\0') goto LAB_001063fb;
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
            if (cVar5 != '\0') goto LAB_001063fb;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

      }
 else {
         LAB_001063fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* Texture3DEditorPlugin::is_class(String const&) const */
   undefined8 Texture3DEditorPlugin::is_class(Texture3DEditorPlugin *this, String_conflict *param_1) {
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

         if (cVar5 != '\0') goto LAB_001065fb;
      }

      cVar5 = String::operator ==(param_1, "Texture3DEditorPlugin");
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
            if (cVar5 != '\0') goto LAB_001065fb;
         }

         cVar5 = String::operator ==(param_1, "EditorPlugin");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Node::is_class((Node*)this, param_1);
               return uVar6;
            }

            goto LAB_001066fe;
         }

      }

      LAB_001065fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_001066fe:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* Control::is_class(String const&) const */
   undefined8 Control::is_class(Control *this, String_conflict *param_1) {
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

         if (cVar5 != '\0') goto LAB_0010680b;
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
            if (cVar5 != '\0') goto LAB_0010680b;
         }

         cVar5 = String::operator ==(param_1, "CanvasItem");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Node::is_class((Node*)this, param_1);
               return uVar6;
            }

            goto LAB_0010690e;
         }

      }

      LAB_0010680b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010690e:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* Texture3DEditor::is_class(String const&) const */
   undefined8 Texture3DEditor::is_class(Texture3DEditor *this, String_conflict *param_1) {
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

         if (cVar4 != '\0') goto LAB_00106a1b;
      }

      cVar4 = String::operator ==(param_1, "Texture3DEditor");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Control::is_class((Control*)this, param_1);
            return uVar5;
         }

      }
 else {
         LAB_00106a1b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return 1;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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

            goto LAB_00106bcc;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00106bcc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   /* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Node::_get_property_listv(List *param_1, bool param_2) {
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
      local_78 = &_LC51;
      local_88 = 0;
      local_90 = 0;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = &_LC51;
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

            goto LAB_00106e1c;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00106e1c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   /* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void EditorPlugin::_get_property_listv(EditorPlugin *this, List *param_1, bool param_2) {
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

            goto LAB_00107081;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00107081:local_b0 = (CowData<char32_t>*)&local_58;
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

   /* Texture3DEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Texture3DEditorPlugin::_get_property_listv(Texture3DEditorPlugin *this, List *param_1, bool param_2) {
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
      local_78 = "Texture3DEditorPlugin";
      local_70 = 0x15;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Texture3DEditorPlugin";
      local_98 = 0;
      local_70 = 0x15;
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

            goto LAB_00107331;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00107331:local_b0 = (CowData<char32_t>*)&local_58;
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

      StringName::StringName((StringName*)&local_78, "Texture3DEditorPlugin", false);
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

   /* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this, List *param_1, bool param_2) {
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

            goto LAB_001075e1;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_001075e1:local_b0 = (CowData<char32_t>*)&local_58;
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

   /* EditorInspectorPlugin3DTexture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */
   void EditorInspectorPlugin3DTexture::_get_property_listv(EditorInspectorPlugin3DTexture *this, List *param_1, bool param_2) {
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
         EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin*)this, param_1, false);
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "EditorInspectorPlugin3DTexture";
      local_70 = 0x1e;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "EditorInspectorPlugin3DTexture";
      local_98 = 0;
      local_70 = 0x1e;
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

            goto LAB_00107891;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00107891:local_b0 = (CowData<char32_t>*)&local_58;
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

      StringName::StringName((StringName*)&local_78, "EditorInspectorPlugin3DTexture", false);
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

   /* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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

            goto LAB_00107b41;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00107b41:local_b0 = (CowData<char32_t>*)&local_58;
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

      if ((code*)PTR__get_property_list_0010c080 != Object::_get_property_list) {
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

            goto LAB_00107e11;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_00107e11:local_b0 = (CowData<char32_t>*)&local_58;
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

      if ((code*)PTR__get_property_list_0010c088 != CanvasItem::_get_property_list) {
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

   /* Texture3DEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Texture3DEditor::_get_property_listv(Texture3DEditor *this, List *param_1, bool param_2) {
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
      local_78 = "Texture3DEditor";
      local_70 = 0xf;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "Texture3DEditor";
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

            goto LAB_001080e1;
         }

      }

      local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      LAB_001080e1:local_b0 = (CowData<char32_t>*)&local_58;
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

      StringName::StringName((StringName*)&local_78, "Texture3DEditor", false);
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

   /* void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element,
   DefaultAllocator>(List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::Element*) */
   void memdelete_allocator<List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::Element,DefaultAllocator>(Element *param_1) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      long *plVar6;
      long lVar7;
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x18 ));
      if (*(long*)( param_1 + 0x10 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x10 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            plVar1 = *(long**)( param_1 + 0x10 );
            if (plVar1 == (long*)0x0) {
               /* WARNING: Does not return */
               pcVar5 = (code*)invalidInstructionException();
               ( *pcVar5 )();
            }

            lVar3 = plVar1[-1];
            *(undefined8*)( param_1 + 0x10 ) = 0;
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
         }

      }

      Memory::free_static(param_1, false);
      return;
   }

   /* EditorInspectorPlugin::~EditorInspectorPlugin() */
   void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
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
            if (StringName::configured == '\0') goto LAB_00108439;
         }

         if (*(long*)( this + 0x1e8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00108439;
         }

         if (*(long*)( this + 0x1d0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00108439;
         }

         if (*(long*)( this + 0x1b8 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00108439;
         }

         if (*(long*)( this + 0x1a0 ) != 0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00108439;
         }

         if (*(long*)( this + 0x188 ) != 0) {
            StringName::unref();
         }

      }

      LAB_00108439:plVar4 = *(long**)( this + 0x180 );
      if (plVar4 != (long*)0x0) {
         do {
            pEVar1 = (Element*)*plVar4;
            if (pEVar1 == (Element*)0x0) {
               if ((int)plVar4[2] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_001084a5;
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

      LAB_001084a5:*(undefined***)this = &PTR__initialize_classv_00108820;
      Object::~Object((Object*)this);
      return;
   }

   /* EditorInspectorPlugin::~EditorInspectorPlugin() */
   void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
      ~EditorInspectorPlugin(this)
      ;;
      operator_delete(this, 0x218);
      return;
   }

   /* EditorInspectorPlugin3DTexture::~EditorInspectorPlugin3DTexture() */
   void EditorInspectorPlugin3DTexture::~EditorInspectorPlugin3DTexture(EditorInspectorPlugin3DTexture *this) {
      *(undefined***)this = &PTR__initialize_classv_00108f90;
      EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin*)this);
      return;
   }

   /* EditorInspectorPlugin3DTexture::~EditorInspectorPlugin3DTexture() */
   void EditorInspectorPlugin3DTexture::~EditorInspectorPlugin3DTexture(EditorInspectorPlugin3DTexture *this) {
      *(undefined***)this = &PTR__initialize_classv_00108f90;
      EditorInspectorPlugin::~EditorInspectorPlugin((EditorInspectorPlugin*)this);
      operator_delete(this, 0x218);
      return;
   }

   /* Texture3DEditor::_texture_rect_draw() */
   void Texture3DEditor::_GLOBAL__sub_I__texture_rect_draw(void) {
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

   /* WARNING: Control flow encountered bad instruction data */
   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Texture3DEditor, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Texture3DEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Texture3DEditor,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<Texture3DEditor, void, double>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<Texture3DEditor,void,double>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Texture3DEditor,void,double> *this) {
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
   /* EditorInspectorPlugin3DTexture::~EditorInspectorPlugin3DTexture() */
   void EditorInspectorPlugin3DTexture::~EditorInspectorPlugin3DTexture(EditorInspectorPlugin3DTexture *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* EditorInspectorPlugin::~EditorInspectorPlugin() */
   void EditorInspectorPlugin::~EditorInspectorPlugin(EditorInspectorPlugin *this) {
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
   /* Texture3DEditorPlugin::~Texture3DEditorPlugin() */
   void Texture3DEditorPlugin::~Texture3DEditorPlugin(Texture3DEditorPlugin *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* EditorPlugin::~EditorPlugin() */
   void EditorPlugin::~EditorPlugin(EditorPlugin *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

}


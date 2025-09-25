/* AudioBusesEditorPlugin::make_visible(bool) */void AudioBusesEditorPlugin::make_visible(bool param_1) {
   return;
}
/* EditorAudioBus::_hide_value_preview() */void EditorAudioBus::_hide_value_preview(void) {
   CanvasItem::hide();
   return;
}
/* EditorAudioBuses::_select_layout() */void EditorAudioBuses::_select_layout(void) {
   FileSystemDock::navigate_to_path(FileSystemDock::singleton);
   return;
}
/* EditorAudioBus::_effect_rmb(Vector2 const&, MouseButton) */void EditorAudioBus::_effect_rmb(EditorAudioBus *this, undefined8 param_2, int param_3) {
   Vector2i *pVVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 local_40;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 2) {
      lVar3 = Tree::get_selected();
      if (lVar3 != 0) {
         TreeItem::get_metadata((int)&local_38);
         iVar2 = (int)local_38;
         if (Variant::needs_deinit[(int)local_38] != '\0') {
            Variant::_clear_internal();
         }

         if (iVar2 == 2) {
            pVVar1 = *(Vector2i**)( this + 0xac8 );
            uVar4 = CanvasItem::get_local_mouse_position();
            uVar5 = Control::get_screen_position();
            local_40 = CONCAT44((float)( (ulong)uVar4 >> 0x20 ) + (float)( (ulong)uVar5 >> 0x20 ), (float)uVar4 + (float)uVar5);
            local_38 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_40);
            Window::set_position(pVVar1);
            Window::reset_size();
            local_38 = 0;
            local_30 = 0;
            ( **(code**)( **(long**)( this + 0xac8 ) + 0x240 ) )(*(long**)( this + 0xac8 ), &local_38);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_update_bus(int) */void EditorAudioBuses::_update_bus(EditorAudioBuses *this, int param_1) {
   int iVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_90;
   int local_88[4];
   int local_78[2];
   undefined1 local_70[16];
   undefined8 local_58;
   undefined1 local_50[16];
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xa20 ), 0));
   if (param_1 < iVar1) {
      plVar2 = (long*)Node::get_child((int)*(undefined8*)( this + 0xa20 ), SUB41(param_1, 0));
      StringName::StringName((StringName*)&local_90, "update_bus", false);
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      for (int i = 0; i < 3; i++) {
         local_88[i] = 0;
      }

      ( **(code**)( *plVar2 + 0x68 ) )((Variant*)local_38, plVar2, (StringName*)&local_90, 0, 0, local_88);
      if (local_88[0] == 0) {
         Variant::Variant((Variant*)local_78, (Variant*)local_38);
      }
 else {
         local_78[0] = 0;
         local_70 = (undefined1[16])0x0;
      }

      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::drop_data(Vector2 const&, Variant const&) */void EditorAudioBus::drop_data(Vector2 *param_1, Variant *param_2) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   Variant local_f0[8];
   int local_e8[8];
   int local_c8[8];
   Variant *local_a8;
   Variant *pVStack_a0;
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_Dictionary(local_f0);
   if (*(long*)( param_1 + 400 ) != 0) {
      if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar2 = *(int*)( param_1 + 0x21c );
      if (iVar2 != 1) {
         if (iVar2 == 2) {
            iVar4 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
         }
 else {
            iVar4 = -1;
            if (iVar2 == 0) {
               iVar4 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
            }

         }

         goto LAB_00100391;
      }

   }

   iVar4 = *(int*)( param_1 + 0x22c );
   LAB_00100391:Variant::Variant((Variant*)local_e8, "index");
   pVVar3 = (Variant*)Dictionary::operator [](local_f0);
   Variant::Variant((Variant*)local_c8, pVVar3);
   if ((drop_data(Vector2_const&,Variant_const&)::{lambda()
   #1
   ( iVar2 = __cxa_guard_acquire(&drop_data(Vector2_const & Variant_const & sname), iVar2 != 0) );
   {
      _scs_create((char*)&drop_data(Vector2_const & Variant_const & ::sname, true));
      __cxa_atexit(StringName::~StringName, &drop_data(Vector2_const & Variant_const & ::sname, &__dso_handle));
      __cxa_guard_release(&drop_data(Vector2_const&,Variant_const&)::{lambda()
      #1
      )
      ;;
   }

   Variant::Variant(local_88, (Variant*)local_c8);
   Variant::Variant(local_70, iVar4);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   pVVar3 = (Variant*)local_40;
   local_a8 = local_88;
   pVStack_a0 = local_70;
   ( **(code**)( *(long*)param_1 + 0xd0 ) )(param_1, &drop_data(Vector2_const & Variant_const & ::sname, &local_a8, 2));
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_88 );
   if (Variant::needs_deinit[local_c8[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_f0);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* AudioBusesEditorPlugin::handles(Object*) const */bool AudioBusesEditorPlugin::handles(AudioBusesEditorPlugin *this, Object *param_1) {
   long lVar1;
   if (param_1 != (Object*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &AudioBusLayout::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* EditorAudioBus::gui_input(Ref<InputEvent> const&) */void EditorAudioBus::gui_input(EditorAudioBus *this, Ref *param_1) {
   Vector2i *pVVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)param_1 == 0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("gui_input", "editor/editor_audio_buses.cpp", 0x242, "Condition \"p_event.is_null()\" is true.", 0, 0);
         return;
      }

   }
 else {
      pOVar4 = (Object*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventMouseButton::typeinfo, 0);
      if (pOVar4 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 != '\0') {
            iVar3 = InputEventMouseButton::get_button_index();
            if (iVar3 == 2) {
               cVar2 = InputEvent::is_pressed();
               if (cVar2 != '\0') {
                  pVVar1 = *(Vector2i**)( this + 0xac0 );
                  uVar5 = InputEventMouse::get_position();
                  uVar6 = Control::get_screen_position();
                  local_50 = CONCAT44((float)( (ulong)uVar5 >> 0x20 ) + (float)( (ulong)uVar6 >> 0x20 ), (float)uVar5 + (float)uVar6);
                  local_48 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_50);
                  Window::set_position(pVVar1);
                  Window::reset_size();
                  local_48 = 0;
                  local_40 = 0;
                  ( **(code**)( **(long**)( this + 0xac0 ) + 0x240 ) )();
               }

            }

            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(pOVar4);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static(pOVar4, false);
                     return;
                  }

                  goto LAB_00100783;
               }

            }

         }

      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   LAB_00100783:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorAudioBuses::_update_sends() */void EditorAudioBuses::_update_sends(EditorAudioBuses *this) {
   char cVar1;
   int iVar2;
   long *plVar3;
   int iVar4;
   long in_FS_OFFSET;
   long local_b0;
   int local_a8;
   undefined8 local_a4;
   int local_98[2];
   undefined1 local_90[16];
   undefined8 local_78;
   undefined1 local_70[16];
   int local_58[6];
   long local_40;
   iVar4 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      iVar2 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xa20 ), 0));
      if (iVar2 <= iVar4) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      plVar3 = (long*)Node::get_child((int)*(undefined8*)( this + 0xa20 ), SUB41(iVar4, 0));
      StringName::StringName((StringName*)&local_b0, "update_send", false);
      local_70 = (undefined1[16])0x0;
      local_78 = 0;
      local_a8 = 0;
      local_a4 = 0;
      ( **(code**)( *plVar3 + 0x68 ) )((Variant*)local_58, plVar3, (StringName*)&local_b0, 0, 0, &local_a8);
      if (local_a8 == 0) {
         Variant::Variant((Variant*)local_98, (Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_001008d3;
         LAB_001007ed:if (Variant::needs_deinit[(int)local_78] == '\0') goto LAB_001007fd;
         LAB_001008f0:Variant::_clear_internal();
         cVar1 = Variant::needs_deinit[local_98[0]];
      }
 else {
         local_98[0] = 0;
         local_90 = (undefined1[16])0x0;
         if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_001007ed;
         LAB_001008d3:Variant::_clear_internal();
         if (Variant::needs_deinit[(int)local_78] != '\0') goto LAB_001008f0;
         LAB_001007fd:cVar1 = Variant::needs_deinit[local_98[0]];
      }

      if (cVar1 != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
         StringName::unref();
      }

      iVar4 = iVar4 + 1;
   }
 while ( true );
}
/* EditorAudioMeterNotches::_update_theme_item_cache() */void EditorAudioMeterNotches::_update_theme_item_cache(void) {
   Object *pOVar1;
   char cVar2;
   undefined4 uVar3;
   int iVar4;
   Object *pOVar5;
   StringName *in_RDI;
   long in_FS_OFFSET;
   undefined8 uVar6;
   undefined8 in_XMM1_Qa;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Control::_update_theme_item_cache();
   uVar6 = Control::get_theme_color(in_RDI, (StringName*)( SceneStringNames::singleton + 0xb0 ));
   *(undefined8*)( in_RDI + 0x9d0 ) = uVar6;
   *(undefined8*)( in_RDI + 0x9d8 ) = in_XMM1_Qa;
   if ((_update_theme_item_cache()::{lambda()
   #1
   ( iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname),
     iVar4 != 0) );
   {
      _scs_create((char *)&_update_theme_item_cache()::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,
                 &_update_theme_item_cache()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_theme_item_cache()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_font((StringName *)&local_28,in_RDI);
  pOVar1 = *(Object **)(in_RDI + 0x9e0);
  pOVar5 = pOVar1;
  if (local_28 != pOVar1) {
    *(Object **)(in_RDI + 0x9e0) = local_28;
    if (local_28 == (Object *)0x0) {
      if (pOVar1 == (Object *)0x0) goto LAB_00100a36;
      cVar2 = RefCounted::unreference();
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(in_RDI + 0x9e0) = 0;
      }
      pOVar5 = local_28;
      if (pOVar1 == (Object *)0x0) goto LAB_00100a21;
      cVar2 = RefCounted::unreference();
    }
    pOVar5 = local_28;
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), pOVar5 = local_28, cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
      pOVar5 = local_28;
    }
  }
LAB_00100a21:
  if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_28), cVar2 != '\0')) {
    (**(code **)(*(long *)local_28 + 0x140))(local_28);
    Memory::free_static(local_28,false);
  }
LAB_00100a36:
  if ((_update_theme_item_cache()::
      {
         lambda()#2}::operator()()::sname == '\0') &&
     (iVar4 = __cxa_guard_acquire(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname),
     iVar4 != 0))
         {
            _scs_create((char *)&_update_theme_item_cache()::{lambda()
            #2
            __cxa_atexit(StringName::~StringName, &_update_theme_item_cache()::, {
                  lambda()
                  #2
                  __cxa_guard_release(&_update_theme_item_cache()::{lambda()#2}::operator()()::sname);
  }, uVar3 = Control::get_theme_font_size(in_RDI, (StringName*)( SceneStringNames::singleton + 0xa8 )));
                  *(undefined4*)( in_RDI + 0x9e8 ) = uVar3;
                  if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }
, /* EditorAudioMeterNotches::add_notch(float, float, bool) */, void __thiscall
EditorAudioMeterNotches::add_notch
          (EditorAudioMeterNotches *this,float param_1,float param_2,bool param_3);
            {
               long *plVar1;
               long lVar2;
               undefined8 *puVar3;
               undefined1(*pauVar4)[16];
               if (*(long*)( this + 0x9c8 ) == 0) {
                  pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x9c8 ) = pauVar4;
                  *(undefined4*)pauVar4[1] = 0;
                  *pauVar4 = (undefined1[16])0x0;
               }

               puVar3 = (undefined8*)operator_new(0x28, DefaultAllocator::alloc);
               plVar1 = *(long**)( this + 0x9c8 );
               puVar3[2] = 0;
               lVar2 = plVar1[1];
               *puVar3 = CONCAT44(param_2, param_1);
               *(bool*)( puVar3 + 1 ) = param_3;
               puVar3[3] = lVar2;
               puVar3[4] = plVar1;
               if (lVar2 != 0) {
                  *(undefined8**)( lVar2 + 0x10 ) = puVar3;
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

            /* EditorAudioBusDrop::drop_data(Vector2 const&, Variant const&) */
            void EditorAudioBusDrop::drop_data(Vector2 *param_1, Variant *param_2) {
               Variant *pVVar1;
               int iVar2;
               int iVar3;
               Variant *pVVar4;
               long in_FS_OFFSET;
               Variant local_f0[8];
               int local_e8[8];
               int local_c8[8];
               Variant *local_a8;
               Variant *pVStack_a0;
               Variant local_88[24];
               Variant local_70[24];
               undefined8 local_58;
               undefined1 local_50[16];
               long local_40[2];
               local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
               Variant::operator_cast_to_Dictionary(local_f0);
               AudioServer::get_singleton();
               iVar2 = AudioServer::get_bus_count();
               Variant::Variant((Variant*)local_e8, "index");
               pVVar4 = (Variant*)Dictionary::operator [](local_f0);
               Variant::Variant((Variant*)local_c8, pVVar4);
               if (drop_data(Vector2_const&,Variant_const&)::{lambda()
               #1
               iVar3 = __cxa_guard_acquire(&drop_data(Vector2_const & Variant_const & sname));
               if (iVar3 != 0) {
                  _scs_create((char*)&drop_data(Vector2_const & Variant_const & ::sname, true));
                  __cxa_atexit(StringName::~StringName, &drop_data(Vector2_const & Variant_const & ::sname, &__dso_handle));
                  __cxa_guard_release(&drop_data(Vector2_const&,Variant_const&)::{lambda()
                  #1
                  sname;
               }

            }

            Variant::Variant(local_88, (Variant*)local_c8);
            Variant::Variant(local_70, iVar2);
            local_58 = 0;
            local_50 = (undefined1[16])0x0;
            pVVar4 = (Variant*)local_40;
            local_a8 = local_88;
            pVStack_a0 = local_70;
            ( **(code**)( *(long*)param_1 + 0xd0 ) )(param_1, &drop_data(Vector2_const & Variant_const & ::sname, &local_a8, 2));
            do {
               pVVar1 = pVVar4 + -0x18;
               pVVar4 = pVVar4 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar4 != local_88 );
            if (Variant::needs_deinit[local_c8[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_e8[0]] != '\0') {
               Variant::_clear_internal();
            }

            Dictionary::~Dictionary((Dictionary*)local_f0);
            if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* void Ref<StyleBoxFlat>::TEMPNAMEPLACEHOLDERVALUE(Ref<StyleBox> const&) [clone .isra.0] */
         void Ref<StyleBoxFlat>::operator =(Ref<StyleBoxFlat> *this, Ref *param_1) {
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
               pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &StyleBoxFlat::typeinfo, 0);
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

         /* EditorAudioBuses::_server_save() */
         void EditorAudioBuses::_server_save(EditorAudioBuses *this) {
            char cVar1;
            Object *pOVar2;
            long in_FS_OFFSET;
            Object *local_20;
            Object *local_18;
            long local_10;
            local_10 = *(long*)( in_FS_OFFSET + 0x28 );
            AudioServer::get_singleton();
            AudioServer::generate_bus_layout();
            local_18 = (Object*)0x0;
            if (local_20 != (Object*)0x0) {
               pOVar2 = (Object*)__dynamic_cast(local_20, &Object::typeinfo, &Resource::typeinfo, 0);
               if (pOVar2 != (Object*)0x0) {
                  local_18 = pOVar2;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     local_18 = (Object*)0x0;
                  }

               }

            }

            ResourceSaver::save((Ref*)&local_18, (String*)( this + 0xa68 ), 0);
            if (local_18 != (Object*)0x0) {
               cVar1 = RefCounted::unreference();
               pOVar2 = local_18;
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(local_18);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

            if (local_20 != (Object*)0x0) {
               cVar1 = RefCounted::unreference();
               if (cVar1 != '\0') {
                  cVar1 = predelete_handler(local_20);
                  if (cVar1 != '\0') {
                     ( **(code**)( *(long*)local_20 + 0x140 ) )(local_20);
                     Memory::free_static(local_20, false);
                  }

               }

            }

            if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* EditorAudioBus::_bus_popup_pressed(int) */
         void EditorAudioBus::_bus_popup_pressed(EditorAudioBus *this, int param_1) {
            int iVar1;
            int iVar2;
            char *pcVar3;
            undefined1 uVar4;
            undefined1 *puVar5;
            long in_FS_OFFSET;
            Variant *local_78[2];
            int local_68[2];
            undefined1 local_60[16];
            undefined8 local_50;
            undefined1 local_48[16];
            long local_30;
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            if (param_1 == 2) {
               pcVar3 = (char *)&_bus_popup_pressed(int)::{lambda()
               #1
               if (_bus_popup_pressed(int)::{lambda()
               #1
               puVar5 = &_bus_popup_pressed(int)::{lambda()
               #1
               pcVar3 = (char *)&_bus_popup_pressed(int)::{lambda()
               #1
               iVar1 = __cxa_guard_acquire(&_bus_popup_pressed(int)::{lambda()
               #1
               uVar4 = 0xe9;
               if (iVar1 != 0) {
                  LAB_00101236:_scs_create(pcVar3, (bool)uVar4);
                  __cxa_atexit(StringName::~StringName, pcVar3, &__dso_handle);
                  __cxa_guard_release(puVar5);
               }

            }

         }

         else {
    if (param_1 != 1) {
      if (param_1 != 0) goto LAB_00101193;
      if (*(long *)(this + 400) == 0) {
LAB_00101268:
        iVar2 = *(int *)(this + 0x22c);
      }
      else {
        if (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0') {
          Node::_update_children_cache_impl();
        }
        iVar1 = *(int *)(this + 0x21c);
        if (iVar1 == 1) goto LAB_00101268;
        if (iVar1 == 2) {
          iVar2 = *(int *)(*(long *)(this + 400) + 0x228) + *(int *)(*(long *)(this + 400) + 0x220)
                  + *(int *)(this + 0x22c);
        }
        else {
          iVar2 = -1;
          if (iVar1 == 0) {
            iVar2 = *(int *)(this + 0x22c) + *(int *)(*(long *)(this + 400) + 0x220);
          }
        }
      }
      if (_bus_popup_pressed(int)::{lambda()
         #3
         iVar1 = __cxa_guard_acquire(&_bus_popup_pressed(int)::{lambda()
         #3
         if (iVar1 != 0) {
            _scs_create((char *)&_bus_popup_pressed(int)::{lambda()
            #3
            __cxa_atexit(StringName::~StringName,
                       &_bus_popup_pressed(int)::{lambda()
            #3
            __cxa_guard_release(&_bus_popup_pressed(int)::{lambda()
            #3
         }

      }

      Variant::Variant((Variant*)local_68, iVar2);
      local_50 = 0;
      local_48 = (undefined1[16])0x0;
      local_78[0] = (Variant*)local_68;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_bus_popup_pressed(int)::{lambda()
      #3
      if (Variant::needs_deinit[(int)local_50] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_68[0]] != '\0') {
         Variant::_clear_internal();
      }

      goto LAB_00101193;
   }

   pcVar3 = (char *)&_bus_popup_pressed(int)::{lambda()
   #2
   if (_bus_popup_pressed(int)::{lambda()
   #2
   puVar5 = &_bus_popup_pressed(int)::{lambda()
   #2
   pcVar3 = (char *)&_bus_popup_pressed(int)::{lambda()
   #2
   iVar1 = __cxa_guard_acquire(&_bus_popup_pressed(int)::{lambda()
   #2
   if (iVar1 != 0) {
      uVar4 = 0xfb;
      goto LAB_00101236;
   }

}
}local_68[0] = 0;local_68[1] = 0;local_60 = (undefined1[16])0x0;( **(code**)( *(long*)this + 0xd0 ) )(this, pcVar3, 0, 0);if (Variant::needs_deinit[local_68[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_00101193:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* EditorAudioMeterNotches::_draw_audio_notches() */void EditorAudioMeterNotches::_draw_audio_notches(EditorAudioMeterNotches *this) {
   long *plVar1;
   float fVar2;
   float fVar3;
   undefined4 uVar4;
   long lVar5;
   undefined *puVar6;
   float *pfVar7;
   long in_FS_OFFSET;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float extraout_XMM0_Db;
   float extraout_XMM0_Db_00;
   float extraout_XMM0_Db_01;
   float fVar12;
   float fVar13;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined8 local_60;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar8 = (float)( **(code**)( **(long**)( this + 0x9e0 ) + 0x218 ) )(*(long**)( this + 0x9e0 ), *(undefined4*)( this + 0x9e8 ));
   if (( *(undefined8**)( this + 0x9c8 ) != (undefined8*)0x0 ) && ( pfVar7 = (float*)**(undefined8**)( this + 0x9c8 ) ),pfVar7 != (float*)0x0) {
      do {
         while (true) {
            fVar9 = (float)EditorScale::get_scale();
            fVar10 = roundf(fVar9);
            fVar12 = _LC37 - *pfVar7;
            Control::get_size();
            fVar9 = *(float*)( this + 0x9fc );
            fVar2 = *(float*)( this + 0x9f0 );
            fVar3 = *(float*)( this + 0x9f8 );
            fVar11 = (float)EditorScale::get_scale();
            fVar13 = _LC37 - *pfVar7;
            local_50 = CONCAT44(fVar9 + ( ( extraout_XMM0_Db - fVar3 ) - fVar9 ) * fVar12, fVar11 * fVar2);
            Control::get_size();
            local_48 = ( ulong )(uint)(( ( extraout_XMM0_Db_00 - *(float*)( this + 0x9f8 ) ) - *(float*)( this + 0x9fc ) ) * fVar13 + *(float*)( this + 0x9fc )) << 0x20;
            CanvasItem::draw_line((Vector2*)this, (Vector2*)&local_48, (Color*)&local_50, fVar10, SUB81(this + 0x9d0, 0));
            if (*(char*)( pfVar7 + 2 ) != '\0') break;
            LAB_00101578:pfVar7 = *(float**)( pfVar7 + 4 );
            if (pfVar7 == (float*)0x0) goto LAB_00101838;
         }
;
         uVar4 = *(undefined4*)( this + 0x9e8 );
         local_68 = &_LC38;
         local_70 = 0;
         local_60 = 2;
         String::parse_latin1((StrRange*)&local_70);
         String::num((double)ABS(pfVar7[1]), (int)(String*)&local_78);
         String::operator +((String*)&local_68, (String*)&local_78);
         fVar13 = _LC37 - *pfVar7;
         Control::get_size();
         fVar9 = *(float*)( this + 0x9fc );
         fVar2 = *(float*)( this + 0x9f8 );
         fVar12 = _LC39 * fVar8;
         fVar3 = *(float*)( this + 0x9f0 );
         fVar10 = *(float*)( this + 0x9f4 );
         fVar11 = (float)EditorScale::get_scale();
         local_48 = CONCAT44(fVar9 + ( ( extraout_XMM0_Db_01 - fVar2 ) - fVar9 ) * fVar13 + fVar12, fVar11 * ( fVar3 + fVar10 ));
         CanvasItem::draw_string(this, this + 0x9e0, (Vector2*)&local_48, (String*)&local_68, 0, uVar4, this + 0x9d0, 3, 0, 0);
         puVar6 = local_68;
         if (local_68 != (undefined*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (undefined*)0x0;
               Memory::free_static(puVar6 + -0x10, false);
            }

         }

         lVar5 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
            }

         }

         lVar5 = local_70;
         if (local_70 == 0) goto LAB_00101578;
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00101578;
         local_70 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         pfVar7 = *(float**)( pfVar7 + 4 );
      }
 while ( pfVar7 != (float*)0x0 );
   }

   LAB_00101838:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioMeterNotches::get_minimum_size() const */undefined8 EditorAudioMeterNotches::get_minimum_size(void) {
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   long lVar4;
   undefined *puVar5;
   char cVar6;
   undefined4 uVar7;
   int iVar8;
   undefined8 in_RDX;
   undefined8 in_RSI;
   StringName *in_RDI;
   long lVar9;
   long in_FS_OFFSET;
   float fVar10;
   float fVar11;
   float local_98;
   float local_8c;
   Object *local_70;
   long local_68;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (const::{lambda()
   #1
   iVar8 = __cxa_guard_acquire(&const::{lambda()
   #1
   &const::{lambda();
   #1
   if (iVar8 != 0) {
      _scs_create((char *)&const::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,&const::{lambda()
      #1
      __cxa_guard_release(&const::{lambda()
      #1
   }

}
Control::get_theme_font((StringName*)&local_70, in_RDI);if (const::{lambda()#2iVar8 = __cxa_guard_acquire(&const::{lambda()#2if (iVar8 != 0) {
   _scs_create((char *)&const::{lambda()
   #2
   __cxa_atexit(StringName::~StringName,&const::{lambda()
   #2
   __cxa_guard_release(&const::{lambda()
   #2
}
}uVar7 = Control::get_theme_font_size(in_RDI, (StringName*)( SceneStringNames::singleton + 0xa8 ));fVar10 = (float)( **(code**)( *(long*)local_70 + 0x218 ) )();local_98 = *(float*)( in_RDI + 0x9fc ) + *(float*)( in_RDI + 0x9f8 );if (*(long**)( in_RDI + 0x9c8 ) == (long*)0x0) {
   local_8c = 0.0;
}
 else {
   lVar9 = **(long**)( in_RDI + 0x9c8 );
   local_8c = 0.0;
   if (lVar9 != 0) {
      do {
         while (pOVar3 = local_70,*(char*)( lVar9 + 8 ) != '\0') {
            local_60 = 0;
            pcVar2 = *(code**)( *(long*)local_70 + 0x288 );
            local_58 = &_LC38;
            local_50 = 2;
            String::parse_latin1((StrRange*)&local_60);
            String::num((double)ABS(*(float*)( lVar9 + 4 )), (int)(String*)&local_68);
            String::operator +((String*)&local_58, (String*)&local_68);
            fVar11 = (float)( *pcVar2 )(pOVar3, (String*)&local_58, 0, uVar7, 3, 0, 0);
            puVar5 = local_58;
            if (local_8c <= fVar11) {
               local_8c = fVar11;
            }

            if (local_58 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
               }

            }

            lVar4 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

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

            local_98 = local_98 + fVar10;
            lVar9 = *(long*)( lVar9 + 0x10 );
            if (lVar9 == 0) goto LAB_00101aa7;
         }
;
         lVar9 = *(long*)( lVar9 + 0x10 );
      }
 while ( lVar9 != 0 );
   }

}
LAB_00101aa7:fVar10 = *(float*)( in_RDI + 0x9f0 );fVar11 = *(float*)( in_RDI + 0x9f4 );if (local_70 != (Object*)0x0) {
   cVar6 = RefCounted::unreference();
   if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_70);
      if (cVar6 != '\0') {
         ( **(code**)( *(long*)local_70 + 0x140 ) )(local_70);
         Memory::free_static(local_70, false);
      }

   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return CONCAT44(local_98, fVar10 + fVar11 + local_8c);
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBus::_update_visible_channels() */void EditorAudioBus::_update_visible_channels(EditorAudioBus *this) {
   char cVar1;
   EditorAudioBus *pEVar2;
   int iVar3;
   if (*(int*)( this + 0xa28 ) < 1) {
      iVar3 = 0;
   }
 else {
      iVar3 = 0;
      do {
         cVar1 = CanvasItem::is_visible();
         if (cVar1 == '\0') {
            CanvasItem::show();
         }

         cVar1 = CanvasItem::is_visible();
         if (cVar1 == '\0') {
            CanvasItem::show();
         }

         iVar3 = iVar3 + 1;
      }
 while ( iVar3 < *(int*)( this + 0xa28 ) );
      if (iVar3 == 4) {
         return;
      }

   }

   pEVar2 = this + (long)iVar3 * 0x20;
   do {
      cVar1 = CanvasItem::is_visible();
      if (cVar1 != '\0') {
         CanvasItem::hide();
      }

      cVar1 = CanvasItem::is_visible();
      if (cVar1 != '\0') {
         CanvasItem::hide();
      }

      pEVar2 = pEVar2 + 0x20;
   }
 while ( pEVar2 != this + ( ( ulong )(3 - iVar3) + (long)iVar3 ) * 0x20 + 0x20 );
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBus::_normalized_volume_to_scaled_db(float) */undefined8 EditorAudioBus::_normalized_volume_to_scaled_db(float param_1) {
   undefined4 in_XMM0_Db;
   double dVar1;
   if (__LC41 < param_1) {
      return CONCAT44(in_XMM0_Db, param_1 * __LC42 - __LC43);
   }

   if (param_1 < _LC44) {
      dVar1 = (double)param_1 * __LC45 - __LC46;
      return CONCAT44((int)( (ulong)dVar1 >> 0x20 ), (float)dVar1);
   }

   dVar1 = pow((double)param_1 - _LC48, _LC47);
   return CONCAT44((int)( ( ulong )(dVar1 * __LC49) >> 0x20 ), (float)( dVar1 * __LC49 ));
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBus::_scaled_db_to_normalized_volume(float) */ulong EditorAudioBus::_scaled_db_to_normalized_volume(float param_1) {
   float fVar1;
   undefined1 in_register_00001204[12];
   undefined1 extraout_var[12];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   if (__LC50 < (double)param_1) {
      auVar4._0_4_ = ( param_1 + __LC43 ) / __LC42;
      auVar4._4_12_ = in_register_00001204;
      return auVar4._0_8_;
   }

   if (_LC51 <= param_1) {
      if (0.0 <= param_1) {
         fVar1 = powf(param_1 / __LC54, _LC55);
         auVar2._0_4_ = fVar1 + _LC37;
         auVar2._4_12_ = extraout_var;
         return auVar2._0_8_;
      }

      fVar1 = powf(ABS(param_1) / __LC54, _LC55);
      return ( ulong )(uint)(( _LC37 - ( fVar1 + _LC37 ) ) + _LC37);
   }

   auVar3._0_4_ = ( param_1 + _LC209._4_4_ ) / __LC53;
   auVar3._4_12_ = in_register_00001204;
   return auVar3._0_8_;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBusDrop::_notification(int) */void EditorAudioBusDrop::_notification(int param_1) {
   long lVar1;
   char cVar2;
   int iVar3;
   int in_ESI;
   undefined4 in_register_0000003c;
   Ref *pRVar4;
   long in_FS_OFFSET;
   undefined8 in_XMM1_Qa;
   Object *local_60;
   undefined8 local_58;
   undefined4 local_50;
   float fStack_4c;
   undefined8 local_48;
   undefined8 local_40;
   long local_30;
   pRVar4 = (Ref*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_ESI == 0x29) {
      if (pRVar4[0x9c8] != (Ref)0x0) goto LAB_00101f4f;
      pRVar4[0x9c8] = (Ref)0x1;
      lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
      joined_r0x00101fbe:if (local_30 == lVar1) {
         CanvasItem::queue_redraw();
         return;
      }

   }
 else {
      if (in_ESI < 0x2a) {
         if (in_ESI == 0x16) {
            LAB_00101f75:if (pRVar4[0x9c8] != (Ref)0x0) {
               pRVar4[0x9c8] = (Ref)0x0;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               goto joined_r0x00101fbe;
            }

         }
 else if (in_ESI == 0x1e) {
            local_40 = Control::get_size();
            local_48 = 0;
            if ((_notification(int)::{lambda()
            #1
            (iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()
            #1
            iVar3 != 0))
            {
               _scs_create((char *)&_notification(int)::{lambda()
               #1
               __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
               #1
               __cxa_guard_release(&_notification(int)::{lambda()
               #1
            }

            Control::get_theme_stylebox((StringName*)&local_60, (StringName*)pRVar4);
            CanvasItem::draw_style_box(pRVar4, (Rect2*)&local_60);
            if (( ( local_60 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
            Memory::free_static(local_60, false);
         }

         if (pRVar4[0x9c8] != (Ref)0x0) {
            if ((_notification(int)::{lambda()
            #2
            (iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()
            #2
            iVar3 != 0))
            {
               _scs_create((char *)&_notification(int)::{lambda()
               #2
               __cxa_atexit(StringName::~StringName,
                         &_notification(int)::{lambda()
               #2
               __cxa_guard_release(&_notification(int)::{lambda()
               #2
            }

            local_58 = Control::get_theme_color
                               ((StringName *)pRVar4,
                                (StringName *)&_notification(int)::{lambda()
            #2
            )
            ;;
            fStack_4c = (float)( (ulong)in_XMM1_Qa >> 0x20 );
            _local_50 = CONCAT44((float)( (double)fStack_4c * __LC58 ), (int)in_XMM1_Qa);
            local_40 = Control::get_size();
            local_48 = 0;
            CanvasItem::draw_rect((Rect2*)pRVar4, (Color*)&local_48, SUB81(&local_58, 0), _LC40, false);
         }

      }

   }

   else if = (in_ESI == 0x2a);
   goto LAB_00101f75;
   LAB_00101f4f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBusDrop::EditorAudioBusDrop() */void EditorAudioBusDrop::EditorAudioBusDrop(EditorAudioBusDrop *this) {
   Control::Control((Control*)this);
   this[0x9c8] = (EditorAudioBusDrop)0x0;
   *(undefined***)this = &PTR__initialize_classv_0012d710;
   return;
}
/* AudioBusesEditorPlugin::AudioBusesEditorPlugin(EditorAudioBuses*) */void AudioBusesEditorPlugin::AudioBusesEditorPlugin(AudioBusesEditorPlugin *this, EditorAudioBuses *param_1) {
   Node::Node((Node*)this);
   *(code**)this = EditorUndoRedoManager::add_undo_methodp;
   *(undefined2*)( this + 0x408 ) = 0;
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x420 ), "_forward_canvas_gui_input", false);
   this[0x428] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_forward_canvas_draw_over_viewport", false);
   this[0x440] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_forward_canvas_force_draw_over_viewport", false);
   this[0x458] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   StringName::StringName((StringName*)( this + 0x468 ), "_forward_3d_gui_input", false);
   this[0x470] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x478 ) = 0;
   StringName::StringName((StringName*)( this + 0x480 ), "_forward_3d_draw_over_viewport", false);
   this[0x488] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x490 ) = 0;
   StringName::StringName((StringName*)( this + 0x498 ), "_forward_3d_force_draw_over_viewport", false);
   this[0x4a0] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x4a8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4b0 ), "_get_plugin_name", false);
   this[0x4b8] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x4c0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4c8 ), "_get_plugin_icon", false);
   this[0x4d0] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x4d8 ) = 0;
   StringName::StringName((StringName*)( this + 0x4e0 ), "_has_main_screen", false);
   this[0x4e8] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x4f0 ) = 0;
   StringName::StringName((StringName*)( this + 0x4f8 ), "_make_visible", false);
   this[0x500] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x508 ) = 0;
   StringName::StringName((StringName*)( this + 0x510 ), "_edit", false);
   this[0x518] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x520 ) = 0;
   StringName::StringName((StringName*)( this + 0x528 ), "_handles", false);
   this[0x530] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x538 ) = 0;
   StringName::StringName((StringName*)( this + 0x540 ), "_get_state", false);
   this[0x548] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x550 ) = 0;
   StringName::StringName((StringName*)( this + 0x558 ), "_set_state", false);
   this[0x560] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x568 ) = 0;
   StringName::StringName((StringName*)( this + 0x570 ), "_clear", false);
   this[0x578] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x580 ) = 0;
   StringName::StringName((StringName*)( this + 0x588 ), "_get_unsaved_status", false);
   this[0x590] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x598 ) = 0;
   StringName::StringName((StringName*)( this + 0x5a0 ), "_save_external_data", false);
   this[0x5a8] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x5b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5b8 ), "_apply_changes", false);
   this[0x5c0] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x5c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x5d0 ), "_get_breakpoints", false);
   this[0x5d8] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x5e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x5e8 ), "_set_window_layout", false);
   this[0x5f0] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x5f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x600 ), "_get_window_layout", false);
   this[0x608] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x610 ) = 0;
   StringName::StringName((StringName*)( this + 0x618 ), "_build", false);
   this[0x620] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x628 ) = 0;
   StringName::StringName((StringName*)( this + 0x630 ), "_enable_plugin", false);
   this[0x638] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x640 ) = 0;
   StringName::StringName((StringName*)( this + 0x648 ), "_disable_plugin", false);
   this[0x650] = (AudioBusesEditorPlugin)0x0;
   *(undefined8*)( this + 0x658 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0012da78;
   *(EditorAudioBuses**)( this + 0x660 ) = param_1;
   return;
}
/* EditorAudioMeterNotches::_notification(int) */void EditorAudioMeterNotches::_notification(EditorAudioMeterNotches *this, int param_1) {
   if (param_1 != 0x1e) {
      return;
   }

   _draw_audio_notches(this);
   return;
}
/* EditorAudioBuses::_request_drop_end() */void EditorAudioBuses::_request_drop_end(EditorAudioBuses *this) {
   Vector2 *pVVar1;
   long *plVar2;
   code *pcVar3;
   int iVar4;
   Control *this_00;
   long lVar5;
   long in_FS_OFFSET;
   long local_50;
   EditorAudioBuses local_48[16];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xa28 ) == 0) {
      iVar4 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xa20 ), 0));
      if (iVar4 != 0) {
         this_00 = (Control*)operator_new(0x9d0, "");
         Control::Control(this_00);
         this_00[0x9c8] = (Control)0x0;
         *(undefined***)this_00 = &PTR__initialize_classv_0012d710;
         postinitialize_handler((Object*)this_00);
         *(Control**)( this + 0xa28 ) = this_00;
         Node::add_child(*(undefined8*)( this + 0xa20 ), this_00, 0, 0);
         pVVar1 = *(Vector2**)( this + 0xa28 );
         lVar5 = Node::get_child((int)*(undefined8*)( this + 0xa20 ), false);
         if (lVar5 != 0) {
            __dynamic_cast(lVar5, &Object::typeinfo, &Control::typeinfo, 0);
         }

         local_38 = Control::get_size();
         Control::set_custom_minimum_size(pVVar1);
         plVar2 = *(long**)( this + 0xa28 );
         pcVar3 = *(code**)( *plVar2 + 0x108 );
         create_custom_callable_function_pointer<EditorAudioBuses,int,int>(local_48, (char*)this, (_func_void_int_int*)"&EditorAudioBuses::_drop_at_index");
         StringName::StringName((StringName*)&local_50, "dropped", false);
         ( *pcVar3 )(plVar2, (StringName*)&local_50, local_48, 1);
         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
         }

         Callable::~Callable((Callable*)local_48);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::update_send() */void EditorAudioBus::update_send(EditorAudioBus *this) {
   long *plVar1;
   String *pSVar2;
   char *pcVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OptionButton::clear();
   if (this[0xb09] == (EditorAudioBus)0x0) {
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xab0 ), 0));
      AudioServer::get_singleton();
      if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
         Node::_update_children_cache_impl();
      }

      iVar7 = 0;
      AudioServer::get_bus_send((int)&local_70);
      do {
         if (*(long*)( this + 400 ) == 0) {
            LAB_00102920:iVar5 = *(int*)( this + 0x22c );
         }
 else {
            if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
               Node::_update_children_cache_impl();
            }

            iVar5 = *(int*)( this + 0x21c );
            if (iVar5 == 1) goto LAB_00102920;
            if (iVar5 == 2) {
               iVar5 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
            }
 else {
               if (iVar5 != 0) goto LAB_001028e5;
               iVar5 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
            }

         }

         if (iVar5 <= iVar7) goto LAB_001028e5;
         AudioServer::get_singleton();
         AudioServer::get_bus_name((int)(String*)&local_58);
         StringName::StringName((StringName*)&local_68, (String*)&local_58, false);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }

         }

         pSVar2 = *(String**)( this + 0xab0 );
         if (local_68 == 0) {
            LAB_00102a49:local_60 = 0;
            iVar5 = (int)&local_60;
         }
 else {
            pcVar3 = *(char**)( local_68 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( local_68 + 0x10 ) + -0x10 );
               if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_00102a49;
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_00102a49;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar8 = lVar4 == lVar6;
                  if (bVar8) {
                     *plVar1 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               iVar5 = (int)&local_60;
               if (lVar6 != -1) {
                  local_60 = *(long*)( local_68 + 0x10 );
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
               iVar5 = (int)(StrRange*)&local_60;
            }

         }

         OptionButton::add_item(pSVar2, iVar5);
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

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         iVar7 = iVar7 + 1;
      }
 while ( true );
   }

   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xab0 ), 0));
   pSVar2 = *(String**)( this + 0xab0 );
   local_60 = 0;
   local_58 = "";
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Speakers";
   local_68 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_68);
   TTR((String*)&local_58, (String*)&local_68);
   Button::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00102818:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_001028e5:OptionButton::select((int)*(undefined8*)( this + 0xab0 ));
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   goto LAB_00102818;
}
/* EditorAudioBus::can_drop_data(Vector2 const&, Variant const&) const */char EditorAudioBus::can_drop_data(Vector2 *param_1, Variant *param_2) {
   int iVar1;
   char cVar2;
   Variant *this;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Variant local_a8[8];
   Variant local_a0[8];
   int local_98[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 400 ) == 0) {
      LAB_00102c80:iVar3 = *(int*)( param_1 + 0x22c );
      LAB_00102bca:cVar2 = '\0';
      if (iVar3 == 0) goto LAB_00102c30;
   }
 else {
      if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar3 = *(int*)( param_1 + 0x21c );
      if (iVar3 == 1) goto LAB_00102c80;
      if (iVar3 == 2) {
         iVar3 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
         goto LAB_00102bca;
      }

      if (iVar3 == 0) {
         iVar3 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
         goto LAB_00102bca;
      }

   }

   Variant::operator_cast_to_Dictionary(local_a8);
   Variant::Variant((Variant*)local_98, "type");
   cVar2 = Dictionary::has(local_a8);
   if (cVar2 == '\0') {
      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      LAB_00102c1e:cVar2 = '\0';
   }
 else {
      Variant::Variant((Variant*)local_78, "type");
      Dictionary::operator [](local_a8);
      Variant::operator_cast_to_String(local_a0);
      cVar2 = String::operator ==((String*)local_a0, "move_audio_bus");
      if (cVar2 != '\0') {
         Variant::Variant((Variant*)local_58, "index");
         this(Variant * Dictionary::operator [](local_a8));
         iVar3 = Variant::operator_cast_to_int(this);
         if (*(long*)( param_1 + 400 ) == 0) {
            LAB_00102de8:iVar4 = *(int*)( param_1 + 0x22c );
         }
 else {
            if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
               Node::_update_children_cache_impl();
            }

            iVar1 = *(int*)( param_1 + 0x21c );
            if (iVar1 == 1) goto LAB_00102de8;
            if (iVar1 == 2) {
               iVar4 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
            }
 else {
               iVar4 = -1;
               if (iVar1 == 0) {
                  iVar4 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
               }

            }

         }

         cVar2 = iVar3 != iVar4;
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_98[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (cVar2 == '\0') goto LAB_00102c1e;
      param_1[0xb0a] = (Vector2)0x1;
   }

   Dictionary::~Dictionary((Dictionary*)local_a8);
   LAB_00102c30:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return cVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */undefined4 EditorAudioBus::can_drop_data_fw(Vector2 *param_1, Variant *param_2, Control *param_3) {
   char cVar1;
   undefined4 uVar2;
   long lVar3;
   long in_FS_OFFSET;
   Variant local_88[8];
   Variant local_80[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_Dictionary(local_88);
   Variant::Variant((Variant*)local_78, "type");
   uVar2 = Dictionary::has(local_88);
   if ((char)uVar2 == '\0') {
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         uVar2 = 0;
         Variant::_clear_internal();
         goto LAB_00102f8d;
      }

   }
 else {
      Variant::Variant((Variant*)local_58, "type");
      Dictionary::operator [](local_88);
      Variant::operator_cast_to_String(local_80);
      cVar1 = String::operator !=((String*)local_80, "audio_bus_effect");
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (cVar1 == '\0') {
         lVar3 = Tree::get_item_at_position(*(Vector2**)( param_1 + 0xb00 ));
         if (lVar3 != 0) {
            Tree::set_drop_mode_flags((int)*(undefined8*)( param_1 + 0xb00 ));
            goto LAB_00102f8d;
         }

      }

   }

   uVar2 = 0;
   LAB_00102f8d:Dictionary::~Dictionary((Dictionary*)local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBusDrop::can_drop_data(Vector2 const&, Variant const&) const */undefined4 EditorAudioBusDrop::can_drop_data(Vector2 *param_1, Variant *param_2) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   Variant aVStack_88[8];
   Variant local_80[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_Dictionary(aVStack_88);
   Variant::Variant((Variant*)local_78, "type");
   uVar1 = Dictionary::has(aVStack_88);
   if ((char)uVar1 != '\0') {
      Variant::Variant((Variant*)local_58, "type");
      Dictionary::operator [](aVStack_88);
      Variant::operator_cast_to_String(local_80);
      uVar1 = String::operator ==((String*)local_80, "move_audio_bus");
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)aVStack_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_save_as_layout() */void EditorAudioBuses::_save_as_layout(EditorAudioBuses *this) {
   long *plVar1;
   String *pSVar2;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xa70 ), 4);
   local_48 = "";
   pSVar2 = *(String**)( this + 0xa70 );
   local_50 = 0;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_50);
   local_48 = "Save Audio Bus Layout As...";
   local_58 = 0;
   local_40 = 0x1b;
   String::parse_latin1((StrRange*)&local_58);
   TTR((String*)&local_48, (String*)&local_58);
   Window::set_title(pSVar2);
   pcVar4 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   lVar3 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   EditorFileDialog::set_current_path(*(String**)( this + 0xa70 ));
   EditorFileDialog::popup_file_dialog();
   this[0xa78] = (EditorAudioBuses)0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_new_layout() */void EditorAudioBuses::_new_layout(EditorAudioBuses *this) {
   long *plVar1;
   String *pSVar2;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xa70 ), 4);
   local_48 = "";
   pSVar2 = *(String**)( this + 0xa70 );
   local_50 = 0;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_50);
   local_48 = "Location for New Layout...";
   local_58 = 0;
   local_40 = 0x1a;
   String::parse_latin1((StrRange*)&local_58);
   TTR((String*)&local_48, (String*)&local_58);
   Window::set_title(pSVar2);
   pcVar4 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   lVar3 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   EditorFileDialog::set_current_path(*(String**)( this + 0xa70 ));
   EditorFileDialog::popup_file_dialog();
   this[0xa78] = (EditorAudioBuses)0x1;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_load_layout() */void EditorAudioBuses::_load_layout(EditorAudioBuses *this) {
   long *plVar1;
   String *pSVar2;
   long lVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xa70 ), 0);
   local_48 = "";
   pSVar2 = *(String**)( this + 0xa70 );
   local_50 = 0;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_50);
   local_48 = "Open Audio Bus Layout";
   local_58 = 0;
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_58);
   TTR((String*)&local_48, (String*)&local_58);
   Window::set_title(pSVar2);
   pcVar4 = local_48;
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   lVar3 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   EditorFileDialog::set_current_path(*(String**)( this + 0xa70 ));
   EditorFileDialog::popup_file_dialog();
   this[0xa78] = (EditorAudioBuses)0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioBusesEditorPlugin::~AudioBusesEditorPlugin() */void AudioBusesEditorPlugin::~AudioBusesEditorPlugin(AudioBusesEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_0012da78;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   return;
}
/* AudioBusesEditorPlugin::~AudioBusesEditorPlugin() */void AudioBusesEditorPlugin::~AudioBusesEditorPlugin(AudioBusesEditorPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_0012da78;
   EditorPlugin::~EditorPlugin((EditorPlugin*)this);
   operator_delete(this, 0x668);
   return;
}
/* EditorAudioBus::_send_selected(int) */void EditorAudioBus::_send_selected(int param_1) {
   Variant *pVVar1;
   char cVar2;
   int iVar3;
   int iVar4;
   Object *pOVar5;
   StringName *pSVar6;
   Variant *pVVar7;
   int iVar8;
   undefined4 in_register_0000003c;
   long lVar9;
   long in_FS_OFFSET;
   int local_148;
   undefined8 local_118;
   long local_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   int local_88[6];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   lVar9 = CONCAT44(in_register_0000003c, param_1);
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1*)( lVar9 + 0xb08 ) = 1;
   pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
   local_108 = "";
   local_110 = 0;
   local_100 = 0;
   String::parse_latin1((StrRange*)&local_110);
   local_108 = "Select Audio Bus Send";
   local_118 = 0;
   local_100 = 0x15;
   String::parse_latin1((StrRange*)&local_118);
   TTR((String*)&local_108, (String*)&local_118);
   EditorUndoRedoManager::create_action(pOVar5, (String*)&local_108, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   iVar8 = (int)(StrRange*)&local_110;
   OptionButton::get_item_text(iVar8);
   if (*(long*)( lVar9 + 400 ) == 0) {
      LAB_00103c00:iVar3 = *(int*)( lVar9 + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( lVar9 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( lVar9 + 0x21c );
      if (iVar4 == 1) goto LAB_00103c00;
      if (iVar4 == 2) {
         iVar3 = *(int*)( *(long*)( lVar9 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 ) + *(int*)( lVar9 + 0x22c );
      }
 else {
         iVar3 = -1;
         if (iVar4 == 0) {
            iVar3 = *(int*)( lVar9 + 0x22c ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_send", false);
   pSVar6 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_d8, iVar3);
   Variant::Variant(local_c0, (String*)&local_110);
   local_a8 = 0;
   local_a0 = (undefined1[16])0x0;
   local_f8 = (Variant*)&local_d8;
   pVStack_f0 = local_c0;
   EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar6, (Variant**)&local_108, (int)&local_f8);
   pVVar7 = local_90;
   do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar7 != (Variant*)&local_d8 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   AudioServer::get_singleton();
   if (( *(long*)( lVar9 + 400 ) != 0 ) && ( *(char*)( *(long*)( lVar9 + 400 ) + 0x1d0 ) != '\0' )) {
      Node::_update_children_cache_impl();
   }

   AudioServer::get_bus_send(iVar8);
   if (*(long*)( lVar9 + 400 ) == 0) {
      LAB_00103c10:iVar4 = *(int*)( lVar9 + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( lVar9 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar8 = *(int*)( lVar9 + 0x21c );
      if (iVar8 == 1) goto LAB_00103c10;
      if (iVar8 == 2) {
         iVar4 = *(int*)( *(long*)( lVar9 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 ) + *(int*)( lVar9 + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar8 == 0) {
            iVar4 = *(int*)( lVar9 + 0x22c ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_send", false);
   pSVar6 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, iVar4);
   Variant::Variant((Variant*)&local_70, (StringName*)&local_110);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   iVar8 = (int)(Variant*)&local_d8;
   local_d8 = (Variant*)local_88;
   pVStack_d0 = (Variant*)&local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar5, pSVar6, (Variant**)&local_108, iVar8);
   pVVar7 = (Variant*)local_40;
   do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar7 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( ( ( local_108 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_110 != 0 ) ) )) {
      StringName::unref();
   }

   if (*(long*)( lVar9 + 400 ) == 0) {
      LAB_00103bf0:local_148 = *(int*)( lVar9 + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( lVar9 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( lVar9 + 0x21c );
      if (iVar4 == 1) goto LAB_00103bf0;
      if (iVar4 == 2) {
         local_148 = *(int*)( *(long*)( lVar9 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 ) + *(int*)( lVar9 + 0x22c );
      }
 else {
         local_148 = -1;
         if (iVar4 == 0) {
            local_148 = *(int*)( lVar9 + 0x22c ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar6 = *(StringName**)( lVar9 + 0xb10 );
   Variant::Variant((Variant*)local_88, local_148);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar6, (Variant**)&local_108, iVar8);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[local_88[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_88[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( lVar9 + 400 ) != 0) {
      if (*(char*)( *(long*)( lVar9 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( lVar9 + 0x21c );
      if (iVar4 != 1) {
         if (iVar4 == 2) {
            iVar3 = *(int*)( *(long*)( lVar9 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 ) + *(int*)( lVar9 + 0x22c );
         }
 else {
            iVar3 = -1;
            if (iVar4 == 0) {
               iVar3 = *(int*)( lVar9 + 0x22c ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 );
            }

         }

         goto LAB_00103ad7;
      }

   }

   iVar3 = *(int*)( lVar9 + 0x22c );
   LAB_00103ad7:StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar6 = *(StringName**)( lVar9 + 0xb10 );
   Variant::Variant((Variant*)local_88, iVar3);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_undo_methodp(pOVar5, pSVar6, (Variant**)&local_108, iVar8);
   if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar5, 0));
   *(undefined1*)( lVar9 + 0xb08 ) = 0;
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioBuses::_add_bus() */void EditorAudioBuses::_add_bus(void) {
   char cVar1;
   int iVar2;
   Object *pOVar3;
   StringName *pSVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   Variant *local_88[2];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar3 = (Object*)EditorUndoRedoManager::get_singleton();
   local_a0 = 0;
   local_98 = "";
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_a0);
   local_98 = "Add Audio Bus";
   local_a8 = 0;
   local_90 = 0xd;
   String::parse_latin1((StrRange*)&local_a8);
   TTR((String*)&local_98, (String*)&local_a8);
   EditorUndoRedoManager::create_action(pOVar3, (String*)&local_98, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   AudioServer::get_singleton();
   iVar2 = AudioServer::get_bus_count();
   StringName::StringName((StringName*)&local_98, "set_bus_count", false);
   pSVar4 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_78, iVar2 + 1);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   local_88[0] = (Variant*)local_78;
   EditorUndoRedoManager::add_do_methodp(pOVar3, pSVar4, (Variant**)&local_98, (int)local_88);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   AudioServer::get_singleton();
   iVar2 = AudioServer::get_bus_count();
   StringName::StringName((StringName*)&local_98, "set_bus_count", false);
   pSVar4 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_78, iVar2);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   local_88[0] = (Variant*)local_78;
   EditorUndoRedoManager::add_undo_methodp(pOVar3, pSVar4, (Variant**)&local_98, (int)local_88);
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

   if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar3, 0));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBus::_volume_changed(float) */void EditorAudioBus::_volume_changed(EditorAudioBus *this, float param_1) {
   Variant *pVVar1;
   char cVar2;
   int iVar3;
   undefined8 uVar4;
   Object *pOVar5;
   StringName *pSVar6;
   Variant *pVVar7;
   Variant *pVVar8;
   int iVar9;
   int iVar10;
   long in_FS_OFFSET;
   float fVar11;
   double dVar12;
   float fVar13;
   int local_e8;
   undefined8 local_c8;
   undefined8 local_c0;
   char *local_b8;
   undefined8 local_b0;
   Variant *local_a8;
   Variant *pVStack_a0;
   int local_88[6];
   int local_70[2];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   fVar13 = __LC41;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xb08] != (EditorAudioBus)0x0) goto LAB_00104091;
   this[0xb08] = (EditorAudioBus)0x1;
   if (fVar13 < param_1) {
      fVar13 = param_1 * __LC42 - __LC43;
   }
 else if (_LC44 <= param_1) {
      dVar12 = pow((double)param_1 - _LC48, _LC47);
      fVar13 = (float)( dVar12 * __LC49 );
   }
 else {
      fVar13 = (float)( (double)param_1 * __LC45 - __LC46 );
   }

   uVar4 = Input::get_singleton();
   cVar2 = Input::is_key_pressed(uVar4, 0x400016);
   if (cVar2 != '\0') {
      fVar11 = roundf(fVar13);
      fVar11 = (float)_scaled_db_to_normalized_volume(fVar11);
      Range::set_value((double)fVar11);
   }

   pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
   local_c8 = 0;
   local_b0 = 0;
   local_b8 = "";
   String::parse_latin1((StrRange*)&local_c8);
   local_b8 = "Change Audio Bus Volume";
   local_c0 = 0;
   local_b0 = 0x17;
   String::parse_latin1((StrRange*)&local_c0);
   TTR((String*)&local_b8, (String*)&local_c0);
   EditorUndoRedoManager::create_action(pOVar5, (String*)&local_b8, 1, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (*(long*)( this + 400 ) == 0) {
      LAB_001046a0:iVar10 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar9 = *(int*)( this + 0x21c );
      if (iVar9 == 1) goto LAB_001046a0;
      if (iVar9 == 2) {
         iVar10 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar10 = -1;
         if (iVar9 == 0) {
            iVar10 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_b8, "set_bus_volume_db", false);
   pSVar6 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, iVar10);
   Variant::Variant((Variant*)local_70, fVar13);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   iVar9 = (int)&local_a8;
   local_a8 = (Variant*)local_88;
   pVStack_a0 = (Variant*)local_70;
   EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar6, (Variant**)&local_b8, iVar9);
   pVVar8 = (Variant*)local_40;
   pVVar7 = pVVar8;
   do {
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar7 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar10 = AudioServer::get_singleton();
   if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
      Node::_update_children_cache_impl();
   }

   fVar13 = (float)AudioServer::get_bus_volume_db(iVar10);
   if (*(long*)( this + 400 ) == 0) {
      LAB_001046d0:iVar3 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar10 = *(int*)( this + 0x21c );
      if (iVar10 == 1) goto LAB_001046d0;
      if (iVar10 == 2) {
         iVar3 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar3 = -1;
         if (iVar10 == 0) {
            iVar3 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_b8, "set_bus_volume_db", false);
   pSVar6 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, iVar3);
   Variant::Variant((Variant*)local_70, fVar13);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   local_a8 = (Variant*)local_88;
   pVStack_a0 = (Variant*)local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar5, pSVar6, (Variant**)&local_b8, iVar9);
   do {
      pVVar7 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_001046c0:local_e8 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar10 = *(int*)( this + 0x21c );
      if (iVar10 == 1) goto LAB_001046c0;
      if (iVar10 == 2) {
         local_e8 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         local_e8 = -1;
         if (iVar10 == 0) {
            local_e8 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_b8, "_update_bus", false);
   pSVar6 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, local_e8);
   local_70[0] = 0;
   local_70[1] = 0;
   local_68 = (undefined1[16])0x0;
   local_a8 = (Variant*)local_88;
   EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar6, (Variant**)&local_b8, iVar9);
   if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_001046b0:iVar3 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar10 = *(int*)( this + 0x21c );
      if (iVar10 == 1) goto LAB_001046b0;
      if (iVar10 == 2) {
         iVar3 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar3 = -1;
         if (iVar10 == 0) {
            iVar3 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_b8, "_update_bus", false);
   pSVar6 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, iVar3);
   local_70[0] = 0;
   local_70[1] = 0;
   local_68 = (undefined1[16])0x0;
   local_a8 = (Variant*)local_88;
   EditorUndoRedoManager::add_undo_methodp(pOVar5, pSVar6, (Variant**)&local_b8, iVar9);
   if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar5, 0));
   this[0xb08] = (EditorAudioBus)0x0;
   LAB_00104091:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::_solo_toggled() */void EditorAudioBus::_solo_toggled(EditorAudioBus *this) {
   Variant *pVVar1;
   char cVar2;
   bool bVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   Object *pOVar7;
   StringName *pSVar8;
   Variant *pVVar9;
   long in_FS_OFFSET;
   int local_150;
   undefined8 local_118;
   undefined8 local_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   int local_88[6];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xb08] = (EditorAudioBus)0x1;
   pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
   local_110 = 0;
   local_100 = 0;
   local_108 = "";
   String::parse_latin1((StrRange*)&local_110);
   local_108 = "Toggle Audio Bus Solo";
   local_118 = 0;
   local_100 = 0x15;
   String::parse_latin1((StrRange*)&local_118);
   TTR((String*)&local_108, (String*)&local_118);
   EditorUndoRedoManager::create_action(pOVar7, (String*)&local_108, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   bVar3 = (bool)BaseButton::is_pressed();
   if (*(long*)( this + 400 ) == 0) {
      LAB_00104f00:iVar4 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 == 1) goto LAB_00104f00;
      if (iVar5 == 2) {
         iVar4 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar5 == 0) {
            iVar4 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_solo", false);
   pSVar8 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_d8, iVar4);
   Variant::Variant(local_c0, bVar3);
   local_a8 = 0;
   local_a0 = (undefined1[16])0x0;
   local_f8 = (Variant*)&local_d8;
   pVStack_f0 = local_c0;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar8, (Variant**)&local_108, (int)&local_f8);
   pVVar9 = local_90;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar9 != (Variant*)&local_d8 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar5 = AudioServer::get_singleton();
   if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
      Node::_update_children_cache_impl();
   }

   bVar3 = (bool)AudioServer::is_bus_solo(iVar5);
   if (*(long*)( this + 400 ) == 0) {
      LAB_00104f10:iVar4 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 == 1) goto LAB_00104f10;
      if (iVar5 == 2) {
         iVar4 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar5 == 0) {
            iVar4 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_solo", false);
   pSVar8 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, iVar4);
   Variant::Variant((Variant*)&local_70, bVar3);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   iVar5 = (int)(Variant*)&local_d8;
   local_d8 = (Variant*)local_88;
   pVStack_d0 = (Variant*)&local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   pVVar9 = (Variant*)local_40;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar9 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_00104ef0:local_150 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( this + 0x21c );
      if (iVar4 == 1) goto LAB_00104ef0;
      if (iVar4 == 2) {
         local_150 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         local_150 = -1;
         if (iVar4 == 0) {
            local_150 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar8 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, local_150);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[local_88[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_88[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) != 0) {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( this + 0x21c );
      if (iVar4 != 1) {
         if (iVar4 == 2) {
            iVar6 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
         }
 else {
            iVar6 = -1;
            if (iVar4 == 0) {
               iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
            }

         }

         goto LAB_00104dd2;
      }

   }

   iVar6 = *(int*)( this + 0x22c );
   LAB_00104dd2:StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar8 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, iVar6);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
   this[0xb08] = (EditorAudioBus)0x0;
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioBus::_mute_toggled() */void EditorAudioBus::_mute_toggled(EditorAudioBus *this) {
   Variant *pVVar1;
   char cVar2;
   bool bVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   Object *pOVar7;
   StringName *pSVar8;
   Variant *pVVar9;
   long in_FS_OFFSET;
   int local_150;
   undefined8 local_118;
   undefined8 local_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   int local_88[6];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xb08] = (EditorAudioBus)0x1;
   pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
   local_110 = 0;
   local_100 = 0;
   local_108 = "";
   String::parse_latin1((StrRange*)&local_110);
   local_108 = "Toggle Audio Bus Mute";
   local_118 = 0;
   local_100 = 0x15;
   String::parse_latin1((StrRange*)&local_118);
   TTR((String*)&local_108, (String*)&local_118);
   EditorUndoRedoManager::create_action(pOVar7, (String*)&local_108, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   bVar3 = (bool)BaseButton::is_pressed();
   if (*(long*)( this + 400 ) == 0) {
      LAB_001056e0:iVar4 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 == 1) goto LAB_001056e0;
      if (iVar5 == 2) {
         iVar4 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar5 == 0) {
            iVar4 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_mute", false);
   pSVar8 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_d8, iVar4);
   Variant::Variant(local_c0, bVar3);
   local_a8 = 0;
   local_a0 = (undefined1[16])0x0;
   local_f8 = (Variant*)&local_d8;
   pVStack_f0 = local_c0;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar8, (Variant**)&local_108, (int)&local_f8);
   pVVar9 = local_90;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar9 != (Variant*)&local_d8 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar5 = AudioServer::get_singleton();
   if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
      Node::_update_children_cache_impl();
   }

   bVar3 = (bool)AudioServer::is_bus_mute(iVar5);
   if (*(long*)( this + 400 ) == 0) {
      LAB_001056f0:iVar4 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 == 1) goto LAB_001056f0;
      if (iVar5 == 2) {
         iVar4 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar5 == 0) {
            iVar4 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_mute", false);
   pSVar8 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, iVar4);
   Variant::Variant((Variant*)&local_70, bVar3);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   iVar5 = (int)(Variant*)&local_d8;
   local_d8 = (Variant*)local_88;
   pVStack_d0 = (Variant*)&local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   pVVar9 = (Variant*)local_40;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar9 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_001056d0:local_150 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( this + 0x21c );
      if (iVar4 == 1) goto LAB_001056d0;
      if (iVar4 == 2) {
         local_150 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         local_150 = -1;
         if (iVar4 == 0) {
            local_150 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar8 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, local_150);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[local_88[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_88[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) != 0) {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( this + 0x21c );
      if (iVar4 != 1) {
         if (iVar4 == 2) {
            iVar6 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
         }
 else {
            iVar6 = -1;
            if (iVar4 == 0) {
               iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
            }

         }

         goto LAB_001055b2;
      }

   }

   iVar6 = *(int*)( this + 0x22c );
   LAB_001055b2:StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar8 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, iVar6);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
   this[0xb08] = (EditorAudioBus)0x0;
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioBus::_bypass_toggled() */void EditorAudioBus::_bypass_toggled(EditorAudioBus *this) {
   Variant *pVVar1;
   char cVar2;
   bool bVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   Object *pOVar7;
   StringName *pSVar8;
   Variant *pVVar9;
   long in_FS_OFFSET;
   int local_150;
   undefined8 local_118;
   undefined8 local_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   int local_88[6];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xb08] = (EditorAudioBus)0x1;
   pOVar7 = (Object*)EditorUndoRedoManager::get_singleton();
   local_110 = 0;
   local_100 = 0;
   local_108 = "";
   String::parse_latin1((StrRange*)&local_110);
   local_108 = "Toggle Audio Bus Bypass Effects";
   local_118 = 0;
   local_100 = 0x1f;
   String::parse_latin1((StrRange*)&local_118);
   TTR((String*)&local_108, (String*)&local_118);
   EditorUndoRedoManager::create_action(pOVar7, (String*)&local_108, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   bVar3 = (bool)BaseButton::is_pressed();
   if (*(long*)( this + 400 ) == 0) {
      LAB_00105ec0:iVar4 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 == 1) goto LAB_00105ec0;
      if (iVar5 == 2) {
         iVar4 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar5 == 0) {
            iVar4 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_bypass_effects", false);
   pSVar8 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_d8, iVar4);
   Variant::Variant(local_c0, bVar3);
   local_a8 = 0;
   local_a0 = (undefined1[16])0x0;
   local_f8 = (Variant*)&local_d8;
   pVStack_f0 = local_c0;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar8, (Variant**)&local_108, (int)&local_f8);
   pVVar9 = local_90;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar9 != (Variant*)&local_d8 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar5 = AudioServer::get_singleton();
   if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
      Node::_update_children_cache_impl();
   }

   bVar3 = (bool)AudioServer::is_bus_bypassing_effects(iVar5);
   if (*(long*)( this + 400 ) == 0) {
      LAB_00105ed0:iVar4 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 == 1) goto LAB_00105ed0;
      if (iVar5 == 2) {
         iVar4 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar4 = -1;
         if (iVar5 == 0) {
            iVar4 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "set_bus_bypass_effects", false);
   pSVar8 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, iVar4);
   Variant::Variant((Variant*)&local_70, bVar3);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   iVar5 = (int)(Variant*)&local_d8;
   local_d8 = (Variant*)local_88;
   pVStack_d0 = (Variant*)&local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   pVVar9 = (Variant*)local_40;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar9 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_00105eb0:local_150 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( this + 0x21c );
      if (iVar4 == 1) goto LAB_00105eb0;
      if (iVar4 == 2) {
         local_150 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         local_150 = -1;
         if (iVar4 == 0) {
            local_150 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar8 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, local_150);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_do_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[local_88[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_88[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) != 0) {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( this + 0x21c );
      if (iVar4 != 1) {
         if (iVar4 == 2) {
            iVar6 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
         }
 else {
            iVar6 = -1;
            if (iVar4 == 0) {
               iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
            }

         }

         goto LAB_00105d92;
      }

   }

   iVar6 = *(int*)( this + 0x22c );
   LAB_00105d92:StringName::StringName((StringName*)&local_108, "_update_bus", false);
   pSVar8 = *(StringName**)( this + 0xb10 );
   Variant::Variant((Variant*)local_88, iVar6);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_undo_methodp(pOVar7, pSVar8, (Variant**)&local_108, iVar5);
   if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar7, 0));
   this[0xb08] = (EditorAudioBus)0x0;
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioBus::_effect_edited() [clone .part.0] */void EditorAudioBus::_effect_edited(EditorAudioBus *this) {
   Variant *pVVar1;
   Vector2i *pVVar2;
   undefined1 auVar3[16];
   char cVar4;
   bool bVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   Object *this_00;
   StringName *pSVar10;
   Variant *pVVar11;
   int iVar12;
   int iVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   undefined8 uVar15;
   undefined8 uVar16;
   float extraout_XMM1_Db;
   undefined8 local_e8;
   undefined8 local_e0;
   char *local_d8;
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar9 = Tree::get_edited();
   if (lVar9 == 0) goto LAB_00106617;
   local_a0 = (undefined1[16])0x0;
   local_a8 = 0;
   iVar13 = (int)(Variant*)&local_c8;
   TreeItem::get_metadata(iVar13);
   cVar4 = Variant::operator ==((Variant*)&local_c8, (Variant*)&local_a8);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar4 != '\0') {
      uVar15 = Tree::get_item_rect(*(TreeItem**)( this + 0xb00 ), (int)lVar9, -1);
      pVVar2 = *(Vector2i**)( this + 0xab8 );
      uVar16 = Control::get_screen_position();
      local_c8 = (Variant*)CONCAT44((float)( (ulong)uVar16 >> 0x20 ) + (float)( (ulong)uVar15 >> 0x20 ) + extraout_XMM1_Db, (float)uVar16 + (float)uVar15 + 0.0);
      local_a8 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_c8);
      Window::set_position(pVVar2);
      Window::reset_size();
      local_a8 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_a0._8_8_;
      local_a0 = auVar3 << 0x40;
      ( **(code**)( **(long**)( this + 0xab8 ) + 0x240 ) )(*(long**)( this + 0xab8 ), (Variant*)&local_a8);
      goto LAB_00106617;
   }

   TreeItem::get_metadata((int)(Variant*)&local_a8);
   iVar6 = Variant::operator_cast_to_int((Variant*)&local_a8);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }

   this[0xb08] = (EditorAudioBus)0x1;
   this_00 = (Object*)EditorUndoRedoManager::get_singleton();
   local_e0 = 0;
   local_d8 = "";
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_e0);
   local_e8 = 0;
   local_d8 = "Select Audio Bus Send";
   local_d0 = 0x15;
   String::parse_latin1((StrRange*)&local_e8);
   TTR((String*)&local_d8, (String*)&local_e8);
   EditorUndoRedoManager::create_action(this_00, (String*)&local_d8, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   bVar5 = (bool)TreeItem::is_checked((int)lVar9);
   if (*(long*)( this + 400 ) == 0) {
      LAB_00106760:iVar7 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar8 = *(int*)( this + 0x21c );
      if (iVar8 == 1) goto LAB_00106760;
      if (iVar8 == 2) {
         iVar7 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar7 = -1;
         if (iVar8 == 0) {
            iVar7 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_d8, "set_bus_effect_enabled", false);
   pSVar10 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_a8, iVar7);
   Variant::Variant(local_90, iVar6);
   Variant::Variant(local_78, bVar5);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_c8 = (Variant*)&local_a8;
   pVStack_c0 = local_90;
   local_b8 = local_78;
   EditorUndoRedoManager::add_do_methodp(this_00, pSVar10, (Variant**)&local_d8, iVar13);
   pVVar14 = local_48;
   pVVar11 = pVVar14;
   do {
      pVVar1 = pVVar11 + -0x18;
      pVVar11 = pVVar11 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar11 != (Variant*)&local_a8 );
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar8 = AudioServer::get_singleton();
   if (*(long*)( this + 400 ) == 0) {
      LAB_001067a0:iVar12 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar7 = *(int*)( this + 0x21c );
      if (iVar7 == 1) goto LAB_001067a0;
      if (iVar7 == 2) {
         iVar12 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar12 = -1;
         if (iVar7 == 0) {
            iVar12 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   bVar5 = (bool)AudioServer::is_bus_effect_enabled(iVar8, iVar12);
   if (*(long*)( this + 400 ) == 0) {
      LAB_00106790:iVar7 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar8 = *(int*)( this + 0x21c );
      if (iVar8 == 1) goto LAB_00106790;
      if (iVar8 == 2) {
         iVar7 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar7 = -1;
         if (iVar8 == 0) {
            iVar7 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_d8, "set_bus_effect_enabled", false);
   pSVar10 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_a8, iVar7);
   Variant::Variant(local_90, iVar6);
   Variant::Variant(local_78, bVar5);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_c8 = (Variant*)&local_a8;
   pVStack_c0 = local_90;
   local_b8 = local_78;
   EditorUndoRedoManager::add_undo_methodp(this_00, pSVar10, (Variant**)&local_d8, iVar13);
   do {
      pVVar11 = pVVar14 + -0x18;
      pVVar14 = pVVar14 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar11] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar14 != (Variant*)&local_a8 );
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_00106770:iVar6 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar13 = *(int*)( this + 0x21c );
      if (iVar13 == 1) goto LAB_00106770;
      if (iVar13 == 2) {
         iVar6 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar6 = -1;
         if (iVar13 == 0) {
            iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_d8, "_update_bus", false);
   EditorUndoRedoManager::add_do_method<int>((EditorUndoRedoManager*)this_00, *(Object**)( this + 0xb10 ), (StringName*)&local_d8, iVar6);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 400 ) == 0) {
      LAB_00106780:iVar6 = *(int*)( this + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar13 = *(int*)( this + 0x21c );
      if (iVar13 == 1) goto LAB_00106780;
      if (iVar13 == 2) {
         iVar6 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
      }
 else {
         iVar6 = -1;
         if (iVar13 == 0) {
            iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_d8, "_update_bus", false);
   EditorUndoRedoManager::add_undo_method<int>((EditorUndoRedoManager*)this_00, *(Object**)( this + 0xb10 ), (StringName*)&local_d8, iVar6);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
   this[0xb08] = (EditorAudioBus)0x0;
   LAB_00106617:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::_effect_edited() */void EditorAudioBus::_effect_edited(EditorAudioBus *this) {
   if (this[0xb08] != (EditorAudioBus)0x0) {
      return;
   }

   _effect_edited(this);
   return;
}
/* EditorAudioBus::get_drag_data_fw(Vector2 const&, Control*) */Vector2 *EditorAudioBus::get_drag_data_fw(Vector2 *param_1, Control *param_2) {
   int iVar1;
   long lVar2;
   Variant *pVVar3;
   Label *this;
   int iVar4;
   long in_FS_OFFSET;
   Dictionary local_a8[8];
   undefined8 local_a0;
   int local_98[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = Tree::get_item_at_position(*(Vector2**)( param_2 + 0xb00 ));
   if (lVar2 == 0) {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      goto LAB_00106971;
   }

   TreeItem::get_metadata((int)(Variant*)local_98);
   if (local_98[0] == 2) {
      Dictionary::Dictionary(local_a8);
      Variant::Variant((Variant*)local_58, "audio_bus_effect");
      Variant::Variant((Variant*)local_78, "type");
      pVVar3 = (Variant*)Dictionary::operator []((Variant*)local_a8);
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

      if (*(long*)( param_2 + 400 ) == 0) {
         LAB_00106c30:iVar4 = *(int*)( param_2 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( param_2 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar1 = *(int*)( param_2 + 0x21c );
         if (iVar1 == 1) goto LAB_00106c30;
         if (iVar1 == 2) {
            iVar4 = *(int*)( *(long*)( param_2 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_2 + 400 ) + 0x220 ) + *(int*)( param_2 + 0x22c );
         }
 else {
            iVar4 = -1;
            if (iVar1 == 0) {
               iVar4 = *(int*)( param_2 + 0x22c ) + *(int*)( *(long*)( param_2 + 400 ) + 0x220 );
            }

         }

      }

      Variant::Variant((Variant*)local_58, iVar4);
      Variant::Variant((Variant*)local_78, "bus");
      pVVar3 = (Variant*)Dictionary::operator []((Variant*)local_a8);
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

      Variant::Variant((Variant*)local_58, "effect");
      pVVar3 = (Variant*)Dictionary::operator []((Variant*)local_a8);
      Variant::operator =(pVVar3, (Variant*)local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      this(Label * operator_new(0xad8, ""));
      local_a0 = 0;
      Label::Label(this, (String*)&local_a0);
      postinitialize_handler((Object*)this);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      TreeItem::get_text((int)(String*)&local_a0);
      Label::set_text((String*)this);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      Node::set_auto_translate_mode(this, 2);
      Control::set_drag_preview(*(Control**)( param_2 + 0xb00 ));
      Variant::Variant((Variant*)param_1, local_a8);
      Dictionary::~Dictionary(local_a8);
   }
 else {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }

   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_00106971:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_drop_at_index(int, int) */void EditorAudioBuses::_drop_at_index(EditorAudioBuses *this, int param_1, int param_2) {
   Variant *pVVar1;
   Object *pOVar2;
   StringName *pSVar3;
   Variant *pVVar4;
   long in_FS_OFFSET;
   undefined8 local_118;
   undefined8 local_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar2 = (Object*)EditorUndoRedoManager::get_singleton();
   local_108 = "";
   local_110 = 0;
   local_100 = 0;
   String::parse_latin1((StrRange*)&local_110);
   local_118 = 0;
   local_108 = "Move Audio Bus";
   local_100 = 0xe;
   String::parse_latin1((StrRange*)&local_118);
   TTR((String*)&local_108, (String*)&local_118);
   EditorUndoRedoManager::create_action(pOVar2, (String*)&local_108, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   StringName::StringName((StringName*)&local_108, "move_bus", false);
   pSVar3 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_d8, param_1);
   Variant::Variant(local_c0, param_2);
   local_a0 = (undefined1[16])0x0;
   local_a8 = 0;
   local_f8 = (Variant*)&local_d8;
   pVStack_f0 = local_c0;
   EditorUndoRedoManager::add_do_methodp(pOVar2, pSVar3, (Variant**)&local_108, (int)&local_f8);
   pVVar4 = local_90;
   do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar4 != (Variant*)&local_d8 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_1 < param_2) {
      param_2 = param_2 + -1;
   }
 else {
      param_1 = param_1 + 1;
   }

   StringName::StringName((StringName*)&local_108, "move_bus", false);
   pSVar3 = (StringName*)AudioServer::get_singleton();
   Variant::Variant(local_88, param_2);
   Variant::Variant(local_70, param_1);
   local_50 = (undefined1[16])0x0;
   pVVar4 = (Variant*)local_40;
   local_58 = 0;
   local_d8 = local_88;
   pVStack_d0 = local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar2, pSVar3, (Variant**)&local_108, (int)(Variant*)&local_d8);
   do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar4 != local_88 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorUndoRedoManager::commit_action(SUB81(pOVar2, 0));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_reset_bus_volume(Object*) */void EditorAudioBuses::_reset_bus_volume(EditorAudioBuses *this, Object *param_1) {
   Variant *pVVar1;
   char cVar2;
   code *pcVar3;
   int iVar4;
   long lVar5;
   Object *pOVar6;
   StringName *pSVar7;
   Variant *pVVar8;
   long in_FS_OFFSET;
   float fVar9;
   int local_154;
   undefined8 local_118;
   undefined8 local_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   int local_88[6];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar5 = __dynamic_cast(param_1, &Object::typeinfo, &EditorAudioBus::typeinfo, 0);
   if (*(long*)( lVar5 + 400 ) != 0) {
      if (*(char*)( *(long*)( lVar5 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar4 = *(int*)( lVar5 + 0x21c );
      if (iVar4 != 1) {
         if (iVar4 == 2) {
            local_154 = *(int*)( *(long*)( lVar5 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar5 + 400 ) + 0x220 ) + *(int*)( lVar5 + 0x22c );
         }
 else {
            local_154 = -1;
            if (iVar4 == 0) {
               local_154 = *(int*)( lVar5 + 0x22c ) + *(int*)( *(long*)( lVar5 + 400 ) + 0x220 );
            }

         }

         goto LAB_001070c4;
      }

   }

   local_154 = *(int*)( lVar5 + 0x22c );
   LAB_001070c4:pOVar6 = (Object*)EditorUndoRedoManager::get_singleton();
   local_110 = 0;
   local_100 = 0;
   local_108 = "";
   String::parse_latin1((StrRange*)&local_110);
   local_108 = "Reset Bus Volume";
   local_118 = 0;
   local_100 = 0x10;
   String::parse_latin1((StrRange*)&local_118);
   TTR((String*)&local_108, (String*)&local_118);
   EditorUndoRedoManager::create_action(pOVar6, (String*)&local_108, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   StringName::StringName((StringName*)&local_108, "set_bus_volume_db", false);
   pSVar7 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_d8, local_154);
   Variant::Variant(local_c0, 0.0);
   local_a0 = (undefined1[16])0x0;
   local_a8 = 0;
   local_f8 = (Variant*)&local_d8;
   pVStack_f0 = local_c0;
   EditorUndoRedoManager::add_do_methodp(pOVar6, pSVar7, (Variant**)&local_108, (int)&local_f8);
   pVVar8 = local_90;
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != (Variant*)&local_d8 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar4 = AudioServer::get_singleton();
   fVar9 = (float)AudioServer::get_bus_volume_db(iVar4);
   StringName::StringName((StringName*)&local_108, "set_bus_volume_db", false);
   pSVar7 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)local_88, local_154);
   Variant::Variant((Variant*)&local_70, fVar9);
   local_50 = (undefined1[16])0x0;
   pVVar8 = (Variant*)local_40;
   local_58 = 0;
   iVar4 = (int)(Variant*)&local_d8;
   local_d8 = (Variant*)local_88;
   pVStack_d0 = (Variant*)&local_70;
   EditorUndoRedoManager::add_undo_methodp(pOVar6, pSVar7, (Variant**)&local_108, iVar4);
   do {
      pVVar1 = pVVar8 + -0x18;
      pVVar8 = pVVar8 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar8 != (Variant*)local_88 );
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "_update_bus", false);
   Variant::Variant((Variant*)local_88, local_154);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_do_methodp(pOVar6, (StringName*)this, (Variant**)&local_108, iVar4);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[local_88[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[local_88[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_108, "_update_bus", false);
   Variant::Variant((Variant*)local_88, local_154);
   local_70 = 0;
   local_68 = (undefined1[16])0x0;
   local_d8 = (Variant*)local_88;
   EditorUndoRedoManager::add_undo_methodp(pOVar6, (StringName*)this, (Variant**)&local_108, iVar4);
   if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar6, 0));
   return;
}
/* EditorAudioBus::update_bus() [clone .part.0] */void EditorAudioBus::update_bus(EditorAudioBus *this) {
   long *plVar1;
   Object *pOVar2;
   char *pcVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   undefined8 uVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   long in_FS_OFFSET;
   float fVar11;
   undefined8 local_78;
   Object *local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xb08] = (EditorAudioBus)0x1;
   if (*(long*)( this + 400 ) != 0) {
      if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar5 = *(int*)( this + 0x21c );
      if (iVar5 != 1) {
         if (iVar5 == 2) {
            iVar10 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
         }
 else {
            iVar10 = -1;
            if (iVar5 == 0) {
               iVar10 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
            }

         }

         goto LAB_0010757d;
      }

   }

   iVar10 = *(int*)( this + 0x22c );
   LAB_0010757d:iVar5 = AudioServer::get_singleton();
   fVar11 = (float)AudioServer::get_bus_volume_db(iVar5);
   fVar11 = (float)_scaled_db_to_normalized_volume(fVar11);
   Range::set_value((double)fVar11);
   uVar7 = *(undefined8*)( this + 0xa10 );
   AudioServer::get_singleton();
   AudioServer::get_bus_name((int)(CowData<char32_t>*)&local_68);
   LineEdit::set_text(uVar7, (CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (this[0xb09] != (EditorAudioBus)0x0) {
      LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xa10 ), 0));
   }

   uVar7 = *(undefined8*)( this + 0xae8 );
   iVar8 = 0;
   iVar5 = AudioServer::get_singleton();
   AudioServer::is_bus_solo(iVar5);
   BaseButton::set_pressed(SUB81(uVar7, 0));
   uVar7 = *(undefined8*)( this + 0xaf0 );
   iVar5 = AudioServer::get_singleton();
   AudioServer::is_bus_mute(iVar5);
   BaseButton::set_pressed(SUB81(uVar7, 0));
   uVar7 = *(undefined8*)( this + 0xaf8 );
   iVar5 = AudioServer::get_singleton();
   AudioServer::is_bus_bypassing_effects(iVar5);
   BaseButton::set_pressed(SUB81(uVar7, 0));
   Tree::clear();
   iVar5 = Tree::create_item(*(TreeItem**)( this + 0xb00 ), 0);
   while (true) {
      iVar6 = AudioServer::get_singleton();
      iVar6 = AudioServer::get_bus_effect_count(iVar6);
      if (iVar6 <= iVar8) break;
      iVar6 = AudioServer::get_singleton();
      AudioServer::get_bus_effect((int)(StrRange*)&local_70, iVar6);
      uVar7 = Tree::create_item(*(TreeItem**)( this + 0xb00 ), iVar5);
      TreeItem::set_cell_mode(uVar7, 0, 1);
      iVar9 = (int)uVar7;
      TreeItem::set_editable(iVar9, false);
      iVar6 = AudioServer::get_singleton();
      AudioServer::is_bus_effect_enabled(iVar6, iVar10);
      TreeItem::set_checked(iVar9, false);
      Resource::get_name();
      TreeItem::set_text(uVar7, 0, (CowData<char32_t>*)&local_68);
      pcVar3 = local_68;
      if (local_68 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = (char*)0x0;
            Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
         }

      }

      Variant::Variant((Variant*)local_58, iVar8);
      TreeItem::set_metadata(iVar9, (Variant*)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_70 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         pOVar2 = local_70;
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_70);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      iVar8 = iVar8 + 1;
   }
;
   uVar7 = Tree::create_item(*(TreeItem**)( this + 0xb00 ), iVar5);
   TreeItem::set_cell_mode(uVar7, 0, 4);
   TreeItem::set_editable((int)uVar7, false);
   TreeItem::set_selectable((int)uVar7, false);
   local_68 = "";
   local_70 = (Object*)0x0;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Add Effect";
   local_78 = 0;
   local_60 = 10;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   TreeItem::set_text(uVar7, 0, (CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   update_send(this);
   this[0xb08] = (EditorAudioBus)0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::update_bus() */void EditorAudioBus::update_bus(EditorAudioBus *this) {
   if (this[0xb08] == (EditorAudioBus)0x0) {
      update_bus(this);
      return;
   }

   return;
}
/* EditorAudioBus::_effect_selected() */void EditorAudioBus::_effect_selected(EditorAudioBus *this) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   String *local_98;
   undefined8 local_90;
   undefined *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = Tree::get_selected();
   if (lVar4 != 0) {
      this[0xb08] = (EditorAudioBus)0x1;
      local_50 = (undefined1[16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      TreeItem::get_metadata((int)(Variant*)local_78);
      cVar2 = Variant::operator !=((Variant*)local_78, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (cVar2 != '\0') {
         TreeItem::get_metadata((int)(Variant*)local_58);
         Variant::operator_cast_to_int((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar3 = AudioServer::get_singleton();
         if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
            Node::_update_children_cache_impl();
         }

         AudioServer::get_bus_effect((int)&local_98, iVar3);
         pOVar1 = EditorNode::singleton;
         if (local_98 != (String*)0x0) {
            local_90 = 0;
            local_88 = &_LC2;
            local_80 = 0;
            String::parse_latin1((StrRange*)&local_90);
            EditorNode::push_item(pOVar1, local_98, SUB81((StrRange*)&local_90, 0));
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            if (( ( local_98 != (String*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_98 + 0x140 ))(local_98);
            Memory::free_static(local_98, false);
         }

      }

   }

   this[0xb08] = (EditorAudioBus)0x0;
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBus::drop_data_fw(Vector2 const&, Variant const&, Control*) */void EditorAudioBus::drop_data_fw(Vector2 *param_1, Variant *param_2, Control *param_3) {
   Variant *pVVar1;
   int iVar2;
   Object *pOVar3;
   char cVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   long lVar11;
   Variant *pVVar12;
   Object *this;
   StringName *pSVar13;
   int iVar14;
   Variant *pVVar15;
   long in_FS_OFFSET;
   Variant local_210[8];
   undefined8 local_208;
   Object *local_200;
   char *local_1f8;
   undefined8 local_1f0;
   int local_1e8[8];
   Variant *local_1c8;
   Variant *pVStack_1c0;
   Variant *local_1a8;
   Variant *pVStack_1a0;
   Variant *local_198;
   Variant local_190[24];
   undefined8 local_178;
   undefined1 local_170[16];
   Variant local_160[8];
   Variant local_158[24];
   Variant local_140[24];
   undefined8 local_128;
   undefined1 local_120[16];
   Variant local_110[8];
   Variant *local_108;
   Variant *pVStack_100;
   Variant *local_f8;
   Variant local_f0[24];
   Variant local_d8[24];
   undefined8 local_c0;
   undefined1 local_b8[16];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::operator_cast_to_Dictionary(local_210);
   lVar11 = Tree::get_item_at_position(*(Vector2**)( param_1 + 0xb00 ));
   if (lVar11 == 0) goto LAB_00108608;
   iVar6 = Tree::get_drop_section_at_position(*(Vector2**)( param_1 + 0xb00 ));
   TreeItem::get_metadata((int)(Variant*)local_1e8);
   Variant::Variant((Variant*)&local_1c8, "bus");
   pVVar12 = (Variant*)Dictionary::operator [](local_210);
   iVar7 = Variant::operator_cast_to_int(pVVar12);
   if (Variant::needs_deinit[(int)local_1c8] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)&local_1c8, "effect");
   pVVar12 = (Variant*)Dictionary::operator [](local_210);
   iVar8 = Variant::operator_cast_to_int(pVVar12);
   if (Variant::needs_deinit[(int)local_1c8] != '\0') {
      Variant::_clear_internal();
   }

   iVar9 = -1;
   if (local_1e8[0] == 2) {
      iVar9 = Variant::operator_cast_to_int((Variant*)local_1e8);
      iVar9 = ( uint )(0 < iVar6) + iVar9;
      if (*(long*)( param_1 + 400 ) == 0) {
         LAB_00108c30:iVar10 = *(int*)( param_1 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar6 = *(int*)( param_1 + 0x21c );
         if (iVar6 == 1) goto LAB_00108c30;
         if (iVar6 == 2) {
            iVar10 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
         }
 else {
            iVar10 = -1;
            if (iVar6 == 0) {
               iVar10 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
            }

         }

      }

      if (iVar8 < iVar9) {
         iVar9 = iVar9 + -1 + ( uint )(iVar7 != iVar10);
      }

   }

   iVar6 = AudioServer::get_singleton();
   cVar4 = AudioServer::is_bus_effect_enabled(iVar6, iVar7);
   this(Object * EditorUndoRedoManager::get_singleton());
   local_200 = (Object*)0x0;
   local_1f8 = "";
   local_1f0 = 0;
   String::parse_latin1((StrRange*)&local_200);
   local_1f8 = "Move Bus Effect";
   local_208 = 0;
   local_1f0 = 0xf;
   String::parse_latin1((StrRange*)&local_208);
   TTR((String*)&local_1f8, (String*)&local_208);
   EditorUndoRedoManager::create_action(this, (String*)&local_1f8, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
   StringName::StringName((StringName*)&local_1f8, "remove_bus_effect", false);
   pSVar13 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_1a8, iVar7);
   Variant::Variant(local_190, iVar8);
   local_170 = (undefined1[16])0x0;
   pVVar12 = local_160;
   local_178 = 0;
   local_1c8 = (Variant*)&local_1a8;
   pVStack_1c0 = local_190;
   EditorUndoRedoManager::add_do_methodp(this, pSVar13, (Variant**)&local_1f8, (int)(Variant*)&local_1c8);
   do {
      pVVar15 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != (Variant*)&local_1a8 );
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar6 = AudioServer::get_singleton();
   iVar10 = (int)(StrRange*)&local_200;
   AudioServer::get_bus_effect(iVar10, iVar6);
   if (*(long*)( param_1 + 400 ) == 0) {
      LAB_001086d0:iVar14 = *(int*)( param_1 + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar6 = *(int*)( param_1 + 0x21c );
      if (iVar6 == 1) goto LAB_001086d0;
      if (iVar6 == 2) {
         iVar14 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
      }
 else {
         iVar14 = -1;
         if (iVar6 == 0) {
            iVar14 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
         }

      }

   }

   StringName::StringName((StringName*)&local_1f8, "add_bus_effect", false);
   pSVar13 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_108, iVar14);
   Variant::Variant(local_f0, local_200);
   Variant::Variant(local_d8, iVar9);
   local_c0 = 0;
   local_b8 = (undefined1[16])0x0;
   iVar6 = (int)(Variant*)&local_1a8;
   local_1a8 = (Variant*)&local_108;
   pVStack_1a0 = local_f0;
   local_198 = local_d8;
   EditorUndoRedoManager::add_do_methodp(this, pSVar13, (Variant**)&local_1f8, iVar6);
   pVVar12 = local_a8;
   do {
      pVVar15 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != (Variant*)&local_108 );
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   if (( ( local_200 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar3 = local_200,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}
if (iVar9 == -1) {
   iVar9 = AudioServer::get_singleton();
   if (( *(long*)( param_1 + 400 ) != 0 ) && ( *(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0' )) {
      Node::_update_children_cache_impl();
   }

   iVar9 = AudioServer::get_bus_effect_count(iVar9);
   lVar11 = *(long*)( param_1 + 400 );
   if (lVar11 != 0) {
      if (*(char*)( lVar11 + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
         lVar11 = *(long*)( param_1 + 400 );
      }

      iVar14 = *(int*)( param_1 + 0x21c );
      if (iVar14 == 1) {
         iVar2 = *(int*)( param_1 + 0x22c );
         LAB_00108ad3:if (iVar7 == iVar2) goto LAB_00108c6b;
         goto LAB_001080d9;
      }

      if (iVar14 != 2) {
         iVar2 = -1;
         if (iVar14 != 0) goto LAB_00108ad3;
         iVar14 = *(int*)( param_1 + 0x22c );
         if (iVar7 == *(int*)( lVar11 + 0x220 ) + iVar14) goto LAB_00108cf9;
         if (cVar4 != '\0') goto LAB_001081fb;
         if (*(char*)( lVar11 + 0x1d0 ) != '\0') goto LAB_00108cef;
         LAB_00108bbe:iVar14 = iVar14 + *(int*)( lVar11 + 0x220 );
         goto LAB_00108120;
      }

      iVar14 = *(int*)( param_1 + 0x22c );
      if (iVar7 != *(int*)( lVar11 + 0x228 ) + *(int*)( lVar11 + 0x220 ) + iVar14) {
         if (cVar4 != '\0') goto LAB_001081fb;
         if (*(char*)( lVar11 + 0x1d0 ) != '\0') goto LAB_00108cef;
         goto LAB_001088be;
      }

      LAB_00108cf9:iVar9 = iVar9 + -1;
      if (cVar4 == '\0') goto LAB_001080ed;
      goto LAB_001081fb;
   }

   if (iVar7 == *(int*)( param_1 + 0x22c )) {
      LAB_00108c6b:iVar9 = iVar9 + -1;
      goto LAB_001080d9;
   }

   if (cVar4 == '\0') goto LAB_00108b00;
   LAB_001086a0:iVar14 = *(int*)( param_1 + 0x22c );
}
 else {
   lVar11 = *(long*)( param_1 + 400 );
   LAB_001080d9:if (cVar4 == '\0') {
      if (lVar11 == 0) {
         LAB_00108b00:iVar14 = *(int*)( param_1 + 0x22c );
      }
 else {
         LAB_001080ed:if (*(char*)( lVar11 + 0x1d0 ) != '\0') {
            LAB_00108cef:Node::_update_children_cache_impl();
         }

         iVar2 = *(int*)( param_1 + 0x21c );
         if (iVar2 == 1) goto LAB_00108b00;
         if (iVar2 == 2) {
            lVar11 = *(long*)( param_1 + 400 );
            iVar14 = *(int*)( param_1 + 0x22c );
            LAB_001088be:iVar14 = iVar14 + *(int*)( lVar11 + 0x220 ) + *(int*)( lVar11 + 0x228 );
         }
 else {
            iVar14 = -1;
            if (iVar2 == 0) {
               lVar11 = *(long*)( param_1 + 400 );
               iVar14 = *(int*)( param_1 + 0x22c );
               goto LAB_00108bbe;
            }

         }

      }

      LAB_00108120:StringName::StringName((StringName*)&local_1f8, "set_bus_effect_enabled", false);
      pSVar13 = (StringName*)AudioServer::get_singleton();
      Variant::Variant((Variant*)&local_108, iVar14);
      Variant::Variant(local_f0, iVar9);
      Variant::Variant(local_d8, false);
      local_b8 = (undefined1[16])0x0;
      local_c0 = 0;
      local_1a8 = (Variant*)&local_108;
      pVStack_1a0 = local_f0;
      local_198 = local_d8;
      EditorUndoRedoManager::add_do_methodp(this, pSVar13, (Variant**)&local_1f8, iVar6);
      pVVar12 = local_a8;
      do {
         pVVar15 = pVVar12 + -0x18;
         pVVar12 = pVVar12 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar12 != (Variant*)&local_108 );
      if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
         StringName::unref();
      }

      lVar11 = *(long*)( param_1 + 400 );
   }

   if (lVar11 == 0) goto LAB_001086a0;
   LAB_001081fb:if (*(char*)( lVar11 + 0x1d0 ) != '\0') {
      Node::_update_children_cache_impl();
   }

   iVar6 = *(int*)( param_1 + 0x21c );
   if (iVar6 == 1) goto LAB_001086a0;
   if (iVar6 == 2) {
      iVar14 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
   }
 else {
      iVar14 = -1;
      if (iVar6 == 0) {
         iVar14 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
      }

   }

}
StringName::StringName((StringName*)&local_1f8, "remove_bus_effect", false);pSVar13 = (StringName*)AudioServer::get_singleton();Variant::Variant(local_158, iVar14);Variant::Variant(local_140, iVar9);local_120 = (undefined1[16])0x0;pVVar12 = local_110;local_128 = 0;iVar6 = (int)(Variant*)&local_108;local_108 = local_158;pVStack_100 = local_140;EditorUndoRedoManager::add_undo_methodp(this, pSVar13, (Variant**)&local_1f8, iVar6);do {
   pVVar15 = pVVar12 + -0x18;
   pVVar12 = pVVar12 + -0x18;
   if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
      Variant::_clear_internal();
   }

}
 while ( pVVar12 != local_158 );if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
   StringName::unref();
}
iVar9 = AudioServer::get_singleton();AudioServer::get_bus_effect(iVar10, iVar9);StringName::StringName((StringName*)&local_1f8, "add_bus_effect", false);pSVar13 = (StringName*)AudioServer::get_singleton();Variant::Variant(local_a8, iVar7);Variant::Variant(local_90, local_200);Variant::Variant(local_78, iVar8);pVVar12 = local_48;local_60 = 0;local_58 = (undefined1[16])0x0;local_108 = local_a8;pVStack_100 = local_90;local_f8 = local_78;EditorUndoRedoManager::add_undo_methodp(this, pSVar13, (Variant**)&local_1f8, iVar6);pVVar15 = pVVar12;do {
   pVVar1 = pVVar15 + -0x18;
   pVVar15 = pVVar15 + -0x18;
   if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
      Variant::_clear_internal();
   }

}
 while ( pVVar15 != local_a8 );if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
   StringName::unref();
}
if (( ( local_200 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar3 = local_200,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);Memory::free_static(pOVar3, false);}if (cVar4 == '\0') {
   StringName::StringName((StringName*)&local_1f8, "set_bus_effect_enabled", false);
   pSVar13 = (StringName*)AudioServer::get_singleton();
   Variant::Variant(local_a8, iVar7);
   Variant::Variant(local_90, iVar8);
   Variant::Variant(local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_108 = local_a8;
   pVStack_100 = local_90;
   local_f8 = local_78;
   EditorUndoRedoManager::add_undo_methodp(this, pSVar13, (Variant**)&local_1f8, iVar6);
   do {
      pVVar15 = pVVar12 + -0x18;
      pVVar12 = pVVar12 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar12 != local_a8 );
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

}
if (*(long*)( param_1 + 400 ) == 0) {
   LAB_001086c0:iVar8 = *(int*)( param_1 + 0x22c );
}
 else {
   if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
      Node::_update_children_cache_impl();
   }

   iVar6 = *(int*)( param_1 + 0x21c );
   if (iVar6 == 1) goto LAB_001086c0;
   if (iVar6 == 2) {
      iVar8 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
   }
 else {
      iVar8 = -1;
      if (iVar6 == 0) {
         iVar8 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
      }

   }

}
StringName::StringName((StringName*)&local_1f8, "_update_bus", false);EditorUndoRedoManager::add_do_method<int>((EditorUndoRedoManager*)this, *(Object**)( param_1 + 0xb10 ), (StringName*)&local_1f8, iVar8);if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
   StringName::unref();
}
if (*(long*)( param_1 + 400 ) == 0) {
   LAB_001086b0:iVar8 = *(int*)( param_1 + 0x22c );
}
 else {
   if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
      Node::_update_children_cache_impl();
   }

   iVar6 = *(int*)( param_1 + 0x21c );
   if (iVar6 == 1) goto LAB_001086b0;
   if (iVar6 == 2) {
      iVar8 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
   }
 else {
      iVar8 = -1;
      if (iVar6 == 0) {
         iVar8 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
      }

   }

}
StringName::StringName((StringName*)&local_1f8, "_update_bus", false);EditorUndoRedoManager::add_undo_method<int>((EditorUndoRedoManager*)this, *(Object**)( param_1 + 0xb10 ), (StringName*)&local_1f8, iVar8);if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
   StringName::unref();
}
if (*(long*)( param_1 + 400 ) == 0) {
   LAB_00108670:iVar8 = *(int*)( param_1 + 0x22c );
}
 else {
   if (*(char*)( *(long*)( param_1 + 400 ) + 0x1d0 ) != '\0') {
      Node::_update_children_cache_impl();
   }

   iVar6 = *(int*)( param_1 + 0x21c );
   if (iVar6 == 1) goto LAB_00108670;
   if (iVar6 == 2) {
      iVar8 = *(int*)( *(long*)( param_1 + 400 ) + 0x228 ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 ) + *(int*)( param_1 + 0x22c );
   }
 else {
      iVar8 = -1;
      if (iVar6 == 0) {
         iVar8 = *(int*)( param_1 + 0x22c ) + *(int*)( *(long*)( param_1 + 400 ) + 0x220 );
      }

   }

}
if (iVar7 != iVar8) {
   StringName::StringName((StringName*)&local_1f8, "_update_bus", false);
   EditorUndoRedoManager::add_do_method<int>((EditorUndoRedoManager*)this, *(Object**)( param_1 + 0xb10 ), (StringName*)&local_1f8, iVar7);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1f8, "_update_bus", false);
   EditorUndoRedoManager::add_undo_method<int>((EditorUndoRedoManager*)this, *(Object**)( param_1 + 0xb10 ), (StringName*)&local_1f8, iVar7);
   if (( StringName::configured != '\0' ) && ( local_1f8 != (char*)0x0 )) {
      StringName::unref();
   }

}
EditorUndoRedoManager::commit_action(SUB81(this, 0));if (Variant::needs_deinit[local_1e8[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_00108608:Dictionary::~Dictionary((Dictionary*)local_210);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBus::_delete_effect_pressed(int) */void EditorAudioBus::_delete_effect_pressed(int param_1) {
   Variant *pVVar1;
   int iVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   int iVar6;
   int iVar7;
   long lVar8;
   Object *this;
   StringName *pSVar9;
   Variant *pVVar10;
   Variant *pVVar11;
   int iVar12;
   int iVar13;
   undefined4 in_register_0000003c;
   long lVar14;
   long in_FS_OFFSET;
   int local_120;
   int local_118;
   int local_108;
   undefined8 local_e0;
   Object *local_d8;
   long local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[6];
   Variant local_90[24];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   lVar14 = CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar8 = Tree::get_selected();
   if (lVar8 != 0) {
      iVar12 = (int)(Variant*)local_a8;
      TreeItem::get_metadata(iVar12);
      iVar6 = local_a8[0];
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (iVar6 == 2) {
         TreeItem::get_metadata(iVar12);
         iVar6 = Variant::operator_cast_to_int((Variant*)local_a8);
         if (Variant::needs_deinit[local_a8[0]] != '\0') {
            Variant::_clear_internal();
         }

         this(Object * EditorUndoRedoManager::get_singleton());
         local_d8 = (Object*)0x0;
         String::parse_latin1((String*)&local_d8, "");
         local_e0 = 0;
         String::parse_latin1((String*)&local_e0, "Delete Bus Effect");
         TTR((String*)&local_d0, (String*)&local_e0);
         EditorUndoRedoManager::create_action(this, (String*)&local_d0, 0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         if (*(long*)( lVar14 + 400 ) == 0) {
            LAB_001093d0:local_120 = *(int*)( lVar14 + 0x22c );
         }
 else {
            if (*(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0') {
               Node::_update_children_cache_impl();
            }

            iVar12 = *(int*)( lVar14 + 0x21c );
            if (iVar12 == 1) goto LAB_001093d0;
            if (iVar12 == 2) {
               local_120 = *(int*)( *(long*)( lVar14 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 ) + *(int*)( lVar14 + 0x22c );
            }
 else {
               local_120 = -1;
               if (iVar12 == 0) {
                  local_120 = *(int*)( lVar14 + 0x22c ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 );
               }

            }

         }

         StringName::StringName((StringName*)&local_d0, "remove_bus_effect", false);
         pSVar9 = (StringName*)AudioServer::get_singleton();
         Variant::Variant((Variant*)local_a8, local_120);
         Variant::Variant(local_90, iVar6);
         local_70 = (undefined1[16])0x0;
         local_78 = 0;
         iVar12 = (int)&local_c8;
         local_c8 = (Variant*)local_a8;
         pVStack_c0 = local_90;
         EditorUndoRedoManager::add_do_methodp(this, pSVar9, (Variant**)&local_d0, iVar12);
         pVVar10 = (Variant*)&local_60;
         do {
            pVVar11 = pVVar10 + -0x18;
            pVVar10 = pVVar10 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar11] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar10 != (Variant*)local_a8 );
         if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
            StringName::unref();
         }

         iVar7 = AudioServer::get_singleton();
         if (( *(long*)( lVar14 + 400 ) != 0 ) && ( *(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0' )) {
            Node::_update_children_cache_impl();
         }

         AudioServer::get_bus_effect((int)(String*)&local_d8, iVar7);
         if (*(long*)( lVar14 + 400 ) == 0) {
            LAB_00109440:local_118 = *(int*)( lVar14 + 0x22c );
         }
 else {
            if (*(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0') {
               Node::_update_children_cache_impl();
            }

            iVar7 = *(int*)( lVar14 + 0x21c );
            if (iVar7 == 1) goto LAB_00109440;
            if (iVar7 == 2) {
               local_118 = *(int*)( *(long*)( lVar14 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 ) + *(int*)( lVar14 + 0x22c );
            }
 else {
               local_118 = -1;
               if (iVar7 == 0) {
                  local_118 = *(int*)( lVar14 + 0x22c ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 );
               }

            }

         }

         StringName::StringName((StringName*)&local_d0, "add_bus_effect", false);
         pSVar9 = (StringName*)AudioServer::get_singleton();
         Variant::Variant((Variant*)local_a8, local_118);
         Variant::Variant(local_90, local_d8);
         Variant::Variant((Variant*)&local_78, iVar6);
         local_60 = 0;
         local_58 = (undefined1[16])0x0;
         local_c8 = (Variant*)local_a8;
         pVStack_c0 = local_90;
         local_b8 = (Variant*)&local_78;
         EditorUndoRedoManager::add_undo_methodp(this, pSVar9, (Variant**)&local_d0, iVar12);
         pVVar10 = local_48;
         pVVar11 = pVVar10;
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != (Variant*)local_a8 );
         if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
            StringName::unref();
         }

         if (( ( local_d8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_d8,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();
         Memory::free_static(pOVar3, false);
      }

      iVar7 = AudioServer::get_singleton();
      if (*(long*)( lVar14 + 400 ) == 0) {
         LAB_00109420:iVar13 = *(int*)( lVar14 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar2 = *(int*)( lVar14 + 0x21c );
         if (iVar2 == 1) goto LAB_00109420;
         if (iVar2 == 2) {
            iVar13 = *(int*)( *(long*)( lVar14 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 ) + *(int*)( lVar14 + 0x22c );
         }
 else {
            iVar13 = -1;
            if (iVar2 == 0) {
               iVar13 = *(int*)( lVar14 + 0x22c ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 );
            }

         }

      }

      bVar5 = (bool)AudioServer::is_bus_effect_enabled(iVar7, iVar13);
      if (*(long*)( lVar14 + 400 ) == 0) {
         LAB_00109410:local_108 = *(int*)( lVar14 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar7 = *(int*)( lVar14 + 0x21c );
         if (iVar7 == 1) goto LAB_00109410;
         if (iVar7 == 2) {
            local_108 = *(int*)( *(long*)( lVar14 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 ) + *(int*)( lVar14 + 0x22c );
         }
 else {
            local_108 = -1;
            if (iVar7 == 0) {
               local_108 = *(int*)( lVar14 + 0x22c ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 );
            }

         }

      }

      StringName::StringName((StringName*)&local_d0, "set_bus_effect_enabled", false);
      pSVar9 = (StringName*)AudioServer::get_singleton();
      Variant::Variant((Variant*)local_a8, local_108);
      Variant::Variant(local_90, iVar6);
      Variant::Variant((Variant*)&local_78, bVar5);
      local_58 = (undefined1[16])0x0;
      local_60 = 0;
      local_c8 = (Variant*)local_a8;
      pVStack_c0 = local_90;
      local_b8 = (Variant*)&local_78;
      EditorUndoRedoManager::add_undo_methodp(this, pSVar9, (Variant**)&local_d0, iVar12);
      do {
         pVVar11 = pVVar10 + -0x18;
         pVVar10 = pVVar10 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar11] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar10 != (Variant*)local_a8 );
      if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      if (*(long*)( lVar14 + 400 ) == 0) {
         LAB_00109430:iVar12 = *(int*)( lVar14 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar6 = *(int*)( lVar14 + 0x21c );
         if (iVar6 == 1) goto LAB_00109430;
         if (iVar6 == 2) {
            iVar12 = *(int*)( *(long*)( lVar14 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 ) + *(int*)( lVar14 + 0x22c );
         }
 else {
            iVar12 = -1;
            if (iVar6 == 0) {
               iVar12 = *(int*)( lVar14 + 0x22c ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 );
            }

         }

      }

      StringName::StringName((StringName*)&local_d0, "_update_bus", false);
      EditorUndoRedoManager::add_do_method<int>((EditorUndoRedoManager*)this, *(Object**)( lVar14 + 0xb10 ), (StringName*)&local_d0, iVar12);
      if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      if (*(long*)( lVar14 + 400 ) == 0) {
         LAB_00109460:iVar12 = *(int*)( lVar14 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar14 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar6 = *(int*)( lVar14 + 0x21c );
         if (iVar6 == 1) goto LAB_00109460;
         if (iVar6 == 2) {
            iVar12 = *(int*)( *(long*)( lVar14 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 ) + *(int*)( lVar14 + 0x22c );
         }
 else {
            iVar12 = -1;
            if (iVar6 == 0) {
               iVar12 = *(int*)( lVar14 + 0x22c ) + *(int*)( *(long*)( lVar14 + 400 ) + 0x220 );
            }

         }

      }

      StringName::StringName((StringName*)&local_d0, "_update_bus", false);
      EditorUndoRedoManager::add_undo_method<int>((EditorUndoRedoManager*)this, *(Object**)( lVar14 + 0xb10 ), (StringName*)&local_d0, iVar12);
      if (( StringName::configured != '\0' ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorUndoRedoManager::commit_action(SUB81(this, 0));
         return;
      }

      goto LAB_0010975a;
   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_0010975a:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBus::_effects_gui_input(Ref<InputEvent>) */void EditorAudioBus::_effects_gui_input(int param_1, long *param_2) {
   char cVar1;
   int iVar2;
   Object *pOVar3;
   long lVar4;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_2 != 0) {
      pOVar3 = (Object*)__dynamic_cast(*param_2, &Object::typeinfo, &InputEventKey::typeinfo, 0);
      if (pOVar3 != (Object*)0x0) {
         cVar1 = RefCounted::reference();
         if (cVar1 != '\0') {
            cVar1 = InputEvent::is_pressed();
            if (cVar1 != '\0') {
               cVar1 = ( **(code**)( *(long*)pOVar3 + 0x1c8 ) )(pOVar3);
               if (cVar1 == '\0') {
                  iVar2 = InputEventKey::get_keycode();
                  if (iVar2 == 0x400008) {
                     lVar4 = Tree::get_selected();
                     if (lVar4 != 0) {
                        TreeItem::get_metadata((int)local_38);
                        if (local_38[0] == 2) {
                           _delete_effect_pressed(param_1);
                           Control::accept_event();
                        }
 else if (Variant::needs_deinit[local_38[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                     }

                  }

               }

            }

            cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar3);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Memory::free_static(pOVar3, false);
                     return;
                  }

                  goto LAB_001098ae;
               }

            }

         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001098ae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorAudioBuses::_delete_bus(Object*) */void EditorAudioBuses::_delete_bus(EditorAudioBuses *this, Object *param_1) {
   Variant *pVVar1;
   code *pcVar2;
   String *pSVar3;
   bool bVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   long lVar9;
   EditorUndoRedoManager *this_00;
   Object *pOVar10;
   StringName *pSVar11;
   int iVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   float fVar14;
   undefined8 local_330;
   undefined8 local_328;
   String local_320[8];
   undefined8 local_318;
   Object *local_310;
   char *local_308;
   undefined8 local_300;
   Variant *local_2f8;
   Variant *pVStack_2f0;
   Variant *local_2d8;
   Variant *pVStack_2d0;
   Variant local_2c0[24];
   undefined8 local_2a8;
   undefined1 local_2a0[16];
   Variant local_290[8];
   Variant *local_288;
   Variant *pVStack_280;
   Variant local_270[24];
   undefined8 local_258;
   undefined1 local_250[16];
   Variant local_240[8];
   Variant *local_238;
   Variant *pVStack_230;
   Variant local_220[24];
   undefined8 local_208;
   undefined1 local_200[16];
   Variant local_1f0[8];
   Variant *local_1e8;
   Variant *pVStack_1e0;
   Variant local_1d0[24];
   undefined8 local_1b8;
   undefined1 local_1b0[16];
   Variant local_1a0[8];
   Variant *local_198;
   Variant *pVStack_190;
   Variant local_180[24];
   undefined8 local_168;
   undefined1 local_160[16];
   Variant local_150[8];
   Variant *local_148;
   Variant *pVStack_140;
   Variant local_130[24];
   undefined8 local_118;
   undefined1 local_110[16];
   Variant local_100[8];
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_e8;
   Variant local_e0[24];
   undefined8 local_c8;
   undefined1 local_c0[16];
   Variant local_b0[8];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar9 = __dynamic_cast(param_1, &Object::typeinfo, &EditorAudioBus::typeinfo, 0);
   if (*(long*)( lVar9 + 400 ) == 0) {
      LAB_0010a500:iVar6 = *(int*)( lVar9 + 0x22c );
      LAB_00109ac0:if (iVar6 == 0) {
         LAB_0010a35c:pSVar3 = EditorNode::singleton;
         local_308 = (char*)0x0;
         String::parse_latin1((String*)&local_308, "");
         local_310 = (Object*)0x0;
         String::parse_latin1((String*)&local_310, "Warning!");
         TTR((String*)&local_318, (String*)&local_310);
         local_328 = 0;
         String::parse_latin1((String*)&local_328, "");
         local_330 = 0;
         String::parse_latin1((String*)&local_330, "Master bus can\'t be deleted!");
         TTR(local_320, (String*)&local_330);
         EditorNode::show_warning(pSVar3, local_320);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_320);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_330);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_328);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
         goto LAB_0010a4cf;
      }

   }
 else {
      if (*(char*)( *(long*)( lVar9 + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar6 = *(int*)( lVar9 + 0x21c );
      if (iVar6 == 1) goto LAB_0010a500;
      if (iVar6 == 2) {
         iVar6 = *(int*)( *(long*)( lVar9 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 ) + *(int*)( lVar9 + 0x22c );
         if (iVar6 != 0) goto LAB_00109ac9;
         goto LAB_0010a35c;
      }

      if (iVar6 == 0) {
         iVar6 = *(int*)( lVar9 + 0x22c ) + *(int*)( *(long*)( lVar9 + 400 ) + 0x220 );
         goto LAB_00109ac0;
      }

      iVar6 = -1;
   }

   LAB_00109ac9:this_00 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
   local_310 = (Object*)0x0;
   local_308 = "";
   local_300 = 0;
   String::parse_latin1((StrRange*)&local_310);
   local_308 = "Delete Audio Bus";
   local_318 = 0;
   local_300 = 0x10;
   String::parse_latin1((StrRange*)&local_318);
   TTR((String*)&local_308, (String*)&local_318);
   EditorUndoRedoManager::create_action(this_00, (String*)&local_308, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
   StringName::StringName((StringName*)&local_308, "remove_bus", false);
   pOVar10 = (Object*)AudioServer::get_singleton();
   EditorUndoRedoManager::add_do_method<int>(this_00, pOVar10, (StringName*)&local_308, iVar6);
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_308, "add_bus", false);
   pOVar10 = (Object*)AudioServer::get_singleton();
   EditorUndoRedoManager::add_undo_method<int>(this_00, pOVar10, (StringName*)&local_308, iVar6);
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   AudioServer::get_singleton();
   iVar12 = (int)(StrRange*)&local_310;
   AudioServer::get_bus_name(iVar12);
   StringName::StringName((StringName*)&local_308, "set_bus_name", false);
   pSVar11 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_2d8, iVar6);
   pVVar13 = local_290;
   Variant::Variant(local_2c0, (String*)&local_310);
   local_2a0 = (undefined1[16])0x0;
   local_2a8 = 0;
   local_2f8 = (Variant*)&local_2d8;
   pVStack_2f0 = local_2c0;
   EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)&local_2f8);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != (Variant*)&local_2d8 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
   iVar7 = AudioServer::get_singleton();
   fVar14 = (float)AudioServer::get_bus_volume_db(iVar7);
   StringName::StringName((StringName*)&local_308, "set_bus_volume_db", false);
   pSVar11 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_288, iVar6);
   Variant::Variant(local_270, fVar14);
   local_250 = (undefined1[16])0x0;
   pVVar13 = local_240;
   local_258 = 0;
   local_2d8 = (Variant*)&local_288;
   pVStack_2d0 = local_270;
   EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_2d8);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != (Variant*)&local_288 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   AudioServer::get_singleton();
   AudioServer::get_bus_send(iVar12);
   StringName::StringName((StringName*)&local_308, "set_bus_send", false);
   pSVar11 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_238, iVar6);
   Variant::Variant(local_220, (StringName*)&local_310);
   local_200 = (undefined1[16])0x0;
   pVVar13 = local_1f0;
   local_208 = 0;
   local_288 = (Variant*)&local_238;
   pVStack_280 = local_220;
   EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_288);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != (Variant*)&local_238 );
   if (StringName::configured != '\0') {
      if (local_308 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00109eb9;
      }

      if (local_310 != (Object*)0x0) {
         StringName::unref();
      }

   }

   LAB_00109eb9:iVar7 = AudioServer::get_singleton();
   bVar4 = (bool)AudioServer::is_bus_solo(iVar7);
   StringName::StringName((StringName*)&local_308, "set_bus_solo", false);
   pSVar11 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_1e8, iVar6);
   pVVar13 = local_1a0;
   Variant::Variant(local_1d0, bVar4);
   local_1b8 = 0;
   local_1b0 = (undefined1[16])0x0;
   local_238 = (Variant*)&local_1e8;
   pVStack_230 = local_1d0;
   EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_238);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != (Variant*)&local_1e8 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar7 = AudioServer::get_singleton();
   bVar4 = (bool)AudioServer::is_bus_mute(iVar7);
   StringName::StringName((StringName*)&local_308, "set_bus_mute", false);
   pSVar11 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_198, iVar6);
   pVVar13 = local_150;
   Variant::Variant(local_180, bVar4);
   local_168 = 0;
   local_160 = (undefined1[16])0x0;
   local_1e8 = (Variant*)&local_198;
   pVStack_1e0 = local_180;
   EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_1e8);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != (Variant*)&local_198 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar7 = AudioServer::get_singleton();
   bVar4 = (bool)AudioServer::is_bus_bypassing_effects(iVar7);
   StringName::StringName((StringName*)&local_308, "set_bus_bypass_effects", false);
   pSVar11 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_148, iVar6);
   pVVar13 = local_100;
   Variant::Variant(local_130, bVar4);
   local_118 = 0;
   local_110 = (undefined1[16])0x0;
   local_198 = (Variant*)&local_148;
   pVStack_190 = local_130;
   EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_198);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar13 != (Variant*)&local_148 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar7 = 0;
   while (true) {
      iVar8 = AudioServer::get_singleton();
      iVar8 = AudioServer::get_bus_effect_count(iVar8);
      if (iVar8 <= iVar7) break;
      iVar8 = AudioServer::get_singleton();
      AudioServer::get_bus_effect(iVar12, iVar8);
      StringName::StringName((StringName*)&local_308, "add_bus_effect", false);
      pSVar11 = (StringName*)AudioServer::get_singleton();
      Variant::Variant((Variant*)&local_f8, iVar6);
      Variant::Variant(local_e0, local_310);
      local_c0 = (undefined1[16])0x0;
      pVVar13 = local_b0;
      local_c8 = 0;
      local_148 = (Variant*)&local_f8;
      pVStack_140 = local_e0;
      EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_148);
      do {
         pVVar1 = pVVar13 + -0x18;
         pVVar13 = pVVar13 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar13 != (Variant*)&local_f8 );
      if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_310 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         pOVar10 = local_310;
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(local_310);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
               Memory::free_static(pOVar10, false);
            }

         }

      }

      iVar8 = AudioServer::get_singleton();
      bVar4 = (bool)AudioServer::is_bus_effect_enabled(iVar8, iVar6);
      StringName::StringName((StringName*)&local_308, "set_bus_effect_enabled", false);
      pSVar11 = (StringName*)AudioServer::get_singleton();
      Variant::Variant(local_a8, iVar6);
      Variant::Variant(local_90, iVar7);
      Variant::Variant(local_78, bVar4);
      pVVar13 = local_48;
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_f8 = local_a8;
      pVStack_f0 = local_90;
      local_e8 = local_78;
      EditorUndoRedoManager::add_undo_methodp((Object*)this_00, pSVar11, (Variant**)&local_308, (int)(Variant*)&local_f8);
      do {
         pVVar1 = pVVar13 + -0x18;
         pVVar13 = pVVar13 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar13 != local_a8 );
      if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
         StringName::unref();
      }

      iVar7 = iVar7 + 1;
   }
;
   EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
   LAB_0010a4cf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_duplicate_bus(int) */void EditorAudioBuses::_duplicate_bus(EditorAudioBuses *this, int param_1) {
   Variant *pVVar1;
   bool bVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   int iVar6;
   int iVar7;
   EditorUndoRedoManager *this_00;
   Object *pOVar8;
   StringName *pSVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   float fVar11;
   String local_320[8];
   undefined8 local_318;
   Object *local_310;
   char *local_308;
   undefined8 local_300;
   Variant *local_2f8;
   Variant *pVStack_2f0;
   Variant *local_2d8;
   Variant *pVStack_2d0;
   Variant local_2c0[24];
   undefined8 local_2a8;
   undefined1 local_2a0[16];
   Variant local_290[8];
   Variant *local_288;
   Variant *pVStack_280;
   Variant local_270[24];
   undefined8 local_258;
   undefined1 local_250[16];
   Variant local_240[8];
   Variant *local_238;
   Variant *pVStack_230;
   Variant local_220[24];
   undefined8 local_208;
   undefined1 local_200[16];
   Variant local_1f0[8];
   Variant *local_1e8;
   Variant *pVStack_1e0;
   Variant local_1d0[24];
   undefined8 local_1b8;
   undefined1 local_1b0[16];
   Variant local_1a0[8];
   Variant *local_198;
   Variant *pVStack_190;
   Variant local_180[24];
   undefined8 local_168;
   undefined1 local_160[16];
   Variant local_150[8];
   Variant *local_148;
   Variant *pVStack_140;
   Variant local_130[24];
   undefined8 local_118;
   undefined1 local_110[16];
   Variant local_100[8];
   Variant *local_f8;
   Variant *pVStack_f0;
   Variant *local_e8;
   Variant local_e0[24];
   undefined8 local_c8;
   undefined1 local_c0[16];
   Variant local_b0[8];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = param_1 + 1;
   this_00 = (EditorUndoRedoManager*)EditorUndoRedoManager::get_singleton();
   local_308 = "";
   local_310 = (Object*)0x0;
   local_300 = 0;
   String::parse_latin1((StrRange*)&local_310);
   local_308 = "Duplicate Audio Bus";
   local_318 = 0;
   local_300 = 0x13;
   String::parse_latin1((StrRange*)&local_318);
   TTR((String*)&local_308, (String*)&local_318);
   EditorUndoRedoManager::create_action(this_00, (String*)&local_308, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
   StringName::StringName((StringName*)&local_308, "add_bus", false);
   pOVar8 = (Object*)AudioServer::get_singleton();
   EditorUndoRedoManager::add_do_method<int>(this_00, pOVar8, (StringName*)&local_308, iVar4);
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   local_318 = 0;
   local_308 = " Copy";
   local_300 = 5;
   String::parse_latin1((StrRange*)&local_318);
   AudioServer::get_singleton();
   AudioServer::get_bus_name((int)local_320);
   String::operator +((String*)&local_310, local_320);
   StringName::StringName((StringName*)&local_308, "set_bus_name", false);
   pSVar9 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_2d8, iVar4);
   Variant::Variant(local_2c0, (String*)&local_310);
   local_2a0 = (undefined1[16])0x0;
   local_2a8 = 0;
   local_2f8 = (Variant*)&local_2d8;
   pVStack_2f0 = local_2c0;
   EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)&local_2f8);
   pVVar10 = local_290;
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_2d8 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_320);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_318);
   iVar5 = AudioServer::get_singleton();
   fVar11 = (float)AudioServer::get_bus_volume_db(iVar5);
   StringName::StringName((StringName*)&local_308, "set_bus_volume_db", false);
   pSVar9 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_288, iVar4);
   Variant::Variant(local_270, fVar11);
   local_250 = (undefined1[16])0x0;
   pVVar10 = local_240;
   local_258 = 0;
   local_2d8 = (Variant*)&local_288;
   pVStack_2d0 = local_270;
   EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_2d8);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_288 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   AudioServer::get_singleton();
   iVar5 = (int)(StrRange*)&local_310;
   AudioServer::get_bus_send(iVar5);
   StringName::StringName((StringName*)&local_308, "set_bus_send", false);
   pSVar9 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_238, iVar4);
   Variant::Variant(local_220, (StringName*)&local_310);
   local_200 = (undefined1[16])0x0;
   pVVar10 = local_1f0;
   local_208 = 0;
   local_288 = (Variant*)&local_238;
   pVStack_280 = local_220;
   EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_288);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_238 );
   if (StringName::configured != '\0') {
      if (local_308 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010ab36;
      }

      if (local_310 != (Object*)0x0) {
         StringName::unref();
      }

   }

   LAB_0010ab36:iVar6 = AudioServer::get_singleton();
   bVar2 = (bool)AudioServer::is_bus_solo(iVar6);
   StringName::StringName((StringName*)&local_308, "set_bus_solo", false);
   pSVar9 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_1e8, iVar4);
   pVVar10 = local_1a0;
   Variant::Variant(local_1d0, bVar2);
   local_1b8 = 0;
   local_1b0 = (undefined1[16])0x0;
   local_238 = (Variant*)&local_1e8;
   pVStack_230 = local_1d0;
   EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_238);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_1e8 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar6 = AudioServer::get_singleton();
   bVar2 = (bool)AudioServer::is_bus_mute(iVar6);
   StringName::StringName((StringName*)&local_308, "set_bus_mute", false);
   pSVar9 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_198, iVar4);
   pVVar10 = local_150;
   Variant::Variant(local_180, bVar2);
   local_168 = 0;
   local_160 = (undefined1[16])0x0;
   local_1e8 = (Variant*)&local_198;
   pVStack_1e0 = local_180;
   EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_1e8);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_198 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar6 = AudioServer::get_singleton();
   bVar2 = (bool)AudioServer::is_bus_bypassing_effects(iVar6);
   StringName::StringName((StringName*)&local_308, "set_bus_bypass_effects", false);
   pSVar9 = (StringName*)AudioServer::get_singleton();
   Variant::Variant((Variant*)&local_148, iVar4);
   pVVar10 = local_100;
   Variant::Variant(local_130, bVar2);
   local_118 = 0;
   local_110 = (undefined1[16])0x0;
   local_198 = (Variant*)&local_148;
   pVStack_190 = local_130;
   EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_198);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_148 );
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar6 = 0;
   while (true) {
      iVar7 = AudioServer::get_singleton();
      iVar7 = AudioServer::get_bus_effect_count(iVar7);
      if (iVar7 <= iVar6) break;
      iVar7 = AudioServer::get_singleton();
      AudioServer::get_bus_effect(iVar5, iVar7);
      StringName::StringName((StringName*)&local_308, "add_bus_effect", false);
      pSVar9 = (StringName*)AudioServer::get_singleton();
      Variant::Variant((Variant*)&local_f8, iVar4);
      Variant::Variant(local_e0, local_310);
      local_c0 = (undefined1[16])0x0;
      pVVar10 = local_b0;
      local_c8 = 0;
      local_148 = (Variant*)&local_f8;
      pVStack_140 = local_e0;
      EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_148);
      do {
         pVVar1 = pVVar10 + -0x18;
         pVVar10 = pVVar10 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar10 != (Variant*)&local_f8 );
      if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_310 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         pOVar8 = local_310;
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(local_310);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
               Memory::free_static(pOVar8, false);
            }

         }

      }

      iVar7 = AudioServer::get_singleton();
      bVar2 = (bool)AudioServer::is_bus_effect_enabled(iVar7, param_1);
      StringName::StringName((StringName*)&local_308, "set_bus_effect_enabled", false);
      pSVar9 = (StringName*)AudioServer::get_singleton();
      Variant::Variant(local_a8, iVar4);
      Variant::Variant(local_90, iVar6);
      Variant::Variant(local_78, bVar2);
      pVVar10 = local_48;
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_f8 = local_a8;
      pVStack_f0 = local_90;
      local_e8 = local_78;
      EditorUndoRedoManager::add_do_methodp((Object*)this_00, pSVar9, (Variant**)&local_308, (int)(Variant*)&local_f8);
      do {
         pVVar1 = pVVar10 + -0x18;
         pVVar10 = pVVar10 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar10 != local_a8 );
      if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
         StringName::unref();
      }

      iVar6 = iVar6 + 1;
   }
;
   StringName::StringName((StringName*)&local_308, "_update_bus", false);
   EditorUndoRedoManager::add_do_method<int>(this_00, (Object*)this, (StringName*)&local_308, iVar4);
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_308, "remove_bus", false);
   pOVar8 = (Object*)AudioServer::get_singleton();
   EditorUndoRedoManager::add_undo_method<int>(this_00, pOVar8, (StringName*)&local_308, iVar4);
   if (( StringName::configured != '\0' ) && ( local_308 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::_effect_add(int) */void EditorAudioBus::_effect_add(int param_1) {
   Variant *pVVar1;
   char cVar2;
   int iVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   String *pSVar7;
   Object *this;
   StringName *pSVar8;
   Variant *pVVar9;
   undefined4 in_register_0000003c;
   long lVar10;
   long in_FS_OFFSET;
   Object *local_120;
   long local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   char *local_d8;
   undefined8 local_d0;
   Variant *local_c8;
   Variant *pVStack_c0;
   Variant *local_b8;
   int local_a8[6];
   Variant local_90[24];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   lVar10 = CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(char*)( lVar10 + 0xb08 ) != '\0') goto LAB_0010b181;
   PopupMenu::get_item_metadata((int)(Variant*)local_a8);
   Variant::operator_cast_to_StringName((Variant*)&local_f0);
   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar6 = ClassDB::instantiate((StringName*)&local_f0);
   if (lVar6 == 0) {
      _err_print_error("_effect_add", "editor/editor_audio_buses.cpp", 0x231, "Parameter \"fx\" is null.", 0, 0);
   }
 else {
      pSVar7 = (String*)__dynamic_cast(lVar6, &Object::typeinfo, &AudioEffect::typeinfo, 0);
      if (pSVar7 == (String*)0x0) {
         _err_print_error("_effect_add", "editor/editor_audio_buses.cpp", 0x233, "Parameter \"afx\" is null.", 0, 0);
      }
 else {
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            pSVar7 = (String*)0x0;
         }

         PopupMenu::get_item_text((int)(CowData<char32_t>*)&local_d8);
         Resource::set_name(pSVar7);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         this(Object * EditorUndoRedoManager::get_singleton());
         local_e0 = 0;
         local_d0 = 0;
         local_d8 = "";
         String::parse_latin1((StrRange*)&local_e0);
         local_e8 = 0;
         local_d8 = "Add Audio Bus Effect";
         local_d0 = 0x14;
         String::parse_latin1((StrRange*)&local_e8);
         TTR((String*)&local_d8, (String*)&local_e8);
         EditorUndoRedoManager::create_action(this, (CowData<char32_t>*)&local_d8, 0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         if (pSVar7 == (String*)0x0) {
            local_120 = (Object*)0x0;
         }
 else {
            cVar2 = RefCounted::reference();
            local_120 = (Object*)0x0;
            if (cVar2 != '\0') {
               local_120 = (Object*)pSVar7;
            }

         }

         if (*(long*)( lVar10 + 400 ) == 0) {
            LAB_0010b7f0:iVar3 = *(int*)( lVar10 + 0x22c );
         }
 else {
            if (*(char*)( *(long*)( lVar10 + 400 ) + 0x1d0 ) != '\0') {
               Node::_update_children_cache_impl();
            }

            iVar4 = *(int*)( lVar10 + 0x21c );
            if (iVar4 == 1) goto LAB_0010b7f0;
            if (iVar4 == 2) {
               iVar3 = *(int*)( *(long*)( lVar10 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 ) + *(int*)( lVar10 + 0x22c );
            }
 else {
               iVar3 = -1;
               if (iVar4 == 0) {
                  iVar3 = *(int*)( lVar10 + 0x22c ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 );
               }

            }

         }

         StringName::StringName((StringName*)&local_d8, "add_bus_effect", false);
         pSVar8 = (StringName*)AudioServer::get_singleton();
         Variant::Variant((Variant*)local_a8, iVar3);
         Variant::Variant(local_90, local_120);
         Variant::Variant((Variant*)&local_78, -1);
         local_58 = (undefined1[16])0x0;
         local_60 = 0;
         local_c8 = (Variant*)local_a8;
         pVStack_c0 = local_90;
         local_b8 = (Variant*)&local_78;
         EditorUndoRedoManager::add_do_methodp(this, pSVar8, (Variant**)&local_d8, (int)&local_c8);
         pVVar9 = local_48;
         do {
            pVVar1 = pVVar9 + -0x18;
            pVVar9 = pVVar9 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar9 != (Variant*)local_a8 );
         if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (( ( local_120 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_120 + 0x140 ))(local_120);
         Memory::free_static(local_120, false);
      }

      iVar4 = AudioServer::get_singleton();
      if (( *(long*)( lVar10 + 400 ) != 0 ) && ( *(char*)( *(long*)( lVar10 + 400 ) + 0x1d0 ) != '\0' )) {
         Node::_update_children_cache_impl();
      }

      iVar4 = AudioServer::get_bus_effect_count(iVar4);
      if (*(long*)( lVar10 + 400 ) == 0) {
         LAB_0010b7d0:iVar5 = *(int*)( lVar10 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar10 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar3 = *(int*)( lVar10 + 0x21c );
         if (iVar3 == 1) goto LAB_0010b7d0;
         if (iVar3 == 2) {
            iVar5 = *(int*)( *(long*)( lVar10 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 ) + *(int*)( lVar10 + 0x22c );
         }
 else {
            iVar5 = -1;
            if (iVar3 == 0) {
               iVar5 = *(int*)( lVar10 + 0x22c ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 );
            }

         }

      }

      StringName::StringName((StringName*)&local_d8, "remove_bus_effect", false);
      pSVar8 = (StringName*)AudioServer::get_singleton();
      Variant::Variant((Variant*)local_a8, iVar5);
      Variant::Variant(local_90, iVar4);
      local_70 = (undefined1[16])0x0;
      local_78 = 0;
      local_c8 = (Variant*)local_a8;
      pVStack_c0 = local_90;
      EditorUndoRedoManager::add_undo_methodp(this, pSVar8, (Variant**)&local_d8, (int)&local_c8);
      pVVar9 = (Variant*)&local_60;
      do {
         pVVar1 = pVVar9 + -0x18;
         pVVar9 = pVVar9 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar9 != (Variant*)local_a8 );
      if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
         StringName::unref();
      }

      if (*(long*)( lVar10 + 400 ) == 0) {
         LAB_0010b7c0:iVar3 = *(int*)( lVar10 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar10 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar4 = *(int*)( lVar10 + 0x21c );
         if (iVar4 == 1) goto LAB_0010b7c0;
         if (iVar4 == 2) {
            iVar3 = *(int*)( *(long*)( lVar10 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 ) + *(int*)( lVar10 + 0x22c );
         }
 else {
            iVar3 = -1;
            if (iVar4 == 0) {
               iVar3 = *(int*)( lVar10 + 0x22c ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 );
            }

         }

      }

      StringName::StringName((StringName*)&local_d8, "_update_bus", false);
      EditorUndoRedoManager::add_do_method<int>((EditorUndoRedoManager*)this, *(Object**)( lVar10 + 0xb10 ), (StringName*)&local_d8, iVar3);
      if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
         StringName::unref();
      }

      if (*(long*)( lVar10 + 400 ) == 0) {
         LAB_0010b7e0:iVar3 = *(int*)( lVar10 + 0x22c );
      }
 else {
         if (*(char*)( *(long*)( lVar10 + 400 ) + 0x1d0 ) != '\0') {
            Node::_update_children_cache_impl();
         }

         iVar4 = *(int*)( lVar10 + 0x21c );
         if (iVar4 == 1) goto LAB_0010b7e0;
         if (iVar4 == 2) {
            iVar3 = *(int*)( *(long*)( lVar10 + 400 ) + 0x228 ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 ) + *(int*)( lVar10 + 0x22c );
         }
 else {
            iVar3 = -1;
            if (iVar4 == 0) {
               iVar3 = *(int*)( lVar10 + 0x22c ) + *(int*)( *(long*)( lVar10 + 400 ) + 0x220 );
            }

         }

      }

      StringName::StringName((StringName*)&local_d8, "_update_bus", false);
      EditorUndoRedoManager::add_undo_method<int>((EditorUndoRedoManager*)this, *(Object**)( lVar10 + 0xb10 ), (StringName*)&local_d8, iVar3);
      if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
         StringName::unref();
      }

      EditorUndoRedoManager::commit_action(SUB81(this, 0));
      if (( ( pSVar7 != (String*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pSVar7 + 0x140 ))(pSVar7);
      Memory::free_static(pSVar7, false);
   }

}
}if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
   StringName::unref();
}
LAB_0010b181:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBuses::EditorAudioBuses() */void EditorAudioBuses::EditorAudioBuses(EditorAudioBuses *this) {
   String *pSVar1;
   code *pcVar2;
   long lVar3;
   undefined8 uVar4;
   BoxContainer *pBVar5;
   Label *this_00;
   Button *pBVar6;
   VSeparator *this_01;
   ScrollContainer *this_02;
   Timer *this_03;
   EditorFileDialog *this_04;
   CallableCustom *this_05;
   long *plVar7;
   long in_FS_OFFSET;
   undefined8 local_90;
   long *local_88;
   undefined8 local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   BoxContainer::BoxContainer((BoxContainer*)this, true);
   this[0xa0c] = (EditorAudioBuses)0x1;
   *(undefined***)this = &PTR__initialize_classv_0012d020;
   *(undefined8*)( this + 0xa70 ) = 0;
   this[0xa78] = (EditorAudioBuses)0x0;
   for (int i = 0; i < 6; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 2576 ) ) = (undefined1[16])0;
   }

   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_0012c5c0;
   postinitialize_handler((Object*)pBVar5);
   *(BoxContainer**)( this + 0xa10 ) = pBVar5;
   Node::add_child(this, pBVar5, 0, 0);
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_68, "audio/buses/default_bus_layout", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_70);
   ResourceUID::ensure_path((String*)&local_78);
   if (*(long*)( this + 0xa68 ) != local_78) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xa68 ));
      lVar3 = local_78;
      local_78 = 0;
      *(long*)( this + 0xa68 ) = lVar3;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   this_00 = (Label*)operator_new(0xad8, "");
   local_68 = (char*)0x0;
   Label::Label(this_00, (String*)&local_68);
   postinitialize_handler((Object*)this_00);
   *(Label**)( this + 0xa30 ) = this_00;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   pSVar1 = *(String**)( this + 0xa30 );
   String::get_file();
   local_68 = "";
   local_78 = 0;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_78);
   local_68 = "Layout:";
   local_80 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_80);
   TTR((String*)&local_88, (String*)&local_80);
   local_68 = "%s %s";
   local_90 = 0;
   local_60 = 5;
   String::parse_latin1((StrRange*)&local_90);
   vformat<String,String>((StringName*)&local_68, (StrRange*)&local_90, (String*)&local_88, (Variant*)&local_70);
   Label::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   Label::set_clip_text(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xa30 ), 3);
   Node::add_child(*(undefined8*)( this + 0xa10 ), *(undefined8*)( this + 0xa30 ), 0, 0);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_68 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_68);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa38 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   Node::add_child(*(undefined8*)( this + 0xa10 ), *(undefined8*)( this + 0xa38 ), 0, 0);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa38 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Add Bus";
   local_78 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa38 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Add a new Audio Bus to this layout.";
   local_78 = 0;
   local_60 = 0x23;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   plVar7 = *(long**)( this + 0xa38 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_add_bus");
   ( *pcVar2 )(plVar7, SceneStringNames::singleton + 0x238, (StringName*)&local_68, 0);
   Callable::~Callable((Callable*)&local_68);
   this_01 = (VSeparator*)operator_new(0x9e0, "");
   VSeparator::VSeparator(this_01);
   postinitialize_handler((Object*)this_01);
   Node::add_child(*(undefined8*)( this + 0xa10 ), this_01, 0, 0);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_68 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_68);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa40 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa40 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Load";
   local_78 = 0;
   local_60 = 4;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa40 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Load an existing Bus Layout.";
   local_78 = 0;
   local_60 = 0x1c;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   Node::add_child(*(undefined8*)( this + 0xa10 ), *(undefined8*)( this + 0xa40 ), 0, 0);
   plVar7 = *(long**)( this + 0xa40 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_load_layout");
   ( *pcVar2 )(plVar7, SceneStringNames::singleton + 0x238, (StringName*)&local_68);
   Callable::~Callable((Callable*)&local_68);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_68 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_68);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa48 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa48 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Save As";
   local_78 = 0;
   local_60 = 7;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa48 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Save this Bus Layout to a file.";
   local_78 = 0;
   local_60 = 0x1f;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   Node::add_child(*(undefined8*)( this + 0xa10 ), *(undefined8*)( this + 0xa48 ), 0, 0);
   plVar7 = *(long**)( this + 0xa48 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_save_as_layout");
   ( *pcVar2 )(plVar7, SceneStringNames::singleton + 0x238, (StringName*)&local_68);
   Callable::~Callable((Callable*)&local_68);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_68 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_68);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa50 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa50 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Load Default";
   local_78 = 0;
   local_60 = 0xc;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa50 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Load the default Bus Layout.";
   local_78 = 0;
   local_60 = 0x1c;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   Node::add_child(*(undefined8*)( this + 0xa10 ), *(undefined8*)( this + 0xa50 ), 0, 0);
   plVar7 = *(long**)( this + 0xa50 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_load_default_layout");
   ( *pcVar2 )(plVar7, SceneStringNames::singleton + 0x238, (StringName*)&local_68, 0);
   Callable::~Callable((Callable*)&local_68);
   pBVar6 = (Button*)operator_new(0xc10, "");
   local_68 = (char*)0x0;
   Button::Button(pBVar6, (String*)&local_68);
   postinitialize_handler((Object*)pBVar6);
   *(Button**)( this + 0xa58 ) = pBVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa58 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Create";
   local_78 = 0;
   local_60 = 6;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   local_68 = "";
   local_70 = 0;
   pSVar1 = *(String**)( this + 0xa58 );
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   local_68 = "Create a new Bus Layout.";
   local_78 = 0;
   local_60 = 0x18;
   String::parse_latin1((StrRange*)&local_78);
   TTR((String*)&local_68, (String*)&local_78);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   Node::add_child(*(undefined8*)( this + 0xa10 ), *(undefined8*)( this + 0xa58 ), 0, 0);
   plVar7 = *(long**)( this + 0xa58 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_new_layout");
   ( *pcVar2 )(plVar7, SceneStringNames::singleton + 0x238, (StringName*)&local_68, 0);
   Callable::~Callable((Callable*)&local_68);
   this_02 = (ScrollContainer*)operator_new(0xa68, "");
   ScrollContainer::ScrollContainer(this_02);
   postinitialize_handler((Object*)this_02);
   *(ScrollContainer**)( this + 0xa18 ) = this_02;
   Control::set_v_size_flags(this_02, 3);
   ScrollContainer::set_vertical_scroll_mode(*(undefined8*)( this + 0xa18 ), 0);
   Node::add_child(this, *(undefined8*)( this + 0xa18 ), 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_0012c5c0;
   postinitialize_handler((Object*)pBVar5);
   *(BoxContainer**)( this + 0xa20 ) = pBVar5;
   Control::set_v_size_flags(pBVar5, 3);
   Node::add_child(*(undefined8*)( this + 0xa18 ), *(undefined8*)( this + 0xa20 ), 0, 0);
   this_03 = (Timer*)operator_new(0x428, "");
   Timer::Timer(this_03);
   postinitialize_handler((Object*)this_03);
   *(Timer**)( this + 0xa60 ) = this_03;
   Timer::set_wait_time(_LC160);
   Timer::set_one_shot(SUB81(*(undefined8*)( this + 0xa60 ), 0));
   Node::add_child(this, *(undefined8*)( this + 0xa60 ), 0, 0);
   plVar7 = *(long**)( this + 0xa60 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_server_save");
   StringName::StringName((StringName*)&local_70, "timeout", false);
   ( *pcVar2 )(plVar7, (Variant*)&local_70, (StringName*)&local_68, 0);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_68);
   Control::set_v_size_flags(this, 3);
   this_04 = (EditorFileDialog*)operator_new(0x1108, "");
   EditorFileDialog::EditorFileDialog(this_04);
   postinitialize_handler((Object*)this_04);
   *(EditorFileDialog**)( this + 0xa70 ) = this_04;
   local_88 = (long*)0x0;
   local_68 = "AudioBusLayout";
   local_70 = 0;
   local_60 = 0xe;
   String::parse_latin1((StrRange*)&local_70);
   ResourceLoader::get_recognized_extensions_for_type((String*)&local_70, (List*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_88 != (long*)0x0) {
      for (lVar3 = *local_88; lVar3 != 0; lVar3 = *(long*)( lVar3 + 8 )) {
         pSVar1 = *(String**)( this + 0xa70 );
         local_70 = 0;
         local_68 = "";
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "Audio Bus Layout";
         local_78 = 0;
         local_60 = 0x10;
         String::parse_latin1((StrRange*)&local_78);
         TTR((String*)&local_68, (String*)&local_78);
         operator+((char *)&
         local_80,(String*)&_LC167;
         EditorFileDialog::add_filter(pSVar1, (String*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

   }

   Node::add_child(this, *(undefined8*)( this + 0xa70 ), 0, 0);
   plVar7 = *(long**)( this + 0xa70 );
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   this_05 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_05);
   *(undefined**)( this_05 + 0x20 ) = &_LC2;
   *(EditorAudioBuses**)( this_05 + 0x28 ) = this;
   *(undefined1(*) [16])( this_05 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_05 = &PTR_hash_0012e868;
   *(undefined8*)( this_05 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_05 + 0x10 ) = 0;
   *(undefined8*)( this_05 + 0x30 ) = uVar4;
   *(code**)( this_05 + 0x38 ) = _file_dialog_callback;
   CallableCustomMethodPointerBase::_setup((uint*)this_05, (int)this_05 + 0x28);
   *(char**)( this_05 + 0x20 ) = "EditorAudioBuses::_file_dialog_callback";
   Callable::Callable((Callable*)&local_68, this_05);
   StringName::StringName((StringName*)&local_70, "file_selected", false);
   ( *pcVar2 )(plVar7, (Variant*)&local_70, (StringName*)&local_68, 0);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_68);
   plVar7 = (long*)AudioServer::get_singleton();
   pcVar2 = *(code**)( *plVar7 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)this, (_func_void*)"&EditorAudioBuses::_rebuild_buses");
   StringName::StringName((StringName*)&local_70, "bus_layout_changed", false);
   ( *pcVar2 )(plVar7, (Variant*)&local_70, (StringName*)&local_68, 0);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_68);
   Node::set_process(SUB81(this, 0));
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioBuses::register_editor() */EditorAudioBuses *EditorAudioBuses::register_editor(void) {
   undefined8 uVar1;
   char cVar2;
   EditorAudioBuses *this;
   long in_FS_OFFSET;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   Object *local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this(EditorAudioBuses * operator_new(0xa80, ""));
   EditorAudioBuses(this);
   postinitialize_handler((Object*)this);
   local_68 = 0;
   uVar1 = *(undefined8*)( EditorNode::singleton + 0xa40 );
   local_58 = "";
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_68);
   local_58 = "Toggle Audio Bottom Panel";
   local_70 = 0;
   local_50 = 0x19;
   String::parse_latin1((StrRange*)&local_70);
   local_58 = "bottom_panels/toggle_audio_bottom_panel";
   local_78 = 0;
   local_50 = 0x27;
   String::parse_latin1((StrRange*)&local_78);
   ED_SHORTCUT_AND_COMMAND(&local_60, (StrRange*)&local_78, (StrRange*)&local_70, 0x4000041, (StrRange*)&local_68);
   local_58 = "";
   local_80 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_80);
   local_58 = "Audio";
   local_88 = 0;
   local_50 = 5;
   String::parse_latin1((StrRange*)&local_88);
   TTR((String*)&local_58, (String*)&local_88);
   EditorBottomPanel::add_item(uVar1, (String*)&local_58, this, &local_60, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (local_60 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_60);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_60 + 0x140 ) )(local_60);
            Memory::free_static(local_60, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBus::EditorAudioBus(EditorAudioBuses*, bool) */void EditorAudioBus::EditorAudioBus(EditorAudioBus *this, EditorAudioBuses *param_1, bool param_2) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   String *pSVar4;
   Vector2 *pVVar5;
   undefined8 uVar6;
   char cVar7;
   int iVar8;
   BoxContainer *this_00;
   LineEdit *this_01;
   CallableCustom *pCVar9;
   BoxContainer *this_02;
   Button *pBVar10;
   StyleBox *this_03;
   Object *pOVar11;
   StringName *pSVar12;
   Object *pOVar13;
   StyleBoxFlat *this_04;
   HSeparator *this_05;
   Control *pCVar14;
   BoxContainer *this_06;
   Panel *this_07;
   BoxContainer *this_08;
   Label *this_09;
   Timer *this_10;
   TextureProgressBar *pTVar15;
   undefined8 *puVar16;
   undefined1(*pauVar17)[16];
   Tree *this_11;
   OptionButton *this_12;
   PopupMenu *pPVar18;
   MenuButton *this_13;
   Ref *pRVar19;
   long lVar20;
   bool bVar21;
   EditorAudioBus *pEVar22;
   EditorAudioBus *pEVar23;
   int iVar24;
   long in_FS_OFFSET;
   byte bVar25;
   float fVar26;
   undefined4 uVar27;
   Tree local_b8[16];
   Callable local_a8[16];
   undefined8 *local_98[2];
   Object *local_88[2];
   long local_78[2];
   Object *local_68[2];
   long local_58;
   undefined8 uStack_50;
   long local_40;
   bVar25 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   PanelContainer::PanelContainer((PanelContainer*)this);
   *(undefined***)this = &PTR__initialize_classv_0012d398;
   *(undefined1(*) [16])( this + 0xa08 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa18 ) = (undefined1[16])0x0;
   pEVar22 = this + 0xa30;
   for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
      *(undefined8*)pEVar22 = 0;
      pEVar22 = pEVar22 + (ulong)bVar25 * -0x10 + 8;
   }

   this[0xb09] = (EditorAudioBus)param_2;
   *(undefined8*)( this + 0xb00 ) = 0;
   this[0xb08] = (EditorAudioBus)0x0;
   this[0xb0a] = (EditorAudioBus)0x0;
   *(EditorAudioBuses**)( this + 0xb10 ) = param_1;
   for (int i = 0; i < 5; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 2736 ) ) = (undefined1[16])0;
   }

   local_68[0] = (Object*)0x0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Drag & drop to rearrange.");
   TTR((String*)local_88, (String*)local_78);
   Control::set_tooltip_text((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, true);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_0012c938;
   postinitialize_handler((Object*)this_00);
   EditorScale::get_scale();
   StringName::StringName((StringName*)local_68, "separation", false);
   Control::add_theme_constant_override((StringName*)this_00, (int)(String*)local_68);
   if (( StringName::configured != '\0' ) && ( local_68[0] != (Object*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(this, this_00, 0, 0);
   Control::set_v_size_flags(this, 3);
   this_01 = (LineEdit*)operator_new(0xbb0, "");
   local_68[0] = (Object*)0x0;
   LineEdit::LineEdit(this_01, (String*)local_68);
   postinitialize_handler((Object*)this_01);
   *(LineEdit**)( this + 0xa10 ) = this_01;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   plVar1 = *(long**)( this + 0xa10 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(EditorAudioBus**)( pCVar9 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( pCVar9 + 0x20 ) = &_LC2;
   *(undefined***)pCVar9 = &PTR_hash_0012e088;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar3;
   *(code**)( pCVar9 + 0x38 ) = _name_changed;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "EditorAudioBus::_name_changed";
   Callable::Callable((Callable*)local_68, pCVar9);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x278, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar1 = *(long**)( this + 0xa10 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBus>((EditorAudioBus*)local_68, (char*)this, (_func_void*)"&EditorAudioBus::_name_focus_exit");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0xe0, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Node::add_child(this_00, *(undefined8*)( this + 0xa10 ), 0, 0);
   this_02 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_02, false);
   this_02[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_02 = &PTR__initialize_classv_0012c5c0;
   postinitialize_handler((Object*)this_02);
   Node::add_child(this_00, this_02, 0, 0);
   pBVar10 = (Button*)operator_new(0xc10, "");
   local_68[0] = (Object*)0x0;
   Button::Button(pBVar10, (String*)local_68);
   postinitialize_handler((Object*)pBVar10);
   *(Button**)( this + 0xae8 ) = pBVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_theme_type_variation(*(StringName**)( this + 0xae8 ));
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xae8 ), 0));
   pSVar4 = *(String**)( this + 0xae8 );
   local_68[0] = (Object*)0x0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Solo");
   TTR((String*)local_88, (String*)local_78);
   Control::set_tooltip_text(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xae8 ), 0);
   plVar1 = *(long**)( this + 0xae8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBus>((EditorAudioBus*)local_68, (char*)this, (_func_void*)"&EditorAudioBus::_solo_toggled");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Node::add_child(this_02, *(undefined8*)( this + 0xae8 ), 0, 0);
   pBVar10 = (Button*)operator_new(0xc10, "");
   local_68[0] = (Object*)0x0;
   Button::Button(pBVar10, (String*)local_68);
   postinitialize_handler((Object*)pBVar10);
   *(Button**)( this + 0xaf0 ) = pBVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_theme_type_variation(*(StringName**)( this + 0xaf0 ));
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xaf0 ), 0));
   pSVar4 = *(String**)( this + 0xaf0 );
   local_68[0] = (Object*)0x0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Mute");
   TTR((String*)local_88, (String*)local_78);
   Control::set_tooltip_text(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xaf0 ), 0);
   plVar1 = *(long**)( this + 0xaf0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBus>((EditorAudioBus*)local_68, (char*)this, (_func_void*)"&EditorAudioBus::_mute_toggled");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Node::add_child(this_02, *(undefined8*)( this + 0xaf0 ), 0, 0);
   pBVar10 = (Button*)operator_new(0xc10, "");
   local_68[0] = (Object*)0x0;
   Button::Button(pBVar10, (String*)local_68);
   postinitialize_handler((Object*)pBVar10);
   *(Button**)( this + 0xaf8 ) = pBVar10;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_theme_type_variation(*(StringName**)( this + 0xaf8 ));
   BaseButton::set_toggle_mode(SUB81(*(undefined8*)( this + 0xaf8 ), 0));
   pSVar4 = *(String**)( this + 0xaf8 );
   local_68[0] = (Object*)0x0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Bypass");
   TTR((String*)local_88, (String*)local_78);
   Control::set_tooltip_text(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xaf8 ), 0);
   plVar1 = *(long**)( this + 0xaf8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorAudioBus>((EditorAudioBus*)local_68, (char*)this, (_func_void*)"&EditorAudioBus::_bypass_toggled");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Node::add_child(this_02, *(undefined8*)( this + 0xaf8 ), 0, 0);
   BoxContainer::add_spacer(SUB81(this_02, 0));
   this_03 = (StyleBox*)operator_new(0x2b0, "");
   StyleBox::StyleBox(this_03);
   *(undefined***)this_03 = &PTR__initialize_classv_0012c3c0;
   postinitialize_handler((Object*)this_03);
   cVar7 = RefCounted::init_ref();
   pOVar11 = (Object*)0x0;
   if (cVar7 != '\0') {
      pOVar11 = (Object*)this_03;
   }

   iVar24 = 0;
   do {
    iVar8 = Node::get_child_count(SUB81(this_02,0));
    if (iVar8 <= iVar24) {
      this_05 = (HSeparator *)operator_new(0x9e0,"");
      HSeparator::HSeparator(this_05);
      postinitialize_handler((Object *)this_05);
      Control::set_mouse_filter(this_05,1);
      Node::add_child(this_00,this_05,0,0);
      pCVar14 = (Control *)operator_new(0x9c8,"");
      Control::Control(pCVar14);
      postinitialize_handler((Object *)pCVar14);
      fVar26 = (float)EditorScale::get_scale();
      local_58 = (ulong)(uint)(fVar26 * _LC175) << 0x20;
      Control::set_custom_minimum_size((Vector2 *)pCVar14);
      Node::add_child(this_00,pCVar14,0,0);
      this_06 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(this_06,false);
      *(undefined ***)this_06 = &PTR__initialize_classv_0012c5c0;
      this_06[0xa0c] = (BoxContainer)0x1;
      postinitialize_handler((Object *)this_06);
      Node::add_child(this_00,this_06,0,0);
      pCVar14 = (Control *)operator_new(0x9c8,"");
      Control::Control(pCVar14);
      postinitialize_handler((Object *)pCVar14);
      fVar26 = (float)EditorScale::get_scale();
      local_58 = (ulong)(uint)(fVar26 + fVar26) << 0x20;
      Control::set_custom_minimum_size((Vector2 *)pCVar14);
      Node::add_child(this_00,pCVar14,0,0);
      pOVar13 = (Object *)operator_new(0xa80,"");
      Slider::Slider((Slider *)pOVar13,1);
      *(undefined ***)pOVar13 = &PTR__initialize_classv_0012ccb0;
      Control::set_h_size_flags(pOVar13,0);
      postinitialize_handler(pOVar13);
      *(Object **)(this + 0xa20) = pOVar13;
      Range::set_min(0.0);
      Range::set_max(_LC48);
      Range::set_step(_LC196);
      Control::set_clip_contents(SUB81(*(undefined8 *)(this + 0xa20),0));
      this_07 = (Panel *)operator_new(0x9d0,"");
      Panel::Panel(this_07);
      postinitialize_handler((Object *)this_07);
      *(Panel **)(this + 0xad0) = this_07;
      Node::add_child(*(undefined8 *)(this + 0xa20),this_07,0,0);
      CanvasItem::set_as_top_level(SUB81(*(undefined8 *)(this + 0xad0),0));
      Control::set_mouse_filter(*(undefined8 *)(this + 0xad0),1);
      CanvasItem::hide();
      this_08 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(this_08,false);
      *(undefined ***)this_08 = &PTR__initialize_classv_0012c5c0;
      this_08[0xa0c] = (BoxContainer)0x1;
      postinitialize_handler((Object *)this_08);
      Control::set_v_size_flags(this_08,3);
      Control::set_h_size_flags(this_08,3);
      Node::add_child(*(undefined8 *)(this + 0xad0),this_08,0,0);
      this_09 = (Label *)operator_new(0xad8,"");
      local_68[0] = (Object *)0x0;
      Label::Label(this_09,(String *)local_68);
      postinitialize_handler((Object *)this_09);
      *(Label **)(this + 0xad8) = this_09;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      Control::set_v_size_flags(*(undefined8 *)(this + 0xad8),3);
      Control::set_h_size_flags(*(undefined8 *)(this + 0xad8),3);
      Control::set_mouse_filter(*(undefined8 *)(this + 0xad8),1);
      Node::add_child(this_08,*(undefined8 *)(this + 0xad8),0,0);
      this_10 = (Timer *)operator_new(0x428,"");
      Timer::Timer(this_10);
      postinitialize_handler((Object *)this_10);
      *(Timer **)(this + 0xae0) = this_10;
      Timer::set_wait_time(_LC197);
      Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xae0),0));
      Node::add_child(this,*(undefined8 *)(this + 0xae0),0,0);
      plVar1 = *(long **)(this + 0xa20);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus,float>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void_float *)"&EditorAudioBus::_volume_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xa20);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus,float>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void_float *)"&EditorAudioBus::_show_value");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x280,(String *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xae0);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void *)"&EditorAudioBus::_hide_value_preview");
      StringName::StringName((StringName *)local_78,"timeout",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      Node::add_child(this_06,*(undefined8 *)(this + 0xa20),0,0);
      *(undefined4 *)(this + 0xa28) = 0;
      pEVar22 = this + 0xa34;
      do {
        pEVar23 = pEVar22 + 0x20;
        pTVar15 = (TextureProgressBar *)operator_new(0xa68,"");
        TextureProgressBar::TextureProgressBar(pTVar15);
        postinitialize_handler((Object *)pTVar15);
        *(TextureProgressBar **)(pEVar22 + 0xc) = pTVar15;
        TextureProgressBar::set_fill_mode((int)pTVar15);
        Node::add_child(this_06,*(undefined8 *)(pEVar22 + 0xc),0,0);
        Range::set_min(_LC201);
        Range::set_max(_LC202);
        Range::set_step(_LC203);
        pTVar15 = (TextureProgressBar *)operator_new(0xa68,"");
        TextureProgressBar::TextureProgressBar(pTVar15);
        postinitialize_handler((Object *)pTVar15);
        *(TextureProgressBar **)(pEVar22 + 0x14) = pTVar15;
        TextureProgressBar::set_fill_mode((int)pTVar15);
        Node::add_child(this_06,*(undefined8 *)(pEVar22 + 0x14),0);
        Range::set_min(_LC201);
        Range::set_max(_LC202);
        Range::set_step(_LC203);
        *(undefined8 *)pEVar22 = 0;
        pEVar22 = pEVar23;
      } while (pEVar23 != this + 0xab4);
      iVar24 = 0xf;
      pCVar14 = (Control *)operator_new(0xa00,"");
      bVar21 = true;
      Control::Control(pCVar14);
      uVar6 = _UNK_0012ef58;
      uVar3 = __LC204;
      *(undefined ***)pCVar14 = &PTR__initialize_classv_0012dd20;
      *(undefined8 *)(pCVar14 + 0x9d0) = uVar3;
      *(undefined8 *)(pCVar14 + 0x9d8) = uVar6;
      uVar6 = _UNK_0012ef68;
      uVar3 = __LC205;
      *(undefined8 *)(pCVar14 + 0x9c8) = 0;
      *(undefined8 *)(pCVar14 + 0x9e0) = 0;
      *(undefined4 *)(pCVar14 + 0x9e8) = 0;
      *(undefined8 *)(pCVar14 + 0x9f0) = uVar3;
      *(undefined8 *)(pCVar14 + 0x9f8) = uVar6;
      postinitialize_handler((Object *)pCVar14);
      fVar26 = _LC175;
      while( true ) {
        uVar27 = _scaled_db_to_normalized_volume(fVar26);
        if (*(long *)(pCVar14 + 0x9c8) == 0) {
          pauVar17 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])(pCVar14 + 0x9c8) = pauVar17;
          *(undefined4 *)pauVar17[1] = 0;
          *pauVar17 = (undefined1  [16])0x0;
        }
        puVar16 = (undefined8 *)operator_new(0x28,DefaultAllocator::alloc);
        plVar1 = *(long **)(pCVar14 + 0x9c8);
        puVar16[2] = 0;
        *puVar16 = CONCAT44(fVar26,uVar27);
        lVar20 = plVar1[1];
        *(bool *)(puVar16 + 1) = bVar21;
        puVar16[3] = lVar20;
        puVar16[4] = plVar1;
        if (lVar20 != 0) {
          *(undefined8 **)(lVar20 + 0x10) = puVar16;
        }
        plVar1[1] = (long)puVar16;
        if (*plVar1 == 0) {
          *plVar1 = (long)puVar16;
        }
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        fVar26 = fVar26 - _LC175;
        iVar24 = iVar24 + -1;
        if (iVar24 == 0) break;
        bVar21 = true;
        if (fVar26 < __LC206) {
          bVar21 = fVar26 == __LC207 || fVar26 == __LC208;
        }
      }
      Control::set_mouse_filter(pCVar14,1);
      Node::add_child(this_06,pCVar14,0,0);
      this_11 = (Tree *)operator_new(0xdc8,"");
      Tree::Tree(this_11);
      postinitialize_handler((Object *)this_11);
      *(Tree **)(this + 0xb00) = this_11;
      Node::set_auto_translate_mode(this_11,2);
      Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xb00),0));
      pVVar5 = *(Vector2 **)(this + 0xb00);
      fVar26 = (float)EditorScale::get_scale();
      local_58 = CONCAT44(fVar26 * _LC209._4_4_,fVar26 * (float)_LC209);
      Control::set_custom_minimum_size(pVVar5);
      Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xb00),0));
      Control::set_v_size_flags(*(undefined8 *)(this + 0xb00),3);
      Node::add_child(this_00,*(undefined8 *)(this + 0xb00),0,0);
      plVar1 = *(long **)(this + 0xb00);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void *)"&EditorAudioBus::_effect_edited");
      StringName::StringName((StringName *)local_78,"item_edited",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xb00);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void *)"&EditorAudioBus::_effect_selected");
      StringName::StringName((StringName *)local_78,"cell_selected",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xb00);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      pCVar9 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar9);
      *(long **)(pCVar9 + 0x28) = plVar1;
      *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined **)(pCVar9 + 0x20) = &_LC2;
      *(undefined8 *)(pCVar9 + 0x40) = 0;
      lVar20 = plVar1[0xc];
      *(undefined ***)pCVar9 = &PTR_hash_0012e238;
      *(long *)(pCVar9 + 0x30) = lVar20;
      *(undefined8 *)(pCVar9 + 0x10) = 0;
      *(code **)(pCVar9 + 0x38) = Tree::deselect_all;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
      *(char **)(pCVar9 + 0x20) = "Tree::deselect_all";
      Callable::Callable((Callable *)local_68,pCVar9);
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0xe0,(String *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      Tree::set_edit_checkbox_cell_only_when_checkbox_is_pressed
                (SUB81(*(undefined8 *)(this + 0xb00),0));
      plVar1 = *(long **)(this + 0xb00);
      pcVar2 = *(code **)(*plVar1 + 0x318);
      pCVar9 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar9);
      *(undefined **)(pCVar9 + 0x20) = &_LC2;
      *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar9 = &PTR_hash_0012e3e8;
      *(undefined8 *)(pCVar9 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar9 + 0x10) = 0;
      *(undefined8 *)(pCVar9 + 0x30) = uVar3;
      *(code **)(pCVar9 + 0x38) = drop_data_fw;
      *(EditorAudioBus **)(pCVar9 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
      *(char **)(pCVar9 + 0x20) = "EditorAudioBus::drop_data_fw";
      Callable::Callable((Callable *)local_68,pCVar9);
      Callable::bind<Tree*>((Tree *)local_78);
      pCVar9 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar9);
      *(undefined **)(pCVar9 + 0x20) = &_LC2;
      *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar9 = &PTR_hash_0012e358;
      *(undefined8 *)(pCVar9 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar9 + 0x10) = 0;
      *(undefined8 *)(pCVar9 + 0x30) = uVar3;
      *(code **)(pCVar9 + 0x38) = can_drop_data_fw;
      *(EditorAudioBus **)(pCVar9 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
      *(char **)(pCVar9 + 0x20) = "EditorAudioBus::can_drop_data_fw";
      Callable::Callable((Callable *)local_88,pCVar9);
      Callable::bind<Tree*>((Tree *)local_98);
      pCVar9 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar9);
      *(undefined **)(pCVar9 + 0x20) = &_LC2;
      *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined8 *)(pCVar9 + 0x40) = 0;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined ***)pCVar9 = &PTR_hash_0012e2c8;
      *(undefined8 *)(pCVar9 + 0x30) = uVar3;
      *(code **)(pCVar9 + 0x38) = get_drag_data_fw;
      *(undefined8 *)(pCVar9 + 0x10) = 0;
      *(EditorAudioBus **)(pCVar9 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
      *(char **)(pCVar9 + 0x20) = "EditorAudioBus::get_drag_data_fw";
      Callable::Callable(local_a8,pCVar9);
      Callable::bind<Tree*>(local_b8);
      (*pcVar2)(plVar1,local_b8,(Tree *)local_98,(String *)local_78);
      Callable::~Callable((Callable *)local_b8);
      Callable::~Callable(local_a8);
      Callable::~Callable((Callable *)local_98);
      Callable::~Callable((Callable *)local_88);
      Callable::~Callable((Callable *)local_78);
      Callable::~Callable((Callable *)local_68);
      plVar1 = *(long **)(this + 0xb00);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      pCVar9 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar9);
      *(undefined8 *)(pCVar9 + 0x40) = 0;
      *(undefined **)(pCVar9 + 0x20) = &_LC2;
      *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar9 = &PTR_hash_0012e478;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar9 + 0x10) = 0;
      *(undefined8 *)(pCVar9 + 0x30) = uVar3;
      *(code **)(pCVar9 + 0x38) = _effect_rmb;
      *(EditorAudioBus **)(pCVar9 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
      *(char **)(pCVar9 + 0x20) = "EditorAudioBus::_effect_rmb";
      Callable::Callable((Callable *)local_68,pCVar9);
      StringName::StringName((StringName *)local_78,"item_mouse_selected",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      Tree::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0xb00),0));
      Control::set_focus_mode(*(undefined8 *)(this + 0xb00),1);
      Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xb00),0));
      pSVar12 = *(StringName **)(this + 0xb00);
      StringName::StringName((StringName *)local_68,"TreeSecondary",false);
      Control::set_theme_type_variation(pSVar12);
      if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
        StringName::unref();
      }
      plVar1 = *(long **)(this + 0xb00);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      pCVar9 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(pCVar9);
      *(undefined8 *)(pCVar9 + 0x40) = 0;
      *(undefined **)(pCVar9 + 0x20) = &_LC2;
      *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)pCVar9 = &PTR_hash_0012e508;
      uVar3 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(pCVar9 + 0x10) = 0;
      *(undefined8 *)(pCVar9 + 0x30) = uVar3;
      *(code **)(pCVar9 + 0x38) = _effects_gui_input;
      *(EditorAudioBus **)(pCVar9 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
      *(char **)(pCVar9 + 0x20) = "EditorAudioBus::_effects_gui_input";
      Callable::Callable((Callable *)local_68,pCVar9);
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(String *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      this_12 = (OptionButton *)operator_new(0xd00,"");
      local_68[0] = (Object *)0x0;
      OptionButton::OptionButton(this_12,(String *)local_68);
      postinitialize_handler((Object *)this_12);
      *(OptionButton **)(this + 0xab0) = this_12;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      Node::set_auto_translate_mode(*(undefined8 *)(this + 0xab0),2);
      Button::set_clip_text(SUB81(*(undefined8 *)(this + 0xab0),0));
      plVar1 = *(long **)(this + 0xab0);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus,int>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void_int *)"&EditorAudioBus::_send_selected");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,(String *)local_68,0);
      Callable::~Callable((Callable *)local_68);
      Node::add_child(this_00,*(undefined8 *)(this + 0xab0),0,0);
      Control::set_focus_mode(this,1);
      pPVar18 = (PopupMenu *)operator_new(0xfe0,"");
      PopupMenu::PopupMenu(pPVar18);
      postinitialize_handler((Object *)pPVar18);
      *(PopupMenu **)(this + 0xab8) = pPVar18;
      Node::set_auto_translate_mode(pPVar18,2);
      plVar1 = *(long **)(this + 0xab8);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus,int>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void_int *)"&EditorAudioBus::_effect_add");
      StringName::StringName((StringName *)local_78,"index_pressed",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      Node::add_child(this,*(undefined8 *)(this + 0xab8),0,0);
      local_98[0] = (undefined8 *)0x0;
      StringName::StringName((StringName *)local_68,"AudioEffect",false);
      ClassDB::get_inheriters_from_class((StringName *)local_68,(List *)local_98);
      if ((StringName::configured != '\0') && (local_68[0] != (Object *)0x0)) {
        StringName::unref();
      }
      List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
                ((List<StringName,DefaultAllocator> *)local_98);
      if (local_98[0] != (undefined8 *)0x0) {
        for (pSVar12 = (StringName *)*local_98[0]; pSVar12 != (StringName *)0x0;
            pSVar12 = *(StringName **)(pSVar12 + 8)) {
          cVar7 = ClassDB::can_instantiate(pSVar12);
          if ((cVar7 != '\0') && (cVar7 = ClassDB::is_virtual(pSVar12), cVar7 == '\0')) {
            lVar20 = *(long *)pSVar12;
            if (lVar20 == 0) {
              local_68[0] = (Object *)0x0;
            }
            else {
              local_68[0] = (Object *)0x0;
              if (*(char **)(lVar20 + 8) == (char *)0x0) {
                if (*(long *)(lVar20 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_68,(CowData *)(lVar20 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)local_68,*(char **)(lVar20 + 8));
              }
            }
            String::replace((char *)local_78,(char *)local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
            PopupMenu::add_item(*(undefined8 *)(this + 0xab8),(String *)local_78,0xffffffff,0);
            uVar3 = *(undefined8 *)(this + 0xab8);
            Variant::Variant((Variant *)&local_58,pSVar12);
            PopupMenu::set_item_metadata((int)uVar3,(Variant *)0xffffffff);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          }
        }
      }
      this_13 = (MenuButton *)operator_new(0xc68,"");
      local_68[0] = (Object *)0x0;
      MenuButton::MenuButton(this_13,(String *)local_68);
      postinitialize_handler((Object *)this_13);
      *(MenuButton **)(this + 0xa18) = this_13;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      Control::set_shortcut_context(*(Node **)(this + 0xa18));
      Control::set_h_size_flags(*(undefined8 *)(this + 0xa18),8);
      Control::set_anchor(0,*(undefined8 *)(this + 0xa18),2,1,1);
      pSVar4 = *(String **)(this + 0xa18);
      local_68[0] = (Object *)0x0;
      String::parse_latin1((String *)local_68,"");
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"Bus Options");
      TTR((String *)local_88,(String *)local_78);
      Control::set_tooltip_text(pSVar4);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      Node::add_child(this_02,*(undefined8 *)(this + 0xa18),0,0);
      pRVar19 = (Ref *)MenuButton::get_popup();
      local_68[0] = (Object *)0x0;
      *(Ref **)(this + 0xac0) = pRVar19;
      String::parse_latin1((String *)local_68,"Duplicate Bus");
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"audio_bus_editor/duplicate_selected_bus");
      ED_SHORTCUT((String *)local_88,(String *)local_78,(String *)local_68,0x1000044,0);
      iVar24 = (int)(String *)local_88;
      PopupMenu::add_shortcut(pRVar19,iVar24,true,false);
      if (((local_88[0] != (Object *)0x0) &&
          (cVar7 = RefCounted::unreference(), pOVar13 = local_88[0], cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_88[0]), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      pRVar19 = *(Ref **)(this + 0xac0);
      local_68[0] = (Object *)0x0;
      String::parse_latin1((String *)local_68,"Delete Bus");
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"audio_bus_editor/delete_selected_bus");
      ED_SHORTCUT((String *)local_88,(String *)local_78,(String *)local_68,0x400008,0);
      PopupMenu::add_shortcut(pRVar19,iVar24,true,false);
      if (((local_88[0] != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(local_88[0]), cVar7 != '\0')) {
        (**(code **)(*(long *)local_88[0] + 0x140))(local_88[0]);
        Memory::free_static(local_88[0],false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      PopupMenu::set_item_disabled((int)*(undefined8 *)(this + 0xac0),true);
      uVar3 = *(undefined8 *)(this + 0xac0);
      local_68[0] = (Object *)0x0;
      String::parse_latin1((String *)local_68,"");
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"Reset Volume");
      TTR((String *)local_88,(String *)local_78);
      PopupMenu::add_item(uVar3,(String *)local_88,0xffffffff,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      plVar1 = *(long **)(this + 0xac0);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus,int>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void_int *)"&EditorAudioBus::_bus_popup_pressed");
      StringName::StringName((StringName *)local_78,"index_pressed",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      pPVar18 = (PopupMenu *)operator_new(0xfe0,"");
      PopupMenu::PopupMenu(pPVar18);
      postinitialize_handler((Object *)pPVar18);
      *(PopupMenu **)(this + 0xac8) = pPVar18;
      local_68[0] = (Object *)0x0;
      String::parse_latin1((String *)local_68,"");
      local_78[0] = 0;
      String::parse_latin1((String *)local_78,"Delete Effect");
      TTR((String *)local_88,(String *)local_78);
      PopupMenu::add_item(pPVar18,(String *)local_88,0xffffffff,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      Node::add_child(this,*(undefined8 *)(this + 0xac8),0,0);
      plVar1 = *(long **)(this + 0xac8);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<EditorAudioBus,int>
                ((EditorAudioBus *)local_68,(char *)this,
                 (_func_void_int *)"&EditorAudioBus::_delete_effect_pressed");
      StringName::StringName((StringName *)local_78,"index_pressed",false);
      (*pcVar2)(plVar1,(String *)local_78,(String *)local_68,0);
      if ((StringName::configured != '\0') && (local_78[0] != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_68);
      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)local_98);
      if (((pOVar11 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
         (cVar7 = predelete_handler(pOVar11), cVar7 != '\0')) {
        (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
        Memory::free_static(pOVar11,false);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    pSVar12 = (StringName *)Node::get_child((int)this_02,SUB41(iVar24,0));
    if (pSVar12 != (StringName *)0x0) {
      pSVar12 = (StringName *)__dynamic_cast(pSVar12,&Object::typeinfo,&Control::typeinfo,0);
    }
    Control::begin_bulk_theme_override();
    local_68[0] = (Object *)0x0;
    if (pOVar11 == (Object *)0x0) {
      Control::add_theme_style_override(pSVar12,(Ref *)(CoreStringNames::singleton + 0xb8));
      if (local_68[0] != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 != '\0') goto LAB_0010dc68;
        local_68[0] = (Object *)0x0;
      }
LAB_0010db25:
      Control::add_theme_style_override(pSVar12,(Ref *)(SceneStringNames::singleton + 0x250));
      if (local_68[0] != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 != '\0') goto LAB_0010db5c;
        goto LAB_0010d750;
      }
    }
    else {
      pOVar13 = (Object *)__dynamic_cast(pOVar11,&Object::typeinfo,&StyleBox::typeinfo,0);
      if ((pOVar13 != (Object *)0x0) &&
         (local_68[0] = pOVar13, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
        local_68[0] = (Object *)0x0;
      }
      Control::add_theme_style_override(pSVar12,(Ref *)(CoreStringNames::singleton + 0xb8));
      if (local_68[0] != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 == '\0') {
          local_68[0] = (Object *)0x0;
        }
        else {
LAB_0010dc68:
          pOVar13 = local_68[0];
          cVar7 = predelete_handler(local_68[0]);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
          local_68[0] = (Object *)0x0;
          if (pOVar11 == (Object *)0x0) goto LAB_0010db25;
        }
      }
      pOVar13 = (Object *)__dynamic_cast(pOVar11,&Object::typeinfo,&StyleBox::typeinfo,0);
      if ((pOVar13 != (Object *)0x0) &&
         (local_68[0] = pOVar13, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
        local_68[0] = (Object *)0x0;
      }
      Control::add_theme_style_override(pSVar12,(Ref *)(SceneStringNames::singleton + 0x250));
      if (local_68[0] != (Object *)0x0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 == '\0') {
          local_68[0] = (Object *)0x0;
        }
        else {
LAB_0010db5c:
          pOVar13 = local_68[0];
          cVar7 = predelete_handler(local_68[0]);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
          local_68[0] = (Object *)0x0;
          if (pOVar11 == (Object *)0x0) goto LAB_0010d75c;
        }
      }
      pOVar13 = (Object *)__dynamic_cast(pOVar11,&Object::typeinfo,&StyleBox::typeinfo,0);
      if ((pOVar13 != (Object *)0x0) &&
         (local_68[0] = pOVar13, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
LAB_0010d750:
        local_68[0] = (Object *)0x0;
      }
    }
LAB_0010d75c:
    StringName::StringName((StringName *)local_78,"hover_mirrored",false);
    Control::add_theme_style_override(pSVar12,(Ref *)local_78);
    if ((StringName::configured != '\0') && (local_78[0] != 0)) {
      StringName::unref();
    }
    if (((local_68[0] != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar13 = local_68[0], cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_68[0]), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    local_68[0] = (Object *)0x0;
    if (((pOVar11 != (Object *)0x0) &&
        (pOVar13 = (Object *)__dynamic_cast(pOVar11,&Object::typeinfo,&StyleBox::typeinfo,0),
        pOVar13 != (Object *)0x0)) &&
       (local_68[0] = pOVar13, cVar7 = RefCounted::reference(), cVar7 == '\0')) {
      local_68[0] = (Object *)0x0;
    }
    StringName::StringName((StringName *)local_78,"focus",false);
    Control::add_theme_style_override(pSVar12,(Ref *)local_78);
    if ((StringName::configured != '\0') && (local_78[0] != 0)) {
      StringName::unref();
    }
    if (((local_68[0] != (Object *)0x0) &&
        (cVar7 = RefCounted::unreference(), pOVar13 = local_68[0], cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_68[0]), cVar7 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
}
local_68[0] = (Object*)0x0;if (( ( pOVar11 != (Object*)0x0 ) && ( pOVar13 = (Object*)__dynamic_cast(pOVar11, &Object::typeinfo, &StyleBox::typeinfo, 0) ),pOVar13 != (Object*)0x0 )) {
   local_68[0] = (Object*)0x0;
}
StringName::StringName((StringName*)local_78, "focus_mirrored", false);Control::add_theme_style_override(pSVar12, (Ref*)local_78);if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
   StringName::unref();
}
if (( ( local_68[0] != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar13 = local_68[0],cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar13 + 0x140 ))(pOVar13);Memory::free_static(pOVar13, false);}this_04 = (StyleBoxFlat*)operator_new(0x338, "");StyleBoxFlat::StyleBoxFlat(this_04);postinitialize_handler((Object*)this_04);cVar7 = RefCounted::init_ref();if (cVar7 == '\0') {
   this_04 = (StyleBoxFlat*)0x0;
}
StyleBox::set_content_margin_all(0.0);local_58 = __LC37;uStack_50 = _UNK_0012ef48;StyleBoxFlat::set_bg_color((Color*)this_04);fVar26 = (float)EditorScale::get_scale();fVar26 = roundf(fVar26 * __LC191);StyleBoxFlat::set_border_width(this_04, 3, (int)fVar26);local_68[0] = (Object*)0x0;pOVar13 = (Object*)__dynamic_cast(this_04, &Object::typeinfo, &StyleBox::typeinfo, 0);if (( pOVar13 != (Object*)0x0 ) && ( local_68[0] = pOVar13 ),cVar7 = RefCounted::reference(),cVar7 == '\0') {
   local_68[0] = (Object*)0x0;
}
Control::add_theme_style_override(pSVar12, (Ref*)( SceneStringNames::singleton + 0x238 ));if (local_68[0] != (Object*)0x0) {
   cVar7 = RefCounted::unreference();
   pOVar13 = local_68[0];
   if (( cVar7 == '\0' ) || ( cVar7 = predelete_handler(local_68[0]) ),cVar7 == '\0') {
      local_68[0] = (Object*)0x0;
   }
 else {
      ( **(code**)( *(long*)pOVar13 + 0x140 ) )();
      Memory::free_static(pOVar13, false);
      local_68[0] = (Object*)0x0;
   }

}
pOVar13 = (Object*)__dynamic_cast(this_04, &Object::typeinfo, &StyleBox::typeinfo, 0);if (( pOVar13 != (Object*)0x0 ) && ( local_68[0] = pOVar13 ),cVar7 = RefCounted::reference(),cVar7 == '\0') {
   local_68[0] = (Object*)0x0;
}
StringName::StringName((StringName*)local_78, "pressed_mirrored", false);Control::add_theme_style_override(pSVar12, (Ref*)local_78);if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
   StringName::unref();
}
if (local_68[0] != (Object*)0x0) {
   cVar7 = RefCounted::unreference();
   pOVar13 = local_68[0];
   if (( cVar7 == '\0' ) || ( cVar7 = predelete_handler(local_68[0]) ),cVar7 == '\0') {
      local_68[0] = (Object*)0x0;
   }
 else {
      ( **(code**)( *(long*)pOVar13 + 0x140 ) )();
      Memory::free_static(pOVar13, false);
      local_68[0] = (Object*)0x0;
   }

}
pOVar13 = (Object*)__dynamic_cast(this_04, &Object::typeinfo, &StyleBox::typeinfo, 0);if (( pOVar13 != (Object*)0x0 ) && ( local_68[0] = pOVar13 ),cVar7 = RefCounted::reference(),cVar7 == '\0') {
   local_68[0] = (Object*)0x0;
}
StringName::StringName((StringName*)local_78, "hover_pressed", false);Control::add_theme_style_override(pSVar12, (Ref*)local_78);if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
   StringName::unref();
}
if (local_68[0] != (Object*)0x0) {
   cVar7 = RefCounted::unreference();
   pOVar13 = local_68[0];
   if (( cVar7 == '\0' ) || ( cVar7 = predelete_handler(local_68[0]) ),cVar7 == '\0') {
      local_68[0] = (Object*)0x0;
   }
 else {
      ( **(code**)( *(long*)pOVar13 + 0x140 ) )();
      Memory::free_static(pOVar13, false);
      local_68[0] = (Object*)0x0;
   }

}
pOVar13 = (Object*)__dynamic_cast(this_04, &Object::typeinfo, &StyleBox::typeinfo, 0);if (( pOVar13 != (Object*)0x0 ) && ( local_68[0] = pOVar13 ),cVar7 = RefCounted::reference(),cVar7 == '\0') {
   local_68[0] = (Object*)0x0;
}
StringName::StringName((StringName*)local_78, "hover_pressed_mirrored", false);Control::add_theme_style_override(pSVar12, (Ref*)local_78);if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
   StringName::unref();
}
if (( ( local_68[0] == (Object*)0x0 ) || ( cVar7 = RefCounted::unreference() ),pOVar13 = local_68[0],cVar7 == '\0' )) {
   Control::end_bulk_theme_override();
}
 else {
   ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
   Memory::free_static(pOVar13, false);
   Control::end_bulk_theme_override();
}
cVar7 = RefCounted::unreference();if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler((Object*)this_04) ),cVar7 != '\0') {
   ( **(code**)( *(long*)this_04 + 0x140 ) )(this_04);
   Memory::free_static(this_04, false);
}
iVar24 = iVar24 + 1;}while (true) ;;;}/* EditorAudioBuses::_rebuild_buses() */void EditorAudioBuses::_rebuild_buses(EditorAudioBuses *this) {
   code *pcVar1;
   undefined8 uVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   EditorAudioBus *this_00;
   CallableCustom *this_01;
   long in_FS_OFFSET;
   bool bVar6;
   long local_70;
   long local_68[2];
   EditorAudioBus local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = Node::get_child_count(SUB81(*(undefined8*)( this + 0xa20 ), 0));
   iVar3 = iVar3 + -1;
   if (-1 < iVar3) {
      do {
         lVar5 = Node::get_child((int)*(undefined8*)( this + 0xa20 ), SUB41(iVar3, 0));
         if (( lVar5 != 0 ) && ( lVar5 = __dynamic_cast(lVar5, &Object::typeinfo, &EditorAudioBus::typeinfo, 0) ),lVar5 != 0) {
            Node::remove_child(*(Node**)( this + 0xa20 ));
            Node::queue_free();
         }

         bVar6 = iVar3 != 0;
         iVar3 = iVar3 + -1;
      }
 while ( bVar6 );
   }

   if (*(long*)( this + 0xa28 ) != 0) {
      Node::remove_child(*(Node**)( this + 0xa20 ));
      Node::queue_free();
      *(undefined8*)( this + 0xa28 ) = 0;
   }

   iVar3 = 0;
   while (true) {
      AudioServer::get_singleton();
      iVar4 = AudioServer::get_bus_count();
      if (iVar4 <= iVar3) break;
      this_00 = (EditorAudioBus*)operator_new(0xb18, "");
      EditorAudioBus::EditorAudioBus(this_00, this, iVar3 == 0);
      postinitialize_handler((Object*)this_00);
      Node::add_child(*(undefined8*)( this + 0xa20 ), this_00, 0, 0);
      pcVar1 = *(code**)( *(long*)this_00 + 0x108 );
      create_custom_callable_function_pointer<EditorAudioBuses,Object*>((EditorAudioBuses*)local_68, (char*)this, (_func_void_Object_ptr*)"&EditorAudioBuses::_delete_bus");
      Callable::bind<EditorAudioBus*>(local_58);
      StringName::StringName((StringName*)&local_70, "delete_request", false);
      ( *pcVar1 )(this_00, (StringName*)&local_70, local_58, 1);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      Callable::~Callable((Callable*)local_58);
      Callable::~Callable((Callable*)local_68);
      pcVar1 = *(code**)( *(long*)this_00 + 0x108 );
      this_01 = (CallableCustom*)operator_new(0x48, "");
      CallableCustom::CallableCustom(this_01);
      *(undefined1(*) [16])( this_01 + 0x30 ) = (undefined1[16])0x0;
      *(undefined**)( this_01 + 0x20 ) = &_LC2;
      *(undefined8*)( this_01 + 0x40 ) = 0;
      uVar2 = *(undefined8*)( this + 0x60 );
      *(undefined***)this_01 = &PTR_hash_0012e6b8;
      *(undefined8*)( this_01 + 0x30 ) = uVar2;
      *(code**)( this_01 + 0x38 ) = _duplicate_bus;
      *(undefined8*)( this_01 + 0x10 ) = 0;
      *(EditorAudioBuses**)( this_01 + 0x28 ) = this;
      CallableCustomMethodPointerBase::_setup((uint*)this_01, (int)this_01 + 0x28);
      *(char**)( this_01 + 0x20 ) = "EditorAudioBuses::_duplicate_bus";
      Callable::Callable((Callable*)local_58, this_01);
      StringName::StringName((StringName*)local_68, "duplicate_request", false);
      ( *pcVar1 )(this_00, (EditorAudioBuses*)local_68, local_58, 1);
      if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
         StringName::unref();
      }

      Callable::~Callable((Callable*)local_58);
      pcVar1 = *(code**)( *(long*)this_00 + 0x108 );
      create_custom_callable_function_pointer<EditorAudioBuses,Object*>((EditorAudioBuses*)local_68, (char*)this, (_func_void_Object_ptr*)"&EditorAudioBuses::_reset_bus_volume");
      Callable::bind<EditorAudioBus*>(local_58);
      StringName::StringName((StringName*)&local_70, "vol_reset_request", false);
      ( *pcVar1 )(this_00, (StringName*)&local_70, local_58, 1);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      Callable::~Callable((Callable*)local_58);
      Callable::~Callable((Callable*)local_68);
      pcVar1 = *(code**)( *(long*)this_00 + 0x108 );
      create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)local_58, (char*)this, (_func_void*)"&EditorAudioBuses::_request_drop_end");
      StringName::StringName((StringName*)local_68, "drop_end_request", false);
      ( *pcVar1 )(this_00, (EditorAudioBuses*)local_68, local_58, 0);
      if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
         StringName::unref();
      }

      Callable::~Callable((Callable*)local_58);
      pcVar1 = *(code**)( *(long*)this_00 + 0x108 );
      create_custom_callable_function_pointer<EditorAudioBuses,int,int>((EditorAudioBuses*)local_58, (char*)this, (_func_void_int_int*)"&EditorAudioBuses::_drop_at_index");
      StringName::StringName((StringName*)local_68, "dropped", false);
      ( *pcVar1 )(this_00, (EditorAudioBuses*)local_68, local_58);
      if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
         StringName::unref();
      }

      iVar3 = iVar3 + 1;
      Callable::~Callable((Callable*)local_58);
   }
;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorAudioBuses::open_layout(String const&) */void EditorAudioBuses::open_layout(String *param_1) {
   String *pSVar1;
   char cVar2;
   int iVar3;
   Object *pOVar4;
   Ref *pRVar5;
   long in_FS_OFFSET;
   long local_b0;
   Object *local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   String local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorBottomPanel::make_item_visible(*(Control**)( EditorNode::singleton + 0xa40 ), SUB81(param_1, 0), true);
   ResourceUID::ensure_path((String*)&local_b0);
   local_68 = (Object*)&_LC2;
   local_70 = 0;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   cVar2 = ResourceLoader::exists((String*)&local_b0, (String*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   pSVar1 = EditorNode::singleton;
   if (cVar2 == '\0') {
      local_68 = (Object*)&_LC2;
      local_70 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = (Object*)0x11634a;
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      TTR(local_80, (String*)&local_78);
      local_88 = 0;
      if (local_b0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_b0);
      }

      local_68 = (Object*)&_LC2;
      local_98 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_98);
      local_a0 = 0;
      local_68 = (Object*)0x119ed0;
      local_60 = 0x30;
      String::parse_latin1((StrRange*)&local_a0);
      TTR((String*)&local_90, (String*)&local_a0);
      vformat<String>((CowData<char32_t>*)&local_68, (String*)&local_90, (CowData<char32_t>*)&local_88);
      EditorNode::show_warning(pSVar1, (String*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      goto LAB_0010fbdd;
   }

   local_68 = (Object*)&_LC2;
   local_70 = 0;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   ResourceLoader::load((CowData<char32_t>*)&local_68, (String*)&local_b0, (StrRange*)&local_70, 0, 0);
   local_a8 = (Object*)0x0;
   if (local_68 != (Object*)0x0) {
      pOVar4 = (Object*)__dynamic_cast(local_68, &Object::typeinfo, &AudioBusLayout::typeinfo, 0);
      if (pOVar4 != (Object*)0x0) {
         local_a8 = pOVar4;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            local_a8 = (Object*)0x0;
         }

         if (local_68 == (Object*)0x0) goto LAB_0010f9ff;
      }

      cVar2 = RefCounted::unreference();
      pOVar4 = local_68;
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   LAB_0010f9ff:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   pSVar1 = EditorNode::singleton;
   if (local_a8 == (Object*)0x0) {
      local_68 = (Object*)0x0;
      String::parse_latin1((String*)&local_68, "");
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "Warning!");
      TTR((String*)&local_78, (String*)&local_70);
      local_88 = 0;
      if (local_b0 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_b0);
      }

      local_98 = 0;
      String::parse_latin1((String*)&local_98, "");
      local_a0 = 0;
      String::parse_latin1((String*)&local_a0, "Can\'t open audio bus layout: \"%s\" is not a valid audio bus layout.");
      TTR((String*)&local_90, (String*)&local_a0);
      vformat<String>((CowData<char32_t>*)local_80, (String*)&local_90, (CowData<char32_t>*)&local_88);
      EditorNode::show_warning(pSVar1, local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      if (*(long*)( param_1 + 0xa68 ) != local_b0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0xa68 ), (CowData*)&local_b0);
      }

      pSVar1 = *(String**)( param_1 + 0xa30 );
      String::get_file();
      local_68 = (Object*)&_LC2;
      local_88 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_68 = (Object*)0x11640d;
      local_90 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange*)&local_90);
      TTR(local_80, (String*)&local_90);
      local_68 = (Object*)0x116415;
      local_70 = 0;
      local_60 = 5;
      String::parse_latin1((StrRange*)&local_70);
      vformat<String,String>((CowData<char32_t>*)&local_68, (StrRange*)&local_70, local_80, (CowData<char32_t>*)&local_78);
      Label::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      pRVar5 = (Ref*)AudioServer::get_singleton();
      AudioServer::set_bus_layout(pRVar5);
      _rebuild_buses((EditorAudioBuses*)param_1);
      iVar3 = EditorUndoRedoManager::get_singleton();
      EditorUndoRedoManager::clear_history(iVar3, false);
      create_custom_callable_function_pointer<EditorAudioBuses>((EditorAudioBuses*)&local_68, (char*)param_1, (_func_void*)"&EditorAudioBuses::_select_layout");
      Variant::Variant((Variant*)local_58, 0);
      Callable::call_deferredp((Variant**)&local_68, 0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Callable::~Callable((Callable*)&local_68);
   }

   if (( ( local_a8 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_a8,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
LAB_0010fbdd:CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorAudioBuses::_load_default_layout() */void EditorAudioBuses::_load_default_layout(EditorAudioBuses *this) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_58, "audio/buses/default_bus_layout", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   Variant::operator_cast_to_String((Variant*)&local_50);
   open_layout((String*)this);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBuses::_file_dialog_callback(String const&) */void EditorAudioBuses::_file_dialog_callback(EditorAudioBuses *this, String *param_1) {
   String *pSVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   AudioBusLayout *pAVar5;
   AudioBusLayout *this_00;
   Ref *pRVar6;
   AudioBusLayout *pAVar7;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   String local_70[8];
   undefined8 local_68;
   CowData<char32_t> local_60[8];
   String local_58[8];
   Object *local_50;
   AudioBusLayout *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = EditorFileDialog::get_file_mode();
   if (iVar4 == 4) {
      if (this[0xa78] != (EditorAudioBuses)0x0) {
         local_48 = (AudioBusLayout*)0x0;
         this_00 = (AudioBusLayout*)operator_new(0x250, "");
         AudioBusLayout::AudioBusLayout(this_00);
         postinitialize_handler((Object*)this_00);
         cVar3 = RefCounted::init_ref();
         pAVar5 = local_48;
         if (cVar3 == '\0') {
            if (local_48 != (AudioBusLayout*)0x0) {
               local_48 = (AudioBusLayout*)0x0;
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  this_00 = (AudioBusLayout*)0x0;
                  cVar3 = predelete_handler((Object*)pAVar5);
                  if (cVar3 != '\0') goto LAB_0011048a;
               }

            }

         }
 else {
            pAVar7 = local_48;
            if (this_00 != local_48) {
               local_48 = this_00;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_48 = (AudioBusLayout*)0x0;
               }

               pAVar7 = this_00;
               if (( ( pAVar5 != (AudioBusLayout*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) {
                  LAB_0011048a:( **(code**)( *(long*)pAVar5 + 0x140 ) )(pAVar5);
                  Memory::free_static(pAVar5, false);
                  pAVar7 = this_00;
                  if (this_00 == (AudioBusLayout*)0x0) goto LAB_001101e0;
               }

            }

            cVar3 = RefCounted::unreference();
            if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pAVar7) ),cVar3 != '\0') {
               ( **(code**)( *(long*)pAVar7 + 0x140 ) )(pAVar7);
               Memory::free_static(pAVar7, false);
            }

         }

         LAB_001101e0:pRVar6 = (Ref*)AudioServer::get_singleton();
         AudioServer::set_bus_layout(pRVar6);
         if (( ( local_48 != (AudioBusLayout*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pAVar5 = local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pAVar5 + 0x140 ))(pAVar5);
         Memory::free_static(pAVar5, false);
      }

   }

   AudioServer::get_singleton();
   AudioServer::generate_bus_layout();
   local_48 = (AudioBusLayout*)0x0;
   if (( ( local_50 != (Object*)0x0 ) && ( pAVar5 = (AudioBusLayout*)__dynamic_cast(local_50, &Object::typeinfo, &Resource::typeinfo, 0) ),pAVar5 != (AudioBusLayout*)0x0 )) {
      local_48 = (AudioBusLayout*)0x0;
   }

   iVar4 = ResourceSaver::save((Ref*)&local_48, param_1, 0);
   if (( ( local_48 != (AudioBusLayout*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pAVar5 = local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pAVar5 + 0x140 ))(pAVar5);
   Memory::free_static(pAVar5, false);
}
if (( ( local_50 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_50,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);Memory::free_static(pOVar2, false);}pSVar1 = EditorNode::singleton;if (iVar4 != 0) {
   local_48 = (AudioBusLayout*)0x0;
   String::parse_latin1((String*)&local_48, "");
   local_50 = (Object*)0x0;
   String::parse_latin1((String*)&local_50, "Warning!");
   TTR(local_58, (String*)&local_50);
   local_68 = 0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_1);
   }

   local_78 = 0;
   String::parse_latin1((String*)&local_78, "");
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "Error saving file: %s");
   TTR(local_70, (String*)&local_80);
   vformat<String>(local_60, local_70, (CowData<char32_t>*)&local_68);
   EditorNode::show_warning(pSVar1, (String*)local_60);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   goto LAB_001104c8;
}
}if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   open_layout((String*)this);
   return;
}
LAB_001104c8:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* AudioBusesEditorPlugin::edit(Object*) */void AudioBusesEditorPlugin::edit(AudioBusesEditorPlugin *this, Object *param_1) {
   char cVar1;
   long lVar2;
   long in_FS_OFFSET;
   CowData<char32_t> aCStack_28[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 != (Object*)0x0) {
      lVar2 = __dynamic_cast(param_1, &Object::typeinfo, &AudioBusLayout::typeinfo, 0);
      if (lVar2 != 0) {
         Resource::get_path();
         cVar1 = String::is_resource_file();
         if (cVar1 != '\0') {
            EditorAudioBuses::open_layout(*(String**)( this + 0x660 ));
         }

         CowData<char32_t>::_unref(aCStack_28);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBus::_name_changed(String const&) */void EditorAudioBus::_name_changed(EditorAudioBus *this, String *param_1) {
   long *plVar1;
   Variant *pVVar2;
   undefined *puVar3;
   undefined *puVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   Object *this_00;
   StringName *pSVar8;
   int iVar9;
   Variant *pVVar10;
   int iVar11;
   long in_FS_OFFSET;
   bool bVar12;
   undefined *local_128;
   undefined *local_120;
   undefined8 local_118;
   long local_110;
   undefined *local_108;
   undefined8 local_100;
   Variant *local_f8;
   undefined1 auStack_f0[16];
   Variant *local_d8;
   Variant *pVStack_d0;
   Variant local_c0[24];
   undefined8 local_a8;
   undefined1 local_a0[16];
   Variant local_90[8];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0xb08] == (EditorAudioBus)0x0) {
      this[0xb08] = (EditorAudioBus)0x1;
      Control::release_focus();
      AudioServer::get_singleton();
      if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
         Node::_update_children_cache_impl();
      }

      iVar9 = (int)(CowData<char32_t>*)&local_108;
      AudioServer::get_bus_name(iVar9);
      cVar5 = String::operator ==(param_1, (String*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      if (cVar5 == '\0') {
         local_128 = (undefined*)0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)param_1);
         LAB_001106b0:iVar11 = 0;
         do {
            AudioServer::get_singleton();
            iVar6 = AudioServer::get_bus_count();
            if (iVar6 <= iVar11) {
               this_00 = (Object*)EditorUndoRedoManager::get_singleton();
               AudioServer::get_singleton();
               if (( *(long*)( this + 400 ) != 0 ) && ( *(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0' )) {
                  Node::_update_children_cache_impl();
               }

               AudioServer::get_bus_name(iVar9);
               StringName::StringName((StringName*)&local_120, (String*)&local_108, false);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               local_110 = 0;
               String::parse_latin1((String*)&local_110, "");
               local_118 = 0;
               String::parse_latin1((String*)&local_118, "Rename Audio Bus");
               TTR((String*)&local_108, (String*)&local_118);
               EditorUndoRedoManager::create_action(this_00, (CowData<char32_t>*)&local_108, 0, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
               local_108 = (undefined*)0x0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)&local_128);
               if (*(long*)( this + 400 ) == 0) {
                  LAB_0011106b:iVar6 = *(int*)( this + 0x22c );
               }
 else {
                  if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
                     Node::_update_children_cache_impl();
                  }

                  iVar11 = *(int*)( this + 0x21c );
                  if (iVar11 == 1) goto LAB_0011106b;
                  if (iVar11 == 2) {
                     iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
                  }
 else {
                     iVar6 = -1;
                     if (iVar11 == 0) {
                        iVar6 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
                     }

                  }

               }

               StringName::StringName((StringName*)&local_110, "set_bus_name", false);
               pSVar8 = (StringName*)AudioServer::get_singleton();
               Variant::Variant(local_88, iVar6);
               Variant::Variant(local_70, (String*)&local_108);
               local_50 = (undefined1[16])0x0;
               local_58 = 0;
               iVar11 = (int)(Variant*)&local_d8;
               local_d8 = local_88;
               pVStack_d0 = local_70;
               EditorUndoRedoManager::add_do_methodp(this_00, pSVar8, (Variant**)&local_110, iVar11);
               pVVar10 = (Variant*)local_40;
               do {
                  pVVar2 = pVVar10 + -0x18;
                  pVVar10 = pVVar10 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar10 != local_88 );
               if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
               StringName::StringName((StringName*)&local_108, (StringName*)&local_120);
               if (*(long*)( this + 400 ) == 0) {
                  LAB_0011103c:iVar7 = *(int*)( this + 0x22c );
               }
 else {
                  if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
                     Node::_update_children_cache_impl();
                  }

                  iVar6 = *(int*)( this + 0x21c );
                  if (iVar6 == 1) goto LAB_0011103c;
                  if (iVar6 == 2) {
                     iVar7 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
                  }
 else {
                     iVar7 = -1;
                     if (iVar6 == 0) {
                        iVar7 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
                     }

                  }

               }

               StringName::StringName((StringName*)&local_110, "set_bus_name", false);
               pSVar8 = (StringName*)AudioServer::get_singleton();
               Variant::Variant(local_88, iVar7);
               Variant::Variant(local_70, (StringName*)&local_108);
               local_50 = (undefined1[16])0x0;
               local_58 = 0;
               local_d8 = local_88;
               pVStack_d0 = local_70;
               EditorUndoRedoManager::add_undo_methodp(this_00, pSVar8, (Variant**)&local_110, iVar11);
               pVVar10 = (Variant*)local_40;
               do {
                  pVVar2 = pVVar10 + -0x18;
                  pVVar10 = pVVar10 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar10 != local_88 );
               if (( StringName::configured != '\0' ) && ( ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_108 != (undefined*)0x0 ) ) )) {
                  StringName::unref();
               }

               iVar6 = 0;
               while (true) {
                  AudioServer::get_singleton();
                  iVar7 = AudioServer::get_bus_count();
                  if (iVar7 <= iVar6) break;
                  AudioServer::get_singleton();
                  AudioServer::get_bus_send(iVar9);
                  puVar4 = local_108;
                  puVar3 = local_120;
                  if (( StringName::configured != '\0' ) && ( local_108 != (undefined*)0x0 )) {
                     StringName::unref();
                  }

                  if (puVar4 == puVar3) {
                     local_108 = (undefined*)0x0;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)&local_128);
                     StringName::StringName((StringName*)&local_110, "set_bus_send", false);
                     pSVar8 = (StringName*)AudioServer::get_singleton();
                     Variant::Variant((Variant*)&local_d8, iVar6);
                     Variant::Variant(local_c0, (String*)&local_108);
                     local_a0 = (undefined1[16])0x0;
                     pVVar10 = local_90;
                     local_a8 = 0;
                     auStack_f0._0_8_ = local_c0;
                     local_f8 = (Variant*)&local_d8;
                     EditorUndoRedoManager::add_do_methodp(this_00, pSVar8, (Variant**)&local_110, (int)&local_f8);
                     do {
                        pVVar2 = pVVar10 + -0x18;
                        pVVar10 = pVVar10 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar10 != (Variant*)&local_d8 );
                     if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
                     StringName::StringName((StringName*)&local_108, (StringName*)&local_120);
                     StringName::StringName((StringName*)&local_110, "set_bus_send", false);
                     pSVar8 = (StringName*)AudioServer::get_singleton();
                     Variant::Variant(local_88, iVar6);
                     Variant::Variant(local_70, (StringName*)&local_108);
                     local_58 = 0;
                     local_50 = (undefined1[16])0x0;
                     local_d8 = local_88;
                     pVStack_d0 = local_70;
                     EditorUndoRedoManager::add_undo_methodp(this_00, pSVar8, (Variant**)&local_110, iVar11);
                     pVVar10 = (Variant*)local_40;
                     do {
                        pVVar2 = pVVar10 + -0x18;
                        pVVar10 = pVVar10 + -0x18;
                        if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
                           Variant::_clear_internal();
                        }

                     }
 while ( pVVar10 != local_88 );
                     if (( StringName::configured != '\0' ) && ( ( ( local_110 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_108 != (undefined*)0x0 ) ) )) {
                        StringName::unref();
                     }

                  }

                  iVar6 = iVar6 + 1;
               }
;
               if (*(long*)( this + 400 ) == 0) {
                  LAB_00111054:iVar11 = *(int*)( this + 0x22c );
               }
 else {
                  if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
                     Node::_update_children_cache_impl();
                  }

                  iVar9 = *(int*)( this + 0x21c );
                  if (iVar9 == 1) goto LAB_00111054;
                  if (iVar9 == 2) {
                     iVar11 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
                  }
 else {
                     iVar11 = -1;
                     if (iVar9 == 0) {
                        iVar11 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
                     }

                  }

               }

               StringName::StringName((StringName*)&local_108, "_update_bus", false);
               EditorUndoRedoManager::add_do_method<int>((EditorUndoRedoManager*)this_00, *(Object**)( this + 0xb10 ), (StringName*)&local_108, iVar11);
               if (( StringName::configured != '\0' ) && ( local_108 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               if (*(long*)( this + 400 ) == 0) {
                  LAB_00111048:iVar11 = *(int*)( this + 0x22c );
               }
 else {
                  if (*(char*)( *(long*)( this + 400 ) + 0x1d0 ) != '\0') {
                     Node::_update_children_cache_impl();
                  }

                  iVar9 = *(int*)( this + 0x21c );
                  if (iVar9 == 1) goto LAB_00111048;
                  if (iVar9 == 2) {
                     iVar11 = *(int*)( *(long*)( this + 400 ) + 0x228 ) + *(int*)( *(long*)( this + 400 ) + 0x220 ) + *(int*)( this + 0x22c );
                  }
 else {
                     iVar11 = -1;
                     if (iVar9 == 0) {
                        iVar11 = *(int*)( this + 0x22c ) + *(int*)( *(long*)( this + 400 ) + 0x220 );
                     }

                  }

               }

               StringName::StringName((StringName*)&local_108, "_update_bus", false);
               EditorUndoRedoManager::add_undo_method<int>((EditorUndoRedoManager*)this_00, *(Object**)( this + 0xb10 ), (StringName*)&local_108, iVar11);
               if (( StringName::configured != '\0' ) && ( local_108 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               StringName::StringName((StringName*)&local_108, "_update_sends", false);
               local_f8 = (Variant*)0x0;
               auStack_f0 = (undefined1[16])0x0;
               EditorUndoRedoManager::add_do_methodp(this_00, *(StringName**)( this + 0xb10 ), (Variant**)&local_108, 0);
               if (Variant::needs_deinit[(int)local_f8] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_108 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               StringName::StringName((StringName*)&local_108, "_update_sends", false);
               local_f8 = (Variant*)0x0;
               auStack_f0 = (undefined1[16])0x0;
               EditorUndoRedoManager::add_undo_methodp(this_00, *(StringName**)( this + 0xb10 ), (Variant**)&local_108, 0);
               if (Variant::needs_deinit[(int)local_f8] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( local_108 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               EditorUndoRedoManager::commit_action(SUB81(this_00, 0));
               bVar12 = StringName::configured != '\0';
               this[0xb08] = (EditorAudioBus)0x0;
               if (( bVar12 ) && ( local_120 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               goto LAB_001105a6;
            }

            AudioServer::get_singleton();
            AudioServer::get_bus_name(iVar9);
            cVar5 = String::operator ==((String*)&local_108, (String*)&local_128);
            puVar3 = local_108;
            if (local_108 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_108 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_108 = (undefined*)0x0;
                  Memory::free_static(puVar3 + -0x10, false);
               }

            }

            if (cVar5 != '\0') goto LAB_00110ce0;
            iVar11 = iVar11 + 1;
         }
 while ( true );
      }

      this[0xb08] = (EditorAudioBus)0x0;
   }

   LAB_001105a6:if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00110ce0:itos((long)&local_110);
   local_108 = &_LC258;
   local_120 = (undefined*)0x0;
   local_100 = 1;
   String::parse_latin1((StrRange*)&local_120);
   String::operator +((String*)&local_118, param_1);
   String::operator +((String*)&local_108, (String*)&local_118);
   if (local_128 != local_108) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      local_128 = local_108;
      local_108 = (undefined*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   goto LAB_001106b0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBus::_show_value(float) */void EditorAudioBus::_show_value(EditorAudioBus *this, float param_1) {
   Vector2 *pVVar1;
   double dVar2;
   char *pcVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   float fVar6;
   double dVar7;
   undefined8 uVar8;
   char *local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = Input::get_singleton();
   cVar4 = Input::is_key_pressed(uVar5, 0x400016);
   dVar2 = _LC48;
   if (cVar4 == '\0') {
      if (__LC41 < param_1) {
         fVar6 = param_1 * __LC42 - __LC43;
      }
 else if (_LC44 <= param_1) {
         dVar7 = pow((double)param_1 - _LC48, _LC47);
         fVar6 = (float)( dVar7 * __LC49 );
      }
 else {
         fVar6 = (float)( (double)param_1 * __LC45 - __LC46 );
      }

   }
 else {
      if (__LC41 < param_1) {
         fVar6 = param_1 * __LC42 - __LC43;
      }
 else if (_LC44 <= param_1) {
         dVar7 = pow((double)param_1 - _LC48, _LC47);
         fVar6 = (float)( dVar7 * __LC49 );
      }
 else {
         fVar6 = (float)( (double)param_1 * __LC45 - __LC46 );
      }

      fVar6 = roundf(fVar6);
   }

   local_58 = (char*)0x0;
   dVar7 = (double)Math::snapped((double)fVar6, _LC203);
   if (_LC261 <= ABS(dVar7)) {
      local_50 = 0;
      local_40 = 8;
      local_48 = "%+.1f dB";
      String::parse_latin1((StrRange*)&local_50);
      vformat<float>((String*)&local_48, fVar6);
      pcVar3 = local_48;
      if (local_58 != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         local_58 = pcVar3;
         local_48 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }
 else {
      local_40 = 7;
      local_48 = " 0.0 dB";
      String::parse_latin1((StrRange*)&local_58);
   }

   Control::set_tooltip_text(*(String**)( this + 0xa20 ));
   Label::set_text(*(String**)( this + 0xad8 ));
   uVar5 = Control::get_size();
   uVar8 = Control::get_global_position();
   fVar6 = (float)( (ulong)uVar5 >> 0x20 ) - __LC264;
   dVar7 = (double)Range::get_value();
   local_38 = CONCAT44((float)( (ulong)uVar8 >> 0x20 ) + (float)( (double)fVar6 * ( dVar2 - dVar7 ) - __LC265 ), (float)uVar8 + (float)uVar5);
   Control::set_position(*(Vector2**)( this + 0xad0 ), SUB81(&local_38, 0));
   pVVar1 = *(Vector2**)( this + 0xad0 );
   local_38 = Control::get_size();
   Control::set_size(pVVar1, SUB81(&local_38, 0));
   cVar4 = Control::has_focus();
   if (cVar4 != '\0') {
      cVar4 = CanvasItem::is_visible();
      if (cVar4 == '\0') {
         CanvasItem::show();
      }

   }

   Timer::start(_LC266);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::initialize_class() [clone .part.0] */void Control::initialize_class(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (CanvasItem::initialize_class() == '\0') {
      if (Node::initialize_class() == '\0') {
         Object::initialize_class();
         local_68 = 0;
         local_50 = 6;
         local_58 = "Object";
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Node";
         local_70 = 0;
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_00137010 != Node::_bind_methods) {
            Node::_bind_methods();
         }

         Node::initialize_class()::initialized =
         '\x01';
      }

      local_68 = 0;
      local_58 = "Node";
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "CanvasItem";
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
      CanvasItem::_bind_methods();
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_compatibility_methods) {
         CanvasItem::_bind_compatibility_methods();
      }

      CanvasItem::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "CanvasItem";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "Control";
   local_70 = 0;
   local_50 = 7;
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
   if ((code*)PTR__bind_methods_00137008 != CanvasItem::_bind_methods) {
      Control::_bind_methods();
   }

   initialize_class()::initialized =
   1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAudioBusDrop::_bind_methods() */void EditorAudioBusDrop::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   int *piVar4;
   int *piVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 local_d8;
   long local_d0;
   char *local_c8;
   undefined8 local_c0;
   char *local_b8;
   undefined8 local_b0;
   CowData<char32_t> local_a8[8];
   long lStack_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78[2];
   int *local_68;
   undefined8 local_60;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_d0 = 0;
   local_b0 = 7;
   local_b8 = "dropped";
   String::parse_latin1((StrRange*)&local_d0);
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   _local_a8 = (undefined1[16])0x0;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_d0);
   }

   local_d8 = 0;
   local_c0 = 0x12;
   local_c8 = "EditorAudioBusDrop";
   String::parse_latin1((StrRange*)&local_d8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_d8, false);
   ClassDB::add_signal((StringName*)&local_c8, (MethodInfo*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   piVar4 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         local_68 = (int*)0x0;
         if (lVar2 != 0) {
            lVar6 = 0;
            piVar5 = piVar4;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(piVar4 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( lStack_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAudioBus::get_drag_data(Vector2 const&) */Vector2 *EditorAudioBus::get_drag_data(Vector2 *param_1) {
   int iVar1;
   Control *this;
   Panel *this_00;
   Variant *pVVar2;
   undefined8 *in_RDX;
   int iVar3;
   bool bVar4;
   Control *in_RSI;
   long in_FS_OFFSET;
   StringName local_80[8];
   int local_78[8];
   ulong local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 400 ) == 0) {
      LAB_00111ff8:iVar1 = *(int*)( in_RSI + 0x22c );
      LAB_00111cba:joined_r0x00111d1e:if (iVar1 == 0) {
         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00111cd1;
      }

   }
 else {
      if (*(char*)( *(long*)( in_RSI + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar1 = *(int*)( in_RSI + 0x21c );
      if (iVar1 == 1) goto LAB_00111ff8;
      if (iVar1 == 2) {
         iVar1 = *(int*)( *(long*)( in_RSI + 400 ) + 0x228 ) + *(int*)( *(long*)( in_RSI + 400 ) + 0x220 ) + *(int*)( in_RSI + 0x22c );
         goto joined_r0x00111d1e;
      }

      if (iVar1 == 0) {
         iVar1 = *(int*)( in_RSI + 0x22c ) + *(int*)( *(long*)( in_RSI + 400 ) + 0x220 );
         goto LAB_00111cba;
      }

   }

   this(Control * operator_new(0x9c8, ""));
   Control::Control(this);
   postinitialize_handler((Object*)this);
   this_00 = (Panel*)operator_new(0x9d0, "");
   Panel::Panel(this_00);
   postinitialize_handler((Object*)this_00);
   Node::add_child(this, this_00, 0, 0);
   local_58 = __LC277;
   auStack_50._0_8_ = _UNK_0012ef78;
   CanvasItem::set_modulate((Color*)this_00);
   if ((get_drag_data(Vector2_const&)::{lambda()
   #2
   ( iVar1 = __cxa_guard_acquire(&get_drag_data(Vector2_const & ::sname), iVar1 != 0) );
   {
      _scs_create((char *)&get_drag_data(Vector2_const&)::{lambda()
      #2
      __cxa_atexit(StringName::~StringName,
                 &get_drag_data(Vector2_const&)::{lambda()
      #2
      __cxa_guard_release(&get_drag_data(Vector2_const&)::{lambda()
      #2
   }

   if ((get_drag_data(Vector2_const&)::{lambda()
   #1
   ( iVar1 = __cxa_guard_acquire(&get_drag_data(Vector2_const & ::sname), iVar1 != 0) );
   {
      _scs_create((char *)&get_drag_data(Vector2_const&)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName,
                 &get_drag_data(Vector2_const&)::{lambda()
      #1
      __cxa_guard_release(&get_drag_data(Vector2_const&)::{lambda()
      #1
   }

   Control::get_theme_stylebox(local_80, (StringName*)in_RSI);
   Control::add_theme_style_override((StringName*)this_00, (Ref*)( SceneStringNames::singleton + 600 ));
   Ref<StyleBox>::unref((Ref<StyleBox>*)local_80);
   local_58 = Control::get_size();
   bVar4 = SUB81((Variant*)&local_58, 0);
   Control::set_size((Vector2*)this_00, bVar4);
   local_58 = CONCAT44(( uint )(( ulong ) * in_RDX >> 0x20) ^ _LC278._4_4_, ( uint ) * in_RDX ^ (uint)_LC278);
   Control::set_position((Vector2*)this_00, bVar4);
   Control::set_drag_preview(in_RSI);
   Dictionary::Dictionary((Dictionary*)local_80);
   Variant::Variant((Variant*)&local_58, "move_audio_bus");
   Variant::Variant((Variant*)local_78, "type");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = auStack_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = auStack_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( in_RSI + 400 ) == 0) {
      LAB_00112018:iVar3 = *(int*)( in_RSI + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( in_RSI + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar1 = *(int*)( in_RSI + 0x21c );
      if (iVar1 == 1) goto LAB_00112018;
      if (iVar1 == 2) {
         iVar3 = *(int*)( *(long*)( in_RSI + 400 ) + 0x228 ) + *(int*)( *(long*)( in_RSI + 400 ) + 0x220 ) + *(int*)( in_RSI + 0x22c );
      }
 else {
         iVar3 = -1;
         if (iVar1 == 0) {
            iVar3 = *(int*)( in_RSI + 0x22c ) + *(int*)( *(long*)( in_RSI + 400 ) + 0x220 );
         }

      }

   }

   Variant::Variant((Variant*)&local_58, iVar3);
   Variant::Variant((Variant*)local_78, "index");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)&local_58) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = (int)local_58;
      *(undefined8*)( pVVar2 + 8 ) = auStack_50._0_8_;
      *(undefined8*)( pVVar2 + 0x10 ) = auStack_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( in_RSI + 400 ) == 0) {
      LAB_00112008:iVar3 = *(int*)( in_RSI + 0x22c );
   }
 else {
      if (*(char*)( *(long*)( in_RSI + 400 ) + 0x1d0 ) != '\0') {
         Node::_update_children_cache_impl();
      }

      iVar1 = *(int*)( in_RSI + 0x21c );
      if (iVar1 == 1) goto LAB_00112008;
      if (iVar1 == 2) {
         iVar3 = *(int*)( *(long*)( in_RSI + 400 ) + 0x228 ) + *(int*)( *(long*)( in_RSI + 400 ) + 0x220 ) + *(int*)( in_RSI + 0x22c );
      }
 else {
         iVar3 = -1;
         if (iVar1 == 0) {
            iVar3 = *(int*)( in_RSI + 0x22c ) + *(int*)( *(long*)( in_RSI + 400 ) + 0x220 );
         }

      }

   }

   AudioServer::get_singleton();
   iVar1 = AudioServer::get_bus_count();
   if (iVar3 < iVar1 + -1) {
      if ((get_drag_data(Vector2_const&)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar1 = __cxa_guard_acquire(&get_drag_data(Vector2_const&)::{lambda()#3}::operator()()::
                                     sname), iVar1 != 0))
      {
         _scs_create((char *)&get_drag_data(Vector2_const&)::{lambda()
         #3
         __cxa_atexit(StringName::~StringName,
                   &get_drag_data(Vector2_const&)::{lambda()
         #3
         __cxa_guard_release(&get_drag_data(Vector2_const&)::{lambda()
         #3
      }

      local_58 = 0;
      auStack_50 = (undefined1[16])0x0;
      ( **(code**)( *(long*)in_RSI + 0xd0 ) )();
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)param_1, (Dictionary*)local_80);
   Dictionary::~Dictionary((Dictionary*)local_80);
   LAB_00111cd1:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorAudioBuses::_notification(int) */void EditorAudioBuses::_notification(EditorAudioBuses *this, int param_1) {
   StringName *pSVar1;
   Object *pOVar2;
   char cVar3;
   char cVar4;
   bool bVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   long in_FS_OFFSET;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_1 + -10) {
      case 0:
      case 0x23:
    pSVar1 = *(StringName **)(this + 0xa18);
      if ((_notification(int)::{lambda()
      #1
      (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname,
                                    param_1 + -10,&switchD_0011231b::switchdataD_001288f4,
                                    &_notification(int)::{lambda()#1}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_stylebox((StringName *)&local_48,(StringName *)this);
    Control::add_theme_style_override(pSVar1,(Ref *)(SceneStringNames::singleton + 600));
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_48);
    break;
  case 3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _rebuild_buses(this);
      return;
    }
    goto LAB_0011258f;
  case 7:
    AudioServer::get_singleton();
    iVar8 = 0;
    cVar3 = Object::is_edited();
    while(, true), {
      AudioServer::get_singleton();
      iVar6 = AudioServer::get_bus_count();
      if (iVar6 <= iVar8) break;
      iVar6 = 0;
      while (true) {
         iVar7 = AudioServer::get_singleton();
         iVar7 = AudioServer::get_bus_effect_count(iVar7);
         if (iVar7 <= iVar6) break;
         iVar7 = AudioServer::get_singleton();
         AudioServer::get_bus_effect((int)&local_48, iVar7);
         cVar4 = Object::is_edited();
         if (cVar4 != '\0') {
            Object::set_edited(SUB81(local_48, 0));
            cVar3 = cVar4;
         }

         if (( ( local_48 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar2 = local_48,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
         Memory::free_static(pOVar2, false);
      }
;
      iVar6 = iVar6 + 1;
   }

   iVar8 = iVar8 + 1;
}
bVar5 = (bool)AudioServer::get_singleton();Object::set_edited(bVar5);if (cVar3 != '\0') {
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Timer::start(_LC266);
      return;
   }

   goto LAB_0011258f;
}
break;case 0xc:
    if (*(long *)(this + 0xa28) != 0) {
      Node::remove_child(*(Node **)(this + 0xa20));
      Node::queue_free();
      *(undefined8 *)(this + 0xa28) = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011258f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorAudioBus::_notification(int) */

void __thiscall EditorAudioBus::_notification(EditorAudioBus *this,int param_1)

{
  int iVar1;
  StringName *pSVar2;
  undefined8 uVar3;
  String *pSVar4;
  Color *pCVar5;
  char cVar6;
  EditorAudioBus EVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  Object *pOVar11;
  Ref *pRVar12;
  EditorAudioBus *pEVar13;
  EditorAudioBus *pEVar14;
  undefined1 *puVar15;
  undefined1 uVar16;
  int iVar17;
  char *pcVar18;
  uint uVar19;
  long in_FS_OFFSET;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  StringName local_e8 [8];
  long local_e0;
  long local_d8;
  Ref *local_d0;
  Color *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  ulong uStack_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  auVar24._8_8_ = local_58._8_8_;
  auVar24._0_8_ = local_58._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);switch(param_1) {
  case 10:
  case 0x2d:
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon(local_e8);
    pEVar14 = this + 0xa30;
    do {
      pEVar13 = pEVar14 + 0x20;
      TextureProgressBar::set_under_texture(*(Ref **)(pEVar14 + 0x10));
      local_58._0_8_ = __LC284;
      local_58._8_8_ = _UNK_0012ef88;
      TextureProgressBar::set_tint_under(*(Color **)(pEVar14 + 0x10));
      TextureProgressBar::set_progress_texture(*(Ref **)(pEVar14 + 0x10));
      TextureProgressBar::set_under_texture(*(Ref **)(pEVar14 + 0x18));
      local_58._0_8_ = __LC284;
      local_58._8_8_ = _UNK_0012ef88;
      TextureProgressBar::set_tint_under(*(Color **)(pEVar14 + 0x18));
      TextureProgressBar::set_progress_texture(*(Ref **)(pEVar14 + 0x18));
      *pEVar14 = (EditorAudioBus)0x1;
      pEVar14 = pEVar13;
    } while (pEVar13 != this + 0xab0);
    if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_d0);
    pRVar12 = *(Ref **)(this + 0xa08);
    if (local_d0 != pRVar12) {
      *(Ref **)(this + 0xa08) = local_d0;
      local_c8 = (Color *)pRVar12;
      if ((local_d0 != (Ref *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
        *(undefined8 *)(this + 0xa08) = 0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_d0);
    cVar6 = EditorThemeManager::is_dark_theme();
    if (cVar6 == '\0') {
      local_b8 = __LC287;
      uStack_b0 = _UNK_0012efa8;
    }
    else {
      local_b8 = __LC286;
      uStack_b0 = _UNK_0012ef98;
    }
    cVar6 = EditorThemeManager::is_dark_theme();
    if (cVar6 == '\0') {
      local_a8 = __LC289;
      uStack_a0 = _UNK_0012efc8;
    }
    else {
      local_a8 = __LC288;
      uStack_a0 = _UNK_0012efb8;
    }
    cVar6 = EditorThemeManager::is_dark_theme();
    if (cVar6 == '\0') {
      local_98 = __LC291;
      uStack_90 = _UNK_0012efe8;
    }
    else {
      local_98 = __LC290;
      uStack_90 = _UNK_0012efd8;
    }
    cVar6 = EditorThemeManager::is_dark_theme();
    fVar23 = _LC281;
    if (cVar6 != '\0') {
      fVar23 = _LC280;
    }
    local_88 = CONCAT44((float)((ulong)local_b8 >> 0x20) * fVar23,(float)local_b8 * fVar23);
    local_d8 = 0;
    local_78 = CONCAT44((float)((ulong)local_a8 >> 0x20) * fVar23,(float)local_a8 * fVar23);
    local_80 = uStack_b0 & 0xffffffff00000000 | (ulong)(uint)((float)uStack_b0 * fVar23);
    local_70 = uStack_a0 & 0xffffffff00000000 | (ulong)(uint)((float)uStack_a0 * fVar23);
    local_68 = CONCAT44(fVar23 * (float)((ulong)local_98 >> 0x20),fVar23 * (float)local_98);
    local_60 = (ulong)(uint)(fVar23 * (float)uStack_90) | uStack_90 & 0xffffffff00000000;
    Control::get_theme_stylebox((StringName *)&local_d0,*(StringName **)(this + 0xae8));
    local_c8 = (Color *)0x0;
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_c8,local_d0);
    StyleBoxFlat::set_border_color(local_c8);
    Ref<StyleBoxFlat>::unref((Ref<StyleBoxFlat> *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_d0);
    if ((StringName::configured != '\0') && (local_d8 != 0)) {
      StringName::unref();
    }
    local_d8 = 0;
    Control::get_theme_stylebox((StringName *)&local_d0,*(StringName **)(this + 0xaf0));
    local_c8 = (Color *)0x0;
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_c8,local_d0);
    StyleBoxFlat::set_border_color(local_c8);
    Ref<StyleBoxFlat>::unref((Ref<StyleBoxFlat> *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_d0);
    if ((StringName::configured != '\0') && (local_d8 != 0)) {
      StringName::unref();
    }
    local_d8 = 0;
    Control::get_theme_stylebox((StringName *)&local_d0,*(StringName **)(this + 0xaf8));
    local_c8 = (Color *)0x0;
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_c8,local_d0);
    StyleBoxFlat::set_border_color(local_c8);
    Ref<StyleBoxFlat>::unref((Ref<StyleBoxFlat> *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_d0);
    if ((StringName::configured != '\0') && (local_d8 != 0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xae8);
    local_d8 = 0;
    StringName::StringName((StringName *)&local_e0,"hover_pressed",false);
    Control::get_theme_stylebox((StringName *)&local_d0,pSVar2);
    local_c8 = (Color *)0x0;
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_c8,local_d0);
    StyleBoxFlat::set_border_color(local_c8);
    Ref<StyleBoxFlat>::unref((Ref<StyleBoxFlat> *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_d0);
    if ((StringName::configured != '\0') &&
       (((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_d8 != 0)
        ))) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xaf0);
    local_d8 = 0;
    StringName::StringName((StringName *)&local_e0,"hover_pressed",false);
    Control::get_theme_stylebox((StringName *)&local_d0,pSVar2);
    local_c8 = (Color *)0x0;
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_c8,local_d0);
    StyleBoxFlat::set_border_color(local_c8);
    Ref<StyleBoxFlat>::unref((Ref<StyleBoxFlat> *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_d0);
    if (((StringName::configured != '\0') &&
        ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_d8 != 0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xaf8);
    local_d8 = 0;
    StringName::StringName((StringName *)&local_e0,"hover_pressed",false);
    Control::get_theme_stylebox((StringName *)&local_d0,pSVar2);
    local_c8 = (Color *)0x0;
    Ref<StyleBoxFlat>::operator=((Ref<StyleBoxFlat> *)&local_c8,local_d0);
    StyleBoxFlat::set_border_color(local_c8);
    Ref<StyleBoxFlat>::unref((Ref<StyleBoxFlat> *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_d0);
    if (((StringName::configured != '\0') &&
        ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_d8 != 0)) {
      StringName::unref();
    }
    pRVar12 = *(Ref **)(this + 0xae8);
    if ((_notification(int)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_c8);
    Button::set_button_icon(pRVar12);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    pSVar2 = *(StringName **)(this + 0xae8);
    StringName::StringName((StringName *)&local_c8,"icon_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xae8);
    StringName::StringName((StringName *)&local_c8,"icon_hover_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pRVar12 = *(Ref **)(this + 0xaf0);
    if ((_notification(int)::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_c8);
    Button::set_button_icon(pRVar12);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    pSVar2 = *(StringName **)(this + 0xaf0);
    StringName::StringName((StringName *)&local_c8,"icon_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xaf0);
    StringName::StringName((StringName *)&local_c8,"icon_hover_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pRVar12 = *(Ref **)(this + 0xaf8);
    if ((_notification(int)::{lambda()#5}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_c8);
    Button::set_button_icon(pRVar12);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    pSVar2 = *(StringName **)(this + 0xaf8);
    StringName::StringName((StringName *)&local_c8,"icon_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xaf8);
    StringName::StringName((StringName *)&local_c8,"icon_hover_pressed_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pRVar12 = *(Ref **)(this + 0xa18);
    if ((_notification(int)::{lambda()#6}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#6}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#6}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_c8);
    Button::set_button_icon(pRVar12);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    pSVar2 = *(StringName **)(this + 0xad8);
    if ((_notification(int)::{lambda()#7}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#7}::operator()()::sname),
       iVar8 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#7}::operator()()::sname);
    }
    local_58 = Control::get_theme_color
                         ((StringName *)this,(StringName *)(SceneStringNames::singleton + 0xb0));
    Control::add_theme_color_override(pSVar2,(Color *)(SceneStringNames::singleton + 0xb0));
    pSVar2 = *(StringName **)(this + 0xad8);
    if (_notification(int)::{lambda()#9}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#9}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#9}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#9}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#9}::operator()()::sname);
      }
    }
    if (_notification(int)::{lambda()#8}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#8}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#8}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#8}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#8}::operator()()::sname);
      }
    }
    auVar24 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)&_notification(int)::{lambda()#8}::operator()()::sname);
    local_58 = auVar24;
    StringName::StringName((StringName *)&local_c8,"font_shadow_color",false);
    Control::add_theme_color_override(pSVar2,(Color *)&local_c8);
    if ((StringName::configured != '\0') && (local_c8 != (Color *)0x0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xad0);
    if (_notification(int)::{lambda()#10}::operator()()::sname == '\0') {
      iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#10}::operator()()::sname);
      if (iVar8 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#10}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#10}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#10}::operator()()::sname);
      }
    }
    uVar19 = 0;
    Control::get_theme_stylebox((StringName *)&local_c8,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_c8);
    while( true ) {
      iVar8 = PopupMenu::get_item_count();
      if (iVar8 <= (int)uVar19) break;
      PopupMenu::get_item_metadata((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_d8);
      if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      pSVar4 = EditorNode::singleton;
      local_c8 = (Color *)&_LC2;
      local_d0 = (Ref *)0x0;
      local_c0 = 0;
      String::parse_latin1((StrRange *)&local_d0);
      EditorNode::get_class_icon((String *)&local_c8,pSVar4);
      if (local_c8 == (Color *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        iVar8 = (int)*(undefined8 *)(this + 0xab8);
LAB_001136a0:
        local_d0 = (Ref *)0x0;
        PopupMenu::set_item_icon(iVar8,(Ref *)(ulong)uVar19);
        if (local_d0 != (Ref *)0x0) {
          cVar6 = RefCounted::unreference();
          pRVar12 = local_d0;
          if (cVar6 != '\0') {
            pOVar11 = (Object *)0x0;
            cVar6 = predelete_handler((Object *)local_d0);
            if (cVar6 != '\0') goto LAB_0011300a;
          }
        }
      }
      else {
        pOVar11 = (Object *)__dynamic_cast(local_c8,&Object::typeinfo,&Texture::typeinfo,0);
        if (pOVar11 == (Object *)0x0) {
LAB_00113117:
          cVar6 = RefCounted::unreference();
          pCVar5 = local_c8;
          if (cVar6 != '\0') {
            cVar6 = predelete_handler((Object *)local_c8);
            if (cVar6 != '\0') {
              (**(code **)(*(long *)pCVar5 + 0x140))(pCVar5);
              Memory::free_static(pCVar5,false);
            }
          }
        }
        else {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            pOVar11 = (Object *)0x0;
          }
          if (local_c8 != (Color *)0x0) goto LAB_00113117;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        iVar8 = (int)*(undefined8 *)(this + 0xab8);
        local_d0 = (Ref *)0x0;
        if (pOVar11 == (Object *)0x0) goto LAB_001136a0;
        pRVar12 = (Ref *)__dynamic_cast(pOVar11,&Object::typeinfo,&Texture2D::typeinfo,0);
        if (pRVar12 != (Ref *)0x0) {
          local_c8 = (Color *)0x0;
          local_d0 = pRVar12;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_d0 = (Ref *)0x0;
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
        }
        PopupMenu::set_item_icon(iVar8,(Ref *)(ulong)uVar19);
        if (local_d0 != (Ref *)0x0) {
          cVar6 = RefCounted::unreference();
          pRVar12 = local_d0;
          if (cVar6 == '\0') goto LAB_001131ae;
          cVar6 = predelete_handler((Object *)local_d0);
          if (cVar6 == '\0') goto LAB_001131ae;
LAB_0011300a:
          (**(code **)(*(long *)pRVar12 + 0x140))(pRVar12);
          Memory::free_static(pRVar12,false);
          if (pOVar11 == (Object *)0x0) goto LAB_0011302a;
        }
LAB_001131ae:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar11);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
      }
LAB_0011302a:
      uVar19 = uVar19 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_e8);
    auVar24 = local_58;
    break;
  case 0xd:
    if (this[0xb08] == (EditorAudioBus)0x0) {
      update_bus(this);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00113600:
      Node::set_process(SUB81(this,0));
      return;
    }
    goto LAB_0011412b;
  case 0x11:
    iVar8 = *(int *)(this + 0xa28);
    iVar9 = AudioServer::get_singleton();
    if ((*(long *)(this + 400) != 0) && (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0')) {
      Node::_update_children_cache_impl();
    }
    iVar9 = AudioServer::get_bus_channels(iVar9);
    if (iVar8 != iVar9) {
      iVar8 = AudioServer::get_singleton();
      if ((*(long *)(this + 400) != 0) && (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0')) {
        Node::_update_children_cache_impl();
      }
      uVar10 = AudioServer::get_bus_channels(iVar8);
      *(undefined4 *)(this + 0xa28) = uVar10;
      _update_visible_channels(this);
    }
    auVar24._8_8_ = local_58._8_8_;
    auVar24._0_8_ = local_58._0_8_;
    if (0 < *(int *)(this + 0xa28)) {
      pEVar14 = this + 0xa30;
      iVar8 = 0;
      do {
        iVar9 = AudioServer::get_singleton();
        if (*(long *)(this + 400) == 0) {
LAB_001136e8:
          iVar17 = *(int *)(this + 0x22c);
        }
        else {
          if (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0') {
            Node::_update_children_cache_impl();
          }
          iVar1 = *(int *)(this + 0x21c);
          if (iVar1 == 1) goto LAB_001136e8;
          if (iVar1 == 2) {
            iVar17 = *(int *)(*(long *)(this + 400) + 0x228) +
                     *(int *)(*(long *)(this + 400) + 0x220) + *(int *)(this + 0x22c);
          }
          else {
            iVar17 = -1;
            if (iVar1 == 0) {
              iVar17 = *(int *)(this + 0x22c) + *(int *)(*(long *)(this + 400) + 0x220);
            }
          }
        }
        EVar7 = (EditorAudioBus)AudioServer::is_bus_channel_active(iVar9,iVar17);
        fVar22 = (float)_LC282;
        fVar23 = (float)_LC282;
        if (EVar7 != (EditorAudioBus)0x0) {
          iVar9 = AudioServer::get_singleton();
          if (*(long *)(this + 400) == 0) {
LAB_00113870:
            iVar17 = *(int *)(this + 0x22c);
          }
          else {
            if (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0') {
              Node::_update_children_cache_impl();
            }
            iVar1 = *(int *)(this + 0x21c);
            if (iVar1 == 1) goto LAB_00113870;
            if (iVar1 == 2) {
              iVar17 = *(int *)(*(long *)(this + 400) + 0x228) +
                       *(int *)(*(long *)(this + 400) + 0x220) + *(int *)(this + 0x22c);
            }
            else {
              iVar17 = -1;
              if (iVar1 == 0) {
                iVar17 = *(int *)(this + 0x22c) + *(int *)(*(long *)(this + 400) + 0x220);
              }
            }
          }
          fVar22 = (float)AudioServer::get_bus_peak_volume_left_db(iVar9,iVar17);
          fVar23 = (float)_LC282;
          if ((float)_LC282 <= fVar22) {
            fVar23 = fVar22;
          }
          iVar9 = AudioServer::get_singleton();
          if (*(long *)(this + 400) == 0) {
LAB_00113860:
            iVar17 = *(int *)(this + 0x22c);
          }
          else {
            if (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0') {
              Node::_update_children_cache_impl();
            }
            iVar1 = *(int *)(this + 0x21c);
            if (iVar1 == 1) goto LAB_00113860;
            if (iVar1 == 2) {
              iVar17 = *(int *)(*(long *)(this + 400) + 0x228) +
                       *(int *)(*(long *)(this + 400) + 0x220) + *(int *)(this + 0x22c);
            }
            else {
              iVar17 = -1;
              if (iVar1 == 0) {
                iVar17 = *(int *)(this + 0x22c) + *(int *)(*(long *)(this + 400) + 0x220);
              }
            }
          }
          fVar20 = (float)AudioServer::get_bus_peak_volume_right_db(iVar9,iVar17);
          fVar22 = (float)_LC282;
          if ((float)_LC282 <= fVar20) {
            fVar22 = fVar20;
          }
        }
        if (fVar23 < *(float *)(pEVar14 + 4) || fVar23 == *(float *)(pEVar14 + 4)) {
          dVar21 = (double)Node::get_process_delta_time();
          fVar23 = (float)((double)*(float *)(pEVar14 + 4) - dVar21 * __LC303);
        }
        *(float *)(pEVar14 + 4) = fVar23;
        if (fVar22 < *(float *)(pEVar14 + 8) || fVar22 == *(float *)(pEVar14 + 8)) {
          dVar21 = (double)Node::get_process_delta_time();
          fVar22 = (float)((double)*(float *)(pEVar14 + 8) - dVar21 * __LC303);
        }
        *(float *)(pEVar14 + 8) = fVar22;
        Range::set_value((double)*(float *)(pEVar14 + 4));
        Range::set_value((double)*(float *)(pEVar14 + 8));
        if (*pEVar14 != EVar7) {
          if (EVar7 == (EditorAudioBus)0x0) {
            TextureProgressBar::set_over_texture(*(Ref **)(pEVar14 + 0x10));
            TextureProgressBar::set_over_texture(*(Ref **)(pEVar14 + 0x18));
          }
          else {
            local_c8 = (Color *)0x0;
            TextureProgressBar::set_over_texture(*(Ref **)(pEVar14 + 0x10));
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
            local_c8 = (Color *)0x0;
            TextureProgressBar::set_over_texture(*(Ref **)(pEVar14 + 0x18));
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
          }
          *pEVar14 = EVar7;
        }
        auVar24._8_8_ = local_58._8_8_;
        auVar24._0_8_ = local_58._0_8_;
        iVar8 = iVar8 + 1;
        pEVar14 = pEVar14 + 0x20;
      } while (iVar8 < *(int *)(this + 0xa28));
    }
    break;
  case 0x16:
  case 0x2a:
    auVar24 = local_58;
    if (this[0xb0a] != (EditorAudioBus)0x0) {
      this[0xb0a] = (EditorAudioBus)0x0;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        CanvasItem::queue_redraw();
        return;
      }
      goto LAB_0011412b;
    }
    break;
  case 0x1e:
    if (this[0xb09] == (EditorAudioBus)0x0) {
      cVar6 = Control::has_focus();
      if (cVar6 == '\0') {
        local_58._8_8_ = Control::get_size();
        local_58._0_8_ = 0;
        if ((_notification(int)::{lambda()#15}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#15}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#15}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#15}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#15}::operator()()::sname);
        }
      }
      else {
        local_58._8_8_ = Control::get_size();
        local_58._0_8_ = 0;
        if ((_notification(int)::{lambda()#14}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#14}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&_notification(int)::{lambda()#14}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()#14}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_notification(int)::{lambda()#14}::operator()()::sname);
        }
        if (_notification(int)::{lambda()#13}::operator()()::sname == '\0') {
          puVar15 = &_notification(int)::{lambda()#13}::operator()()::sname;
          pcVar18 = (char *)&_notification(int)::{lambda()#13}::operator()()::sname;
          iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#13}::operator()()::sname);
          if (iVar8 != 0) {
            uVar16 = 100;
            goto LAB_00113948;
          }
        }
      }
    }
    else {
      local_58._8_8_ = Control::get_size();
      local_58._0_8_ = 0;
      if ((_notification(int)::{lambda()#12}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#12}::operator()()::sname),
         iVar8 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#12}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#12}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#12}::operator()()::sname);
      }
      if (_notification(int)::{lambda()#11}::operator()()::sname == '\0') {
        puVar15 = &_notification(int)::{lambda()#11}::operator()()::sname;
        pcVar18 = (char *)&_notification(int)::{lambda()#11}::operator()()::sname;
        iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#11}::operator()()::sname);
        uVar16 = 0xe5;
        if (iVar8 != 0) {
LAB_00113948:
          _scs_create(pcVar18,(bool)uVar16);
          __cxa_atexit(StringName::~StringName,pcVar18,&__dso_handle);
          __cxa_guard_release(puVar15);
        }
      }
    }
    Control::get_theme_stylebox((StringName *)&local_c8,(StringName *)this);
    CanvasItem::draw_style_box((Ref *)this,(Rect2 *)&local_c8);
    Ref<StyleBox>::unref((Ref<StyleBox> *)&local_c8);
    if (*(long *)(this + 400) == 0) {
LAB_00113988:
      iVar8 = *(int *)(this + 0x22c);
LAB_0011398e:
      auVar24._8_8_ = local_58._8_8_;
      auVar24._0_8_ = local_58._0_8_;
      if (iVar8 == 0) break;
    }
    else {
      if (*(char *)(*(long *)(this + 400) + 0x1d0) != '\0') {
        Node::_update_children_cache_impl();
      }
      iVar8 = *(int *)(this + 0x21c);
      if (iVar8 == 1) goto LAB_00113988;
      if (iVar8 == 2) {
        iVar8 = *(int *)(*(long *)(this + 400) + 0x228) + *(int *)(*(long *)(this + 400) + 0x220) +
                *(int *)(this + 0x22c);
        goto LAB_0011398e;
      }
      if (iVar8 == 0) {
        iVar8 = *(int *)(this + 0x22c) + *(int *)(*(long *)(this + 400) + 0x220);
        goto LAB_0011398e;
      }
    }
    auVar24._8_8_ = local_58._8_8_;
    auVar24._0_8_ = local_58._0_8_;
    if (this[0xb0a] != (EditorAudioBus)0x0) {
      if ((_notification(int)::{lambda()#16}::operator()()::sname == '\0') &&
         (iVar8 = __cxa_guard_acquire(&_notification(int)::{lambda()#16}::operator()()::sname),
         iVar8 != 0)) {
        _scs_create((char *)&_notification(int)::{lambda()#16}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#16}::operator()()::sname
                     ,&__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#16}::operator()()::sname);
      }
      auVar24 = Control::get_theme_color
                          ((StringName *)this,
                           (StringName *)&_notification(int)::{lambda()#16}::operator()()::sname);
      local_68 = auVar24._0_8_;
      local_60._4_4_ = auVar24._12_4_;
      local_60 = CONCAT44((float)((double)local_60._4_4_ * __LC58),auVar24._8_4_);
      local_58._8_8_ = Control::get_size();
      local_58._0_8_ = 0;
      CanvasItem::draw_rect((Rect2 *)this,(Color *)local_58,SUB81(&local_68,0),_LC40,false);
      auVar24._8_8_ = local_58._8_8_;
      auVar24._0_8_ = local_58._0_8_;
    }
    break;
  case 0x1f:
    uVar3 = CONCAT44(_LC282._4_4_,(float)_LC282);
    pEVar14 = this + 0xa30;
    do {
      *(undefined8 *)(pEVar14 + 4) = uVar3;
      pEVar13 = pEVar14 + 0x20;
      *pEVar14 = (EditorAudioBus)0x1;
      pEVar14 = pEVar13;
    } while (this + 0xab0 != pEVar13);
    CanvasItem::is_visible_in_tree();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00113600;
    goto LAB_0011412b;
  }
  local_58 = auVar24;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011412b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBus::_bind_methods() */

void EditorAudioBus::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  MethodBind *pMVar5;
  int *piVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  int *local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar5 = create_method_bind<EditorAudioBus>(update_bus);
  StringName::StringName((StringName *)&local_c8,"update_bus",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar3 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_b8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar5 = create_method_bind<EditorAudioBus>(update_send);
  StringName::StringName((StringName *)&local_c8,"update_send",false);
  local_b8._0_8_ = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  uVar3 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_b8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      local_b8._0_8_ = (long *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        plVar7 = (long *)uVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static((long *)(uVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_e0 = 0;
  local_c8 = "duplicate_request";
  local_c0 = 0x11;
  String::parse_latin1((StrRange *)&local_e0);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  local_d8 = "EditorAudioBus";
  local_e8 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_c8 = "delete_request";
  local_e0 = 0;
  local_c0 = 0xe;
  String::parse_latin1((StrRange *)&local_e0);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  local_d8 = "EditorAudioBus";
  local_e8 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_c8 = "vol_reset_request";
  local_e0 = 0;
  local_c0 = 0x11;
  String::parse_latin1((StrRange *)&local_e0);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  local_d8 = "EditorAudioBus";
  local_e8 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_c8 = "drop_end_request";
  local_e0 = 0;
  local_c0 = 0x10;
  String::parse_latin1((StrRange *)&local_e0);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  local_d8 = "EditorAudioBus";
  local_e8 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  local_c8 = "dropped";
  local_e0 = 0;
  local_c0 = 7;
  String::parse_latin1((StrRange *)&local_e0);
  local_b8 = (undefined1  [16])0x0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  local_d8 = "EditorAudioBus";
  local_e8 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar4 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar8 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar8 = lVar8 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBuses::_bind_methods() */

void EditorAudioBuses::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorAudioBuses,int>(_update_bus);
  StringName::StringName((StringName *)local_78,"_update_bus",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<EditorAudioBuses>(_update_sends);
  StringName::StringName((StringName *)local_78,"_update_sends",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioMeterNotches::_bind_methods() */

void EditorAudioMeterNotches::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorAudioMeterNotches,float,float,bool>(add_notch);
  StringName::StringName((StringName *)local_78,"add_notch",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  pMVar4 = create_method_bind<EditorAudioMeterNotches>(_draw_audio_notches);
  StringName::StringName((StringName *)local_78,"_draw_audio_notches",false);
  local_68 = (long *)0x0;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
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



/* StyleBoxEmpty::is_class_ptr(void*) const */

uint __thiscall StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this,void *param_1)

{
  return (uint)CONCAT71(0x12ec,(undefined4 *)param_1 == &StyleBox::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ec,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */

undefined8 StyleBoxEmpty::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */

void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */

undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */

undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* StyleBoxEmpty::_notificationv(int, bool) */

void StyleBoxEmpty::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StyleBoxEmpty::get_style_margin(Side) const */

undefined8 StyleBoxEmpty::get_style_margin(void)

{
  return 0;
}



/* StyleBoxEmpty::draw(RID, Rect2 const&) const */

void StyleBoxEmpty::draw(void)

{
  return;
}



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* EditorAudioBusDrop::is_class_ptr(void*) const */

uint __thiscall EditorAudioBusDrop::is_class_ptr(EditorAudioBusDrop *this,void *param_1)

{
  return (uint)CONCAT71(0x12ec,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12eb,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorAudioMeterNotches::is_class_ptr(void*) const */

uint __thiscall EditorAudioMeterNotches::is_class_ptr(EditorAudioMeterNotches *this,void *param_1)

{
  return (uint)CONCAT71(0x12ec,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ea,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioBusesEditorPlugin::is_class_ptr(void*) const */

uint __thiscall AudioBusesEditorPlugin::is_class_ptr(AudioBusesEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x12ec,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x12ea,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12ed,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* AudioBusesEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 AudioBusesEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioBusesEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 AudioBusesEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioBusesEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 AudioBusesEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AudioBusesEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AudioBusesEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* AudioBusesEditorPlugin::has_main_screen() const */

undefined8 AudioBusesEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,int,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<EditorAudioBus, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, float>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,float> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,String_const&> *this)

{
  return;
}



/* MethodBindT<float, float, bool>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<float,float,bool>::get_argument_meta(MethodBindT<float,float,bool> *this,int param_1)

{
  return -((uint)param_1 < 2) & 9;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBuses,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int,int>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBuses,void,int,int> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBuses,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBuses,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, Object*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBuses,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Ref<InputEvent> >::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<EditorAudioBus, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<EditorAudioBus, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<Tree, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void>::get_argument_count
          (CallableCustomMethodPointer<Tree,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, float>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,float>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,void,float> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorAudioBus, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorAudioBus,void,String_const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorAudioBus, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, float>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,float> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<EditorAudioBus, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,int,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012e8f8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012e8f8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012e958;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012e958;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float, float, bool>::~MethodBindT() */

void __thiscall MethodBindT<float,float,bool>::~MethodBindT(MethodBindT<float,float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012e9b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float, float, bool>::~MethodBindT() */

void __thiscall MethodBindT<float,float,bool>::~MethodBindT(MethodBindT<float,float,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012e9b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* EditorAudioBusDrop::~EditorAudioBusDrop() */

void __thiscall EditorAudioBusDrop::~EditorAudioBusDrop(EditorAudioBusDrop *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012d710;
  Control::~Control((Control *)this);
  return;
}



/* EditorAudioBusDrop::~EditorAudioBusDrop() */

void __thiscall EditorAudioBusDrop::~EditorAudioBusDrop(EditorAudioBusDrop *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012d710;
  Control::~Control((Control *)this);
  operator_delete(this,0x9d0);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VSlider::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VSlider::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAudioBus::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAudioBus::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAudioBusDrop::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAudioBusDrop::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAudioBuses::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAudioBuses::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorAudioMeterNotches::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorAudioMeterNotches::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00137018 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VSlider::_property_can_revertv(StringName const&) const */

undefined8 VSlider::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAudioBus::_property_can_revertv(StringName const&) const */

undefined8 EditorAudioBus::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAudioBusDrop::_property_can_revertv(StringName const&) const */

undefined8 EditorAudioBusDrop::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAudioBuses::_property_can_revertv(StringName const&) const */

undefined8 EditorAudioBuses::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorAudioMeterNotches::_property_can_revertv(StringName const&) const */

undefined8 EditorAudioMeterNotches::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00137020 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* AudioBusesEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void AudioBusesEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)PTR__validate_property_00137028 != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* MethodBindT<float, float, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<float,float,bool>::_gen_argument_type(MethodBindT<float,float,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 3) {
    cVar1 = (param_1 != 2) * '\x02' + '\x01';
  }
  return cVar1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Element **ppEVar9;
  long lVar10;
  Element *pEVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar12 = param_2 * 2 + 2;
  lVar16 = param_2;
  if (lVar12 < param_3) {
    do {
      lVar10 = lVar12 + -1;
      ppEVar9 = param_5 + lVar10 + param_1;
      pEVar11 = *ppEVar9;
      pEVar3 = param_5[param_1 + lVar12];
      lVar13 = *(long *)pEVar11;
      lVar6 = *(long *)pEVar3;
      if (lVar6 == 0) {
        if (lVar13 != 0) {
          pbVar14 = *(byte **)(lVar13 + 8);
          uVar8 = 0;
          pbVar15 = &_LC2;
LAB_00116934:
          if (pbVar14 == (byte *)0x0) {
            lVar6 = 0;
            uVar4 = **(uint **)(lVar13 + 0x10);
            if (uVar4 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_001168e0;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_001168e0;
                if (uVar4 < uVar8) break;
                uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                uVar4 = (*(uint **)(lVar13 + 0x10))[lVar6 + 1];
                lVar6 = lVar6 + 1;
              } while (uVar8 != 0 || uVar4 != 0);
            }
          }
          else {
            uVar4 = (uint)(char)*pbVar14;
            bVar5 = (byte)uVar8 | *pbVar14;
LAB_00116986:
            if (bVar5 != 0) {
              lVar13 = 1;
              do {
                if (uVar8 == 0) goto LAB_001168e0;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_001168e0;
                if (uVar4 < uVar8) break;
                pbVar1 = pbVar14 + lVar13;
                uVar4 = (uint)(char)*pbVar1;
                pbVar2 = pbVar15 + lVar13;
                uVar8 = (uint)(char)*pbVar2;
                lVar13 = lVar13 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar15 = *(byte **)(lVar6 + 8);
        if (lVar13 == 0) {
          if (pbVar15 != (byte *)0x0) {
            bVar5 = *pbVar15;
            uVar8 = (uint)(char)bVar5;
            pbVar14 = &_LC2;
            uVar4 = 0;
            goto LAB_00116986;
          }
          uVar8 = 0;
          pbVar14 = &_LC2;
        }
        else {
          pbVar14 = *(byte **)(lVar13 + 8);
          if (pbVar15 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar15;
            goto LAB_00116934;
          }
          if (pbVar14 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar13 + 0x10);
            uVar4 = **(uint **)(lVar6 + 0x10);
            if (uVar8 != 0 || uVar4 != 0) {
              do {
                if (uVar4 == 0) goto LAB_001168e0;
                if (uVar8 == 0) break;
                if (uVar4 < uVar8) goto LAB_001168e0;
                if (uVar8 < uVar4) break;
                uVar4 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar4 != 0 || uVar8 != 0);
            }
            goto LAB_00116908;
          }
          uVar8 = (uint)(char)*pbVar14;
        }
        lVar13 = 0;
        uVar4 = **(uint **)(lVar6 + 0x10);
        if (uVar4 != 0 || uVar8 != 0) {
          do {
            if (uVar4 == 0) goto LAB_001168e0;
            if (uVar8 == 0) break;
            if (uVar4 < uVar8) goto LAB_001168e0;
            if (uVar8 < uVar4) break;
            uVar4 = (*(uint **)(lVar6 + 0x10))[lVar13 + 1];
            uVar8 = (uint)(char)pbVar14[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar4 != 0 || uVar8 != 0);
        }
      }
LAB_00116908:
      ppEVar9 = param_5 + param_1 + lVar12;
      lVar10 = lVar12;
      pEVar11 = pEVar3;
      lVar12 = lVar12 + 1;
LAB_001168e0:
      lVar12 = lVar12 * 2;
      param_5[param_1 + lVar16] = pEVar11;
      lVar16 = lVar10;
    } while (lVar12 < param_3);
    if (lVar12 == param_3) goto LAB_00116d0d;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar12 != param_3) goto LAB_00116b0a;
LAB_00116d0d:
    lVar10 = lVar12 + -1;
    *ppEVar9 = param_5[param_1 + lVar10];
    ppEVar9 = param_5 + param_1 + lVar10;
  }
  lVar12 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
  if (param_2 < lVar10) {
    lVar16 = *(long *)param_4;
    while( true ) {
      lVar13 = lVar12 >> 1;
      pEVar11 = param_5[param_1 + lVar13];
      lVar12 = *(long *)pEVar11;
      if (lVar12 == 0) break;
      pbVar15 = *(byte **)(lVar12 + 8);
      if (lVar16 == 0) {
        uVar8 = 0;
        pbVar14 = &_LC2;
        if (pbVar15 != (byte *)0x0) {
          bVar5 = *pbVar15;
          uVar8 = (uint)(char)bVar5;
          uVar4 = 0;
          pbVar14 = &_LC2;
          goto LAB_00116b8a;
        }
LAB_00116bea:
        uVar4 = **(uint **)(lVar12 + 0x10);
        if (uVar4 == 0 && uVar8 == 0) goto LAB_00116b00;
        lVar6 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_00116b00;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_00116b00;
          uVar4 = (*(uint **)(lVar12 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar14[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_00116b00;
        }
      }
      else {
        pbVar14 = *(byte **)(lVar16 + 8);
        if (pbVar15 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar14;
            goto LAB_00116bea;
          }
          uVar8 = **(uint **)(lVar16 + 0x10);
          uVar4 = **(uint **)(lVar12 + 0x10);
          if (uVar8 == 0 && uVar4 == 0) goto LAB_00116b00;
          lVar6 = 4;
          while (uVar4 != 0) {
            if (uVar8 == 0) goto LAB_00116b00;
            if (uVar4 < uVar8) break;
            if (uVar8 < uVar4) goto LAB_00116b00;
            uVar4 = *(uint *)((long)*(uint **)(lVar12 + 0x10) + lVar6);
            uVar8 = *(uint *)((long)*(uint **)(lVar16 + 0x10) + lVar6);
            lVar6 = lVar6 + 4;
            if (uVar4 == 0 && uVar8 == 0) {
              param_5[param_1 + lVar10] = param_4;
              return;
            }
          }
        }
        else {
          uVar4 = (uint)(char)*pbVar15;
          uVar8 = uVar4;
          if (pbVar14 == (byte *)0x0) goto LAB_00116b35;
LAB_00116b84:
          uVar4 = (uint)(char)*pbVar14;
          bVar5 = (byte)uVar8 | *pbVar14;
LAB_00116b8a:
          if (bVar5 == 0) goto LAB_00116b00;
          lVar12 = 1;
          while (uVar8 != 0) {
            if (uVar4 == 0) goto LAB_00116b00;
            if (uVar8 < uVar4) break;
            if (uVar4 < uVar8) goto LAB_00116b00;
            pbVar1 = pbVar14 + lVar12;
            uVar4 = (uint)(char)*pbVar1;
            pbVar2 = pbVar15 + lVar12;
            uVar8 = (uint)(char)*pbVar2;
            lVar12 = lVar12 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00116b00;
          }
        }
      }
LAB_00116ad0:
      param_5[lVar10 + param_1] = pEVar11;
      lVar12 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
      lVar10 = lVar13;
      if (lVar13 <= param_2) {
        param_5[param_1 + lVar13] = param_4;
        return;
      }
    }
    if (lVar16 != 0) {
      pbVar14 = *(byte **)(lVar16 + 8);
      uVar4 = 0;
      uVar8 = 0;
      pbVar15 = &_LC2;
      if (pbVar14 != (byte *)0x0) goto LAB_00116b84;
LAB_00116b35:
      uVar8 = **(uint **)(lVar16 + 0x10);
      if (uVar8 != 0 || uVar4 != 0) {
        lVar12 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_00116b00;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_00116b00;
          uVar4 = (uint)(char)pbVar15[lVar12 + 1];
          uVar8 = (*(uint **)(lVar16 + 0x10))[lVar12 + 1];
          lVar12 = lVar12 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_00116b00;
        }
        goto LAB_00116ad0;
      }
    }
LAB_00116b00:
    ppEVar9 = param_5 + lVar10 + param_1;
  }
LAB_00116b0a:
  *ppEVar9 = param_4;
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  Element *pEVar10;
  byte *pbVar11;
  
  lVar3 = *(long *)param_2;
LAB_00116dd0:
  pEVar10 = param_3[param_1 + -1];
  lVar5 = *(long *)pEVar10;
  if (lVar3 != 0) {
    pbVar9 = *(byte **)(lVar3 + 8);
    do {
      if (lVar5 == 0) {
        if (pbVar9 != (byte *)0x0) goto code_r0x00116e81;
        uVar7 = 0;
        pbVar11 = &_LC2;
LAB_00116e0c:
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar8 == 0 && uVar7 == 0) goto LAB_00116f9b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_00116f9b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_00116f9b;
          uVar8 = (*(uint **)(lVar3 + 0x10))[lVar5 + 1];
          uVar7 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_00116f9b;
        }
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar9 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar9;
          goto LAB_00116eac;
        }
        if (pbVar11 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar11;
          goto LAB_00116e0c;
        }
        uVar7 = **(uint **)(lVar5 + 0x10);
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar7 == 0 && uVar8 == 0) goto LAB_00116f9b;
        lVar6 = 4;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_00116f9b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_00116f9b;
          uVar8 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar6);
          uVar7 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_00116f9b;
        }
      }
      if (param_1 == 1) goto LAB_00116f70;
      param_3[param_1] = pEVar10;
      pEVar10 = param_3[param_1 + -2];
      lVar5 = *(long *)pEVar10;
      param_1 = param_1 + -1;
    } while( true );
  }
  if (lVar5 != 0) {
    pbVar11 = *(byte **)(lVar5 + 8);
    uVar7 = 0;
    pbVar9 = &_LC2;
LAB_00116eac:
    if (pbVar11 != (byte *)0x0) {
      uVar8 = (uint)(char)*pbVar11;
      bVar4 = (byte)uVar7 | *pbVar11;
      goto LAB_00116f1f;
    }
    uVar8 = **(uint **)(lVar5 + 0x10);
    if (uVar8 != 0 || uVar7 != 0) {
      lVar6 = 0;
      while (uVar7 != 0) {
        if (uVar8 == 0) goto LAB_00116f9b;
        if (uVar7 < uVar8) break;
        if (uVar8 < uVar7) goto LAB_00116f9b;
        uVar7 = (uint)(char)pbVar9[lVar6 + 1];
        uVar8 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar7 == 0 && uVar8 == 0) goto LAB_00116f9b;
      }
      goto LAB_00116f00;
    }
  }
  goto LAB_00116f9b;
code_r0x00116e81:
  bVar4 = *pbVar9;
  uVar7 = (uint)(char)bVar4;
  pbVar11 = &_LC2;
  uVar8 = 0;
LAB_00116f1f:
  if (bVar4 == 0) goto LAB_00116f9b;
  lVar5 = 1;
  while (uVar7 != 0) {
    if (uVar8 == 0) goto LAB_00116f9b;
    if (uVar7 < uVar8) break;
    if (uVar8 < uVar7) goto LAB_00116f9b;
    pbVar1 = pbVar9 + lVar5;
    uVar7 = (uint)(char)*pbVar1;
    pbVar2 = pbVar11 + lVar5;
    uVar8 = (uint)(char)*pbVar2;
    lVar5 = lVar5 + 1;
    if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00116f9b;
  }
LAB_00116f00:
  if (param_1 == 1) {
LAB_00116f70:
    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                     "bad comparison function; sorting will be broken",0,0);
    param_1 = 1;
LAB_00116f9b:
    param_3[param_1] = param_2;
    return;
  }
  param_3[param_1] = pEVar10;
  param_1 = param_1 + -1;
  goto LAB_00116dd0;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::linear_insert(long param_1,long param_2,Element **param_3)

{
  Element **__src;
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  __src = param_3 + param_1;
  pEVar3 = param_3[param_2];
  lVar6 = *(long *)pEVar3;
  lVar5 = *(long *)*__src;
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_00117170;
    pbVar10 = *(byte **)(lVar5 + 8);
    uVar8 = 0;
    pbVar11 = &_LC2;
LAB_00117124:
    if (pbVar10 == (byte *)0x0) {
      uVar9 = **(uint **)(lVar5 + 0x10);
      if (uVar8 != 0 || uVar9 != 0) {
        lVar6 = 0;
        do {
          if (uVar8 == 0) goto LAB_001170c0;
          if (uVar9 == 0) break;
          if (uVar8 < uVar9) goto LAB_001170c0;
          if (uVar9 < uVar8) break;
          uVar8 = (uint)(char)pbVar11[lVar6 + 1];
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (uVar8 != 0 || uVar9 != 0);
      }
      goto LAB_00117170;
    }
    uVar9 = (uint)(char)*pbVar10;
    bVar4 = (byte)uVar8 | *pbVar10;
LAB_00117197:
    if (bVar4 != 0) {
      lVar6 = 1;
      do {
        if (uVar8 == 0) goto LAB_001170c0;
        if (uVar9 == 0) break;
        if (uVar8 < uVar9) goto LAB_001170c0;
        if (uVar9 < uVar8) break;
        pbVar2 = pbVar11 + lVar6;
        uVar8 = (uint)(char)*pbVar2;
        pbVar1 = pbVar10 + lVar6;
        uVar9 = (uint)(char)*pbVar1;
        lVar6 = lVar6 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(lVar6 + 8);
    if (lVar5 == 0) {
      if (pbVar11 != (byte *)0x0) {
        bVar4 = *pbVar11;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC2;
        uVar9 = 0;
        goto LAB_00117197;
      }
      uVar8 = 0;
      pbVar10 = &_LC2;
    }
    else {
      pbVar10 = *(byte **)(lVar5 + 8);
      if (pbVar11 != (byte *)0x0) {
        uVar8 = (uint)(char)*pbVar11;
        goto LAB_00117124;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar8 = **(uint **)(lVar5 + 0x10);
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar8 != 0 || uVar9 != 0) {
          lVar7 = 4;
          do {
            if (uVar9 == 0) goto LAB_001170c0;
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_001170c0;
            if (uVar8 < uVar9) break;
            uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
            uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
            lVar7 = lVar7 + 4;
          } while (uVar9 != 0 || uVar8 != 0);
        }
        goto LAB_00117170;
      }
      uVar8 = (uint)(char)*pbVar10;
    }
    uVar9 = **(uint **)(lVar6 + 0x10);
    if (uVar8 != 0 || uVar9 != 0) {
      lVar5 = 0;
      do {
        if (uVar9 == 0) {
LAB_001170c0:
          if (param_1 < param_2) {
            memmove(param_3 + param_1 + 1,__src,(param_2 - param_1) * 8);
          }
          *__src = pEVar3;
          return;
        }
        if (uVar8 == 0) break;
        if (uVar9 < uVar8) goto LAB_001170c0;
        if (uVar8 < uVar9) break;
        uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
        uVar8 = (uint)(char)pbVar10[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (uVar9 != 0 || uVar8 != 0);
    }
  }
LAB_00117170:
  unguarded_linear_insert(param_2,pEVar3,param_3);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
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
  
  lVar8 = *(long *)*param_1;
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)*param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC2;
    pbVar16 = &_LC2;
    if (lVar13 == 0) {
LAB_00117b80:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_0011744e:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00117454;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC2;
      if (*pbVar16 == 0) goto LAB_00117749;
LAB_001175a2:
      lVar8 = 1;
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
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC2;
LAB_001173d2:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_001174c0:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00117508;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00117508;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00117438;
        }
        goto LAB_00117b80;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00117508;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00117508;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00117438;
      }
      if (lVar9 == 0) goto LAB_001177a1;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00117454:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00117599;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_00117a86;
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
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00117730:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_00117a8f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
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
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_00117916:
      uVar4 = **(uint **)(lVar13 + 0x10);
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
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_00117978:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
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
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC2;
        goto LAB_001174c0;
      }
      uVar4 = 0;
      pbVar15 = &_LC2;
LAB_001172b2:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00117508;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00117508;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00117438:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_0011744e;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_00117838:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_00117af3;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
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
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00117730;
        }
LAB_00117a86:
        if (pbVar15 != (byte *)0x0) goto LAB_00117978;
        goto LAB_00117a8f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_00117b51;
      }
LAB_001177a1:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC2;
LAB_00117599:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_001175a2;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_001173d2;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_001172b2;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_001176a8:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00117508;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_001176a8;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00117438;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_00117838;
      }
LAB_00117b51:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC2;
      uVar6 = uVar4;
LAB_00117af3:
      if (uVar6 != 0) {
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
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00117730;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_00117916;
  }
LAB_00117749:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
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
  return param_2;
joined_r0x00117508:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC2;
    if (pbVar15 != (byte *)0x0) goto LAB_001175f7;
LAB_00117524:
    uVar6 = **(uint **)(lVar13 + 0x10);
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
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_001176c0;
    }
LAB_00117b8e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_001178ae;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00117524;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00117a29;
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
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
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
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_001176c0;
        }
LAB_00117a29:
        if (pbVar16 == (byte *)0x0) goto LAB_00117a2e;
        goto LAB_001179d6;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_001175f7:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_00117b8e;
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
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_001176c0:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_00117a2e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
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
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_001178ae:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
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
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_001179d6:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
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
  while( true ) {
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
  return param_1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  Element **ppEVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = *(long *)param_3;
  lVar7 = *(long *)param_4[param_1];
  lVar11 = param_1;
  lVar10 = param_2;
joined_r0x00117c37:
  if (lVar7 == 0) {
    if (lVar14 == 0) goto LAB_00117d68;
    pbVar13 = *(byte **)(lVar14 + 8);
    uVar9 = 0;
    pbVar12 = &_LC2;
LAB_00117cee:
    if (pbVar13 == (byte *)0x0) {
      uVar5 = **(uint **)(lVar14 + 0x10);
      if (uVar5 != 0 || uVar9 != 0) {
        lVar7 = 0;
        do {
          if (uVar9 == 0) goto LAB_00117cb8;
          if (uVar5 == 0) break;
          if (uVar9 < uVar5) goto LAB_00117cb8;
          if (uVar5 < uVar9) break;
          uVar9 = (uint)(char)pbVar12[lVar7 + 1];
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (uVar9 != 0 || uVar5 != 0);
      }
      goto LAB_00117d68;
    }
    uVar5 = (uint)(char)*pbVar13;
    bVar6 = (byte)uVar9 | *pbVar13;
LAB_00117fb5:
    if (bVar6 != 0) {
      lVar7 = 1;
      do {
        if (uVar9 == 0) goto LAB_00117cb8;
        if (uVar5 == 0) break;
        if (uVar9 < uVar5) goto LAB_00117cb8;
        if (uVar5 < uVar9) break;
        pbVar1 = pbVar12 + lVar7;
        uVar9 = (uint)(char)*pbVar1;
        pbVar2 = pbVar13 + lVar7;
        uVar5 = (uint)(char)*pbVar2;
        lVar7 = lVar7 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar12 = *(byte **)(lVar7 + 8);
    if (lVar14 == 0) {
      if (pbVar12 != (byte *)0x0) {
        bVar6 = *pbVar12;
        uVar9 = (uint)(char)bVar6;
        uVar5 = 0;
        pbVar13 = &_LC2;
        goto LAB_00117fb5;
      }
      uVar9 = 0;
      pbVar13 = &_LC2;
    }
    else {
      pbVar13 = *(byte **)(lVar14 + 8);
      if (pbVar12 != (byte *)0x0) {
        uVar9 = (uint)(char)*pbVar12;
        goto LAB_00117cee;
      }
      if (pbVar13 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar14 + 0x10);
        uVar5 = **(uint **)(lVar7 + 0x10);
        if (uVar9 != 0 || uVar5 != 0) {
          lVar8 = 4;
          do {
            if (uVar5 == 0) goto LAB_00117cb8;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_00117cb8;
            if (uVar9 < uVar5) break;
            uVar5 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
            uVar9 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar5 != 0 || uVar9 != 0);
        }
        goto LAB_00117d68;
      }
      uVar9 = (uint)(char)*pbVar13;
    }
    uVar5 = **(uint **)(lVar7 + 0x10);
    if (uVar5 != 0 || uVar9 != 0) {
      lVar8 = 0;
      do {
        if (uVar5 == 0) goto LAB_00117cb8;
        if (uVar9 == 0) break;
        if (uVar5 < uVar9) goto LAB_00117cb8;
        if (uVar9 < uVar5) break;
        uVar5 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
        uVar9 = (uint)(char)pbVar13[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar9 != 0);
    }
  }
  goto LAB_00117d68;
LAB_00117cb8:
  if (param_2 + -1 == lVar11) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar14 = *(long *)param_3;
LAB_00117d68:
    lVar10 = lVar10 + -1;
    lVar7 = *(long *)param_4[lVar10];
    ppEVar4 = param_4 + lVar10;
    do {
      if (lVar14 == 0) {
        if (lVar7 == 0) goto LAB_00117f68;
        pbVar13 = *(byte **)(lVar7 + 8);
        uVar5 = 0;
        pbVar12 = &_LC2;
        uVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
LAB_00117e3c:
          uVar9 = **(uint **)(lVar7 + 0x10);
          if (uVar9 == 0 && uVar5 == 0) goto LAB_00117f68;
          lVar8 = 0;
          while (uVar5 != 0) {
            if (uVar9 == 0) goto LAB_00117f68;
            if (uVar5 < uVar9) break;
            if (uVar9 < uVar5) goto LAB_00117f68;
            uVar5 = (uint)(char)pbVar12[lVar8 + 1];
            uVar9 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar5 == 0 && uVar9 == 0) goto LAB_00117f68;
          }
        }
        else {
LAB_00117e9b:
          uVar5 = (uint)(char)*pbVar13;
          bVar6 = (byte)uVar9 | *pbVar13;
LAB_00117ea1:
          if (bVar6 == 0) goto LAB_00117f68;
          lVar7 = 1;
          while (uVar9 != 0) {
            if (uVar5 == 0) goto LAB_00117f68;
            if (uVar9 < uVar5) break;
            if (uVar5 < uVar9) goto LAB_00117f68;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00117f68;
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar14 + 8);
        if (lVar7 == 0) {
          uVar9 = 0;
          pbVar13 = &_LC2;
          if (pbVar12 != (byte *)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC2;
            goto LAB_00117ea1;
          }
        }
        else {
          pbVar13 = *(byte **)(lVar7 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar5 = (uint)(char)*pbVar12;
            uVar9 = uVar5;
            if (pbVar13 == (byte *)0x0) goto LAB_00117e3c;
            goto LAB_00117e9b;
          }
          if (pbVar13 == (byte *)0x0) {
            uVar9 = **(uint **)(lVar7 + 0x10);
            uVar5 = **(uint **)(lVar14 + 0x10);
            if (uVar9 != 0 || uVar5 != 0) {
              lVar8 = 4;
              while (uVar5 != 0) {
                if (uVar9 == 0) goto LAB_00117f68;
                if (uVar5 < uVar9) break;
                if (uVar9 < uVar5) goto LAB_00117f68;
                uVar5 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
                uVar9 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
                lVar8 = lVar8 + 4;
                if (uVar5 == 0 && uVar9 == 0) goto LAB_00117f68;
              }
              goto LAB_00117e00;
            }
            goto LAB_00117f68;
          }
          uVar9 = (uint)(char)*pbVar13;
        }
        uVar5 = **(uint **)(lVar14 + 0x10);
        if (uVar5 == 0 && uVar9 == 0) goto LAB_00117f68;
        lVar7 = 0;
        while (uVar5 != 0) {
          if (uVar9 == 0) goto LAB_00117f68;
          if (uVar5 < uVar9) break;
          if (uVar9 < uVar5) goto LAB_00117f68;
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          uVar9 = (uint)(char)pbVar13[lVar7 + 1];
          lVar7 = lVar7 + 1;
          if (uVar5 == 0 && uVar9 == 0) goto LAB_00117f68;
        }
      }
LAB_00117e00:
      if (lVar10 == param_1) goto LAB_00117f40;
      lVar10 = lVar10 + -1;
      lVar7 = *(long *)ppEVar4[-1];
      ppEVar4 = ppEVar4 + -1;
    } while( true );
  }
LAB_00117cc6:
  lVar11 = lVar11 + 1;
  lVar7 = *(long *)param_4[lVar11];
  goto joined_r0x00117c37;
LAB_00117f40:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00117f68:
  if (lVar10 <= lVar11) {
    return lVar11;
  }
  pEVar3 = param_4[lVar11];
  param_4[lVar11] = *ppEVar4;
  *ppEVar4 = pEVar3;
  lVar14 = *(long *)param_3;
  goto LAB_00117cc6;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  Element **ppEVar1;
  byte *pbVar2;
  byte *pbVar3;
  Element *pEVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  Element **ppEVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar16 = param_3 - param_1;
  ppEVar13 = param_4;
  if (lVar16 < 2) {
    if (param_2 <= param_3) {
      return;
    }
  }
  else {
    for (lVar12 = lVar16 + -2 >> 1;
        adjust_heap(param_1,lVar12,lVar16,param_4[param_1 + lVar12],ppEVar13), lVar12 != 0;
        lVar12 = lVar12 + -1) {
    }
    if (param_2 <= param_3) goto LAB_001181ec;
  }
  ppEVar1 = ppEVar13 + param_1;
  lVar12 = param_3;
LAB_00118140:
  pEVar4 = ppEVar13[lVar12];
  lVar8 = *(long *)pEVar4;
  lVar7 = *(long *)*ppEVar1;
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      pbVar14 = *(byte **)(lVar7 + 8);
      uVar10 = 0;
      pbVar15 = &_LC2;
LAB_00118254:
      if (pbVar14 == (byte *)0x0) {
        uVar11 = **(uint **)(lVar7 + 0x10);
        if (uVar11 != 0 || uVar10 != 0) {
          lVar8 = 0;
          do {
            if (uVar10 == 0) goto LAB_001181c0;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_001181c0;
            if (uVar11 < uVar10) break;
            uVar10 = (uint)(char)pbVar15[lVar8 + 1];
            uVar11 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0 || uVar11 != 0);
        }
      }
      else {
        uVar11 = (uint)(char)*pbVar14;
        bVar6 = (byte)uVar10 | *pbVar14;
LAB_001182b6:
        if (bVar6 != 0) {
          lVar8 = 1;
          do {
            if (uVar10 == 0) goto LAB_001181c0;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_001181c0;
            if (uVar11 < uVar10) break;
            pbVar2 = pbVar14 + lVar8;
            uVar11 = (uint)(char)*pbVar2;
            pbVar3 = pbVar15 + lVar8;
            uVar10 = (uint)(char)*pbVar3;
            lVar8 = lVar8 + 1;
          } while (*pbVar2 != 0 || *pbVar3 != 0);
        }
      }
    }
  }
  else {
    pbVar15 = *(byte **)(lVar8 + 8);
    if (lVar7 == 0) {
      if (pbVar15 != (byte *)0x0) {
        bVar6 = *pbVar15;
        uVar10 = (uint)(char)bVar6;
        pbVar14 = &_LC2;
        uVar11 = 0;
        goto LAB_001182b6;
      }
      uVar10 = 0;
      pbVar14 = &_LC2;
    }
    else {
      pbVar14 = *(byte **)(lVar7 + 8);
      if (pbVar15 != (byte *)0x0) {
        uVar10 = (uint)(char)*pbVar15;
        goto LAB_00118254;
      }
      if (pbVar14 == (byte *)0x0) {
        uVar10 = **(uint **)(lVar7 + 0x10);
        uVar11 = **(uint **)(lVar8 + 0x10);
        if (uVar10 != 0 || uVar11 != 0) {
          lVar9 = 4;
          do {
            if (uVar11 == 0) goto LAB_001181c0;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_001181c0;
            if (uVar10 < uVar11) break;
            uVar11 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
            uVar10 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar11 != 0 || uVar10 != 0);
        }
        goto LAB_001181d4;
      }
      uVar10 = (uint)(char)*pbVar14;
    }
    uVar11 = **(uint **)(lVar8 + 0x10);
    if (uVar11 != 0 || uVar10 != 0) {
      lVar7 = 0;
      do {
        if (uVar11 == 0) goto LAB_001181c0;
        if (uVar10 == 0) break;
        if (uVar11 < uVar10) goto LAB_001181c0;
        if (uVar10 < uVar11) break;
        uVar11 = (*(uint **)(lVar8 + 0x10))[lVar7 + 1];
        uVar10 = (uint)(char)pbVar14[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (uVar11 != 0 || uVar10 != 0);
    }
  }
  goto LAB_001181d4;
LAB_001181c0:
  ppEVar13[lVar12] = *ppEVar1;
  adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
LAB_001181d4:
  lVar12 = lVar12 + 1;
  if (param_2 <= lVar12) goto code_r0x001181e1;
  goto LAB_00118140;
code_r0x001181e1:
  if (lVar16 < 2) {
    return;
  }
LAB_001181ec:
  ppEVar1 = ppEVar13 + param_1;
  lVar16 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar1[lVar16];
    ppEVar1[lVar16] = *ppEVar1;
    adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
    bVar5 = 1 < lVar16;
    lVar16 = lVar16 + -1;
  } while (bVar5);
  return;
}



/* EditorAudioBus::is_class_ptr(void*) const */

uint EditorAudioBus::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12ec,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12eb,in_RSI == &PanelContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ec,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VSlider::is_class_ptr(void*) const */

uint VSlider::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12ec,in_RSI == &Range::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12eb,in_RSI == &Slider::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ec,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AudioBusesEditorPlugin::_notificationv(int, bool) */

void __thiscall
AudioBusesEditorPlugin::_notificationv(AudioBusesEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00137030 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00137030 == Node::_notification) {
    return;
  }
  EditorPlugin::_notification(iVar1);
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,Object*>::get_object
          (CallableCustomMethodPointer<EditorAudioBuses,void,Object*> *this)

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
      goto LAB_0011860d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011860d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011860d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton> *this)

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
      goto LAB_0011870d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011870d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011870d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Ref<InputEvent> >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>> *this)

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
      goto LAB_0011880d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011880d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011880d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void>::get_object
          (CallableCustomMethodPointer<EditorAudioBuses,void> *this)

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
      goto LAB_0011890d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011890d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011890d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int,int>::get_object
          (CallableCustomMethodPointer<EditorAudioBuses,void,int,int> *this)

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
      goto LAB_00118a0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00118a0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00118a0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,int>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void,int> *this)

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
      goto LAB_00118b0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00118b0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00118b0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Tree, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void>::get_object(CallableCustomMethodPointer<Tree,void> *this)

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
      goto LAB_00118c0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00118c0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00118c0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void,String_const&> *this)

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
      goto LAB_00118d0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00118d0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00118d0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int>::get_object
          (CallableCustomMethodPointer<EditorAudioBuses,void,int> *this)

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
      goto LAB_00118e0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00118e0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00118e0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<EditorAudioBus, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_00118f0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00118f0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00118f0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void> *this)

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
      goto LAB_0011900d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011900d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011900d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, float>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,float>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void,float> *this)

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
      goto LAB_0011910d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011910d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011910d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0011920d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011920d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011920d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBus, Variant, Vector2 const&, Control*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_0011930d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011930d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011930d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorAudioBuses,void,String_const&> *this)

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
      goto LAB_0011940d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011940d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011940d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorAudioBus::_validate_propertyv(PropertyInfo&) const */

void EditorAudioBus::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorAudioMeterNotches::_validate_propertyv(PropertyInfo&) const */

void EditorAudioMeterNotches::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VSlider::_validate_propertyv(PropertyInfo&) const */

void VSlider::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorAudioBusDrop::_validate_propertyv(PropertyInfo&) const */

void EditorAudioBusDrop::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137038 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* EditorAudioBuses::_validate_propertyv(PropertyInfo&) const */

void EditorAudioBuses::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137040 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00137040 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00137040 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12ec,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ec,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ec,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x12ec,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ec,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ec,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12ed,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorAudioBuses::is_class_ptr(void*) const */

ulong EditorAudioBuses::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x12ec,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x12ec,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ec,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ec,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ed,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x12ed,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorAudioBusDrop::_setv(StringName const&, Variant const&) */

undefined8 EditorAudioBusDrop::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VSlider::_setv(StringName const&, Variant const&) */

undefined8 VSlider::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAudioMeterNotches::_setv(StringName const&, Variant const&) */

undefined8 EditorAudioMeterNotches::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAudioBuses::_setv(StringName const&, Variant const&) */

undefined8 EditorAudioBuses::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorAudioBus::_setv(StringName const&, Variant const&) */

undefined8 EditorAudioBus::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00137048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a378) */
/* EditorAudioBusDrop::_getv(StringName const&, Variant&) const */

undefined8 EditorAudioBusDrop::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a3e8) */
/* EditorAudioMeterNotches::_getv(StringName const&, Variant&) const */

undefined8 EditorAudioMeterNotches::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a458) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a4c8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a538) */
/* VSlider::_getv(StringName const&, Variant&) const */

undefined8 VSlider::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a5a8) */
/* EditorAudioBuses::_getv(StringName const&, Variant&) const */

undefined8 EditorAudioBuses::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011a618) */
/* EditorAudioBus::_getv(StringName const&, Variant&) const */

undefined8 EditorAudioBus::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00137050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* EditorAudioMeterNotches::~EditorAudioMeterNotches() */

void __thiscall EditorAudioMeterNotches::~EditorAudioMeterNotches(EditorAudioMeterNotches *this)

{
  void *pvVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0012dd20;
  if (*(long *)(this + 0x9e0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x9e0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  plVar6 = *(long **)(this + 0x9c8);
  if (plVar6 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0011a74c;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x20) == plVar6) {
        lVar5 = *(long *)((long)pvVar1 + 0x10);
        lVar2 = *(long *)((long)pvVar1 + 0x18);
        *plVar6 = lVar5;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 0x10);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x18) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0x9c8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_0011a74c:
  Control::~Control((Control *)this);
  return;
}



/* EditorAudioMeterNotches::~EditorAudioMeterNotches() */

void __thiscall EditorAudioMeterNotches::~EditorAudioMeterNotches(EditorAudioMeterNotches *this)

{
  void *pvVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  
  *(undefined ***)this = &PTR__initialize_classv_0012dd20;
  if (*(long *)(this + 0x9e0) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x9e0);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  plVar6 = *(long **)(this + 0x9c8);
  if (plVar6 != (long *)0x0) {
    do {
      pvVar1 = (void *)*plVar6;
      if (pvVar1 == (void *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_0011a8ac;
        }
        break;
      }
      if (*(long **)((long)pvVar1 + 0x20) == plVar6) {
        lVar5 = *(long *)((long)pvVar1 + 0x10);
        lVar2 = *(long *)((long)pvVar1 + 0x18);
        *plVar6 = lVar5;
        if (pvVar1 == (void *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar5;
          lVar5 = *(long *)((long)pvVar1 + 0x10);
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x18) = lVar2;
        }
        Memory::free_static(pvVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0x9c8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_0011a8ac:
  Control::~Control((Control *)this);
  operator_delete(this,0xa00);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011a9d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011a9d0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011aa30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011aa30:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011aa90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011aa90:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ab00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011ab00:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* StyleBox::get_save_class() const */

StyleBox * __thiscall StyleBox::get_save_class(StyleBox *this)

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



/* StyleBox::get_base_extension() const */

StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this)

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



/* AudioBusesEditorPlugin::get_plugin_name() const */

AudioBusesEditorPlugin * __thiscall
AudioBusesEditorPlugin::get_plugin_name(AudioBusesEditorPlugin *this)

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



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011acee;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011acee;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011acee;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0011acee:
  Resource::~Resource((Resource *)this);
  return;
}



/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x298) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ad8e;
    }
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ad8e;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ad8e;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_0011ad8e:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2b0);
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



/* EditorAudioBusDrop::_get_class_namev() const */

undefined8 * EditorAudioBusDrop::_get_class_namev(void)

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
LAB_0011ae63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011ae63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioBusDrop");
      goto LAB_0011aece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioBusDrop");
LAB_0011aece:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioMeterNotches::_get_class_namev() const */

undefined8 * EditorAudioMeterNotches::_get_class_namev(void)

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
LAB_0011af53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011af53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioMeterNotches");
      goto LAB_0011afbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioMeterNotches");
LAB_0011afbe:
  return &_get_class_namev()::_class_name_static;
}



/* AudioBusesEditorPlugin::_get_class_namev() const */

undefined8 * AudioBusesEditorPlugin::_get_class_namev(void)

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
LAB_0011b043:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b043;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AudioBusesEditorPlugin");
      goto LAB_0011b0ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AudioBusesEditorPlugin");
LAB_0011b0ae:
  return &_get_class_namev()::_class_name_static;
}



/* VSlider::_get_class_namev() const */

undefined8 * VSlider::_get_class_namev(void)

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
LAB_0011b123:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b123;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VSlider");
      goto LAB_0011b18e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VSlider");
LAB_0011b18e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioBuses::_get_class_namev() const */

undefined8 * EditorAudioBuses::_get_class_namev(void)

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
LAB_0011b213:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b213;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioBuses");
      goto LAB_0011b27e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioBuses");
LAB_0011b27e:
  return &_get_class_namev()::_class_name_static;
}



/* StyleBoxEmpty::_get_class_namev() const */

undefined8 * StyleBoxEmpty::_get_class_namev(void)

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
LAB_0011b303:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b303;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
      goto LAB_0011b36e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StyleBoxEmpty");
LAB_0011b36e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioBus::_get_class_namev() const */

undefined8 * EditorAudioBus::_get_class_namev(void)

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
LAB_0011b3f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b3f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioBus");
      goto LAB_0011b45e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioBus");
LAB_0011b45e:
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
LAB_0011b4e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b4e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011b54e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011b54e:
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
LAB_0011b5d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011b5d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011b63e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011b63e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioBus::~EditorAudioBus() */

void __thiscall EditorAudioBus::~EditorAudioBus(EditorAudioBus *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012d398;
  if (*(long *)(this + 0xa08) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa08);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = Slider::_notification;
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b717;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b717:
  Control::~Control((Control *)this);
  return;
}



/* EditorAudioBus::~EditorAudioBus() */

void __thiscall EditorAudioBus::~EditorAudioBus(EditorAudioBus *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012d398;
  if (*(long *)(this + 0xa08) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa08);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(code **)this = Slider::_notification;
  if (*(long *)(this + 0xa00) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa00);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b837;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b837:
  Control::~Control((Control *)this);
  operator_delete(this,0xb18);
  return;
}



/* VSlider::_notificationv(int, bool) */

void __thiscall VSlider::_notificationv(VSlider *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00137058 != Control::_notification) {
      Slider::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_00137058 == Control::_notification) {
    return;
  }
  Slider::_notification(iVar1);
  return;
}



/* VSlider::~VSlider() */

void __thiscall VSlider::~VSlider(VSlider *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(code **)this = Container::_notification;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  if (*(long *)(this + 0xa58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa58);
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
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Range::~Range((Range *)this);
        return;
      }
    }
  }
  Range::~Range((Range *)this);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00137060 != Container::_notification) {
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
  if ((code *)PTR__notification_00137060 == Container::_notification) {
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
    if ((code *)PTR__notification_00137060 != Container::_notification) {
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
  if ((code *)PTR__notification_00137060 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
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
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0011c773:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_0011bec3:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_0011bf4c:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_0011bfe4:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x0011c030;
LAB_0011c4c6:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_0011c4d6;
            goto LAB_0011c673;
          }
LAB_0011c6e8:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0011c5ff:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x0011c6b1;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_0011c74c;
  goto LAB_0011c773;
code_r0x0011c030:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0011c06c:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_0011c0f2:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_0011c173:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_0011c1f1:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_0011c267:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_0011c3fc;
                                      goto LAB_0011c267;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x0011c510;
                                goto LAB_0011c1f1;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0011c3fc:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0011c48b;
                          goto LAB_0011c173;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x0011c510:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x0011c550;
                    goto LAB_0011c0f2;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0011c48b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_0011c4c6;
              goto LAB_0011c06c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x0011c550:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0011c5ff;
        goto LAB_0011bfe4;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_0011c673:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0011bf4c;
    goto joined_r0x0011c6b1;
  }
LAB_0011c4d6:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_0011c6e8;
  goto LAB_0011bfe4;
joined_r0x0011c6b1:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_0011c74c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_0011bec3;
}



/* VSlider::~VSlider() */

void __thiscall VSlider::~VSlider(VSlider *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(code **)this = Container::_notification;
  if (*(long *)(this + 0xa68) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa68);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
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
  if (*(long *)(this + 0xa58) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa58);
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
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Range::~Range((Range *)this);
  operator_delete(this,0xa80);
  return;
}



/* EditorAudioBuses::~EditorAudioBuses() */

void __thiscall EditorAudioBuses::~EditorAudioBuses(EditorAudioBuses *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012d020;
  if (*(long *)(this + 0xa68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa68);
      *(undefined8 *)(this + 0xa68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ca6e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011ca6e:
  Control::~Control((Control *)this);
  return;
}



/* EditorAudioBuses::~EditorAudioBuses() */

void __thiscall EditorAudioBuses::~EditorAudioBuses(EditorAudioBuses *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0012d020;
  if (*(long *)(this + 0xa68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa68);
      *(undefined8 *)(this + 0xa68) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(undefined **)this = &Resource::typeinfo;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011cb0e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011cb0e:
  Control::~Control((Control *)this);
  operator_delete(this,0xa80);
  return;
}



/* EditorAudioBuses::get_class() const */

void EditorAudioBuses::get_class(void)

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



/* EditorAudioBus::get_class() const */

void EditorAudioBus::get_class(void)

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



/* EditorAudioBusDrop::get_class() const */

void EditorAudioBusDrop::get_class(void)

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



/* EditorAudioMeterNotches::get_class() const */

void EditorAudioMeterNotches::get_class(void)

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



/* VSlider::get_class() const */

void VSlider::get_class(void)

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



/* StyleBoxEmpty::get_class() const */

void StyleBoxEmpty::get_class(void)

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



/* AudioBusesEditorPlugin::get_class() const */

void AudioBusesEditorPlugin::get_class(void)

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



/* EditorAudioMeterNotches::_notificationv(int, bool) */

void __thiscall
EditorAudioMeterNotches::_notificationv(EditorAudioMeterNotches *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0x1e) {
      _draw_audio_notches(this);
    }
    if ((code *)PTR__notification_00137068 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00137068 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  if (param_1 != 0x1e) {
    return;
  }
  _draw_audio_notches(this);
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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



/* WARNING: Removing unreachable block (ram,0x0011d610) */
/* EditorAudioBusDrop::_notificationv(int, bool) */

void __thiscall
EditorAudioBusDrop::_notificationv(EditorAudioBusDrop *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(iVar1);
    if ((code *)PTR__notification_00137068 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_00137068 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(iVar1);
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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* void EditorUndoRedoManager::add_do_method<int>(Object*, StringName const&, int) */

void __thiscall
EditorUndoRedoManager::add_do_method<int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_undo_method<int>(Object*, StringName const&, int) */

void __thiscall
EditorUndoRedoManager::add_undo_method<int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorAudioBus>(EditorAudioBus*, char const*,
   void (EditorAudioBus::*)()) */

EditorAudioBus *
create_custom_callable_function_pointer<EditorAudioBus>
          (EditorAudioBus *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC2;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012e118;
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



/* Callable create_custom_callable_function_pointer<EditorAudioBus, float>(EditorAudioBus*, char
   const*, void (EditorAudioBus::*)(float)) */

EditorAudioBus *
create_custom_callable_function_pointer<EditorAudioBus,float>
          (EditorAudioBus *param_1,char *param_2,_func_void_float *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC2;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012e1a8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_float **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<Tree*>(Tree*) const */

Tree * Callable::bind<Tree*>(Tree *param_1)

{
  char cVar1;
  Object *in_RDX;
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



/* Callable create_custom_callable_function_pointer<EditorAudioBus, int>(EditorAudioBus*, char
   const*, void (EditorAudioBus::*)(int)) */

EditorAudioBus *
create_custom_callable_function_pointer<EditorAudioBus,int>
          (EditorAudioBus *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC2;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012e598;
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



/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
          (List<StringName,DefaultAllocator> *this)

{
  int iVar1;
  long *plVar2;
  Element **ppEVar3;
  undefined8 *puVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  Element *pEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar11 = (Element *)(long)iVar1;
  ppEVar3 = (Element **)Memory::alloc_static((long)pEVar11 * 8,true);
  if (ppEVar3 == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    ppEVar3[-1] = pEVar11;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = ppEVar3;
    for (pEVar7 = (Element *)**(long **)this; pEVar7 != (Element *)0x0;
        pEVar7 = *(Element **)(pEVar7 + 8)) {
      *ppEVar5 = pEVar7;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar10 = 0;
  pEVar7 = pEVar11;
  do {
    pEVar7 = (Element *)((long)pEVar7 >> 1);
    lVar10 = lVar10 + 1;
  } while (pEVar7 != (Element *)0x1);
  lVar10 = lVar10 * 2;
  pEVar7 = (Element *)0x1;
  pEVar9 = pEVar11;
  if ((long)pEVar11 < 0x11) {
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,(long)pEVar7,ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  else {
    do {
      lVar10 = lVar10 + -1;
      puVar4 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::median_of_3(ppEVar3,ppEVar3 + ((long)pEVar9 >> 1),ppEVar3 + (long)(pEVar9 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::partitioner(0,(long)pEVar9,(Element *)*puVar4,ppEVar3);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::introsort((long)pEVar7,(long)pEVar9,ppEVar3,lVar10);
      lVar8 = 1;
      if ((long)pEVar7 < 0x11) goto LAB_0011ddb0;
      pEVar9 = pEVar7;
    } while (lVar10 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,ppEVar3);
LAB_0011ddb0:
    do {
      lVar10 = lVar8 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,lVar8,ppEVar3);
      lVar8 = lVar10;
    } while (lVar10 != 0x10);
    pEVar7 = (Element *)0x10;
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::unguarded_linear_insert((long)pEVar7,ppEVar3[(long)pEVar7],ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  plVar2 = *(long **)this;
  pEVar7 = *ppEVar3;
  *plVar2 = (long)pEVar7;
  *(undefined8 *)(pEVar7 + 0x10) = 0;
  *(Element **)(*ppEVar3 + 8) = ppEVar3[1];
  pEVar7 = ppEVar3[(long)(pEVar11 + -1)];
  plVar2[1] = (long)pEVar7;
  *(Element **)(pEVar7 + 0x10) = ppEVar3[(long)(pEVar11 + -2)];
  *(undefined8 *)(ppEVar3[(long)(pEVar11 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = ppEVar3;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (ppEVar3 + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(ppEVar3,true);
  return;
}



/* Callable create_custom_callable_function_pointer<EditorAudioBuses, Object*>(EditorAudioBuses*,
   char const*, void (EditorAudioBuses::*)(Object*)) */

EditorAudioBuses *
create_custom_callable_function_pointer<EditorAudioBuses,Object*>
          (EditorAudioBuses *param_1,char *param_2,_func_void_Object_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC2;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012e628;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Object_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable Callable::bind<EditorAudioBus*>(EditorAudioBus*) const */

EditorAudioBus * Callable::bind<EditorAudioBus*>(EditorAudioBus *param_1)

{
  char cVar1;
  Object *in_RDX;
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



/* Callable create_custom_callable_function_pointer<EditorAudioBuses>(EditorAudioBuses*, char
   const*, void (EditorAudioBuses::*)()) */

EditorAudioBuses *
create_custom_callable_function_pointer<EditorAudioBuses>
          (EditorAudioBuses *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC2;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012e748;
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



/* Callable create_custom_callable_function_pointer<EditorAudioBuses, int, int>(EditorAudioBuses*,
   char const*, void (EditorAudioBuses::*)(int, int)) */

EditorAudioBuses *
create_custom_callable_function_pointer<EditorAudioBuses,int,int>
          (EditorAudioBuses *param_1,char *param_2,_func_void_int_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC2;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012e7d8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int_int **)(this + 0x20) = param_3 + 1;
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



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = EditorUndoRedoManager::add_undo_methodp;
  if (bVar1) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011e58a;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_0011e58a:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x418));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
}



/* AudioBusesEditorPlugin::_initialize_classv() */

void AudioBusesEditorPlugin::_initialize_classv(void)

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
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
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
        if ((code *)PTR__bind_methods_00137010 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorPlugin";
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
      if ((code *)PTR__bind_methods_00137070 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00137078 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioBusesEditorPlugin";
    local_70 = 0;
    local_50 = 0x16;
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



/* WARNING: Removing unreachable block (ram,0x0011ead8) */
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



/* WARNING: Removing unreachable block (ram,0x0011edd8) */
/* String vformat<float>(String const&, float const) */

String * vformat<float>(String *param_1,float param_2)

{
  char cVar1;
  Variant *this;
  bool *in_RSI;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_2);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,in_RSI);
  *(undefined8 *)param_1 = local_c0[0];
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



/* EditorAudioBuses::_reset_bus_volume(Object*) [clone .cold] */

void EditorAudioBuses::_reset_bus_volume(Object *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAudioBuses::_delete_bus(Object*) [clone .cold] */

void EditorAudioBuses::_delete_bus(Object *param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAudioBusDrop::_bind_methods() [clone .cold] */

void EditorAudioBusDrop::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAudioBus::_bind_methods() [clone .cold] */

void EditorAudioBus::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAudioBuses::_bind_methods() [clone .cold] */

void EditorAudioBuses::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorAudioMeterNotches::_bind_methods() [clone .cold] */

void EditorAudioMeterNotches::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x0011f190) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
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
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
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
        if (pvVar5 == (void *)0x0) goto LAB_0011f474;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011f474:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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



/* CallableCustomMethodPointer<EditorAudioBuses, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void>::call
          (CallableCustomMethodPointer<EditorAudioBuses,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011f7af;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011f7af;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011f788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011f871;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011f7af:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011f871:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Tree, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Tree,void>::call
          (CallableCustomMethodPointer<Tree,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011f9cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011f9cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011f9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011fa91;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011f9cf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011fa91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBus, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void>::call
          (CallableCustomMethodPointer<EditorAudioBus,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0011fbef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0011fbef;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011fbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0011fcb1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0011fbef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011fcb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBus, void, float>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,float>::call
          (CallableCustomMethodPointer<EditorAudioBus,void,float> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
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
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011fe76;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0011fe76;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,3);
        uVar4 = _LC249;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_float(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011fe25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2));
          return;
        }
        goto LAB_0011ff38;
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
LAB_0011fe76:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011ff38:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBus, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,int>::call
          (CallableCustomMethodPointer<EditorAudioBus,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_001200f8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001200f8;
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
        uVar4 = _LC250;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001200a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_001201ba;
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
LAB_001200f8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001201ba:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int>::call
          (CallableCustomMethodPointer<EditorAudioBuses,void,int> *this,Variant **param_1,
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
      goto LAB_00120378;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00120378;
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
        uVar4 = _LC250;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0012043a;
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
LAB_00120378:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0012043a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, int, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int,int>::call
          (CallableCustomMethodPointer<EditorAudioBuses,void,int,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0012062d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0012062d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar4 = _LC251;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC250;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120606. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar7,iVar6);
          return;
        }
        goto LAB_001206ef;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0012062d:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001206ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,Object*>::call
          (CallableCustomMethodPointer<EditorAudioBuses,void,Object*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001208e9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_001208e9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00120840:
          uVar4 = _LC252;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_00120840;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120887. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_001209ab;
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
LAB_001208e9:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001209ab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Ref<InputEvent> >::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
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
          goto LAB_00120a7e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_00120a7e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC252;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_00120b4d:
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
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_00120b4d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_00120a7e;
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
  local_48 = (Object *)0x11f5bf;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00120a7e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
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
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar5 << 8);
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC251;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC253;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),&local_38,uVar5 & 0xffffffff);
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
        goto LAB_00120df5;
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
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00120df5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00121095;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00121095;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0012111f:
          uVar4 = _LC254;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0012111f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC253;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00121095;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00121095:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<EditorAudioBus, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_98 >> 8;
      local_98 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_98 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00121414;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00121414;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0012149c:
          uVar4 = _LC254;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0012149c;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC253;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar12 = (bool)(*pcVar11)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar6);
        Variant::Variant((Variant *)local_78,bVar12);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00121414;
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
  local_a0 = 0;
  local_98 = "\', can\'t call method.";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  uitos((ulong)local_b0);
  operator+((char *)local_a8,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_98,(String *)local_a8);
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00121414:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
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
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
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
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001217bc;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_001217bc;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_0012183c:
          uVar3 = _LC256;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0012183c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC253;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)(local_58,(long *)(lVar1 + lVar2),&local_60,pOVar5);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_58[0];
        *(undefined8 *)(param_3 + 8) = local_50;
        *(undefined8 *)(param_3 + 0x10) = uStack_48;
        goto LAB_001217bc;
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
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001217bc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAudioBus, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,String_const&>::call
          (CallableCustomMethodPointer<EditorAudioBus,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC257;
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
        goto LAB_00121afe;
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
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00121afe:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorAudioBuses, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,String_const&>::call
          (CallableCustomMethodPointer<EditorAudioBuses,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            uVar4 = _LC257;
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
        goto LAB_00121d6e;
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
  _err_print_error(&_LC248,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00121d6e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorAudioBus::_name_focus_exit() */

void __thiscall EditorAudioBus::_name_focus_exit(EditorAudioBus *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  _name_changed(this,(String *)&local_28);
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::_initialize_classv() */

void StyleBoxEmpty::_initialize_classv(void)

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
    if (StyleBox::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_00137010 != RefCounted::_bind_methods) {
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
      local_58 = "StyleBox";
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
      if ((code *)PTR__bind_methods_00137080 != Resource::_bind_methods) {
        StyleBox::_bind_methods();
      }
      StyleBox::initialize_class()::initialized = '\x01';
    }
    local_58 = "StyleBox";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "StyleBoxEmpty";
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSlider::_initialize_classv() */

void VSlider::_initialize_classv(void)

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
    if (Slider::initialize_class()::initialized == '\0') {
      if (Range::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Range";
        local_70 = 0;
        local_50 = 5;
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
        if ((code *)PTR__bind_methods_00137008 != Range::_bind_methods) {
          Range::_bind_methods();
        }
        Range::initialize_class()::initialized = '\x01';
      }
      local_58 = "Range";
      local_68 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Slider";
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
      if ((code *)PTR__bind_methods_00137088 != Range::_bind_methods) {
        Slider::_bind_methods();
      }
      Slider::initialize_class()::initialized = '\x01';
    }
    local_58 = "Slider";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VSlider";
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
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
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
        if ((code *)PTR__bind_methods_00137008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
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
      if ((code *)PTR__bind_methods_00137090 != Container::_bind_methods) {
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



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

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
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
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
        if ((code *)PTR__bind_methods_00137008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
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
      if ((code *)PTR__bind_methods_00137090 != Container::_bind_methods) {
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



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

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
    local_68 = &_LC2;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00122fef;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00122fef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001230a3;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0012314f;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0012314f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001230a3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001230a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0012323f;
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
LAB_0012323f:
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
    if (cVar5 != '\0') goto LAB_001232f3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001232f3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* StyleBoxEmpty::is_class(String const&) const */

undefined8 __thiscall StyleBoxEmpty::is_class(StyleBoxEmpty *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001233bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001233bf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00123473;
  }
  cVar6 = String::operator==(param_1,"StyleBoxEmpty");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00123473;
    }
    cVar6 = String::operator==(param_1,"StyleBox");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_00123585;
    }
  }
LAB_00123473:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00123585:
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
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
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
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001235ff;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001235ff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar6 != '\0') goto LAB_001236b3;
  }
  cVar6 = String::operator==(param_1,"Node");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_0012375f;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_0012375f:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001236b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001236b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioBusesEditorPlugin::is_class(String const&) const */

undefined8 __thiscall AudioBusesEditorPlugin::is_class(AudioBusesEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0012384f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0012384f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00123903;
  }
  cVar6 = String::operator==(param_1,"AudioBusesEditorPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00123903;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_00123a0e;
    }
  }
LAB_00123903:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00123a0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00123a8f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00123a8f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00123b43;
  }
  cVar6 = String::operator==(param_1,"Control");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00123b43;
    }
    cVar6 = String::operator==(param_1,"CanvasItem");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Node::is_class((Node *)this,param_1);
        return uVar8;
      }
      goto LAB_00123c55;
    }
  }
LAB_00123b43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00123c55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioMeterNotches::is_class(String const&) const */

undefined8 __thiscall
EditorAudioMeterNotches::is_class(EditorAudioMeterNotches *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00123ccf;
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
LAB_00123ccf:
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
    if (cVar5 != '\0') goto LAB_00123d83;
  }
  cVar5 = String::operator==(param_1,"EditorAudioMeterNotches");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00123d83:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBusDrop::is_class(String const&) const */

undefined8 __thiscall EditorAudioBusDrop::is_class(EditorAudioBusDrop *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00123e4f;
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
LAB_00123e4f:
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
    if (cVar5 != '\0') goto LAB_00123f03;
  }
  cVar5 = String::operator==(param_1,"EditorAudioBusDrop");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Control::is_class((Control *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00123f03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Slider::is_class(String const&) const */

undefined8 __thiscall Slider::is_class(Slider *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00123fcf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00123fcf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00124083;
  }
  cVar6 = String::operator==(param_1,"Slider");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00124083;
    }
    cVar6 = String::operator==(param_1,"Range");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_00124195;
    }
  }
LAB_00124083:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00124195:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSlider::is_class(String const&) const */

undefined8 __thiscall VSlider::is_class(VSlider *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0012420f;
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
LAB_0012420f:
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
    if (cVar5 != '\0') goto LAB_001242c3;
  }
  cVar5 = String::operator==(param_1,"VSlider");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Slider::is_class((Slider *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001242c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBus::is_class(String const&) const */

undefined8 __thiscall EditorAudioBus::is_class(EditorAudioBus *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0012439f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0012439f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00124453;
  }
  cVar6 = String::operator==(param_1,"EditorAudioBus");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00124453;
    }
    cVar6 = String::operator==(param_1,"PanelContainer");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        lVar5 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
          }
        }
        if (cVar6 != '\0') goto LAB_00124453;
      }
      cVar6 = String::operator==(param_1,"Container");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Control::is_class((Control *)this,param_1);
          return uVar8;
        }
        goto LAB_00124648;
      }
    }
  }
LAB_00124453:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00124648:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001246bf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001246bf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00124773;
  }
  cVar6 = String::operator==(param_1,"BoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00124773;
    }
    cVar6 = String::operator==(param_1,"Container");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Control::is_class((Control *)this,param_1);
        return uVar8;
      }
      goto LAB_0012487e;
    }
  }
LAB_00124773:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0012487e:
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
            if (lVar4 == 0) goto LAB_001248ff;
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
LAB_001248ff:
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
    if (cVar5 != '\0') goto LAB_001249b3;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001249b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
            if (lVar4 == 0) goto LAB_00124a7f;
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
LAB_00124a7f:
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
    if (cVar5 != '\0') goto LAB_00124b33;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00124b33:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBuses::is_class(String const&) const */

undefined8 __thiscall EditorAudioBuses::is_class(EditorAudioBuses *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00124bff;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00124bff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00124cb3;
  }
  cVar6 = String::operator==(param_1,"EditorAudioBuses");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00124cb3;
    }
    cVar6 = String::operator==(param_1,"VBoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar8;
      }
      goto LAB_00124dc5;
    }
  }
LAB_00124cb3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00124dc5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC95;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC95;
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
      goto LAB_00124f2c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00124f2c:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      goto LAB_0012517c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012517c:
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
      goto LAB_001253e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001253e1:
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



/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBox::_get_property_listv(StyleBox *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBox";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBox";
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
      goto LAB_00125691;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125691:
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
  StringName::StringName((StringName *)&local_78,"StyleBox",false);
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



/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this,List *param_1,bool param_2)

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
    StyleBox::_get_property_listv((StyleBox *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "StyleBoxEmpty";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "StyleBoxEmpty";
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
      goto LAB_00125941;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125941:
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
  StringName::StringName((StringName *)&local_78,"StyleBoxEmpty",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      StyleBox::_get_property_listv((StyleBox *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
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
      goto LAB_00125bf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125bf1:
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
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
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



/* AudioBusesEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AudioBusesEditorPlugin::_get_property_listv(AudioBusesEditorPlugin *this,List *param_1,bool param_2)

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
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioBusesEditorPlugin";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioBusesEditorPlugin";
  local_98 = 0;
  local_70 = 0x16;
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
      goto LAB_00125ea1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00125ea1:
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
  StringName::StringName((StringName *)&local_78,"AudioBusesEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
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
      goto LAB_00126151;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126151:
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
  if ((code *)PTR__get_property_list_00137098 != Object::_get_property_list) {
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
      goto LAB_00126421;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126421:
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
  if ((code *)PTR__get_property_list_001370a0 != CanvasItem::_get_property_list) {
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
      goto LAB_001266f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001266f1:
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
      goto LAB_001269a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001269a1:
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
      goto LAB_00126c51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126c51:
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



/* EditorAudioBuses::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorAudioBuses::_get_property_listv(EditorAudioBuses *this,List *param_1,bool param_2)

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
  local_78 = "EditorAudioBuses";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAudioBuses";
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
      goto LAB_00126f01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126f01:
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
  StringName::StringName((StringName *)&local_78,"EditorAudioBuses",false);
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
      goto LAB_001271b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001271b1:
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



/* PanelContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PanelContainer::_get_property_listv(PanelContainer *this,List *param_1,bool param_2)

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
  local_78 = "PanelContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PanelContainer";
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
      goto LAB_00127461;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127461:
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
  StringName::StringName((StringName *)&local_78,"PanelContainer",false);
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



/* EditorAudioBus::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorAudioBus::_get_property_listv(EditorAudioBus *this,List *param_1,bool param_2)

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
    PanelContainer::_get_property_listv((PanelContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorAudioBus";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAudioBus";
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
      goto LAB_00127711;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127711:
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
  StringName::StringName((StringName *)&local_78,"EditorAudioBus",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PanelContainer::_get_property_listv((PanelContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Range::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Range::_get_property_listv(Range *this,List *param_1,bool param_2)

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
  local_78 = "Range";
  local_70 = 5;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Range";
  local_98 = 0;
  local_70 = 5;
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
      goto LAB_001279c1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001279c1:
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
  StringName::StringName((StringName *)&local_78,"Range",false);
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



/* Slider::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Slider::_get_property_listv(Slider *this,List *param_1,bool param_2)

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
    Range::_get_property_listv((Range *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Slider";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Slider";
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
      goto LAB_00127c71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127c71:
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
  StringName::StringName((StringName *)&local_78,"Slider",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Range::_get_property_listv((Range *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSlider::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VSlider::_get_property_listv(VSlider *this,List *param_1,bool param_2)

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
    Slider::_get_property_listv((Slider *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VSlider";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VSlider";
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
      goto LAB_00127f21;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127f21:
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
  StringName::StringName((StringName *)&local_78,"VSlider",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Slider::_get_property_listv((Slider *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioMeterNotches::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorAudioMeterNotches::_get_property_listv
          (EditorAudioMeterNotches *this,List *param_1,bool param_2)

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
  local_78 = "EditorAudioMeterNotches";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAudioMeterNotches";
  local_98 = 0;
  local_70 = 0x17;
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
      goto LAB_001281d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001281d1:
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
  StringName::StringName((StringName *)&local_78,"EditorAudioMeterNotches",false);
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



/* EditorAudioBusDrop::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorAudioBusDrop::_get_property_listv(EditorAudioBusDrop *this,List *param_1,bool param_2)

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
  local_78 = "EditorAudioBusDrop";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAudioBusDrop";
  local_98 = 0;
  local_70 = 0x12;
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
      goto LAB_00128481;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00128481:
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
  StringName::StringName((StringName *)&local_78,"EditorAudioBusDrop",false);
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



/* EditorAudioBusDrop::_initialize_classv() */

void EditorAudioBusDrop::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      Control::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Control";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAudioBusDrop";
    local_60 = 0;
    local_40 = 0x12;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* Ref<StyleBox>::unref() */

void __thiscall Ref<StyleBox>::unref(Ref<StyleBox> *this)

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



/* WARNING: Removing unreachable block (ram,0x00128ac0) */
/* EditorAudioBuses::_notificationv(int, bool) */

void __thiscall EditorAudioBuses::_notificationv(EditorAudioBuses *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00137060 != Container::_notification) {
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
  if ((code *)PTR__notification_00137060 != Container::_notification) {
    BoxContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Ref<StyleBoxFlat>::unref() */

void __thiscall Ref<StyleBoxFlat>::unref(Ref<StyleBoxFlat> *this)

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



/* WARNING: Removing unreachable block (ram,0x00128c60) */
/* EditorAudioBus::_notificationv(int, bool) */

void __thiscall EditorAudioBus::_notificationv(EditorAudioBus *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_001370a8 != Container::_notification) {
      PanelContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_001370a8 != Container::_notification) {
    PanelContainer::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* MethodBind* create_method_bind<EditorAudioBus>(void (EditorAudioBus::*)()) */

MethodBind * create_method_bind<EditorAudioBus>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0012e8f8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorAudioBus";
  local_30 = 0xe;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBus::_initialize_classv() */

void EditorAudioBus::_initialize_classv(void)

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
    if (PanelContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          Control::initialize_class();
        }
        local_68 = 0;
        local_50 = 7;
        local_58 = "Control";
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
        if ((code *)PTR__bind_methods_00137008 != Container::_bind_methods) {
          Container::_bind_methods();
        }
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "PanelContainer";
      local_70 = 0;
      local_50 = 0xe;
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
      if ((code *)PTR__bind_methods_001370b0 != Container::_bind_methods) {
        PanelContainer::_bind_methods();
      }
      PanelContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "PanelContainer";
    local_68 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorAudioBus";
    local_70 = 0;
    local_50 = 0xe;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBind* create_method_bind<EditorAudioBuses, int>(void (EditorAudioBuses::*)(int)) */

MethodBind * create_method_bind<EditorAudioBuses,int>(_func_void_int *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012e958;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorAudioBuses";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorAudioBuses>(void (EditorAudioBuses::*)()) */

MethodBind * create_method_bind<EditorAudioBuses>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0012e8f8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorAudioBuses";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioBuses::_initialize_classv() */

void EditorAudioBuses::_initialize_classv(void)

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
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            Control::initialize_class();
          }
          local_68 = 0;
          local_50 = 7;
          local_58 = "Control";
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
          if ((code *)PTR__bind_methods_00137008 != Container::_bind_methods) {
            Container::_bind_methods();
          }
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
        if ((code *)PTR__bind_methods_00137090 != Container::_bind_methods) {
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorAudioBuses";
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBind* create_method_bind<EditorAudioMeterNotches, float, float, bool>(void
   (EditorAudioMeterNotches::*)(float, float, bool)) */

MethodBind *
create_method_bind<EditorAudioMeterNotches,float,float,bool>(_func_void_float_float_bool *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_float_float_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012e9b8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  local_40 = 0;
  local_38 = "EditorAudioMeterNotches";
  local_30 = 0x17;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<EditorAudioMeterNotches>(void (EditorAudioMeterNotches::*)()) */

MethodBind * create_method_bind<EditorAudioMeterNotches>(_func_void *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_0012e8f8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorAudioMeterNotches";
  local_30 = 0x17;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioMeterNotches::_initialize_classv() */

void EditorAudioMeterNotches::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      Control::initialize_class();
    }
    local_58 = 0;
    local_40 = 7;
    local_48 = "Control";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAudioMeterNotches";
    local_60 = 0;
    local_40 = 0x17;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00129c68) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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



/* MethodBindT<float, float, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float,float,bool>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
      goto LAB_0012a111;
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
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00129f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)(param_3 + 0x10) + 8));
    return;
  }
LAB_0012a111:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, float, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float,float,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
      goto LAB_0012a311;
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
                    /* WARNING: Load size is inaccurate */
    auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar3._0_4_ = (float)**(double **)((long)param_3 + 8);
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x0012a19a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,auVar3._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               **(char **)((long)param_3 + 0x10) != '\0');
    return;
  }
LAB_0012a311:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0012a4f1;
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
                    /* WARNING: Could not recover jumptable at 0x0012a37c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0012a4f1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0012a6d1;
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
                    /* WARNING: Could not recover jumptable at 0x0012a55b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0012a6d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC248,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0012a7f0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_0012a7f0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0012ab6f;
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
                    /* WARNING: Could not recover jumptable at 0x0012aa16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012ab6f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0012ad2f;
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
                    /* WARNING: Could not recover jumptable at 0x0012abd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012ad2f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float, float, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(float, float, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,float,float,bool>
               (__UnexistingClass *param_1,_func_void_float_float_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  long in_stack_00000008;
  Variant *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)param_5;
  uVar5 = 3;
  if (uVar8 < 4) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    if (lVar1 == 0) {
      iVar9 = 0;
      lVar7 = 0;
    }
    else {
      lVar7 = *(long *)(lVar1 + -8);
      iVar9 = (int)lVar7;
    }
    if ((int)(3 - uVar8) <= iVar9) {
      lVar6 = 0;
      do {
        if ((int)lVar6 < (int)uVar8) {
          pVVar11 = *(Variant **)(CONCAT44(in_register_0000000c,param_4) + lVar6 * 8);
        }
        else {
          uVar10 = iVar9 + -3 + (int)lVar6;
          if (lVar7 <= (int)uVar10) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar10,lVar7,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          pVVar11 = (Variant *)(lVar1 + (ulong)uVar10 * 0x18);
        }
        local_48[lVar6] = pVVar11;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 3);
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_float_float_bool **)
                   (param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_48[2],1);
      uVar3 = _LC320;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_bool(local_48[2]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_48[1],3);
      uVar3 = _LC321;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      fVar12 = Variant::operator_cast_to_float(local_48[1]);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)local_48[0],3);
      uVar3 = _LC249;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      fVar13 = Variant::operator_cast_to_float(local_48[0]);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0012aece. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*param_2)(fVar13,fVar12,SUB81(param_1 + (long)param_3,0));
        return;
      }
      goto LAB_0012af92;
    }
    uVar5 = 4;
  }
  *(undefined4 *)param_6 = uVar5;
  *(undefined4 *)(param_6 + 8) = 3;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0012af92:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, float, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<float,float,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC248,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012aff6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float,float,bool>
            (p_Var2,(_func_void_float_float_bool *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012aff6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
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
    goto LAB_0012b2bd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012b320;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012b320:
      uVar6 = 4;
LAB_0012b2bd:
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
      goto LAB_0012b23b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b23b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC250;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x0012b296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC248,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012b386;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012b386:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<float>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<float>(int param_1,int *param_2,PropertyInfo *param_3)

{
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_80 = 0;
    local_88 = 0;
    local_78 = &_LC2;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_90 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,3,(CowData<char32_t> *)&local_90,0,(StrRange *)&local_88,6,
               &local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info<float, float, bool>(int, PropertyInfo&) */

void call_get_argument_type_info<float,float,bool>(int param_1,PropertyInfo *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  int local_84;
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
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_84 = 0;
  call_get_argument_type_info_helper<float>(param_1,&local_84,param_2);
  call_get_argument_type_info_helper<float>(param_1,&local_84,param_2);
  if (param_1 == local_84) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC2;
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
    *(undefined4 *)param_2 = local_68._0_4_;
    if (*(long *)(param_2 + 8) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(param_2 + 8) = lVar1;
    }
    if (*(long *)(param_2 + 0x10) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_2 + 0x10) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x18) = local_50;
    if (*(long *)(param_2 + 0x20) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(param_2 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_2 + 0x28) = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float, float, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<float,float,bool>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  call_get_argument_type_info<float,float,bool>(in_EDX,pPVar1);
  return pPVar1;
}



/* EditorAudioBus::_update_visible_channels() */

void EditorAudioBus::_GLOBAL__sub_I__update_visible_channels(void)

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
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
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
  if (ItemList::base_property_helper == '\0') {
    ItemList::base_property_helper = '\x01';
    ItemList::base_property_helper._64_8_ = 0;
    ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,
                 &__dso_handle);
  }
  if (EditorFileDialog::base_property_helper != '\0') {
    return;
  }
  EditorFileDialog::base_property_helper = 1;
  EditorFileDialog::base_property_helper._64_8_ = 0;
  EditorFileDialog::base_property_helper._56_8_ = 2;
  EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
               &__dso_handle,uStack_8);
  return;
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
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
/* EditorAudioBuses::~EditorAudioBuses() */

void __thiscall EditorAudioBuses::~EditorAudioBuses(EditorAudioBuses *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VSlider::~VSlider() */

void __thiscall VSlider::~VSlider(VSlider *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorAudioBus::~EditorAudioBus() */

void __thiscall EditorAudioBus::~EditorAudioBus(EditorAudioBus *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StyleBoxEmpty::~StyleBoxEmpty() */

void __thiscall StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this)

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
/* EditorAudioMeterNotches::~EditorAudioMeterNotches() */

void __thiscall EditorAudioMeterNotches::~EditorAudioMeterNotches(EditorAudioMeterNotches *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorAudioBusDrop::~EditorAudioBusDrop() */

void __thiscall EditorAudioBusDrop::~EditorAudioBusDrop(EditorAudioBusDrop *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float, float, bool>::~MethodBindT() */

void __thiscall MethodBindT<float,float,bool>::~MethodBindT(MethodBindT<float,float,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void, float>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,float>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Tree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<EditorAudioBus, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<EditorAudioBus,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Vector2_const&,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void, Ref<InputEvent>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBus, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBus,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBus,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBuses, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBuses, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBuses, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBuses, void, int, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,int,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,int,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorAudioBuses, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorAudioBuses,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorAudioBuses,void,String_const&> *this)

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

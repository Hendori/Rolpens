/* TileProxiesManagerDialog::cancel_pressed() */void TileProxiesManagerDialog::cancel_pressed(TileProxiesManagerDialog *this) {
   int iVar1;
   EditorUndoRedoManager::get_singleton();
   if (0 < *(int*)( this + 0xdb8 )) {
      iVar1 = 0;
      do {
         iVar1 = iVar1 + 1;
         EditorUndoRedoManager::undo();
      }
 while ( iVar1 < *(int*)( this + 0xdb8 ) );
   }

   *(undefined4*)( this + 0xdb8 ) = 0;
   return;
}
/* TileProxiesManagerDialog::_right_clicked(int, Vector2, MouseButton, Object*) */void TileProxiesManagerDialog::_right_clicked(long param_1, undefined8 param_2, int param_3, long param_4) {
   Vector2i *pVVar1;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 2) {
      if (param_4 != 0) {
         __dynamic_cast(param_4, &Object::typeinfo, &ItemList::typeinfo, 0);
      }

      Window::reset_size();
      pVVar1 = *(Vector2i**)( param_1 + 0xe20 );
      local_40 = CanvasItem::get_global_mouse_position();
      local_48 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_40);
      local_38 = Window::get_position();
      Vector2i::operator +((Vector2i*)&local_38, (Vector2i*)&local_48);
      Window::set_position(pVVar1);
      local_38 = 0;
      local_30 = 0;
      ( **(code**)( **(long**)( param_1 + 0xe20 ) + 0x240 ) )(*(long**)( param_1 + 0xe20 ), (Vector2i*)&local_38);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_unhandled_key_input(Ref<InputEvent>) */void TileProxiesManagerDialog::_unhandled_key_input(TileProxiesManagerDialog *this, long *param_2) {
   char cVar1;
   long lVar2;
   long lVar3;
   if (*param_2 == 0) {
      _err_print_error("_unhandled_key_input", "editor/plugins/tiles/tile_proxies_manager_dialog.cpp", 0x126, "Condition \"p_event.is_null()\" is true.", 0, 0);
      return;
   }

   cVar1 = InputEvent::is_pressed();
   if (( ( ( ( cVar1 != '\0' ) && ( cVar1 = ( **(code**)( *(long*)*param_2 + 0x1c8 ) )() ),cVar1 == '\0' ) ) && ( lVar3 = *param_2 ),lVar3 != 0 )) &&( ( ( ( lVar2 = __dynamic_cast(lVar3, &Object::typeinfo, &InputEventKey::typeinfo, 0) ),lVar2 != 0 || ( lVar2 = __dynamic_cast(lVar3, &Object::typeinfo, &InputEventJoypadButton::typeinfo, 0) ),lVar2 != 0 ) ) || ( lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &InputEventAction::typeinfo, 0) ),lVar3 != 0 ) && ( ( ( (byte)this[0x2fa] & 0x40 ) != 0 && ( cVar1 = Window::is_visible() ),cVar1 != '\0' ) ) && ( cVar1 = PopupMenu::activate_item_by_event(*(Ref**)( this + 0xe20 ), SUB81(param_2, 0)) ),cVar1 != '\0';
   return;
}
return;}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* TileProxiesManagerDialog::_update_enabled_property_editors() */void TileProxiesManagerDialog::_update_enabled_property_editors(TileProxiesManagerDialog *this) {
   uint uVar1;
   int iVar2;
   undefined2 uVar3;
   iVar2 = TileSetSource::INVALID_ATLAS_COORDS._4_4_;
   uVar1 = (uint)TileSetSource::INVALID_ATLAS_COORDS;
   if (*(short*)( this + 0xdc8 ) == (int)TileSet::INVALID_SOURCE) {
      *(short*)( this + 0xdca ) = (short)(uint)TileSetSource::INVALID_ATLAS_COORDS;
      *(short*)( this + 0xdcc ) = (short)iVar2;
      *(uint*)( this + 0xdd2 ) = iVar2 << 0x10 | uVar1 & 0xffff;
      uVar3 = (undefined2)(undefined4)TileSetSource::INVALID_TILE_ALTERNATIVE;
      *(undefined2*)( this + 0xdce ) = uVar3;
      *(undefined2*)( this + 0xdd6 ) = uVar3;
      for (int i = 0; i < 4; i++) {
         CanvasItem::hide();
      }

   }
 else if (( *(short*)( this + 0xdcc ) == -1 ) || ( *(short*)( this + 0xdca ) == -1 )) {
      uVar3 = (undefined2)(undefined4)TileSetSource::INVALID_TILE_ALTERNATIVE;
      *(undefined2*)( this + 0xdce ) = uVar3;
      *(undefined2*)( this + 0xdd6 ) = uVar3;
      CanvasItem::show();
      CanvasItem::show();
      CanvasItem::hide();
      CanvasItem::hide();
   }
 else {
      for (int i = 0; i < 4; i++) {
         CanvasItem::show();
      }

   }

   ( **(code**)( **(long**)( this + 0xdf0 ) + 0x380 ) )();
   ( **(code**)( **(long**)( this + 0xe08 ) + 0x380 ) )();
   ( **(code**)( **(long**)( this + 0xdf8 ) + 0x380 ) )();
   ( **(code**)( **(long**)( this + 0xe10 ) + 0x380 ) )();
   ( **(code**)( **(long**)( this + 0xe00 ) + 0x380 ) )();
   /* WARNING: Could not recover jumptable at 0x001004d9. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( **(long**)( this + 0xe18 ) + 0x380 ) )();
   return;
}
/* TileProxiesManagerDialog::_set(StringName const&, Variant const&) */undefined8 TileProxiesManagerDialog::_set(TileProxiesManagerDialog *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   undefined2 uVar2;
   undefined2 uVar3;
   int iVar4;
   long lVar5;
   undefined8 uVar6;
   cVar1 = StringName::operator ==(param_1, "from_source");
   if (cVar1 == '\0') {
      cVar1 = StringName::operator ==(param_1, "from_coords");
      if (cVar1 == '\0') {
         cVar1 = StringName::operator ==(param_1, "from_alternative");
         if (cVar1 == '\0') {
            cVar1 = StringName::operator ==(param_1, "to_source");
            if (cVar1 == '\0') {
               cVar1 = StringName::operator ==(param_1, "to_coords");
               if (cVar1 == '\0') {
                  uVar6 = StringName::operator ==(param_1, "to_alternative");
                  if ((char)uVar6 == '\0') {
                     return uVar6;
                  }

                  iVar4 = Variant::operator_cast_to_int(param_2);
                  uVar2 = (undefined2)iVar4;
                  if (iVar4 < 0) {
                     uVar2 = 0;
                  }

                  *(undefined2*)( this + 0xdd6 ) = uVar2;
               }
 else {
                  lVar5 = Variant::operator_cast_to_Vector2i(param_2);
                  uVar2 = ( undefined2 )((ulong)lVar5 >> 0x20);
                  if (lVar5 < 0) {
                     uVar2 = 0;
                  }

                  uVar3 = (undefined2)lVar5;
                  if ((int)lVar5 < 0) {
                     uVar3 = 0;
                  }

                  *(undefined2*)( this + 0xdd4 ) = uVar2;
                  *(undefined2*)( this + 0xdd2 ) = uVar3;
               }

            }
 else {
               iVar4 = Variant::operator_cast_to_int(param_2);
               uVar2 = (undefined2)iVar4;
               if (iVar4 < 0) {
                  uVar2 = 0;
               }

               *(undefined2*)( this + 0xdd0 ) = uVar2;
            }

         }
 else {
            iVar4 = Variant::operator_cast_to_int(param_2);
            uVar2 = (undefined2)iVar4;
            if (iVar4 < 0) {
               uVar2 = 0xffff;
            }

            *(undefined2*)( this + 0xdce ) = uVar2;
         }

      }
 else {
         lVar5 = Variant::operator_cast_to_Vector2i(param_2);
         uVar2 = ( undefined2 )((ulong)lVar5 >> 0x20);
         if (lVar5 < 0) {
            uVar2 = 0xffff;
         }

         uVar3 = (undefined2)lVar5;
         if ((int)lVar5 < 0) {
            uVar3 = 0xffff;
         }

         *(undefined2*)( this + 0xdcc ) = uVar2;
         *(undefined2*)( this + 0xdca ) = uVar3;
      }

   }
 else {
      iVar4 = Variant::operator_cast_to_int(param_2);
      uVar2 = (undefined2)iVar4;
      if (iVar4 < 0) {
         uVar2 = 0xffff;
      }

      *(undefined2*)( this + 0xdc8 ) = uVar2;
   }

   _update_enabled_property_editors(this);
   return 1;
}
/* TileProxiesManagerDialog::_property_changed(String const&, Variant const&, String const&, bool)
    */void TileProxiesManagerDialog::_property_changed(String *param_1, Variant *param_2, String *param_3, bool param_4) {
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, (String*)param_2, false);
   _set((TileProxiesManagerDialog*)param_1, (StringName*)&local_28, (Variant*)param_3);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_get(StringName const&, Variant&) const */undefined8 TileProxiesManagerDialog::_get(TileProxiesManagerDialog *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   int local_40;
   int local_3c;
   undefined4 local_38[2];
   undefined8 local_30;
   undefined8 uStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = StringName::operator ==(param_1, "from_source");
   if (cVar1 == '\0') {
      cVar1 = StringName::operator ==(param_1, "from_coords");
      if (cVar1 == '\0') {
         cVar1 = StringName::operator ==(param_1, "from_alternative");
         if (cVar1 == '\0') {
            cVar1 = StringName::operator ==(param_1, "to_source");
            if (cVar1 == '\0') {
               cVar1 = StringName::operator ==(param_1, "to_coords");
               if (cVar1 == '\0') {
                  uVar2 = StringName::operator ==(param_1, "to_alternative");
                  if ((char)uVar2 == '\0') goto LAB_00100814;
                  Variant::Variant((Variant*)local_38, *(short*)( this + 0xdd6 ));
                  if (Variant::needs_deinit[*(int*)param_2] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)param_2 = local_38[0];
                  *(undefined8*)( param_2 + 8 ) = local_30;
                  *(undefined8*)( param_2 + 0x10 ) = uStack_28;
               }
 else {
                  local_3c = (int)*(short*)( this + 0xdd4 );
                  local_40 = (int)*(short*)( this + 0xdd2 );
                  Variant::Variant((Variant*)local_38, (Vector2i*)&local_40);
                  if (Variant::needs_deinit[*(int*)param_2] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)param_2 = local_38[0];
                  *(undefined8*)( param_2 + 8 ) = local_30;
                  *(undefined8*)( param_2 + 0x10 ) = uStack_28;
               }

            }
 else {
               Variant::Variant((Variant*)local_38, *(short*)( this + 0xdd0 ));
               if (Variant::needs_deinit[*(int*)param_2] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)param_2 = local_38[0];
               *(undefined8*)( param_2 + 8 ) = local_30;
               *(undefined8*)( param_2 + 0x10 ) = uStack_28;
            }

         }
 else {
            Variant::Variant((Variant*)local_38, *(short*)( this + 0xdce ));
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_38[0];
            *(undefined8*)( param_2 + 8 ) = local_30;
            *(undefined8*)( param_2 + 0x10 ) = uStack_28;
         }

      }
 else {
         local_3c = (int)*(short*)( this + 0xdcc );
         local_40 = (int)*(short*)( this + 0xdca );
         Variant::Variant((Variant*)local_38, (Vector2i*)&local_40);
         if (Variant::needs_deinit[*(int*)param_2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_2 = local_38[0];
         *(undefined8*)( param_2 + 8 ) = local_30;
         *(undefined8*)( param_2 + 0x10 ) = uStack_28;
      }

   }
 else {
      Variant::Variant((Variant*)local_38, *(short*)( this + 0xdc8 ));
      if (Variant::needs_deinit[*(int*)param_2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_2 = local_38[0];
      *(undefined8*)( param_2 + 8 ) = local_30;
      *(undefined8*)( param_2 + 0x10 ) = uStack_28;
   }

   uVar2 = 1;
   LAB_00100814:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_add_button_pressed() */void TileProxiesManagerDialog::_add_button_pressed(TileProxiesManagerDialog *this) {
   Variant *pVVar1;
   short sVar2;
   short sVar3;
   short sVar4;
   short sVar5;
   short sVar6;
   short sVar7;
   short sVar8;
   short sVar9;
   StringName *pSVar10;
   char cVar11;
   int iVar12;
   Object *pOVar13;
   int iVar14;
   Variant *pVVar15;
   Variant *pVVar16;
   Variant *pVVar17;
   long in_FS_OFFSET;
   Variant *local_218;
   Variant **local_210;
   Variant *local_208;
   Variant *local_200;
   Variant *local_1f8;
   Array *local_1f0;
   Variant *local_1e8;
   undefined8 local_1b8;
   undefined8 local_1b0;
   undefined *local_1a8;
   undefined8 local_1a0;
   int local_190;
   int local_18c;
   int local_188;
   int local_184;
   int local_168;
   int local_164;
   int local_148;
   int local_144;
   Variant *local_128;
   Variant *pVStack_120;
   Variant *local_118;
   Variant *pVStack_110;
   Variant *local_108;
   Variant *pVStack_100;
   int local_e8[2];
   undefined1 local_e0[16];
   int local_d0[2];
   undefined1 local_c8[16];
   undefined8 local_b8;
   undefined1 local_b0[16];
   undefined8 local_a0;
   undefined1 local_98[16];
   undefined8 local_88;
   undefined1 local_80[16];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar13 = (Object*)EditorUndoRedoManager::get_singleton();
   if (( *(short*)( this + 0xdc8 ) == (int)TileSet::INVALID_SOURCE ) || ( (int)TileSet::INVALID_SOURCE == *(short*)( this + 0xdd0 ) )) goto LAB_00100e24;
   if ((short)( *(ushort*)( this + 0xdcc ) | *(ushort*)( this + 0xdca ) | *(ushort*)( this + 0xdd4 ) | *(ushort*)( this + 0xdd2 ) ) < 0) {
      local_1b0 = 0;
      local_1a8 = &_LC16;
      local_1a0 = 0;
      String::parse_latin1((StrRange*)&local_1b0);
      local_1b8 = 0;
      String::parse_latin1((String*)&local_1b8, "Create source-level Tile Proxy");
      TTR((String*)&local_1a8, (String*)&local_1b8);
      EditorUndoRedoManager::create_action(pOVar13, (String*)&local_1a8, 0, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
      sVar2 = *(short*)( this + 0xdc8 );
      sVar3 = *(short*)( this + 0xdd0 );
      StringName::StringName((StringName*)&local_1a8, "set_source_level_tile_proxy", false);
      pSVar10 = *(StringName**)( this + 0xdc0 );
      Variant::Variant((Variant*)local_e8, sVar2);
      Variant::Variant((Variant*)local_d0, sVar3);
      local_b0 = (undefined1[16])0x0;
      local_b8 = 0;
      iVar14 = (int)&local_128;
      local_128 = (Variant*)local_e8;
      pVStack_120 = (Variant*)local_d0;
      EditorUndoRedoManager::add_do_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, iVar14);
      pVVar15 = (Variant*)&local_a0;
      pVVar17 = pVVar15;
      do {
         pVVar16 = pVVar17 + -0x18;
         pVVar17 = pVVar17 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar17 != (Variant*)local_e8 );
      if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
         StringName::unref();
      }

      cVar11 = TileSet::has_source_level_tile_proxy((int)*(undefined8*)( this + 0xdc0 ));
      if (cVar11 == '\0') {
         sVar2 = *(short*)( this + 0xdc8 );
         StringName::StringName((StringName*)&local_1a8, "remove_source_level_tile_proxy", false);
         pSVar10 = *(StringName**)( this + 0xdc0 );
         Variant::Variant((Variant*)local_e8, sVar2);
         local_d0[0] = 0;
         local_d0[1] = 0;
         local_c8 = (undefined1[16])0x0;
         local_128 = (Variant*)local_e8;
         EditorUndoRedoManager::add_undo_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, iVar14);
         if (Variant::needs_deinit[local_d0[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_e8[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         iVar12 = TileSet::get_source_level_tile_proxy((int)*(undefined8*)( this + 0xdc0 ));
         sVar2 = *(short*)( this + 0xdd0 );
         StringName::StringName((StringName*)&local_1a8, "set_source_level_tile_proxy", false);
         pSVar10 = *(StringName**)( this + 0xdc0 );
         Variant::Variant((Variant*)local_e8, sVar2);
         Variant::Variant((Variant*)local_d0, iVar12);
         local_b0 = (undefined1[16])0x0;
         local_b8 = 0;
         local_128 = (Variant*)local_e8;
         pVStack_120 = (Variant*)local_d0;
         EditorUndoRedoManager::add_undo_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, iVar14);
         do {
            pVVar17 = pVVar15 + -0x18;
            pVVar15 = pVVar15 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar17] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar15 != (Variant*)local_e8 );
      }

      LAB_00100d19:if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      if (( *(short*)( this + 0xdce ) != (int)TileSetSource::INVALID_TILE_ALTERNATIVE ) && ( (int)TileSetSource::INVALID_TILE_ALTERNATIVE != *(short*)( this + 0xdd6 ) )) {
         local_1b0 = 0;
         String::parse_latin1((String*)&local_1b0, "");
         local_1b8 = 0;
         String::parse_latin1((String*)&local_1b8, "Create Alternative-level Tile Proxy");
         TTR((String*)&local_1a8, (String*)&local_1b8);
         EditorUndoRedoManager::create_action(pOVar13, (String*)&local_1a8, 0, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
         sVar2 = *(short*)( this + 0xdce );
         sVar3 = *(short*)( this + 0xdc8 );
         sVar4 = *(short*)( this + 0xdd6 );
         sVar5 = *(short*)( this + 0xdd0 );
         sVar6 = *(short*)( this + 0xdca );
         sVar7 = *(short*)( this + 0xdd4 );
         sVar8 = *(short*)( this + 0xdd2 );
         sVar9 = *(short*)( this + 0xdcc );
         StringName::StringName((StringName*)&local_1a8, "set_alternative_level_tile_proxy", false);
         pSVar10 = *(StringName**)( this + 0xdc0 );
         pVVar15 = (Variant*)&local_88;
         local_168 = (int)sVar6;
         local_164 = (int)sVar9;
         local_148 = (int)sVar8;
         local_144 = (int)sVar7;
         Variant::Variant((Variant*)local_e8, sVar3);
         Variant::Variant((Variant*)local_d0, (Vector2i*)&local_168);
         Variant::Variant((Variant*)&local_b8, sVar2);
         Variant::Variant((Variant*)&local_a0, sVar5);
         Variant::Variant(pVVar15, (Variant*)&local_148);
         Variant::Variant(local_70, sVar4);
         local_50 = (undefined1[16])0x0;
         local_58 = 0;
         local_128 = (Variant*)local_e8;
         pVStack_120 = (Variant*)local_d0;
         local_118 = (Variant*)&local_b8;
         pVStack_110 = (Variant*)&local_a0;
         local_108 = pVVar15;
         pVStack_100 = local_70;
         EditorUndoRedoManager::add_do_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, (int)&local_128);
         pVVar17 = (Variant*)local_40;
         pVVar16 = pVVar17;
         do {
            pVVar1 = pVVar16 + -0x18;
            pVVar16 = pVVar16 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

            local_1e8 = (Variant*)&local_b8;
            local_1f0 = (Array*)&local_1b0;
            local_1f8 = (Variant*)&local_168;
            local_200 = local_70;
            local_208 = (Variant*)&local_a0;
            local_210 = &local_128;
            local_218 = (Variant*)local_d0;
         }
 while ( pVVar16 != (Variant*)local_e8 );
         if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
            StringName::unref();
         }

         cVar11 = TileSet::has_alternative_level_tile_proxy(*(undefined8*)( this + 0xdc0 ), (int)*(short*)( this + 0xdc8 ), CONCAT44((int)*(short*)( this + 0xdcc ), (int)*(short*)( this + 0xdca )), (int)*(short*)( this + 0xdce ));
         if (cVar11 != '\0') {
            TileSet::get_alternative_level_tile_proxy(local_1f0, *(undefined8*)( this + 0xdc0 ), (int)*(short*)( this + 0xdc8 ), CONCAT44((int)*(short*)( this + 0xdcc ), (int)*(short*)( this + 0xdca )), (int)*(short*)( this + 0xdce ));
            iVar14 = (int)local_1f0;
            pVVar16 = (Variant*)Array::operator [](iVar14);
            Variant::Variant((Variant*)&local_148, pVVar16);
            pVVar16 = (Variant*)Array::operator [](iVar14);
            Variant::Variant(local_1f8, pVVar16);
            pVVar16 = (Variant*)Array::operator [](iVar14);
            Variant::Variant((Variant*)&local_188, pVVar16);
            sVar2 = *(short*)( this + 0xdd6 );
            sVar3 = *(short*)( this + 0xdd2 );
            sVar4 = *(short*)( this + 0xdd4 );
            sVar5 = *(short*)( this + 0xdd0 );
            StringName::StringName((StringName*)&local_1a8, "set_alternative_level_tile_proxy", false);
            pSVar10 = *(StringName**)( this + 0xdc0 );
            local_190 = (int)sVar3;
            local_18c = (int)sVar4;
            Variant::Variant((Variant*)local_e8, sVar5);
            Variant::Variant(local_218, (Vector2i*)&local_190);
            Variant::Variant(local_1e8, sVar2);
            Variant::Variant(local_208, (Variant*)&local_188);
            Variant::Variant(pVVar15, local_1f8);
            Variant::Variant(local_200, (Variant*)&local_148);
            local_50 = (undefined1[16])0x0;
            local_58 = 0;
            pVStack_120 = local_218;
            local_118 = local_1e8;
            pVStack_110 = local_208;
            pVStack_100 = local_200;
            local_128 = (Variant*)local_e8;
            local_108 = pVVar15;
            EditorUndoRedoManager::add_undo_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, (int)local_210);
            do {
               pVVar15 = pVVar17 + -0x18;
               pVVar17 = pVVar17 + -0x18;
               if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( pVVar17 != (Variant*)local_e8 );
            if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
               StringName::unref();
            }

            if (Variant::needs_deinit[local_188] != '\0') {
               Variant::_clear_internal();
            }

            goto LAB_00101304;
         }

         sVar2 = *(short*)( this + 0xdca );
         sVar3 = *(short*)( this + 0xdce );
         sVar4 = *(short*)( this + 0xdcc );
         sVar5 = *(short*)( this + 0xdc8 );
         StringName::StringName((StringName*)&local_1a8, "remove_alternative_level_tile_proxy", false);
         pSVar10 = *(StringName**)( this + 0xdc0 );
         local_148 = (int)sVar2;
         local_144 = (int)sVar4;
         Variant::Variant((Variant*)local_e8, sVar5);
         Variant::Variant(local_218, (Variant*)&local_148);
         Variant::Variant(local_1e8, sVar3);
         local_98 = (undefined1[16])0x0;
         local_a0 = 0;
         local_118 = local_1e8;
         pVStack_120 = local_218;
         local_128 = (Variant*)local_e8;
         EditorUndoRedoManager::add_undo_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, (int)local_210);
         do {
            pVVar17 = pVVar15 + -0x18;
            pVVar15 = pVVar15 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar17] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar15 != (Variant*)local_e8 );
         goto LAB_00100d19;
      }

      local_1b0 = 0;
      String::parse_latin1((String*)&local_1b0, "");
      local_1b8 = 0;
      String::parse_latin1((String*)&local_1b8, "Create Coords-level Tile Proxy");
      TTR((String*)&local_1a8, (String*)&local_1b8);
      EditorUndoRedoManager::create_action(pOVar13, (String*)&local_1a8, 0, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
      sVar2 = *(short*)( this + 0xdd0 );
      sVar3 = *(short*)( this + 0xdc8 );
      sVar4 = *(short*)( this + 0xdd4 );
      sVar5 = *(short*)( this + 0xdd2 );
      sVar6 = *(short*)( this + 0xdcc );
      sVar7 = *(short*)( this + 0xdca );
      StringName::StringName((StringName*)&local_1a8, "set_coords_level_tile_proxy", false);
      pSVar10 = *(StringName**)( this + 0xdc0 );
      local_168 = (int)sVar7;
      local_164 = (int)sVar6;
      local_148 = (int)sVar5;
      local_144 = (int)sVar4;
      Variant::Variant((Variant*)local_e8, sVar3);
      Variant::Variant((Variant*)local_d0, (Variant*)&local_168);
      Variant::Variant((Variant*)&local_b8, sVar2);
      pVVar15 = (Variant*)&local_a0;
      Variant::Variant(pVVar15, (Variant*)&local_148);
      local_80 = (undefined1[16])0x0;
      local_88 = 0;
      local_128 = (Variant*)local_e8;
      pVStack_120 = (Variant*)local_d0;
      local_118 = (Variant*)&local_b8;
      pVStack_110 = pVVar15;
      EditorUndoRedoManager::add_do_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, (int)&local_128);
      pVVar17 = local_70;
      pVVar16 = pVVar17;
      do {
         pVVar1 = pVVar16 + -0x18;
         pVVar16 = pVVar16 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }

         local_210 = &local_128;
         local_218 = (Variant*)local_d0;
      }
 while ( pVVar16 != (Variant*)local_e8 );
      if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
         StringName::unref();
      }

      cVar11 = TileSet::has_coords_level_tile_proxy(*(undefined8*)( this + 0xdc0 ), (int)*(short*)( this + 0xdc8 ), CONCAT44((int)*(short*)( this + 0xdcc ), (int)*(short*)( this + 0xdca )));
      if (cVar11 == '\0') {
         sVar2 = *(short*)( this + 0xdca );
         sVar3 = *(short*)( this + 0xdcc );
         sVar4 = *(short*)( this + 0xdc8 );
         StringName::StringName((StringName*)&local_1a8, "remove_coords_level_tile_proxy", false);
         pSVar10 = *(StringName**)( this + 0xdc0 );
         local_148 = (int)sVar2;
         local_144 = (int)sVar3;
         Variant::Variant((Variant*)local_e8, sVar4);
         Variant::Variant(local_218, (Variant*)&local_148);
         local_b0 = (undefined1[16])0x0;
         local_b8 = 0;
         pVStack_120 = local_218;
         local_128 = (Variant*)local_e8;
         EditorUndoRedoManager::add_undo_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, (int)local_210);
         do {
            pVVar17 = pVVar15 + -0x18;
            pVVar15 = pVVar15 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar17] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar15 != (Variant*)local_e8 );
         goto LAB_00100d19;
      }

      TileSet::get_coords_level_tile_proxy((String*)&local_1b0, *(undefined8*)( this + 0xdc0 ), (int)*(short*)( this + 0xdc8 ), CONCAT44((int)*(short*)( this + 0xdcc ), (int)*(short*)( this + 0xdca )));
      iVar14 = (int)(String*)&local_1b0;
      pVVar16 = (Variant*)Array::operator [](iVar14);
      Variant::Variant((Variant*)&local_148, pVVar16);
      pVVar16 = (Variant*)Array::operator [](iVar14);
      Variant::Variant((Variant*)&local_168, pVVar16);
      sVar2 = *(short*)( this + 0xdd0 );
      sVar3 = *(short*)( this + 0xdd2 );
      sVar4 = *(short*)( this + 0xdd4 );
      StringName::StringName((StringName*)&local_1a8, "set_coords_level_tile_proxy", false);
      pSVar10 = *(StringName**)( this + 0xdc0 );
      local_188 = (int)sVar3;
      local_184 = (int)sVar4;
      Variant::Variant((Variant*)local_e8, sVar2);
      Variant::Variant(local_218, (Vector2i*)&local_188);
      Variant::Variant((Variant*)&local_b8, (Variant*)&local_168);
      Variant::Variant(pVVar15, (Variant*)&local_148);
      local_80 = (undefined1[16])0x0;
      local_88 = 0;
      pVStack_120 = local_218;
      local_128 = (Variant*)local_e8;
      local_118 = (Variant*)&local_b8;
      pVStack_110 = pVVar15;
      EditorUndoRedoManager::add_undo_methodp(pOVar13, pSVar10, (Variant**)&local_1a8, (int)local_210);
      do {
         pVVar15 = pVVar17 + -0x18;
         pVVar17 = pVVar17 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar15] != '\0') {
            Variant::_clear_internal();
         }

      }
 while ( pVVar17 != (Variant*)local_e8 );
      if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
         StringName::unref();
      }

      LAB_00101304:local_1f0 = (Array*)&local_1b0;
      if (Variant::needs_deinit[local_168] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_148] != '\0') {
         Variant::_clear_internal();
      }

      Array::~Array(local_1f0);
   }

   StringName::StringName((StringName*)&local_1a8, "_update_lists", false);
   local_e8[0] = 0;
   local_e8[1] = 0;
   local_e0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar13, (StringName*)this, (Variant**)&local_1a8, 0);
   if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_1a8, "_update_lists", false);
   local_e8[0] = 0;
   local_e8[1] = 0;
   local_e0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_undo_methodp(pOVar13, (StringName*)this, (Variant**)&local_1a8, 0);
   if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_1a8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar13, 0));
   *(int*)( this + 0xdb8 ) = *(int*)( this + 0xdb8 ) + 1;
   LAB_00100e24:if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TileProxiesManagerDialog::_clear_invalid_button_pressed() */void TileProxiesManagerDialog::_clear_invalid_button_pressed(TileProxiesManagerDialog *this) {
   Variant *pVVar1;
   StringName *pSVar2;
   int iVar3;
   Object *pOVar4;
   Variant *pVVar5;
   int iVar6;
   int iVar7;
   long in_FS_OFFSET;
   undefined8 local_2d8;
   undefined8 local_2d0;
   char *local_2c8;
   undefined8 local_2c0;
   int local_2b8[8];
   int local_298[8];
   int local_278[8];
   int local_258[8];
   int local_238[8];
   int local_218[8];
   Variant *local_1f8;
   undefined1 auStack_1f0[16];
   Variant *pVStack_1e0;
   Variant *local_1d8;
   Variant *pVStack_1d0;
   Variant local_1b8[24];
   Variant local_1a0[24];
   undefined8 local_188;
   undefined1 local_180[16];
   Variant local_170[8];
   Variant local_168[24];
   Variant local_150[24];
   Variant local_138[24];
   Variant local_120[24];
   undefined8 local_108;
   undefined1 local_100[16];
   Variant local_f0[8];
   Variant local_e8[24];
   Variant local_d0[24];
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   int iVar8;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar4 = (Object*)EditorUndoRedoManager::get_singleton();
   local_2d0 = 0;
   local_2c8 = "";
   local_2c0 = 0;
   String::parse_latin1((StrRange*)&local_2d0);
   local_2d8 = 0;
   local_2c8 = "Delete All Invalid Tile Proxies";
   local_2c0 = 0x1f;
   String::parse_latin1((StrRange*)&local_2d8);
   TTR((String*)&local_2c8, (String*)&local_2d8);
   EditorUndoRedoManager::create_action(pOVar4, (String*)&local_2c8, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   StringName::StringName((StringName*)&local_2c8, "cleanup_invalid_tile_proxies", false);
   local_1f8 = (Variant*)0x0;
   auStack_1f0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar4, *(StringName**)( this + 0xdc0 ), (Variant**)&local_2c8, 0);
   if (Variant::needs_deinit[(int)local_1f8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar6 = 0;
   TileSet::get_source_level_tile_proxies();
   iVar3 = Array::size();
   iVar7 = (int)(StrRange*)&local_2d0;
   iVar8 = (int)(StrRange*)&local_2d8;
   if (0 < iVar3) {
      do {
         Array::operator [](iVar8);
         Variant::operator_cast_to_Array((Variant*)&local_2d0);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_218, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_238, pVVar5);
         StringName::StringName((StringName*)&local_2c8, "set_source_level_tile_proxy", false);
         pSVar2 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_1b8, (Variant*)local_238);
         Variant::Variant(local_1a0, (Variant*)local_218);
         local_180 = (undefined1[16])0x0;
         pVVar5 = local_170;
         local_188 = 0;
         auStack_1f0._0_8_ = local_1a0;
         local_1f8 = local_1b8;
         EditorUndoRedoManager::add_undo_methodp(pOVar4, pSVar2, (Variant**)&local_2c8, (int)&local_1f8);
         do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar5 != local_1b8 );
         if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_238[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_218[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = iVar6 + 1;
         Array::~Array((Array*)&local_2d0);
         iVar3 = Array::size();
      }
 while ( iVar6 < iVar3 );
   }

   iVar6 = 0;
   TileSet::get_coords_level_tile_proxies();
   Array::operator =((Array*)&local_2d8, (Array*)&local_2c8);
   Array::~Array((Array*)&local_2c8);
   iVar3 = Array::size();
   if (0 < iVar3) {
      do {
         Array::operator [](iVar8);
         Variant::operator_cast_to_Array((Variant*)&local_2d0);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_218, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_238, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_258, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_278, pVVar5);
         StringName::StringName((StringName*)&local_2c8, "set_coords_level_tile_proxy", false);
         pSVar2 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_168, (Variant*)local_278);
         Variant::Variant(local_150, (Variant*)local_258);
         Variant::Variant(local_138, (Variant*)local_238);
         Variant::Variant(local_120, (Variant*)local_218);
         local_100 = (undefined1[16])0x0;
         pVVar5 = local_f0;
         local_108 = 0;
         auStack_1f0._8_8_ = local_138;
         auStack_1f0._0_8_ = local_150;
         local_1f8 = local_168;
         pVStack_1e0 = local_120;
         EditorUndoRedoManager::add_undo_methodp(pOVar4, pSVar2, (Variant**)&local_2c8, (int)&local_1f8);
         do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar5 != local_168 );
         if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_278[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_258[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_238[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_218[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = iVar6 + 1;
         Array::~Array((Array*)&local_2d0);
         iVar3 = Array::size();
      }
 while ( iVar6 < iVar3 );
   }

   iVar6 = 0;
   TileSet::get_alternative_level_tile_proxies();
   Array::operator =((Array*)&local_2d8, (Array*)&local_2c8);
   Array::~Array((Array*)&local_2c8);
   iVar3 = Array::size();
   if (0 < iVar3) {
      do {
         Array::operator [](iVar8);
         Variant::operator_cast_to_Array((Variant*)&local_2d0);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_218, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_238, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_258, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_278, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_298, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_2b8, pVVar5);
         StringName::StringName((StringName*)&local_2c8, "set_alternative_level_tile_proxy", false);
         pSVar2 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_e8, (Variant*)local_2b8);
         Variant::Variant(local_d0, (Variant*)local_298);
         Variant::Variant(local_b8, (Variant*)local_278);
         Variant::Variant(local_a0, (Variant*)local_258);
         Variant::Variant(local_88, (Variant*)local_238);
         Variant::Variant(local_70, (Variant*)local_218);
         local_58 = 0;
         pVVar5 = (Variant*)local_40;
         local_50 = (undefined1[16])0x0;
         auStack_1f0._8_8_ = local_b8;
         auStack_1f0._0_8_ = local_d0;
         local_1f8 = local_e8;
         pVStack_1e0 = local_a0;
         local_1d8 = local_88;
         pVStack_1d0 = local_70;
         EditorUndoRedoManager::add_undo_methodp(pOVar4, pSVar2, (Variant**)&local_2c8, (int)&local_1f8);
         do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar5 != local_e8 );
         if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_2b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_298[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_278[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_258[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_238[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_218[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = iVar6 + 1;
         Array::~Array((Array*)&local_2d0);
         iVar3 = Array::size();
      }
 while ( iVar6 < iVar3 );
   }

   StringName::StringName((StringName*)&local_2c8, "_update_lists", false);
   local_1f8 = (Variant*)0x0;
   auStack_1f0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar4, (StringName*)this, (Variant**)&local_2c8, 0);
   if (Variant::needs_deinit[(int)local_1f8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_2c8, "_update_lists", false);
   local_1f8 = (Variant*)0x0;
   auStack_1f0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_undo_methodp(pOVar4, (StringName*)this, (Variant**)&local_2c8, 0);
   if (Variant::needs_deinit[(int)local_1f8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar4, 0));
   Array::~Array((Array*)&local_2d8);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TileProxiesManagerDialog::_clear_all_button_pressed() */void TileProxiesManagerDialog::_clear_all_button_pressed(TileProxiesManagerDialog *this) {
   Variant *pVVar1;
   StringName *pSVar2;
   int iVar3;
   Object *pOVar4;
   Variant *pVVar5;
   int iVar6;
   int iVar7;
   long in_FS_OFFSET;
   undefined8 local_2d8;
   undefined8 local_2d0;
   char *local_2c8;
   undefined8 local_2c0;
   int local_2b8[8];
   int local_298[8];
   int local_278[8];
   int local_258[8];
   int local_238[8];
   int local_218[8];
   Variant *local_1f8;
   undefined1 auStack_1f0[16];
   Variant *pVStack_1e0;
   Variant *local_1d8;
   Variant *pVStack_1d0;
   Variant local_1b8[24];
   Variant local_1a0[24];
   undefined8 local_188;
   undefined1 local_180[16];
   Variant local_170[8];
   Variant local_168[24];
   Variant local_150[24];
   Variant local_138[24];
   Variant local_120[24];
   undefined8 local_108;
   undefined1 local_100[16];
   Variant local_f0[8];
   Variant local_e8[24];
   Variant local_d0[24];
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   int iVar8;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar4 = (Object*)EditorUndoRedoManager::get_singleton();
   local_2d0 = 0;
   local_2c8 = "";
   local_2c0 = 0;
   String::parse_latin1((StrRange*)&local_2d0);
   local_2d8 = 0;
   local_2c8 = "Delete All Tile Proxies";
   local_2c0 = 0x17;
   String::parse_latin1((StrRange*)&local_2d8);
   TTR((String*)&local_2c8, (String*)&local_2d8);
   EditorUndoRedoManager::create_action(pOVar4, (String*)&local_2c8, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2d0);
   StringName::StringName((StringName*)&local_2c8, "clear_tile_proxies", false);
   local_1f8 = (Variant*)0x0;
   auStack_1f0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar4, *(StringName**)( this + 0xdc0 ), (Variant**)&local_2c8, 0);
   if (Variant::needs_deinit[(int)local_1f8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
      StringName::unref();
   }

   iVar6 = 0;
   TileSet::get_source_level_tile_proxies();
   iVar3 = Array::size();
   iVar7 = (int)(StrRange*)&local_2d0;
   iVar8 = (int)(StrRange*)&local_2d8;
   if (0 < iVar3) {
      do {
         Array::operator [](iVar8);
         Variant::operator_cast_to_Array((Variant*)&local_2d0);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_218, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_238, pVVar5);
         StringName::StringName((StringName*)&local_2c8, "set_source_level_tile_proxy", false);
         pSVar2 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_1b8, (Variant*)local_238);
         Variant::Variant(local_1a0, (Variant*)local_218);
         local_180 = (undefined1[16])0x0;
         pVVar5 = local_170;
         local_188 = 0;
         auStack_1f0._0_8_ = local_1a0;
         local_1f8 = local_1b8;
         EditorUndoRedoManager::add_undo_methodp(pOVar4, pSVar2, (Variant**)&local_2c8, (int)&local_1f8);
         do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar5 != local_1b8 );
         if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_238[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_218[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = iVar6 + 1;
         Array::~Array((Array*)&local_2d0);
         iVar3 = Array::size();
      }
 while ( iVar6 < iVar3 );
   }

   iVar6 = 0;
   TileSet::get_coords_level_tile_proxies();
   Array::operator =((Array*)&local_2d8, (Array*)&local_2c8);
   Array::~Array((Array*)&local_2c8);
   iVar3 = Array::size();
   if (0 < iVar3) {
      do {
         Array::operator [](iVar8);
         Variant::operator_cast_to_Array((Variant*)&local_2d0);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_218, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_238, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_258, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_278, pVVar5);
         StringName::StringName((StringName*)&local_2c8, "set_coords_level_tile_proxy", false);
         pSVar2 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_168, (Variant*)local_278);
         Variant::Variant(local_150, (Variant*)local_258);
         Variant::Variant(local_138, (Variant*)local_238);
         Variant::Variant(local_120, (Variant*)local_218);
         local_100 = (undefined1[16])0x0;
         pVVar5 = local_f0;
         local_108 = 0;
         auStack_1f0._8_8_ = local_138;
         auStack_1f0._0_8_ = local_150;
         local_1f8 = local_168;
         pVStack_1e0 = local_120;
         EditorUndoRedoManager::add_undo_methodp(pOVar4, pSVar2, (Variant**)&local_2c8, (int)&local_1f8);
         do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar5 != local_168 );
         if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_278[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_258[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_238[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_218[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = iVar6 + 1;
         Array::~Array((Array*)&local_2d0);
         iVar3 = Array::size();
      }
 while ( iVar6 < iVar3 );
   }

   iVar6 = 0;
   TileSet::get_alternative_level_tile_proxies();
   Array::operator =((Array*)&local_2d8, (Array*)&local_2c8);
   Array::~Array((Array*)&local_2c8);
   iVar3 = Array::size();
   if (0 < iVar3) {
      do {
         Array::operator [](iVar8);
         Variant::operator_cast_to_Array((Variant*)&local_2d0);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_218, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_238, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_258, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_278, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_298, pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_2b8, pVVar5);
         StringName::StringName((StringName*)&local_2c8, "set_alternative_level_tile_proxy", false);
         pSVar2 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_e8, (Variant*)local_2b8);
         Variant::Variant(local_d0, (Variant*)local_298);
         Variant::Variant(local_b8, (Variant*)local_278);
         Variant::Variant(local_a0, (Variant*)local_258);
         Variant::Variant(local_88, (Variant*)local_238);
         Variant::Variant(local_70, (Variant*)local_218);
         local_58 = 0;
         pVVar5 = (Variant*)local_40;
         local_50 = (undefined1[16])0x0;
         auStack_1f0._8_8_ = local_b8;
         auStack_1f0._0_8_ = local_d0;
         local_1f8 = local_e8;
         pVStack_1e0 = local_a0;
         local_1d8 = local_88;
         pVStack_1d0 = local_70;
         EditorUndoRedoManager::add_undo_methodp(pOVar4, pSVar2, (Variant**)&local_2c8, (int)&local_1f8);
         do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar5 != local_e8 );
         if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_2b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_298[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_278[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_258[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_238[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_218[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = iVar6 + 1;
         Array::~Array((Array*)&local_2d0);
         iVar3 = Array::size();
      }
 while ( iVar6 < iVar3 );
   }

   StringName::StringName((StringName*)&local_2c8, "_update_lists", false);
   local_1f8 = (Variant*)0x0;
   auStack_1f0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar4, (StringName*)this, (Variant**)&local_2c8, 0);
   if (Variant::needs_deinit[(int)local_1f8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_2c8, "_update_lists", false);
   local_1f8 = (Variant*)0x0;
   auStack_1f0 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_undo_methodp(pOVar4, (StringName*)this, (Variant**)&local_2c8, 0);
   if (Variant::needs_deinit[(int)local_1f8] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_2c8 != (char*)0x0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar4, 0));
   Array::~Array((Array*)&local_2d8);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* TileProxiesManagerDialog::_delete_selected_bindings() */void TileProxiesManagerDialog::_delete_selected_bindings(TileProxiesManagerDialog *this) {
   Variant *pVVar1;
   long *plVar2;
   char cVar3;
   StringName *pSVar4;
   undefined8 uVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   Object *pOVar9;
   undefined8 uVar10;
   Variant *pVVar11;
   long lVar12;
   int iVar13;
   long in_FS_OFFSET;
   StringName *local_4b0;
   long local_478;
   long local_470;
   Variant local_380[8];
   Variant local_378[8];
   long local_370;
   undefined8 local_368;
   long local_360;
   undefined8 local_358;
   long local_350;
   char *local_348;
   long local_340;
   int local_338[8];
   int local_318[8];
   int local_2f8[8];
   int local_2d8[8];
   Variant *local_2b8[4];
   Variant *local_298;
   undefined1 auStack_290[16];
   undefined8 local_280;
   undefined1 local_278[16];
   Variant local_268[24];
   Variant local_250[24];
   undefined8 local_238;
   undefined1 local_230[16];
   Variant local_220[8];
   Variant *local_218;
   Variant *pVStack_210;
   Variant *local_208;
   Variant *apVStack_200[3];
   undefined8 local_1e8;
   undefined1 local_1e0[16];
   Variant local_1d0[8];
   Variant *local_1c8;
   Variant *pVStack_1c0;
   Variant *local_1b8;
   Variant *pVStack_1b0;
   Variant *local_1a8;
   Variant *pVStack_1a0;
   Variant local_198[24];
   undefined8 local_180;
   undefined1 local_178[16];
   Variant local_168[24];
   Variant local_150[24];
   Variant local_138[24];
   Variant local_120[24];
   undefined8 local_108;
   undefined1 local_100[16];
   Variant local_f0[8];
   Variant local_e8[24];
   Variant local_d0[24];
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar9 = (Object*)EditorUndoRedoManager::get_singleton();
   local_358 = 0;
   local_348 = "";
   local_340 = 0;
   String::parse_latin1((StrRange*)&local_358);
   local_348 = "Remove Tile Proxies";
   local_368 = 0;
   local_340 = 0x13;
   String::parse_latin1((StrRange*)&local_368);
   TTR((String*)&local_348, (String*)&local_368);
   EditorUndoRedoManager::create_action(pOVar9, (String*)&local_348, 0, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_348);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_368);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_358);
   ItemList::get_selected_items();
   if (local_360 != 0) {
      lVar12 = 0;
      do {
         if (*(long*)( local_360 + -8 ) <= lVar12) break;
         iVar8 = (int)(Variant*)&local_298;
         ItemList::get_item_metadata(iVar8);
         iVar6 = Variant::operator_cast_to_int((Variant*)&local_298);
         if (Variant::needs_deinit[(int)local_298] != '\0') {
            Variant::_clear_internal();
         }

         iVar7 = TileSet::get_source_level_tile_proxy((int)*(undefined8*)( this + 0xdc0 ));
         StringName::StringName((StringName*)&local_348, "remove_source_level_tile_proxy", false);
         pSVar4 = *(StringName**)( this + 0xdc0 );
         Variant::Variant((Variant*)&local_298, iVar6);
         local_280 = 0;
         local_278 = (undefined1[16])0x0;
         local_2b8[0] = (Variant*)&local_298;
         EditorUndoRedoManager::add_do_methodp(pOVar9, pSVar4, (Variant**)&local_348, (int)local_2b8);
         if (Variant::needs_deinit[(int)local_280] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_298] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_348 != (char*)0x0 )) {
            StringName::unref();
         }

         StringName::StringName((StringName*)&local_348, "set_source_level_tile_proxy", false);
         pSVar4 = *(StringName**)( this + 0xdc0 );
         pVVar11 = local_220;
         Variant::Variant(local_268, iVar6);
         Variant::Variant(local_250, iVar7);
         local_238 = 0;
         local_230 = (undefined1[16])0x0;
         auStack_290._0_8_ = local_250;
         local_298 = local_268;
         EditorUndoRedoManager::add_undo_methodp(pOVar9, pSVar4, (Variant**)&local_348, iVar8);
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != local_268 );
         if (( StringName::configured != '\0' ) && ( local_348 != (char*)0x0 )) {
            StringName::unref();
         }

         lVar12 = lVar12 + 1;
      }
 while ( local_360 != 0 );
   }

   ItemList::get_selected_items();
   if (local_350 != 0) {
      local_478 = 0;
      do {
         if (*(long*)( local_350 + -8 ) <= local_478) break;
         iVar6 = (int)(Variant*)&local_298;
         ItemList::get_item_metadata(iVar6);
         Variant::operator_cast_to_Array(local_378);
         if (Variant::needs_deinit[(int)local_298] != '\0') {
            Variant::_clear_internal();
         }

         uVar5 = *(undefined8*)( this + 0xdc0 );
         iVar7 = (int)local_378;
         pVVar11 = (Variant*)Array::operator [](iVar7);
         uVar10 = Variant::operator_cast_to_Vector2i(pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar7);
         iVar8 = Variant::operator_cast_to_int(pVVar11);
         TileSet::get_coords_level_tile_proxy((Array*)&local_370, uVar5, iVar8, uVar10);
         pVVar11 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_2b8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_2d8, pVVar11);
         StringName::StringName((StringName*)&local_348, "remove_coords_level_tile_proxy", false);
         pSVar4 = *(StringName**)( this + 0xdc0 );
         Variant::Variant((Variant*)&local_218, (Variant*)local_2d8);
         Variant::Variant((Variant*)apVStack_200, (Variant*)local_2b8);
         local_1e8 = 0;
         local_1e0 = (undefined1[16])0x0;
         pVVar11 = local_1d0;
         auStack_290._0_8_ = (Variant*)apVStack_200;
         local_298 = (Variant*)&local_218;
         EditorUndoRedoManager::add_do_methodp(pOVar9, pSVar4, (Variant**)&local_348, iVar6);
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != (Variant*)&local_218 );
         if (( StringName::configured != '\0' ) && ( local_348 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_2b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = (int)(Array*)&local_370;
         pVVar11 = (Variant*)Array::operator [](iVar6);
         Variant::Variant((Variant*)&local_298, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar6);
         Variant::Variant((Variant*)local_2b8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_2d8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar7);
         Variant::Variant((Variant*)local_2f8, pVVar11);
         StringName::StringName((StringName*)&local_348, "set_coords_level_tile_proxy", false);
         pSVar4 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_168, (Variant*)local_2f8);
         Variant::Variant(local_150, (Variant*)local_2d8);
         Variant::Variant(local_138, (Variant*)local_2b8);
         Variant::Variant(local_120, (Variant*)&local_298);
         local_108 = 0;
         local_100 = (undefined1[16])0x0;
         pVVar11 = local_f0;
         local_218 = local_168;
         pVStack_210 = local_150;
         local_208 = local_138;
         apVStack_200[0] = local_120;
         EditorUndoRedoManager::add_undo_methodp(pOVar9, pSVar4, (Variant**)&local_348, (int)(Variant*)&local_218);
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != local_168 );
         if (( StringName::configured != '\0' ) && ( local_348 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_2f8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_2b8[0]] == '\0') {
            cVar3 = Variant::needs_deinit[(int)local_298];
         }
 else {
            Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[(int)local_298];
         }

         if (cVar3 != '\0') {
            Variant::_clear_internal();
         }

         Array::~Array((Array*)&local_370);
         Array::~Array((Array*)local_378);
         local_478 = local_478 + 1;
      }
 while ( local_350 != 0 );
   }

   local_4b0 = (StringName*)&local_370;
   ItemList::get_selected_items();
   if (local_340 != 0) {
      local_470 = 0;
      do {
         if (*(long*)( local_340 + -8 ) <= local_470) break;
         iVar6 = (int)(Variant*)&local_298;
         ItemList::get_item_metadata(iVar6);
         Variant::operator_cast_to_Array(local_380);
         if (Variant::needs_deinit[(int)local_298] != '\0') {
            Variant::_clear_internal();
         }

         uVar5 = *(undefined8*)( this + 0xdc0 );
         iVar13 = (int)local_380;
         pVVar11 = (Variant*)Array::operator [](iVar13);
         iVar8 = Variant::operator_cast_to_int(pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         uVar10 = Variant::operator_cast_to_Vector2i(pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         iVar7 = Variant::operator_cast_to_int(pVVar11);
         TileSet::get_alternative_level_tile_proxy((Array*)local_378, uVar5, iVar7, uVar10, iVar8);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         Variant::Variant((Variant*)local_2b8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         Variant::Variant((Variant*)local_2d8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         Variant::Variant((Variant*)local_2f8, pVVar11);
         StringName::StringName(local_4b0, "remove_alternative_level_tile_proxy", false);
         pSVar4 = *(StringName**)( this + 0xdc0 );
         Variant::Variant((Variant*)&local_1c8, (Variant*)local_2f8);
         Variant::Variant((Variant*)&pVStack_1b0, (Variant*)local_2d8);
         Variant::Variant(local_198, (Variant*)local_2b8);
         local_178 = (undefined1[16])0x0;
         local_180 = 0;
         auStack_290._8_8_ = local_198;
         auStack_290._0_8_ = (Variant*)&pVStack_1b0;
         local_298 = (Variant*)&local_1c8;
         EditorUndoRedoManager::add_do_methodp(pOVar9, pSVar4, (Variant**)local_4b0, iVar6);
         pVVar11 = local_168;
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != (Variant*)&local_1c8 );
         if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_2f8[0]] == '\0') {
            if (Variant::needs_deinit[local_2d8[0]] == '\0') goto LAB_00103d2d;
            LAB_001041a0:Variant::_clear_internal();
            cVar3 = Variant::needs_deinit[(int)local_2b8[0]];
         }
 else {
            Variant::_clear_internal();
            if (Variant::needs_deinit[local_2d8[0]] != '\0') goto LAB_001041a0;
            LAB_00103d2d:cVar3 = Variant::needs_deinit[(int)local_2b8[0]];
         }

         if (cVar3 != '\0') {
            Variant::_clear_internal();
         }

         iVar6 = (int)(Array*)local_378;
         pVVar11 = (Variant*)Array::operator [](iVar6);
         Variant::Variant((Variant*)&local_298, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar6);
         Variant::Variant((Variant*)local_2b8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar6);
         Variant::Variant((Variant*)local_2d8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         Variant::Variant((Variant*)local_2f8, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         Variant::Variant((Variant*)local_318, pVVar11);
         pVVar11 = (Variant*)Array::operator [](iVar13);
         Variant::Variant((Variant*)local_338, pVVar11);
         StringName::StringName(local_4b0, "set_alternative_level_tile_proxy", false);
         pSVar4 = *(StringName**)( this + 0xdc0 );
         Variant::Variant(local_e8, (Variant*)local_338);
         Variant::Variant(local_d0, (Variant*)local_318);
         Variant::Variant(local_b8, (Variant*)local_2f8);
         Variant::Variant(local_a0, (Variant*)local_2d8);
         Variant::Variant(local_88, (Variant*)local_2b8);
         Variant::Variant(local_70, (Variant*)&local_298);
         local_58 = 0;
         local_50 = (undefined1[16])0x0;
         pVVar11 = (Variant*)local_40;
         local_1c8 = local_e8;
         pVStack_1c0 = local_d0;
         local_1b8 = local_b8;
         pVStack_1b0 = local_a0;
         local_1a8 = local_88;
         pVStack_1a0 = local_70;
         EditorUndoRedoManager::add_undo_methodp(pOVar9, pSVar4, (Variant**)local_4b0, (int)(Variant*)&local_1c8);
         do {
            pVVar1 = pVVar11 + -0x18;
            pVVar11 = pVVar11 + -0x18;
            if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
               Variant::_clear_internal();
            }

         }
 while ( pVVar11 != local_e8 );
         if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_338[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_318[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_2f8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_2b8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[(int)local_298] != '\0') {
            Variant::_clear_internal();
         }

         Array::~Array((Array*)local_378);
         Array::~Array((Array*)local_380);
         local_470 = local_470 + 1;
      }
 while ( local_340 != 0 );
   }

   StringName::StringName(local_4b0, "_update_lists", false);
   local_298 = (Variant*)0x0;
   auStack_290 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_do_methodp(pOVar9, (StringName*)this, (Variant**)local_4b0, 0);
   if (Variant::needs_deinit[(int)local_298] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   StringName::StringName(local_4b0, "_update_lists", false);
   local_298 = (Variant*)0x0;
   auStack_290 = (undefined1[16])0x0;
   EditorUndoRedoManager::add_undo_methodp(pOVar9, (StringName*)this, (Variant**)local_4b0, 0);
   if (Variant::needs_deinit[(int)local_298] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
      StringName::unref();
   }

   EditorUndoRedoManager::commit_action(SUB81(pOVar9, 0));
   lVar12 = local_340;
   *(int*)( this + 0xdb8 ) = *(int*)( this + 0xdb8 ) + 1;
   if (local_340 != 0) {
      LOCK();
      plVar2 = (long*)( local_340 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_340 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   lVar12 = local_350;
   if (local_350 != 0) {
      LOCK();
      plVar2 = (long*)( local_350 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_350 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   lVar12 = local_360;
   if (local_360 != 0) {
      LOCK();
      plVar2 = (long*)( local_360 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_360 = 0;
         Memory::free_static((void*)( lVar12 + -0x10 ), false);
      }

   }

   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_menu_id_pressed(int) */void TileProxiesManagerDialog::_menu_id_pressed(TileProxiesManagerDialog *this, int param_1) {
   if (param_1 != 0) {
      return;
   }

   _delete_selected_bindings(this);
   return;
}
/* TileProxiesManagerDialog::_update_lists() */void TileProxiesManagerDialog::_update_lists(TileProxiesManagerDialog *this) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   Variant *pVVar8;
   bool bVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   long in_FS_OFFSET;
   Array local_158[8];
   Array local_150[8];
   CowData<char32_t> local_148[8];
   undefined8 local_140;
   String local_138[8];
   undefined8 local_130;
   long local_128;
   undefined8 local_120;
   undefined8 local_118;
   CowData<char32_t> local_110[8];
   Object *local_108;
   undefined8 local_100;
   int local_f8[8];
   int local_d8[8];
   int local_b8[8];
   int local_98[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   iVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      ItemList::clear();
   }

   TileSet::get_source_level_tile_proxies();
   while (true) {
      iVar6 = Array::size();
      bVar9 = SUB81((String*)&local_108, 0);
      iVar10 = (int)local_158;
      if (iVar6 <= iVar12) break;
      Array::operator [](iVar10);
      Variant::operator_cast_to_Array((Variant*)local_150);
      iVar6 = (int)local_150;
      pVVar8 = (Variant*)Array::operator [](iVar6);
      Variant::Variant((Variant*)local_58, pVVar8);
      local_108 = (Object*)&_LC38;
      local_118 = 0;
      local_100 = 2;
      String::parse_latin1((StrRange*)&local_118);
      vformat<Variant>(local_110, (StrRange*)&local_118, (Variant*)local_58);
      local_120 = 0;
      local_108 = (Object*)&_LC39;
      local_100 = 3;
      String::parse_latin1((StrRange*)&local_120);
      pVVar8 = (Variant*)Array::operator [](iVar6);
      Variant::Variant((Variant*)local_78, pVVar8);
      local_108 = (Object*)&_LC38;
      local_140 = 0;
      local_100 = 2;
      String::parse_latin1((StrRange*)&local_140);
      vformat<Variant>(local_138, (StrRange*)&local_140, (Variant*)local_78);
      local_108 = (Object*)&_LC40;
      local_130 = 0;
      local_100 = 1;
      String::parse_latin1((StrRange*)&local_130);
      String::rpad((int)(CowData<char32_t>*)&local_128, local_138);
      String::operator +((String*)&local_108, (String*)&local_128);
      String::operator +((String*)local_148, (String*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
      CowData<char32_t>::_unref(local_110);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_108 = (Object*)0x0;
      uVar7 = ItemList::add_item(*(String**)( this + 0xdd8 ), local_148, bVar9);
      if (( ( local_108 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_108,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
      Memory::free_static(pOVar4, false);
   }
;
   iVar12 = iVar12 + 1;
   uVar2 = *(undefined8*)( this + 0xdd8 );
   Array::operator [](iVar6);
   ItemList::set_item_metadata((int)uVar2, (Variant*)(ulong)uVar7);
   CowData<char32_t>::_unref(local_148);
   Array::~Array(local_150);
}
TileSet::get_coords_level_tile_proxies();Array::operator =(local_158, (Array*)&local_108);Array::~Array((Array*)&local_108);iVar12 = 0;while (true) {
   iVar6 = Array::size();
   iVar11 = (int)(String*)&local_108;
   if (iVar6 <= iVar12) break;
   Array::operator [](iVar10);
   Variant::operator_cast_to_Array((Variant*)local_150);
   iVar6 = (int)local_150;
   pVVar8 = (Variant*)Array::operator [](iVar6);
   Variant::Variant((Variant*)local_58, pVVar8);
   pVVar8 = (Variant*)Array::operator [](iVar6);
   Variant::Variant((Variant*)local_78, pVVar8);
   local_118 = 0;
   local_108 = (Object*)0x1078e1;
   local_100 = 6;
   String::parse_latin1((StrRange*)&local_118);
   vformat<Variant,Variant>(local_110, (StrRange*)&local_118, (Variant*)local_78, (Variant*)local_58);
   local_108 = (Object*)&_LC39;
   local_120 = 0;
   local_100 = 3;
   String::parse_latin1((StrRange*)&local_120);
   pVVar8 = (Variant*)Array::operator [](iVar6);
   Variant::Variant((Variant*)local_98, pVVar8);
   pVVar8 = (Variant*)Array::operator [](iVar6);
   Variant::Variant((Variant*)local_b8, pVVar8);
   local_140 = 0;
   local_108 = (Object*)0x1078e1;
   local_100 = 6;
   String::parse_latin1((StrRange*)&local_140);
   vformat<Variant,Variant>(local_138, (StrRange*)&local_140, (Variant*)local_b8, (Variant*)local_98);
   local_108 = (Object*)&_LC40;
   local_130 = 0;
   local_100 = 1;
   String::parse_latin1((StrRange*)&local_130);
   String::rpad((int)(String*)&local_128, local_138);
   String::operator +((String*)&local_108, (String*)&local_128);
   String::operator +((String*)local_148, (String*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   lVar3 = local_128;
   if (local_128 != 0) {
      LOCK();
      plVar1 = (long*)( local_128 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_128 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_138);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   CowData<char32_t>::_unref(local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_108 = (Object*)0x0;
   uVar7 = ItemList::add_item(*(String**)( this + 0xde0 ), local_148, bVar9);
   if (( ( local_108 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_108,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
;uVar2 = *(undefined8*)( this + 0xde0 );Array::slice(iVar11, iVar6, 0, true);Variant::Variant((Variant*)local_58, (Array*)&local_108);ItemList::set_item_metadata((int)uVar2, (Variant*)(ulong)uVar7);if (Variant::needs_deinit[local_58[0]] != '\0') {
   Variant::_clear_internal();
}
Array::~Array((Array*)&local_108);CowData<char32_t>::_unref(local_148);Array::~Array(local_150);iVar12 = iVar12 + 1;}TileSet::get_alternative_level_tile_proxies();Array::operator =(local_158, (Array*)&local_108);Array::~Array((Array*)&local_108);iVar12 = 0;do if (Variant::needs_deinit[local_58[0]] != '\0') iVar12 = iVar12 + 1; while ( true );}/* TileProxiesManagerDialog::update_tile_set(Ref<TileSet>) */void TileProxiesManagerDialog::update_tile_set(TileProxiesManagerDialog *this, long *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   pOVar1 = (Object*)*param_2;
   if (pOVar1 != (Object*)0x0) {
      pOVar2 = *(Object**)( this + 0xdc0 );
      if (pOVar1 != pOVar2) {
         *(Object**)( this + 0xdc0 ) = pOVar1;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0xdc0 ) = 0;
         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      *(undefined4*)( this + 0xdb8 ) = 0;
      _update_lists(this);
      return;
   }

   _err_print_error("update_tile_set", "editor/plugins/tiles/tile_proxies_manager_dialog.cpp", 0x141, "Condition \"p_tile_set.is_null()\" is true.", 0, 0);
   return;
}
/* TileProxiesManagerDialog::TileProxiesManagerDialog() */void TileProxiesManagerDialog::TileProxiesManagerDialog(TileProxiesManagerDialog *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   Object *pOVar4;
   char cVar5;
   BoxContainer *this_00;
   Label *pLVar6;
   ItemList *pIVar7;
   PopupMenu *this_01;
   CallableCustom *this_02;
   HSeparator *pHVar8;
   BoxContainer *pBVar9;
   BoxContainer *pBVar10;
   EditorPropertyInteger *pEVar11;
   EditorPropertyVector2i *pEVar12;
   Button *pBVar13;
   bool bVar14;
   long in_FS_OFFSET;
   long local_70;
   long local_68[2];
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ConfirmationDialog::ConfirmationDialog((ConfirmationDialog*)this);
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 3528 ) ) = 4294967295;
   }

   *(undefined***)this = &PTR__initialize_classv_00111bf8;
   *(undefined4*)( this + 0xdb8 ) = 0;
   *(undefined8*)( this + 0xdc0 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 3544 ) ) = (undefined1[16])0;
   }

   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x107903;
   local_70 = 0;
   local_50 = 0x17;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::set_process_unhandled_key_input(SUB81(this, 0));
   *(undefined8*)( this + 0xdd0 ) = 0;
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, true);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_00111608;
   postinitialize_handler((Object*)this_00);
   Control::set_h_size_flags(this_00, 3);
   Control::set_v_size_flags(this_00, 3);
   Node::add_child(this, this_00, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_58 = (Object*)0x0;
   Label::Label(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x10791b;
   local_70 = 0;
   local_50 = 0x14;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, pLVar6, 0, 0);
   pIVar7 = (ItemList*)operator_new(0xb80, "");
   ItemList::ItemList(pIVar7);
   postinitialize_handler((Object*)pIVar7);
   *(ItemList**)( this + 0xdd8 ) = pIVar7;
   Node::set_auto_translate_mode(pIVar7, 2);
   Control::set_v_size_flags(*(undefined8*)( this + 0xdd8 ), 3);
   ItemList::set_select_mode(*(undefined8*)( this + 0xdd8 ), 1);
   ItemList::set_allow_rmb_select(SUB81(*(undefined8*)( this + 0xdd8 ), 0));
   plVar1 = *(long**)( this + 0xdd8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,int,Vector2,MouseButton,Object*>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_int_Vector2_MouseButton_Object_ptr*)"&TileProxiesManagerDialog::_right_clicked");
   Callable::bind<ItemList*>((ItemList*)local_68);
   StringName::StringName((StringName*)&local_70, "item_clicked", false);
   ( *pcVar2 )(plVar1, (StrRange*)&local_70, (StrRange*)local_68, 0);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this_00, *(undefined8*)( this + 0xdd8 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_58 = (Object*)0x0;
   Label::Label(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x10793d;
   local_70 = 0;
   local_50 = 0x14;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, pLVar6, 0, 0);
   pIVar7 = (ItemList*)operator_new(0xb80, "");
   ItemList::ItemList(pIVar7);
   postinitialize_handler((Object*)pIVar7);
   *(ItemList**)( this + 0xde0 ) = pIVar7;
   Node::set_auto_translate_mode(pIVar7, 2);
   Control::set_v_size_flags(*(undefined8*)( this + 0xde0 ), 3);
   ItemList::set_select_mode(*(undefined8*)( this + 0xde0 ), 1);
   ItemList::set_allow_rmb_select(SUB81(*(undefined8*)( this + 0xde0 ), 0));
   plVar1 = *(long**)( this + 0xde0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,int,Vector2,MouseButton,Object*>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_int_Vector2_MouseButton_Object_ptr*)"&TileProxiesManagerDialog::_right_clicked");
   Callable::bind<ItemList*>((ItemList*)local_68);
   StringName::StringName((StringName*)&local_70, "item_clicked", false);
   ( *pcVar2 )(plVar1, (StrRange*)&local_70, (StrRange*)local_68, 0);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this_00, *(undefined8*)( this + 0xde0 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_58 = (Object*)0x0;
   Label::Label(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x107952;
   local_70 = 0;
   local_50 = 0x19;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, pLVar6, 0, 0);
   pIVar7 = (ItemList*)operator_new(0xb80, "");
   ItemList::ItemList(pIVar7);
   postinitialize_handler((Object*)pIVar7);
   *(ItemList**)( this + 0xde8 ) = pIVar7;
   Node::set_auto_translate_mode(pIVar7, 2);
   Control::set_v_size_flags(*(undefined8*)( this + 0xde8 ), 3);
   ItemList::set_select_mode(*(undefined8*)( this + 0xde8 ), 1);
   ItemList::set_allow_rmb_select(SUB81(*(undefined8*)( this + 0xde8 ), 0));
   plVar1 = *(long**)( this + 0xde8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,int,Vector2,MouseButton,Object*>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_int_Vector2_MouseButton_Object_ptr*)"&TileProxiesManagerDialog::_right_clicked");
   Callable::bind<ItemList*>((ItemList*)local_68);
   StringName::StringName((StringName*)&local_70, "item_clicked", false);
   ( *pcVar2 )(plVar1, (StrRange*)&local_70, (StrRange*)local_68);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this_00, *(undefined8*)( this + 0xde8 ), 0);
   this_01 = (PopupMenu*)operator_new(0xfe0, "");
   PopupMenu::PopupMenu(this_01);
   postinitialize_handler((Object*)this_01);
   *(PopupMenu**)( this + 0xe20 ) = this_01;
   local_68[0] = 0;
   local_58 = (Object*)0x10796c;
   local_50 = 0xe;
   String::parse_latin1((StrRange*)local_68);
   ED_GET_SHORTCUT((String*)&local_58);
   PopupMenu::add_shortcut(this_01, (int)(String*)&local_58, true, false);
   if (local_58 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_58;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_58);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   plVar1 = *(long**)( this + 0xe20 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   this_02 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_02);
   *(TileProxiesManagerDialog**)( this_02 + 0x28 ) = this;
   *(undefined1(*) [16])( this_02 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( this_02 + 0x20 ) = &_LC16;
   *(undefined8*)( this_02 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined***)this_02 = &PTR_hash_00111f00;
   *(undefined8*)( this_02 + 0x30 ) = uVar3;
   *(code**)( this_02 + 0x38 ) = _menu_id_pressed;
   *(undefined8*)( this_02 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this_02, (int)this_02 + 0x28);
   *(char**)( this_02 + 0x20 ) = "TileProxiesManagerDialog::_menu_id_pressed";
   Callable::Callable((Callable*)&local_58, this_02);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x240, (String*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this, *(undefined8*)( this + 0xe20 ), 0, 0);
   pHVar8 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(pHVar8);
   postinitialize_handler((Object*)pHVar8);
   Node::add_child(this_00, pHVar8, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_58 = (Object*)0x0;
   Label::Label(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x10797b;
   local_70 = 0;
   local_50 = 0x15;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, pLVar6, 0, 0);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00111290;
   postinitialize_handler((Object*)pBVar9);
   Node::add_child(this_00, pBVar9, 0, 0);
   pBVar10 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar10, true);
   pBVar10[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar10 = &PTR__initialize_classv_00111608;
   postinitialize_handler((Object*)pBVar10);
   Control::set_h_size_flags(pBVar10, 3);
   Node::add_child(pBVar9, pBVar10, 0, 0);
   pEVar11 = (EditorPropertyInteger*)operator_new(0xb60, "");
   EditorPropertyInteger::EditorPropertyInteger(pEVar11);
   postinitialize_handler((Object*)pEVar11);
   *(EditorPropertyInteger**)( this + 0xdf0 ) = pEVar11;
   local_68[0] = 0;
   local_58 = (Object*)&_LC16;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x107991;
   local_70 = 0;
   local_50 = 0xb;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   EditorProperty::set_label((String*)pEVar11);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pOVar4 = *(Object**)( this + 0xdf0 );
   StringName::StringName((StringName*)&local_58, "from_source", false);
   EditorProperty::set_object_and_property(pOVar4, (StringName*)this);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar1 = *(long**)( this + 0xdf0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_String_ptr_Variant_ptr_String_ptr_bool*)"&TileProxiesManagerDialog::_property_changed");
   StringName::StringName((StringName*)local_68, "property_changed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (String*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   EditorProperty::set_selectable(SUB81(*(undefined8*)( this + 0xdf0 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xdf0 ), 3);
   local_58 = (Object*)0x0;
   EditorPropertyInteger::setup(*(long*)( this + 0xdf0 ), -1, 99999, true, false, true, (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   Node::add_child(pBVar10, *(undefined8*)( this + 0xdf0 ), 0, 0);
   pEVar12 = (EditorPropertyVector2i*)operator_new(0xb90, "");
   EditorPropertyVector2i::EditorPropertyVector2i(pEVar12, false);
   postinitialize_handler((Object*)pEVar12);
   *(EditorPropertyVector2i**)( this + 0xdf8 ) = pEVar12;
   local_68[0] = 0;
   local_58 = (Object*)&_LC16;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x1079ae;
   local_70 = 0;
   local_50 = 0xb;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   EditorProperty::set_label((String*)pEVar12);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pOVar4 = *(Object**)( this + 0xdf8 );
   StringName::StringName((StringName*)&local_58, "from_coords", false);
   EditorProperty::set_object_and_property(pOVar4, (StringName*)this);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar1 = *(long**)( this + 0xdf8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_String_ptr_Variant_ptr_String_ptr_bool*)"&TileProxiesManagerDialog::_property_changed");
   StringName::StringName((StringName*)local_68, "property_changed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (String*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   EditorProperty::set_selectable(SUB81(*(undefined8*)( this + 0xdf8 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xdf8 ), 3);
   local_58 = (Object*)0x0;
   bVar14 = SUB81((String*)&local_58, 0);
   EditorPropertyVectorN::setup(_LC60, _LC59, _LC58, SUB81(*(undefined8*)( this + 0xdf8 ), 0), true, (String*)0x0, bVar14, false);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CanvasItem::hide();
   Node::add_child(pBVar10, *(undefined8*)( this + 0xdf8 ), 0, 0);
   pEVar11 = (EditorPropertyInteger*)operator_new(0xb60, "");
   EditorPropertyInteger::EditorPropertyInteger(pEVar11);
   postinitialize_handler((Object*)pEVar11);
   *(EditorPropertyInteger**)( this + 0xe00 ) = pEVar11;
   local_68[0] = 0;
   local_58 = (Object*)&_LC16;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x1079ba;
   local_70 = 0;
   local_50 = 0x10;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   EditorProperty::set_label((String*)pEVar11);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pOVar4 = *(Object**)( this + 0xe00 );
   StringName::StringName((StringName*)&local_58, "from_alternative", false);
   EditorProperty::set_object_and_property(pOVar4, (StringName*)this);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar1 = *(long**)( this + 0xe00 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_String_ptr_Variant_ptr_String_ptr_bool*)"&TileProxiesManagerDialog::_property_changed");
   StringName::StringName((StringName*)local_68, "property_changed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (String*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   EditorProperty::set_selectable(SUB81(*(undefined8*)( this + 0xe00 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xe00 ), 3);
   local_58 = (Object*)0x0;
   EditorPropertyInteger::setup(*(long*)( this + 0xe00 ), -1, 99999, true, false, true, (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CanvasItem::hide();
   Node::add_child(pBVar10, *(undefined8*)( this + 0xe00 ), 0, 0);
   pBVar10 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar10, true);
   pBVar10[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar10 = &PTR__initialize_classv_00111608;
   postinitialize_handler((Object*)pBVar10);
   Control::set_h_size_flags(pBVar10, 3);
   Node::add_child(pBVar9, pBVar10, 0, 0);
   pEVar11 = (EditorPropertyInteger*)operator_new(0xb60, "");
   EditorPropertyInteger::EditorPropertyInteger(pEVar11);
   postinitialize_handler((Object*)pEVar11);
   *(EditorPropertyInteger**)( this + 0xe08 ) = pEVar11;
   local_68[0] = 0;
   local_58 = (Object*)&_LC16;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x1079cb;
   local_70 = 0;
   local_50 = 9;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   EditorProperty::set_label((String*)pEVar11);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pOVar4 = *(Object**)( this + 0xe08 );
   StringName::StringName((StringName*)&local_58, "to_source", false);
   EditorProperty::set_object_and_property(pOVar4, (StringName*)this);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar1 = *(long**)( this + 0xe08 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_String_ptr_Variant_ptr_String_ptr_bool*)"&TileProxiesManagerDialog::_property_changed");
   StringName::StringName((StringName*)local_68, "property_changed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (String*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   EditorProperty::set_selectable(SUB81(*(undefined8*)( this + 0xe08 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xe08 ), 3);
   local_58 = (Object*)0x0;
   EditorPropertyInteger::setup(*(long*)( this + 0xe08 ), -1, 99999, true, false, true, (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   Node::add_child(pBVar10, *(undefined8*)( this + 0xe08 ), 0, 0);
   pEVar12 = (EditorPropertyVector2i*)operator_new(0xb90, "");
   EditorPropertyVector2i::EditorPropertyVector2i(pEVar12, false);
   postinitialize_handler((Object*)pEVar12);
   *(EditorPropertyVector2i**)( this + 0xe10 ) = pEVar12;
   local_68[0] = 0;
   local_58 = (Object*)&_LC16;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x1079d5;
   local_70 = 0;
   local_50 = 9;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   EditorProperty::set_label((String*)pEVar12);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pOVar4 = *(Object**)( this + 0xe10 );
   StringName::StringName((StringName*)&local_58, "to_coords", false);
   EditorProperty::set_object_and_property(pOVar4, (StringName*)this);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar1 = *(long**)( this + 0xe10 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_String_ptr_Variant_ptr_String_ptr_bool*)"&TileProxiesManagerDialog::_property_changed");
   StringName::StringName((StringName*)local_68, "property_changed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (String*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   EditorProperty::set_selectable(SUB81(*(undefined8*)( this + 0xe10 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xe10 ), 3);
   local_58 = (Object*)0x0;
   EditorPropertyVectorN::setup(_LC60, _LC59, _LC58, SUB81(*(undefined8*)( this + 0xe10 ), 0), true, (String*)0x0, bVar14, false);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CanvasItem::hide();
   Node::add_child(pBVar10, *(undefined8*)( this + 0xe10 ), 0, 0);
   pEVar11 = (EditorPropertyInteger*)operator_new(0xb60, "");
   EditorPropertyInteger::EditorPropertyInteger(pEVar11);
   postinitialize_handler((Object*)pEVar11);
   *(EditorPropertyInteger**)( this + 0xe18 ) = pEVar11;
   local_68[0] = 0;
   local_58 = (Object*)&_LC16;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x1079df;
   local_70 = 0;
   local_50 = 0xe;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   EditorProperty::set_label((String*)pEVar11);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pOVar4 = *(Object**)( this + 0xe18 );
   StringName::StringName((StringName*)&local_58, "to_alternative", false);
   EditorProperty::set_object_and_property(pOVar4, (StringName*)this);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar1 = *(long**)( this + 0xe18 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void_String_ptr_Variant_ptr_String_ptr_bool*)"&TileProxiesManagerDialog::_property_changed");
   StringName::StringName((StringName*)local_68, "property_changed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (String*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   EditorProperty::set_selectable(SUB81(*(undefined8*)( this + 0xe18 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xe18 ), 3);
   local_58 = (Object*)0x0;
   EditorPropertyInteger::setup(*(long*)( this + 0xe18 ), -1, 99999, true, false, true, (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CanvasItem::hide();
   Node::add_child(pBVar10, *(undefined8*)( this + 0xe18 ), 0, 0);
   pBVar13 = (Button*)operator_new(0xc10, "");
   local_58 = (Object*)0x0;
   Button::Button(pBVar13, (String*)&local_58);
   postinitialize_handler((Object*)pBVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)&_LC65;
   local_70 = 0;
   local_50 = 3;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::set_text((String*)pBVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(pBVar13, 4);
   pcVar2 = *(code**)( *(long*)pBVar13 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void*)"&TileProxiesManagerDialog::_add_button_pressed");
   ( *pcVar2 )(pBVar13, SceneStringNames::singleton + 0x238, (String*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this_00, pBVar13, 0, 0);
   pHVar8 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(pHVar8);
   postinitialize_handler((Object*)pHVar8);
   Node::add_child(this_00, pHVar8, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_58 = (Object*)0x0;
   Label::Label(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x1079f2;
   local_70 = 0;
   local_50 = 0xf;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, pLVar6, 0, 0);
   pBVar9 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar9, false);
   pBVar9[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar9 = &PTR__initialize_classv_00111290;
   postinitialize_handler((Object*)pBVar9);
   Node::add_child(this_00, pBVar9, 0, 0);
   pBVar13 = (Button*)operator_new(0xc10, "");
   local_58 = (Object*)0x0;
   Button::Button(pBVar13, (String*)&local_58);
   postinitialize_handler((Object*)pBVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x107a02;
   local_70 = 0;
   local_50 = 0xd;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::set_text((String*)pBVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(pBVar13, 4);
   pcVar2 = *(code**)( *(long*)pBVar13 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void*)"&TileProxiesManagerDialog::_clear_invalid_button_pressed");
   ( *pcVar2 )(pBVar13, SceneStringNames::singleton + 0x238, (String*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(pBVar9, pBVar13, 0, 0);
   pBVar13 = (Button*)operator_new(0xc10, "");
   local_58 = (Object*)0x0;
   Button::Button(pBVar13, (String*)&local_58);
   postinitialize_handler((Object*)pBVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)&_LC16;
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = (Object*)0x107a10;
   local_70 = 0;
   local_50 = 9;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::set_text((String*)pBVar13);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(pBVar13, 4);
   pcVar2 = *(code**)( *(long*)pBVar13 + 0x108 );
   create_custom_callable_function_pointer<TileProxiesManagerDialog>((TileProxiesManagerDialog*)&local_58, (char*)this, (_func_void*)"&TileProxiesManagerDialog::_clear_all_button_pressed");
   ( *pcVar2 )(pBVar13, SceneStringNames::singleton + 0x238, (String*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(pBVar9, pBVar13, 0, 0);
   pHVar8 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(pHVar8);
   postinitialize_handler((Object*)pHVar8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Node::add_child(this_00, pHVar8, 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_bind_methods() */void TileProxiesManagerDialog::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_78[2];
   long *local_68;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)local_78, (char***)"_update_lists", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar4 = create_method_bind<TileProxiesManagerDialog>(_update_lists);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_68[-1];
         local_68 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_78, (char***)"_unhandled_key_input", 0);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   pMVar4 = create_method_bind<TileProxiesManagerDialog,Ref<InputEvent>>(_unhandled_key_input);
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_78, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar3 = local_68;
   if (local_68 != (long*)0x0) {
      LOCK();
      plVar5 = local_68 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_68 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_68[-1];
         local_68 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
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
   return (uint)CONCAT71(0x1122, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1123, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* ConfirmationDialog::_property_can_revertv(StringName const&) const */undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* TileProxiesManagerDialog::_property_can_revertv(StringName const&) const */undefined8 TileProxiesManagerDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* TileProxiesManagerDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 TileProxiesManagerDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void> *this) {
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int, Vector2, MouseButton,
   Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*> *this) {
   return;
}
/* MethodBindT<Ref<InputEvent> >::_gen_argument_type(int) const */byte MethodBindT<Ref<InputEvent>>::_gen_argument_type(MethodBindT<Ref<InputEvent>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<InputEvent> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<InputEvent>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}
/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void>::get_argument_count(CallableCustomMethodPointer<TileProxiesManagerDialog,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, String const&, Variant const&, String
   const&, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool>::get_argument_count(CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool> *this, bool *param_1) {
   *param_1 = true;
   return 4;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void,int>::get_argument_count(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int, Vector2, MouseButton,
   Object*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*>::get_argument_count(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*> *this, bool *param_1) {
   *param_1 = true;
   return 4;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int, Vector2, MouseButton,
   Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001120b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001120b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<InputEvent> >::~MethodBindT() */void MethodBindT<Ref<InputEvent>>::~MethodBindT(MethodBindT<Ref<InputEvent>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112110;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<InputEvent> >::~MethodBindT() */void MethodBindT<Ref<InputEvent>>::~MethodBindT(MethodBindT<Ref<InputEvent>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00112110;
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
   if ((code*)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   *(undefined***)this = &PTR__initialize_classv_00111980;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   *(undefined***)this = &PTR__initialize_classv_00111980;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xdb8);
   return;
}
/* ConfirmationDialog::_getv(StringName const&, Variant&) const */undefined8 ConfirmationDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_00116010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ConfirmationDialog::_setv(StringName const&, Variant const&) */undefined8 ConfirmationDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00116018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, String const&, Variant const&, String
   const&, bool>::get_object() const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool>::get_object(CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool> *this) {
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
         goto LAB_00107b0d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00107b0d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00107b0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void>::get_object() const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void>::get_object(CallableCustomMethodPointer<TileProxiesManagerDialog,void> *this) {
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
         goto LAB_00107c0d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00107c0d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00107c0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int, Vector2, MouseButton,
   Object*>::get_object() const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*>::get_object(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*> *this) {
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
         goto LAB_00107d0d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00107d0d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00107d0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<TileProxiesManagerDialog,void,int>::get_object(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int> *this) {
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
         goto LAB_00107e0d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00107e0d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00107e0d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_00116020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* TileProxiesManagerDialog::_validate_propertyv(PropertyInfo&) const */void TileProxiesManagerDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_00116020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00116028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00116028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00116030 != CanvasItem::_set) {
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
      if ((code*)PTR__set_00116030 != CanvasItem::_set) {
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
      if ((code*)PTR__notification_00116038 != Window::_notification) {
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

   if ((code*)PTR__notification_00116038 == Window::_notification) {
      return;
   }

   AcceptDialog::_notification(iVar1);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001082d8) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00116040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00108348) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00116040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1122, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1123, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1123, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1122, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1123, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1123, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* TileProxiesManagerDialog::~TileProxiesManagerDialog() */void TileProxiesManagerDialog::~TileProxiesManagerDialog(TileProxiesManagerDialog *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00111bf8;
   if (*(long*)( this + 0xdc0 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xdc0 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00111980;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* TileProxiesManagerDialog::~TileProxiesManagerDialog() */void TileProxiesManagerDialog::~TileProxiesManagerDialog(TileProxiesManagerDialog *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00111bf8;
   if (*(long*)( this + 0xdc0 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xdc0 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00111980;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xe28);
   return;
}
/* TileProxiesManagerDialog::is_class_ptr(void*) const */uint TileProxiesManagerDialog::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1122, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &ConfirmationDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1122, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1123, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* TileProxiesManagerDialog::_notificationv(int, bool) */void TileProxiesManagerDialog::_notificationv(TileProxiesManagerDialog *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00116038 != Window::_notification) {
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

   if ((code*)PTR__notification_00116038 == Window::_notification) {
      return;
   }

   AcceptDialog::_notification(iVar1);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108710;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108710:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108770;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108770:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001087d0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001087d0:Control::~Control((Control*)this);
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
         if (StringName::configured == '\0') goto LAB_00108840;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108840:Control::~Control((Control*)this);
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
         LAB_00108913:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108913;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0010897e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0010897e:return &_get_class_namev();
}
/* TileProxiesManagerDialog::_get_class_namev() const */undefined8 *TileProxiesManagerDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108a03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108a03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TileProxiesManagerDialog");
         goto LAB_00108a6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "TileProxiesManagerDialog");
   LAB_00108a6e:return &_get_class_namev();
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
         LAB_00108af3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108af3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_00108b5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_00108b5e:return &_get_class_namev();
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
         LAB_00108be3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108be3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
         goto LAB_00108c4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
   LAB_00108c4e:return &_get_class_namev();
}
/* TileProxiesManagerDialog::get_class() const */void TileProxiesManagerDialog::get_class(void) {
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
/* WARNING: Removing unreachable block (ram,0x00109110) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00116048 != Container::_notification) {
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

   if ((code*)PTR__notification_00116048 == Container::_notification) {
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
/* TileProxiesManagerDialog::_setv(StringName const&, Variant const&) */void TileProxiesManagerDialog::_setv(TileProxiesManagerDialog *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   if ((code*)PTR__set_00116018 != Object::_set) {
      cVar1 = Window::_set((StringName*)this, (Variant*)param_1);
      if (cVar1 != '\0') {
         return;
      }

   }

   _set(this, param_1, param_2);
   return;
}
/* TileProxiesManagerDialog::_getv(StringName const&, Variant&) const */void TileProxiesManagerDialog::_getv(TileProxiesManagerDialog *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   cVar1 = _get(this, param_1, param_2);
   if (( cVar1 == '\0' ) && ( (code*)PTR__get_00116010 != Object::_get )) {
      Window::_get((StringName*)this, (Variant*)param_1);
      return;
   }

   return;
}
/* Callable create_custom_callable_function_pointer<TileProxiesManagerDialog, int, Vector2,
   MouseButton, Object*>(TileProxiesManagerDialog*, char const*, void
   (TileProxiesManagerDialog::*)(int, Vector2, MouseButton, Object*)) */TileProxiesManagerDialog *create_custom_callable_function_pointer<TileProxiesManagerDialog,int,Vector2,MouseButton,Object*>(TileProxiesManagerDialog *param_1, char *param_2, _func_void_int_Vector2_MouseButton_Object_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00111e70;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_int_Vector2_MouseButton_Object_ptr**)( this + 0x20 ) = param_3 + 1;
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
/* Callable create_custom_callable_function_pointer<TileProxiesManagerDialog, String const&, Variant
   const&, String const&, bool>(TileProxiesManagerDialog*, char const*, void
   (TileProxiesManagerDialog::*)(String const&, Variant const&, String const&, bool)) */TileProxiesManagerDialog *create_custom_callable_function_pointer<TileProxiesManagerDialog,String_const&,Variant_const&,String_const&,bool>(TileProxiesManagerDialog *param_1, char *param_2, _func_void_String_ptr_Variant_ptr_String_ptr_bool *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00111f90;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_String_ptr_Variant_ptr_String_ptr_bool**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable
   create_custom_callable_function_pointer<TileProxiesManagerDialog>(TileProxiesManagerDialog*, char
   const*, void (TileProxiesManagerDialog::*)()) */TileProxiesManagerDialog *create_custom_callable_function_pointer<TileProxiesManagerDialog>(TileProxiesManagerDialog *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00112020;
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
/* WARNING: Removing unreachable block (ram,0x00109728) *//* String vformat<Variant>(String const&, Variant const) */undefined8 *vformat<Variant>(undefined8 *param_1, bool *param_2, Variant *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00109a60) *//* String vformat<Variant, Variant>(String const&, Variant const, Variant const) */undefined8 *vformat<Variant,Variant>(undefined8 *param_1, bool *param_2, Variant *param_3, Variant *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   long in_FS_OFFSET;
   Array local_d8[8];
   undefined8 local_d0[9];
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
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, param_2);
   *param_1 = local_d0[0];
   local_d0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
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
/* WARNING: Removing unreachable block (ram,0x00109d60) *//* String vformat<Variant, Variant, Variant>(String const&, Variant const, Variant const, Variant
   const) */undefined8 *vformat<Variant,Variant,Variant>(undefined8 *param_1, bool *param_2, Variant *param_3, Variant *param_4, Variant *param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
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
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   local_f0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
   pVVar2 = local_48;
   Array::~Array(local_f8);
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

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

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
            if (pvVar5 == (void*)0x0) goto LAB_0010a044;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010a044:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<TileProxiesManagerDialog,void>::call(CallableCustomMethodPointer<TileProxiesManagerDialog,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010a28f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010a28f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010a268. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010a351;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010a28f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC79, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a351:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int>::call(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010a518;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_0010a518;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC80;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010a4c7. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_0010a5da;
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
      LAB_0010a518:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC79, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a5da:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int, Vector2, MouseButton,
   Object*>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*>::call(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   ulong uVar7;
   Object *pOVar8;
   uint uVar9;
   ulong *puVar10;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar11;
   undefined8 uVar12;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar7 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar7 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_58 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010a849;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_0010a849;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 5) {
         if (param_2 == 4) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[3], 0x18);
            if (cVar4 == '\0') {
               LAB_0010a72f:uVar3 = _LC81;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = param_1[3];
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar8 = Variant::operator_cast_to_Object_(this_00);
               if (( pOVar8 == (Object*)0x0 ) && ( pOVar6 != (Object*)0x0 )) goto LAB_0010a72f;
            }

            pOVar6 = Variant::operator_cast_to_Object_(param_1[3]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[2], 2);
            uVar3 = _LC82;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar7 = Variant::operator_cast_to_long(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 5);
            uVar3 = _LC83;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            uVar12 = Variant::operator_cast_to_Vector2(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar3 = _LC80;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010a822. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(uVar12, (long*)( lVar1 + lVar2 ), iVar5, uVar7 & 0xffffffff, pOVar6);
               return;
            }

            goto LAB_0010a93a;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 4;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 4;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010a849:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC79, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a93a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<TileProxiesManagerDialog, void, String const&, Variant const&, String
   const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool>::call(CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
   CowData<char32_t> local_80[8];
   CowData<char32_t> local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_68 >> 8;
         local_68 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_68 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar7[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar8 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 5) {
               if (param_2 == 4) {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[3], 1);
                  uVar4 = _LC84;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  bVar9 = Variant::operator_cast_to_bool(param_1[3]);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[2], 4);
                  uVar4 = _LC85;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_70);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0);
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = 1;
                  }

                  Variant::Variant((Variant*)local_58, param_1[1]);
                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar4 = _LC87;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_68);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_68, (Variant*)local_58, (Variant*)&local_70, bVar9);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               }
 else {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 4;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 4;
            }

            goto LAB_0010aa0c;
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
   local_68 = "\', can\'t call method.";
   local_60 = 0x15;
   String::parse_latin1((StrRange*)&local_70);
   uitos((ulong)local_80);
   operator+((char *)
   local_78,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_68, (String*)local_78);
   _err_print_error(&_LC79, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref(local_78);
   CowData<char32_t>::_unref(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   LAB_0010aa0c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<Ref<InputEvent> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<InputEvent>>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010acd9;
   local_78 = 0;
   local_68 = "InputEvent";
   local_80 = 0;
   local_60._0_8_ = 10;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ae95:local_40 = 6;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_0010ae95;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar4 = local_68._0_4_;
   if (*(long*)( puVar4 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
   }

   if (*(long*)( puVar4 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar4 + 4 ) = uVar2;
   }

   puVar4[6] = local_50;
   if (*(long*)( puVar4 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( puVar4 + 8 ) = lVar3;
   }

   puVar4[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010acd9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar4;
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
                  if ((code*)PTR__bind_methods_00116060 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Viewport";
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
         if ((code*)PTR__bind_compatibility_methods_00116050 != Object::_bind_compatibility_methods) {
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
      if ((code*)PTR__bind_methods_00116058 != AcceptDialog::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_00116060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_00116068 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00116070 != Container::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_00116060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_00116068 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00116070 != Container::_bind_methods) {
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
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010c1af;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c1af:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010c263;
   }

   cVar6 = String::operator ==(param_1, "Node");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010c30f;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010c30f:cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010c263;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010c263:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010c3ff;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c3ff:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010c4b3;
   }

   cVar6 = String::operator ==(param_1, "Window");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010c4b3;
      }

      cVar6 = String::operator ==(param_1, "Viewport");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Node::is_class((Node*)this, param_1);
            return uVar8;
         }

         goto LAB_0010c5c5;
      }

   }

   LAB_0010c4b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010c5c5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ConfirmationDialog::is_class(String const&) const */undefined8 ConfirmationDialog::is_class(ConfirmationDialog *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010c63f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c63f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010c6f3;
   }

   cVar6 = String::operator ==(param_1, "ConfirmationDialog");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010c7af;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010c7af:cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010c6f3;
      }

      cVar6 = String::operator ==(param_1, "AcceptDialog");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Window::is_class((Window*)this, param_1);
            return uVar7;
         }

         goto LAB_0010c821;
      }

   }

   LAB_0010c6f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010c821:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* TileProxiesManagerDialog::is_class(String const&) const */undefined8 TileProxiesManagerDialog::is_class(TileProxiesManagerDialog *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010c89f;
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
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c89f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010c953;
   }

   cVar5 = String::operator ==(param_1, "TileProxiesManagerDialog");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = ConfirmationDialog::is_class((ConfirmationDialog*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010c953:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010ca1f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010ca1f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010cad3;
   }

   cVar6 = String::operator ==(param_1, "Control");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010cad3;
      }

      cVar6 = String::operator ==(param_1, "CanvasItem");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Node::is_class((Node*)this, param_1);
            return uVar8;
         }

         goto LAB_0010cbe5;
      }

   }

   LAB_0010cad3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010cbe5:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar5 = *(long*)( lVar2 + 0x20 );
      if (lVar5 == 0) {
         local_60 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010cc5f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010cc5f:cVar6 = String::operator ==(param_1, (String*)&local_60);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (cVar6 != '\0') goto LAB_0010cd13;
   }

   cVar6 = String::operator ==(param_1, "BoxContainer");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         }
 else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010cd13;
      }

      cVar6 = String::operator ==(param_1, "Container");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Control::is_class((Control*)this, param_1);
            return uVar8;
         }

         goto LAB_0010ce25;
      }

   }

   LAB_0010cd13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010ce25:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010ce9f;
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
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010ce9f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010cf53;
   }

   cVar5 = String::operator ==(param_1, "VBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010cf53:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
            plVar1 = (long*)( *(long*)( lVar3 + 0x10 ) + -0x10 );
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               do {
                  lVar4 = *plVar1;
                  if (lVar4 == 0) goto LAB_0010d01f;
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
               if (lVar6 != -1) {
                  local_60 = *(long*)( lVar3 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010d01f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010d0d3;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010d0d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   local_78 = &_LC90;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC90;
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

         goto LAB_0010d28c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d28c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

         goto LAB_0010d4f1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d4f1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010d7a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010d7a1:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00116078 != Object::_get_property_list) {
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

         goto LAB_0010da71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010da71:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00116080 != CanvasItem::_get_property_list) {
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

         goto LAB_0010dd41;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010dd41:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010dff1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010dff1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010e2a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010e2a1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010e551;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010e551:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010e801;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010e801:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00116088 != Object::_get_property_list) {
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

         goto LAB_0010ead1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010ead1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010ed81;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010ed81:local_b0 = (CowData<char32_t>*)&local_58;
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
/* TileProxiesManagerDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void TileProxiesManagerDialog::_get_property_listv(TileProxiesManagerDialog *this, List *param_1, bool param_2) {
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
   local_78 = "TileProxiesManagerDialog";
   local_70 = 0x18;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "TileProxiesManagerDialog";
   local_98 = 0;
   local_70 = 0x18;
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

         goto LAB_0010f031;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010f031:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "TileProxiesManagerDialog", false);
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
/* MethodBind* create_method_bind<TileProxiesManagerDialog>(void (TileProxiesManagerDialog::*)()) */MethodBind *create_method_bind<TileProxiesManagerDialog>(_func_void *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_001120b0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "TileProxiesManagerDialog";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<TileProxiesManagerDialog, Ref<InputEvent> >(void
   (TileProxiesManagerDialog::*)(Ref<InputEvent>)) */MethodBind *create_method_bind<TileProxiesManagerDialog,Ref<InputEvent>>(_func_void_Ref *param_1) {
   long *plVar1;
   long lVar2;
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00112110;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "TileProxiesManagerDialog";
   local_30 = 0x18;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar2 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_bind_methods() [clone .cold] */void TileProxiesManagerDialog::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* TileProxiesManagerDialog::_initialize_classv() */void TileProxiesManagerDialog::_initialize_classv(void) {
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
                     if ((code*)PTR__bind_methods_00116060 != Node::_bind_methods) {
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
            if ((code*)PTR__bind_compatibility_methods_00116050 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00116058 != AcceptDialog::_bind_methods) {
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
      local_58 = "TileProxiesManagerDialog";
      local_70 = 0;
      local_50 = 0x18;
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
/* WARNING: Removing unreachable block (ram,0x0010fb38) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC79, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010fe70;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar2 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar2 & 1 ) != 0) {
            pVVar2 = *(Variant**)( pVVar2 + *(long*)( (long)plVar4 + (long)pVVar1 ) + -1 );
         }

         ( *(code*)pVVar2 )();
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

   LAB_0010fe70:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011027f;
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
      /* WARNING: Could not recover jumptable at 0x00110126. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011027f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
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

         goto LAB_0011043f;
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
      /* WARNING: Could not recover jumptable at 0x001102e6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011043f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Ref<InputEvent> >::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<InputEvent>>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_58 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x10fd08;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110548;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *(long*)param_3 + 0x10 ));
   local_58 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_58;
   if (pOVar4 != local_58) {
      if (pOVar4 == (Object*)0x0) {
         if (local_58 != (Object*)0x0) {
            local_58 = (Object*)0x0;
            LAB_00110506:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00110506;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ));
   if (local_58 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_58;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_58);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00110548:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<InputEvent> >::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<InputEvent>>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10fd08;
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

         goto LAB_0011080c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *param_3 == (long*)0x0 ) || ( local_48 = (Object*)**param_3 ),local_48 == (Object*)0x0) {
      LAB_001107e8:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_001107e8;
   }

   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011080c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<InputEvent> >::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Ref<InputEvent>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   Object *pOVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_48 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Object*)0x10fd08;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC79, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110b80;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00110b75:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00110b80;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00110bd0;
      LAB_00110bc0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00110bd0:uVar7 = 4;
         goto LAB_00110b75;
      }

      if (in_R8D == 1) goto LAB_00110bc0;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC109;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_00110ced:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &InputEvent::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00110ced;
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (local_48 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_48);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00110b80:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TileProxiesManagerDialog::_right_clicked(int, Vector2, MouseButton, Object*) */void TileProxiesManagerDialog::_GLOBAL__sub_I__right_clicked(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* TileProxiesManagerDialog::~TileProxiesManagerDialog() */void TileProxiesManagerDialog::~TileProxiesManagerDialog(TileProxiesManagerDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<InputEvent> >::~MethodBindT() */void MethodBindT<Ref<InputEvent>>::~MethodBindT(MethodBindT<Ref<InputEvent>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int, Vector2, MouseButton,
   Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int,Vector2,MouseButton,Object*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<TileProxiesManagerDialog, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<TileProxiesManagerDialog, void, String const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void,String_const&,Variant_const&,String_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<TileProxiesManagerDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<TileProxiesManagerDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<TileProxiesManagerDialog,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* AudioStreamPlayer3DGizmoPlugin::get_priority() const */undefined8 AudioStreamPlayer3DGizmoPlugin::get_priority(void) {
   return 0xffffffff;
}/* AudioStreamPlayer3DGizmoPlugin::has_gizmo(Node3D*) */bool AudioStreamPlayer3DGizmoPlugin::has_gizmo(AudioStreamPlayer3DGizmoPlugin *this, Node3D *param_1) {
   long lVar1;
   if (param_1 != (Node3D*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &AudioStreamPlayer3D::typeinfo, 0);
      return lVar1 != 0;
   }
   return false;
}/* AudioStreamPlayer3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */EditorNode3DGizmo *AudioStreamPlayer3DGizmoPlugin::get_handle_value(EditorNode3DGizmo *param_1, int param_2, bool param_3) {
   long lVar1;
   undefined7 in_register_00000011;
   float fVar2;
   lVar1 = *(long*)( CONCAT71(in_register_00000011, param_3) + 0x1f0 );
   if (lVar1 != 0) {
      __dynamic_cast(lVar1, &Object::typeinfo, &AudioStreamPlayer3D::typeinfo, 0);
   }
   fVar2 = (float)AudioStreamPlayer3D::get_emission_angle();
   Variant::Variant((Variant*)param_1, fVar2);
   return param_1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*,
   Vector2 const&) */void AudioStreamPlayer3DGizmoPlugin::set_handle(AudioStreamPlayer3DGizmoPlugin *this, EditorNode3DGizmo *param_1, int param_2, bool param_3, Camera3D *param_4, Vector2 *param_5) {
   int iVar1;
   long in_FS_OFFSET;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float local_148;
   float local_140;
   float local_13c;
   float local_128;
   float local_110;
   float local_10c[3];
   undefined1 local_100[16];
   undefined8 local_f0;
   float local_e8;
   undefined1 local_e4[12];
   float local_d8[2];
   uint local_d0;
   float local_cc[2];
   uint local_c4;
   undefined8 local_c0;
   float local_b8;
   undefined8 local_b4;
   float local_ac;
   float local_78;
   float fStack_74;
   undefined8 local_70;
   float local_68;
   float fStack_64;
   float local_60;
   float local_5c;
   float local_58;
   undefined8 local_54;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0x1f0 ) != 0) {
      __dynamic_cast(*(long*)( param_1 + 0x1f0 ), &Object::typeinfo, &AudioStreamPlayer3D::typeinfo, 0);
   }
   Node3D::get_global_transform();
   Transform3D::affine_inverse();
   fVar3 = (float)( (ulong)local_70 >> 0x20 );
   local_100._0_12_ = ( **(code**)( *(long*)param_4 + 0x208 ) )(param_4, param_5);
   local_e4 = ( **(code**)( *(long*)param_4 + 0x200 ) )(param_4, param_5);
   fVar7 = SUB124(local_100._0_12_, 0);
   fVar9 = SUB124(local_100._0_12_, 4);
   fVar2 = (float)local_e4._4_4_ * _LC5 + fVar9;
   fVar4 = local_e4._8_4_ * _LC5 + (float)local_100._8_4_;
   fVar5 = _LC5 * (float)local_e4._0_4_ + fVar7;
   fVar8 = (float)local_100._8_4_ * (float)local_70;
   fVar10 = (float)local_100._8_4_ * fStack_64;
   local_100._8_4_ = fVar7 * local_60 + fVar9 * local_5c + (float)local_100._8_4_ * local_58 + local_4c;
   fVar6 = (float)( (ulong)local_54 >> 0x20 );
   local_100._0_8_ = CONCAT44(fVar7 * fVar3 + fVar9 * local_68 + fVar10 + fVar6, fVar7 * local_78 + fVar9 * fStack_74 + fVar8 + (float)local_54);
   local_e8 = fVar2 * local_5c + local_60 * fVar5 + fVar4 * local_58 + local_4c;
   local_f0 = CONCAT44(fVar5 * fVar3 + local_68 * fVar2 + fStack_64 * fVar4 + fVar6, fVar5 * local_78 + fStack_74 * fVar2 + (float)local_70 * fVar4 + (float)local_54);
   local_148 = _LC1;
   local_140 = _LC2;
   local_13c = _LC4;
   local_128 = _LC4;
   iVar1 = 0;
   local_d8[0] = 0.0;
   fVar2 = _LC3;
   while (true) {
      fVar4 = local_140;
      fVar3 = local_148;
      local_d0 = (uint)fVar2 ^ __LC6;
      local_c4 = (uint)local_140 ^ __LC6;
      local_d8[1] = 0.0;
      local_cc[1] = 0.0;
      local_c0 = 0;
      local_b8 = 0.0;
      local_b4 = 0;
      local_ac = 0.0;
      local_cc[0] = local_148;
      Geometry3D::get_closest_points_between_segments((Vector3*)local_d8, (Vector3*)local_cc, local_100, (Vector3*)&local_f0, (Vector3*)&local_c0, (Vector3*)&local_b4);
      fVar2 = SQRT(( (float)local_b4 - (float)local_c0 ) * ( (float)local_b4 - (float)local_c0 ) + ( local_b4._4_4_ - local_c0._4_4_ ) * ( local_b4._4_4_ - local_c0._4_4_ ) + ( local_ac - local_b8 ) * ( local_ac - local_b8 ));
      if (fVar2 < local_13c) {
         local_128 = (float)iVar1;
         local_13c = fVar2;
      }
      if (iVar1 + 1 == 0xb4) break;
      sincosf((float)( iVar1 + 2 ) * __LC7, local_10c, &local_110);
      local_148 = local_10c[0];
      local_140 = local_110;
      iVar1 = iVar1 + 1;
      local_d8[0] = fVar3;
      fVar2 = fVar4;
   };
   if (local_128 < _LC8) {
      AudioStreamPlayer3D::set_emission_angle(local_128);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* AudioStreamPlayer3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */EditorNode3DGizmo *AudioStreamPlayer3DGizmoPlugin::get_handle_name(EditorNode3DGizmo *param_1, int param_2, bool param_3) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   String::parse_latin1((StrRange*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* AudioStreamPlayer3DGizmoPlugin::get_gizmo_name() const */AudioStreamPlayer3DGizmoPlugin * __thiscall
AudioStreamPlayer3DGizmoPlugin::get_gizmo_name(AudioStreamPlayer3DGizmoPlugin *this){
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
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0xc;
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
}/* AudioStreamPlayer3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant
   const&, bool) */void AudioStreamPlayer3DGizmoPlugin::commit_handle(AudioStreamPlayer3DGizmoPlugin *this, EditorNode3DGizmo *param_1, int param_2, bool param_3, Variant *param_4, bool param_5) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   StringName *pSVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   float fVar6;
   long local_c8;
   long local_c0;
   char *local_b8;
   undefined8 local_b0;
   Variant *local_a8[2];
   Variant *local_98[4];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   pSVar4 = *(StringName**)( param_1 + 0x1f0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pSVar4 != (StringName*)0x0) {
      pSVar4 = (StringName*)__dynamic_cast(pSVar4, &Object::typeinfo, &AudioStreamPlayer3D::typeinfo, 0);
   }
   if (param_5) {
      fVar6 = Variant::operator_cast_to_float(param_4);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AudioStreamPlayer3D::set_emission_angle(fVar6);
         return;
      }
   } else {
      pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
      local_c0 = 0;
      local_b8 = "";
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_c0);
      local_b8 = "Change AudioStreamPlayer3D Emission Angle";
      local_c8 = 0;
      local_b0 = 0x29;
      String::parse_latin1((StrRange*)&local_c8);
      TTR((String*)&local_b8, (String*)&local_c8);
      EditorUndoRedoManager::create_action(pOVar5, (String*)&local_b8, 0, 0, 0);
      pcVar3 = local_b8;
      if (local_b8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_b8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_b8 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }
      }
      lVar2 = local_c8;
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_c0;
      if (local_c0 != 0) {
         LOCK();
         plVar1 = (long*)( local_c0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      fVar6 = (float)AudioStreamPlayer3D::get_emission_angle();
      StringName::StringName((StringName*)&local_b8, "set_emission_angle", false);
      Variant::Variant((Variant*)local_78, fVar6);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_98[0] = (Variant*)local_78;
      EditorUndoRedoManager::add_do_methodp(pOVar5, pSVar4, (Variant**)&local_b8, (int)(Variant*)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }
      Variant::Variant((Variant*)local_98, param_4);
      StringName::StringName((StringName*)&local_b8, "set_emission_angle", false);
      Variant::Variant((Variant*)local_78, (Variant*)local_98);
      local_60 = 0;
      local_58 = (undefined1[16])0x0;
      local_a8[0] = (Variant*)local_78;
      EditorUndoRedoManager::add_undo_methodp(pOVar5, pSVar4, (Variant**)&local_b8, (int)local_a8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
         StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorUndoRedoManager::commit_action(SUB81(pOVar5, 0));
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* AudioStreamPlayer3DGizmoPlugin::AudioStreamPlayer3DGizmoPlugin() */void AudioStreamPlayer3DGizmoPlugin::AudioStreamPlayer3DGizmoPlugin(AudioStreamPlayer3DGizmoPlugin *this) {
   Object *pOVar1;
   long *plVar2;
   code *pcVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   long local_98;
   Object *local_90;
   char *local_88;
   undefined8 local_80;
   undefined8 local_78[2];
   undefined8 local_68[2];
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   local_90 = (Object*)0x0;
   *(undefined***)this = &PTR__initialize_classv_00104c30;
   local_88 = "editors/3d_gizmos/gizmo_colors/stream_player_3d";
   local_80 = 0x2f;
   String::parse_latin1((StrRange*)&local_90);
   _EDITOR_GET((String*)&local_58);
   local_78[0] = Variant::operator_cast_to_Color((Variant*)&local_58);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }
   pOVar7 = local_90;
   if (local_90 != (Object*)0x0) {
      LOCK();
      pOVar1 = local_90 + -0x10;
      *(long*)pOVar1 = *(long*)pOVar1 + -1;
      UNLOCK();
      if (*(long*)pOVar1 == 0) {
         local_90 = (Object*)0x0;
         Memory::free_static(pOVar7 + -0x10, false);
      }
   }
   pOVar7 = *(Object**)( EditorNode::singleton + 0x838 );
   local_58 = __LC3;
   uStack_50 = _UNK_00104f58;
   if (pOVar7 != (Object*)0x0) {
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         pOVar7 = (Object*)0x0;
      }
      pcVar3 = *(code**)( *(long*)pOVar7 + 0x1c8 );
      if ((AudioStreamPlayer3DGizmoPlugin()::{lambda()
      #1
      ( iVar6 = __cxa_guard_acquire(&AudioStreamPlayer3DGizmoPlugin()::{lambda()#1}::operator()()::
                                     sname), iVar6 != 0) );
      {
         _scs_create((char *)&AudioStreamPlayer3DGizmoPlugin()::{lambda()
         #1
         ;;
         __cxa_atexit(StringName::~StringName, &AudioStreamPlayer3DGizmoPlugin()::, {
               lambda()
               #1
               &__dso_handle;
               __cxa_guard_release(&AudioStreamPlayer3DGizmoPlugin()::{lambda()#1}::operator()()::sname);
    }, ( *pcVar3 )((StrRange*)&local_90, pOVar7, &AudioStreamPlayer3DGizmoPlugin()::, {
                        lambda()
                        #1
                        local_88 = "stream_player_3d_icon";
                        local_98 = 0;
                        local_80 = 0x15;
                        String::parse_latin1((StrRange*)&local_98);
                        EditorNode3DGizmoPlugin::create_icon_material((String*)this, (Ref*)&local_98, SUB81((StrRange*)&local_90, 0), (Color*)0x0);
                        lVar4 = local_98;
                        if (local_98 != 0) {
                           LOCK();
                           plVar2 = (long*)( local_98 + -0x10 );
                           *plVar2 = *plVar2 + -1;
                           UNLOCK();
                           if (*plVar2 == 0) {
                              local_98 = 0;
                              Memory::free_static((void*)( lVar4 + -0x10 ), false);
                           }
                        }
                        if (( ( local_90 == (Object*)0x0 ) || ( cVar5 = RefCounted::unreference() ),pOVar1 = local_90,cVar5 == '\0' )) {
                           cVar5 = RefCounted::unreference();
                        } else {
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )();
                           Memory::free_static(pOVar1, false);
                           cVar5 = RefCounted::unreference();
                        }
                        if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar7) ),cVar5 != '\0') {
                           ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                           Memory::free_static(pOVar7, false);
                        }
                        local_88 = "stream_player_3d_material_primary";
                        local_90 = (Object*)0x0;
                        local_80 = 0x21;
                        String::parse_latin1((StrRange*)&local_90);
                        EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_90, SUB81((Color*)local_78, 0), false, false);
                        pOVar7 = local_90;
                        if (local_90 != (Object*)0x0) {
                           LOCK();
                           plVar2 = (long*)( (long)local_90 + -0x10 );
                           *plVar2 = *plVar2 + -1;
                           UNLOCK();
                           if (*plVar2 == 0) {
                              local_90 = (Object*)0x0;
                              Memory::free_static((void*)( (long)pOVar7 + -0x10 ), false);
                           }
                        }
                        local_58 = __LC29;
                        uStack_50 = _UNK_00104f68;
                        local_68[0] = Color::operator *((Color*)local_78, (String*)&local_58);
                        local_88 = "stream_player_3d_material_secondary";
                        local_90 = (Object*)0x0;
                        local_80 = 0x23;
                        String::parse_latin1((StrRange*)&local_90);
                        EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_90, SUB81(local_68, 0), false, false);
                        pOVar7 = local_90;
                        if (local_90 != (Object*)0x0) {
                           LOCK();
                           plVar2 = (long*)( (long)local_90 + -0x10 );
                           *plVar2 = *plVar2 + -1;
                           UNLOCK();
                           if (*plVar2 == 0) {
                              local_90 = (Object*)0x0;
                              Memory::free_static((void*)( (long)pOVar7 + -0x10 ), false);
                           }
                        }
                        local_88 = "stream_player_3d_material_billboard";
                        local_58 = __LC3;
                        uStack_50 = _UNK_00104f58;
                        local_90 = (Object*)0x0;
                        local_80 = 0x23;
                        String::parse_latin1((StrRange*)&local_90);
                        EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_90, SUB81((String*)&local_58, 0), true, false);
                        pOVar7 = local_90;
                        if (local_90 != (Object*)0x0) {
                           LOCK();
                           plVar2 = (long*)( (long)local_90 + -0x10 );
                           *plVar2 = *plVar2 + -1;
                           UNLOCK();
                           if (*plVar2 == 0) {
                              local_90 = (Object*)0x0;
                              Memory::free_static((void*)( (long)pOVar7 + -0x10 ), false);
                           }
                        }
                        local_90 = (Object*)0x0;
                        local_88 = "handles";
                        local_98 = 0;
                        local_80 = 7;
                        String::parse_latin1((StrRange*)&local_98);
                        EditorNode3DGizmoPlugin::create_handle_material((String*)this, SUB81((StrRange*)&local_98, 0), (Ref*)0x0);
                        lVar4 = local_98;
                        if (local_98 != 0) {
                           LOCK();
                           plVar2 = (long*)( local_98 + -0x10 );
                           *plVar2 = *plVar2 + -1;
                           UNLOCK();
                           if (*plVar2 == 0) {
                              local_98 = 0;
                              Memory::free_static((void*)( lVar4 + -0x10 ), false);
                           }
                        }
                        if (( ( local_90 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar7 = local_90,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
                        Memory::free_static(pOVar7, false);
                     }, if (local_40 != *(long *)(in_FS_OFFSET + 0x28));
               {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }
               return;
            }, /* WARNING: Does not return */, pcVar3 = (code *);
         invalidInstructionException();
         ( *pcVar3 )();
      }
      /* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */
      void Vector<Vector3>::push_back(undefined8 param_1, undefined4 param_2, long param_3) {
         undefined8 *puVar1;
         int iVar2;
         long lVar3;
         long lVar4;
         if (*(long*)( param_3 + 8 ) == 0) {
            lVar3 = 1;
         } else {
            lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
         }
         iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3>*)( param_3 + 8 ), lVar3);
         if (iVar2 == 0) {
            if (*(long*)( param_3 + 8 ) == 0) {
               lVar4 = -1;
               lVar3 = 0;
            } else {
               lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
               lVar4 = lVar3 + -1;
               if (-1 < lVar4) {
                  CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( param_3 + 8 ));
                  puVar1 = (undefined8*)( *(long*)( param_3 + 8 ) + lVar4 * 0xc );
                  *puVar1 = param_1;
                  *(undefined4*)( puVar1 + 1 ) = param_2;
                  return;
               }
            }
            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
            return;
         }
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }
      for (int i_1845 = 0; i_1845 < 2; i_1845++) {
         /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      }
      void AudioStreamPlayer3DGizmoPlugin::redraw(AudioStreamPlayer3DGizmoPlugin *this, EditorNode3DGizmo *param_1) {
         long *plVar1;
         code *pcVar2;
         double dVar3;
         EditorNode3DGizmo *pEVar4;
         char cVar5;
         int iVar6;
         uint uVar7;
         Object *pOVar8;
         long lVar9;
         long lVar10;
         long lVar11;
         long lVar12;
         float fVar13;
         long in_FS_OFFSET;
         float fVar14;
         float fVar15;
         float fVar16;
         float fVar17;
         undefined8 local_148;
         float fStack_13c;
         undefined8 local_138;
         long local_110;
         float local_f0;
         float local_ec[3];
         Object *local_e0;
         Object *local_d8;
         long local_d0;
         Object *local_c8;
         Object *local_c0;
         Ref local_b8[8];
         long local_b0;
         Object *local_a8;
         long local_a0;
         long local_98;
         long local_90;
         EditorNode3DGizmo *local_88;
         long local_80;
         Object *local_78;
         long local_70;
         undefined8 local_68;
         uint local_60;
         undefined8 local_58;
         undefined8 uStack_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         ( **(code**)( *(long*)param_1 + 0x160 ) )(param_1);
         if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
            if (*(long*)( param_1 + 0x1f0 ) != 0) {
               __dynamic_cast(*(long*)( param_1 + 0x1f0 ), &Object::typeinfo, &AudioStreamPlayer3D::typeinfo, 0);
            }
            iVar6 = AudioStreamPlayer3D::get_attenuation_model();
            if (( iVar6 != 3 ) || ( fVar17 = (float)AudioStreamPlayer3D::get_max_distance() ),_LC52 < (double)fVar17) {
               dVar3 = _LC52;
               local_88 = param_1;
               cVar5 = RefCounted::init_ref();
               if (cVar5 == '\0') {
                  local_88 = (EditorNode3DGizmo*)0x0;
               }
               local_98 = 0;
               local_70 = 0x23;
               local_78 = (Object*)0x102aa0;
               String::parse_latin1((StrRange*)&local_98);
               EditorNode3DGizmoPlugin::get_material((String*)&local_78, (Ref*)this);
               local_a8 = (Object*)0x0;
               if (local_78 != (Object*)0x0) {
                  pOVar8 = (Object*)__dynamic_cast(local_78, &Object::typeinfo, &Material::typeinfo, 0);
                  if (pOVar8 != (Object*)0x0) {
                     local_a8 = pOVar8;
                     cVar5 = RefCounted::reference();
                     if (cVar5 == '\0') {
                        local_a8 = (Object*)0x0;
                     }
                     if (local_78 == (Object*)0x0) goto LAB_0010132d;
                  }
                  cVar5 = RefCounted::unreference();
                  pOVar8 = local_78;
                  if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_78) ),cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                  }
               }
               LAB_0010132d:lVar10 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               if (( ( local_88 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_88,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);
               Memory::free_static(pEVar4, false);
            }
            uVar7 = AudioStreamPlayer3D::get_attenuation_model();
            fVar17 = _LC44;
            if (uVar7 < 3) {
               fVar17 = *(float*)( CSWTCH_1905 + (ulong)uVar7 * 4 );
            }
            fVar14 = (float)AudioStreamPlayer3D::get_max_distance();
            if ((double)fVar14 <= dVar3) {
               fVar14 = (float)AudioStreamPlayer3D::get_unit_size();
               fVar14 = fVar17 * fVar14;
            } else {
               fVar15 = (float)AudioStreamPlayer3D::get_max_distance();
               fVar16 = (float)AudioStreamPlayer3D::get_unit_size();
               fVar14 = fVar16 * fVar17;
               if (fVar15 <= fVar16 * fVar17) {
                  fVar14 = fVar15;
               }
            }
            local_70 = 0;
            iVar6 = 6;
            fVar17 = (float)_LC45;
            fVar15 = _LC45._4_4_;
            fVar16 = (float)_LC46;
            fVar13 = _LC46._4_4_;
            while (true) {
               uStack_50 = uStack_50 & 0xffffffff00000000;
               local_58 = CONCAT44(fVar15 * fVar14, fVar17 * fVar14);
               Vector<Vector3>::push_back((String*)&local_78);
               local_58 = CONCAT44(fVar13 * fVar14, fVar16 * fVar14);
               uStack_50 = uStack_50 & 0xffffffff00000000;
               Vector<Vector3>::push_back((String*)&local_78);
               if (iVar6 == 0x16b) break;
               fVar17 = (float)iVar6;
               iVar6 = iVar6 + 3;
               sincosf(fVar17 * __LC7, local_ec, &local_f0);
               fVar17 = fVar16;
               fVar15 = fVar13;
               fVar16 = local_ec[0];
               fVar13 = local_f0;
            };
            uStack_50 = CONCAT44(_LC45._4_4_, (float)_LC45);
            local_58 = __LC53;
            iVar6 = AudioStreamPlayer3D::get_attenuation_model();
            fVar17 = _LC49;
            fVar14 = _LC47;
            if (( ( iVar6 != 1 ) && ( fVar17 = _LC50 ),iVar6 != 2 )) {
               fVar17 = _LC48;
               fVar14 = _LC47;
            }
            uStack_50 = CONCAT44(_UNK_00104f54, _LC3);
            local_58 = CONCAT44(fVar17, fVar14);
            fVar17 = (float)AudioStreamPlayer3D::get_max_distance();
            if (dVar3 < (double)fVar17) {
               fVar14 = (float)Color::get_h();
               fVar14 = fVar14 + _LC49;
               fVar17 = uStack_50._4_4_;
               fVar15 = (float)Color::get_v();
               fVar16 = (float)Color::get_s();
               Color::set_hsv(fVar14, fVar16, fVar15, fVar17);
            }
            EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_78, SUB81(&local_a8, 0), (Color*)0x1);
            lVar10 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar10 + -0x10 ), false);
               }
            }
            if (( ( local_a8 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_a8,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
            Memory::free_static(pOVar8, false);
         }
      }
      cVar5 = AudioStreamPlayer3D::is_emission_angle_enabled();
      if (cVar5 != '\0') {
         lVar12 = 0;
         lVar11 = 1;
         fVar17 = (float)AudioStreamPlayer3D::get_emission_angle();
         iVar6 = 1;
         sincosf(fVar17 * __LC7, local_ec, &local_f0);
         fVar14 = local_ec[0];
         uVar7 = (uint)local_f0 ^ __LC6;
         local_b0 = 0;
         CowData<Vector3>::resize<false>((CowData<Vector3>*)&local_b0, 200);
         local_138 = _LC51;
         lVar10 = local_b0;
         fVar15 = (float)_LC45;
         fVar17 = _LC45._4_4_;
         while (true) {
            lVar9 = lVar11 + -1;
            local_68 = CONCAT44(fVar17 * fVar14, fVar15 * fVar14);
            uStack_50 = CONCAT44(uStack_50._4_4_, uVar7);
            fVar15 = (float)local_138;
            fVar17 = (float)( (ulong)local_138 >> 0x20 );
            local_58 = CONCAT44(fVar17 * fVar14, fVar15 * fVar14);
            local_60 = uVar7;
            if (lVar10 == 0) break;
            lVar10 = *(long*)( lVar10 + -8 );
            if (lVar10 <= lVar9) goto LAB_001019dc;
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_b0);
            *(undefined8*)( local_b0 + lVar12 ) = local_68;
            *(uint*)( local_b0 + 8 + lVar12 ) = local_60;
            lVar9 = lVar11;
            if (local_b0 == 0) {
               lVar10 = 0;
               goto LAB_001019dc;
            }
            lVar10 = *(long*)( local_b0 + -8 );
            if (lVar10 <= lVar11) goto LAB_001019dc;
            iVar6 = iVar6 + 1;
            lVar11 = lVar11 + 2;
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_b0);
            lVar10 = local_b0;
            *(ulong*)( local_b0 + 0xc + lVar12 ) = local_58;
            *(float*)( local_b0 + 0x14 + lVar12 ) = (float)uStack_50;
            lVar12 = lVar12 + 0x18;
            if (lVar12 == 0x960) {
               local_88 = param_1;
               cVar5 = RefCounted::init_ref();
               if (cVar5 == '\0') {
                  local_88 = (EditorNode3DGizmo*)0x0;
               }
               local_98 = 0;
               local_70 = 0x21;
               local_78 = (Object*)0x102a50;
               String::parse_latin1((StrRange*)&local_98);
               EditorNode3DGizmoPlugin::get_material((String*)&local_78, (Ref*)this);
               local_e0 = (Object*)0x0;
               if (local_78 != (Object*)0x0) {
                  pOVar8 = (Object*)__dynamic_cast(local_78, &Object::typeinfo, &Material::typeinfo);
                  if (pOVar8 != (Object*)0x0) {
                     local_e0 = pOVar8;
                     cVar5 = RefCounted::reference();
                     if (cVar5 == '\0') {
                        local_e0 = (Object*)0x0;
                     }
                     if (local_78 == (Object*)0x0) goto LAB_00101cf5;
                  }
                  cVar5 = RefCounted::unreference();
                  pOVar8 = local_78;
                  if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_78) ),cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                     Memory::free_static(pOVar8, false);
                  }
               }
               LAB_00101cf5:lVar10 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar10 + -0x10 ), false);
                  }
               }
               if (( ( local_88 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_88,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);
               Memory::free_static(pEVar4, false);
            }
            fVar17 = _LC3;
            iVar6 = 0;
            local_148 = CONCAT44(_LC3, _LC3);
            fStack_13c = _LC3;
            local_58 = CONCAT44(_LC3, _LC3);
            uStack_50 = CONCAT44(_LC3, _LC3);
            EditorNode3DGizmo::add_lines((Vector*)param_1, local_b8, SUB81(&local_e0, 0), (Color*)0x0);
            local_a0 = 0;
            CowData<Vector3>::resize<false>((CowData<Vector3>*)&local_a0, 0x10);
            lVar11 = 0;
            local_110 = 1;
            lVar10 = local_a0;
            fVar15 = (float)_LC45;
            fVar16 = _LC45._4_4_;
            goto LAB_00101dca;
         };
         sincosf((float)iVar6 * __LC57, local_ec, &local_f0);
         local_138 = CONCAT44(local_f0, local_ec[0]);
      }
      LAB_001019be:lVar10 = 0;
      local_60 = uVar7;
      LAB_001019dc:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar9, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }
}local_148 = CONCAT44(_LC3, _LC3);fStack_13c = _LC3;LAB_00101606:local_88 = param_1;cVar5 = RefCounted::init_ref();if (cVar5 == '\0') {
   local_88 = (EditorNode3DGizmo*)0x0;
}local_98 = 0;local_78 = (Object*)0x1028b0;local_70 = 0x15;String::parse_latin1((StrRange*)&local_98);EditorNode3DGizmoPlugin::get_material((String*)&local_78, (Ref*)this);local_a8 = (Object*)0x0;if (local_78 != (Object*)0x0) {
   pOVar8 = (Object*)__dynamic_cast(local_78, &Object::typeinfo, &Material::typeinfo, 0);
   if (pOVar8 != (Object*)0x0) {
      local_a8 = pOVar8;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
         local_a8 = (Object*)0x0;
      }
      if (local_78 == (Object*)0x0) goto LAB_001016d8;
   }
   cVar5 = RefCounted::unreference();
   pOVar8 = local_78;
   if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_78) ),cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
      Memory::free_static(pOVar8, false);
   }
}LAB_001016d8:lVar10 = local_98;if (local_98 != 0) {
   LOCK();
   plVar1 = (long*)( local_98 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void*)( lVar10 + -0x10 ), false);
   }
}if (( ( local_88 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_88,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);Memory::free_static(pEVar4, false);}uStack_50 = CONCAT44(fStack_13c, fStack_13c);local_58 = local_148;EditorNode3DGizmo::add_unscaled_billboard((Ref*)param_1, _LC59, (Color*)&local_a8);if (( ( local_a8 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_a8,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return;LAB_00101dca:local_68 = CONCAT44(fVar16 * fVar14, fVar15 * fVar14);lVar9 = local_110 + -1;if (lVar10 == 0) goto LAB_001019be;lVar10 = *(long*)( lVar10 + -8 );local_60 = uVar7;if (lVar10 <= lVar9) goto LAB_001019dc;CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_a0);*(undefined8*)( local_a0 + lVar11 ) = local_68;*(uint*)( local_a0 + 8 + lVar11 ) = local_60;local_58 = 0;uStack_50 = uStack_50 & 0xffffffff00000000;lVar9 = local_110;if (local_a0 == 0) {
   lVar10 = 0;
   goto LAB_001019dc;
}lVar10 = *(long*)( local_a0 + -8 );if (lVar10 <= local_110) goto LAB_001019dc;iVar6 = iVar6 + 1;CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_a0);lVar10 = local_a0;local_110 = local_110 + 2;*(ulong*)( local_a0 + 0xc + lVar11 ) = local_58;*(float*)( local_a0 + 0x14 + lVar11 ) = (float)uStack_50;lVar11 = lVar11 + 0x18;if (iVar6 == 8) {
   local_88 = param_1;
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      local_88 = (EditorNode3DGizmo*)0x0;
   }
   local_98 = 0;
   local_78 = (Object*)0x102a78;
   local_70 = 0x23;
   String::parse_latin1((StrRange*)&local_98);
   EditorNode3DGizmoPlugin::get_material((String*)&local_78, (Ref*)this);
   local_d8 = (Object*)0x0;
   if (local_78 != (Object*)0x0) {
      pOVar8 = (Object*)__dynamic_cast(local_78, &Object::typeinfo, &Material::typeinfo);
      if (pOVar8 != (Object*)0x0) {
         local_d8 = pOVar8;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            local_d8 = (Object*)0x0;
         }
         if (local_78 == (Object*)0x0) goto LAB_00101fe4;
      }
      cVar5 = RefCounted::unreference();
      pOVar8 = local_78;
      if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(local_78) ),cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
         Memory::free_static(pOVar8, false);
      }
   }
   LAB_00101fe4:lVar10 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar10 + -0x10 ), false);
      }
   }
   if (( ( local_88 != (EditorNode3DGizmo*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pEVar4 = local_88,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pEVar4 + 0x140 ))(pEVar4);
   Memory::free_static(pEVar4, false);
}uStack_50._0_4_ = fVar17;uStack_50._4_4_ = fVar17;local_58 = local_148;EditorNode3DGizmo::add_lines((Vector*)param_1, (Ref*)&local_a8, SUB81(&local_d8, 0), (Color*)0x0);local_90 = 0;fVar17 = (float)AudioStreamPlayer3D::get_emission_angle();sincosf(fVar17 * __LC7, local_ec, &local_f0);local_58 = (ulong)(uint)local_ec[0];uStack_50 = CONCAT44(uStack_50._4_4_, (uint)local_f0 ^ __LC6);Vector<Vector3>::push_back(local_58, (uint)local_f0 ^ __LC6, (StrRange*)&local_98);local_78 = (Object*)0x1028c6;local_80 = 0;local_c8 = (Object*)0x0;local_d0 = 0;local_70 = 7;String::parse_latin1((StrRange*)&local_d0);EditorNode3DGizmoPlugin::get_material((String*)&local_c0, (Ref*)this);local_78 = (Object*)0x0;if (( ( local_c0 != (Object*)0x0 ) && ( pOVar8 = (Object*)__dynamic_cast(local_c0, &Object::typeinfo, &Material::typeinfo, 0) ),pOVar8 != (Object*)0x0 )) {
   local_78 = (Object*)0x0;
}EditorNode3DGizmo::add_handles((Vector*)param_1, (Ref*)&local_98, (Vector*)&local_78, SUB81(&local_88, 0), false);if (( ( local_78 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_78,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}if (( ( local_c0 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_c0 + 0x140 ))(local_c0);Memory::free_static(local_c0, false);}lVar10 = local_d0;if (local_d0 != 0) {
   LOCK();
   plVar1 = (long*)( local_d0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void*)( lVar10 + -0x10 ), false);
   }
}if (( ( local_c8 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_c8,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}lVar10 = local_80;if (local_80 != 0) {
   LOCK();
   plVar1 = (long*)( local_80 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void*)( lVar10 + -0x10 ), false);
   }
}lVar10 = local_90;if (local_90 != 0) {
   LOCK();
   plVar1 = (long*)( local_90 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void*)( lVar10 + -0x10 ), false);
   }
}if (( ( local_d8 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_d8,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}lVar10 = local_a0;if (local_a0 != 0) {
   LOCK();
   plVar1 = (long*)( local_a0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void*)( lVar10 + -0x10 ), false);
   }
}if (( ( local_e0 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar8 = local_e0,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}lVar10 = local_b0;if (local_b0 != 0) {
   LOCK();
   plVar1 = (long*)( local_b0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void*)( lVar10 + -0x10 ), false);
   }
}goto LAB_00101606;}sincosf((float)( (double)iVar6 * __LC58 ), local_ec, &local_f0);fVar15 = local_ec[0];fVar16 = local_f0;goto LAB_00101dca;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}/* AudioStreamPlayer3DGizmoPlugin::is_class_ptr(void*) const */uint AudioStreamPlayer3DGizmoPlugin::is_class_ptr(AudioStreamPlayer3DGizmoPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x104e, (undefined4*)param_1 == &EditorNode3DGizmoPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* AudioStreamPlayer3DGizmoPlugin::_getv(StringName const&, Variant&) const */undefined8 AudioStreamPlayer3DGizmoPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* AudioStreamPlayer3DGizmoPlugin::_setv(StringName const&, Variant const&) */undefined8 AudioStreamPlayer3DGizmoPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* AudioStreamPlayer3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */void AudioStreamPlayer3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* AudioStreamPlayer3DGizmoPlugin::_property_can_revertv(StringName const&) const */undefined8 AudioStreamPlayer3DGizmoPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}/* AudioStreamPlayer3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 AudioStreamPlayer3DGizmoPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* AudioStreamPlayer3DGizmoPlugin::_notificationv(int, bool) */void AudioStreamPlayer3DGizmoPlugin::_notificationv(int param_1, bool param_2) {
   return;
}/* AudioStreamPlayer3DGizmoPlugin::~AudioStreamPlayer3DGizmoPlugin() */void AudioStreamPlayer3DGizmoPlugin::~AudioStreamPlayer3DGizmoPlugin(AudioStreamPlayer3DGizmoPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00104c30;
   EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   return;
}/* AudioStreamPlayer3DGizmoPlugin::~AudioStreamPlayer3DGizmoPlugin() */void AudioStreamPlayer3DGizmoPlugin::~AudioStreamPlayer3DGizmoPlugin(AudioStreamPlayer3DGizmoPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00104c30;
   EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   operator_delete(this, 0x450);
   return;
}/* AudioStreamPlayer3DGizmoPlugin::_get_class_namev() const */undefined8 *AudioStreamPlayer3DGizmoPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102713:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102713;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlayer3DGizmoPlugin");
         goto LAB_0010277e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPlayer3DGizmoPlugin");
   LAB_0010277e:return &_get_class_namev();
}/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
}/* AudioStreamPlayer3DGizmoPlugin::get_class() const */void AudioStreamPlayer3DGizmoPlugin::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* AudioStreamPlayer3DGizmoPlugin::AudioStreamPlayer3DGizmoPlugin() [clone .cold] */void AudioStreamPlayer3DGizmoPlugin::AudioStreamPlayer3DGizmoPlugin(AudioStreamPlayer3DGizmoPlugin *this) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* AudioStreamPlayer3DGizmoPlugin::_initialize_classv() */void AudioStreamPlayer3DGizmoPlugin::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
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
          lVar2 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((code *)PTR__bind_methods_00107008 != RefCounted::_bind_methods) {
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
        lVar2 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorNode3DGizmoPlugin";
      local_70 = 0;
      local_50 = 0x17;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "AudioStreamPlayer3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x1e;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
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
  if (local_90 == 0) {
LAB_00103248:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103248;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103266;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103266:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010353f;
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
LAB_0010353f:
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
    if (cVar6 != '\0') goto LAB_001035f3;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
              if (lVar5 == 0) goto LAB_001036cb;
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
LAB_001036cb:
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
      if (cVar6 != '\0') goto LAB_001035f3;
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
                if (lVar5 == 0) goto LAB_001037ab;
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
LAB_001037ab:
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
        if (cVar6 != '\0') goto LAB_001035f3;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00103854;
    }
  }
LAB_001035f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103854:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AudioStreamPlayer3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
AudioStreamPlayer3DGizmoPlugin::is_class(AudioStreamPlayer3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001038cf;
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
LAB_001038cf:
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
    if (cVar6 != '\0') goto LAB_00103983;
  }
  cVar6 = String::operator==(param_1,"AudioStreamPlayer3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_00103a43;
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
LAB_00103a43:
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
      if (cVar6 != '\0') goto LAB_00103983;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00103aec;
    }
  }
LAB_00103983:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103aec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
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
  if (local_90 == 0) {
LAB_00103c78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103c78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103c95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103c95:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
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



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorNode3DGizmoPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorNode3DGizmoPlugin";
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
  if (local_90 == 0) {
LAB_001040c8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001040c8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001040e5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001040e5:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorNode3DGizmoPlugin",false);
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



/* AudioStreamPlayer3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
AudioStreamPlayer3DGizmoPlugin::_get_property_listv
          (AudioStreamPlayer3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AudioStreamPlayer3DGizmoPlugin";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AudioStreamPlayer3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104518:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104518;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104535;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104535:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"AudioStreamPlayer3DGizmoPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector3>::resize<false>(long) */

undefined8 __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar3 = 0;
  }
  else {
    lVar8 = *(long *)(lVar3 + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar8 * 0xc;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00104b60:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 0xc - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00104b60;
  if (param_1 <= lVar8) {
    if ((lVar7 != lVar3) && (uVar6 = _realloc(this,lVar7), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  if (lVar7 == lVar3) {
LAB_00104acc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00104a5b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00104acc;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar3 = 0;
  }
  memset((void *)((long)puVar9 + lVar3 * 0xc),0,(param_1 - lVar3) * 0xc);
LAB_00104a5b:
  puVar9[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* AudioStreamPlayer3DGizmoPlugin::~AudioStreamPlayer3DGizmoPlugin() */

void __thiscall
AudioStreamPlayer3DGizmoPlugin::~AudioStreamPlayer3DGizmoPlugin
          (AudioStreamPlayer3DGizmoPlugin *this)

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

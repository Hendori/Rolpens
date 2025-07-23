/* Camera3DGizmoPlugin::get_priority() const */undefined8 Camera3DGizmoPlugin::get_priority(void) {
   return 0xffffffff;
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
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
}
/* Camera3DGizmoPlugin::has_gizmo(Node3D*) */bool Camera3DGizmoPlugin::has_gizmo(Camera3DGizmoPlugin *this, Node3D *param_1) {
   long lVar1;
   if (param_1 != (Node3D*)0x0) {
      lVar1 = __dynamic_cast(param_1, &Object::typeinfo, &Camera3D::typeinfo, 0);
      return lVar1 != 0;
   }

   return false;
}
/* Camera3DGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const */EditorNode3DGizmo *Camera3DGizmoPlugin::get_handle_value(EditorNode3DGizmo *param_1, int param_2, bool param_3) {
   long lVar1;
   int iVar2;
   undefined7 in_register_00000011;
   float fVar3;
   lVar1 = *(long*)( CONCAT71(in_register_00000011, param_3) + 0x1f0 );
   if (lVar1 != 0) {
      __dynamic_cast(lVar1, &Object::typeinfo, &Camera3D::typeinfo, 0);
   }

   iVar2 = Camera3D::get_projection();
   if (iVar2 == 0) {
      fVar3 = (float)Camera3D::get_fov();
      Variant::Variant((Variant*)param_1, fVar3);
      return param_1;
   }

   fVar3 = (float)Camera3D::get_size();
   Variant::Variant((Variant*)param_1, fVar3);
   return param_1;
}
/* Camera3DGizmoPlugin::get_gizmo_name() const */Camera3DGizmoPlugin * __thiscall Camera3DGizmoPlugin::get_gizmo_name(Camera3DGizmoPlugin *this){
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
/* Camera3DGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const */EditorNode3DGizmo *Camera3DGizmoPlugin::get_handle_name(EditorNode3DGizmo *param_1, int param_2, bool param_3) {
   long lVar1;
   long lVar2;
   int iVar3;
   undefined7 in_register_00000011;
   long in_FS_OFFSET;
   lVar1 = *(long*)( CONCAT71(in_register_00000011, param_3) + 0x1f0 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 != 0) {
      __dynamic_cast(lVar1, &Object::typeinfo, &Camera3D::typeinfo, 0);
   }

   iVar3 = Camera3D::get_projection();
   *(undefined8*)param_1 = 0;
   if (iVar3 == 0) {
      String::parse_latin1((StrRange*)param_1);
   }
 else {
      String::parse_latin1((StrRange*)param_1);
   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Camera3DGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant const&, bool) */void Camera3DGizmoPlugin::commit_handle(Camera3DGizmoPlugin *this, EditorNode3DGizmo *param_1, int param_2, bool param_3, Variant *param_4, bool param_5) {
   long *plVar1;
   long lVar2;
   int iVar3;
   StringName *pSVar4;
   Object *pOVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   float fVar7;
   long local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   pSVar4 = *(StringName**)( param_1 + 0x1f0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pSVar4 != (StringName*)0x0) {
      pSVar4 = (StringName*)__dynamic_cast(pSVar4, &Object::typeinfo, &Camera3D::typeinfo, 0);
   }

   iVar3 = Camera3D::get_projection();
   if (iVar3 == 0) {
      if (!param_5) {
         pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
         local_68 = "";
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "Change Camera FOV";
         local_78 = 0;
         local_60 = 0x11;
         String::parse_latin1((StrRange*)&local_78);
         TTR((String*)&local_68, (String*)&local_78);
         EditorUndoRedoManager::create_action(pOVar5, (String*)&local_68, 0, 0, 0);
         pcVar6 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

         lVar2 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         pcVar6 = "fov";
         fVar7 = (float)Camera3D::get_fov();
         Variant::Variant((Variant*)local_58, fVar7);
         LAB_00100592:StringName::StringName((StringName*)&local_68, pcVar6, false);
         EditorUndoRedoManager::add_do_property(pOVar5, pSVar4, (Variant*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         StringName::StringName((StringName*)&local_68, pcVar6, false);
         EditorUndoRedoManager::add_undo_property(pOVar5, pSVar4, (Variant*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            EditorUndoRedoManager::commit_action(SUB81(pOVar5, 0));
            return;
         }

         goto LAB_0010077d;
      }

      pcVar6 = "fov";
   }
 else {
      if (!param_5) {
         pOVar5 = (Object*)EditorUndoRedoManager::get_singleton();
         local_68 = "";
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "Change Camera Size";
         local_78 = 0;
         local_60 = 0x12;
         String::parse_latin1((StrRange*)&local_78);
         TTR((String*)&local_68, (String*)&local_78);
         EditorUndoRedoManager::create_action(pOVar5, (String*)&local_68, 0, 0, 0);
         pcVar6 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }

         }

         lVar2 = local_78;
         if (local_78 != 0) {
            LOCK();
            plVar1 = (long*)( local_78 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_78 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         pcVar6 = "size";
         fVar7 = (float)Camera3D::get_size();
         Variant::Variant((Variant*)local_58, fVar7);
         goto LAB_00100592;
      }

      pcVar6 = "size";
   }

   StringName::StringName((StringName*)&local_68, pcVar6, false);
   Object::set(pSVar4, (Variant*)&local_68, (bool*)param_4);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010077d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Camera3DGizmoPlugin::Camera3DGizmoPlugin() */void Camera3DGizmoPlugin::Camera3DGizmoPlugin(Camera3DGizmoPlugin *this) {
   long *plVar1;
   Object *pOVar2;
   code *pcVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   long local_88;
   Object *local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68[2];
   int local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   local_80 = (Object*)0x0;
   *(undefined***)this = &PTR__initialize_classv_00105f70;
   local_78 = "editors/3d_gizmos/gizmo_colors/camera";
   local_70 = 0x25;
   String::parse_latin1((StrRange*)&local_80);
   _EDITOR_GET((String*)&local_58);
   local_68[0] = Variant::operator_cast_to_Color((Variant*)&local_58);
   if (Variant::needs_deinit[local_58] != '\0') {
      Variant::_clear_internal();
   }

   pOVar7 = local_80;
   if (local_80 != (Object*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = (Object*)0x0;
         Memory::free_static((void*)( (long)pOVar7 + -0x10 ), false);
      }

   }

   local_80 = (Object*)0x0;
   local_78 = "camera_material";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_80);
   EditorNode3DGizmoPlugin::create_material((String*)this, (StrRange*)&local_80, SUB81(local_68, 0), false, false);
   pOVar7 = local_80;
   if (local_80 != (Object*)0x0) {
      LOCK();
      pOVar2 = local_80 + -0x10;
      *(long*)pOVar2 = *(long*)pOVar2 + -1;
      UNLOCK();
      if (*(long*)pOVar2 == 0) {
         local_80 = (Object*)0x0;
         Memory::free_static(pOVar7 + -0x10, false);
      }

   }

   pOVar7 = *(Object**)( EditorNode::singleton + 0x838 );
   local_58 = _LC21;
   uStack_54 = _LC21;
   uStack_50 = _LC21;
   uStack_4c = _LC21;
   if (pOVar7 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   cVar5 = RefCounted::reference();
   if (cVar5 == '\0') {
      pOVar7 = (Object*)0x0;
   }

   pcVar3 = *(code**)( *(long*)pOVar7 + 0x1c8 );
   if ((Camera3DGizmoPlugin()::{lambda()
   #1
   ( iVar6 = __cxa_guard_acquire(&Camera3DGizmoPlugin()::{lambda()#1}::operator()()::sname),
     iVar6 != 0) );
   {
      _scs_create((char *)&Camera3DGizmoPlugin()::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &Camera3DGizmoPlugin()::, {
            lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&Camera3DGizmoPlugin()::{lambda()#1}::operator()()::sname);
  }, ( *pcVar3 )((StrRange*)&local_80, pOVar7, &Camera3DGizmoPlugin()::, {
                     lambda()
                     #1
                     local_78 = "camera_icon";
                     local_88 = 0;
                     local_70 = 0xb;
                     String::parse_latin1((StrRange*)&local_88);
                     EditorNode3DGizmoPlugin::create_icon_material((String*)this, (Ref*)&local_88, SUB81((StrRange*)&local_80, 0), (Color*)0x0);
                     lVar4 = local_88;
                     if (local_88 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_88 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_88 = 0;
                           Memory::free_static((void*)( lVar4 + -0x10 ), false);
                        }

                     }

                     if (( ( local_80 == (Object*)0x0 ) || ( cVar5 = RefCounted::unreference() ),pOVar2 = local_80,cVar5 == '\0' )) {
                        cVar5 = RefCounted::unreference();
                     }
 else {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                        cVar5 = RefCounted::unreference();
                     }

                     if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler(pOVar7) ),cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                     }

                     local_80 = (Object*)0x0;
                     local_78 = "handles";
                     local_88 = 0;
                     local_70 = 7;
                     String::parse_latin1((StrRange*)&local_88);
                     EditorNode3DGizmoPlugin::create_handle_material((String*)this, SUB81((StrRange*)&local_88, 0), (Ref*)0x0);
                     lVar4 = local_88;
                     if (local_88 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_88 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_88 = 0;
                           Memory::free_static((void*)( lVar4 + -0x10 ), false);
                        }

                     }

                     if (( ( local_80 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar7 = local_80,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
                     Memory::free_static(pOVar7, false);
                  }
, if (local_40 != *(long *)(in_FS_OFFSET + 0x28));
            {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }
, /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */, /* Camera3DGizmoPlugin::_find_closest_angle_to_half_pi_arc(Vector3 const&, Vector3 const&, float,
   Transform3D const&) */, undefined8
Camera3DGizmoPlugin::_find_closest_angle_to_half_pi_arc
          (Vector3 *param_1, Vector3 * param_2, float, param_3, Transform3D * param_4);
      {
         float fVar1;
         float fVar2;
         int iVar3;
         long in_FS_OFFSET;
         float fVar4;
         float fVar5;
         float local_ac;
         float local_a8;
         float local_a4;
         float local_88;
         float local_84;
         float local_80;
         float local_7c;
         undefined8 local_78;
         float local_70;
         undefined8 local_68;
         float local_60;
         float local_5c[3];
         undefined8 local_50;
         float local_48;
         long local_40;
         iVar3 = 1;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_a8 = _LC26;
         local_ac = _LC27;
         local_a4 = _LC29;
         local_88 = 0.0;
         local_84 = 0.0;
         fVar5 = _LC21;
         fVar4 = 0.0;
         while (true) {
            fVar2 = local_a8;
            fVar1 = local_ac;
            local_5c[0] = 0.0;
            local_5c[1] = 0.0;
            local_70 = (float)( (uint)fVar4 ^ _LC30 ) * param_3;
            local_5c[2] = 0.0;
            local_50 = 0;
            local_48 = 0.0;
            local_78 = CONCAT44(param_3 * 0.0, fVar5 * param_3);
            local_68 = CONCAT44(param_3 * 0.0, local_a8 * param_3);
            local_60 = (float)( (uint)local_ac ^ _LC30 ) * param_3;
            Geometry3D::get_closest_points_between_segments((Vector3*)&local_78, (Vector3*)&local_68, param_1, param_2, (Vector3*)local_5c, (Vector3*)&local_50);
            fVar5 = SQRT(( (float)local_50 - local_5c[0] ) * ( (float)local_50 - local_5c[0] ) + ( local_50._4_4_ - local_5c[1] ) * ( local_50._4_4_ - local_5c[1] ) + ( local_48 - local_5c[2] ) * ( local_48 - local_5c[2] ));
            if (fVar5 < local_a4) {
               local_84 = local_5c[2];
               local_88 = local_5c[0];
               local_a4 = fVar5;
            }

            iVar3 = iVar3 + 1;
            if (iVar3 == 0x41) break;
            sincosf((float)( (double)iVar3 * __LC31 * __LC32 * __LC33 ), &local_7c, &local_80);
            local_a8 = local_80;
            local_ac = local_7c;
            fVar5 = fVar2;
            fVar4 = fVar1;
         }
;
         local_50 = CONCAT44((uint)local_84 ^ _LC30, local_88);
         fVar5 = (float)Vector2::angle();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return CONCAT44((int)( ( ulong )(_LC34 - (double)fVar5) >> 0x20 ), (float)( _LC34 - (double)fVar5 ) * __LC35);
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      /* Camera3DGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*, Vector2 const&)
    */
      void Camera3DGizmoPlugin::set_handle(Camera3DGizmoPlugin *this, EditorNode3DGizmo *param_1, int param_2, bool param_3, Camera3D *param_4, Vector2 *param_5) {
         int iVar1;
         StringName *pSVar2;
         long in_FS_OFFSET;
         float fVar3;
         float fVar4;
         undefined8 uVar5;
         float fVar8;
         double dVar6;
         double dVar7;
         float fVar9;
         float fVar10;
         float fVar11;
         float fVar12;
         float fStack_1c4;
         float fStack_1c0;
         long local_148;
         undefined8 local_140;
         undefined8 local_130;
         undefined8 local_120;
         undefined4 local_118;
         float local_114[3];
         float local_108;
         float fStack_104;
         float fStack_100;
         float fStack_fc;
         undefined8 local_f8;
         int local_e8[20];
         float local_98;
         float fStack_94;
         float fStack_90;
         float fStack_8c;
         float local_88;
         float fStack_84;
         float fStack_80;
         float fStack_7c;
         float local_78;
         float fStack_74;
         undefined8 uStack_70;
         int local_68[14];
         long local_30;
         pSVar2 = *(StringName**)( param_1 + 0x1f0 );
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (pSVar2 != (StringName*)0x0) {
            pSVar2 = (StringName*)__dynamic_cast(pSVar2, &Object::typeinfo, &Camera3D::typeinfo, 0);
         }

         Node3D::get_global_transform();
         Transform3D::affine_inverse();
         fVar9 = fStack_80;
         uVar5 = ( **(code**)( *(long*)param_4 + 0x208 ) )(param_4, param_5);
         local_140._0_4_ = (float)uVar5;
         fVar3 = (float)local_140;
         local_140._4_4_ = (float)( (ulong)uVar5 >> 0x20 );
         fVar4 = local_140._4_4_;
         fVar10 = fVar9;
         local_140 = uVar5;
         local_130 = ( **(code**)( *(long*)param_4 + 0x200 ) )(param_4, param_5);
         fVar8 = (float)( (ulong)local_130 >> 0x20 );
         fVar11 = _LC41 * (float)local_130 + fVar3;
         fVar12 = _UNK_001063bc * fVar8 + fVar4;
         fVar10 = fVar10 * _LC41 + fVar9;
         fStack_1c4 = (float)uStack_70;
         fStack_1c0 = (float)( (ulong)uStack_70 >> 0x20 );
         local_108 = fVar4 * fStack_94 + fVar3 * local_98 + fVar9 * fStack_90 + fStack_74;
         fStack_104 = fVar4 * local_88 + fVar3 * fStack_8c + fStack_84 * fVar9 + fStack_1c4;
         fStack_100 = fVar4 * fStack_84 + fVar3 * fStack_80 + fVar9 * local_78 + fStack_1c0;
         fStack_fc = ( _LC41 * fVar8 + fVar4 ) * fStack_94 + ( (float)local_130 * _LC41 + fVar3 ) * local_98 + fStack_90 * fVar10 + fStack_74;
         local_f8 = CONCAT44(fVar11 * fStack_80 + fStack_7c * fVar12 + fVar10 * local_78 + fStack_1c0, fVar12 * local_88 + fStack_8c * fVar11 + fVar10 * fStack_84 + fStack_1c4);
         iVar1 = Camera3D::get_projection();
         if (iVar1 == 0) {
            Node3D::get_global_transform();
            fVar3 = (float)_find_closest_angle_to_half_pi_arc((Vector3*)&local_108, (Vector3*)&fStack_fc, _LC21, (Transform3D*)local_68);
            dVar6 = (double)fVar3 + (double)fVar3;
            dVar7 = _LC36;
            if (( _LC36 <= dVar6 ) && ( dVar7 = dVar6 <= _LC37 )) {
               dVar7 = dVar6;
            }

            Variant::Variant((Variant*)local_e8, dVar7);
            StringName::StringName((StringName*)&local_148, "fov", false);
            Object::set(pSVar2, (Variant*)&local_148, (bool*)local_e8);
            if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
               StringName::unref();
            }

            if (Variant::needs_deinit[local_e8[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            iVar1 = Camera3D::get_keep_aspect_mode();
            if (iVar1 == 0) {
               local_120 = 0x45800000;
               for (int i = 0; i < 3; i++) {
                  local_114[i] = 0;
               }

               for (int i = 0; i < 3; i++) {
                  local_e8[i] = 0;
               }

               local_68[0] = 0;
               local_68[1] = 0;
               local_118 = _LC43;
               local_68[2] = _LC43;
               Geometry3D::get_closest_points_between_segments((Vector3*)local_68, (Vector3*)&local_120, (Vector3*)&local_108, (Vector3*)&fStack_fc, (Vector3*)local_114, (Vector3*)local_e8);
               fVar3 = local_114[0] + local_114[0];
            }
 else {
               local_114[0] = 0.0;
               local_114[1] = 0.0;
               local_120 = _LC44;
               local_114[2] = 0.0;
               for (int i = 0; i < 3; i++) {
                  local_e8[i] = 0;
               }

               local_68[0] = 0;
               local_68[1] = 0;
               local_118 = _LC43;
               local_68[2] = _LC43;
               Geometry3D::get_closest_points_between_segments((Vector3*)local_68, (Vector3*)&local_120, (Vector3*)&local_108, (Vector3*)&fStack_fc, (Vector3*)local_114, (Vector3*)local_e8);
               fVar3 = local_114[1] + local_114[1];
            }

            if (*(char*)( Node3DEditor::singleton + 0xe00 ) != *(char*)( Node3DEditor::singleton + 0xe01 )) {
               fVar4 = (float)Node3DEditor::get_translate_snap();
               dVar7 = (double)Math::snapped((double)fVar3, (double)fVar4);
               fVar3 = (float)dVar7;
            }

            fVar4 = _LC38;
            if (( _LC45 <= (double)fVar3 ) && ( fVar4 = _LC39 < fVar3 )) {
               fVar4 = _LC39;
            }

            Variant::Variant((Variant*)local_68, fVar4);
            StringName::StringName((StringName*)&local_148, "size", false);
            Object::set(pSVar2, (Variant*)&local_148, (bool*)local_68);
            if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
               StringName::unref();
            }

            if (Variant::needs_deinit[local_68[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */
      void Vector<Vector3>::push_back(undefined8 param_1, undefined4 param_2, long param_3) {
         undefined8 *puVar1;
         int iVar2;
         long lVar3;
         long lVar4;
         if (*(long*)( param_3 + 8 ) == 0) {
            lVar3 = 1;
         }
 else {
            lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
         }

         iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3>*)( param_3 + 8 ), lVar3);
         if (iVar2 == 0) {
            if (*(long*)( param_3 + 8 ) == 0) {
               lVar4 = -1;
               lVar3 = 0;
            }
 else {
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

      /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
      /* Camera3DGizmoPlugin::redraw(EditorNode3DGizmo*) */
      void Camera3DGizmoPlugin::redraw(Camera3DGizmoPlugin *this, EditorNode3DGizmo *param_1) {
         long *plVar1;
         Object *pOVar2;
         undefined1 auVar3[12];
         undefined1 auVar4[12];
         float fVar5;
         long lVar6;
         EditorNode3DGizmo *pEVar7;
         char cVar8;
         int iVar9;
         Camera3D *pCVar10;
         Object *pOVar11;
         undefined8 uVar12;
         long in_FS_OFFSET;
         float fVar13;
         float fVar14;
         float fVar15;
         float fVar16;
         float extraout_XMM0_Db;
         undefined8 uVar17;
         undefined8 uVar18;
         undefined8 uVar19;
         undefined8 uVar20;
         uint uVar21;
         undefined8 uVar22;
         float fVar23;
         undefined8 uVar24;
         float fVar25;
         float local_640;
         float local_630;
         float local_610;
         float local_5d8;
         float local_5d0;
         float local_5cc[3];
         Object *local_5c0;
         Object *local_5b8;
         long local_5b0;
         Object *local_5a8;
         Object *local_5a0;
         Ref local_598[8];
         long local_590;
         Ref local_588[8];
         long local_580;
         EditorNode3DGizmo *local_578;
         long local_570;
         Object *local_568;
         undefined8 local_560;
         undefined8 local_558;
         float local_550;
         undefined8 local_548;
         float local_540;
         undefined8 local_538;
         uint local_530;
         undefined8 local_528;
         uint local_520;
         undefined8 local_518;
         float local_510;
         undefined8 local_508;
         float local_500;
         undefined8 local_4f8;
         uint local_4f0;
         undefined8 local_4e8;
         uint local_4e0;
         undefined8 local_4d8;
         float local_4d0;
         undefined8 local_4c8;
         float local_4c0;
         undefined8 local_4b8;
         float local_4b0;
         undefined8 local_4a8;
         float local_4a0;
         undefined8 local_498;
         uint local_490;
         undefined8 local_488;
         uint local_480;
         undefined8 local_478;
         uint local_470;
         undefined8 local_468;
         uint local_460;
         undefined8 local_458;
         float local_450;
         undefined8 local_448;
         float local_440;
         undefined8 local_438;
         float local_430;
         undefined8 local_428;
         float local_420;
         undefined8 local_418;
         undefined4 local_410;
         undefined8 local_408;
         undefined4 local_400;
         undefined8 local_3f8;
         undefined4 local_3f0;
         undefined8 local_3e8;
         undefined4 local_3e0;
         undefined8 local_3d8;
         undefined4 local_3d0;
         undefined8 local_3c8;
         undefined4 local_3c0;
         undefined8 local_3b8;
         undefined4 local_3b0;
         undefined8 local_3a8;
         undefined4 local_3a0;
         undefined8 local_398;
         float local_390;
         undefined8 local_388;
         float local_380;
         undefined8 local_378;
         float local_370;
         undefined8 local_368;
         float local_360;
         undefined8 local_358;
         float local_350;
         undefined8 local_348;
         float local_340;
         undefined8 local_338;
         float local_330;
         undefined8 local_328;
         float local_320;
         undefined8 local_318;
         undefined4 local_310;
         undefined8 local_308;
         float local_300;
         undefined8 local_2f8;
         float local_2f0;
         undefined8 local_2e8;
         float local_2e0;
         undefined8 local_2d8;
         float local_2d0;
         undefined8 local_2c8;
         undefined4 local_2c0;
         undefined8 local_2b8;
         undefined4 local_2b0;
         undefined8 local_2a8;
         undefined4 local_2a0;
         undefined8 local_298;
         undefined4 local_290;
         undefined8 local_288;
         float local_280;
         undefined8 local_278;
         float local_270;
         undefined8 local_268;
         float local_260;
         undefined8 local_258;
         float local_250;
         undefined8 local_248;
         undefined4 local_240;
         undefined8 local_238;
         undefined4 local_230;
         undefined8 local_228;
         undefined4 local_220;
         undefined8 local_218;
         float local_210;
         undefined8 local_208;
         float local_200;
         undefined8 local_1f8;
         float local_1f0;
         undefined8 local_1e8;
         float local_1e0;
         undefined8 local_1d8;
         float local_1d0;
         undefined8 local_1c8;
         float local_1c0;
         undefined8 local_1b8;
         float local_1b0;
         undefined8 local_1a8;
         float local_1a0;
         undefined8 local_198;
         float local_190;
         undefined8 local_188;
         float local_180;
         undefined8 local_178;
         float local_170;
         undefined8 local_168;
         float local_160;
         undefined8 local_158;
         float local_150;
         undefined8 local_148;
         float local_140;
         undefined8 local_138;
         float local_130;
         undefined8 local_128;
         float local_120;
         undefined8 local_118;
         float local_110;
         undefined8 local_108;
         float local_100;
         undefined8 local_f8;
         float local_f0;
         undefined8 local_e8;
         float local_e0;
         undefined8 local_d8;
         float local_d0;
         undefined8 local_c8;
         float local_c0;
         undefined8 local_b8;
         float local_b0;
         undefined8 local_a8;
         float local_a0;
         undefined8 local_98;
         float local_90;
         undefined8 local_88;
         float local_80;
         float local_7c;
         undefined4 uStack_78;
         uint local_74;
         float local_70;
         undefined4 uStack_6c;
         undefined4 uStack_68;
         undefined4 local_64;
         float fStack_60;
         float local_5c;
         undefined8 local_58;
         undefined8 uStack_50;
         long local_40;
         pCVar10 = *(Camera3D**)( param_1 + 0x1f0 );
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (pCVar10 != (Camera3D*)0x0) {
            pCVar10 = (Camera3D*)__dynamic_cast(pCVar10, &Object::typeinfo, &Camera3D::typeinfo, 0);
         }

         ( **(code**)( *(long*)param_1 + 0x160 ) )(param_1);
         local_590 = 0;
         local_580 = 0;
         local_578 = param_1;
         cVar8 = RefCounted::init_ref();
         if (cVar8 == '\0') {
            local_578 = (EditorNode3DGizmo*)0x0;
         }

         local_5a0 = (Object*)0x0;
         local_560 = 0xf;
         local_568 = (Object*)0x10392d;
         String::parse_latin1((StrRange*)&local_5a0);
         EditorNode3DGizmoPlugin::get_material((String*)&local_568, (Ref*)this);
         local_5c0 = (Object*)0x0;
         if (local_568 != (Object*)0x0) {
            pOVar11 = (Object*)__dynamic_cast(local_568, &Object::typeinfo, &Material::typeinfo, 0);
            if (pOVar11 != (Object*)0x0) {
               local_5c0 = pOVar11;
               cVar8 = RefCounted::reference();
               if (cVar8 == '\0') {
                  local_5c0 = (Object*)0x0;
               }

               if (local_568 == (Object*)0x0) goto LAB_00101735;
            }

            cVar8 = RefCounted::unreference();
            pOVar11 = local_568;
            if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler(local_568) ),cVar8 != '\0') {
               ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
               Memory::free_static(pOVar11, false);
            }

         }

         LAB_00101735:pOVar11 = local_5a0;
         if (local_5a0 != (Object*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_5a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_5a0 = (Object*)0x0;
               Memory::free_static((void*)( (long)pOVar11 + -0x10 ), false);
            }

         }

         if (( ( local_578 != (EditorNode3DGizmo*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pEVar7 = local_578,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pEVar7 + 0x140 ))(pEVar7);
         Memory::free_static(pEVar7, false);
      }

      local_578 = param_1;
      cVar8 = RefCounted::init_ref();
      if (cVar8 == '\0') {
         local_578 = (EditorNode3DGizmo*)0x0;
      }

      local_5a0 = (Object*)0x0;
      local_568 = (Object*)0x10394b;
      local_560 = 0xb;
      String::parse_latin1((StrRange*)&local_5a0);
      EditorNode3DGizmoPlugin::get_material((String*)&local_568, (Ref*)this);
      local_5b8 = (Object*)0x0;
      if (local_568 != (Object*)0x0) {
         pOVar11 = (Object*)__dynamic_cast(local_568, &Object::typeinfo, &Material::typeinfo);
         if (pOVar11 != (Object*)0x0) {
            local_5b8 = pOVar11;
            cVar8 = RefCounted::reference();
            if (cVar8 == '\0') {
               local_5b8 = (Object*)0x0;
            }

            if (local_568 == (Object*)0x0) goto LAB_00101830;
         }

         cVar8 = RefCounted::unreference();
         pOVar11 = local_568;
         if (( cVar8 != '\0' ) && ( cVar8 = predelete_handler(local_568) ),cVar8 != '\0') {
            ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
            Memory::free_static(pOVar11, false);
         }

      }

      LAB_00101830:pOVar11 = local_5a0;
      if (local_5a0 != (Object*)0x0) {
         LOCK();
         pOVar2 = local_5a0 + -0x10;
         *(long*)pOVar2 = *(long*)pOVar2 + -1;
         UNLOCK();
         if (*(long*)pOVar2 == 0) {
            local_5a0 = (Object*)0x0;
            Memory::free_static(pOVar11 + -0x10, false);
         }

      }

      if (( ( local_578 != (EditorNode3DGizmo*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pEVar7 = local_578,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pEVar7 + 0x140 ))(pEVar7);
      Memory::free_static(pEVar7, false);
   }

   uVar12 = Node3DEditor::get_camera_viewport_size(pCVar10);
   fVar23 = _LC21;
   if (( (int)uVar12 < 1 ) || ( iVar9 = iVar9 < 1 )) {
      local_630 = _LC21;
      fVar15 = _LC21;
   }
 else {
      local_630 = (float)(int)uVar12 / (float)iVar9;
      fVar15 = local_630;
      if (_LC21 < local_630) {
         fVar23 = _LC21 / local_630;
         fVar15 = _LC21;
      }

   }

   iVar9 = Camera3D::get_projection();
   if (iVar9 == 1) {
      iVar9 = Camera3D::get_keep_aspect_mode();
      fVar15 = (float)Camera3D::get_size();
      fVar23 = _LC56;
      fVar15 = fVar15 * _LC56;
      if (iVar9 == 0) {
         local_70 = fVar15 + 0.0;
         uStack_6c = 0;
         uStack_68 = 0xbf800000;
         Vector<Vector3>::push_back(local_70, 0xbf800000, local_588);
         local_5d8 = _LC43;
         local_640 = fVar15;
         fVar13 = fVar15 / local_630;
      }
 else {
         local_64 = 0;
         fStack_60 = fVar15 + 0.0;
         local_640 = local_630 * fVar15;
         local_5d8 = _LC43;
         local_5c = _LC43;
         Vector<Vector3>::push_back((ulong)(uint)fStack_60 << 0x20, 0xbf800000, local_588);
         fVar13 = fVar15;
      }

      uVar22 = CONCAT44(_LC59._4_4_ ^ (uint)fVar13, (uint)_LC59 ^ (uint)local_640);
      uVar24 = CONCAT44(0.0 - fVar13, 0.0 - local_640);
      uVar12 = CONCAT44(fVar13 + 0.0, local_640 + 0.0);
      local_410 = 0x80000000;
      local_418 = uVar22;
      Vector<Vector3>::push_back(uVar22, 0x80000000, local_598);
      local_400 = 0;
      uVar19 = CONCAT44(0.0 - fVar13, local_640);
      local_408 = uVar19;
      Vector<Vector3>::push_back(uVar19, 0, local_598);
      local_3f0 = 0;
      local_3f8 = uVar19;
      Vector<Vector3>::push_back(uVar19, 0, local_598);
      local_3e0 = 0;
      uVar20 = CONCAT44(0.0 - fVar13, local_640 + 0.0);
      local_3e8 = uVar12;
      Vector<Vector3>::push_back(uVar12, 0, local_598);
      local_3d0 = 0;
      local_3d8 = uVar12;
      Vector<Vector3>::push_back(uVar12, 0, local_598);
      local_3c0 = 0;
      uVar17 = CONCAT44(fVar13, 0.0 - local_640);
      uVar18 = CONCAT44(fVar13 + 0.0, ( 0.0 - local_640 ) + 0.0);
      local_3c8 = uVar17;
      Vector<Vector3>::push_back(uVar17, 0, local_598);
      local_3b0 = 0;
      local_3b8 = uVar17;
      Vector<Vector3>::push_back(uVar17, 0, local_598);
      local_3a0 = 0x80000000;
      local_3a8 = uVar22;
      Vector<Vector3>::push_back(uVar22, 0x80000000, local_598);
      local_390 = local_5d8;
      local_398 = uVar24;
      Vector<Vector3>::push_back(uVar24, local_5d8, local_598);
      local_380 = local_5d8;
      local_388 = uVar20;
      Vector<Vector3>::push_back(uVar20, local_5d8, local_598);
      local_370 = local_5d8;
      local_378 = uVar20;
      Vector<Vector3>::push_back(uVar20, local_5d8, local_598);
      local_360 = local_5d8;
      local_368 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_350 = local_5d8;
      local_358 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_340 = local_5d8;
      local_348 = uVar18;
      Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
      local_330 = local_5d8;
      local_338 = uVar18;
      Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
      local_320 = local_5d8;
      local_328 = uVar24;
      Vector<Vector3>::push_back(uVar24, local_5d8, local_598);
      local_310 = 0;
      local_318 = uVar12;
      Vector<Vector3>::push_back(uVar12, 0, local_598);
      local_300 = local_5d8;
      local_308 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_2f0 = local_5d8;
      local_2f8 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_2e0 = local_5d8;
      local_2e8 = uVar18;
      Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
      local_2d0 = local_5d8;
      local_2d8 = uVar18;
      Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
      local_2c0 = 0;
      local_2c8 = uVar17;
      Vector<Vector3>::push_back(uVar17, 0, local_598);
      local_2b0 = 0;
      local_2b8 = uVar17;
      Vector<Vector3>::push_back(uVar17, 0, local_598);
      local_2a0 = 0;
      local_2a8 = uVar12;
      Vector<Vector3>::push_back(uVar12, 0, local_598);
      local_290 = 0;
      local_298 = uVar19;
      Vector<Vector3>::push_back(uVar19, 0, local_598);
      local_280 = local_5d8;
      local_288 = uVar20;
      Vector<Vector3>::push_back(uVar20, local_5d8, local_598);
      local_270 = local_5d8;
      local_278 = uVar20;
      Vector<Vector3>::push_back(uVar20, local_5d8, local_598);
      local_260 = local_5d8;
      local_268 = uVar24;
      Vector<Vector3>::push_back(uVar24, local_5d8, local_598);
      local_250 = local_5d8;
      local_258 = uVar24;
      Vector<Vector3>::push_back(uVar24, local_5d8, local_598);
      local_240 = 0x80000000;
      local_248 = uVar22;
      Vector<Vector3>::push_back(uVar22, 0x80000000, local_598);
      local_230 = 0x80000000;
      local_238 = uVar22;
      Vector<Vector3>::push_back(uVar22, 0x80000000, local_598);
      local_220 = 0;
      local_228 = uVar19;
      Vector<Vector3>::push_back(uVar19, 0, local_598);
      if ((double)fVar15 * __LC58 <= (double)local_640) {
         local_640 = (float)( (double)fVar15 * __LC58 );
      }

      uStack_50 = CONCAT44(uStack_50._4_4_, local_5d8);
      local_58 = ( ulong )(uint)(fVar23 * fVar15 + fVar13) << 0x20;
      Vector<Vector3>::push_back(local_58, local_5d8, local_598);
      local_210 = local_5d8;
      uVar12 = CONCAT44(fVar13 + 0.0, local_640 + 0.0);
      local_218 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_200 = local_5d8;
      local_208 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_1f0 = local_5d8;
      uVar12 = CONCAT44(fVar13 + 0.0, 0.0 - local_640);
      local_1f8 = uVar12;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_1e0 = local_5d8;
      local_1e8 = uVar12;
   }
 else {
      if (iVar9 == 2) {
         fVar16 = (float)Camera3D::get_size();
         fVar5 = _LC56;
         fVar16 = fVar16 * _LC56;
         fVar14 = (float)Camera3D::get_near();
         fVar13 = fVar16 * fVar16 + 0.0 + fVar14 * fVar14;
         if (fVar13 == 0.0) {
            local_5d8 = 0.0;
            fVar13 = 0.0;
            local_610 = 0.0;
         }
 else {
            fVar13 = SQRT(fVar13);
            local_610 = 0.0 / fVar13;
            local_5d8 = (float)( (uint)fVar14 ^ _LC30 ) / fVar13;
            fVar13 = fVar16 / fVar13;
         }

         fVar23 = fVar23 * fVar16;
         fVar13 = fVar13 * fVar15;
         Camera3D::get_frustum_offset();
         fVar15 = (float)Camera3D::get_frustum_offset();
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         fVar25 = extraout_XMM0_Db + fVar23 + local_610;
         local_5d8 = local_5d8 + 0.0;
         uVar17 = CONCAT44(fVar25, fVar13 + 0.0 + fVar15);
         local_1d8 = uVar17;
         local_1d0 = local_5d8;
         Vector<Vector3>::push_back(uVar17, local_5d8, local_598);
         local_1c8 = uVar17;
         local_1c0 = local_5d8;
         Vector<Vector3>::push_back(uVar17, local_5d8, local_598);
         fVar14 = extraout_XMM0_Db + ( local_610 - fVar23 );
         uVar19 = CONCAT44(fVar14, fVar13 + fVar15);
         local_1b8 = uVar19;
         local_1b0 = local_5d8;
         Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
         local_1a8 = uVar19;
         local_1a0 = local_5d8;
         Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         uVar12 = CONCAT44(fVar25, ( 0.0 - fVar13 ) + fVar15);
         local_198 = uVar12;
         local_190 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         local_188 = uVar12;
         local_180 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         uVar18 = CONCAT44(fVar14, fVar15 - fVar13);
         local_178 = uVar18;
         local_170 = local_5d8;
         Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
         local_168 = uVar18;
         local_160 = local_5d8;
         Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         local_158 = uVar17;
         local_150 = local_5d8;
         Vector<Vector3>::push_back(uVar17, local_5d8, local_598);
         local_148 = uVar17;
         local_140 = local_5d8;
         Vector<Vector3>::push_back(uVar17, local_5d8, local_598);
         local_138 = uVar12;
         local_130 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         local_128 = uVar12;
         local_120 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         local_58 = 0;
         uStack_50._0_4_ = 0;
         Vector<Vector3>::push_back(0, 0, local_598);
         local_118 = uVar19;
         local_110 = local_5d8;
         Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
         local_108 = uVar19;
         local_100 = local_5d8;
         Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
         local_f8 = uVar18;
         local_f0 = local_5d8;
         Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
         local_e8 = uVar18;
         local_e0 = local_5d8;
         Vector<Vector3>::push_back(uVar18, local_5d8, local_598);
         local_58 = 0;
         uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
         Vector<Vector3>::push_back(0, 0, local_598);
         if ((double)fVar16 * __LC58 <= (double)fVar13) {
            fVar13 = (float)( (double)fVar16 * __LC58 );
         }

         uVar17 = CONCAT44(fVar5 * fVar16 + fVar23 + extraout_XMM0_Db, fVar15 + 0.0);
         local_d8 = uVar17;
         local_d0 = local_5d8;
         Vector<Vector3>::push_back(uVar17, local_5d8, local_598);
         uVar12 = CONCAT44(fVar25, fVar13 + 0.0 + fVar15);
         local_c8 = uVar12;
         local_c0 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         local_b8 = uVar12;
         local_b0 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         uVar12 = CONCAT44(fVar25, ( 0.0 - fVar13 ) + fVar15);
         local_a8 = uVar12;
         local_a0 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         local_98 = uVar12;
         local_90 = local_5d8;
         Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
         local_88 = uVar17;
         local_80 = local_5d8;
         Vector<Vector3>::push_back(uVar17, local_5d8, local_598);
         goto LAB_0010190f;
      }

      if (iVar9 != 0) goto LAB_0010190f;
      fVar13 = (float)Camera3D::get_fov();
      fVar5 = _LC56;
      uVar12 = 0;
      sincosf(fVar13 * _LC56 * __LC57, local_5cc, &local_5d0);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      fVar16 = fVar23 * local_5cc[0];
      fVar13 = fVar15 * local_5cc[0];
      uVar19 = CONCAT44(fVar16 + 0.0, fVar15 * local_5cc[0] + 0.0);
      auVar3._4_8_ = uVar12;
      auVar3._0_4_ = fVar16 + 0.0;
      auVar4._4_8_ = auVar3._0_8_ & 0xffffffff;
      auVar4._0_4_ = 0.0 - fVar15 * local_5cc[0];
      uVar12 = auVar4._0_8_;
      uVar21 = (uint)local_5d0 ^ _LC30;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_5d8 = 0.0 - local_5d0;
      fVar23 = fVar23 * local_5cc[0] + 0.0;
      local_558 = uVar19;
      local_550 = local_5d8;
      Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
      local_548 = uVar19;
      local_540 = local_5d8;
      Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
      uVar18 = CONCAT44(0.0 - fVar16, fVar13);
      uVar17 = CONCAT44(0.0 - fVar16, _LC30 ^ (uint)fVar13);
      local_538 = uVar18;
      local_530 = uVar21;
      Vector<Vector3>::push_back(uVar18, uVar21, local_598);
      local_528 = uVar18;
      local_520 = uVar21;
      Vector<Vector3>::push_back(uVar18, uVar21, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_518 = uVar12;
      local_510 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_508 = uVar12;
      local_500 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_4f8 = uVar17;
      local_4f0 = uVar21;
      Vector<Vector3>::push_back(uVar17, uVar21, local_598);
      local_4e8 = uVar17;
      local_4e0 = uVar21;
      Vector<Vector3>::push_back(uVar17, uVar21, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_4d8 = uVar19;
      local_4d0 = local_5d8;
      Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
      local_4c8 = uVar19;
      local_4c0 = local_5d8;
      Vector<Vector3>::push_back(uVar19, local_5d8, local_598);
      local_4b8 = uVar12;
      local_4b0 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_4a8 = uVar12;
      local_4a0 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      local_498 = uVar18;
      local_490 = uVar21;
      Vector<Vector3>::push_back(uVar18, uVar21, local_598);
      local_488 = uVar18;
      local_480 = uVar21;
      Vector<Vector3>::push_back(uVar18, uVar21, local_598);
      local_478 = uVar17;
      local_470 = uVar21;
      Vector<Vector3>::push_back(uVar17, uVar21, local_598);
      local_468 = uVar17;
      local_460 = uVar21;
      Vector<Vector3>::push_back(uVar17, uVar21, local_598);
      local_58 = 0;
      uStack_50._0_4_ = 0;
      Vector<Vector3>::push_back(0, 0, local_598);
      uStack_78 = 0;
      local_7c = fVar13;
      local_74 = uVar21;
      Vector<Vector3>::push_back(fVar13, uVar21, local_588);
      if ((double)local_5cc[0] * __LC58 <= (double)fVar13) {
         fVar13 = (float)( (double)local_5cc[0] * __LC58 );
      }

      uStack_50 = CONCAT44(uStack_50._4_4_, uVar21);
      local_58 = ( ulong )(uint)(fVar5 * local_5cc[0] + fVar16) << 0x20;
      Vector<Vector3>::push_back(local_58, uVar21, local_598);
      uVar12 = CONCAT44(fVar23, fVar13 + 0.0);
      local_458 = uVar12;
      local_450 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_448 = uVar12;
      local_440 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      uVar12 = CONCAT44(fVar23, 0.0 - fVar13);
      local_438 = uVar12;
      local_430 = local_5d8;
      Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
      local_428 = uVar12;
      local_420 = local_5d8;
   }

   Vector<Vector3>::push_back(uVar12, local_5d8, local_598);
   Vector<Vector3>::push_back(local_58, uStack_50 & 0xffffffff, local_598);
   LAB_0010190f:local_58 = CONCAT44(_LC21, _LC21);
   uStack_50 = CONCAT44(_LC21, _LC21);
   EditorNode3DGizmo::add_lines((Vector*)param_1, local_598, SUB81(&local_5c0, 0), (Color*)0x0);
   local_58 = CONCAT44(_UNK_00106344, _LC21);
   uStack_50 = _UNK_00106348;
   EditorNode3DGizmo::add_unscaled_billboard((Ref*)param_1, _LC61, (Color*)&local_5b8);
   EditorNode3DGizmo::add_collision_segments((Vector*)param_1);
   if (local_580 != 0) {
      local_570 = 0;
      local_568 = (Object*)0x103957;
      local_5a8 = (Object*)0x0;
      local_5b0 = 0;
      local_560 = 7;
      String::parse_latin1((StrRange*)&local_5b0);
      EditorNode3DGizmoPlugin::get_material((String*)&local_5a0, (Ref*)this);
      local_568 = (Object*)0x0;
      if (( ( local_5a0 != (Object*)0x0 ) && ( pOVar11 = (Object*)__dynamic_cast(local_5a0, &Object::typeinfo, &Material::typeinfo, 0) ),pOVar11 != (Object*)0x0 )) {
         local_568 = (Object*)0x0;
      }

      EditorNode3DGizmo::add_handles((Vector*)param_1, local_588, (Vector*)&local_568, SUB81(&local_578, 0), false);
      if (( ( local_568 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar11 = local_568,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
      Memory::free_static(pOVar11, false);
   }

   if (( ( local_5a0 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar11 = local_5a0,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
   Memory::free_static(pOVar11, false);
}
lVar6 = local_5b0;if (local_5b0 != 0) {
   LOCK();
   plVar1 = (long*)( local_5b0 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_5b0 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

}
if (( ( local_5a8 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar11 = local_5a8,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}lVar6 = local_570;if (local_570 != 0) {
   LOCK();
   plVar1 = (long*)( local_570 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_570 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

}
}if (( ( local_5b8 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar11 = local_5b8,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}if (( ( local_5c0 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),pOVar11 = local_5c0,cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);Memory::free_static(pOVar11, false);}lVar6 = local_580;if (local_580 != 0) {
   LOCK();
   plVar1 = (long*)( local_580 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_580 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

}
lVar6 = local_590;if (local_590 != 0) {
   LOCK();
   plVar1 = (long*)( local_590 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_590 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* Camera3DGizmoPlugin::is_class_ptr(void*) const */uint Camera3DGizmoPlugin::is_class_ptr(Camera3DGizmoPlugin *this, void *param_1) {
   return (uint)CONCAT71(0x1062, (undefined4*)param_1 == &EditorNode3DGizmoPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1062, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1062, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1062, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1062, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* Camera3DGizmoPlugin::_getv(StringName const&, Variant&) const */undefined8 Camera3DGizmoPlugin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Camera3DGizmoPlugin::_setv(StringName const&, Variant const&) */undefined8 Camera3DGizmoPlugin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Camera3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */void Camera3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* Camera3DGizmoPlugin::_property_can_revertv(StringName const&) const */undefined8 Camera3DGizmoPlugin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* Camera3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */undefined8 Camera3DGizmoPlugin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Camera3DGizmoPlugin::_notificationv(int, bool) */void Camera3DGizmoPlugin::_notificationv(int param_1, bool param_2) {
   return;
}
/* Camera3DGizmoPlugin::~Camera3DGizmoPlugin() */void Camera3DGizmoPlugin::~Camera3DGizmoPlugin(Camera3DGizmoPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00105f70;
   EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   return;
}
/* Camera3DGizmoPlugin::~Camera3DGizmoPlugin() */void Camera3DGizmoPlugin::~Camera3DGizmoPlugin(Camera3DGizmoPlugin *this) {
   *(undefined***)this = &PTR__initialize_classv_00105f70;
   EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin*)this);
   operator_delete(this, 0x450);
   return;
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Camera3DGizmoPlugin::Camera3DGizmoPlugin() [clone .cold] */void Camera3DGizmoPlugin::Camera3DGizmoPlugin(Camera3DGizmoPlugin *this) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Camera3DGizmoPlugin::_get_class_namev() const */undefined8 *Camera3DGizmoPlugin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001039f3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001039f3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Camera3DGizmoPlugin");
         goto LAB_00103a5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "Camera3DGizmoPlugin");
   LAB_00103a5e:return &_get_class_namev();
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
/* Camera3DGizmoPlugin::get_class() const */void Camera3DGizmoPlugin::get_class(void) {
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
            if (pvVar5 == (void*)0x0) goto LAB_00103d24;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00103d24:if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* Camera3DGizmoPlugin::_initialize_classv() */void Camera3DGizmoPlugin::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
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
    local_58 = "Camera3DGizmoPlugin";
    local_70 = 0;
    local_50 = 0x13;
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
LAB_001044d8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001044d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001044f6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001044f6:
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
            if (lVar5 == 0) goto LAB_001047cf;
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
LAB_001047cf:
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
    if (cVar6 != '\0') goto LAB_00104883;
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
              if (lVar5 == 0) goto LAB_0010495b;
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
LAB_0010495b:
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
      if (cVar6 != '\0') goto LAB_00104883;
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
                if (lVar5 == 0) goto LAB_00104a3b;
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
LAB_00104a3b:
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
        if (cVar6 != '\0') goto LAB_00104883;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00104ae4;
    }
  }
LAB_00104883:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104ae4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Camera3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall Camera3DGizmoPlugin::is_class(Camera3DGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00104b5f;
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
LAB_00104b5f:
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
    if (cVar6 != '\0') goto LAB_00104c13;
  }
  cVar6 = String::operator==(param_1,"Camera3DGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_00104cd3;
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
LAB_00104cd3:
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
      if (cVar6 != '\0') goto LAB_00104c13;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00104d7c;
    }
  }
LAB_00104c13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104d7c:
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
LAB_00104f08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104f08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104f25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104f25:
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
LAB_00105358:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105358;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105375;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105375:
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



/* Camera3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
Camera3DGizmoPlugin::_get_property_listv(Camera3DGizmoPlugin *this,List *param_1,bool param_2)

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
  local_78 = "Camera3DGizmoPlugin";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Camera3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_001057a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001057a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001057c5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001057c5:
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
  StringName::StringName((StringName *)&local_78,"Camera3DGizmoPlugin",false);
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
LAB_00105e50:
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
  if (lVar7 == 0) goto LAB_00105e50;
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
LAB_00105dbc:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00105d4b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00105dbc;
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
LAB_00105d4b:
  puVar9[-1] = param_1;
  return 0;
}



/* Camera3DGizmoPlugin::Camera3DGizmoPlugin() */

void Camera3DGizmoPlugin::_GLOBAL__sub_I_Camera3DGizmoPlugin(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Camera3DGizmoPlugin::~Camera3DGizmoPlugin() */

void __thiscall Camera3DGizmoPlugin::~Camera3DGizmoPlugin(Camera3DGizmoPlugin *this)

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

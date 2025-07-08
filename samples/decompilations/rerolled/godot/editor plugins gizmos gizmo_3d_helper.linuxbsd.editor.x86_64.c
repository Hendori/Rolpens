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
/* Gizmo3DHelper::initialize_handle_action(Variant const&, Transform3D const&) */void Gizmo3DHelper::initialize_handle_action(Gizmo3DHelper *this, Variant *param_1, Transform3D *param_2) {
   undefined8 uVar1;
   Variant::operator =((Variant*)( this + 0x180 ), param_1);
   uVar1 = *(undefined8*)( param_2 + 8 );
   *(undefined8*)( this + 0x198 ) = *(undefined8*)param_2;
   *(undefined8*)( this + 0x1a0 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x18 );
   *(undefined8*)( this + 0x1a8 ) = *(undefined8*)( param_2 + 0x10 );
   *(undefined8*)( this + 0x1b0 ) = uVar1;
   uVar1 = *(undefined8*)( param_2 + 0x28 );
   *(undefined8*)( this + 0x1b8 ) = *(undefined8*)( param_2 + 0x20 );
   *(undefined8*)( this + 0x1c0 ) = uVar1;
   return;
}
/* Gizmo3DHelper::get_segment(Camera3D*, Vector2 const&, Vector3*) */void Gizmo3DHelper::get_segment(Gizmo3DHelper *this, Camera3D *param_1, Vector2 *param_2, Vector3 *param_3) {
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   undefined8 uVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fStack_f4;
   float fStack_f0;
   float local_a0;
   float fStack_9c;
   float local_94;
   float fStack_90;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   float fStack_44;
   float fStack_40;
   float fStack_3c;
   float local_38;
   float fStack_34;
   undefined8 uStack_30;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   Transform3D::affine_inverse();
   fVar4 = fStack_50;
   uVar3 = ( **(code**)( *(long*)param_1 + 0x208 ) )(param_1, param_2);
   local_a0 = (float)uVar3;
   fStack_9c = (float)( (ulong)uVar3 >> 0x20 );
   fVar2 = fVar4;
   uVar3 = ( **(code**)( *(long*)param_1 + 0x200 ) )(param_1, param_2);
   fStack_90 = (float)( (ulong)uVar3 >> 0x20 );
   local_94 = (float)uVar3;
   fVar6 = fStack_90 * _LC4 + fStack_9c;
   fVar5 = fVar2 * _LC4 + fVar4;
   fVar2 = _LC4 * local_94 + local_a0;
   fStack_f4 = (float)uStack_30;
   fStack_f0 = (float)( (ulong)uStack_30 >> 0x20 );
   *(float*)param_3 = local_a0 * local_58 + fStack_9c * fStack_54 + fVar4 * fStack_50 + fStack_34;
   *(float*)( param_3 + 4 ) = local_a0 * fStack_4c + fStack_9c * local_48 + fVar4 * fStack_44 + fStack_f4;
   *(float*)( param_3 + 8 ) = local_a0 * fStack_40 + fStack_9c * fStack_44 + fVar4 * local_38 + fStack_f0;
   *(float*)( param_3 + 0xc ) = fVar2 * local_58 + fVar6 * fStack_54 + fVar5 * fStack_50 + fStack_34;
   *(ulong*)( param_3 + 0x10 ) = CONCAT44(fVar2 * fStack_40 + fVar6 * fStack_3c + fVar5 * local_38 + fStack_f0, fVar2 * fStack_4c + fVar6 * local_48 + fVar5 * fStack_44 + fStack_f4);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Gizmo3DHelper::box_get_handle_name(int) const */StrRange *Gizmo3DHelper::box_get_handle_name(int param_1) {
   long lVar1;
   uint in_EDX;
   undefined4 in_register_0000003c;
   StrRange *pSVar2;
   long in_FS_OFFSET;
   pSVar2 = (StrRange*)CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)in_EDX < 4) {
      if ((int)in_EDX < 2) {
         if (1 < in_EDX) goto LAB_001004a0;
         *(undefined8*)pSVar2 = 0;
      }
 else {
         *(undefined8*)pSVar2 = 0;
      }

   }
 else {
      if (1 < in_EDX - 4) {
         LAB_001004a0:*(undefined8*)pSVar2 = 0;
         String::parse_latin1(pSVar2);
         goto LAB_0010044e;
      }

      *(undefined8*)pSVar2 = 0;
   }

   String::parse_latin1(pSVar2);
   LAB_0010044e:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pSVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Gizmo3DHelper::box_set_handle(Vector3 const*, int, Vector3&, Vector3&) */void Gizmo3DHelper::box_set_handle(Gizmo3DHelper *this, Vector3 *param_1, int param_2, Vector3 *param_3, Vector3 *param_4) {
   int iVar1;
   Vector3 *pVVar2;
   float fVar3;
   float fVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   char cVar9;
   undefined8 uVar10;
   long lVar11;
   long in_FS_OFFSET;
   float fVar12;
   double dVar13;
   float fVar14;
   float fVar15;
   float local_90;
   float local_8c;
   float local_88[3];
   undefined1 local_7c[12];
   undefined8 local_70;
   undefined4 local_68;
   undefined8 local_64;
   undefined4 local_5c;
   undefined8 local_58;
   undefined4 local_50;
   undefined8 local_4c;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar11 = (long)( param_2 / 2 );
   iVar1 = ( -(param_2 >> 0x1f) - ( param_2 + -(param_2 >> 0x1f) & 1U ) ) * 2 + 1;
   local_7c = Variant::operator_cast_to_Vector3((Variant*)( this + 0x180 ));
   local_90 = _LC10 * *(float*)( local_7c + lVar11 * 4 );
   local_50 = 0;
   local_4c = 0;
   local_44 = 0;
   local_58 = 0;
   local_8c = (float)( (uint)local_90 ^ __LC11 );
   *(undefined4*)( (long)&local_58 + lVar11 * 4 ) = 0x45800000;
   *(undefined4*)( (long)&local_4c + lVar11 * 4 ) = 0xc5800000;
   local_70 = 0;
   local_68 = 0;
   local_64 = 0;
   local_5c = 0;
   Geometry3D::get_closest_points_between_segments((Vector3*)&local_58, (Vector3*)&local_4c, param_1, param_1 + 0xc, (Vector3*)&local_70, (Vector3*)&local_64);
   *(undefined1(*) [12])param_3 = local_7c;
   uVar10 = Input::get_singleton();
   cVar9 = Input::is_key_pressed(uVar10, 0x400018);
   lVar8 = Node3DEditor::singleton;
   if (cVar9 == '\0') {
      fVar12 = *(float*)( (long)&local_70 + lVar11 * 4 );
      if (iVar1 < 1) {
         fVar12 = local_8c - fVar12;
      }
 else {
         fVar12 = fVar12 - local_90;
      }

   }
 else {
      fVar12 = (float)iVar1 * *(float*)( (long)&local_70 + lVar11 * 4 );
      fVar12 = fVar12 + fVar12;
   }

   pVVar2 = param_3 + lVar11 * 4;
   *(float*)pVVar2 = fVar12;
   if (*(char*)( lVar8 + 0xe00 ) != *(char*)( lVar8 + 0xe01 )) {
      fVar12 = (float)Node3DEditor::get_translate_snap();
      dVar13 = (double)Math::snapped((double)*(float*)pVVar2, (double)fVar12);
      fVar12 = (float)dVar13;
   }

   if ((double)fVar12 <= _LC13) {
      fVar12 = _LC9;
   }

   *(float*)pVVar2 = fVar12;
   uVar10 = Input::get_singleton();
   cVar9 = Input::is_key_pressed(uVar10, 0x400018);
   if (cVar9 == '\0') {
      if (iVar1 < 1) {
         local_90 = local_8c - *(float*)pVVar2;
      }
 else {
         local_8c = *(float*)pVVar2 + local_90;
      }

      for (int i = 0; i < 3; i++) {
         local_88[i] = 0;
      }

      fVar12 = *(float*)( this + 0x1b0 );
      fVar3 = *(float*)( this + 0x1a8 );
      uVar10 = *(undefined8*)( this + 0x1a0 );
      uVar5 = *(undefined8*)( this + 0x198 );
      local_88[lVar11] = ( local_90 + local_8c ) * _LC14;
      fVar14 = (float)local_88._0_8_;
      fVar15 = SUB84(local_88._0_8_, 4);
      fVar4 = *(float*)( this + 0x19c );
      uVar6 = *(undefined8*)( this + 0x1a8 );
      uVar7 = *(undefined8*)( this + 0x1bc );
      *(float*)( param_4 + 8 ) = *(float*)( this + 0x1b4 ) * fVar15 + fVar12 * fVar14 + *(float*)( this + 0x1b8 ) * local_88[2] + *(float*)( this + 0x1c4 );
      *(ulong*)param_4 = CONCAT44((float)( (ulong)uVar10 >> 0x20 ) * fVar14 + fVar15 * fVar3 + (float)( (ulong)uVar6 >> 0x20 ) * local_88[2] + (float)( (ulong)uVar7 >> 0x20 ), (float)uVar5 * fVar14 + fVar15 * fVar4 + (float)uVar10 * local_88[2] + (float)uVar7);
   }
 else {
      *(undefined8*)param_4 = *(undefined8*)( this + 0x1bc );
      *(undefined4*)( param_4 + 8 ) = *(undefined4*)( this + 0x1c4 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Gizmo3DHelper::box_commit_handle(String const&, bool, Object*, Object*, StringName const&,
   StringName const&) */void Gizmo3DHelper::box_commit_handle(Gizmo3DHelper *this, String *param_1, bool param_2, Object *param_3, Object *param_4, StringName *param_5, StringName *param_6) {
   Object *pOVar1;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_4 == (Object*)0x0) {
      param_4 = param_3;
   }

   if (param_2) {
      Object::set((StringName*)param_4, (Variant*)param_6, (bool*)( this + 0x180 ));
      Variant::Variant((Variant*)local_58, (Vector3*)( this + 0x1bc ));
      Object::set((StringName*)param_3, (Variant*)param_5, (bool*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      pOVar1 = (Object*)EditorUndoRedoManager::get_singleton();
      EditorUndoRedoManager::create_action(pOVar1, param_1, 0, 0, 0);
      Object::get((StringName*)local_58, (bool*)param_4);
      EditorUndoRedoManager::add_do_property(pOVar1, (StringName*)param_4, (Variant*)param_6);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Object::get((StringName*)local_58, (bool*)param_3);
      EditorUndoRedoManager::add_do_property(pOVar1, (StringName*)param_3, (Variant*)param_5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      EditorUndoRedoManager::add_undo_property(pOVar1, (StringName*)param_4, (Variant*)param_6);
      Variant::Variant((Variant*)local_58, (Vector3*)( this + 0x1bc ));
      EditorUndoRedoManager::add_undo_property(pOVar1, (StringName*)param_3, (Variant*)param_5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorUndoRedoManager::commit_action(SUB81(pOVar1, 0));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Gizmo3DHelper::cylinder_get_handle_name(int) const */StrRange *Gizmo3DHelper::cylinder_get_handle_name(int param_1) {
   long lVar1;
   undefined4 in_register_0000003c;
   StrRange *pSVar2;
   long in_FS_OFFSET;
   pSVar2 = (StrRange*)CONCAT44(in_register_0000003c, param_1);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)pSVar2 = 0;
   String::parse_latin1(pSVar2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pSVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Gizmo3DHelper::cylinder_set_handle(Vector3 const*, int, float&, float&, Vector3&) */void Gizmo3DHelper::cylinder_set_handle(Gizmo3DHelper *this, Vector3 *param_1, int param_2, float *param_3, float *param_4, Vector3 *param_5) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   char cVar4;
   undefined8 uVar5;
   int iVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   double dVar9;
   float fVar10;
   float local_88[4];
   undefined8 local_78;
   undefined4 local_70;
   undefined8 local_68;
   undefined4 local_60;
   float local_58[3];
   undefined8 local_4c;
   undefined4 local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 2) {
      iVar6 = -1;
      fVar10 = _LC17;
   }
 else {
      iVar6 = 1;
      fVar10 = _LC18;
   }

   local_88[0] = 0.0;
   local_88[1] = 0.0;
   local_88[param_2 != 0] = fVar10;
   fVar7 = local_88[1];
   fVar10 = local_88[0];
   local_88[2] = 0.0;
   local_68 = CONCAT44(_UNK_00101c2c * local_88[1], _LC4 * local_88[0]);
   for (int i = 0; i < 3; i++) {
      local_58[i] = 0;
   }

   local_4c = 0;
   local_44 = 0;
   local_78 = CONCAT44(( uint )(_UNK_00101c2c * local_88[1]) ^ _LC21._4_4_, ( uint )(_LC4 * local_88[0]) ^ (uint)_LC21);
   local_60 = 0;
   local_70 = 0x80000000;
   Geometry3D::get_closest_points_between_segments((Vector3*)&local_78, (Vector3*)&local_68, param_1, param_1 + 0xc, (Vector3*)local_58, (Vector3*)&local_4c);
   fVar10 = local_58[1] * fVar7 + fVar10 * local_58[0] + local_58[2] * 0.0;
   if (*(char*)( Node3DEditor::singleton + 0xe00 ) != *(char*)( Node3DEditor::singleton + 0xe01 )) {
      fVar7 = (float)Node3DEditor::get_translate_snap();
      dVar9 = (double)Math::snapped((double)fVar10, (double)fVar7);
      fVar10 = (float)dVar9;
   }

   if (param_2 == 0) {
      if ((double)fVar10 < _LC13) {
         fVar10 = _LC9;
      }

      *param_4 = fVar10;
      *(undefined8*)param_5 = *(undefined8*)( this + 0x1bc );
      *(undefined4*)( param_5 + 8 ) = *(undefined4*)( this + 0x1c4 );
   }
 else if (param_2 - 1U < 2) {
      fVar7 = Variant::operator_cast_to_float((Variant*)( this + 0x180 ));
      uVar5 = Input::get_singleton();
      cVar4 = Input::is_key_pressed(uVar5, 0x400018);
      if (cVar4 == '\0') {
         fVar10 = (float)( (double)fVar10 + (double)fVar7 * __LC23 );
      }
 else {
         fVar10 = fVar10 + fVar10;
      }

      if ((double)fVar10 < _LC13) {
         fVar10 = _LC9;
      }

      *param_3 = fVar10;
      uVar5 = Input::get_singleton();
      cVar4 = Input::is_key_pressed(uVar5, 0x400018);
      if (cVar4 == '\0') {
         uVar5 = *(undefined8*)( this + 0x1a0 );
         fVar10 = *(float*)( this + 0x1a8 );
         fVar8 = (float)( (double)( *param_3 - fVar7 ) * __LC23 * (double)iVar6 );
         uVar1 = *(undefined8*)( this + 0x198 );
         fVar7 = *(float*)( this + 0x19c );
         uVar2 = *(undefined8*)( this + 0x1a8 );
         uVar3 = *(undefined8*)( this + 0x1bc );
         *(float*)( param_5 + 8 ) = *(float*)( this + 0x1b8 ) * 0.0 + *(float*)( this + 0x1b0 ) * 0.0 + *(float*)( this + 0x1b4 ) * fVar8 + *(float*)( this + 0x1c4 );
         *(ulong*)param_5 = CONCAT44(fVar8 * fVar10 + (float)( (ulong)uVar5 >> 0x20 ) * 0.0 + (float)( (ulong)uVar2 >> 0x20 ) * 0.0 + (float)( (ulong)uVar3 >> 0x20 ), fVar8 * fVar7 + (float)uVar1 * 0.0 + (float)uVar5 * 0.0 + (float)uVar3);
      }
 else {
         *(undefined8*)param_5 = *(undefined8*)( this + 0x1bc );
         *(undefined4*)( param_5 + 8 ) = *(undefined4*)( this + 0x1c4 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Gizmo3DHelper::cylinder_commit_handle(int, String const&, String const&, bool, Object*, Object*,
   Object*, StringName const&, StringName const&, StringName const&) */void Gizmo3DHelper::cylinder_commit_handle(Gizmo3DHelper *this, int param_1, String *param_2, String *param_3, bool param_4, Object *param_5, Object *param_6, Object *param_7, StringName *param_8, StringName *param_9, StringName *param_10) {
   Object *pOVar1;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_6 == (Object*)0x0) {
      param_6 = param_5;
   }

   if (param_7 == (Object*)0x0) {
      param_7 = param_5;
   }

   if (param_4) {
      if (param_1 == 0) {
         Object::set((StringName*)param_7, (Variant*)param_10, (bool*)( this + 0x180 ));
      }
 else {
         Object::set((StringName*)param_6, (Variant*)param_9, (bool*)( this + 0x180 ));
      }

      Variant::Variant((Variant*)local_58, (Vector3*)( this + 0x1bc ));
      Object::set((StringName*)param_5, (Variant*)param_8, (bool*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      pOVar1 = (Object*)EditorUndoRedoManager::get_singleton();
      if (param_1 == 0) {
         EditorUndoRedoManager::create_action(pOVar1, param_2, 0, 0, 0);
         Object::get((StringName*)local_58, (bool*)param_7);
         EditorUndoRedoManager::add_do_property(pOVar1, (StringName*)param_7, (Variant*)param_10);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         EditorUndoRedoManager::add_undo_property(pOVar1, (StringName*)param_7, (Variant*)param_10);
      }
 else {
         EditorUndoRedoManager::create_action(pOVar1, param_3, 0, 0, 0);
         Object::get((StringName*)local_58, (bool*)param_6);
         EditorUndoRedoManager::add_do_property(pOVar1, (StringName*)param_6, (Variant*)param_9);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Object::get((StringName*)local_58, (bool*)param_5);
         EditorUndoRedoManager::add_do_property(pOVar1, (StringName*)param_5, (Variant*)param_8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         EditorUndoRedoManager::add_undo_property(pOVar1, (StringName*)param_6, (Variant*)param_9);
         Variant::Variant((Variant*)local_58, (Vector3*)( this + 0x1bc ));
         EditorUndoRedoManager::add_undo_property(pOVar1, (StringName*)param_5, (Variant*)param_8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorUndoRedoManager::commit_action(SUB81(pOVar1, 0));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */void Vector<Vector3>::push_back(undefined8 param_1, undefined4 param_2, long param_3) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Gizmo3DHelper::cylinder_get_handles(float, float) */Gizmo3DHelper * __thiscall
Gizmo3DHelper::cylinder_get_handles(Gizmo3DHelper *this,float param_1,float param_2){
   long lVar1;
   long in_FS_OFFSET;
   float fVar2;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   Vector<Vector3>::push_back(param_2, 0);
   fVar2 = param_1 * _LC14;
   Vector<Vector3>::push_back((ulong)(uint)fVar2 << 0x20, 0, this);
   Vector<Vector3>::push_back(( ulong )((uint)fVar2 ^ __LC11) << 0x20, 0, this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Gizmo3DHelper::box_get_handles(Vector3 const&) */Vector3 *Gizmo3DHelper::box_get_handles(Vector3 *param_1) {
   long in_RDX;
   long lVar1;
   long in_FS_OFFSET;
   undefined8 local_50;
   uint local_48;
   uint local_38;
   long local_30;
   lVar1 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( param_1 + 8 ) = 0;
   do {
      local_48 = 0;
      local_50 = 0;
      *(float*)( (long)&local_50 + lVar1 ) = _LC14 * *(float*)( in_RDX + lVar1 );
      lVar1 = lVar1 + 4;
      Vector<Vector3>::push_back(local_50, local_48, param_1);
      local_38 = local_48 ^ __LC11;
      Vector<Vector3>::push_back(param_1);
   }
 while ( lVar1 != 0xc );
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
            if (pvVar5 == (void*)0x0) goto LAB_001015b4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001015b4:if (*(long*)this != 0) {
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
/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector3>::resize<false>(long) */undefined8 CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
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
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar3 = 0;
   }
 else {
      lVar8 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xc == 0) {
      LAB_001019c0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_001019c0;
   if (param_1 <= lVar8) {
      if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar7 == lVar3) {
      LAB_0010192c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_001018bb;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010192c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar3 = 0;
   }

   memset((void*)( (long)puVar9 + lVar3 * 0xc ), 0, ( param_1 - lVar3 ) * 0xc);
   LAB_001018bb:puVar9[-1] = param_1;
   return 0;
}
/* Gizmo3DHelper::initialize_handle_action(Variant const&, Transform3D const&) */void Gizmo3DHelper::_GLOBAL__sub_I_initialize_handle_action(void) {
   if (PopupMenu::base_property_helper != '\0') {
      return;
   }

   PopupMenu::base_property_helper = 1;
   PopupMenu::base_property_helper._56_8_ = 2;
   PopupMenu::base_property_helper._64_8_ = 0;
   PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
   PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
   PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


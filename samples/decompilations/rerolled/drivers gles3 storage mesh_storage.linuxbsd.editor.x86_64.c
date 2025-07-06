/* GLES3::MeshStorage::_multimesh_get_command_buffer_rd_rid(RID) const */undefined8 GLES3::MeshStorage::_multimesh_get_command_buffer_rd_rid(void) {
   _err_print_error("_multimesh_get_command_buffer_rd_rid", "drivers/gles3/storage/mesh_storage.cpp", 0x7fd, "Method/function failed. Returning: RID()", "GLES3 does not implement indirect multimeshes.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::_multimesh_get_buffer_rd_rid(RID) const */undefined8 GLES3::MeshStorage::_multimesh_get_buffer_rd_rid(void) {
   _err_print_error("_multimesh_get_buffer_rd_rid", "drivers/gles3/storage/mesh_storage.cpp", 0x801, "Method/function failed. Returning: RID()", "GLES3 does not contain a Rid for the multimesh buffer.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::mesh_instance_set_skeleton(RID, RID) */void GLES3::MeshStorage::mesh_instance_set_skeleton(MeshStorage *this, ulong param_2, long param_3) {
   long lVar1;
   code *pcVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 500 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1e0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 0xa8;
      if (*(int*)( lVar1 + 0xa0 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar1 + 8 ) != param_3) {
            *(long*)( lVar1 + 8 ) = param_3;
            *(undefined8*)( lVar1 + 0x38 ) = 0;
            *(undefined1*)( lVar1 + 0x40 ) = 1;
         }
         return;
      }
      if (*(int*)( lVar1 + 0xa0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar1);
      }
   }
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_instance_set_canvas_item_transform(RID, Transform2D const&) */void GLES3::MeshStorage::mesh_instance_set_canvas_item_transform(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 500 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1e0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 0xa8;
      if (*(int*)( lVar1 + 0xa0 ) == (int)( param_2 >> 0x20 )) {
         uVar3 = param_3[1];
         *(undefined8*)( lVar1 + 0x88 ) = *param_3;
         *(undefined8*)( lVar1 + 0x90 ) = uVar3;
         *(undefined8*)( lVar1 + 0x98 ) = param_3[2];
         return;
      }
      if (*(int*)( lVar1 + 0xa0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar1);
      }
   }
   _DAT_00000088 = *param_3;
   uRam0000000000000090 = param_3[1];
   _DAT_00000098 = param_3[2];
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* GLES3::MeshStorage::mesh_set_blend_shape_count(RID, int) */void GLES3::MeshStorage::mesh_set_blend_shape_count(MeshStorage *this, ulong param_2, int param_3) {
   int *piVar1;
   if (param_3 < 0) {
      _err_print_error("mesh_set_blend_shape_count", "drivers/gles3/storage/mesh_storage.cpp", 0x5b, "Condition \"p_blend_shape_count < 0\" is true.", 0, 0);
      return;
   }
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      if (piVar1[0x34] == (int)( param_2 >> 0x20 )) {
         if (piVar1[4] == 0) {
            *piVar1 = param_3;
            return;
         }
         _err_print_error("mesh_set_blend_shape_count", "drivers/gles3/storage/mesh_storage.cpp", 0x60, "Condition \"mesh->surface_count > 0\" is true.", 0, 0);
         return;
      }
      if (piVar1[0x34] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_set_blend_shape_count", "drivers/gles3/storage/mesh_storage.cpp", 0x5e, "Parameter \"mesh\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::mesh_needs_instance(RID, bool) */byte GLES3::MeshStorage::mesh_needs_instance(MeshStorage *this, ulong param_2, byte param_3) {
   int *piVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      if (piVar1[0x34] == (int)( param_2 >> 0x20 )) {
         if (*piVar1 != 0) {
            return 1;
         }
         return *(byte*)( piVar1 + 5 ) & param_3;
      }
      if (piVar1[0x34] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_needs_instance", "drivers/gles3/storage/mesh_storage.cpp", 0x66, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::mesh_get_blend_shape_count(RID) const */undefined4 GLES3::MeshStorage::mesh_get_blend_shape_count(MeshStorage *this, ulong param_2) {
   undefined4 *puVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      puVar1 = (undefined4*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      iVar2 = puVar1[0x34];
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *puVar1;
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_blend_shape_count", "drivers/gles3/storage/mesh_storage.cpp", 0x206, "Parameter \"mesh\" is null.", 0, 0);
   return 0xffffffff;
}/* GLES3::MeshStorage::mesh_get_blend_shape_mode(RID) const */undefined4 GLES3::MeshStorage::mesh_get_blend_shape_mode(MeshStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      iVar2 = *(int*)( lVar1 + 0xd0 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar1 + 4 );
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_blend_shape_mode", "drivers/gles3/storage/mesh_storage.cpp", 0x214, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::mesh_get_surface_count(RID) const */undefined4 GLES3::MeshStorage::mesh_get_surface_count(MeshStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      iVar2 = *(int*)( lVar1 + 0xd0 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar1 + 0x10 );
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_surface_count", "drivers/gles3/storage/mesh_storage.cpp", 0x292, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::mesh_get_custom_aabb(RID) const */undefined8 *GLES3::MeshStorage::mesh_get_custom_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_3 >> 0x20 )) {
         uVar3 = *(undefined8*)( lVar1 + 0x38 );
         uVar2 = *(undefined8*)( lVar1 + 0x40 );
         *param_1 = *(undefined8*)( lVar1 + 0x30 );
         param_1[1] = uVar3;
         param_1[2] = uVar2;
         return param_1;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_custom_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x2a0, "Parameter \"mesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}/* GLES3::MeshStorage::_multimesh_get_instance_count(RID) const */undefined4 GLES3::MeshStorage::_multimesh_get_instance_count(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x110 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 8 );
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_get_instance_count", "drivers/gles3/storage/mesh_storage.cpp", 0x622, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::_multimesh_get_mesh(RID) const */undefined8 GLES3::MeshStorage::_multimesh_get_mesh(MeshStorage *this, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 ) );
      iVar1 = *(int*)( puVar2 + 0x22 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_get_mesh", "drivers/gles3/storage/mesh_storage.cpp", 0x71d, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::_multimesh_get_custom_aabb(RID) const */undefined8 *GLES3::MeshStorage::_multimesh_get_custom_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x26c ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( param_2 + 600 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 8 );
      if (*(int*)( lVar3 + 0x110 ) == (int)( param_3 >> 0x20 )) {
         uVar1 = *(undefined8*)( lVar3 + 0x30 );
         uVar2 = *(undefined8*)( lVar3 + 0x38 );
         param_1[2] = *(undefined8*)( lVar3 + 0x40 );
         *param_1 = uVar1;
         param_1[1] = uVar2;
         return param_1;
      }
      if (*(int*)( lVar3 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_get_custom_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x72b, "Parameter \"multimesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}/* GLES3::MeshStorage::_multimesh_get_visible_instances(RID) const */undefined4 GLES3::MeshStorage::_multimesh_get_visible_instances(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x110 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x14 );
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_get_visible_instances", "drivers/gles3/storage/mesh_storage.cpp", 0x864, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::skeleton_set_base_transform_2d(RID, Transform2D const&) */void GLES3::MeshStorage::skeleton_set_base_transform_2d(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   char *pcVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2cc ) )) {
      pcVar2 = (char*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 ) );
      if (*(int*)( pcVar2 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         if (*pcVar2 != '\0') {
            uVar1 = param_3[1];
            *(undefined8*)( pcVar2 + 0x30 ) = *param_3;
            *(undefined8*)( pcVar2 + 0x38 ) = uVar1;
            *(undefined8*)( pcVar2 + 0x40 ) = param_3[2];
            return;
         }
         _err_print_error("skeleton_set_base_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x8f3, "Condition \"!skeleton->use_2d\" is true.", 0, 0);
         return;
      }
      if (*(int*)( pcVar2 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("skeleton_set_base_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x8f2, "Parameter \"skeleton\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::skeleton_get_bone_count(RID) const */undefined4 GLES3::MeshStorage::skeleton_get_bone_count(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2cc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 4 );
      }
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("skeleton_get_bone_count", "drivers/gles3/storage/mesh_storage.cpp", 0x8fa, "Parameter \"skeleton\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::mesh_set_custom_aabb(RID, AABB const&) */void GLES3::MeshStorage::mesh_set_custom_aabb(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   undefined8 uVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         uVar2 = param_3[1];
         *(undefined8*)( lVar1 + 0x30 ) = *param_3;
         *(undefined8*)( lVar1 + 0x38 ) = uVar2;
         *(undefined8*)( lVar1 + 0x40 ) = param_3[2];
         Dependency::changed_notify(lVar1 + 0xa0, 0);
         return;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_set_custom_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x298, "Parameter \"mesh\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::_multimesh_set_custom_aabb(RID, AABB const&) */void GLES3::MeshStorage::_multimesh_set_custom_aabb(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar2 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x30 ) = *param_3;
         *(undefined8*)( lVar2 + 0x38 ) = uVar1;
         *(undefined8*)( lVar2 + 0x40 ) = param_3[2];
         Dependency::changed_notify(lVar2 + 0xe0, 0);
         return;
      }
      if (*(int*)( lVar2 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_set_custom_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x724, "Parameter \"multimesh\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::mesh_set_blend_shape_mode(RID, RenderingServer::BlendShapeMode) */void GLES3::MeshStorage::mesh_set_blend_shape_mode(MeshStorage *this, ulong param_2, uint param_3) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      iVar2 = *(int*)( lVar1 + 0xd0 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         if (param_3 < 2) {
            *(uint*)( lVar1 + 4 ) = param_3;
         } else {
            _err_print_index_error("mesh_set_blend_shape_mode", "drivers/gles3/storage/mesh_storage.cpp", 0x20d, (long)(int)param_3, 2, "(int)p_mode", "2", "", false, false);
         }
         return;
      }
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_set_blend_shape_mode", "drivers/gles3/storage/mesh_storage.cpp", 0x20c, "Parameter \"mesh\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::mesh_surface_get_material(RID, int) const */undefined8 GLES3::MeshStorage::mesh_surface_get_material(MeshStorage *this, ulong param_2, uint param_3) {
   long lVar1;
   undefined8 uVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < *(uint*)( lVar1 + 0x10 )) {
            uVar2 = *(undefined8*)( *(long*)( *(long*)( lVar1 + 8 ) + (long)(int)param_3 * 8 ) + 0x118 );
         } else {
            _err_print_index_error("mesh_surface_get_material", "drivers/gles3/storage/mesh_storage.cpp", 0x252, (ulong)param_3, ( ulong ) * (uint*)( lVar1 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            uVar2 = 0;
         }
         return uVar2;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_surface_get_material", "drivers/gles3/storage/mesh_storage.cpp", 0x251, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::mesh_instance_set_blend_shape_weight(RID, int, float) */void GLES3::MeshStorage::mesh_instance_set_blend_shape_weight(undefined4 param_1, MeshStorage *this, ulong param_3, uint param_4) {
   long lVar1;
   uint uVar2;
   code *pcVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 500 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1e0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 0xa8;
      if (*(int*)( lVar1 + 0xa0 ) == (int)( param_3 >> 0x20 )) {
         uVar2 = *(uint*)( lVar1 + 0x20 );
         if (( -1 < (int)param_4 ) && ( (int)param_4 < (int)uVar2 )) {
            if (param_4 < uVar2) {
               *(undefined4*)( *(long*)( lVar1 + 0x28 ) + (long)(int)param_4 * 4 ) = param_1;
               *(undefined1*)( lVar1 + 0x40 ) = 1;
               return;
            }
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (long)(int)param_4, (ulong)uVar2, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         _err_print_index_error("mesh_instance_set_blend_shape_weight", "drivers/gles3/storage/mesh_storage.cpp", 0x46e, (long)(int)param_4, (long)(int)uVar2, "p_shape", "(int)mi->blend_weights.size()", "", false, false);
         return;
      }
      if (*(int*)( lVar1 + 0xa0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_instance_set_blend_shape_weight", "drivers/gles3/storage/mesh_storage.cpp", 0x46d, "Parameter \"mi\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::skeleton_bone_set_transform(RID, int, Transform3D const&) */void GLES3::MeshStorage::skeleton_bone_set_transform(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   undefined4 *puVar1;
   char cVar2;
   undefined8 uVar3;
   char *pcVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2cc ) )) {
      pcVar4 = (char*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 ) );
      if (*(int*)( pcVar4 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         if (( -1 < param_3 ) && ( param_3 < *(int*)( pcVar4 + 4 ) )) {
            if (*pcVar4 == '\0') {
               cVar2 = pcVar4[0x20];
               puVar1 = (undefined4*)( *(long*)( pcVar4 + 0x18 ) + (long)( param_3 * 0xc ) * 4 );
               *puVar1 = *param_4;
               puVar1[1] = param_4[1];
               puVar1[2] = param_4[2];
               puVar1[3] = param_4[9];
               puVar1[4] = param_4[3];
               puVar1[5] = param_4[4];
               puVar1[6] = param_4[5];
               puVar1[7] = param_4[10];
               puVar1[8] = param_4[6];
               puVar1[9] = param_4[7];
               puVar1[10] = param_4[8];
               puVar1[0xb] = param_4[0xb];
               if (cVar2 == '\0') {
                  uVar3 = *(undefined8*)( this + 0x308 );
                  pcVar4[0x20] = '\x01';
                  *(undefined8*)( pcVar4 + 0x28 ) = uVar3;
                  *(char**)( this + 0x308 ) = pcVar4;
               }
               return;
            }
            _err_print_error("skeleton_bone_set_transform", "drivers/gles3/storage/mesh_storage.cpp", 0x904, "Condition \"skeleton->use_2d\" is true.", 0, 0);
            return;
         }
         _err_print_index_error("skeleton_bone_set_transform", "drivers/gles3/storage/mesh_storage.cpp", 0x903, (long)param_3, (long)*(int*)( pcVar4 + 4 ), "p_bone", "skeleton->size", "", false, false);
         return;
      }
      if (*(int*)( pcVar4 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("skeleton_bone_set_transform", "drivers/gles3/storage/mesh_storage.cpp", 0x902, "Parameter \"skeleton\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::skeleton_bone_get_transform(RID, int) const */undefined1(*)[16];GLES3::MeshStorage::skeleton_bone_get_transform(undefined1 (*param_1)[16], long param_2, ulong param_3, int param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined4 uVar8;
   uint uVar9;
   char *pcVar10;
   undefined8 uVar11;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x2cc ) )) {
      pcVar10 = (char*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( param_2 + 0x2b8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2c8 ) ) * 8 ) );
      if (*(int*)( pcVar10 + 0x88 ) == (int)( param_3 >> 0x20 )) {
         if (( param_4 < 0 ) || ( *(int*)( pcVar10 + 4 ) <= param_4 )) {
            _err_print_index_error("skeleton_bone_get_transform", "drivers/gles3/storage/mesh_storage.cpp", 0x91c, (long)param_4, (long)*(int*)( pcVar10 + 4 ), "p_bone", "skeleton->size", "", false, false);
            uVar9 = _LC54;
            *(undefined4*)param_1[2] = 0x3f800000;
            *(undefined8*)( param_1[2] + 4 ) = 0;
            *(undefined4*)( param_1[2] + 0xc ) = 0;
            *param_1 = ZEXT416(uVar9);
            param_1[1] = ZEXT416(uVar9);
            return param_1;
         }
         if (*pcVar10 == '\0') {
            puVar1 = (undefined4*)( *(long*)( pcVar10 + 0x18 ) + (long)( param_4 * 0xc ) * 4 );
            uVar2 = puVar1[9];
            uVar3 = puVar1[8];
            uVar4 = puVar1[3];
            uVar8 = puVar1[6];
            uVar5 = puVar1[1];
            uVar6 = puVar1[7];
            uVar7 = puVar1[0xb];
            *(undefined4*)param_1[1] = puVar1[5];
            *(undefined4*)( param_1[1] + 4 ) = uVar8;
            *(undefined4*)( param_1[1] + 8 ) = uVar3;
            *(undefined4*)( param_1[1] + 0xc ) = uVar2;
            uVar2 = puVar1[2];
            uVar3 = puVar1[4];
            *(undefined4*)param_1[2] = puVar1[10];
            *(undefined4*)( param_1[2] + 4 ) = uVar4;
            *(undefined4*)( param_1[2] + 8 ) = uVar6;
            *(undefined4*)( param_1[2] + 0xc ) = uVar7;
            *(undefined4*)*param_1 = *puVar1;
            *(undefined4*)( *param_1 + 4 ) = uVar5;
            *(undefined4*)( *param_1 + 8 ) = uVar2;
            *(undefined4*)( *param_1 + 0xc ) = uVar3;
            return param_1;
         }
         uVar11 = 0x91d;
         pcVar10 = "Condition \"skeleton->use_2d\" is true. Returning: Transform3D()";
         goto LAB_00101562;
      }
      if (*(int*)( pcVar10 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   uVar11 = 0x91b;
   pcVar10 = "Parameter \"skeleton\" is null.";
   LAB_00101562:_err_print_error("skeleton_bone_get_transform", "drivers/gles3/storage/mesh_storage.cpp", uVar11, pcVar10, 0, 0);
   uVar9 = _LC54;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar9);
   param_1[1] = ZEXT416(uVar9);
   return param_1;
}/* GLES3::MeshStorage::skeleton_bone_set_transform_2d(RID, int, Transform2D const&) */void GLES3::MeshStorage::skeleton_bone_set_transform_2d(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   char cVar3;
   undefined8 uVar4;
   char *pcVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2cc ) )) {
      pcVar5 = (char*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 ) );
      if (*(int*)( pcVar5 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         if (( -1 < param_3 ) && ( param_3 < *(int*)( pcVar5 + 4 ) )) {
            if (*pcVar5 != '\0') {
               cVar3 = pcVar5[0x20];
               puVar1 = (undefined4*)( *(long*)( pcVar5 + 0x18 ) + (long)( param_3 << 3 ) * 4 );
               *puVar1 = *param_4;
               uVar2 = param_4[2];
               puVar1[2] = 0;
               puVar1[1] = uVar2;
               puVar1[3] = param_4[4];
               puVar1[4] = param_4[1];
               uVar2 = param_4[3];
               puVar1[6] = 0;
               puVar1[5] = uVar2;
               puVar1[7] = param_4[5];
               if (cVar3 == '\0') {
                  uVar4 = *(undefined8*)( this + 0x308 );
                  pcVar5[0x20] = '\x01';
                  *(undefined8*)( pcVar5 + 0x28 ) = uVar4;
                  *(char**)( this + 0x308 ) = pcVar5;
               }
               return;
            }
            _err_print_error("skeleton_bone_set_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x938, "Condition \"!skeleton->use_2d\" is true.", 0, 0);
            return;
         }
         _err_print_index_error("skeleton_bone_set_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x937, (long)param_3, (long)*(int*)( pcVar5 + 4 ), "p_bone", "skeleton->size", "", false, false);
         return;
      }
      if (*(int*)( pcVar5 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("skeleton_bone_set_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x936, "Parameter \"skeleton\" is null.", 0, 0);
   return;
}/* GLES3::MeshStorage::skeleton_bone_get_transform_2d(RID, int) const */undefined8 *GLES3::MeshStorage::skeleton_bone_get_transform_2d(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   char *pcVar6;
   undefined8 uVar7;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x2cc ) )) {
      pcVar6 = (char*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( param_2 + 0x2b8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2c8 ) ) * 8 ) );
      if (*(int*)( pcVar6 + 0x88 ) == (int)( param_3 >> 0x20 )) {
         if (( param_4 < 0 ) || ( *(int*)( pcVar6 + 4 ) <= param_4 )) {
            _err_print_index_error("skeleton_bone_get_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x94c, (long)param_4, (long)*(int*)( pcVar6 + 4 ), "p_bone", "skeleton->size", "", false, false);
            *param_1 = 0x3f800000;
            param_1[1] = 0x3f80000000000000;
            param_1[2] = 0;
            return param_1;
         }
         if (*pcVar6 != '\0') {
            puVar1 = (undefined4*)( *(long*)( pcVar6 + 0x18 ) + (long)( param_4 << 3 ) * 4 );
            uVar2 = puVar1[4];
            uVar3 = puVar1[5];
            uVar4 = *puVar1;
            uVar5 = puVar1[1];
            param_1[2] = CONCAT44((int)( ( ulong ) * (undefined8*)( puVar1 + 6 ) >> 0x20 ), (int)( ( ulong ) * (undefined8*)( puVar1 + 2 ) >> 0x20 ));
            *(undefined4*)param_1 = uVar4;
            *(undefined4*)( (long)param_1 + 4 ) = uVar2;
            *(undefined4*)( param_1 + 1 ) = uVar5;
            *(undefined4*)( (long)param_1 + 0xc ) = uVar3;
            return param_1;
         }
         uVar7 = 0x94d;
         pcVar6 = "Condition \"!skeleton->use_2d\" is true. Returning: Transform2D()";
         goto LAB_00101912;
      }
      if (*(int*)( pcVar6 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   uVar7 = 0x94b;
   pcVar6 = "Parameter \"skeleton\" is null.";
   LAB_00101912:_err_print_error("skeleton_bone_get_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", uVar7, pcVar6, 0, 0);
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   return param_1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_surface_update_vertex_region(RID, int, int, Vector<unsigned char>
   const&) */void GLES3::MeshStorage::mesh_surface_update_vertex_region(MeshStorage *this, ulong param_2, uint param_3, int param_4, long param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   undefined8 uVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar1 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_update_vertex_region", "drivers/gles3/storage/mesh_storage.cpp", 0x21b, (ulong)param_3, ( ulong ) * (uint*)( lVar1 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }
         lVar2 = *(long*)( param_5 + 8 );
         if (lVar2 == 0) {
            uVar5 = 0x21c;
            pcVar4 = "Condition \"p_data.is_empty()\" is true.";
         } else {
            lVar3 = *(long*)( lVar2 + -8 );
            lVar1 = *(long*)( *(long*)( lVar1 + 8 ) + (long)(int)param_3 * 8 );
            if (( ulong )(param_4 + lVar3) <= ( ulong ) * (uint*)( lVar1 + 0x20 )) {
               ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( lVar1 + 0x10 ));
               ( *_glad_glBufferSubData )(0x8892, (long)param_4, lVar3, lVar2);
               /* WARNING: Could not recover jumptable at 0x00101a5b. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *_glad_glBindBuffer )(0x8892, 0);
               return;
            }
            uVar5 = 0x21f;
            pcVar4 = "Condition \"p_offset + data_size > mesh->surfaces[p_surface]->vertex_buffer_size\" is true.";
         }
         goto LAB_00101a92;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   uVar5 = 0x21a;
   pcVar4 = "Parameter \"mesh\" is null.";
   LAB_00101a92:_err_print_error("mesh_surface_update_vertex_region", "drivers/gles3/storage/mesh_storage.cpp", uVar5, pcVar4, 0, 0);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_surface_update_attribute_region(RID, int, int, Vector<unsigned char>
   const&) */void GLES3::MeshStorage::mesh_surface_update_attribute_region(MeshStorage *this, ulong param_2, uint param_3, int param_4, long param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   undefined8 uVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar1 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_update_attribute_region", "drivers/gles3/storage/mesh_storage.cpp", 0x22a, (ulong)param_3, ( ulong ) * (uint*)( lVar1 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }
         lVar2 = *(long*)( param_5 + 8 );
         if (lVar2 == 0) {
            uVar5 = 0x22b;
            pcVar4 = "Condition \"p_data.is_empty()\" is true.";
         } else {
            lVar3 = *(long*)( lVar2 + -8 );
            lVar1 = *(long*)( *(long*)( lVar1 + 8 ) + (long)(int)param_3 * 8 );
            if (( ulong )(param_4 + lVar3) <= ( ulong ) * (uint*)( lVar1 + 0x24 )) {
               ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( lVar1 + 0x14 ));
               ( *_glad_glBufferSubData )(0x8892, (long)param_4, lVar3, lVar2);
               /* WARNING: Could not recover jumptable at 0x00101c2b. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *_glad_glBindBuffer )(0x8892, 0);
               return;
            }
            uVar5 = 0x22e;
            pcVar4 = "Condition \"p_offset + data_size > mesh->surfaces[p_surface]->attribute_buffer_size\" is true.";
         }
         goto LAB_00101c62;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   uVar5 = 0x229;
   pcVar4 = "Parameter \"mesh\" is null.";
   LAB_00101c62:_err_print_error("mesh_surface_update_attribute_region", "drivers/gles3/storage/mesh_storage.cpp", uVar5, pcVar4, 0, 0);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_surface_update_skin_region(RID, int, int, Vector<unsigned char> const&)
    */void GLES3::MeshStorage::mesh_surface_update_skin_region(MeshStorage *this, ulong param_2, uint param_3, int param_4, long param_5) {
   long lVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   undefined8 uVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar1 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_update_skin_region", "drivers/gles3/storage/mesh_storage.cpp", 0x239, (ulong)param_3, ( ulong ) * (uint*)( lVar1 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }
         lVar2 = *(long*)( param_5 + 8 );
         if (lVar2 == 0) {
            uVar5 = 0x23a;
            pcVar4 = "Condition \"p_data.is_empty()\" is true.";
         } else {
            lVar3 = *(long*)( lVar2 + -8 );
            lVar1 = *(long*)( *(long*)( lVar1 + 8 ) + (long)(int)param_3 * 8 );
            if (( ulong )(param_4 + lVar3) <= ( ulong ) * (uint*)( lVar1 + 0x28 )) {
               ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( lVar1 + 0x18 ));
               ( *_glad_glBufferSubData )(0x8892, (long)param_4, lVar3, lVar2);
               /* WARNING: Could not recover jumptable at 0x00101dfb. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *_glad_glBindBuffer )(0x8892, 0);
               return;
            }
            uVar5 = 0x23d;
            pcVar4 = "Condition \"p_offset + data_size > mesh->surfaces[p_surface]->skin_buffer_size\" is true.";
         }
         goto LAB_00101e32;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   uVar5 = 0x238;
   pcVar4 = "Parameter \"mesh\" is null.";
   LAB_00101e32:_err_print_error("mesh_surface_update_skin_region", "drivers/gles3/storage/mesh_storage.cpp", uVar5, pcVar4, 0, 0);
   return;
}/* GLES3::MeshStorage::_multimesh_set_visible_instances(RID, int) */void GLES3::MeshStorage::_multimesh_set_visible_instances(MeshStorage *this, ulong param_2, int param_3) {
   int iVar1;
   uint uVar2;
   char *pcVar3;
   undefined8 uVar4;
   long lVar5;
   int iVar6;
   int iVar7;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar5 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         if (( -2 < param_3 ) && ( iVar1 = param_3 <= iVar1 )) {
            iVar7 = *(int*)( lVar5 + 0x14 );
            if (iVar7 == param_3) {
               return;
            }
            if (( *(long*)( lVar5 + 0x60 ) != 0 ) && ( *(long*)( *(long*)( lVar5 + 0x60 ) + -8 ) != 0 )) {
               *(undefined1*)( lVar5 + 0x48 ) = 1;
               if (*(char*)( lVar5 + 0x78 ) == '\0') {
                  *(undefined8*)( lVar5 + 0x80 ) = *(undefined8*)( this + 0x2a8 );
                  *(long*)( this + 0x2a8 ) = lVar5;
                  *(undefined1*)( lVar5 + 0x78 ) = 1;
               }
               if (( -1 < iVar7 ) && ( iVar7 < param_3 )) {
                  while (true) {
                     uVar2 = iVar7 >> 9;
                     iVar6 = iVar1 + 0x3fe;
                     if (-1 < iVar1 + 0x1ff) {
                        iVar6 = iVar1 + 0x1ff;
                     }
                     if (uVar2 < ( uint )(iVar6 >> 9)) {
                        pcVar3 = (char*)( (long)(int)uVar2 + *(long*)( lVar5 + 0x68 ) );
                        if (*pcVar3 == '\0') {
                           *pcVar3 = '\x01';
                           *(int*)( lVar5 + 0x70 ) = *(int*)( lVar5 + 0x70 ) + 1;
                        }
                        *(undefined1*)( lVar5 + 0x48 ) = 1;
                        if (*(char*)( lVar5 + 0x78 ) == '\0') {
                           *(undefined8*)( lVar5 + 0x80 ) = *(undefined8*)( this + 0x2a8 );
                           *(long*)( this + 0x2a8 ) = lVar5;
                           *(undefined1*)( lVar5 + 0x78 ) = 1;
                        }
                     } else {
                        _err_print_index_error("_multimesh_mark_dirty", "drivers/gles3/storage/mesh_storage.cpp", 0x666, (long)(int)uVar2, (long)( iVar6 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
                     }
                     iVar7 = iVar7 + 1;
                     if (param_3 == iVar7) break;
                     iVar1 = *(int*)( lVar5 + 8 );
                  };
               }
            }
            *(int*)( lVar5 + 0x14 ) = param_3;
            Dependency::changed_notify(lVar5 + 0xe0, 4);
            return;
         }
         uVar4 = 0x84f;
         pcVar3 = "Condition \"p_visible < -1 || p_visible > multimesh->instances\" is true.";
         goto LAB_001020b2;
      }
      if (*(int*)( lVar5 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   uVar4 = 0x84e;
   pcVar3 = "Parameter \"multimesh\" is null.";
   LAB_001020b2:_err_print_error("_multimesh_set_visible_instances", "drivers/gles3/storage/mesh_storage.cpp", uVar4, pcVar3, 0, 0);
   return;
}/* GLES3::MeshStorage::mesh_get_aabb(RID, RID) */undefined8 *GLES3::MeshStorage::mesh_get_aabb(undefined8 *param_1, long param_2, ulong param_3, ulong param_4) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined1 auVar4[16];
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   ulong uVar8;
   char cVar9;
   int iVar10;
   long lVar11;
   char *pcVar12;
   long lVar13;
   long lVar14;
   undefined8 *puVar15;
   char cVar16;
   long lVar17;
   AABB *pAVar18;
   long lVar19;
   int iVar20;
   long in_FS_OFFSET;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   undefined8 local_138;
   float local_130;
   undefined8 local_128;
   float local_120;
   undefined8 local_118;
   float local_110;
   undefined8 local_108;
   float local_100;
   undefined8 local_f8;
   float fStack_f0;
   float fStack_ec;
   float fStack_e8;
   float fStack_e4;
   undefined8 local_d8;
   float fStack_d0;
   float fStack_cc;
   float fStack_c8;
   float fStack_c4;
   undefined8 local_b8;
   undefined8 uStack_b0;
   undefined8 local_a8;
   undefined8 local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float fStack_84;
   undefined8 local_78;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined8 uStack_60;
   undefined8 local_58;
   ulong uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_3 >> 0x20 )) {
         local_78 = 0;
         uStack_70 = 0;
         uStack_6c = 0;
         uStack_68 = 0;
         uStack_64 = 0;
         cVar9 = AABB::operator !=((AABB*)( lVar1 + 0x30 ), (AABB*)&local_78);
         if (cVar9 == '\0') {
            if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( param_2 + 0x2cc ) )) {
               pcVar12 = (char*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( param_2 + 0x2b8 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2c8 ) ) * 8 ) );
               if (*(int*)( pcVar12 + 0x88 ) == (int)( param_4 >> 0x20 )) {
                  if (( *(int*)( pcVar12 + 4 ) != 0 ) && ( lVar19 = *(long*)( pcVar12 + 0x50 ) * (long*)( lVar1 + 0x48 ) != lVar19 )) {
                     local_f8 = 0;
                     fStack_f0 = 0.0;
                     fStack_ec = 0.0;
                     fStack_e8 = 0.0;
                     fStack_e4 = 0.0;
                     if (*(int*)( lVar1 + 0x10 ) != 0) {
                        lVar19 = 0;
                        do {
                           fVar24 = _LC74;
                           local_d8 = 0;
                           fStack_d0 = 0.0;
                           fStack_cc = 0.0;
                           fStack_c8 = 0.0;
                           lVar5 = *(long*)( *(long*)( lVar1 + 8 ) + lVar19 * 8 );
                           fStack_c4 = 0.0;
                           if (( ( ( *(byte*)( lVar5 + 9 ) & 4 ) == 0 ) || ( puVar15 = *(undefined8**)( lVar5 + 0xc0 ) ),puVar15 == (undefined8*)0x0 )) {
                              LAB_00102800:auVar4 = *(undefined1(*) [16])( lVar5 + 0x9c );
                              local_d8 = auVar4._0_8_;
                              fStack_d0 = auVar4._8_4_;
                              fStack_cc = auVar4._12_4_;
                              fStack_c8 = (float)*(undefined8*)( lVar5 + 0xac );
                              fStack_c4 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0xac ) >> 0x20 );
                              if ((int)lVar19 == 0) {
                                 LAB_001026a0:fStack_e8 = fStack_c8;
                                 fStack_e4 = fStack_c4;
                                 local_f8 = local_d8;
                                 fStack_f0 = fStack_d0;
                                 fStack_ec = fStack_cc;
                              } else {
                                 LAB_00102828:AABB::merge_with((AABB*)&local_f8);
                              }
                           } else {
                              iVar10 = (int)puVar15[-1];
                              if (iVar10 <= *(int*)( pcVar12 + 4 )) {
                                 lVar14 = *(long*)( pcVar12 + 0x18 );
                                 cVar9 = *pcVar12;
                                 if (cVar9 == '\0') {
                                    if (iVar10 < 1) goto LAB_001027d0;
                                    cVar16 = '\0';
                                    iVar20 = 0;
                                    puVar3 = puVar15 + ( ulong )(iVar10 - 1) * 3 + 3;
                                    do {
                                       fVar21 = (float)*(undefined8*)( (long)puVar15 + 0xc );
                                       fVar25 = (float)( ( ulong ) * (undefined8*)( (long)puVar15 + 0xc ) >> 0x20 );
                                       if (( ( fVar21 != fVar24 ) || ( fVar25 != fVar24 ) ) || ( *(float*)( (long)puVar15 + 0x14 ) != fVar24 )) {
                                          local_110 = 0.0;
                                          lVar13 = 0;
                                          puVar2 = (undefined8*)( lVar14 + (long)iVar20 * 4 );
                                          local_100 = 0.0;
                                          uStack_60 = puVar2[4];
                                          local_118 = 0;
                                          local_108 = 0;
                                          local_58 = CONCAT44(*(undefined4*)( (long)puVar2 + 0xc ), *(undefined4*)( puVar2 + 5 ));
                                          uStack_70 = *(undefined4*)( puVar2 + 1 );
                                          uStack_6c = *(undefined4*)( puVar2 + 2 );
                                          local_78 = *puVar2;
                                          uStack_68 = ( undefined4 ) * (undefined8*)( (long)puVar2 + 0x14 );
                                          uStack_64 = ( undefined4 )(( ulong ) * (undefined8*)( (long)puVar2 + 0x14 ) >> 0x20);
                                          uStack_50 = CONCAT44(*(undefined4*)( (long)puVar2 + 0x2c ), *(undefined4*)( (long)puVar2 + 0x1c ));
                                          local_98 = *puVar15;
                                          fStack_90 = (float)*(undefined4*)( puVar15 + 1 );
                                          local_128 = CONCAT44((float)( ( ulong ) * puVar15 >> 0x20 ) + fVar25, (float)*puVar15 + fVar21);
                                          local_120 = *(float*)( (long)puVar15 + 0x14 ) + *(float*)( puVar15 + 1 );
                                          lVar17 = lVar5;
                                          do {
                                             fVar21 = *(float*)( lVar5 + 0xec + lVar13 );
                                             lVar11 = 0;
                                             fVar25 = fVar21;
                                             do {
                                                fVar26 = *(float*)( lVar17 + 200 + lVar11 );
                                                fVar22 = *(float*)( (long)&local_98 + lVar11 ) * fVar26;
                                                fVar26 = fVar26 * *(float*)( (long)&local_128 + lVar11 );
                                                fVar23 = fVar26;
                                                if (fVar22 < fVar26) {
                                                   fVar23 = fVar22;
                                                   fVar22 = fVar26;
                                                }
                                                fVar25 = fVar25 + fVar22;
                                                fVar21 = fVar21 + fVar23;
                                                lVar11 = lVar11 + 4;
                                             } while ( lVar11 != 0xc );
                                             *(float*)( (long)&local_108 + lVar13 ) = fVar25;
                                             fVar25 = local_100;
                                             lVar17 = lVar17 + 0xc;
                                             *(float*)( (long)&local_118 + lVar13 ) = fVar21;
                                             local_b8 = local_118;
                                             lVar13 = lVar13 + 4;
                                          } while ( lVar13 != 0xc );
                                          lVar17 = 0;
                                          local_128 = 0;
                                          uStack_b0 = CONCAT44(uStack_b0._4_4_, local_110);
                                          fVar21 = (float)local_108;
                                          uVar8 = (ulong)local_108 >> 0x20;
                                          fVar26 = (float)local_118;
                                          fVar23 = (float)( (ulong)local_118 >> 0x20 );
                                          local_100 = local_110;
                                          local_130 = ( fVar25 - local_110 ) + local_110;
                                          local_120 = 0.0;
                                          local_118 = 0;
                                          local_110 = 0.0;
                                          local_108 = local_b8;
                                          local_138 = CONCAT44(( (float)uVar8 - fVar23 ) + fVar23, ( fVar21 - fVar26 ) + fVar26);
                                          pAVar18 = (AABB*)&local_78;
                                          do {
                                             fVar21 = *(float*)( (long)&local_58 + lVar17 + 4 );
                                             lVar13 = 0;
                                             fVar25 = fVar21;
                                             do {
                                                fVar23 = *(float*)( (long)&local_108 + lVar13 ) * *(float*)( pAVar18 + lVar13 );
                                                fVar22 = *(float*)( pAVar18 + lVar13 ) * *(float*)( (long)&local_138 + lVar13 );
                                                fVar26 = fVar22;
                                                if (fVar23 < fVar22) {
                                                   fVar26 = fVar23;
                                                   fVar23 = fVar22;
                                                }
                                                fVar25 = fVar25 + fVar23;
                                                fVar21 = fVar21 + fVar26;
                                                lVar13 = lVar13 + 4;
                                             } while ( lVar13 != 0xc );
                                             *(float*)( (long)&local_118 + lVar17 ) = fVar25;
                                             pAVar18 = pAVar18 + 0xc;
                                             *(float*)( (long)&local_128 + lVar17 ) = fVar21;
                                             lVar17 = lVar17 + 4;
                                          } while ( lVar17 != 0xc );
                                          fStack_8c = (float)local_118 - (float)local_128;
                                          fStack_88 = (float)( (ulong)local_118 >> 0x20 ) - local_128._4_4_;
                                          fStack_84 = local_110 - local_120;
                                          local_98 = local_128;
                                          fStack_90 = local_120;
                                          local_a8 = CONCAT44(fStack_84, fStack_88);
                                          local_b8 = local_128;
                                          uStack_b0 = CONCAT44(fStack_8c, local_120);
                                          if (cVar16 == '\0') {
                                             local_d8 = local_128;
                                             fStack_d0 = local_120;
                                             fStack_cc = fStack_8c;
                                             fStack_c8 = fStack_88;
                                             fStack_c4 = fStack_84;
                                          } else {
                                             AABB::merge_with((AABB*)&local_d8);
                                          }
                                          cVar16 = '\x01';
                                       }
                                       puVar15 = puVar15 + 3;
                                       iVar20 = iVar20 + 0xc;
                                    } while ( puVar15 != puVar3 );
                                    LAB_0010266e:if (cVar16 != '\0') {
                                       Transform3D::affine_inverse();
                                       lVar14 = 0;
                                       local_118 = 0;
                                       local_110 = 0.0;
                                       local_b8 = local_d8;
                                       local_108 = 0;
                                       uStack_b0 = CONCAT44(uStack_b0._4_4_, fStack_d0);
                                       local_100 = 0.0;
                                       local_128 = CONCAT44(fStack_c8 + (float)( (ulong)local_d8 >> 0x20 ), fStack_cc + (float)local_d8);
                                       local_120 = fStack_d0 + fStack_c4;
                                       pAVar18 = (AABB*)&local_78;
                                       do {
                                          fVar24 = *(float*)( (long)&local_58 + lVar14 + 4 );
                                          lVar17 = 0;
                                          fVar21 = fVar24;
                                          do {
                                             fVar26 = *(float*)( (long)&local_b8 + lVar17 ) * *(float*)( pAVar18 + lVar17 );
                                             fVar23 = *(float*)( pAVar18 + lVar17 ) * *(float*)( (long)&local_128 + lVar17 );
                                             fVar25 = fVar23;
                                             if (fVar26 < fVar23) {
                                                fVar25 = fVar26;
                                                fVar26 = fVar23;
                                             }
                                             fVar21 = fVar21 + fVar26;
                                             fVar24 = fVar24 + fVar25;
                                             lVar17 = lVar17 + 4;
                                          } while ( lVar17 != 0xc );
                                          *(float*)( (long)&local_108 + lVar14 ) = fVar21;
                                          pAVar18 = pAVar18 + 0xc;
                                          *(float*)( (long)&local_118 + lVar14 ) = fVar24;
                                          lVar14 = lVar14 + 4;
                                       } while ( lVar14 != 0xc );
                                       fStack_c4 = local_100 - local_110;
                                       local_98 = local_118;
                                       fStack_90 = local_110;
                                       fStack_cc = (float)local_108 - (float)local_118;
                                       fStack_c8 = (float)( (ulong)local_108 >> 0x20 ) - (float)( (ulong)local_118 >> 0x20 );
                                       local_d8 = local_118;
                                       fStack_d0 = local_110;
                                       fStack_8c = fStack_cc;
                                       fStack_88 = fStack_c8;
                                       fStack_84 = fStack_c4;
                                    }
                                    if (fStack_cc == 0.0) goto LAB_001027d0;
                                 } else {
                                    if (0 < iVar10) {
                                       cVar16 = '\0';
                                       iVar20 = 0;
                                       puVar3 = puVar15 + ( ulong )(iVar10 - 1) * 3 + 3;
                                       do {
                                          if (( ( *(float*)( (long)puVar15 + 0xc ) != fVar24 ) || ( *(float*)( puVar15 + 2 ) != fVar24 ) ) || ( *(float*)( (long)puVar15 + 0x14 ) != fVar24 )) {
                                             uStack_70 = 0;
                                             puVar2 = (undefined8*)( lVar14 + (long)iVar20 * 4 );
                                             uStack_64 = 0;
                                             local_118 = 0;
                                             uStack_60 = 0;
                                             local_78 = *puVar2;
                                             local_110 = 0.0;
                                             lVar13 = 0;
                                             local_108 = 0;
                                             local_58 = CONCAT44(*(undefined4*)( (long)puVar2 + 0xc ), 0x3f800000);
                                             uStack_6c = *(undefined4*)( puVar2 + 2 );
                                             local_100 = 0.0;
                                             uStack_68 = *(undefined4*)( (long)puVar2 + 0x14 );
                                             uStack_50 = ( ulong ) * (uint*)( (long)puVar2 + 0x1c );
                                             local_98 = *puVar15;
                                             fStack_90 = (float)*(undefined4*)( puVar15 + 1 );
                                             local_128 = CONCAT44((float)( ( ulong ) * puVar15 >> 0x20 ) + *(float*)( puVar15 + 2 ), (float)*puVar15 + *(float*)( (long)puVar15 + 0xc ));
                                             local_120 = *(float*)( (long)puVar15 + 0x14 ) + *(float*)( puVar15 + 1 );
                                             lVar17 = lVar5;
                                             do {
                                                fVar21 = *(float*)( lVar5 + 0xec + lVar13 );
                                                lVar11 = 0;
                                                fVar25 = fVar21;
                                                do {
                                                   fVar26 = *(float*)( lVar17 + 200 + lVar11 );
                                                   fVar22 = *(float*)( (long)&local_98 + lVar11 ) * fVar26;
                                                   fVar26 = *(float*)( (long)&local_128 + lVar11 ) * fVar26;
                                                   fVar23 = fVar26;
                                                   if (fVar22 < fVar26) {
                                                      fVar23 = fVar22;
                                                      fVar22 = fVar26;
                                                   }
                                                   fVar25 = fVar25 + fVar22;
                                                   fVar21 = fVar21 + fVar23;
                                                   lVar11 = lVar11 + 4;
                                                } while ( lVar11 != 0xc );
                                                *(float*)( (long)&local_108 + lVar13 ) = fVar25;
                                                fVar25 = local_100;
                                                lVar17 = lVar17 + 0xc;
                                                *(float*)( (long)&local_118 + lVar13 ) = fVar21;
                                                local_b8 = local_118;
                                                lVar13 = lVar13 + 4;
                                             } while ( lVar13 != 0xc );
                                             lVar17 = 0;
                                             local_128 = 0;
                                             uStack_b0 = CONCAT44(uStack_b0._4_4_, local_110);
                                             fVar21 = (float)local_108;
                                             uVar8 = (ulong)local_108 >> 0x20;
                                             fVar26 = (float)local_118;
                                             fVar23 = (float)( (ulong)local_118 >> 0x20 );
                                             local_100 = local_110;
                                             local_130 = ( fVar25 - local_110 ) + local_110;
                                             local_120 = 0.0;
                                             local_118 = 0;
                                             local_110 = 0.0;
                                             local_108 = local_b8;
                                             local_138 = CONCAT44(( (float)uVar8 - fVar23 ) + fVar23, ( fVar21 - fVar26 ) + fVar26);
                                             pAVar18 = (AABB*)&local_78;
                                             do {
                                                fVar21 = *(float*)( (long)&local_58 + lVar17 + 4 );
                                                lVar13 = 0;
                                                fVar25 = fVar21;
                                                do {
                                                   fVar23 = *(float*)( (long)&local_108 + lVar13 ) * *(float*)( pAVar18 + lVar13 );
                                                   fVar22 = *(float*)( (long)&local_138 + lVar13 ) * *(float*)( pAVar18 + lVar13 );
                                                   fVar26 = fVar22;
                                                   if (fVar23 < fVar22) {
                                                      fVar26 = fVar23;
                                                      fVar23 = fVar22;
                                                   }
                                                   fVar25 = fVar25 + fVar23;
                                                   fVar21 = fVar21 + fVar26;
                                                   lVar13 = lVar13 + 4;
                                                } while ( lVar13 != 0xc );
                                                *(float*)( (long)&local_118 + lVar17 ) = fVar25;
                                                pAVar18 = pAVar18 + 0xc;
                                                *(float*)( (long)&local_128 + lVar17 ) = fVar21;
                                                lVar17 = lVar17 + 4;
                                             } while ( lVar17 != 0xc );
                                             fStack_8c = (float)local_118 - (float)local_128;
                                             fStack_88 = (float)( (ulong)local_118 >> 0x20 ) - local_128._4_4_;
                                             fStack_84 = local_110 - local_120;
                                             local_98 = local_128;
                                             fStack_90 = local_120;
                                             local_a8 = CONCAT44(fStack_84, fStack_88);
                                             local_b8 = local_128;
                                             uStack_b0 = CONCAT44(fStack_8c, local_120);
                                             if (cVar16 == '\0') {
                                                local_d8 = local_128;
                                                fStack_d0 = local_120;
                                                fStack_cc = fStack_8c;
                                                fStack_c8 = fStack_88;
                                                fStack_c4 = fStack_84;
                                                cVar16 = cVar9;
                                             } else {
                                                AABB::merge_with((AABB*)&local_d8);
                                                cVar16 = cVar9;
                                             }
                                          }
                                          puVar15 = puVar15 + 3;
                                          iVar20 = iVar20 + 8;
                                       } while ( puVar15 != puVar3 );
                                       goto LAB_0010266e;
                                    }
                                    LAB_001027d0:if (( fStack_c8 == 0.0 ) && ( fStack_c4 == 0.0 )) goto LAB_00102800;
                                 }
                                 if ((int)lVar19 != 0) goto LAB_00102828;
                                 goto LAB_001026a0;
                              }
                              _err_print_error("mesh_get_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x2be, "Condition \"bs > sbs\" is true. Continuing.", 0);
                           }
                           lVar19 = lVar19 + 1;
                        } while ( (uint)lVar19 < *(uint*)( lVar1 + 0x10 ) );
                        lVar19 = *(long*)( pcVar12 + 0x50 );
                     }
                     *(long*)( lVar1 + 0x48 ) = lVar19;
                     *(ulong*)( lVar1 + 0x28 ) = CONCAT44(fStack_e4, fStack_e8);
                     param_1[2] = CONCAT44(fStack_e4, fStack_e8);
                     *(undefined8*)( lVar1 + 0x18 ) = local_f8;
                     *(ulong*)( lVar1 + 0x20 ) = CONCAT44(fStack_ec, fStack_f0);
                     *param_1 = local_f8;
                     param_1[1] = CONCAT44(fStack_ec, fStack_f0);
                     goto LAB_00102724;
                  }
               } else if (*(int*)( pcVar12 + 0x88 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
            }
            uVar7 = *(undefined8*)( lVar1 + 0x20 );
            uVar6 = *(undefined8*)( lVar1 + 0x28 );
            *param_1 = *(undefined8*)( lVar1 + 0x18 );
            param_1[1] = uVar7;
            param_1[2] = uVar6;
         } else {
            uVar6 = *(undefined8*)( lVar1 + 0x30 );
            uVar7 = *(undefined8*)( lVar1 + 0x38 );
            param_1[2] = *(undefined8*)( lVar1 + 0x40 );
            *param_1 = uVar6;
            param_1[1] = uVar7;
         }
         goto LAB_00102724;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x2a6, "Parameter \"mesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   LAB_00102724:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::mesh_instance_check_for_update(RID) */undefined1[16];GLES3::MeshStorage::mesh_instance_check_for_update (MeshStorage *this,ulong param_2) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   code *pcVar5;
   uint uVar6;
   ulong uVar7;
   ulong uVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   ulong in_stack_fffffffffffffff0;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 500 ) )) {
      uVar8 = ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 );
      uVar7 = uVar8 * 0x15;
      lVar2 = *(long*)( *(long*)( this + 0x1e0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 ) + uVar8 * 0xa8;
      if (*(int*)( lVar2 + 0xa0 ) == (int)( param_2 >> 0x20 )) {
         uVar8 = ( ulong ) * (byte*)( lVar2 + 0x40 );
         if (*(long*)( lVar2 + 0x68 ) == 0) {
            if (*(byte*)( lVar2 + 0x40 ) != 0) {
               LAB_00102f38:lVar1 = lVar2 + 0x68;
               *(MeshStorage**)( lVar2 + 0x68 ) = this + 0x240;
               lVar4 = *(long*)( this + 0x240 );
               *(undefined8*)( lVar2 + 0x80 ) = 0;
               *(long*)( lVar2 + 0x78 ) = lVar4;
               if (lVar4 == 0) {
                  *(long*)( this + 0x248 ) = lVar1;
               } else {
                  *(long*)( lVar4 + 0x18 ) = lVar1;
               }
               *(long*)( this + 0x240 ) = lVar1;
               auVar10._8_8_ = lVar1;
               auVar10._0_8_ = lVar4;
               return auVar10;
            }
            if (*(long*)( lVar2 + 8 ) != 0) {
               uVar3 = *(ulong*)( lVar2 + 8 );
               uVar7 = ( ulong ) * (uint*)( this + 0x2cc );
               uVar8 = uVar3 & 0xffffffff;
               if ((uint)uVar3 < *(uint*)( this + 0x2cc )) {
                  uVar8 = ( uVar8 % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( uVar8 / *(uint*)( this + 0x2c8 ) ) * 8 );
                  if (*(int*)( uVar8 + 0x88 ) == (int)( uVar3 >> 0x20 )) {
                     uVar7 = *(ulong*)( lVar2 + 0x38 );
                     if (*(ulong*)( uVar8 + 0x50 ) != uVar7) {
                        if (*(long*)( lVar2 + 0x68 ) != 0) {
                           auVar10 = _err_print_error(&_LC77, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
                           return auVar10;
                        }
                        goto LAB_00102f38;
                     }
                  } else {
                     uVar6 = *(int*)( uVar8 + 0x88 ) + 0x80000000;
                     uVar7 = (ulong)uVar6;
                     if (uVar6 < 0x7fffffff) {
                        uVar8 = 0;
                        uVar7 = in_stack_fffffffffffffff0;
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
                     }
                  }
               }
            }
         }
         auVar9._8_8_ = uVar7;
         auVar9._0_8_ = uVar8;
         return auVar9;
      }
      if (*(int*)( lVar2 + 0xa0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, this);
      }
   }
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
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
   __n = lVar2 * 4;
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
}/* CowData<AABB>::_ref(CowData<AABB> const&) [clone .part.0] */void CowData<AABB>::_ref(CowData<AABB> *this, CowData *param_1) {
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
}/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */void CowData<float>::_ref(CowData<float> *this, CowData *param_1) {
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
}/* GLES3::MeshStorage::mesh_surface_set_material(RID, int, RID) */void GLES3::MeshStorage::mesh_surface_set_material(MeshStorage *this, ulong param_2, uint param_3, undefined8 param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x19c )) {
         lVar2 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
         if (*(int*)( lVar2 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
            if (*(uint*)( lVar2 + 0x10 ) <= param_3) {
               _err_print_index_error("mesh_surface_set_material", "drivers/gles3/storage/mesh_storage.cpp", 0x248, (ulong)param_3, ( ulong ) * (uint*)( lVar2 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
               return;
            }
            *(undefined8*)( *(long*)( *(long*)( lVar2 + 8 ) + (long)(int)param_3 * 8 ) + 0x118 ) = param_4;
            Dependency::changed_notify(lVar2 + 0xa0);
            lVar3 = *(long*)( lVar2 + 0x58 );
            if (( lVar3 != 0 ) && ( *(long*)( lVar3 + -8 ) != 0 )) {
               LOCK();
               plVar1 = (long*)( lVar3 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( lVar2 + 0x58 );
                  *(undefined8*)( lVar2 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  return;
               }
               *(undefined8*)( lVar2 + 0x58 ) = 0;
            }
            return;
         }
         if (*(int*)( lVar2 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
   }
   _err_print_error("mesh_surface_set_material", "drivers/gles3/storage/mesh_storage.cpp", 0x247, "Parameter \"mesh\" is null.", 0, 0);
   return;
}/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   size_t __n;
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
   __n = lVar2 * 4;
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
}/* CowData<unsigned char>::_ref(CowData<unsigned char> const&) [clone .part.0] */void CowData<unsigned_char>::_ref(CowData<unsigned_char> *this, CowData *param_1) {
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
}/* GLES3::MeshStorage::mesh_get_path(RID) const */CowData<char32_t> *GLES3::MeshStorage::mesh_get_path(CowData<char32_t> *param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)param_1 = 0;
         if (*(long*)( lVar1 + 0x98 ) != 0) {
            CowData<char32_t>::_ref(param_1, (CowData*)( lVar1 + 0x98 ));
         }
         return param_1;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_path", "drivers/gles3/storage/mesh_storage.cpp", 0x325, "Parameter \"mesh\" is null.", 0, 0);
   *(undefined8*)param_1 = 0;
   return param_1;
}/* GLES3::MeshStorage::mesh_set_path(RID, String const&) */void GLES3::MeshStorage::mesh_set_path(MeshStorage *this, ulong param_2, CowData *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
      if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar1 + 0x98 ) != *(long*)param_3) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( lVar1 + 0x98 ), param_3);
            return;
         }
         return;
      }
      if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_set_path", "drivers/gles3/storage/mesh_storage.cpp", 0x31e, "Parameter \"mesh\" is null.", 0, 0);
   return;
}/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::erase(unsigned int const&) [clone .isra.0] */void HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this, uint *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
   long lVar8;
   undefined8 uVar9;
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
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   uint uVar28;
   uint uVar29;
   ulong uVar30;
   ulong uVar31;
   uint uVar32;
   uint uVar33;
   ulong uVar34;
   ulong uVar35;
   long *plVar36;
   uint uVar37;
   uint *puVar38;
   ulong uVar39;
   lVar6 = *(long*)( this + 8 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar33 = *param_1;
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar5);
      uVar7 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar28 = ( uVar33 >> 0x10 ^ uVar33 ) * -0x7a143595;
      uVar28 = ( uVar28 ^ uVar28 >> 0xd ) * -0x3d4d51cb;
      uVar32 = uVar28 ^ uVar28 >> 0x10;
      if (uVar28 == uVar28 >> 0x10) {
         uVar32 = 1;
         uVar30 = uVar7;
      } else {
         uVar30 = uVar32 * uVar7;
      }
      lVar8 = *(long*)( this + 0x10 );
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar39;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30;
      uVar30 = SUB168(auVar10 * auVar19, 8);
      uVar28 = *(uint*)( lVar8 + uVar30 * 4 );
      uVar34 = (ulong)SUB164(auVar10 * auVar19, 8);
      if (uVar28 != 0) {
         uVar37 = 0;
         do {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( (int)uVar34 + 1 ) * uVar7;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar39;
            uVar31 = SUB168(auVar13 * auVar22, 8);
            uVar29 = SUB164(auVar13 * auVar22, 8);
            if (( uVar32 == uVar28 ) && ( uVar33 == *(uint*)( *(long*)( lVar6 + uVar30 * 8 ) + 0x10 ) )) {
               puVar38 = (uint*)( lVar8 + uVar31 * 4 );
               uVar33 = *puVar38;
               if (( uVar33 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = uVar33 * uVar7,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ( uVar29 + uVar5 ) - SUB164(auVar14 * auVar23, 8) ) * uVar7,auVar24._8_8_ = 0,auVar24._0_8_ = uVar39,uVar30 = (ulong)uVar29,uVar35 = uVar34,SUB164(auVar15 * auVar24, 8) != 0) {
                  while (true) {
                     uVar34 = uVar30;
                     puVar1 = (uint*)( lVar8 + uVar35 * 4 );
                     *puVar38 = *puVar1;
                     puVar2 = (undefined8*)( lVar6 + uVar31 * 8 );
                     *puVar1 = uVar33;
                     puVar3 = (undefined8*)( lVar6 + uVar35 * 8 );
                     uVar9 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar9;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( (int)uVar34 + 1 ) * uVar7;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar39;
                     uVar31 = SUB168(auVar18 * auVar27, 8);
                     puVar38 = (uint*)( lVar8 + uVar31 * 4 );
                     uVar33 = *puVar38;
                     if (( uVar33 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = uVar33 * uVar7,auVar25._8_8_ = 0,auVar25._0_8_ = uVar39,auVar17._8_8_ = 0,auVar17._0_8_ = ( ( SUB164(auVar18 * auVar27, 8) + uVar5 ) - SUB164(auVar16 * auVar25, 8) ) * uVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar39,SUB164(auVar17 * auVar26, 8) == 0) break;
                     uVar30 = uVar31 & 0xffffffff;
                     uVar35 = uVar34;
                  };
               }
               plVar4 = (long*)( lVar6 + uVar34 * 8 );
               *(undefined4*)( lVar8 + uVar34 * 4 ) = 0;
               plVar36 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar36) {
                  *(long*)( this + 0x18 ) = *plVar36;
                  plVar36 = (long*)*plVar4;
               }
               if (*(long**)( this + 0x20 ) == plVar36) {
                  *(long*)( this + 0x20 ) = plVar36[1];
                  plVar36 = (long*)*plVar4;
               }
               if ((long*)plVar36[1] != (long*)0x0) {
                  *(long*)plVar36[1] = *plVar36;
                  plVar36 = (long*)*plVar4;
               }
               if (*plVar36 != 0) {
                  *(long*)( *plVar36 + 8 ) = plVar36[1];
                  plVar36 = (long*)*plVar4;
               }
               Memory::free_static(plVar36, false);
               *(undefined8*)( *(long*)( this + 8 ) + uVar34 * 8 ) = 0;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
               return;
            }
            uVar28 = *(uint*)( lVar8 + uVar31 * 4 );
            uVar34 = uVar31 & 0xffffffff;
            uVar37 = uVar37 + 1;
         } while ( ( uVar28 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar28 * uVar7,auVar20._8_8_ = 0,auVar20._0_8_ = uVar39,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( uVar5 + uVar29 ) - SUB164(auVar11 * auVar20, 8) ) * uVar7,auVar21._8_8_ = 0,auVar21._0_8_ = uVar39,uVar30 = uVar31,uVar37 <= SUB164(auVar12 * auVar21, 8) );
      }
   }
   return;
}/* GLES3::MeshStorage::_multimesh_get_interpolator(RID) const */long GLES3::MeshStorage::_multimesh_get_interpolator(MeshStorage *this, ulong param_2) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      iVar2 = *(int*)( lVar3 + 0x110 );
      lVar3 = lVar3 + 0x88;
      if (iVar2 == (int)( param_2 >> 0x20 )) goto LAB_00103a24;
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   itos((long)&local_30);
   operator+((char *)&
   local_28,(String*)"Multimesh not found: ";
   _err_print_error("_multimesh_get_interpolator", "drivers/gles3/storage/mesh_storage.cpp", 0x86a, "Parameter \"multimesh\" is null.", &local_28, 0, 0);
   lVar3 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   lVar3 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         lVar3 = 0;
         goto LAB_00103a24;
      }
   }
   lVar3 = 0;
   LAB_00103a24:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return lVar3;
}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_multimesh_set_mesh(RID, RID) */void GLES3::MeshStorage::_multimesh_set_mesh(MeshStorage *this, ulong param_2, long param_3) {
   long *plVar1;
   undefined8 *puVar2;
   float fVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   long lVar7;
   long lVar8;
   AABB *pAVar9;
   int iVar10;
   long *plVar11;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined1 local_128[8];
   long local_120;
   undefined8 local_118;
   float local_110;
   undefined8 local_108;
   float local_100;
   long local_f8;
   float local_f0;
   float local_e8[4];
   long local_d8;
   float fStack_d0;
   float fStack_cc;
   float fStack_c8;
   float fStack_c4;
   undefined8 local_b8;
   float local_b0;
   undefined8 local_ac;
   float local_a4;
   long local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float fStack_84;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 uStack_58;
   float local_54[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      plVar11 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 ) );
      if ((int)plVar11[0x22] == (int)( param_2 >> 0x20 )) {
         if (( ( *plVar11 == param_3 ) || ( param_3 == 0 ) ) || ( *plVar11 = param_3 ),(int)plVar11[1] == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
         } else {
            if (( plVar11[0xc] == 0 ) || ( *(long*)( plVar11[0xc] + -8 ) == 0 )) {
               if (*(char*)( (long)plVar11 + 0x49 ) != '\0') {
                  GLES3::Utilities::buffer_get_data((uint)local_128, 0x8892, *(uint*)( (long)plVar11 + 0x74 ));
                  lVar5 = local_120;
                  lVar4 = plVar11[1];
                  if (*plVar11 == 0) {
                     _err_print_error("_multimesh_re_create_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x690, "Condition \"multimesh->mesh.is_null()\" is true.", 0, 0);
                  } else {
                     local_78 = 0;
                     uStack_74 = 0;
                     uStack_70 = 0;
                     uStack_6c = 0;
                     uStack_68 = 0;
                     uStack_64 = 0;
                     cVar6 = AABB::operator !=((AABB*)( plVar11 + 6 ), (AABB*)&local_78);
                     if (cVar6 == '\0') {
                        local_d8 = 0;
                        fStack_d0 = 0.0;
                        fStack_cc = 0.0;
                        fStack_c8 = 0.0;
                        fStack_c4 = 0.0;
                        ( **(code**)( *(long*)this + 0x98 ) )(&local_b8, this, *plVar11, 0);
                        if (0 < (int)lVar4) {
                           iVar10 = 0;
                           uVar16 = __LC96;
                           uVar17 = _UNK_00125798;
                           do {
                              uStack_70 = ( undefined4 )((ulong)uVar16 >> 0x20);
                              local_54[2] = 0.0;
                              puVar2 = (undefined8*)( lVar5 + ( ulong )(uint)(iVar10 * *(int*)( (long)plVar11 + 0x4c )) * 4 );
                              uStack_64 = (undefined4)uVar16;
                              uStack_5c = (undefined4)uVar17;
                              uStack_58 = ( undefined4 )((ulong)uVar17 >> 0x20);
                              if (*(int*)( (long)plVar11 + 0xc ) == 1) {
                                 uStack_68 = *(undefined4*)( (long)puVar2 + 0x14 );
                                 uStack_64 = *(undefined4*)( puVar2 + 3 );
                                 uStack_60 = (undefined4)puVar2[4];
                                 uStack_5c = ( undefined4 )((ulong)puVar2[4] >> 0x20);
                                 uStack_58 = *(undefined4*)( puVar2 + 5 );
                                 local_54[2] = (float)*(undefined4*)( (long)puVar2 + 0x2c );
                                 local_78 = *(undefined4*)puVar2;
                                 uStack_74 = *(undefined4*)( (long)puVar2 + 4 );
                                 uStack_70 = *(undefined4*)( puVar2 + 1 );
                                 uStack_6c = *(undefined4*)( puVar2 + 2 );
                              } else {
                                 local_78 = ( undefined4 ) * puVar2;
                                 uStack_74 = ( undefined4 )(( ulong ) * puVar2 >> 0x20);
                                 uStack_6c = (undefined4)puVar2[2];
                                 uStack_68 = ( undefined4 )((ulong)puVar2[2] >> 0x20);
                                 uStack_60 = uStack_70;
                              }
                              local_54[1] = (float)*(undefined4*)( (long)puVar2 + 0x1c );
                              local_54[0] = (float)*(undefined4*)( (long)puVar2 + 0xc );
                              lVar8 = 0;
                              local_f8 = 0;
                              local_f0 = 0.0;
                              local_110 = local_b0;
                              local_108 = CONCAT44((float)( (ulong)local_ac >> 0x20 ) + (float)( (ulong)local_b8 >> 0x20 ), (float)local_ac + (float)local_b8);
                              for (int i = 0; i < 3; i++) {
                                 local_e8[i] = 0;
                              }
                              local_118 = local_b8;
                              local_100 = local_a4 + local_b0;
                              pAVar9 = (AABB*)&local_78;
                              if (iVar10 == 0) {
                                 do {
                                    fVar15 = *(float*)( (long)local_54 + lVar8 );
                                    lVar7 = 0;
                                    fVar13 = fVar15;
                                    do {
                                       fVar14 = *(float*)( (long)&local_118 + lVar7 ) * *(float*)( pAVar9 + lVar7 );
                                       fVar12 = *(float*)( pAVar9 + lVar7 ) * *(float*)( (long)&local_108 + lVar7 );
                                       fVar3 = fVar14;
                                       if (fVar14 < fVar12) {
                                          fVar3 = fVar12;
                                          fVar12 = fVar14;
                                       }
                                       fVar13 = fVar13 + fVar12;
                                       fVar15 = fVar15 + fVar3;
                                       lVar7 = lVar7 + 4;
                                    } while ( lVar7 != 0xc );
                                    *(float*)( (long)local_e8 + lVar8 ) = fVar15;
                                    pAVar9 = pAVar9 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar8 ) = fVar13;
                                    lVar8 = lVar8 + 4;
                                 } while ( lVar8 != 0xc );
                                 local_98 = local_f8;
                                 fStack_c4 = local_e8[2] - local_f0;
                                 fStack_cc = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_c8 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 local_d8 = local_f8;
                                 fStack_d0 = local_f0;
                                 fStack_8c = fStack_cc;
                                 fStack_88 = fStack_c8;
                                 fStack_84 = fStack_c4;
                              } else {
                                 do {
                                    fVar15 = *(float*)( (long)local_54 + lVar8 );
                                    lVar7 = 0;
                                    fVar13 = fVar15;
                                    do {
                                       fVar14 = *(float*)( (long)&local_118 + lVar7 ) * *(float*)( pAVar9 + lVar7 );
                                       fVar12 = *(float*)( pAVar9 + lVar7 ) * *(float*)( (long)&local_108 + lVar7 );
                                       fVar3 = fVar14;
                                       if (fVar14 < fVar12) {
                                          fVar3 = fVar12;
                                          fVar12 = fVar14;
                                       }
                                       fVar13 = fVar13 + fVar12;
                                       fVar15 = fVar15 + fVar3;
                                       lVar7 = lVar7 + 4;
                                    } while ( lVar7 != 0xc );
                                    *(float*)( (long)local_e8 + lVar8 ) = fVar15;
                                    pAVar9 = pAVar9 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar8 ) = fVar13;
                                    lVar8 = lVar8 + 4;
                                 } while ( lVar8 != 0xc );
                                 fStack_84 = local_e8[2] - local_f0;
                                 local_98 = local_f8;
                                 fStack_8c = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_88 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 AABB::merge_with((AABB*)&local_d8);
                                 uVar16 = __LC96;
                                 uVar17 = _UNK_00125798;
                              }
                              iVar10 = iVar10 + 1;
                           } while ( (int)lVar4 != iVar10 );
                        }
                        plVar11[5] = CONCAT44(fStack_c4, fStack_c8);
                        plVar11[3] = local_d8;
                        plVar11[4] = CONCAT44(fStack_cc, fStack_d0);
                     }
                  }
                  lVar4 = local_120;
                  if (local_120 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_120 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_120 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
               }
            } else {
               *(undefined1*)( plVar11 + 9 ) = 1;
               if ((char)plVar11[0xf] == '\0') {
                  plVar11[0x10] = *(long*)( this + 0x2a8 );
                  *(long**)( this + 0x2a8 ) = plVar11;
                  *(undefined1*)( plVar11 + 0xf ) = 1;
               }
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Dependency::changed_notify(plVar11 + 0x1c, 2);
               return;
            }
         }
         goto LAB_0010433c;
      }
      if ((int)plVar11[0x22] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_multimesh_set_mesh", "drivers/gles3/storage/mesh_storage.cpp", 0x628, "Parameter \"multimesh\" is null.", 0, 0);
      return;
   }
   LAB_0010433c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::get_singleton() */undefined8 GLES3::MeshStorage::get_singleton(void) {
   return singleton;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::MeshStorage() */void GLES3::MeshStorage::MeshStorage(MeshStorage *this) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   *(MeshStorage**)( this + 0x38 ) = this + 0x18;
   *(MeshStorage**)( this + 0x40 ) = this + 0x28;
   *(undefined***)this = &PTR__MeshStorage_00122490;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 8*i + 16 ) ) = 0;
   }
   ShaderGLES3::ShaderGLES3((ShaderGLES3*)( this + 0x48 ));
   uVar2 = _UNK_001257a8;
   uVar4 = __LC97;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x48 ) = &PTR__init_001223e8;
   *(undefined8*)( this + 0x178 ) = 0;
   *(undefined***)( this + 0x180 ) = &PTR__RID_Alloc_00122410;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 392 ) ) = 0;
   }
   *(undefined4*)( this + 0x1c0 ) = 1;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x198 ) = uVar4;
   *(undefined8*)( this + 0x1a0 ) = uVar2;
   uVar4 = Memory::alloc_static(0x1a08, false);
   *(undefined8*)( this + 0x188 ) = uVar4;
   uVar4 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x1a4 ) << 3, false);
   *(undefined8*)( this + 400 ) = uVar4;
   *(undefined***)( this + 0x1d8 ) = &PTR__RID_Alloc_00122430;
   *(undefined1(*) [16])( this + 0x218 ) = (undefined1[16])0x0;
   uVar2 = _UNK_001257b8;
   uVar4 = __LC98;
   *(undefined1(*) [16])( this + 0x290 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   *(undefined8*)( this + 0x1f0 ) = uVar4;
   *(undefined8*)( this + 0x1f8 ) = uVar2;
   *(undefined1(*) [16])( this + 0x230 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   uVar2 = _UNK_001257c8;
   uVar4 = __LC99;
   *(undefined8*)( this + 0x1e8 ) = 0;
   *(undefined8*)( this + 0x200 ) = 0;
   *(undefined8*)( this + 0x228 ) = 0;
   *(undefined4*)( this + 0x218 ) = 1;
   *(undefined***)( this + 0x250 ) = &PTR__RID_Alloc_00122450;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 600 ) ) = 0;
   }
   *(undefined4*)( this + 0x290 ) = 1;
   *(undefined8*)( this + 0x268 ) = uVar4;
   *(undefined8*)( this + 0x270 ) = uVar2;
   *(undefined1(*) [16])( this + 0x208 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x280 ) = (undefined1[16])0x0;
   uVar4 = Memory::alloc_static(0x2228, false);
   *(undefined8*)( this + 600 ) = uVar4;
   uVar4 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x274 ) << 3, false);
   *(undefined8*)( this + 0x260 ) = uVar4;
   *(undefined1(*) [16])( this + 0x2f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2e0 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x2b0 ) = &PTR__RID_Alloc_00122470;
   uVar2 = _UNK_001257d8;
   uVar4 = __LC100;
   *(undefined8*)( this + 0x2a8 ) = 0;
   *(undefined8*)( this + 0x2b8 ) = 0;
   *(undefined8*)( this + 0x2c0 ) = 0;
   *(undefined8*)( this + 0x2d8 ) = 0;
   *(undefined8*)( this + 0x300 ) = 0;
   *(undefined4*)( this + 0x2f0 ) = 1;
   *(undefined8*)( this + 0x2c8 ) = uVar4;
   *(undefined8*)( this + 0x2d0 ) = uVar2;
   uVar4 = Memory::alloc_static(0x1108, false);
   *(undefined8*)( this + 0x2b8 ) = uVar4;
   uVar4 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x2d4 ) << 3, false);
   *(undefined8*)( this + 0x2c0 ) = uVar4;
   local_38 = &_LC35;
   *(undefined8*)( this + 0x308 ) = 0;
   local_40 = 0;
   local_30 = 0;
   singleton = this;
   String::parse_latin1((StrRange*)&local_40);
   ShaderGLES3::initialize((String*)( this + 0x48 ), (int)(StrRange*)&local_40);
   lVar3 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   uVar4 = ShaderGLES3::version_create();
   *(undefined8*)( this + 0x178 ) = uVar4;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::mesh_free(RID) */ulong GLES3::MeshStorage::mesh_free(MeshStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   Mesh *this_00;
   long lVar8;
   ( **(code**)( *(long*)this + 0xc0 ) )();
   ( **(code**)( *(long*)this + 0xb0 ) )(this, param_2, 0);
   if (param_2 != 0) {
      uVar4 = (uint)param_2;
      if (uVar4 < *(uint*)( this + 0x19c )) {
         lVar8 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
         iVar6 = (int)( param_2 >> 0x20 );
         if (*(int*)( lVar8 + 0xd0 ) == iVar6) {
            Dependency::deleted_notify((RID*)( lVar8 + 0xa0 ));
            if (( *(long*)( lVar8 + 0x60 ) == 0 ) || ( *(int*)( *(long*)( lVar8 + 0x60 ) + 0x10 ) == 0 )) {
               iVar2 = *(int*)( lVar8 + 0x94 );
            } else {
               _err_print_error("mesh_free", "drivers/gles3/storage/mesh_storage.cpp", 0x4e, "deleting mesh with active instances", 0, 0);
               iVar2 = *(int*)( lVar8 + 0x94 );
            }
            if (iVar2 != 0) {
               lVar8 = *(long*)( lVar8 + 0x70 );
               lVar7 = 0;
               while (true) {
                  lVar1 = *(long*)( lVar8 + lVar7 * 8 );
                  *(undefined8*)( lVar1 + 0x68 ) = 0;
                  Dependency::changed_notify(lVar1 + 0xa0, 2);
                  if (iVar2 <= (int)lVar7 + 1) break;
                  lVar7 = lVar7 + 1;
               };
            }
            __mutex = (pthread_mutex_t*)( this + 0x1b0 );
            iVar2 = pthread_mutex_lock(__mutex);
            if (iVar2 == 0) {
               if (uVar4 < *(uint*)( this + 0x19c )) {
                  uVar5 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 );
                  lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
                  this_00 = (Mesh*)( *(long*)( *(long*)( this + 0x188 ) + uVar5 * 8 ) + lVar8 );
                  iVar2 = *(int*)( this_00 + 0xd0 );
                  if (iVar2 < 0) {
                     pthread_mutex_unlock(__mutex);
                     uVar5 = 0;
                     _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
                  } else if (iVar6 == iVar2) {
                     Mesh::~Mesh(this_00);
                     lVar7 = *(long*)( this + 400 );
                     *(undefined4*)( *(long*)( *(long*)( this + 0x188 ) + uVar5 * 8 ) + 0xd0 + lVar8 ) = 0xffffffff;
                     uVar3 = *(int*)( this + 0x1a0 ) - 1;
                     *(uint*)( this + 0x1a0 ) = uVar3;
                     *(uint*)( *(long*)( lVar7 + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 0x198 ) ) * 4 ) = uVar4;
                     uVar4 = pthread_mutex_unlock(__mutex);
                     uVar5 = (ulong)uVar4;
                  } else {
                     pthread_mutex_unlock(__mutex);
                     uVar5 = _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
                  }
               } else {
                  pthread_mutex_unlock(__mutex);
                  uVar5 = _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
               }
               return uVar5;
            }
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }
         if (*(int*)( lVar8 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
   }
   uVar5 = _err_print_error("mesh_free", "drivers/gles3/storage/mesh_storage.cpp", 0x4a, "Parameter \"mesh\" is null.", 0, 0);
   return uVar5;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_mesh_surface_generate_version_for_input_mask(GLES3::Mesh::Surface::Version&,
   GLES3::Mesh::Surface*, unsigned long, GLES3::MeshInstance::Surface*) */void GLES3::MeshStorage::_mesh_surface_generate_version_for_input_mask(MeshStorage *this, Version *param_1, Surface *param_2, ulong param_3, Surface *param_4) {
   ulong uVar1;
   ulong uVar2;
   byte *pbVar3;
   byte *pbVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined4 local_200;
   undefined4 local_1f4;
   undefined4 local_1dc;
   byte local_188[4];
   undefined8 local_184;
   undefined1 local_17c;
   undefined4 local_174;
   long local_40;
   local_1dc = 0;
   uVar1 = *(ulong*)( param_2 + 8 );
   pbVar4 = local_188;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = 0;
   local_1f4 = 0;
   pbVar3 = pbVar4;
   do {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      for (; ( uVar1 >> ( uVar2 & 0x3f ) & 1 ) != 0; uVar2 = uVar2 + 1) {
         *pbVar3 = ( byte )(param_3 >> ( (byte)uVar2 & 0x3f )) & 1;
         *pbVar3 = *pbVar3 & 1;
         if ((uint)uVar2 < 0xc) {
            /* WARNING: Could not recover jumptable at 0x00104ab6. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *(code*)( (long)&DAT_0011c054 + (long)(int)( &DAT_0011c054 )[uVar2 & 0xffffffff] ) )();
            return;
         }
         local_174 = 0;
         local_17c = 0;
         if (( uVar1 & 0x2000000 ) == 0) {
            if (( param_4 == (Surface*)0x0 ) && ( ( uVar1 & 0x20000000 ) != 0 )) {
               local_17c = 1;
               local_184 = 0x140300000004;
               goto LAB_00104ee6;
            }
            local_184 = 0x140600000003;
            local_1dc = 0xc;
         } else {
            local_184 = 0x140600000002;
            LAB_00104ee6:local_1dc = 8;
         }
         pbVar3 = pbVar3 + 0x18;
         pbVar3[0] = 0;
         pbVar3[1] = 0;
      }
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 0x18;
      if (uVar2 == 0xc) {
         ( *_glad_glGenVertexArrays )(1, param_1 + 4);
         ( *_glad_glBindVertexArray )(*(undefined4*)( param_1 + 4 ));
         if (local_188[0] == 0) {
            iVar5 = 0;
            goto LAB_00104d88;
         }
         iVar5 = 0;
         if (param_4 == (Surface*)0x0) goto LAB_00104e88;
         do {
            ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_4 + 0x10 ));
            while (true) {
               while (true) {
                  if (pbVar4[1] == 0) {
                     ( *_glad_glVertexAttribPointer )(iVar5, *(undefined4*)( pbVar4 + 4 ), *(undefined4*)( pbVar4 + 8 ), pbVar4[0xc], local_1dc, *(undefined4*)( pbVar4 + 0x14 ));
                  } else {
                     ( *_glad_glVertexAttribIPointer )(iVar5, *(undefined4*)( pbVar4 + 4 ), *(undefined4*)( pbVar4 + 8 ), local_1dc);
                  }
                  ( *_glad_glEnableVertexAttribArray )(iVar5);
                  while (true) {
                     iVar5 = iVar5 + 1;
                     if (iVar5 == 0xc) {
                        ( *_glad_glBindVertexArray )(0);
                        ( *_glad_glBindBuffer )(0x8892, 0);
                        local_200 = (undefined4)param_3;
                        *(undefined4*)param_1 = local_200;
                        if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                           /* WARNING: Subroutine does not return */
                           __stack_chk_fail();
                        }
                        return;
                     }
                     pbVar4 = pbVar4 + 0x18;
                     if (*pbVar4 != 0) break;
                     LAB_00104d88:( *_glad_glDisableVertexAttribArray )(iVar5);
                  };
                  if (iVar5 < 3) break;
                  if (iVar5 < 10) {
                     ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_2 + 0x14 ));
                     local_1dc = 0;
                  } else {
                     ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_2 + 0x18 ));
                     local_1dc = local_1f4;
                  }
               };
               local_1dc = 0;
               if (param_4 != (Surface*)0x0) break;
               LAB_00104e88:( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_2 + 0x10 ));
            };
         } while ( true );
      }
   } while ( true );
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_blend_shape_bind_mesh_instance_buffer(GLES3::MeshInstance*, unsigned int) */void GLES3::MeshStorage::_blend_shape_bind_mesh_instance_buffer(MeshStorage *this, MeshInstance *param_1, uint param_2) {
   code *pcVar1;
   ulong uVar2;
   long lVar3;
   uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
   if (param_2 < *(uint*)( param_1 + 0x10 )) {
      lVar3 = (ulong)param_2 * 0x40;
      ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( *(long*)( param_1 + 0x18 ) + lVar3 ));
      uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
      if (param_2 < *(uint*)( param_1 + 0x10 )) {
         if (( *(byte*)( *(long*)( param_1 + 0x18 ) + 0x28 + lVar3 ) & 1 ) == 0) {
            ( *_glad_glDisableVertexAttribArray )();
         } else {
            ( *_glad_glEnableVertexAttribArray )(0);
            uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
            if (*(uint*)( param_1 + 0x10 ) <= param_2) goto LAB_0010517e;
            ( *_glad_glVertexAttribPointer )(0, *(undefined4*)( *(long*)( param_1 + 0x18 ) + lVar3 + 0x18 ), 0x1406, 0, *(undefined4*)( *(long*)( param_1 + 0x18 ) + lVar3 + 0x14 ), 0);
         }
         uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
         if (param_2 < *(uint*)( param_1 + 0x10 )) {
            if (( *(byte*)( *(long*)( param_1 + 0x18 ) + 0x28 + lVar3 ) & 2 ) == 0) {
               ( *_glad_glDisableVertexAttribArray )(1);
            } else {
               ( *_glad_glEnableVertexAttribArray )();
               uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
               if (*(uint*)( param_1 + 0x10 ) <= param_2) goto LAB_0010517e;
               ( *_glad_glVertexAttribIPointer )(1, 2, 0x1405, *(undefined4*)( *(long*)( param_1 + 0x18 ) + lVar3 + 0x14 ), (long)*(int*)( *(long*)( param_1 + 0x18 ) + lVar3 + 0x1c ));
            }
            uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
            if (param_2 < *(uint*)( param_1 + 0x10 )) {
               if (( *(byte*)( *(long*)( param_1 + 0x18 ) + 0x28 + lVar3 ) & 4 ) == 0) {
                  /* WARNING: Could not recover jumptable at 0x001051b2. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( *_glad_glDisableVertexAttribArray )(2);
                  return;
               }
               ( *_glad_glEnableVertexAttribArray )();
               uVar2 = ( ulong ) * (uint*)( param_1 + 0x10 );
               if (param_2 < *(uint*)( param_1 + 0x10 )) {
                  /* WARNING: Could not recover jumptable at 0x00105110. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( *_glad_glVertexAttribIPointer )(2, 2, 0x1405, *(undefined4*)( *(long*)( param_1 + 0x18 ) + lVar3 + 0x14 ), (long)*(int*)( *(long*)( param_1 + 0x18 ) + lVar3 + 0x20 ), _glad_glVertexAttribIPointer);
                  return;
               }
            }
         }
      }
   }
   LAB_0010517e:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)param_2, uVar2, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_compute_skeleton(GLES3::MeshInstance*, GLES3::Skeleton*, unsigned int) */void GLES3::MeshStorage::_compute_skeleton(MeshStorage *this, MeshInstance *param_1, Skeleton *param_2, uint param_3) {
   uint uVar1;
   code *pcVar2;
   ulong uVar3;
   uVar3 = (ulong)param_3;
   ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( *(long*)( *(long*)( *(long*)param_1 + 8 ) + uVar3 * 8 ) + 0x18 ));
   uVar1 = *(uint*)( param_1 + 0x10 );
   if (param_3 < uVar1) {
      if (( *(byte*)( *(long*)( param_1 + 0x18 ) + 0x2b + uVar3 * 0x40 ) & 8 ) == 0) {
         ( *_glad_glEnableVertexAttribArray )(10);
         ( *_glad_glVertexAttribIPointer )(10, 4, 0x1403, 0x10, 0);
         ( *_glad_glEnableVertexAttribArray )(0xb);
         ( *_glad_glVertexAttribPointer )(0xb, 4, 0x1403, 1, 0x10, 8);
      } else {
         ( *_glad_glEnableVertexAttribArray )(10);
         ( *_glad_glVertexAttribIPointer )(10, 4, 0x1403, 0x20, 0);
         ( *_glad_glEnableVertexAttribArray )(0xb);
         ( *_glad_glVertexAttribIPointer )(0xb, 4, 0x1403, 0x20, 8);
         ( *_glad_glEnableVertexAttribArray )(0xc);
         ( *_glad_glVertexAttribPointer )(0xc, 4, 0x1403, 1, 0x20, 0x10);
         ( *_glad_glEnableVertexAttribArray )(0xd);
         ( *_glad_glVertexAttribPointer )(0xd, 4, 0x1403, 1, 0x20, 0x18);
      }
      uVar1 = *(uint*)( param_1 + 0x10 );
      if (param_3 < uVar1) {
         ( *_glad_glBindBufferBase )(0x8c8e, 0, *(undefined4*)( *(long*)( param_1 + 0x18 ) + 0x10 + uVar3 * 0x40 ));
         ( *_glad_glActiveTexture )(0x84c0);
         ( *_glad_glBindTexture )(0xde1, *(undefined4*)( param_2 + 0x48 ));
         ( *_glad_glBeginTransformFeedback )(0);
         ( *_glad_glDrawArrays )(0, 0, *(undefined4*)( *(long*)( *(long*)( *(long*)param_1 + 8 ) + uVar3 * 8 ) + 0x1c ));
         ( *_glad_glEndTransformFeedback )();
         for (int i = 0; i < 4; i++) {
            ( *_glad_glDisableVertexAttribArray )(( i + 10 ));
         }
         ( *_glad_glBindVertexArray )(0);
         /* WARNING: Could not recover jumptable at 0x0010533a. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *_glad_glBindBuffer )(0x8c8e, 0);
         return;
      }
   }
   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar3, (ulong)uVar1, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_update_dirty_multimeshes() */void GLES3::MeshStorage::_update_dirty_multimeshes(MeshStorage *this) {
   undefined8 *puVar1;
   uint uVar2;
   long lVar3;
   float fVar4;
   undefined8 uVar5;
   float fVar6;
   char cVar7;
   int iVar8;
   long lVar9;
   int iVar10;
   ulong uVar11;
   int iVar12;
   long lVar13;
   AABB *pAVar14;
   uint uVar15;
   int iVar16;
   long *plVar17;
   int iVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   float fVar28;
   undefined8 local_118;
   float local_110;
   undefined8 local_108;
   float local_100;
   long local_f8;
   float local_f0;
   float local_e8[4];
   long local_d8;
   float fStack_d0;
   float fStack_cc;
   float fStack_c8;
   float fStack_c4;
   undefined8 local_b8;
   float local_b0;
   undefined8 local_ac;
   float local_a4;
   long local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float fStack_84;
   undefined4 local_78;
   undefined4 uStack_74;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   undefined4 uStack_5c;
   undefined4 uStack_58;
   float local_54[5];
   long local_40;
   plVar17 = *(long**)( this + 0x2a8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar17 != (long*)0x0) {
      do {
         lVar3 = plVar17[0xc];
         if (( lVar3 != 0 ) && ( *(long*)( lVar3 + -8 ) != 0 )) {
            iVar12 = *(int*)( (long)plVar17 + 0x14 );
            if (iVar12 < 0) {
               iVar12 = (int)plVar17[1];
            }
            uVar2 = *(uint*)( plVar17 + 0xe );
            if (uVar2 != 0) {
               iVar10 = (int)plVar17[1] + 0x1ff;
               iVar18 = (int)plVar17[1] + 0x3fe;
               if (-1 < iVar10) {
                  iVar18 = iVar10;
               }
               if (iVar12 == 0) {
                  uVar19 = 0;
                  LAB_00105943:( *_glad_glBindBuffer )(0x8892);
                  uVar11 = ( ulong )(uint)((int)plVar17[1] * *(int*)( (long)plVar17 + 0x4c )) << 2;
                  if (uVar19 < uVar11) {
                     uVar11 = uVar19;
                  }
                  ( *_glad_glBufferSubData )(0x8892, 0, uVar11, lVar3);
                  ( *_glad_glBindBuffer )(0x8892);
               } else {
                  iVar10 = *(int*)( (long)plVar17 + 0x4c ) * 0x800;
                  uVar15 = iVar12 + 0x1ffU >> 9;
                  if (( 0x20 < uVar2 ) || ( iVar12 + 0x1ffU >> 10 < uVar2 )) {
                     uVar19 = ( ulong )(uVar15 * iVar10);
                     goto LAB_00105943;
                  }
                  lVar13 = 0;
                  ( *_glad_glBindBuffer )(0x8892);
                  iVar16 = 0;
                  do {
                     if (*(char*)( plVar17[0xd] + lVar13 ) != '\0') {
                        iVar8 = *(int*)( (long)plVar17 + 0x4c ) * (int)plVar17[1] * 4 - iVar16;
                        if (iVar10 < iVar8) {
                           iVar8 = iVar10;
                        }
                        ( *_glad_glBufferSubData )(0x8892, (long)iVar16, (long)iVar8, lVar3 + ( ulong )(uint)(*(int*)( (long)plVar17 + 0x4c ) * (int)lVar13 * 0x200) * 4);
                     }
                     lVar13 = lVar13 + 1;
                     iVar16 = iVar16 + iVar10;
                  } while ( (uint)lVar13 < uVar15 );
                  ( *_glad_glBindBuffer )(0x8892);
               }
               if (iVar18 >> 9 != 0) {
                  memset((void*)plVar17[0xd], 0, ( ulong )(uint)(iVar18 >> 9));
               }
               *(undefined4*)( plVar17 + 0xe ) = 0;
            }
            if (( (char)plVar17[9] != '\0' ) && ( *plVar17 != 0 )) {
               *(undefined1*)( plVar17 + 9 ) = 0;
               local_78 = 0;
               uStack_74 = 0;
               uStack_70 = 0;
               uStack_6c = 0;
               uStack_68 = 0;
               uStack_64 = 0;
               cVar7 = AABB::operator ==((AABB*)( plVar17 + 6 ), (AABB*)&local_78);
               if (cVar7 != '\0') {
                  if (*plVar17 == 0) {
                     _err_print_error("_multimesh_re_create_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x690, "Condition \"multimesh->mesh.is_null()\" is true.", 0, 0);
                  } else {
                     local_78 = 0;
                     uStack_74 = 0;
                     uStack_70 = 0;
                     uStack_6c = 0;
                     uStack_68 = 0;
                     uStack_64 = 0;
                     cVar7 = AABB::operator !=((AABB*)( plVar17 + 6 ), (AABB*)&local_78);
                     if (cVar7 == '\0') {
                        local_d8 = 0;
                        fStack_d0 = 0.0;
                        fStack_cc = 0.0;
                        fStack_c8 = 0.0;
                        fStack_c4 = 0.0;
                        ( **(code**)( *(long*)this + 0x98 ) )(&local_b8, this, *plVar17, 0);
                        fVar6 = local_b0;
                        uVar5 = local_b8;
                        if (0 < iVar12) {
                           fVar22 = (float)local_ac;
                           uVar11 = (ulong)local_ac >> 0x20;
                           fVar28 = (float)local_b8;
                           uVar19 = (ulong)local_b8 >> 0x20;
                           fVar20 = local_a4 + local_b0;
                           iVar18 = 0;
                           uVar26 = __LC96;
                           uVar27 = _UNK_00125798;
                           do {
                              uStack_70 = ( undefined4 )((ulong)uVar26 >> 0x20);
                              local_54[2] = 0.0;
                              puVar1 = (undefined8*)( lVar3 + ( ulong )(uint)(iVar18 * *(int*)( (long)plVar17 + 0x4c )) * 4 );
                              uStack_64 = (undefined4)uVar26;
                              uStack_5c = (undefined4)uVar27;
                              uStack_58 = ( undefined4 )((ulong)uVar27 >> 0x20);
                              local_78 = *(undefined4*)puVar1;
                              uStack_74 = *(undefined4*)( (long)puVar1 + 4 );
                              uStack_6c = *(undefined4*)( puVar1 + 2 );
                              uStack_68 = *(undefined4*)( (long)puVar1 + 0x14 );
                              if (*(int*)( (long)plVar17 + 0xc ) == 1) {
                                 uStack_64 = *(undefined4*)( puVar1 + 3 );
                                 uStack_58 = *(undefined4*)( puVar1 + 5 );
                                 uStack_70 = *(undefined4*)( puVar1 + 1 );
                                 uStack_60 = (undefined4)puVar1[4];
                                 uStack_5c = ( undefined4 )((ulong)puVar1[4] >> 0x20);
                                 local_54[2] = (float)*(undefined4*)( (long)puVar1 + 0x2c );
                              } else {
                                 local_78 = ( undefined4 ) * puVar1;
                                 uStack_74 = ( undefined4 )(( ulong ) * puVar1 >> 0x20);
                                 uStack_6c = (undefined4)puVar1[2];
                                 uStack_68 = ( undefined4 )((ulong)puVar1[2] >> 0x20);
                                 uStack_60 = uStack_70;
                              }
                              local_54[1] = (float)*(undefined4*)( (long)puVar1 + 0x1c );
                              local_54[0] = (float)*(undefined4*)( (long)puVar1 + 0xc );
                              lVar13 = 0;
                              local_f8 = 0;
                              local_f0 = 0.0;
                              local_110 = fVar6;
                              local_108 = CONCAT44((float)uVar11 + (float)uVar19, fVar22 + fVar28);
                              for (int i = 0; i < 3; i++) {
                                 local_e8[i] = 0;
                              }
                              local_118 = uVar5;
                              local_100 = fVar20;
                              pAVar14 = (AABB*)&local_78;
                              if (iVar18 == 0) {
                                 do {
                                    fVar25 = *(float*)( (long)local_54 + lVar13 );
                                    lVar9 = 0;
                                    fVar23 = fVar25;
                                    do {
                                       fVar24 = *(float*)( (long)&local_118 + lVar9 ) * *(float*)( pAVar14 + lVar9 );
                                       fVar21 = *(float*)( pAVar14 + lVar9 ) * *(float*)( (long)&local_108 + lVar9 );
                                       fVar4 = fVar24;
                                       if (fVar24 < fVar21) {
                                          fVar4 = fVar21;
                                          fVar21 = fVar24;
                                       }
                                       fVar23 = fVar23 + fVar21;
                                       fVar25 = fVar25 + fVar4;
                                       lVar9 = lVar9 + 4;
                                    } while ( lVar9 != 0xc );
                                    *(float*)( (long)local_e8 + lVar13 ) = fVar25;
                                    pAVar14 = pAVar14 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar13 ) = fVar23;
                                    lVar13 = lVar13 + 4;
                                 } while ( lVar13 != 0xc );
                                 local_98 = local_f8;
                                 fStack_c4 = local_e8[2] - local_f0;
                                 fStack_cc = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_c8 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 local_d8 = local_f8;
                                 fStack_d0 = local_f0;
                                 fStack_8c = fStack_cc;
                                 fStack_88 = fStack_c8;
                                 fStack_84 = fStack_c4;
                              } else {
                                 do {
                                    fVar25 = *(float*)( (long)local_54 + lVar13 );
                                    lVar9 = 0;
                                    fVar23 = fVar25;
                                    do {
                                       fVar24 = *(float*)( (long)&local_118 + lVar9 ) * *(float*)( pAVar14 + lVar9 );
                                       fVar21 = *(float*)( pAVar14 + lVar9 ) * *(float*)( (long)&local_108 + lVar9 );
                                       fVar4 = fVar24;
                                       if (fVar24 < fVar21) {
                                          fVar4 = fVar21;
                                          fVar21 = fVar24;
                                       }
                                       fVar23 = fVar23 + fVar21;
                                       fVar25 = fVar25 + fVar4;
                                       lVar9 = lVar9 + 4;
                                    } while ( lVar9 != 0xc );
                                    *(float*)( (long)local_e8 + lVar13 ) = fVar25;
                                    pAVar14 = pAVar14 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar13 ) = fVar23;
                                    lVar13 = lVar13 + 4;
                                 } while ( lVar13 != 0xc );
                                 local_98 = local_f8;
                                 fStack_84 = local_e8[2] - local_f0;
                                 fStack_8c = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_88 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 AABB::merge_with((AABB*)&local_d8);
                                 uVar26 = __LC96;
                                 uVar27 = _UNK_00125798;
                              }
                              iVar18 = iVar18 + 1;
                           } while ( iVar12 != iVar18 );
                        }
                        plVar17[5] = CONCAT44(fStack_c4, fStack_c8);
                        plVar17[3] = local_d8;
                        plVar17[4] = CONCAT44(fStack_cc, fStack_d0);
                     }
                  }
                  Dependency::changed_notify(plVar17 + 0x1c, 0);
               }
            }
         }
         *(long*)( this + 0x2a8 ) = plVar17[0x10];
         plVar17[0x10] = 0;
         *(undefined1*)( plVar17 + 0xf ) = 0;
         plVar17 = *(long**)( this + 0x2a8 );
      } while ( plVar17 != (long*)0x0 );
   }
   *(undefined8*)( this + 0x2a8 ) = 0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* GLES3::MeshStorage::_multimesh_free(RID) */ulong GLES3::MeshStorage::_multimesh_free(MeshStorage *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   long lVar2;
   int iVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   RendererMeshStorage::InterpolationData::notify_free_multimesh(this + 8);
   _update_dirty_multimeshes(this);
   ( **(code**)( *(long*)this + 0x120 ) )(this, param_2, 0, 0, 0, 0, 0);
   uVar5 = (uint)param_2;
   iVar7 = (int)( param_2 >> 0x20 );
   if (param_2 != 0) {
      if (uVar5 < *(uint*)( this + 0x26c )) {
         lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
         if (*(int*)( lVar8 + 0x110 ) == iVar7) goto LAB_00105c6e;
         if (*(int*)( lVar8 + 0x110 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            lVar8 = 0;
            goto LAB_00105c6e;
         }
      }
   }
   lVar8 = 0;
   LAB_00105c6e:__mutex = (pthread_mutex_t*)( this + 0x280 );
   Dependency::deleted_notify((RID*)( lVar8 + 0xe0 ));
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 == 0) {
      if (uVar5 < *(uint*)( this + 0x26c )) {
         uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 );
         lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118;
         lVar8 = *(long*)( *(long*)( this + 600 ) + uVar6 * 8 ) + lVar9;
         if (*(int*)( lVar8 + 0x110 ) < 0) {
            pthread_mutex_unlock(__mutex);
            uVar6 = 0;
            _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         } else if (iVar7 == *(int*)( lVar8 + 0x110 )) {
            Dependency::~Dependency((Dependency*)( lVar8 + 0xe0 ));
            if (*(long*)( lVar8 + 0xd8 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar8 + 0xd8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar8 + 0xd8 );
                  *(undefined8*)( lVar8 + 0xd8 ) = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (*(long*)( lVar8 + 200 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar8 + 200 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar8 + 200 );
                  *(undefined8*)( lVar8 + 200 ) = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (*(long*)( lVar8 + 0xb8 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar8 + 0xb8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar8 + 0xb8 );
                  *(undefined8*)( lVar8 + 0xb8 ) = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            if (*(long*)( lVar8 + 0x60 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar8 + 0x60 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar8 + 0x60 );
                  *(undefined8*)( lVar8 + 0x60 ) = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
            lVar8 = *(long*)( this + 0x260 );
            *(undefined4*)( *(long*)( *(long*)( this + 600 ) + uVar6 * 8 ) + 0x110 + lVar9 ) = 0xffffffff;
            uVar4 = *(int*)( this + 0x270 ) - 1;
            *(uint*)( this + 0x270 ) = uVar4;
            *(uint*)( *(long*)( lVar8 + ( (ulong)uVar4 / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 ) + ( (ulong)uVar4 % ( ulong ) * (uint*)( this + 0x268 ) ) * 4 ) = uVar5;
            uVar5 = pthread_mutex_unlock(__mutex);
            uVar6 = (ulong)uVar5;
         } else {
            pthread_mutex_unlock(__mutex);
            uVar6 = _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
         }
      } else {
         pthread_mutex_unlock(__mutex);
         uVar6 = _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      }
      return uVar6;
   }
   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar3);
}/* GLES3::MeshStorage::_multimesh_get_aabb(RID) */undefined8 *GLES3::MeshStorage::_multimesh_get_aabb(undefined8 *param_1, MeshStorage *param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined4 local_30;
   undefined8 local_2c;
   undefined4 local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x26c ) )) {
      lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( param_2 + 600 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 8 );
      if (*(int*)( lVar4 + 0x110 ) == (int)( param_3 >> 0x20 )) {
         local_38 = 0;
         local_30 = 0;
         local_2c = 0;
         local_24 = 0;
         cVar3 = AABB::operator !=((AABB*)( lVar4 + 0x30 ), (AABB*)&local_38);
         if (cVar3 == '\0') {
            if (*(char*)( lVar4 + 0x48 ) != '\0') {
               _update_dirty_multimeshes(param_2);
            }
            uVar1 = *(undefined8*)( lVar4 + 0x18 );
            uVar2 = *(undefined8*)( lVar4 + 0x20 );
            param_1[2] = *(undefined8*)( lVar4 + 0x28 );
            *param_1 = uVar1;
            param_1[1] = uVar2;
         } else {
            uVar2 = *(undefined8*)( lVar4 + 0x38 );
            uVar1 = *(undefined8*)( lVar4 + 0x40 );
            *param_1 = *(undefined8*)( lVar4 + 0x30 );
            param_1[1] = uVar2;
            param_1[2] = uVar1;
         }
         goto LAB_00106014;
      }
      if (*(int*)( lVar4 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_get_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x731, "Parameter \"multimesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   LAB_00106014:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_update_dirty_skeletons() */void GLES3::MeshStorage::_update_dirty_skeletons(MeshStorage *this) {
   long lVar1;
   lVar1 = *(long*)( this + 0x308 );
   while (lVar1 != 0) {
      if (*(int*)( lVar1 + 4 ) != 0) {
         ( *_glad_glBindTexture )(0xde1, *(undefined4*)( lVar1 + 0x48 ));
         ( *_glad_glTexImage2D )(0xde1, 0, 0x8814, 0x100, *(undefined4*)( lVar1 + 8 ), 0, 0x1908, 0x1406, *(undefined8*)( lVar1 + 0x18 ));
         ( *_glad_glBindTexture )(0xde1, 0);
      }
      *(undefined8*)( this + 0x308 ) = *(undefined8*)( lVar1 + 0x28 );
      Dependency::changed_notify(lVar1 + 0x58, 9);
      *(long*)( lVar1 + 0x50 ) = *(long*)( lVar1 + 0x50 ) + 1;
      *(undefined1*)( lVar1 + 0x20 ) = 0;
      *(undefined8*)( lVar1 + 0x28 ) = 0;
      lVar1 = *(long*)( this + 0x308 );
   };
   *(undefined8*)( this + 0x308 ) = 0;
   return;
}/* GLES3::MeshStorage::skeleton_free(RID) */void GLES3::MeshStorage::skeleton_free(MeshStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   ulong uVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   long lVar6;
   long lVar7;
   int iVar5;
   _update_dirty_skeletons(this);
   ( **(code**)( *(long*)this + 0x2c8 ) )(this, param_2, 0, 0);
   uVar4 = (uint)param_2;
   iVar5 = (int)( param_2 >> 0x20 );
   if (param_2 != 0) {
      if (uVar4 < *(uint*)( this + 0x2cc )) {
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 );
         if (*(int*)( lVar6 + 0x88 ) == iVar5) goto LAB_00106254;
         if (*(int*)( lVar6 + 0x88 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            lVar6 = 0;
            goto LAB_00106254;
         }
      }
   }
   lVar6 = 0;
   LAB_00106254:__mutex = (pthread_mutex_t*)( this + 0x2e0 );
   Dependency::deleted_notify((RID*)( lVar6 + 0x58 ));
   iVar2 = pthread_mutex_lock(__mutex);
   if (iVar2 == 0) {
      if (uVar4 < *(uint*)( this + 0x2cc )) {
         uVar1 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 );
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90;
         lVar7 = *(long*)( *(long*)( this + 0x2b8 ) + uVar1 * 8 ) + lVar6;
         if (*(int*)( lVar7 + 0x88 ) < 0) {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
         } else if (iVar5 == *(int*)( lVar7 + 0x88 )) {
            Dependency::~Dependency((Dependency*)( lVar7 + 0x58 ));
            if (*(void**)( lVar7 + 0x18 ) != (void*)0x0) {
               if (*(int*)( lVar7 + 0x10 ) != 0) {
                  *(undefined4*)( lVar7 + 0x10 ) = 0;
               }
               Memory::free_static(*(void**)( lVar7 + 0x18 ), false);
            }
            lVar7 = *(long*)( this + 0x2c0 );
            *(undefined4*)( *(long*)( *(long*)( this + 0x2b8 ) + uVar1 * 8 ) + 0x88 + lVar6 ) = 0xffffffff;
            uVar3 = *(int*)( this + 0x2d0 ) - 1;
            *(uint*)( this + 0x2d0 ) = uVar3;
            *(uint*)( *(long*)( lVar7 + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 4 ) = uVar4;
            pthread_mutex_unlock(__mutex);
         } else {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
         }
      } else {
         pthread_mutex_unlock(__mutex);
         _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      }
      return;
   }
   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::update_mesh_instances() [clone .part.0] */void GLES3::MeshStorage::update_mesh_instances(MeshStorage *this) {
   Version *pVVar1;
   Surface *pSVar2;
   MeshStorage *pMVar3;
   Surface SVar4;
   MeshInstance *pMVar5;
   long *plVar6;
   Surface *pSVar7;
   uint *puVar8;
   bool bVar9;
   int iVar10;
   long lVar11;
   long lVar12;
   MeshInstance *pMVar13;
   uint *puVar14;
   ulong *puVar15;
   ulong uVar16;
   long lVar17;
   int *piVar18;
   ulong uVar19;
   uint uVar20;
   ulong uVar21;
   ulong uVar22;
   undefined4 *puVar23;
   ulong uVar24;
   char *pcVar25;
   undefined4 uVar26;
   uint uVar27;
   uint uVar28;
   uint uVar29;
   uint uVar30;
   char *pcVar31;
   uint uVar32;
   ulong uVar33;
   uint uVar34;
   long lVar35;
   ulong uVar36;
   long in_FS_OFFSET;
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   char *pcVar40;
   ulong uVar41;
   code *pcVar42;
   Transform2D *this_00;
   Skeleton *local_160;
   Specialization *local_128;
   ulong local_108;
   ulong local_100;
   ulong local_f8[6];
   undefined2 local_c8;
   ulong local_b8[6];
   undefined2 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pMVar13 = *(MeshInstance**)( this + 0x240 );
   if (pMVar13 == (MeshInstance*)0x0) {
      LAB_00106f2e:( *_glad_glDisable )(0x8c89);
      ( *_glad_glBindBuffer )(0x8892, 0);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      /* WARNING: Could not recover jumptable at 0x00106f77. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_glad_glBindBufferBase )(0x8c8e, 0, 0);
      return;
   }
   pVVar1 = (Version*)( this + 0x48 );
   LAB_0010649e:pMVar5 = *(MeshInstance**)( pMVar13 + 8 );
   if (*(long*)( pMVar5 + 8 ) != 0) {
      uVar41 = *(ulong*)( pMVar5 + 8 );
      if (*(uint*)( this + 0x2cc ) <= (uint)uVar41) goto LAB_00109d5f;
      local_160 = (Skeleton*)( ( ( uVar41 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( uVar41 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 ) );
      if (*(int*)( local_160 + 0x88 ) != (int)( uVar41 >> 0x20 )) {
         if (*(int*)( local_160 + 0x88 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
         goto LAB_00109d5f;
      }
      if (*(int*)( pMVar5 + 0x10 ) != 0) goto LAB_0010652f;
      pMVar5[0x40] = (MeshInstance)0x0;
      goto LAB_0010650f;
   }
   LAB_00109d5f:if (*(int*)( pMVar5 + 0x10 ) != 0) {
      local_160 = (Skeleton*)0x0;
      LAB_0010652f:uVar34 = **(uint**)pMVar5;
      if (( uVar34 != 0 ) && ( ( *(uint**)pMVar5 )[1] == 0 )) {
         uVar41 = 0;
         uVar21 = ( ulong ) * (uint*)( pMVar5 + 0x20 );
         do {
            uVar24 = uVar21;
            if (uVar21 == uVar41) goto LAB_00106fd7;
            uVar41 = uVar41 + 1;
         } while ( uVar34 != uVar41 );
      }
      uVar41 = 0;
      LAB_00106560:do {
         lVar11 = uVar41 * 0x40;
         if (*(int*)( lVar11 + *(long*)( pMVar5 + 0x18 ) + 0x10 ) == 0) goto LAB_00106e80;
         uVar19 = *(ulong*)( lVar11 + *(long*)( pMVar5 + 0x18 ) + 0x28 );
         uVar20 = (uint)uVar41;
         uVar34 = **(uint**)pMVar5;
         if (( ( local_160 == (Skeleton*)0x0 ) || ( ( Skeleton )(( uVar19 & 0x2000000 ) != 0) != *local_160 ) ) || ( ( uVar19 & 0x400 ) == 0 )) {
            if (uVar34 != 0) {
               bVar9 = false;
               goto LAB_001065d0;
            }
            goto LAB_00106e80;
         }
         if (uVar34 != 0) {
            bVar9 = true;
            LAB_001065d0:uVar16 = 3;
            if (( uVar19 & 0x2000000 ) == 0) {
               uVar21 = ( -(ulong)((uVar19 & 2) == 0) & 0xfffffffffffffff8 ) + 10;
               uVar16 = uVar21 | 0x10;
               if (( uVar19 & 4 ) == 0) {
                  uVar16 = uVar21;
               }
            }
            iVar10 = *(int*)( this + 0x168 );
            uVar21 = *(ulong*)( this + 0x178 );
            local_108 = uVar16;
            if (iVar10 < 1) goto LAB_00109590;
            if (uVar21 == 0) goto LAB_00109550;
            pMVar3 = this + 0x9c;
            if (*(uint*)( this + 0x9c ) <= (uint)uVar21) goto LAB_00109550;
            uVar24 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
            iVar10 = *(int*)( uVar24 + 0x78 );
            if (iVar10 != (int)( uVar21 >> 0x20 )) goto LAB_0010953f;
            if (( *(int*)( uVar24 + 0x68 ) == 0 ) && ( ShaderGLES3::_initialize_version(pVVar1),*(int*)( uVar24 + 0x68 ) == 0 )) goto LAB_00106fb7;
            uVar33 = local_108;
            plVar6 = *(long**)( uVar24 + 0x70 );
            uVar34 = *(uint*)( plVar6 + 3 );
            uVar36 = (ulong)uVar34;
            lVar17 = plVar6[2];
            uVar21 = local_108 * 0x3ffff - 1;
            uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
            uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
            uVar21 = uVar21 >> 0x16 ^ uVar21;
            uVar22 = uVar21 & 0xffffffff;
            if ((int)uVar21 == 0) {
               uVar22 = 1;
            }
            uVar21 = uVar22 % uVar36;
            uVar27 = *(uint*)( lVar17 + uVar21 * 4 );
            if (uVar27 != 0) {
               uVar32 = 0;
               while (( uVar27 != (uint)uVar22 || ( local_108 != *(ulong*)( plVar6[1] + uVar21 * 8 ) ) )) {
                  uVar32 = uVar32 + 1;
                  uVar21 = ( ulong )((int)uVar21 + 1) % uVar36;
                  uVar27 = *(uint*)( lVar17 + uVar21 * 4 );
                  if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_00109630;
               };
               puVar23 = (undefined4*)( *plVar6 + uVar21 * 0x38 );
               if (puVar23 != (undefined4*)0x0) {
                  if (*(char*)( puVar23 + 0xc ) == '\0') goto LAB_0010683c;
                  uVar21 = *(long*)( this + 0x158 ) * 0x3ffff - 1;
                  uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
                  uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
                  uVar21 = uVar21 >> 0x16 ^ uVar21;
                  uVar24 = uVar21 & 0xffffffff;
                  if ((int)uVar21 == 0) {
                     uVar24 = 1;
                  }
                  uVar32 = 0;
                  uVar21 = uVar24 % uVar36;
                  uVar27 = *(uint*)( lVar17 + uVar21 * 4 );
                  if (uVar27 == 0) goto LAB_00106e70;
                  goto LAB_00106819;
               }
            }
            LAB_00109630:local_c8 = 0;
            for (int i = 0; i < 6; i++) {
               local_f8[i] = 0;
            }
            ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)local_f8, (Version*)0x0, uVar24);
            if (( *(int*)( uVar24 + 0x68 ) == 0 ) || ( OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>**)( uVar24 + 0x70 ), &local_108, (Specialization*)local_f8),*(int*)( uVar24 + 0x68 ) == 0 )) goto LAB_00106fb7;
            plVar6 = *(long**)( uVar24 + 0x70 );
            uVar34 = *(uint*)( plVar6 + 3 );
            uVar21 = uVar22 % (ulong)uVar34;
            uVar27 = *(uint*)( plVar6[2] + uVar21 * 4 );
            if (uVar27 != 0) {
               uVar32 = 0;
               LAB_0010973a:if (( uVar27 != (uint)uVar22 ) || ( uVar33 != *(ulong*)( plVar6[1] + uVar21 * 8 ) )) goto LAB_00109700;
               puVar23 = (undefined4*)( *plVar6 + uVar21 * 0x38 );
               if (this[0xe8] != (MeshStorage)0x0) {
                  ShaderGLES3::_save_to_cache(pVVar1);
               }
               ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_f8);
               LAB_00106833:if (puVar23 == (undefined4*)0x0) goto LAB_00106e70;
               LAB_0010683c:if (*(char*)( (long)puVar23 + 0x31 ) == '\0') goto LAB_00106e70;
               ( *_glad_glUseProgram )(*puVar23);
               *(undefined4**)( this + 0x170 ) = puVar23;
               pcVar42 = _glad_glUniform1f;
               uVar21 = *(ulong*)( this + 0x178 );
               if (*(int*)( this + 0x118 ) < 1) {
                  _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                  goto LAB_00106ae0;
               }
               if (( uVar21 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar21 )) {
                  LAB_00109804:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
               } else {
                  lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                  iVar10 = *(int*)( lVar17 + 0x78 );
                  if (iVar10 != (int)( uVar21 >> 0x20 )) {
                     if (iVar10 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }
                     goto LAB_00109804;
                  }
                  if (*(int*)( lVar17 + 0x68 ) < 1) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar17 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                     goto LAB_00106ae0;
                  }
                  plVar6 = *(long**)( lVar17 + 0x70 );
                  uVar34 = *(uint*)( plVar6 + 3 );
                  uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                  uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                  uVar24 = uVar24 >> 0x16 ^ uVar24;
                  uVar33 = uVar24 & 0xffffffff;
                  if ((int)uVar24 == 0) {
                     uVar33 = 1;
                  }
                  uVar24 = uVar33 % (ulong)uVar34;
                  uVar27 = *(uint*)( plVar6[2] + uVar24 * 4 );
                  if (uVar27 == 0) {
                     LAB_00109e5f:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                  } else {
                     uVar32 = 0;
                     while (( uVar27 != (uint)uVar33 || ( uVar16 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                        uVar32 = uVar32 + 1;
                        uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar34;
                        uVar27 = *(uint*)( plVar6[2] + uVar24 * 4 );
                        if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_00109e5f;
                     };
                     lVar17 = *plVar6 + uVar24 * 0x38;
                     if (lVar17 == 0) goto LAB_00109e5f;
                     if (*(int*)( lVar17 + 0x10 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar17 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                     } else if (-1 < **(int**)( lVar17 + 0x18 )) {
                        if (*(int*)( this + 0x118 ) < 1) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                           LAB_0010a168:uVar26 = 0xffffffff;
                        } else {
                           if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                              LAB_0010a143:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                              goto LAB_0010a168;
                           }
                           lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           if (iVar10 != *(int*)( lVar17 + 0x78 )) {
                              if (*(int*)( lVar17 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                              }
                              goto LAB_0010a143;
                           }
                           if (*(int*)( lVar17 + 0x68 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar17 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010a168;
                           }
                           plVar6 = *(long**)( lVar17 + 0x70 );
                           uVar34 = *(uint*)( plVar6 + 3 );
                           uVar21 = uVar33 % (ulong)uVar34;
                           uVar27 = *(uint*)( plVar6[2] + uVar21 * 4 );
                           if (uVar27 == 0) {
                              LAB_0010aaf1:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              goto LAB_0010a168;
                           }
                           uVar32 = 0;
                           while (( uVar27 != (uint)uVar33 || ( uVar16 != *(ulong*)( plVar6[1] + uVar21 * 8 ) ) )) {
                              uVar32 = uVar32 + 1;
                              uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                              uVar27 = *(uint*)( plVar6[2] + uVar21 * 4 );
                              if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010aaf1;
                           };
                           lVar17 = *plVar6 + uVar21 * 0x38;
                           if (lVar17 == 0) goto LAB_0010aaf1;
                           if (*(int*)( lVar17 + 0x10 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar17 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                              goto LAB_0010a168;
                           }
                           uVar26 = **(undefined4**)( lVar17 + 0x18 );
                        }
                        ( *pcVar42 )(uVar26);
                     }
                  }
               }
               LAB_00106ae0:pcVar42 = _glad_glUniform1f;
               uVar21 = *(ulong*)( this + 0x178 );
               uVar34 = **(uint**)pMVar5;
               if (*(int*)( this + 0x118 ) < 2) {
                  _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                  goto LAB_00106d7d;
               }
               if (( uVar21 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar21 )) {
                  LAB_00109cbb:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.");
               } else {
                  lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                  iVar10 = *(int*)( lVar17 + 0x78 );
                  if (iVar10 != (int)( uVar21 >> 0x20 )) {
                     if (iVar10 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }
                     goto LAB_00109cbb;
                  }
                  if (*(int*)( lVar17 + 0x68 ) < 1) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar17 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                     goto LAB_00106d7d;
                  }
                  plVar6 = *(long**)( lVar17 + 0x70 );
                  uVar27 = *(uint*)( plVar6 + 3 );
                  uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                  uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                  uVar24 = uVar24 >> 0x16 ^ uVar24;
                  uVar33 = uVar24 & 0xffffffff;
                  if ((int)uVar24 == 0) {
                     uVar33 = 1;
                  }
                  uVar24 = uVar33 % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                  if (uVar32 == 0) {
                     LAB_00109eca:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.");
                  } else {
                     uVar28 = 0;
                     while (( uVar32 != (uint)uVar33 || ( uVar16 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                        uVar28 = uVar28 + 1;
                        uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_00109eca;
                     };
                     lVar17 = *plVar6 + uVar24 * 0x38;
                     if (lVar17 == 0) goto LAB_00109eca;
                     if (*(int*)( lVar17 + 0x10 ) < 2) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar17 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                     } else if (-1 < *(int*)( *(long*)( lVar17 + 0x18 ) + 4 )) {
                        if (*(int*)( this + 0x118 ) < 2) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                           LAB_0010a1a9:uVar26 = 0xffffffff;
                        } else {
                           if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                              LAB_0010a184:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.");
                              goto LAB_0010a1a9;
                           }
                           lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           if (iVar10 != *(int*)( lVar17 + 0x78 )) {
                              if (*(int*)( lVar17 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                              }
                              goto LAB_0010a184;
                           }
                           if (*(int*)( lVar17 + 0x68 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar17 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010a1a9;
                           }
                           plVar6 = *(long**)( lVar17 + 0x70 );
                           uVar27 = *(uint*)( plVar6 + 3 );
                           uVar21 = uVar33 % (ulong)uVar27;
                           uVar32 = *(uint*)( plVar6[2] + uVar21 * 4 );
                           if (uVar32 == 0) {
                              LAB_0010aac7:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.");
                              goto LAB_0010a1a9;
                           }
                           uVar28 = 0;
                           while (( uVar32 != (uint)uVar33 || ( uVar16 != *(ulong*)( plVar6[1] + uVar21 * 8 ) ) )) {
                              uVar28 = uVar28 + 1;
                              uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar27;
                              uVar32 = *(uint*)( plVar6[2] + uVar21 * 4 );
                              if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar21 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010aac7;
                           };
                           lVar17 = *plVar6 + uVar21 * 0x38;
                           if (lVar17 == 0) goto LAB_0010aac7;
                           if (*(int*)( lVar17 + 0x10 ) < 2) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar17 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                              goto LAB_0010a1a9;
                           }
                           uVar26 = *(undefined4*)( *(long*)( lVar17 + 0x18 ) + 4 );
                        }
                        auVar37._4_12_ = SUB1612((undefined1[16])0x0, 4);
                        auVar37._0_4_ = (float)uVar34;
                        ( *pcVar42 )(auVar37._0_8_, uVar26);
                     }
                  }
               }
               LAB_00106d7d:( *_glad_glBindBuffer )(0x8892, 0);
               lVar17 = uVar41 * 8;
               pSVar7 = *(Surface**)( *(long*)( *(long*)pMVar5 + 8 ) + uVar41 * 8 );
               pSVar2 = pSVar7 + 0x2c;
               uVar21 = ( ulong )(( uint ) * (undefined8*)( pSVar7 + 8 ) & 3);
               while (true) {
                  uVar24 = local_b8[0] >> 8;
                  local_b8[0] = uVar24 << 8;
                  LOCK();
                  SVar4 = *pSVar2;
                  if (SVar4 == (Surface)0x0) {
                     *pSVar2 = (Surface)0x1;
                  }
                  UNLOCK();
                  if (SVar4 == (Surface)0x0) break;
                  local_b8[0] = uVar24 << 8;
                  do {} while ( *pSVar2 != (Surface)0x0 );
               };
               uVar34 = *(uint*)( pSVar7 + 0x78 );
               puVar8 = *(uint**)( pSVar7 + 0x70 );
               if (uVar34 == 0) {
                  lVar35 = 0;
                  uVar24 = 0x140;
                  uVar34 = 1;
                  LAB_00106e21:*(uint*)( pSVar7 + 0x78 ) = uVar34;
                  lVar12 = Memory::realloc_static(puVar8, uVar24, false);
                  *(long*)( pSVar7 + 0x70 ) = lVar12;
                  _mesh_surface_generate_version_for_input_mask(this, (Version*)( lVar12 + lVar35 ), pSVar7, uVar21, (Surface*)0x0);
                  uVar34 = *(uint*)( *(long*)( pSVar7 + 0x70 ) + 4 + lVar35 );
                  pSVar7[0x2c] = (Surface)0x0;
               } else {
                  lVar35 = (ulong)uVar34 * 0x140;
                  puVar14 = puVar8;
                  while (uVar21 != *puVar14) {
                     puVar14 = puVar14 + 0x50;
                     if (puVar8 + (ulong)uVar34 * 0x50 == puVar14) {
                        uVar34 = uVar34 + 1;
                        uVar24 = (ulong)uVar34 * 0x140;
                        goto LAB_00106e21;
                     }
                  };
                  uVar34 = puVar14[1];
                  pSVar7[0x2c] = (Surface)0x0;
               }
               ( *_glad_glBindVertexArray )(uVar34);
               uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x10 );
               if (*(uint*)( pMVar5 + 0x10 ) <= uVar20) goto LAB_001095e8;
               ( *_glad_glBindBufferBase )(0x8c8e, 0, *(undefined4*)( *(long*)( pMVar5 + 0x18 ) + lVar11 ));
               ( *_glad_glBeginTransformFeedback )(0);
               ( *_glad_glDrawArrays )(0, 0, *(undefined4*)( *(long*)( *(long*)( *(long*)pMVar5 + 8 ) + lVar17 ) + 0x1c ));
               ( *_glad_glEndTransformFeedback )();
               iVar10 = *(int*)( this + 0x168 );
               uVar21 = *(ulong*)( this + 0x178 );
               local_f8[0] = uVar16;
               if (iVar10 < 2) goto LAB_00109bd9;
               if (( uVar21 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar21 )) goto LAB_00109550;
               uVar33 = *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 ) + ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80;
               iVar10 = *(int*)( uVar33 + 0x78 );
               if (iVar10 != (int)( uVar21 >> 0x20 )) goto LAB_0010953f;
               uVar34 = *(uint*)( uVar33 + 0x68 );
               if (uVar34 == 0) {
                  ShaderGLES3::_initialize_version(pVVar1);
                  uVar34 = *(uint*)( uVar33 + 0x68 );
               }
               uVar21 = local_f8[0];
               uVar24 = (ulong)uVar34;
               if (uVar34 < 2) goto LAB_00109bb4;
               lVar35 = *(long*)( uVar33 + 0x70 );
               uVar34 = *(uint*)( lVar35 + 0x38 );
               uVar36 = (ulong)uVar34;
               lVar12 = *(long*)( lVar35 + 0x30 );
               uVar24 = local_f8[0] * 0x3ffff - 1;
               uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
               uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
               uVar24 = uVar24 >> 0x16 ^ uVar24;
               uVar22 = uVar24 & 0xffffffff;
               if ((int)uVar24 == 0) {
                  uVar22 = 1;
               }
               uVar24 = uVar22 % uVar36;
               uVar27 = *(uint*)( lVar12 + uVar24 * 4 );
               uVar32 = (uint)(Specialization*)local_b8;
               if (uVar27 == 0) {
                  LAB_001099cf:local_b8[0] = 0;
                  for (int i = 0; i < 5; i++) {
                     local_b8[( i + 1 )] = 0;
                  }
                  local_88 = 0;
                  ShaderGLES3::_compile_specialization((Specialization*)pVVar1, uVar32, (Version*)0x1, uVar33);
                  uVar24 = ( ulong ) * (uint*)( uVar33 + 0x68 );
                  if (*(uint*)( uVar33 + 0x68 ) < 2) goto LAB_00109bb4;
                  OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( uVar33 + 0x70 ) + 0x20 ), local_f8, (Specialization*)local_b8);
                  uVar24 = ( ulong ) * (uint*)( uVar33 + 0x68 );
                  if (*(uint*)( uVar33 + 0x68 ) < 2) goto LAB_00109bb4;
                  lVar35 = *(long*)( uVar33 + 0x70 );
                  uVar34 = *(uint*)( lVar35 + 0x38 );
                  uVar24 = uVar22 % (ulong)uVar34;
                  uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                  if (uVar27 != 0) {
                     uVar28 = 0;
                     do {
                        if (( uVar27 == (uint)uVar22 ) && ( uVar21 == *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar24 * 8 ) )) {
                           puVar23 = (undefined4*)( *(long*)( lVar35 + 0x20 ) + uVar24 * 0x38 );
                           if (this[0xe8] != (MeshStorage)0x0) {
                              ShaderGLES3::_save_to_cache(pVVar1);
                           }
                           ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_b8);
                           goto LAB_00108673;
                        }
                        uVar28 = uVar28 + 1;
                        uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar34;
                        uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                     } while ( ( uVar27 != 0 ) && ( uVar28 <= ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 ) );
                  }
                  if (this[0xe8] != (MeshStorage)0x0) {
                     ShaderGLES3::_save_to_cache(pVVar1);
                     ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_b8);
                     goto LAB_00106e70;
                  }
                  goto LAB_00106e64;
               }
               uVar28 = 0;
               while (( uVar27 != (uint)uVar22 || ( local_f8[0] != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar24 * 8 ) ) )) {
                  uVar28 = uVar28 + 1;
                  uVar24 = ( ulong )((int)uVar24 + 1) % uVar36;
                  uVar27 = *(uint*)( lVar12 + uVar24 * 4 );
                  if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar28 )) goto LAB_001099cf;
               };
               puVar23 = (undefined4*)( *(long*)( lVar35 + 0x20 ) + uVar24 * 0x38 );
               if (puVar23 == (undefined4*)0x0) goto LAB_001099cf;
               if (*(char*)( puVar23 + 0xc ) != '\0') {
                  uVar21 = *(long*)( this + 0x158 ) * 0x3ffff - 1;
                  uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
                  uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
                  uVar21 = uVar21 >> 0x16 ^ uVar21;
                  uVar24 = uVar21 & 0xffffffff;
                  if ((int)uVar21 == 0) {
                     uVar24 = 1;
                  }
                  uVar28 = 0;
                  uVar21 = uVar24 % uVar36;
                  uVar27 = *(uint*)( lVar12 + uVar21 * 4 );
                  if (uVar27 == 0) goto LAB_00106e70;
                  while (( uVar27 != (uint)uVar24 || ( *(long*)( this + 0x158 ) != *(long*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) ) )) {
                     uVar28 = uVar28 + 1;
                     uVar21 = ( ulong )((int)uVar21 + 1) % uVar36;
                     uVar27 = *(uint*)( lVar12 + uVar21 * 4 );
                     if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar28 )) goto LAB_00106e70;
                  };
                  puVar23 = (undefined4*)( *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38 );
                  LAB_00108673:if (puVar23 == (undefined4*)0x0) goto LAB_00106e70;
               }
               if (*(char*)( (long)puVar23 + 0x31 ) == '\0') goto LAB_00106e70;
               ( *_glad_glUseProgram )(*puVar23);
               piVar18 = *(int**)pMVar5;
               *(undefined4**)( this + 0x170 ) = puVar23;
               if (*piVar18 == 1) {
                  uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x20 );
                  uVar21 = 0;
                  goto LAB_00108c93;
               }
               uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x20 );
               uVar21 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
               uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
               uVar21 = uVar21 >> 0x16 ^ uVar21;
               uVar33 = 1;
               if ((int)uVar21 != 0) {
                  uVar33 = uVar21 & 0xffffffff;
               }
               uVar36 = 0;
               LAB_001086f0:pcVar42 = _glad_glUniform1f;
               if ((uint)uVar24 <= (uint)uVar36) {
                  uVar21 = uVar36 & 0xffffffff;
                  goto LAB_00106fd7;
               }
               if (_LC132 <= ABS(*(float*)( *(long*)( pMVar5 + 0x28 ) + uVar36 * 4 ))) {
                  uVar21 = *(ulong*)( this + 0x178 );
                  uVar34 = (uint)uVar33;
                  if (*(int*)( this + 0x118 ) < 1) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                  } else {
                     if (( uVar21 != 0 ) && ( (uint)uVar21 < *(uint*)pMVar3 )) {
                        lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                        iVar10 = *(int*)( lVar35 + 0x78 );
                        if (iVar10 == (int)( uVar21 >> 0x20 )) {
                           if (*(int*)( lVar35 + 0x68 ) < 2) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                           } else {
                              lVar35 = *(long*)( lVar35 + 0x70 );
                              uVar27 = *(uint*)( lVar35 + 0x38 );
                              uVar24 = uVar33 % (ulong)uVar27;
                              uVar28 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                              if (uVar28 != 0) {
                                 uVar29 = 0;
                                 while (( uVar28 != uVar34 || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar24 * 8 ) ) )) {
                                    uVar29 = uVar29 + 1;
                                    uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                                    uVar28 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                                    if (( uVar28 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar28 % uVar27 ) % uVar27 < uVar29 )) goto LAB_00109f35;
                                 };
                                 lVar35 = *(long*)( lVar35 + 0x20 ) + uVar24 * 0x38;
                                 if (lVar35 != 0) {
                                    if (*(int*)( lVar35 + 0x10 ) < 1) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                       goto LAB_00108975;
                                    }
                                    if (**(int**)( lVar35 + 0x18 ) < 0) goto LAB_00108975;
                                    if (*(int*)( this + 0x118 ) < 1) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                                       goto LAB_0010a113;
                                    }
                                    if ((uint)uVar21 < *(uint*)pMVar3) {
                                       lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                       if (iVar10 == *(int*)( lVar35 + 0x78 )) {
                                          if (*(int*)( lVar35 + 0x68 ) < 2) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_0010a113;
                                          }
                                          lVar35 = *(long*)( lVar35 + 0x70 );
                                          uVar27 = *(uint*)( lVar35 + 0x38 );
                                          uVar21 = uVar33 % (ulong)uVar27;
                                          uVar28 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
                                          if (uVar28 == 0) goto LAB_0010ab5c;
                                          uVar29 = 0;
                                          goto LAB_00108929;
                                       }
                                       if (*(int*)( lVar35 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                          _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                       }
                                    }
                                    _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                    goto LAB_0010a113;
                                 }
                              }
                              LAB_00109f35:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                           }
                           goto LAB_00108975;
                        }
                        if (iVar10 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }
                     }
                     _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                  }
                  goto LAB_00108975;
               }
               goto LAB_00108c81;
            }
            LAB_00109b18:if (this[0xe8] == (MeshStorage)0x0) {
               ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_f8);
            } else {
               ShaderGLES3::_save_to_cache(pVVar1);
               ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_f8);
            }
            goto LAB_00106e70;
         }
         if (( uVar19 & 0x2000000 ) == 0) {
            uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x10 );
            uVar21 = ( -(ulong)((uVar19 & 0x8000000) == 0) & 0xffffffffffffffc0 ) + 100;
            if (*(uint*)( pMVar5 + 0x10 ) <= uVar20) {
               LAB_001095e8:uVar21 = uVar41 & 0xffffffff;
               goto LAB_00106fd7;
            }
            if (( uVar19 & 2 ) != 0) {
               uVar21 = uVar21 | 8;
            }
            if (( uVar19 & 4 ) != 0) {
               uVar21 = uVar21 | 0x10;
            }
         } else {
            uVar21 = ( -(ulong)((uVar19 & 0x8000000) == 0) & 0xffffffffffffffc0 ) + 0x65;
         }
         iVar10 = *(int*)( this + 0x168 );
         uVar24 = *(ulong*)( this + 0x178 );
         local_100 = uVar21;
         if (iVar10 < 1) {
            LAB_00109590:lVar11 = 0;
            goto LAB_001095ad;
         }
         if (( uVar24 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar24 )) goto LAB_00109550;
         uVar19 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
         iVar10 = *(int*)( uVar19 + 0x78 );
         if (iVar10 != (int)( uVar24 >> 0x20 )) goto LAB_0010953f;
         uVar24 = uVar19;
         if (( *(int*)( uVar19 + 0x68 ) == 0 ) && ( ShaderGLES3::_initialize_version(pVVar1),*(int*)( uVar19 + 0x68 ) == 0 )) {
            LAB_00106fb7:uVar21 = 0;
            uVar24 = 0;
            LAB_00106fd7:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar21, uVar24, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar42 = (code*)invalidInstructionException();
            ( *pcVar42 )();
         }
         uVar16 = local_100;
         plVar6 = *(long**)( uVar24 + 0x70 );
         uVar27 = *(uint*)( plVar6 + 3 );
         uVar33 = (ulong)uVar27;
         lVar11 = plVar6[2];
         uVar19 = local_100 * 0x3ffff - 1;
         uVar19 = ( uVar19 ^ uVar19 >> 0x1f ) * 0x15;
         uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
         uVar19 = uVar19 >> 0x16 ^ uVar19;
         uVar36 = uVar19 & 0xffffffff;
         if ((int)uVar19 == 0) {
            uVar36 = 1;
         }
         uVar19 = uVar36 % uVar33;
         uVar32 = *(uint*)( lVar11 + uVar19 * 4 );
         if (uVar32 != 0) {
            uVar28 = 0;
            while (( uVar32 != (uint)uVar36 || ( local_100 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
               uVar28 = uVar28 + 1;
               uVar19 = ( ulong )((int)uVar19 + 1) % uVar33;
               uVar32 = *(uint*)( lVar11 + uVar19 * 4 );
               if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_00109880;
            };
            puVar23 = (undefined4*)( *plVar6 + uVar19 * 0x38 );
            if (puVar23 != (undefined4*)0x0) {
               if (*(char*)( puVar23 + 0xc ) == '\0') goto LAB_001072ff;
               uVar24 = *(long*)( this + 0x158 ) * 0x3ffff - 1;
               uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
               uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
               uVar24 = uVar24 >> 0x16 ^ uVar24;
               uVar19 = uVar24 & 0xffffffff;
               if ((int)uVar24 == 0) {
                  uVar19 = 1;
               }
               uVar28 = 0;
               uVar24 = uVar19 % uVar33;
               uVar32 = *(uint*)( lVar11 + uVar24 * 4 );
               if (uVar32 != 0) goto LAB_001072d7;
               goto LAB_00106e70;
            }
         }
         LAB_00109880:local_88 = 0;
         for (int i = 0; i < 6; i++) {
            local_b8[i] = 0;
         }
         ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)local_b8, (Version*)0x0, uVar24);
         if (( *(int*)( uVar24 + 0x68 ) == 0 ) || ( OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>**)( uVar24 + 0x70 ), &local_100, (Specialization*)local_b8),*(int*)( uVar24 + 0x68 ) == 0 )) goto LAB_00106fb7;
         plVar6 = *(long**)( uVar24 + 0x70 );
         uVar27 = *(uint*)( plVar6 + 3 );
         uVar24 = uVar36 % (ulong)uVar27;
         uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
         if (uVar32 == 0) {
            LAB_00106e56:if (this[0xe8] != (MeshStorage)0x0) {
               ShaderGLES3::_save_to_cache(pVVar1);
            }
            goto LAB_00106e64;
         }
         uVar28 = 0;
         LAB_00109989:if (( uVar32 != (uint)uVar36 ) || ( uVar16 != *(ulong*)( plVar6[1] + uVar24 * 8 ) )) goto LAB_00109950;
         puVar23 = (undefined4*)( *plVar6 + uVar24 * 0x38 );
         if (this[0xe8] != (MeshStorage)0x0) {
            ShaderGLES3::_save_to_cache(pVVar1);
         }
         ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_b8);
         LAB_001072f6:if (puVar23 == (undefined4*)0x0) goto LAB_00106e70;
         LAB_001072ff:if (*(char*)( (long)puVar23 + 0x31 ) == '\0') goto LAB_00106e70;
         ( *_glad_glUseProgram )(*puVar23);
         *(undefined4**)( this + 0x170 ) = puVar23;
         Transform2D::affine_inverse();
         Transform2D::operator *((Transform2D*)&local_78, (Transform2D*)&local_58);
         pcVar42 = _glad_glUniform2fv;
         lVar11 = (long)*(int*)( this + 0x118 );
         uVar24 = *(ulong*)( this + 0x178 );
         if (*(int*)( this + 0x118 ) < 3) {
            lVar17 = 2;
            pcVar31 = "p_which";
            iVar10 = 0xe4;
            pcVar40 = "uniform_count";
            LAB_0010a341:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
            lVar11 = (long)*(int*)( this + 0x118 );
         } else {
            if (( uVar24 != 0 ) && ( (uint)uVar24 < *(uint*)( this + 0x9c ) )) {
               lVar17 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
               iVar10 = *(int*)( lVar17 + 0x78 );
               if (iVar10 == (int)( uVar24 >> 0x20 )) {
                  lVar11 = (long)*(int*)( lVar17 + 0x68 );
                  if (*(int*)( lVar17 + 0x68 ) < 1) {
                     lVar17 = 0;
                     iVar10 = 0xe7;
                     pcVar31 = "p_variant";
                     pcVar40 = "int(version->variants.size())";
                     goto LAB_0010a341;
                  }
                  plVar6 = *(long**)( lVar17 + 0x70 );
                  uVar27 = *(uint*)( plVar6 + 3 );
                  uVar19 = ( uVar21 * 0x3ffff + -1 ) * 0x15;
                  uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                  uVar19 = uVar19 >> 0x16 ^ uVar19;
                  uVar16 = uVar19 & 0xffffffff;
                  if ((int)uVar19 == 0) {
                     uVar16 = 1;
                  }
                  uVar19 = uVar16 % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                  if (uVar32 != 0) {
                     uVar28 = 0;
                     while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
                        uVar28 = uVar28 + 1;
                        uVar19 = ( ulong )((int)uVar19 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010a9af;
                     };
                     lVar17 = *plVar6 + uVar19 * 0x38;
                     if (lVar17 != 0) {
                        lVar11 = (long)*(int*)( lVar17 + 0x10 );
                        if (*(int*)( lVar17 + 0x10 ) < 3) {
                           lVar17 = 2;
                           pcVar31 = "p_which";
                           iVar10 = 0xea;
                           pcVar40 = "int(spec->uniform_location.size())";
                           goto LAB_0010a341;
                        }
                        lVar11 = (long)*(int*)( this + 0x118 );
                        if (*(int*)( *(long*)( lVar17 + 0x18 ) + 8 ) < 0) goto LAB_001075ee;
                        local_58 = local_78;
                        if (*(int*)( this + 0x118 ) < 3) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, lVar11, "p_which", "uniform_count", "", false, false);
                           LAB_0010aeb0:uVar26 = 0xffffffff;
                        } else {
                           if (*(uint*)( this + 0x9c ) <= (uint)uVar24) {
                              LAB_0010afa5:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                              goto LAB_0010aeb0;
                           }
                           lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                              if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                              }
                              goto LAB_0010afa5;
                           }
                           if (*(int*)( lVar11 + 0x68 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010aeb0;
                           }
                           plVar6 = *(long**)( lVar11 + 0x70 );
                           uVar27 = *(uint*)( plVar6 + 3 );
                           uVar24 = uVar16 % (ulong)uVar27;
                           uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                           if (uVar32 == 0) {
                              LAB_0010b433:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              goto LAB_0010aeb0;
                           }
                           uVar28 = 0;
                           while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                              uVar28 = uVar28 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                              uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                              if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010b433;
                           };
                           lVar11 = *plVar6 + uVar24 * 0x38;
                           if (lVar11 == 0) goto LAB_0010b433;
                           if (*(int*)( lVar11 + 0x10 ) < 3) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                              goto LAB_0010aeb0;
                           }
                           uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 8 );
                        }
                        ( *pcVar42 )(uVar26, 1, (Transform2D*)&local_58);
                        lVar11 = (long)*(int*)( this + 0x118 );
                        goto LAB_001075ee;
                     }
                  }
                  LAB_0010a9af:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                  lVar11 = (long)*(int*)( this + 0x118 );
                  goto LAB_001075ee;
               }
               if (iVar10 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
            }
            _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
            lVar11 = (long)*(int*)( this + 0x118 );
         }
         LAB_001075ee:pcVar42 = _glad_glUniform2fv;
         uVar24 = *(ulong*)( this + 0x178 );
         if ((int)lVar11 < 4) {
            lVar17 = 3;
            pcVar31 = "p_which";
            iVar10 = 0xe4;
            pcVar40 = "uniform_count";
            LAB_0010a621:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
            lVar11 = (long)*(int*)( this + 0x118 );
         } else {
            if (( uVar24 != 0 ) && ( (uint)uVar24 < *(uint*)( this + 0x9c ) )) {
               lVar17 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
               iVar10 = *(int*)( lVar17 + 0x78 );
               if (iVar10 == (int)( uVar24 >> 0x20 )) {
                  lVar11 = (long)*(int*)( lVar17 + 0x68 );
                  if (*(int*)( lVar17 + 0x68 ) < 1) {
                     lVar17 = 0;
                     iVar10 = 0xe7;
                     pcVar31 = "p_variant";
                     pcVar40 = "int(version->variants.size())";
                     goto LAB_0010a621;
                  }
                  plVar6 = *(long**)( lVar17 + 0x70 );
                  uVar27 = *(uint*)( plVar6 + 3 );
                  uVar19 = ( uVar21 * 0x3ffff + -1 ) * 0x15;
                  uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                  uVar19 = uVar19 >> 0x16 ^ uVar19;
                  uVar16 = uVar19 & 0xffffffff;
                  if ((int)uVar19 == 0) {
                     uVar16 = 1;
                  }
                  uVar19 = uVar16 % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                  if (uVar32 != 0) {
                     uVar28 = 0;
                     while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
                        uVar28 = uVar28 + 1;
                        uVar19 = ( ulong )((int)uVar19 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010a97e;
                     };
                     lVar17 = *plVar6 + uVar19 * 0x38;
                     if (lVar17 != 0) {
                        lVar11 = (long)*(int*)( lVar17 + 0x10 );
                        if (*(int*)( lVar17 + 0x10 ) < 4) {
                           lVar17 = 3;
                           pcVar31 = "p_which";
                           iVar10 = 0xea;
                           pcVar40 = "int(spec->uniform_location.size())";
                           goto LAB_0010a621;
                        }
                        lVar11 = (long)*(int*)( this + 0x118 );
                        if (*(int*)( *(long*)( lVar17 + 0x18 ) + 0xc ) < 0) goto LAB_0010788e;
                        local_58 = local_70;
                        if (*(int*)( this + 0x118 ) < 4) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, lVar11, "p_which", "uniform_count", "", false, false);
                           LAB_0010b1ca:uVar26 = 0xffffffff;
                        } else {
                           if (*(uint*)( this + 0x9c ) <= (uint)uVar24) {
                              LAB_0010b1a5:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                              goto LAB_0010b1ca;
                           }
                           lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                              if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                              }
                              goto LAB_0010b1a5;
                           }
                           if (*(int*)( lVar11 + 0x68 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010b1ca;
                           }
                           plVar6 = *(long**)( lVar11 + 0x70 );
                           uVar27 = *(uint*)( plVar6 + 3 );
                           uVar24 = uVar16 % (ulong)uVar27;
                           uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                           if (uVar32 == 0) {
                              LAB_0010b253:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              goto LAB_0010b1ca;
                           }
                           uVar28 = 0;
                           while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                              uVar28 = uVar28 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                              uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                              if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010b253;
                           };
                           lVar11 = *plVar6 + uVar24 * 0x38;
                           if (lVar11 == 0) goto LAB_0010b253;
                           if (*(int*)( lVar11 + 0x10 ) < 4) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                              goto LAB_0010b1ca;
                           }
                           uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0xc );
                        }
                        ( *pcVar42 )(uVar26, 1, (Transform2D*)&local_58);
                        lVar11 = (long)*(int*)( this + 0x118 );
                        goto LAB_0010788e;
                     }
                  }
                  LAB_0010a97e:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                  lVar11 = (long)*(int*)( this + 0x118 );
                  goto LAB_0010788e;
               }
               if (iVar10 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
            }
            _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
            lVar11 = (long)*(int*)( this + 0x118 );
         }
         LAB_0010788e:pcVar42 = _glad_glUniform2fv;
         uVar24 = *(ulong*)( this + 0x178 );
         if ((int)lVar11 < 5) {
            _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, lVar11, "p_which", "uniform_count", "", false, false);
            goto LAB_00107b27;
         }
         if (( uVar24 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar24 )) {
            LAB_0010a537:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
         } else {
            lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
            iVar10 = *(int*)( lVar11 + 0x78 );
            if (iVar10 != (int)( uVar24 >> 0x20 )) {
               if (iVar10 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
               goto LAB_0010a537;
            }
            if (*(int*)( lVar11 + 0x68 ) < 1) {
               _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
               goto LAB_00107b27;
            }
            plVar6 = *(long**)( lVar11 + 0x70 );
            uVar27 = *(uint*)( plVar6 + 3 );
            uVar19 = ( uVar21 * 0x3ffff + -1 ) * 0x15;
            uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
            uVar19 = uVar19 >> 0x16 ^ uVar19;
            uVar16 = uVar19 & 0xffffffff;
            if ((int)uVar19 == 0) {
               uVar16 = 1;
            }
            uVar19 = uVar16 % (ulong)uVar27;
            uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
            if (uVar32 == 0) {
               LAB_0010a916:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
            } else {
               uVar28 = 0;
               while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
                  uVar28 = uVar28 + 1;
                  uVar19 = ( ulong )((int)uVar19 + 1) % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                  if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010a916;
               };
               lVar11 = *plVar6 + uVar19 * 0x38;
               if (lVar11 == 0) goto LAB_0010a916;
               if (*(int*)( lVar11 + 0x10 ) < 5) {
                  _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
               } else if (-1 < *(int*)( *(long*)( lVar11 + 0x18 ) + 0x10 )) {
                  local_58 = local_68;
                  if (*(int*)( this + 0x118 ) < 5) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                     LAB_0010b076:uVar26 = 0xffffffff;
                  } else {
                     if (*(uint*)( this + 0x9c ) <= (uint)uVar24) {
                        LAB_0010b0bf:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                        goto LAB_0010b076;
                     }
                     lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                     if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                        if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }
                        goto LAB_0010b0bf;
                     }
                     if (*(int*)( lVar11 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_0010b076;
                     }
                     plVar6 = *(long**)( lVar11 + 0x70 );
                     uVar27 = *(uint*)( plVar6 + 3 );
                     uVar24 = uVar16 % (ulong)uVar27;
                     uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                     if (uVar32 == 0) {
                        LAB_0010b4dc:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                        goto LAB_0010b076;
                     }
                     uVar28 = 0;
                     while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                        uVar28 = uVar28 + 1;
                        uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010b4dc;
                     };
                     lVar11 = *plVar6 + uVar24 * 0x38;
                     if (lVar11 == 0) goto LAB_0010b4dc;
                     if (*(int*)( lVar11 + 0x10 ) < 5) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        goto LAB_0010b076;
                     }
                     uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x10 );
                  }
                  ( *pcVar42 )(uVar26, 1, (Transform2D*)&local_58);
               }
            }
         }
         LAB_00107b27:Transform2D::affine_inverse();
         pcVar42 = _glad_glUniform2fv;
         lVar11 = (long)*(int*)( this + 0x118 );
         uVar24 = *(ulong*)( this + 0x178 );
         if (*(int*)( this + 0x118 ) < 6) {
            lVar17 = 5;
            pcVar31 = "p_which";
            iVar10 = 0xe4;
            pcVar40 = "uniform_count";
            LAB_0010a733:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
            lVar11 = (long)*(int*)( this + 0x118 );
         } else {
            if (( uVar24 != 0 ) && ( (uint)uVar24 < *(uint*)( this + 0x9c ) )) {
               lVar17 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
               iVar10 = *(int*)( lVar17 + 0x78 );
               if (iVar10 == (int)( uVar24 >> 0x20 )) {
                  lVar11 = (long)*(int*)( lVar17 + 0x68 );
                  if (*(int*)( lVar17 + 0x68 ) < 1) {
                     lVar17 = 0;
                     iVar10 = 0xe7;
                     pcVar31 = "p_variant";
                     pcVar40 = "int(version->variants.size())";
                     goto LAB_0010a733;
                  }
                  plVar6 = *(long**)( lVar17 + 0x70 );
                  uVar27 = *(uint*)( plVar6 + 3 );
                  uVar19 = ( uVar21 * 0x3ffff + -1 ) * 0x15;
                  uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                  uVar19 = uVar19 >> 0x16 ^ uVar19;
                  uVar16 = uVar19 & 0xffffffff;
                  if ((int)uVar19 == 0) {
                     uVar16 = 1;
                  }
                  uVar19 = uVar16 % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                  if (uVar32 != 0) {
                     uVar28 = 0;
                     while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
                        uVar28 = uVar28 + 1;
                        uVar19 = ( ulong )((int)uVar19 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010a7d7;
                     };
                     lVar17 = *plVar6 + uVar19 * 0x38;
                     if (lVar17 != 0) {
                        lVar11 = (long)*(int*)( lVar17 + 0x10 );
                        if (*(int*)( lVar17 + 0x10 ) < 6) {
                           lVar17 = 5;
                           pcVar31 = "p_which";
                           iVar10 = 0xea;
                           pcVar40 = "int(spec->uniform_location.size())";
                           goto LAB_0010a733;
                        }
                        lVar11 = (long)*(int*)( this + 0x118 );
                        if (*(int*)( *(long*)( lVar17 + 0x18 ) + 0x14 ) < 0) goto LAB_00107dd7;
                        local_80 = local_58;
                        if (*(int*)( this + 0x118 ) < 6) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 5, lVar11, "p_which", "uniform_count", "", false, false);
                           LAB_0010ade6:uVar26 = 0xffffffff;
                        } else {
                           if (*(uint*)( this + 0x9c ) <= (uint)uVar24) {
                              LAB_0010adc1:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                              goto LAB_0010ade6;
                           }
                           lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                              if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                              }
                              goto LAB_0010adc1;
                           }
                           if (*(int*)( lVar11 + 0x68 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010ade6;
                           }
                           plVar6 = *(long**)( lVar11 + 0x70 );
                           uVar27 = *(uint*)( plVar6 + 3 );
                           uVar24 = uVar16 % (ulong)uVar27;
                           uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                           if (uVar32 == 0) {
                              LAB_0010b360:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              goto LAB_0010ade6;
                           }
                           uVar28 = 0;
                           while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                              uVar28 = uVar28 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                              uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                              if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010b360;
                           };
                           lVar11 = *plVar6 + uVar24 * 0x38;
                           if (lVar11 == 0) goto LAB_0010b360;
                           if (*(int*)( lVar11 + 0x10 ) < 6) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 5, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                              goto LAB_0010ade6;
                           }
                           uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x14 );
                        }
                        ( *pcVar42 )(uVar26, 1, &local_80);
                        lVar11 = (long)*(int*)( this + 0x118 );
                        goto LAB_00107dd7;
                     }
                  }
                  LAB_0010a7d7:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                  lVar11 = (long)*(int*)( this + 0x118 );
                  goto LAB_00107dd7;
               }
               if (iVar10 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
            }
            _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
            lVar11 = (long)*(int*)( this + 0x118 );
         }
         LAB_00107dd7:pcVar42 = _glad_glUniform2fv;
         uVar24 = *(ulong*)( this + 0x178 );
         if ((int)lVar11 < 7) {
            lVar17 = 6;
            pcVar31 = "p_which";
            iVar10 = 0xe4;
            pcVar40 = "uniform_count";
            LAB_0010a6eb:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
            lVar11 = (long)*(int*)( this + 0x118 );
         } else {
            if (( uVar24 != 0 ) && ( (uint)uVar24 < *(uint*)( this + 0x9c ) )) {
               lVar17 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
               iVar10 = *(int*)( lVar17 + 0x78 );
               if (iVar10 == (int)( uVar24 >> 0x20 )) {
                  lVar11 = (long)*(int*)( lVar17 + 0x68 );
                  if (*(int*)( lVar17 + 0x68 ) < 1) {
                     lVar17 = 0;
                     iVar10 = 0xe7;
                     pcVar31 = "p_variant";
                     pcVar40 = "int(version->variants.size())";
                     goto LAB_0010a6eb;
                  }
                  plVar6 = *(long**)( lVar17 + 0x70 );
                  uVar27 = *(uint*)( plVar6 + 3 );
                  uVar19 = ( uVar21 * 0x3ffff + -1 ) * 0x15;
                  uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                  uVar19 = uVar19 >> 0x16 ^ uVar19;
                  uVar16 = uVar19 & 0xffffffff;
                  if ((int)uVar19 == 0) {
                     uVar16 = 1;
                  }
                  uVar19 = uVar16 % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                  if (uVar32 != 0) {
                     uVar28 = 0;
                     while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
                        uVar28 = uVar28 + 1;
                        uVar19 = ( ulong )((int)uVar19 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010a8be;
                     };
                     lVar17 = *plVar6 + uVar19 * 0x38;
                     if (lVar17 != 0) {
                        lVar11 = (long)*(int*)( lVar17 + 0x10 );
                        if (*(int*)( lVar17 + 0x10 ) < 7) {
                           lVar17 = 6;
                           pcVar31 = "p_which";
                           iVar10 = 0xea;
                           pcVar40 = "int(spec->uniform_location.size())";
                           goto LAB_0010a6eb;
                        }
                        lVar11 = (long)*(int*)( this + 0x118 );
                        if (*(int*)( *(long*)( lVar17 + 0x18 ) + 0x18 ) < 0) goto LAB_0010806f;
                        local_80 = local_50;
                        if (*(int*)( this + 0x118 ) < 7) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 6, lVar11, "p_which", "uniform_count", "", false, false);
                           LAB_0010ae6a:uVar26 = 0xffffffff;
                        } else {
                           if (*(uint*)( this + 0x9c ) <= (uint)uVar24) {
                              LAB_0010b010:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                              goto LAB_0010ae6a;
                           }
                           lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                              if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                              }
                              goto LAB_0010b010;
                           }
                           if (*(int*)( lVar11 + 0x68 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010ae6a;
                           }
                           plVar6 = *(long**)( lVar11 + 0x70 );
                           uVar27 = *(uint*)( plVar6 + 3 );
                           uVar24 = uVar16 % (ulong)uVar27;
                           uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                           if (uVar32 == 0) {
                              LAB_0010b38a:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              goto LAB_0010ae6a;
                           }
                           uVar28 = 0;
                           while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                              uVar28 = uVar28 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                              uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                              if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010b38a;
                           };
                           lVar11 = *plVar6 + uVar24 * 0x38;
                           if (lVar11 == 0) goto LAB_0010b38a;
                           if (*(int*)( lVar11 + 0x10 ) < 7) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 6, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                              goto LAB_0010ae6a;
                           }
                           uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x18 );
                        }
                        ( *pcVar42 )(uVar26, 1, &local_80);
                        lVar11 = (long)*(int*)( this + 0x118 );
                        goto LAB_0010806f;
                     }
                  }
                  LAB_0010a8be:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                  lVar11 = (long)*(int*)( this + 0x118 );
                  goto LAB_0010806f;
               }
               if (iVar10 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
            }
            _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
            lVar11 = (long)*(int*)( this + 0x118 );
         }
         LAB_0010806f:pcVar42 = _glad_glUniform2fv;
         uVar24 = *(ulong*)( this + 0x178 );
         if ((int)lVar11 < 8) {
            _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 7, lVar11, "p_which", "uniform_count", "", false, false);
            goto LAB_00108300;
         }
         if (( uVar24 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar24 )) {
            LAB_0010a2f2:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.");
         } else {
            lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
            iVar10 = *(int*)( lVar11 + 0x78 );
            if (iVar10 != (int)( uVar24 >> 0x20 )) {
               if (iVar10 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }
               goto LAB_0010a2f2;
            }
            if (*(int*)( lVar11 + 0x68 ) < 1) {
               _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
               goto LAB_00108300;
            }
            plVar6 = *(long**)( lVar11 + 0x70 );
            uVar27 = *(uint*)( plVar6 + 3 );
            uVar19 = ( uVar21 * 0x3ffff + -1 ) * 0x15;
            uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
            uVar19 = uVar19 >> 0x16 ^ uVar19;
            uVar16 = uVar19 & 0xffffffff;
            if ((int)uVar19 == 0) {
               uVar16 = 1;
            }
            uVar19 = uVar16 % (ulong)uVar27;
            uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
            if (uVar32 == 0) {
               LAB_0010a894:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.");
            } else {
               uVar28 = 0;
               while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar19 * 8 ) ) )) {
                  uVar28 = uVar28 + 1;
                  uVar19 = ( ulong )((int)uVar19 + 1) % (ulong)uVar27;
                  uVar32 = *(uint*)( plVar6[2] + uVar19 * 4 );
                  if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar19 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_0010a894;
               };
               lVar11 = *plVar6 + uVar19 * 0x38;
               if (lVar11 == 0) goto LAB_0010a894;
               if (*(int*)( lVar11 + 0x10 ) < 8) {
                  _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 7, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
               } else if (-1 < *(int*)( *(long*)( lVar11 + 0x18 ) + 0x1c )) {
                  local_80 = local_48;
                  if (*(int*)( this + 0x118 ) < 8) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 7, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                     LAB_0010af1e:uVar26 = 0xffffffff;
                  } else {
                     if (*(uint*)( this + 0x9c ) <= (uint)uVar24) {
                        LAB_0010aef9:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.");
                        goto LAB_0010af1e;
                     }
                     lVar11 = ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                     if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                        if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }
                        goto LAB_0010aef9;
                     }
                     if (*(int*)( lVar11 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_0010af1e;
                     }
                     plVar6 = *(long**)( lVar11 + 0x70 );
                     uVar27 = *(uint*)( plVar6 + 3 );
                     uVar24 = uVar16 % (ulong)uVar27;
                     uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                     if (uVar32 == 0) {
                        LAB_0010b5f7:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.");
                        goto LAB_0010af1e;
                     }
                     while (( uVar32 != (uint)uVar16 || ( uVar21 != *(ulong*)( plVar6[1] + uVar24 * 8 ) ) )) {
                        uVar34 = uVar34 + 1;
                        uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
                        uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
                        if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar34 )) goto LAB_0010b5f7;
                     };
                     lVar11 = *plVar6 + uVar24 * 0x38;
                     if (lVar11 == 0) goto LAB_0010b5f7;
                     if (*(int*)( lVar11 + 0x10 ) < 8) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 7, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        goto LAB_0010af1e;
                     }
                     uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x1c );
                  }
                  ( *pcVar42 )(uVar26, 1, &local_80);
               }
            }
         }
         LAB_00108300:pSVar7 = *(Surface**)( *(long*)( *(long*)pMVar5 + 8 ) + uVar41 * 8 );
         pSVar2 = pSVar7 + 0x2c;
         uVar21 = ( ulong )(( uint ) * (undefined8*)( pSVar7 + 8 ) & 3);
         while (true) {
            uVar24 = local_b8[0] >> 8;
            local_b8[0] = uVar24 << 8;
            LOCK();
            SVar4 = *pSVar2;
            if (SVar4 == (Surface)0x0) {
               *pSVar2 = (Surface)0x1;
            }
            UNLOCK();
            if (SVar4 == (Surface)0x0) break;
            local_b8[0] = uVar24 << 8;
            do {} while ( *pSVar2 != (Surface)0x0 );
         };
         uVar34 = *(uint*)( pSVar7 + 0x78 );
         puVar8 = *(uint**)( pSVar7 + 0x70 );
         if (uVar34 == 0) {
            lVar11 = 0;
            uVar24 = 0x140;
            uVar34 = 1;
            LAB_00108389:*(uint*)( pSVar7 + 0x78 ) = uVar34;
            lVar17 = Memory::realloc_static(puVar8, uVar24, false);
            *(long*)( pSVar7 + 0x70 ) = lVar17;
            _mesh_surface_generate_version_for_input_mask(this, (Version*)( lVar17 + lVar11 ), pSVar7, uVar21, (Surface*)0x0);
            uVar34 = *(uint*)( *(long*)( pSVar7 + 0x70 ) + 4 + lVar11 );
            pSVar7[0x2c] = (Surface)0x0;
         } else {
            lVar11 = (ulong)uVar34 * 0x140;
            puVar14 = puVar8;
            while (uVar21 != *puVar14) {
               puVar14 = puVar14 + 0x50;
               if (puVar8 + (ulong)uVar34 * 0x50 == puVar14) {
                  uVar34 = uVar34 + 1;
                  uVar24 = (ulong)uVar34 * 0x140;
                  goto LAB_00108389;
               }
            };
            uVar34 = puVar14[1];
            pSVar7[0x2c] = (Surface)0x0;
         }
         ( *_glad_glBindVertexArray )(uVar34);
         _compute_skeleton(this, pMVar5, local_160, uVar20);
         uVar41 = uVar41 + 1;
         if (*(uint*)( pMVar5 + 0x10 ) <= (uint)uVar41) goto LAB_00106e93;
      } while ( true );
   }
   pMVar5[0x40] = (MeshInstance)0x0;
   goto LAB_00106eab;
   while (true) {
      uVar32 = uVar32 + 1;
      uVar21 = ( ulong )((int)uVar21 + 1) % uVar36;
      uVar27 = *(uint*)( lVar17 + uVar21 * 4 );
      if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) break;
      LAB_00106819:if (( uVar27 == (uint)uVar24 ) && ( *(long*)( this + 0x158 ) == *(long*)( plVar6[1] + uVar21 * 8 ) )) {
         puVar23 = (undefined4*)( *plVar6 + uVar21 * 0x38 );
         goto LAB_00106833;
      }
   };
   goto LAB_00106e70;
   LAB_00108929:if (( uVar28 != uVar34 ) || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) )) {
      uVar29 = uVar29 + 1;
      uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar27;
      uVar28 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
      if (( uVar28 == 0 ) || ( ( ( uVar27 + (int)uVar21 ) - uVar28 % uVar27 ) % uVar27 < uVar29 )) goto LAB_0010ab5c;
      goto LAB_00108929;
   }
   lVar35 = *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38;
   if (lVar35 != 0) {
      if (*(int*)( lVar35 + 0x10 ) < 1) {
         _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
         goto LAB_0010a113;
      }
      uVar26 = **(undefined4**)( lVar35 + 0x18 );
      goto LAB_0010896c;
   }
   LAB_0010ab5c:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
   LAB_0010a113:uVar26 = 0xffffffff;
   LAB_0010896c:( *pcVar42 )(uVar26);
   LAB_00108975:pcVar42 = _glad_glUniform1f;
   uVar21 = *(ulong*)( this + 0x178 );
   uVar27 = **(uint**)pMVar5;
   if (*(int*)( this + 0x118 ) < 2) {
      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
   } else {
      if (( uVar21 != 0 ) && ( (uint)uVar21 < *(uint*)pMVar3 )) {
         lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
         iVar10 = *(int*)( lVar35 + 0x78 );
         if (iVar10 == (int)( uVar21 >> 0x20 )) {
            if (*(int*)( lVar35 + 0x68 ) < 2) {
               _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
            } else {
               lVar35 = *(long*)( lVar35 + 0x70 );
               uVar28 = *(uint*)( lVar35 + 0x38 );
               uVar24 = uVar33 % (ulong)uVar28;
               uVar29 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
               if (uVar29 != 0) {
                  uVar30 = 0;
                  while (( uVar29 != uVar34 || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar24 * 8 ) ) )) {
                     uVar30 = uVar30 + 1;
                     uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar28;
                     uVar29 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                     if (( uVar29 == 0 ) || ( ( ( uVar28 + (int)uVar24 ) - uVar29 % uVar28 ) % uVar28 < uVar30 )) goto LAB_00109f9d;
                  };
                  lVar35 = *(long*)( lVar35 + 0x20 ) + uVar24 * 0x38;
                  if (lVar35 != 0) {
                     if (*(int*)( lVar35 + 0x10 ) < 2) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        goto LAB_00108bd6;
                     }
                     if (*(int*)( *(long*)( lVar35 + 0x18 ) + 4 ) < 0) goto LAB_00108bd6;
                     if (*(int*)( this + 0x118 ) < 2) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                        goto LAB_0010a0a3;
                     }
                     if ((uint)uVar21 < *(uint*)pMVar3) {
                        lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                        if (iVar10 == *(int*)( lVar35 + 0x78 )) {
                           if (*(int*)( lVar35 + 0x68 ) < 2) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                              goto LAB_0010a0a3;
                           }
                           lVar35 = *(long*)( lVar35 + 0x70 );
                           uVar28 = *(uint*)( lVar35 + 0x38 );
                           uVar21 = uVar33 % (ulong)uVar28;
                           uVar29 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
                           if (uVar29 == 0) goto LAB_0010ab86;
                           uVar30 = 0;
                           goto LAB_00108b81;
                        }
                        if (*(int*)( lVar35 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }
                     }
                     _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     goto LAB_0010a0a3;
                  }
               }
               LAB_00109f9d:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
            }
            goto LAB_00108bd6;
         }
         if (iVar10 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
   }
   LAB_00108bd6:( *_glad_glBindVertexArray )(*(undefined4*)( *(long*)( *(long*)( *(long*)( *(long*)pMVar5 + 8 ) + lVar17 ) + 0x108 ) + 4 + uVar36 * 8 ));
   _blend_shape_bind_mesh_instance_buffer(this, pMVar5, uVar20);
   uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x10 );
   if (*(uint*)( pMVar5 + 0x10 ) <= uVar20) goto LAB_001095e8;
   ( *_glad_glBindBufferBase )(0x8c8e, 0, *(undefined4*)( *(long*)( pMVar5 + 0x18 ) + 4 + lVar11 ));
   ( *_glad_glBeginTransformFeedback )(0);
   ( *_glad_glDrawArrays )(0, 0, *(undefined4*)( *(long*)( *(long*)( *(long*)pMVar5 + 8 ) + lVar17 ) + 0x1c ));
   ( *_glad_glEndTransformFeedback )();
   uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x10 );
   if (*(uint*)( pMVar5 + 0x10 ) <= uVar20) goto LAB_001095e8;
   puVar15 = (ulong*)( lVar11 + *(long*)( pMVar5 + 0x18 ) );
   *puVar15 = *puVar15 << 0x20 | *puVar15 >> 0x20;
   piVar18 = *(int**)pMVar5;
   uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x20 );
   LAB_00108c81:uVar36 = uVar36 + 1;
   uVar21 = ( ulong )(*piVar18 - 1U);
   if (*piVar18 - 1U <= (uint)uVar36) goto LAB_00108c93;
   goto LAB_001086f0;
   LAB_00108b81:if (( uVar29 != uVar34 ) || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) )) {
      uVar30 = uVar30 + 1;
      uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar28;
      uVar29 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
      if (( uVar29 == 0 ) || ( ( ( uVar28 + (int)uVar21 ) - uVar29 % uVar28 ) % uVar28 < uVar30 )) goto LAB_0010ab86;
      goto LAB_00108b81;
   }
   lVar35 = *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38;
   if (lVar35 != 0) {
      if (*(int*)( lVar35 + 0x10 ) < 2) {
         _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
         goto LAB_0010a0a3;
      }
      uVar26 = *(undefined4*)( *(long*)( lVar35 + 0x18 ) + 4 );
      goto LAB_00108bc6;
   }
   LAB_0010ab86:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
   LAB_0010a0a3:uVar26 = 0xffffffff;
   LAB_00108bc6:auVar38._4_12_ = SUB1612((undefined1[16])0x0, 4);
   auVar38._0_4_ = (float)uVar27;
   ( *pcVar42 )(auVar38._0_8_, uVar26);
   goto LAB_00108bd6;
   LAB_00108c93:if ((uint)uVar24 <= (uint)uVar21) goto LAB_00106fd7;
   ( *_glad_glBindVertexArray )(*(undefined4*)( *(long*)( *(long*)( *(long*)( piVar18 + 2 ) + lVar17 ) + 0x108 ) + 4 + uVar21 * 8 ));
   _blend_shape_bind_mesh_instance_buffer(this, pMVar5, uVar20);
   if (bVar9) {
      uVar16 = ( ulong )(( uVar19 & 0x8000000 ) != 0) << 6 | uVar16 | 4;
   }
   iVar10 = *(int*)( this + 0x168 );
   uVar21 = *(ulong*)( this + 0x178 );
   uVar16 = uVar16 | 0x20;
   local_f8[0] = uVar16;
   if (iVar10 < 2) {
      LAB_00109bd9:lVar11 = 1;
      LAB_001095ad:_err_print_index_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbb, lVar11, (long)iVar10, "p_variant", "variant_count", "", false, false);
      uVar41 = uVar41 + 1;
      if (*(uint*)( pMVar5 + 0x10 ) <= (uint)uVar41) goto LAB_00106e93;
      goto LAB_00106560;
   }
   if (( uVar21 != 0 ) && ( (uint)uVar21 < *(uint*)( this + 0x9c ) )) {
      uVar19 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
      iVar10 = *(int*)( uVar19 + 0x78 );
      if (iVar10 == (int)( uVar21 >> 0x20 )) {
         uVar34 = *(uint*)( uVar19 + 0x68 );
         if (uVar34 == 0) {
            ShaderGLES3::_initialize_version(pVVar1);
            uVar34 = *(uint*)( uVar19 + 0x68 );
         }
         uVar24 = (ulong)uVar34;
         if (1 < uVar34) {
            lVar35 = *(long*)( uVar19 + 0x70 );
            uVar34 = *(uint*)( lVar35 + 0x38 );
            uVar24 = (ulong)uVar34;
            lVar12 = *(long*)( lVar35 + 0x30 );
            uVar21 = local_f8[0] * 0x3ffff - 1;
            uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
            uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
            uVar21 = uVar21 >> 0x16 ^ uVar21;
            uVar33 = 1;
            if ((int)uVar21 != 0) {
               uVar33 = uVar21 & 0xffffffff;
            }
            uVar21 = uVar33 % uVar24;
            uVar27 = *(uint*)( lVar12 + uVar21 * 4 );
            if (uVar27 != 0) {
               uVar28 = 0;
               while (( uVar27 != (uint)uVar33 || ( local_f8[0] != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) ) )) {
                  uVar28 = uVar28 + 1;
                  uVar21 = ( ulong )((int)uVar21 + 1) % uVar24;
                  uVar27 = *(uint*)( lVar12 + uVar21 * 4 );
                  if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar28 )) goto LAB_0010c674;
               };
               puVar23 = (undefined4*)( *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38 );
               if (puVar23 != (undefined4*)0x0) {
                  if (*(char*)( puVar23 + 0xc ) == '\0') goto LAB_00108f62;
                  uVar21 = *(long*)( this + 0x158 ) * 0x3ffff - 1;
                  uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
                  uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
                  uVar21 = uVar21 >> 0x16 ^ uVar21;
                  uVar19 = 1;
                  if ((int)uVar21 != 0) {
                     uVar19 = uVar21 & 0xffffffff;
                  }
                  uVar32 = 0;
                  uVar21 = uVar19 % uVar24;
                  uVar27 = *(uint*)( lVar12 + uVar21 * 4 );
                  if (uVar27 == 0) goto LAB_00106e70;
                  goto LAB_00108f3a;
               }
            }
            LAB_0010c674:local_b8[0] = 0;
            for (int i = 0; i < 5; i++) {
               local_b8[( i + 1 )] = 0;
            }
            local_88 = 0;
            uVar21 = local_f8[0];
            ShaderGLES3::_compile_specialization((Specialization*)pVVar1, uVar32, (Version*)0x1, uVar19);
            uVar24 = ( ulong ) * (uint*)( uVar19 + 0x68 );
            if (1 < *(uint*)( uVar19 + 0x68 )) {
               OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( uVar19 + 0x70 ) + 0x20 ), local_f8, (Specialization*)local_b8);
               uVar24 = ( ulong ) * (uint*)( uVar19 + 0x68 );
               if (1 < *(uint*)( uVar19 + 0x68 )) {
                  lVar35 = *(long*)( uVar19 + 0x70 );
                  uVar34 = *(uint*)( lVar35 + 0x38 );
                  uVar24 = uVar33 % (ulong)uVar34;
                  uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                  if (uVar27 != 0) {
                     uVar32 = 0;
                     LAB_0010c787:if (( uVar27 != (uint)uVar33 ) || ( uVar21 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar24 * 8 ) )) goto LAB_0010c750;
                     puVar23 = (undefined4*)( *(long*)( lVar35 + 0x20 ) + uVar24 * 0x38 );
                     if (this[0xe8] != (MeshStorage)0x0) {
                        ShaderGLES3::_save_to_cache(pVVar1);
                     }
                     ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_b8);
                     LAB_00108f59:if (puVar23 == (undefined4*)0x0) goto LAB_00106e70;
                     LAB_00108f62:if (*(char*)( (long)puVar23 + 0x31 ) == '\0') goto LAB_00106e70;
                     ( *_glad_glUseProgram )(*puVar23);
                     *(undefined4**)( this + 0x170 ) = puVar23;
                     pcVar42 = _glad_glUniform1f;
                     uVar21 = *(ulong*)( this + 0x178 );
                     if (*(int*)( this + 0x118 ) < 1) {
                        pcVar31 = "./drivers/gles3/shader_gles3.h";
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                        goto LAB_001091f0;
                     }
                     if (( uVar21 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar21 )) {
                        LAB_0010d417:pcVar31 = "./drivers/gles3/shader_gles3.h";
                        _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     } else {
                        lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                        iVar10 = *(int*)( lVar35 + 0x78 );
                        if (iVar10 != (int)( uVar21 >> 0x20 )) {
                           if (iVar10 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar19);
                           }
                           goto LAB_0010d417;
                        }
                        if (*(int*)( lVar35 + 0x68 ) < 2) {
                           pcVar31 = "./drivers/gles3/shader_gles3.h";
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                           goto LAB_001091f0;
                        }
                        lVar35 = *(long*)( lVar35 + 0x70 );
                        uVar34 = *(uint*)( lVar35 + 0x38 );
                        pcVar31 = (char*)(ulong)uVar34;
                        uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                        uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                        uVar24 = uVar24 >> 0x16 ^ uVar24;
                        uVar19 = 1;
                        if ((int)uVar24 != 0) {
                           uVar19 = uVar24 & 0xffffffff;
                        }
                        uVar24 = uVar19 % (ulong)pcVar31;
                        uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                        if (uVar27 == 0) {
                           LAB_0010d26a:pcVar31 = "./drivers/gles3/shader_gles3.h";
                           _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                        } else {
                           uVar32 = 0;
                           while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar24 * 8 ) ) )) {
                              uVar32 = uVar32 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)pcVar31;
                              uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
                              if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d26a;
                           };
                           lVar12 = *(long*)( lVar35 + 0x20 ) + uVar24 * 0x38;
                           if (lVar12 == 0) goto LAB_0010d26a;
                           if (*(int*)( lVar12 + 0x10 ) < 1) {
                              pcVar31 = "./drivers/gles3/shader_gles3.h";
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar12 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                           } else if (-1 < **(int**)( lVar12 + 0x18 )) {
                              if (*(int*)( this + 0x118 ) < 1) {
                                 pcVar31 = "./drivers/gles3/shader_gles3.h";
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                                 LAB_0010c843:uVar26 = 0xffffffff;
                              } else {
                                 if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                    LAB_0010d1c1:pcVar31 = "./drivers/gles3/shader_gles3.h";
                                    _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                    goto LAB_0010c843;
                                 }
                                 lVar12 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                 if (iVar10 != *(int*)( lVar12 + 0x78 )) {
                                    if (*(int*)( lVar12 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                       _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar35);
                                    }
                                    goto LAB_0010d1c1;
                                 }
                                 if (*(int*)( lVar12 + 0x68 ) < 2) {
                                    pcVar31 = "./drivers/gles3/shader_gles3.h";
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar12 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                    goto LAB_0010c843;
                                 }
                                 lVar35 = *(long*)( lVar12 + 0x70 );
                                 uVar34 = *(uint*)( lVar35 + 0x38 );
                                 pcVar31 = (char*)(ulong)uVar34;
                                 uVar21 = uVar19 % (ulong)pcVar31;
                                 uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
                                 if (uVar27 == 0) {
                                    LAB_0010c81e:pcVar31 = "./drivers/gles3/shader_gles3.h";
                                    _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                    goto LAB_0010c843;
                                 }
                                 uVar32 = 0;
                                 while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) ) )) {
                                    uVar32 = uVar32 + 1;
                                    uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)pcVar31;
                                    uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
                                    if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010c81e;
                                 };
                                 lVar35 = *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38;
                                 if (lVar35 == 0) goto LAB_0010c81e;
                                 if (*(int*)( lVar35 + 0x10 ) < 1) {
                                    pcVar31 = "./drivers/gles3/shader_gles3.h";
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                    goto LAB_0010c843;
                                 }
                                 uVar26 = **(undefined4**)( lVar35 + 0x18 );
                              }
                              ( *pcVar42 )(uVar26);
                           }
                        }
                     }
                     LAB_001091f0:pcVar42 = _glad_glUniform1f;
                     uVar21 = *(ulong*)( this + 0x178 );
                     uVar24 = ( ulong ) * *(uint**)pMVar5;
                     if (*(int*)( this + 0x118 ) < 2) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                        goto LAB_00109481;
                     }
                     if (( uVar21 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar21 )) {
                        LAB_0010d503:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     } else {
                        lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                        iVar10 = *(int*)( lVar35 + 0x78 );
                        if (iVar10 != (int)( uVar21 >> 0x20 )) {
                           if (iVar10 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, pcVar31);
                           }
                           goto LAB_0010d503;
                        }
                        if (*(int*)( lVar35 + 0x68 ) < 2) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                           goto LAB_00109481;
                        }
                        lVar35 = *(long*)( lVar35 + 0x70 );
                        uVar34 = *(uint*)( lVar35 + 0x38 );
                        uVar19 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                        uVar33 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                        uVar33 = uVar33 >> 0x16 ^ uVar33;
                        uVar19 = 1;
                        if ((int)uVar33 != 0) {
                           uVar19 = uVar33 & 0xffffffff;
                        }
                        uVar33 = uVar19 % (ulong)uVar34;
                        uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar33 * 4 );
                        if (uVar27 == 0) {
                           LAB_0010d5e3:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                        } else {
                           uVar32 = 0;
                           while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar33 * 8 ) ) )) {
                              uVar32 = uVar32 + 1;
                              uVar33 = ( ulong )((int)uVar33 + 1) % (ulong)uVar34;
                              uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar33 * 4 );
                              if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar33 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d5e3;
                           };
                           lVar35 = *(long*)( lVar35 + 0x20 ) + uVar33 * 0x38;
                           if (lVar35 == 0) goto LAB_0010d5e3;
                           if (*(int*)( lVar35 + 0x10 ) < 2) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                           } else if (-1 < *(int*)( *(long*)( lVar35 + 0x18 ) + 4 )) {
                              if (*(int*)( this + 0x118 ) < 2) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                                 LAB_0010d05a:uVar26 = 0xffffffff;
                              } else {
                                 if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                    LAB_0010d0ae:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                    goto LAB_0010d05a;
                                 }
                                 lVar35 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                 if (iVar10 != *(int*)( lVar35 + 0x78 )) {
                                    if (*(int*)( lVar35 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                       _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar19);
                                    }
                                    goto LAB_0010d0ae;
                                 }
                                 if (*(int*)( lVar35 + 0x68 ) < 2) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar35 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                    goto LAB_0010d05a;
                                 }
                                 lVar35 = *(long*)( lVar35 + 0x70 );
                                 uVar34 = *(uint*)( lVar35 + 0x38 );
                                 uVar21 = uVar19 % (ulong)uVar34;
                                 uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
                                 if (uVar27 == 0) {
                                    LAB_0010d035:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                    goto LAB_0010d05a;
                                 }
                                 uVar32 = 0;
                                 while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) ) )) {
                                    uVar32 = uVar32 + 1;
                                    uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                    uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar21 * 4 );
                                    if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d035;
                                 };
                                 lVar35 = *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38;
                                 if (lVar35 == 0) goto LAB_0010d035;
                                 if (*(int*)( lVar35 + 0x10 ) < 2) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar35 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                    goto LAB_0010d05a;
                                 }
                                 uVar26 = *(undefined4*)( *(long*)( lVar35 + 0x18 ) + 4 );
                              }
                              auVar39._4_12_ = SUB1612((undefined1[16])0x0, 4);
                              auVar39._0_4_ = (float)( uVar24 & 0xffffffff );
                              ( *pcVar42 )(auVar39._0_8_, uVar26);
                           }
                        }
                     }
                     LAB_00109481:if (!bVar9) {
                        uVar24 = ( ulong ) * (uint*)( pMVar5 + 0x10 );
                        if (uVar20 < *(uint*)( pMVar5 + 0x10 )) {
                           ( *_glad_glBindBufferBase )(0x8c8e, 0, *(undefined4*)( *(long*)( pMVar5 + 0x18 ) + 0x10 + lVar11 ));
                           ( *_glad_glBeginTransformFeedback )(0);
                           ( *_glad_glDrawArrays )(0, 0, *(undefined4*)( *(long*)( *(long*)( *(long*)pMVar5 + 8 ) + lVar17 ) + 0x1c ));
                           ( *_glad_glEndTransformFeedback )();
                           goto LAB_001094e3;
                        }
                        goto LAB_001095e8;
                     }
                     Transform2D::affine_inverse();
                     this_00 = (Transform2D*)&local_78;
                     Transform2D::operator *(this_00, (Transform2D*)&local_58);
                     pcVar42 = _glad_glUniform2fv;
                     lVar11 = (long)*(int*)( this + 0x118 );
                     uVar21 = *(ulong*)( this + 0x178 );
                     if (*(int*)( this + 0x118 ) < 3) {
                        lVar17 = 2;
                        pcVar31 = "p_which";
                        iVar10 = 0xe4;
                        pcVar40 = "uniform_count";
                        LAB_0010d3a5:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     } else {
                        if (uVar21 != 0) {
                           uVar24 = uVar21 & 0xffffffff;
                           if ((uint)uVar21 < *(uint*)( this + 0x9c )) {
                              lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                              iVar10 = *(int*)( lVar17 + 0x78 );
                              if (iVar10 == (int)( uVar21 >> 0x20 )) {
                                 lVar11 = (long)*(int*)( lVar17 + 0x68 );
                                 if (*(int*)( lVar17 + 0x68 ) < 2) {
                                    lVar17 = 1;
                                    pcVar31 = "p_variant";
                                    iVar10 = 0xe7;
                                    pcVar40 = "int(version->variants.size())";
                                    goto LAB_0010d3a5;
                                 }
                                 lVar11 = *(long*)( lVar17 + 0x70 );
                                 uVar34 = *(uint*)( lVar11 + 0x38 );
                                 uVar19 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                                 uVar33 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                                 uVar33 = uVar33 >> 0x16 ^ uVar33;
                                 uVar19 = 1;
                                 if ((int)uVar33 != 0) {
                                    uVar19 = uVar33 & 0xffffffff;
                                 }
                                 uVar33 = uVar19 % (ulong)uVar34;
                                 uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar33 * 4 );
                                 if (uVar27 != 0) {
                                    uVar32 = 0;
                                    while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar33 * 8 ) ) )) {
                                       uVar32 = uVar32 + 1;
                                       uVar33 = ( ulong )((int)uVar33 + 1) % (ulong)uVar34;
                                       uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar33 * 4 );
                                       if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar33 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d865;
                                    };
                                    lVar17 = *(long*)( lVar11 + 0x20 ) + uVar33 * 0x38;
                                    if (lVar17 != 0) {
                                       lVar11 = (long)*(int*)( lVar17 + 0x10 );
                                       if (*(int*)( lVar17 + 0x10 ) < 3) {
                                          lVar17 = 2;
                                          pcVar31 = "p_which";
                                          iVar10 = 0xea;
                                          pcVar40 = "int(spec->uniform_location.size())";
                                          goto LAB_0010d3a5;
                                       }
                                       lVar11 = (long)*(int*)( this + 0x118 );
                                       if (*(int*)( *(long*)( lVar17 + 0x18 ) + 8 ) < 0) goto LAB_0010b963;
                                       local_58 = local_78;
                                       if (*(int*)( this + 0x118 ) < 3) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, lVar11, "p_which", "uniform_count", "", false, false);
                                          LAB_0010d797:uVar26 = 0xffffffff;
                                       } else {
                                          if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                             LAB_0010d8ce:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                             goto LAB_0010d797;
                                          }
                                          lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                          if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                                             if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x88 ), uVar41, uVar24, this_00);
                                             }
                                             goto LAB_0010d8ce;
                                          }
                                          if (*(int*)( lVar11 + 0x68 ) < 2) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_0010d797;
                                          }
                                          lVar11 = *(long*)( lVar11 + 0x70 );
                                          uVar34 = *(uint*)( lVar11 + 0x38 );
                                          uVar21 = uVar19 % (ulong)uVar34;
                                          uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                          if (uVar27 == 0) {
                                             LAB_0010d772:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                             goto LAB_0010d797;
                                          }
                                          uVar32 = 0;
                                          while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar21 * 8 ) ) )) {
                                             uVar32 = uVar32 + 1;
                                             uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                             uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                             if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d772;
                                          };
                                          lVar11 = uVar21 * 0x38 + *(long*)( lVar11 + 0x20 );
                                          if (lVar11 == 0) goto LAB_0010d772;
                                          if (*(int*)( lVar11 + 0x10 ) < 3) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             goto LAB_0010d797;
                                          }
                                          uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 8 );
                                       }
                                       ( *pcVar42 )(uVar26, 1, (Transform2D*)&local_58);
                                       lVar11 = (long)*(int*)( this + 0x118 );
                                       goto LAB_0010b963;
                                    }
                                 }
                                 LAB_0010d865:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 lVar11 = (long)*(int*)( this + 0x118 );
                                 goto LAB_0010b963;
                              }
                              if (iVar10 + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, iVar10, uVar41, uVar24, this_00);
                              }
                           }
                        }
                        _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     }
                     LAB_0010b963:pcVar42 = _glad_glUniform2fv;
                     uVar21 = *(ulong*)( this + 0x178 );
                     if ((int)lVar11 < 4) {
                        lVar17 = 3;
                        pcVar31 = "p_which";
                        iVar10 = 0xe4;
                        pcVar40 = "uniform_count";
                        LAB_0010d6b4:pcVar25 = "./drivers/gles3/shader_gles3.h";
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     } else {
                        if (uVar21 != 0) {
                           uVar24 = uVar21 & 0xffffffff;
                           if ((uint)uVar21 < *(uint*)( this + 0x9c )) {
                              lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                              iVar10 = *(int*)( lVar17 + 0x78 );
                              if (iVar10 == (int)( uVar21 >> 0x20 )) {
                                 lVar11 = (long)*(int*)( lVar17 + 0x68 );
                                 if (*(int*)( lVar17 + 0x68 ) < 2) {
                                    lVar17 = 1;
                                    pcVar31 = "p_variant";
                                    iVar10 = 0xe7;
                                    pcVar40 = "int(version->variants.size())";
                                    goto LAB_0010d6b4;
                                 }
                                 lVar17 = *(long*)( lVar17 + 0x70 );
                                 uVar34 = *(uint*)( lVar17 + 0x38 );
                                 pcVar25 = (char*)(ulong)uVar34;
                                 uVar19 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                                 uVar33 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
                                 uVar33 = uVar33 >> 0x16 ^ uVar33;
                                 uVar19 = 1;
                                 if ((int)uVar33 != 0) {
                                    uVar19 = uVar33 & 0xffffffff;
                                 }
                                 uVar33 = uVar19 % (ulong)pcVar25;
                                 uVar27 = *(uint*)( *(long*)( lVar17 + 0x30 ) + uVar33 * 4 );
                                 if (uVar27 != 0) {
                                    uVar32 = 0;
                                    while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar17 + 0x28 ) + uVar33 * 8 ) ) )) {
                                       uVar32 = uVar32 + 1;
                                       uVar33 = ( ulong )((int)uVar33 + 1) % (ulong)pcVar25;
                                       uVar27 = *(uint*)( *(long*)( lVar17 + 0x30 ) + uVar33 * 4 );
                                       if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar33 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d6d7;
                                    };
                                    lVar35 = *(long*)( lVar17 + 0x20 ) + uVar33 * 0x38;
                                    if (lVar35 != 0) {
                                       lVar11 = (long)*(int*)( lVar35 + 0x10 );
                                       if (*(int*)( lVar35 + 0x10 ) < 4) {
                                          lVar17 = 3;
                                          pcVar31 = "p_which";
                                          iVar10 = 0xea;
                                          pcVar40 = "int(spec->uniform_location.size())";
                                          goto LAB_0010d6b4;
                                       }
                                       lVar11 = (long)*(int*)( this + 0x118 );
                                       if (*(int*)( *(long*)( lVar35 + 0x18 ) + 0xc ) < 0) goto LAB_0010bbf3;
                                       local_58 = local_70;
                                       if (*(int*)( this + 0x118 ) < 4) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, lVar11, "p_which", "uniform_count", "", false, false);
                                          LAB_0010da77:uVar26 = 0xffffffff;
                                       } else {
                                          if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                             LAB_0010dacb:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                             goto LAB_0010da77;
                                          }
                                          lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                          if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                                             if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar17, uVar41, uVar24, this_00);
                                             }
                                             goto LAB_0010dacb;
                                          }
                                          if (*(int*)( lVar11 + 0x68 ) < 2) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_0010da77;
                                          }
                                          lVar11 = *(long*)( lVar11 + 0x70 );
                                          uVar34 = *(uint*)( lVar11 + 0x38 );
                                          uVar21 = uVar19 % (ulong)uVar34;
                                          uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                          if (uVar27 == 0) {
                                             LAB_0010da52:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                             goto LAB_0010da77;
                                          }
                                          uVar32 = 0;
                                          while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar21 * 8 ) ) )) {
                                             uVar32 = uVar32 + 1;
                                             uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                             uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                             if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010da52;
                                          };
                                          lVar11 = uVar21 * 0x38 + *(long*)( lVar11 + 0x20 );
                                          if (lVar11 == 0) goto LAB_0010da52;
                                          if (*(int*)( lVar11 + 0x10 ) < 4) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             goto LAB_0010da77;
                                          }
                                          uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0xc );
                                       }
                                       pcVar25 = (char*)0x1;
                                       ( *pcVar42 )(uVar26, 1, (Transform2D*)&local_58);
                                       lVar11 = (long)*(int*)( this + 0x118 );
                                       goto LAB_0010bbf3;
                                    }
                                 }
                                 LAB_0010d6d7:pcVar25 = "./drivers/gles3/shader_gles3.h";
                                 _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 lVar11 = (long)*(int*)( this + 0x118 );
                                 goto LAB_0010bbf3;
                              }
                              if (iVar10 + 0x80000000U < 0x7fffffff) {
                                 _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar19, uVar41, uVar24, this_00);
                              }
                           }
                        }
                        pcVar25 = "./drivers/gles3/shader_gles3.h";
                        _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     }
                     LAB_0010bbf3:uVar21 = *(ulong*)( this + 0x178 );
                     if ((int)lVar11 < 5) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, lVar11, "p_which", "uniform_count", "", false, false);
                        goto LAB_0010be84;
                     }
                     if (uVar21 == 0) {
                        LAB_0010d9e7:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     } else {
                        if (*(uint*)( this + 0x9c ) <= (uint)uVar21) goto LAB_0010d9e7;
                        lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                        iVar10 = *(int*)( lVar11 + 0x78 );
                        if (iVar10 != (int)( uVar21 >> 0x20 )) {
                           if (iVar10 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, pcVar25, uVar41, uVar24, this_00);
                           }
                           goto LAB_0010d9e7;
                        }
                        if (*(int*)( lVar11 + 0x68 ) < 2) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                           goto LAB_0010be84;
                        }
                        lVar11 = *(long*)( lVar11 + 0x70 );
                        uVar34 = *(uint*)( lVar11 + 0x38 );
                        uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                        uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                        uVar24 = uVar24 >> 0x16 ^ uVar24;
                        uVar19 = 1;
                        if ((int)uVar24 != 0) {
                           uVar19 = uVar24 & 0xffffffff;
                        }
                        uVar24 = uVar19 % (ulong)uVar34;
                        uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar24 * 4 );
                        if (uVar27 == 0) {
                           LAB_0010dbeb:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                        } else {
                           uVar32 = 0;
                           while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar24 * 8 ) ) )) {
                              uVar32 = uVar32 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar34;
                              uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar24 * 4 );
                              if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010dbeb;
                           };
                           lVar11 = *(long*)( lVar11 + 0x20 ) + uVar24 * 0x38;
                           if (lVar11 == 0) goto LAB_0010dbeb;
                           if (*(int*)( lVar11 + 0x10 ) < 5) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                           } else if (-1 < *(int*)( *(long*)( lVar11 + 0x18 ) + 0x10 )) {
                              local_58 = local_68;
                              pcVar42 = _glad_glUniform2fv;
                              if (*(int*)( this + 0x118 ) < 5) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                                 LAB_0010ccef:uVar26 = 0xffffffff;
                              } else {
                                 if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                    LAB_0010dc67:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                    goto LAB_0010ccef;
                                 }
                                 lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                 if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                                    if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                       _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar11, uVar41, _glad_glUniform2fv, this_00);
                                    }
                                    goto LAB_0010dc67;
                                 }
                                 if (*(int*)( lVar11 + 0x68 ) < 2) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                    goto LAB_0010ccef;
                                 }
                                 lVar11 = *(long*)( lVar11 + 0x70 );
                                 uVar34 = *(uint*)( lVar11 + 0x38 );
                                 uVar21 = uVar19 % (ulong)uVar34;
                                 uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                 if (uVar27 == 0) {
                                    LAB_0010ccca:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                    goto LAB_0010ccef;
                                 }
                                 uVar32 = 0;
                                 while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar21 * 8 ) ) )) {
                                    uVar32 = uVar32 + 1;
                                    uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                    uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                    if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010ccca;
                                 };
                                 lVar11 = uVar21 * 0x38 + *(long*)( lVar11 + 0x20 );
                                 if (lVar11 == 0) goto LAB_0010ccca;
                                 if (*(int*)( lVar11 + 0x10 ) < 5) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                    goto LAB_0010ccef;
                                 }
                                 uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x10 );
                              }
                              ( *pcVar42 )(uVar26, 1, (Transform2D*)&local_58);
                           }
                        }
                     }
                     LAB_0010be84:Transform2D::affine_inverse();
                     pcVar42 = _glad_glUniform2fv;
                     lVar11 = (long)*(int*)( this + 0x118 );
                     uVar21 = *(ulong*)( this + 0x178 );
                     if (*(int*)( this + 0x118 ) < 6) {
                        lVar17 = 5;
                        pcVar31 = "p_which";
                        iVar10 = 0xe4;
                        pcVar40 = "uniform_count";
                        LAB_0010cc0c:pcVar25 = "./drivers/gles3/shader_gles3.h";
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     } else {
                        if (( uVar21 != 0 ) && ( (uint)uVar21 < *(uint*)( this + 0x9c ) )) {
                           lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           iVar10 = *(int*)( lVar17 + 0x78 );
                           if (iVar10 == (int)( uVar21 >> 0x20 )) {
                              lVar11 = (long)*(int*)( lVar17 + 0x68 );
                              if (*(int*)( lVar17 + 0x68 ) < 2) {
                                 lVar17 = 1;
                                 pcVar31 = "p_variant";
                                 iVar10 = 0xe7;
                                 pcVar40 = "int(version->variants.size())";
                                 goto LAB_0010cc0c;
                              }
                              lVar17 = *(long*)( lVar17 + 0x70 );
                              uVar34 = *(uint*)( lVar17 + 0x38 );
                              pcVar25 = (char*)(ulong)uVar34;
                              uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                              uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                              uVar24 = uVar24 >> 0x16 ^ uVar24;
                              uVar19 = 1;
                              if ((int)uVar24 != 0) {
                                 uVar19 = uVar24 & 0xffffffff;
                              }
                              uVar24 = uVar19 % (ulong)pcVar25;
                              uVar27 = *(uint*)( *(long*)( lVar17 + 0x30 ) + uVar24 * 4 );
                              if (uVar27 != 0) {
                                 uVar32 = 0;
                                 while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar17 + 0x28 ) + uVar24 * 8 ) ) )) {
                                    uVar32 = uVar32 + 1;
                                    uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)pcVar25;
                                    uVar27 = *(uint*)( *(long*)( lVar17 + 0x30 ) + uVar24 * 4 );
                                    if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010cc2f;
                                 };
                                 lVar35 = *(long*)( lVar17 + 0x20 ) + uVar24 * 0x38;
                                 if (lVar35 != 0) {
                                    lVar11 = (long)*(int*)( lVar35 + 0x10 );
                                    if (*(int*)( lVar35 + 0x10 ) < 6) {
                                       lVar17 = 5;
                                       pcVar31 = "p_which";
                                       iVar10 = 0xea;
                                       pcVar40 = "int(spec->uniform_location.size())";
                                       goto LAB_0010cc0c;
                                    }
                                    lVar11 = (long)*(int*)( this + 0x118 );
                                    if (*(int*)( *(long*)( lVar35 + 0x18 ) + 0x14 ) < 0) goto LAB_0010c11c;
                                    local_80 = local_58;
                                    if (*(int*)( this + 0x118 ) < 6) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 5, lVar11, "p_which", "uniform_count", "", false, false);
                                       LAB_0010cdc7:uVar26 = 0xffffffff;
                                    } else {
                                       if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                          LAB_0010cda2:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                          goto LAB_0010cdc7;
                                       }
                                       lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                       if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                                          if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar17);
                                          }
                                          goto LAB_0010cda2;
                                       }
                                       if (*(int*)( lVar11 + 0x68 ) < 2) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                          goto LAB_0010cdc7;
                                       }
                                       lVar11 = *(long*)( lVar11 + 0x70 );
                                       uVar34 = *(uint*)( lVar11 + 0x38 );
                                       uVar21 = uVar19 % (ulong)uVar34;
                                       uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                       if (uVar27 == 0) {
                                          LAB_0010ce81:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                          goto LAB_0010cdc7;
                                       }
                                       uVar32 = 0;
                                       while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar21 * 8 ) ) )) {
                                          uVar32 = uVar32 + 1;
                                          uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                          uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                          if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010ce81;
                                       };
                                       lVar11 = uVar21 * 0x38 + *(long*)( lVar11 + 0x20 );
                                       if (lVar11 == 0) goto LAB_0010ce81;
                                       if (*(int*)( lVar11 + 0x10 ) < 6) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 5, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                          goto LAB_0010cdc7;
                                       }
                                       uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x14 );
                                    }
                                    pcVar25 = (char*)0x1;
                                    ( *pcVar42 )(uVar26, 1, &local_80);
                                    lVar11 = (long)*(int*)( this + 0x118 );
                                    goto LAB_0010c11c;
                                 }
                              }
                              LAB_0010cc2f:pcVar25 = "./drivers/gles3/shader_gles3.h";
                              _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              lVar11 = (long)*(int*)( this + 0x118 );
                              goto LAB_0010c11c;
                           }
                           if (iVar10 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar19);
                           }
                        }
                        pcVar25 = "./drivers/gles3/shader_gles3.h";
                        _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     }
                     LAB_0010c11c:pcVar42 = _glad_glUniform2fv;
                     uVar21 = *(ulong*)( this + 0x178 );
                     if ((int)lVar11 < 7) {
                        lVar17 = 6;
                        pcVar31 = "p_which";
                        iVar10 = 0xe4;
                        pcVar40 = "uniform_count";
                        LAB_0010ca3e:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar10, lVar17, lVar11, pcVar31, pcVar40, "", false, false);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     } else {
                        if (( uVar21 != 0 ) && ( (uint)uVar21 < *(uint*)( this + 0x9c ) )) {
                           lVar17 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                           iVar10 = *(int*)( lVar17 + 0x78 );
                           if (iVar10 == (int)( uVar21 >> 0x20 )) {
                              lVar11 = (long)*(int*)( lVar17 + 0x68 );
                              if (*(int*)( lVar17 + 0x68 ) < 2) {
                                 lVar17 = 1;
                                 pcVar31 = "p_variant";
                                 iVar10 = 0xe7;
                                 pcVar40 = "int(version->variants.size())";
                                 goto LAB_0010ca3e;
                              }
                              lVar11 = *(long*)( lVar17 + 0x70 );
                              uVar34 = *(uint*)( lVar11 + 0x38 );
                              uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                              uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                              uVar24 = uVar24 >> 0x16 ^ uVar24;
                              uVar19 = 1;
                              if ((int)uVar24 != 0) {
                                 uVar19 = uVar24 & 0xffffffff;
                              }
                              uVar24 = uVar19 % (ulong)uVar34;
                              uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar24 * 4 );
                              if (uVar27 != 0) {
                                 uVar32 = 0;
                                 while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar24 * 8 ) ) )) {
                                    uVar32 = uVar32 + 1;
                                    uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar34;
                                    uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar24 * 4 );
                                    if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010ca61;
                                 };
                                 lVar17 = *(long*)( lVar11 + 0x20 ) + uVar24 * 0x38;
                                 if (lVar17 != 0) {
                                    lVar11 = (long)*(int*)( lVar17 + 0x10 );
                                    if (*(int*)( lVar17 + 0x10 ) < 7) {
                                       lVar17 = 6;
                                       pcVar31 = "p_which";
                                       iVar10 = 0xea;
                                       pcVar40 = "int(spec->uniform_location.size())";
                                       goto LAB_0010ca3e;
                                    }
                                    lVar11 = (long)*(int*)( this + 0x118 );
                                    if (*(int*)( *(long*)( lVar17 + 0x18 ) + 0x18 ) < 0) goto LAB_0010c3a4;
                                    local_80 = local_50;
                                    if (*(int*)( this + 0x118 ) < 7) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 6, lVar11, "p_which", "uniform_count", "", false, false);
                                       LAB_0010c95d:uVar26 = 0xffffffff;
                                    } else {
                                       if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                          LAB_0010cb0a:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                          goto LAB_0010c95d;
                                       }
                                       lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                       if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                                          if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar19);
                                          }
                                          goto LAB_0010cb0a;
                                       }
                                       if (*(int*)( lVar11 + 0x68 ) < 2) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                          goto LAB_0010c95d;
                                       }
                                       lVar11 = *(long*)( lVar11 + 0x70 );
                                       uVar34 = *(uint*)( lVar11 + 0x38 );
                                       uVar21 = uVar19 % (ulong)uVar34;
                                       uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                       if (uVar27 == 0) {
                                          LAB_0010c938:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                          goto LAB_0010c95d;
                                       }
                                       uVar32 = 0;
                                       while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar21 * 8 ) ) )) {
                                          uVar32 = uVar32 + 1;
                                          uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                          uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                          if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010c938;
                                       };
                                       lVar11 = uVar21 * 0x38 + *(long*)( lVar11 + 0x20 );
                                       if (lVar11 == 0) goto LAB_0010c938;
                                       if (*(int*)( lVar11 + 0x10 ) < 7) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 6, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                          goto LAB_0010c95d;
                                       }
                                       uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x18 );
                                    }
                                    ( *pcVar42 )(uVar26, 1, &local_80);
                                    lVar11 = (long)*(int*)( this + 0x118 );
                                    goto LAB_0010c3a4;
                                 }
                              }
                              LAB_0010ca61:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                              lVar11 = (long)*(int*)( this + 0x118 );
                              goto LAB_0010c3a4;
                           }
                           if (iVar10 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, pcVar25);
                           }
                        }
                        _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                        lVar11 = (long)*(int*)( this + 0x118 );
                     }
                     LAB_0010c3a4:pcVar42 = _glad_glUniform2fv;
                     uVar21 = *(ulong*)( this + 0x178 );
                     if ((int)lVar11 < 8) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 7, lVar11, "p_which", "uniform_count", "", false, false);
                        goto LAB_0010c625;
                     }
                     if (( uVar21 == 0 ) || ( *(uint*)( this + 0x9c ) <= (uint)uVar21 )) {
                        LAB_0010c90e:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     } else {
                        lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                        iVar10 = *(int*)( lVar11 + 0x78 );
                        if (iVar10 != (int)( uVar21 >> 0x20 )) {
                           if (iVar10 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, iVar10);
                           }
                           goto LAB_0010c90e;
                        }
                        if (*(int*)( lVar11 + 0x68 ) < 2) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                           goto LAB_0010c625;
                        }
                        lVar11 = *(long*)( lVar11 + 0x70 );
                        uVar34 = *(uint*)( lVar11 + 0x38 );
                        uVar33 = (ulong)uVar34;
                        uVar24 = ( uVar16 * 0x3ffff + -1 ) * 0x15;
                        uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
                        uVar24 = uVar24 >> 0x16 ^ uVar24;
                        uVar19 = 1;
                        if ((int)uVar24 != 0) {
                           uVar19 = uVar24 & 0xffffffff;
                        }
                        uVar24 = uVar19 % uVar33;
                        uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar24 * 4 );
                        if (uVar27 == 0) {
                           LAB_0010c891:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                        } else {
                           uVar32 = 0;
                           while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar24 * 8 ) ) )) {
                              uVar32 = uVar32 + 1;
                              uVar24 = ( ulong )((int)uVar24 + 1) % uVar33;
                              uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar24 * 4 );
                              if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010c891;
                           };
                           lVar11 = *(long*)( lVar11 + 0x20 ) + uVar24 * 0x38;
                           if (lVar11 == 0) goto LAB_0010c891;
                           if (*(int*)( lVar11 + 0x10 ) < 8) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 7, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                           } else if (-1 < *(int*)( *(long*)( lVar11 + 0x18 ) + 0x1c )) {
                              local_80 = local_48;
                              if (*(int*)( this + 0x118 ) < 8) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 7, (long)*(int*)( this + 0x118 ), "p_which", "uniform_count", "", false, false);
                                 LAB_0010cf7d:uVar26 = 0xffffffff;
                              } else {
                                 if (*(uint*)( this + 0x9c ) <= (uint)uVar21) {
                                    LAB_0010cf58:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                    goto LAB_0010cf7d;
                                 }
                                 lVar11 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x80 + *(long*)( *(long*)( this + 0x88 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
                                 if (iVar10 != *(int*)( lVar11 + 0x78 )) {
                                    if (*(int*)( lVar11 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                       _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar33);
                                    }
                                    goto LAB_0010cf58;
                                 }
                                 if (*(int*)( lVar11 + 0x68 ) < 2) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 1, (long)*(int*)( lVar11 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                    goto LAB_0010cf7d;
                                 }
                                 lVar11 = *(long*)( lVar11 + 0x70 );
                                 uVar34 = *(uint*)( lVar11 + 0x38 );
                                 uVar21 = uVar19 % (ulong)uVar34;
                                 uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                 if (uVar27 == 0) {
                                    LAB_0010d2a6:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                    goto LAB_0010cf7d;
                                 }
                                 uVar32 = 0;
                                 while (( uVar27 != (uint)uVar19 || ( uVar16 != *(ulong*)( *(long*)( lVar11 + 0x28 ) + uVar21 * 8 ) ) )) {
                                    uVar32 = uVar32 + 1;
                                    uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
                                    uVar27 = *(uint*)( *(long*)( lVar11 + 0x30 ) + uVar21 * 4 );
                                    if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010d2a6;
                                 };
                                 lVar11 = uVar21 * 0x38 + *(long*)( lVar11 + 0x20 );
                                 if (lVar11 == 0) goto LAB_0010d2a6;
                                 if (*(int*)( lVar11 + 0x10 ) < 8) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 7, (long)*(int*)( lVar11 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                    goto LAB_0010cf7d;
                                 }
                                 uVar26 = *(undefined4*)( *(long*)( lVar11 + 0x18 ) + 0x1c );
                              }
                              ( *pcVar42 )(uVar26, 1, &local_80);
                           }
                        }
                     }
                     LAB_0010c625:_compute_skeleton(this, pMVar5, local_160, uVar20);
                     LAB_001094e3:( *_glad_glBindVertexArray )(0);
                     ( *_glad_glBindBuffer )(0x8c8e, 0);
                     goto LAB_00106e80;
                  }
                  LAB_0010c7f4:if (this[0xe8] == (MeshStorage)0x0) {
                     LAB_00106e64:local_128 = (Specialization*)local_b8;
                     ShaderGLES3::Version::Specialization::~Specialization(local_128);
                  } else {
                     ShaderGLES3::_save_to_cache(pVVar1);
                     ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_b8);
                  }
                  goto LAB_00106e70;
               }
            }
         }
         LAB_00109bb4:uVar21 = 1;
         goto LAB_00106fd7;
      }
      LAB_0010953f:if (iVar10 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   LAB_00109550:_err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbe, "Parameter \"version\" is null.", 0);
   uVar41 = uVar41 + 1;
   if (*(uint*)( pMVar5 + 0x10 ) <= (uint)uVar41) goto LAB_00106e93;
   goto LAB_00106560;
   while (true) {
      uVar32 = uVar32 + 1;
      uVar21 = ( ulong )((int)uVar21 + 1) % uVar24;
      uVar27 = *(uint*)( lVar12 + uVar21 * 4 );
      if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) break;
      LAB_00108f3a:if (( uVar27 == (uint)uVar19 ) && ( *(long*)( this + 0x158 ) == *(long*)( *(long*)( lVar35 + 0x28 ) + uVar21 * 8 ) )) {
         puVar23 = (undefined4*)( *(long*)( lVar35 + 0x20 ) + uVar21 * 0x38 );
         goto LAB_00108f59;
      }
   };
   goto LAB_00106e70;
   LAB_0010c750:uVar32 = uVar32 + 1;
   uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar34;
   uVar27 = *(uint*)( *(long*)( lVar35 + 0x30 ) + uVar24 * 4 );
   if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar24 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_0010c7f4;
   goto LAB_0010c787;
   LAB_00109700:uVar32 = uVar32 + 1;
   uVar21 = ( ulong )((int)uVar21 + 1) % (ulong)uVar34;
   uVar27 = *(uint*)( plVar6[2] + uVar21 * 4 );
   if (( uVar27 == 0 ) || ( ( ( uVar34 + (int)uVar21 ) - uVar27 % uVar34 ) % uVar34 < uVar32 )) goto LAB_00109b18;
   goto LAB_0010973a;
   while (true) {
      uVar28 = uVar28 + 1;
      uVar24 = ( ulong )((int)uVar24 + 1) % uVar33;
      uVar32 = *(uint*)( lVar11 + uVar24 * 4 );
      if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) break;
      LAB_001072d7:if (( uVar32 == (uint)uVar19 ) && ( *(long*)( this + 0x158 ) == *(long*)( plVar6[1] + uVar24 * 8 ) )) {
         puVar23 = (undefined4*)( *plVar6 + uVar24 * 0x38 );
         goto LAB_001072f6;
      }
   };
   LAB_00106e70:if (ShaderGLES3::_version_bind_shader(RID, ,int, unsigned_long) == '\0') {
      LAB_00106e80:uVar41 = uVar41 + 1;
      if (*(uint*)( pMVar5 + 0x10 ) <= (uint)uVar41) goto LAB_00106e93;
   } else {
      _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xda, "shader failed to compile, unable to bind shader.", 0);
      uVar41 = uVar41 + 1;
      ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print =
      '\0';
      if (*(uint*)( pMVar5 + 0x10 ) <= (uint)uVar41) goto LAB_00106e93;
   }
   goto LAB_00106560;
   LAB_00109950:uVar28 = uVar28 + 1;
   uVar24 = ( ulong )((int)uVar24 + 1) % (ulong)uVar27;
   uVar32 = *(uint*)( plVar6[2] + uVar24 * 4 );
   if (( uVar32 == 0 ) || ( ( ( uVar27 + (int)uVar24 ) - uVar32 % uVar27 ) % uVar27 < uVar28 )) goto LAB_00106e56;
   goto LAB_00109989;
   LAB_00106e93:pMVar5[0x40] = (MeshInstance)0x0;
   if (local_160 != (Skeleton*)0x0) {
      LAB_0010650f:*(undefined8*)( pMVar5 + 0x38 ) = *(undefined8*)( local_160 + 0x50 );
   }
   LAB_00106eab:if (*(MeshStorage**)( pMVar5 + 0x68 ) == this + 0x240) {
      lVar11 = *(long*)( pMVar5 + 0x78 );
      if (lVar11 != 0) {
         *(undefined8*)( lVar11 + 0x18 ) = *(undefined8*)( pMVar5 + 0x80 );
      }
      lVar17 = *(long*)( pMVar5 + 0x80 );
      if (lVar17 != 0) {
         *(long*)( lVar17 + 0x10 ) = lVar11;
      }
      pMVar13 = *(MeshInstance**)( this + 0x240 );
      if (pMVar5 + 0x68 == pMVar13) {
         pMVar13 = *(MeshInstance**)( pMVar5 + 0x78 );
         *(MeshInstance**)( this + 0x240 ) = pMVar13;
      }
      if (pMVar5 + 0x68 == *(MeshInstance**)( this + 0x248 )) {
         *(long*)( this + 0x248 ) = lVar17;
      }
      *(undefined8*)( pMVar5 + 0x68 ) = 0;
      *(undefined1(*) [16])( pMVar5 + 0x78 ) = (undefined1[16])0x0;
   } else {
      _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0);
      pMVar13 = *(MeshInstance**)( this + 0x240 );
   }
   if (pMVar13 == (MeshInstance*)0x0) goto LAB_00106f2e;
   goto LAB_0010649e;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::update_mesh_instances() */void GLES3::MeshStorage::update_mesh_instances(MeshStorage *this) {
   if (*(long*)( this + 0x240 ) != 0) {
      ( *_glad_glEnable )(0x8c89);
      ( *_glad_glBindFramebuffer )(0x8d40, (undefined4)TextureStorage::system_fbo);
      update_mesh_instances(this);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_mesh_instance_remove_surface(GLES3::MeshInstance*, int) */void GLES3::MeshStorage::_mesh_instance_remove_surface(MeshStorage *this, MeshInstance *param_1, int param_2) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *pHVar1;
   undefined8 *puVar2;
   void *pvVar3;
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
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   code *pcVar28;
   undefined8 uVar29;
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 *puVar33;
   undefined8 *puVar34;
   uint *puVar35;
   ulong uVar36;
   int iVar37;
   ulong uVar38;
   long lVar39;
   uint *puVar40;
   ulong uVar41;
   uint uVar42;
   long lVar43;
   long in_FS_OFFSET;
   uint local_60;
   uint local_50;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(uint*)( param_1 + 0x10 ) <= (uint)param_2) {
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)(uint)param_2, ( ulong ) * (uint*)( param_1 + 0x10 ), "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar28 = (code*)invalidInstructionException();
      ( *pcVar28 )();
   }
   uVar32 = (ulong)(uint)param_2;
   puVar40 = (uint*)( *(long*)( param_1 + 0x18 ) + uVar32 * 0x40 );
   if (puVar40[0xe] == 0) {
      uVar31 = *puVar40;
      if (uVar31 == 0) goto LAB_0010ddf6;
      LAB_0010df03:lVar43 = Utilities::singleton;
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      local_44 = uVar31;
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar36 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
         uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
         local_50 = uVar30 ^ uVar30 >> 0x10;
         if (uVar30 == uVar30 >> 0x10) {
            local_50 = 1;
            uVar38 = uVar36;
         } else {
            uVar38 = local_50 * uVar36;
         }
         uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar41;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar38;
         lVar39 = SUB168(auVar4 * auVar16, 8);
         iVar37 = SUB164(auVar4 * auVar16, 8);
         uVar30 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar39 * 4 );
         if (uVar30 != 0) {
            uVar42 = 0;
            do {
               if (( local_50 == uVar30 ) && ( uVar31 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar39 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar35 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar43 + 0xf8 ) = *(long*)( lVar43 + 0xf8 ) - ( ulong ) * puVar35;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010e06e;
               }
               uVar42 = uVar42 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( iVar37 + 1 ) * uVar36;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar41;
               lVar39 = SUB168(auVar5 * auVar17, 8);
               uVar30 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar39 * 4 );
               iVar37 = SUB164(auVar5 * auVar17, 8);
            } while ( ( uVar30 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar30 * uVar36,auVar18._8_8_ = 0,auVar18._0_8_ = uVar41,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar37 ) - SUB164(auVar6 * auVar18, 8) ) * uVar36,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,uVar42 <= SUB164(auVar7 * auVar19, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010e06e:lVar43 = Utilities::singleton;
      local_44 = puVar40[1];
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar36 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar31 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar31 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
         local_60 = uVar31 ^ uVar31 >> 0x10;
         if (uVar31 == uVar31 >> 0x10) {
            local_60 = 1;
            uVar38 = uVar36;
         } else {
            uVar38 = local_60 * uVar36;
         }
         uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar41;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar38;
         lVar39 = SUB168(auVar8 * auVar20, 8);
         uVar31 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar39 * 4 );
         iVar37 = SUB164(auVar8 * auVar20, 8);
         if (uVar31 != 0) {
            uVar30 = 0;
            do {
               if (( local_60 == uVar31 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar39 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar35 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar43 + 0xf8 ) = *(long*)( lVar43 + 0xf8 ) - ( ulong ) * puVar35;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010e1de;
               }
               uVar30 = uVar30 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( iVar37 + 1 ) * uVar36;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar41;
               lVar39 = SUB168(auVar9 * auVar21, 8);
               uVar31 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar39 * 4 );
               iVar37 = SUB164(auVar9 * auVar21, 8);
            } while ( ( uVar31 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar31 * uVar36,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar37 ) - SUB164(auVar10 * auVar22, 8) ) * uVar36,auVar23._8_8_ = 0,auVar23._0_8_ = uVar41,uVar30 <= SUB164(auVar11 * auVar23, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010e1de:puVar40[0] = 0;
      puVar40[1] = 0;
      uVar30 = puVar40[4];
      lVar43 = Utilities::singleton;
      uVar31 = local_44;
   } else {
      lVar43 = 0;
      do {
         lVar39 = lVar43 + 1;
         ( *_glad_glDeleteVertexArrays )(1);
         pvVar3 = *(void**)( puVar40 + 0xc );
         *(undefined4*)( (long)pvVar3 + lVar43 * 0x140 + 4 ) = 0;
         lVar43 = lVar39;
      } while ( (uint)lVar39 < puVar40[0xe] );
      Memory::free_static(pvVar3, false);
      uVar31 = *puVar40;
      if (uVar31 != 0) goto LAB_0010df03;
      LAB_0010ddf6:uVar30 = puVar40[4];
      lVar43 = Utilities::singleton;
      uVar31 = local_44;
   }
   local_44 = uVar30;
   Utilities::singleton = lVar43;
   if (local_44 != 0) {
      if (( *(long*)( lVar43 + 0x70 ) != 0 ) && ( *(int*)( lVar43 + 0x94 ) != 0 )) {
         uVar36 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar43 + 0x90 ) * 8 );
         uVar31 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar31 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
         uVar30 = uVar31 ^ uVar31 >> 0x10;
         if (uVar31 == uVar31 >> 0x10) {
            uVar30 = 1;
            uVar38 = uVar36;
         } else {
            uVar38 = uVar30 * uVar36;
         }
         uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar43 + 0x90 ) * 4 ));
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar41;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar38;
         lVar39 = SUB168(auVar12 * auVar24, 8);
         iVar37 = SUB164(auVar12 * auVar24, 8);
         uVar31 = *(uint*)( *(long*)( lVar43 + 0x78 ) + lVar39 * 4 );
         if (uVar31 != 0) {
            uVar42 = 0;
            do {
               if (( uVar31 == uVar30 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( lVar43 + 0x70 ) + lVar39 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar35 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar43 + 0x68 ), &local_44);
                  *(long*)( lVar43 + 0xf8 ) = *(long*)( lVar43 + 0xf8 ) - ( ulong ) * puVar35;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar43 + 0x68 ), &local_44);
                  goto LAB_0010e35e;
               }
               uVar42 = uVar42 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( iVar37 + 1 ) * uVar36;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar41;
               lVar39 = SUB168(auVar13 * auVar25, 8);
               uVar31 = *(uint*)( *(long*)( lVar43 + 0x78 ) + lVar39 * 4 );
               iVar37 = SUB164(auVar13 * auVar25, 8);
            } while ( ( uVar31 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = uVar31 * uVar36,auVar26._8_8_ = 0,auVar26._0_8_ = uVar41,auVar15._8_8_ = 0,auVar15._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar43 + 0x90 ) * 4 ) + iVar37 ) - SUB164(auVar14 * auVar26, 8) ) * uVar36,auVar27._8_8_ = 0,auVar27._0_8_ = uVar41,uVar42 <= SUB164(auVar15 * auVar27, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010e35e:puVar40[4] = 0;
      uVar31 = local_44;
   }
   local_44 = uVar31;
   uVar31 = *(uint*)( param_1 + 0x10 );
   if ((uint)param_2 < uVar31) {
      uVar30 = uVar31 - 1;
      *(uint*)( param_1 + 0x10 ) = uVar30;
      if ((uint)param_2 < uVar30) {
         lVar43 = *(long*)( param_1 + 0x18 );
         uVar36 = ( ulong )(param_2 + 1);
         puVar33 = (undefined8*)( lVar43 + uVar32 * 0x40 );
         do {
            puVar34 = puVar33 + 8;
            uVar29 = ( puVar33 + uVar32 * -8 + uVar36 * 8 )[1];
            *puVar33 = puVar33[uVar32 * -8 + uVar36 * 8];
            puVar33[1] = uVar29;
            uVar29 = ( puVar33 + uVar32 * -8 + uVar36 * 8 + 2 )[1];
            puVar33[2] = puVar33[uVar32 * -8 + uVar36 * 8 + 2];
            puVar33[3] = uVar29;
            uVar29 = ( puVar33 + uVar32 * -8 + uVar36 * 8 + 4 )[1];
            puVar33[4] = puVar33[uVar32 * -8 + uVar36 * 8 + 4];
            puVar33[5] = uVar29;
            puVar2 = (undefined8*)( (long)puVar33 + uVar36 * 0x40 + uVar32 * -0x40 + 0x2c );
            uVar29 = puVar2[1];
            *(undefined8*)( (long)puVar33 + 0x2c ) = *puVar2;
            *(undefined8*)( (long)puVar33 + 0x34 ) = uVar29;
            puVar33 = puVar34;
         } while ( (undefined8*)( lVar43 + 0x40 + ( ( ( uVar31 - param_2 ) - 2 ) + uVar32 ) * 0x40 ) != puVar34 );
         goto LAB_0010de86;
      }
   } else {
      _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar32, (ulong)uVar31, "p_index", "count", "", false, false);
      uVar30 = *(uint*)( param_1 + 0x10 );
   }
   if (uVar30 == 0) {
      if (*(int*)( param_1 + 0x20 ) != 0) {
         *(undefined4*)( param_1 + 0x20 ) = 0;
      }
      param_1[0x41] = (MeshInstance)0x0;
      *(undefined8*)( param_1 + 0x38 ) = 0;
   }
   LAB_0010de86:param_1[0x40] = (MeshInstance)0x1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::_mesh_instance_clear(GLES3::MeshInstance*) */void GLES3::MeshStorage::_mesh_instance_clear(MeshStorage *this, MeshInstance *param_1) {
   int iVar1;
   iVar1 = *(int*)( param_1 + 0x10 );
   while (iVar1 != 0) {
      _mesh_instance_remove_surface(this, param_1, iVar1 + -1);
      iVar1 = *(int*)( param_1 + 0x10 );
   };
   param_1[0x40] = (MeshInstance)0x0;
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::skeleton_allocate_data(RID, int, bool) */void GLES3::MeshStorage::skeleton_allocate_data(MeshStorage *this, ulong param_2, int param_3, byte param_4) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   long *plVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   code *pcVar10;
   long lVar11;
   int iVar12;
   uint uVar13;
   uint *puVar14;
   char *pcVar15;
   uint uVar16;
   ulong uVar17;
   long lVar18;
   undefined8 uVar19;
   byte *pbVar20;
   ulong uVar21;
   uint uVar22;
   uint uVar23;
   long in_FS_OFFSET;
   undefined1 auVar24[16];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2cc ) )) {
      pbVar20 = (byte*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 ) );
      if (*(int*)( pbVar20 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < 0) {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010eb0e;
            uVar19 = 0x8c8;
            pcVar15 = "Condition \"p_bones < 0\" is true.";
            goto LAB_0010ea76;
         }
         if (( *(int*)( pbVar20 + 4 ) == param_3 ) && ( *pbVar20 == param_4 )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_0010eb0e;
         }
         uVar13 = *(uint*)( pbVar20 + 0x48 );
         *(int*)( pbVar20 + 4 ) = param_3;
         *pbVar20 = param_4;
         iVar12 = ( 3 - (uint)param_4 ) * param_3;
         iVar12 = ( ( iVar12 >> 8 ) + 1 ) - ( uint )((char)iVar12 == '\0');
         *(int*)( pbVar20 + 8 ) = iVar12;
         lVar11 = Utilities::singleton;
         if (uVar13 == 0) {
            if (param_3 != 0) {
               uVar13 = *(uint*)( pbVar20 + 0x10 );
               uVar16 = iVar12 * 0x400;
               if (uVar13 <= uVar16) goto LAB_0010e7dc;
               LAB_0010e881:*(uint*)( pbVar20 + 0x10 ) = uVar16;
               LAB_0010e885:( *_glad_glGenTextures )(1, pbVar20 + 0x48);
               ( *_glad_glBindTexture )(0xde1, *(undefined4*)( pbVar20 + 0x48 ));
               ( *_glad_glTexImage2D )(0xde1, 0, 0x8814, 0x100, *(undefined4*)( pbVar20 + 8 ), 0, 0x1908, 0x1406, 0);
               ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2600);
               ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2600);
               ( *_glad_glTexParameterf )(_LC150, 0xde1, 0x2802);
               ( *_glad_glTexParameterf )(_LC150, 0xde1, 0x2803);
               ( *_glad_glBindTexture )(0xde1, 0);
               lVar11 = Utilities::singleton;
               local_58 = "Skeleton transforms texture";
               local_60 = 0;
               local_50 = 0x1b;
               String::parse_latin1((StrRange*)&local_60);
               iVar12 = *(int*)( pbVar20 + 0x10 );
               local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( pbVar20 + 0x48 ));
               plVar1 = (long*)( lVar11 + 0x108 );
               *plVar1 = *plVar1 + ( ulong )(uint)(iVar12 * 4);
               puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar11 + 200 ), (uint*)&local_58);
               lVar11 = local_60;
               *puVar14 = iVar12 * 4;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar11 + -0x10 ), false);
                  }
               }
               memset(*(void**)( pbVar20 + 0x18 ), 0, ( ulong ) * (uint*)( pbVar20 + 0x10 ) << 2);
               if (pbVar20[0x20] == 0) {
                  uVar19 = *(undefined8*)( this + 0x308 );
                  pbVar20[0x20] = 1;
                  *(undefined8*)( pbVar20 + 0x28 ) = uVar19;
                  *(byte**)( this + 0x308 ) = pbVar20;
               }
            }
         } else {
            local_58 = (char*)CONCAT44(local_58._4_4_, uVar13);
            this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
            if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
               uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
               uVar16 = ( uVar13 >> 0x10 ^ uVar13 ) * -0x7a143595;
               uVar16 = ( uVar16 ^ uVar16 >> 0xd ) * -0x3d4d51cb;
               uVar23 = uVar16 ^ uVar16 >> 0x10;
               if (uVar16 == uVar16 >> 0x10) {
                  uVar23 = 1;
                  uVar17 = uVar2;
               } else {
                  uVar17 = uVar23 * uVar2;
               }
               uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar21;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = uVar17;
               lVar18 = SUB168(auVar24 * auVar6, 8);
               iVar12 = SUB164(auVar24 * auVar6, 8);
               uVar16 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar18 * 4 );
               if (uVar16 != 0) {
                  uVar22 = 0;
                  do {
                     if (( uVar16 == uVar23 ) && ( uVar13 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar18 * 8 ) + 0x10 ) )) {
                        ( *_glad_glDeleteTextures )(1, &local_58);
                        puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, (uint*)&local_58);
                        *(long*)( lVar11 + 0x108 ) = *(long*)( lVar11 + 0x108 ) - ( ulong ) * puVar14;
                        HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, (uint*)&local_58);
                        goto LAB_0010e7b1;
                     }
                     uVar22 = uVar22 + 1;
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = ( iVar12 + 1 ) * uVar2;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = uVar21;
                     lVar18 = SUB168(auVar3 * auVar7, 8);
                     uVar16 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar18 * 4 );
                     iVar12 = SUB164(auVar3 * auVar7, 8);
                  } while ( ( uVar16 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar16 * uVar2,auVar8._8_8_ = 0,auVar8._0_8_ = uVar21,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar12 ) - SUB164(auVar4 * auVar8, 8) ) * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar21,uVar22 <= SUB164(auVar5 * auVar9, 8) );
               }
            }
            _err_print_error("texture_free_data", "drivers/gles3/storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
            LAB_0010e7b1:pbVar20[0x48] = 0;
            for (int i = 0; i < 3; i++) {
               pbVar20[( i + 73 )] = 0;
            }
            if (*(int*)( pbVar20 + 0x10 ) != 0) {
               for (int i = 0; i < 4; i++) {
                  pbVar20[( i + 16 )] = 0;
               }
            }
            if (*(int*)( pbVar20 + 4 ) != 0) {
               uVar13 = *(uint*)( pbVar20 + 0x10 );
               uVar16 = *(int*)( pbVar20 + 8 ) << 10;
               LAB_0010e7dc:if (uVar13 < uVar16) {
                  if (*(uint*)( pbVar20 + 0x14 ) < uVar16) {
                     uVar13 = uVar16 - 1 | uVar16 - 1 >> 1;
                     uVar13 = uVar13 | uVar13 >> 2;
                     uVar13 = uVar13 | uVar13 >> 4;
                     uVar13 = uVar13 >> 8 | uVar13;
                     uVar13 = ( uVar13 >> 0x10 | uVar13 ) + 1;
                     *(uint*)( pbVar20 + 0x14 ) = uVar13;
                     auVar24 = Memory::realloc_static(*(void**)( pbVar20 + 0x18 ), (ulong)uVar13 * 4, false);
                     *(long*)( pbVar20 + 0x18 ) = auVar24._0_8_;
                     if (auVar24._0_8_ == 0) {
                        _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, auVar24._8_8_);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar10 = (code*)invalidInstructionException();
                        ( *pcVar10 )();
                     }
                  }
                  goto LAB_0010e881;
               }
               goto LAB_0010e885;
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Dependency::changed_notify(pbVar20 + 0x58, 8);
            return;
         }
         goto LAB_0010eb0e;
      }
      if (*(int*)( pbVar20 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar19 = 0x8c7;
      pcVar15 = "Parameter \"skeleton\" is null.";
      LAB_0010ea76:_err_print_error("skeleton_allocate_data", "drivers/gles3/storage/mesh_storage.cpp", uVar19, pcVar15, 0, 0);
      return;
   }
   LAB_0010eb0e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_mesh_surface_clear(GLES3::Mesh*, int) */void GLES3::MeshStorage::_mesh_surface_clear(MeshStorage *this, Mesh *param_1, int param_2) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *pHVar1;
   long *plVar2;
   long lVar3;
   ulong uVar4;
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
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   uint uVar61;
   uint *puVar62;
   ulong uVar63;
   ulong uVar64;
   int iVar65;
   long lVar66;
   long lVar67;
   uint uVar68;
   long lVar69;
   void *pvVar70;
   uint uVar71;
   uint uVar72;
   long lVar73;
   long in_FS_OFFSET;
   uint local_68;
   uint local_44;
   long local_40;
   lVar73 = Utilities::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( *(long*)( param_1 + 8 ) + (long)param_2 * 8 );
   uVar61 = *(uint*)( lVar3 + 0x10 );
   if (uVar61 != 0) {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      local_44 = uVar61;
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar68 = ( uVar61 >> 0x10 ^ uVar61 ) * -0x7a143595;
         uVar68 = ( uVar68 ^ uVar68 >> 0xd ) * -0x3d4d51cb;
         uVar71 = uVar68 ^ uVar68 >> 0x10;
         if (uVar68 == uVar68 >> 0x10) {
            uVar71 = 1;
            uVar63 = uVar4;
         } else {
            uVar63 = uVar71 * uVar4;
         }
         uVar64 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar64;
         auVar45._8_8_ = 0;
         auVar45._0_8_ = uVar63;
         lVar69 = SUB168(auVar17 * auVar45, 8);
         uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
         iVar65 = SUB164(auVar17 * auVar45, 8);
         if (uVar68 != 0) {
            uVar72 = 0;
            do {
               if (( uVar71 == uVar68 ) && ( uVar61 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar69 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar73 + 0xf8 ) = *(long*)( lVar73 + 0xf8 ) - ( ulong ) * puVar62;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010f355;
               }
               uVar72 = uVar72 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( iVar65 + 1 ) * uVar4;
               auVar46._8_8_ = 0;
               auVar46._0_8_ = uVar64;
               lVar69 = SUB168(auVar18 * auVar46, 8);
               uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
               iVar65 = SUB164(auVar18 * auVar46, 8);
            } while ( ( uVar68 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = uVar68 * uVar4,auVar47._8_8_ = 0,auVar47._0_8_ = uVar64,auVar20._8_8_ = 0,auVar20._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar19 * auVar47, 8) ) * uVar4,auVar48._8_8_ = 0,auVar48._0_8_ = uVar64,uVar72 <= SUB164(auVar20 * auVar48, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010f355:*(undefined4*)( lVar3 + 0x10 ) = 0;
   }
   if (*(int*)( lVar3 + 0x78 ) != 0) {
      lVar73 = 0;
      do {
         lVar69 = lVar73 + 1;
         ( *_glad_glDeleteVertexArrays )(1);
         *(undefined4*)( *(long*)( lVar3 + 0x70 ) + 4 + lVar73 * 0x140 ) = 0;
         lVar73 = lVar69;
      } while ( (uint)lVar69 < *(uint*)( lVar3 + 0x78 ) );
   }
   lVar73 = Utilities::singleton;
   uVar61 = *(uint*)( lVar3 + 0x14 );
   if (uVar61 != 0) {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      local_44 = uVar61;
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar63 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar68 = ( uVar61 >> 0x10 ^ uVar61 ) * -0x7a143595;
         uVar68 = ( uVar68 ^ uVar68 >> 0xd ) * -0x3d4d51cb;
         uVar71 = uVar68 ^ uVar68 >> 0x10;
         if (uVar68 == uVar68 >> 0x10) {
            uVar71 = 1;
            uVar64 = uVar4;
         } else {
            uVar64 = uVar71 * uVar4;
         }
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar63;
         auVar57._8_8_ = 0;
         auVar57._0_8_ = uVar64;
         lVar69 = SUB168(auVar29 * auVar57, 8);
         uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
         iVar65 = SUB164(auVar29 * auVar57, 8);
         if (uVar68 != 0) {
            uVar72 = 0;
            do {
               if (( uVar71 == uVar68 ) && ( uVar61 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar69 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar73 + 0xf8 ) = *(long*)( lVar73 + 0xf8 ) - ( ulong ) * puVar62;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010f775;
               }
               uVar72 = uVar72 + 1;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = ( iVar65 + 1 ) * uVar4;
               auVar58._8_8_ = 0;
               auVar58._0_8_ = uVar63;
               lVar69 = SUB168(auVar30 * auVar58, 8);
               uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
               iVar65 = SUB164(auVar30 * auVar58, 8);
            } while ( ( uVar68 != 0 ) && ( auVar31._8_8_ = 0 ),auVar31._0_8_ = uVar68 * uVar4,auVar59._8_8_ = 0,auVar59._0_8_ = uVar63,auVar32._8_8_ = 0,auVar32._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar31 * auVar59, 8) ) * uVar4,auVar60._8_8_ = 0,auVar60._0_8_ = uVar63,uVar72 <= SUB164(auVar32 * auVar60, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010f775:*(undefined4*)( lVar3 + 0x14 ) = 0;
   }
   lVar73 = Utilities::singleton;
   uVar61 = *(uint*)( lVar3 + 0x18 );
   if (uVar61 != 0) {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      local_44 = uVar61;
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar63 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar68 = ( uVar61 >> 0x10 ^ uVar61 ) * -0x7a143595;
         uVar68 = ( uVar68 ^ uVar68 >> 0xd ) * -0x3d4d51cb;
         uVar71 = uVar68 ^ uVar68 >> 0x10;
         if (uVar68 == uVar68 >> 0x10) {
            uVar71 = 1;
            uVar64 = uVar4;
         } else {
            uVar64 = uVar71 * uVar4;
         }
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar63;
         auVar53._8_8_ = 0;
         auVar53._0_8_ = uVar64;
         lVar69 = SUB168(auVar25 * auVar53, 8);
         uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
         iVar65 = SUB164(auVar25 * auVar53, 8);
         if (uVar68 != 0) {
            uVar72 = 0;
            do {
               if (( uVar71 == uVar68 ) && ( uVar61 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar69 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar73 + 0xf8 ) = *(long*)( lVar73 + 0xf8 ) - ( ulong ) * puVar62;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010f615;
               }
               uVar72 = uVar72 + 1;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = ( iVar65 + 1 ) * uVar4;
               auVar54._8_8_ = 0;
               auVar54._0_8_ = uVar63;
               lVar69 = SUB168(auVar26 * auVar54, 8);
               uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
               iVar65 = SUB164(auVar26 * auVar54, 8);
            } while ( ( uVar68 != 0 ) && ( auVar27._8_8_ = 0 ),auVar27._0_8_ = uVar68 * uVar4,auVar55._8_8_ = 0,auVar55._0_8_ = uVar63,auVar28._8_8_ = 0,auVar28._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar27 * auVar55, 8) ) * uVar4,auVar56._8_8_ = 0,auVar56._0_8_ = uVar63,uVar72 <= SUB164(auVar28 * auVar56, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010f615:*(undefined4*)( lVar3 + 0x18 ) = 0;
   }
   lVar73 = Utilities::singleton;
   uVar61 = *(uint*)( lVar3 + 0x7c );
   if (uVar61 != 0) {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      local_44 = uVar61;
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar63 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar68 = ( uVar61 >> 0x10 ^ uVar61 ) * -0x7a143595;
         uVar68 = ( uVar68 ^ uVar68 >> 0xd ) * -0x3d4d51cb;
         uVar71 = uVar68 ^ uVar68 >> 0x10;
         if (uVar68 == uVar68 >> 0x10) {
            uVar71 = 1;
            uVar64 = uVar4;
         } else {
            uVar64 = uVar71 * uVar4;
         }
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar63;
         auVar49._8_8_ = 0;
         auVar49._0_8_ = uVar64;
         lVar69 = SUB168(auVar21 * auVar49, 8);
         uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
         iVar65 = SUB164(auVar21 * auVar49, 8);
         if (uVar68 != 0) {
            uVar72 = 0;
            do {
               if (( uVar71 == uVar68 ) && ( uVar61 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar69 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar73 + 0xf8 ) = *(long*)( lVar73 + 0xf8 ) - ( ulong ) * puVar62;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010f4b5;
               }
               uVar72 = uVar72 + 1;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = ( iVar65 + 1 ) * uVar4;
               auVar50._8_8_ = 0;
               auVar50._0_8_ = uVar63;
               lVar69 = SUB168(auVar22 * auVar50, 8);
               uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
               iVar65 = SUB164(auVar22 * auVar50, 8);
            } while ( ( uVar68 != 0 ) && ( auVar23._8_8_ = 0 ),auVar23._0_8_ = uVar68 * uVar4,auVar51._8_8_ = 0,auVar51._0_8_ = uVar63,auVar24._8_8_ = 0,auVar24._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar23 * auVar51, 8) ) * uVar4,auVar52._8_8_ = 0,auVar52._0_8_ = uVar63,uVar72 <= SUB164(auVar24 * auVar52, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010f4b5:*(undefined4*)( lVar3 + 0x7c ) = 0;
   }
   if (*(void**)( lVar3 + 0x70 ) != (void*)0x0) {
      Memory::free_static(*(void**)( lVar3 + 0x70 ), false);
   }
   lVar73 = Utilities::singleton;
   if (*(uint**)( lVar3 + 0x88 ) != (uint*)0x0) {
      local_44 = **(uint**)( lVar3 + 0x88 );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar61 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar61 = ( uVar61 ^ uVar61 >> 0xd ) * -0x3d4d51cb;
         uVar68 = uVar61 ^ uVar61 >> 0x10;
         if (uVar61 == uVar61 >> 0x10) {
            uVar68 = 1;
            uVar63 = uVar4;
         } else {
            uVar63 = uVar68 * uVar4;
         }
         uVar64 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar64;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar63;
         lVar69 = SUB168(auVar5 * auVar33, 8);
         uVar61 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
         iVar65 = SUB164(auVar5 * auVar33, 8);
         if (uVar61 != 0) {
            uVar71 = 0;
            do {
               if (( uVar68 == uVar61 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar69 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar73 + 0xf8 ) = *(long*)( lVar73 + 0xf8 ) - ( ulong ) * puVar62;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010ed34;
               }
               uVar71 = uVar71 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( iVar65 + 1 ) * uVar4;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar64;
               lVar69 = SUB168(auVar6 * auVar34, 8);
               uVar61 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar69 * 4 );
               iVar65 = SUB164(auVar6 * auVar34, 8);
            } while ( ( uVar61 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar61 * uVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar64,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar7 * auVar35, 8) ) * uVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar64,uVar71 <= SUB164(auVar8 * auVar36, 8) );
         }
      }
      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010ed34:Memory::free_static(*(void**)( lVar3 + 0x88 ), false);
   }
   if (*(int*)( lVar3 + 0x98 ) != 0) {
      pvVar70 = *(void**)( lVar3 + 0x90 );
      lVar73 = 0;
      do {
         lVar69 = Utilities::singleton;
         uVar61 = *(uint*)( (long)pvVar70 + lVar73 * 0x10 + 0xc );
         if (uVar61 != 0) {
            pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
            local_44 = uVar61;
            if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
               uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
               uVar68 = ( uVar61 >> 0x10 ^ uVar61 ) * -0x7a143595;
               uVar68 = ( uVar68 ^ uVar68 >> 0xd ) * -0x3d4d51cb;
               local_68 = uVar68 ^ uVar68 >> 0x10;
               if (uVar68 == uVar68 >> 0x10) {
                  local_68 = 1;
                  uVar63 = uVar4;
               } else {
                  uVar63 = local_68 * uVar4;
               }
               uVar64 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar64;
               auVar37._8_8_ = 0;
               auVar37._0_8_ = uVar63;
               lVar66 = SUB168(auVar9 * auVar37, 8);
               uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar66 * 4 );
               iVar65 = SUB164(auVar9 * auVar37, 8);
               if (uVar68 != 0) {
                  uVar71 = 0;
                  do {
                     if (( local_68 == uVar68 ) && ( uVar61 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar66 * 8 ) + 0x10 ) )) {
                        ( *_glad_glDeleteBuffers )(1, &local_44);
                        puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                        *(long*)( lVar69 + 0xf8 ) = *(long*)( lVar69 + 0xf8 ) - ( ulong ) * puVar62;
                        HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                        goto LAB_0010eef0;
                     }
                     uVar71 = uVar71 + 1;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( iVar65 + 1 ) * uVar4;
                     auVar38._8_8_ = 0;
                     auVar38._0_8_ = uVar64;
                     lVar66 = SUB168(auVar10 * auVar38, 8);
                     uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar66 * 4 );
                     iVar65 = SUB164(auVar10 * auVar38, 8);
                  } while ( ( uVar68 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar68 * uVar4,auVar39._8_8_ = 0,auVar39._0_8_ = uVar64,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar11 * auVar39, 8) ) * uVar4,auVar40._8_8_ = 0,auVar40._0_8_ = uVar64,uVar71 <= SUB164(auVar12 * auVar40, 8) );
               }
            }
            _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
            LAB_0010eef0:pvVar70 = *(void**)( lVar3 + 0x90 );
            *(undefined4*)( (long)pvVar70 + lVar73 * 0x10 + 0xc ) = 0;
         }
         lVar73 = lVar73 + 1;
      } while ( (uint)lVar73 < *(uint*)( lVar3 + 0x98 ) );
      Memory::free_static(pvVar70, true);
   }
   if (*(int*)param_1 != 0) {
      pvVar70 = *(void**)( lVar3 + 0x108 );
      lVar73 = 0;
      do {
         lVar66 = Utilities::singleton;
         lVar69 = lVar73 * 8;
         puVar62 = (uint*)( (long)pvVar70 + lVar69 );
         uVar61 = *puVar62;
         if (uVar61 != 0) {
            pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
            local_44 = uVar61;
            if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
               uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
               uVar68 = ( uVar61 >> 0x10 ^ uVar61 ) * -0x7a143595;
               uVar68 = ( uVar68 ^ uVar68 >> 0xd ) * -0x3d4d51cb;
               local_68 = uVar68 ^ uVar68 >> 0x10;
               if (uVar68 == uVar68 >> 0x10) {
                  local_68 = 1;
                  uVar63 = uVar4;
               } else {
                  uVar63 = local_68 * uVar4;
               }
               uVar64 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar64;
               auVar41._8_8_ = 0;
               auVar41._0_8_ = uVar63;
               lVar67 = SUB168(auVar13 * auVar41, 8);
               uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar67 * 4 );
               iVar65 = SUB164(auVar13 * auVar41, 8);
               if (uVar68 != 0) {
                  uVar71 = 0;
                  do {
                     if (( local_68 == uVar68 ) && ( uVar61 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar67 * 8 ) + 0x10 ) )) {
                        ( *_glad_glDeleteBuffers )(1, &local_44);
                        puVar62 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                        *(long*)( lVar66 + 0xf8 ) = *(long*)( lVar66 + 0xf8 ) - ( ulong ) * puVar62;
                        HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                        goto LAB_0010f0f8;
                     }
                     uVar71 = uVar71 + 1;
                     auVar14._8_8_ = 0;
                     auVar14._0_8_ = ( iVar65 + 1 ) * uVar4;
                     auVar42._8_8_ = 0;
                     auVar42._0_8_ = uVar64;
                     lVar67 = SUB168(auVar14 * auVar42, 8);
                     uVar68 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar67 * 4 );
                     iVar65 = SUB164(auVar14 * auVar42, 8);
                  } while ( ( uVar68 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = uVar68 * uVar4,auVar43._8_8_ = 0,auVar43._0_8_ = uVar64,auVar16._8_8_ = 0,auVar16._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar65 ) - SUB164(auVar15 * auVar43, 8) ) * uVar4,auVar44._8_8_ = 0,auVar44._0_8_ = uVar64,uVar71 <= SUB164(auVar16 * auVar44, 8) );
               }
            }
            _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
            LAB_0010f0f8:pvVar70 = *(void**)( lVar3 + 0x108 );
            puVar62 = (uint*)( (long)pvVar70 + lVar69 );
            *puVar62 = 0;
         }
         if (puVar62[1] != 0) {
            ( *_glad_glDeleteVertexArrays )(1, puVar62 + 1);
            pvVar70 = *(void**)( lVar3 + 0x108 );
            *(undefined4*)( (long)pvVar70 + lVar69 + 4 ) = 0;
         }
         lVar73 = lVar73 + 1;
      } while ( (uint)lVar73 < *(uint*)param_1 );
      Memory::free_static(pvVar70, true);
   }
   pvVar70 = *(void**)( *(long*)( param_1 + 8 ) + (long)param_2 * 8 );
   if (*(long*)( (long)pvVar70 + 0xc0 ) != 0) {
      LOCK();
      plVar2 = (long*)( *(long*)( (long)pvVar70 + 0xc0 ) + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         lVar3 = *(long*)( (long)pvVar70 + 0xc0 );
         *(undefined8*)( (long)pvVar70 + 0xc0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   Memory::free_static(pvVar70, false);
   return;
}/* GLES3::MeshStorage::mesh_clear(RID) */void GLES3::MeshStorage::mesh_clear(MeshStorage *this, ulong param_2) {
   long *plVar1;
   Mesh *pMVar2;
   int iVar3;
   long lVar4;
   undefined8 *puVar5;
   MeshInstance *pMVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   uint uVar10;
   long lVar11;
   long in_FS_OFFSET;
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      pMVar2 = (Mesh*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      if (*(int*)( pMVar2 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (*(undefined8**)( pMVar2 + 0x60 ) != (undefined8*)0x0) {
            puVar5 = (undefined8*)**(undefined8**)( pMVar2 + 0x60 );
            while (puVar5 != (undefined8*)0x0) {
               pMVar6 = (MeshInstance*)*puVar5;
               iVar3 = *(int*)( pMVar6 + 0x10 );
               while (iVar3 != 0) {
                  _mesh_instance_remove_surface(this, pMVar6, iVar3 + -1);
                  iVar3 = *(int*)( pMVar6 + 0x10 );
               };
               puVar5 = (undefined8*)puVar5[1];
               pMVar6[0x40] = (MeshInstance)0x0;
            };
         }
         uVar9 = 0;
         if (*(int*)( pMVar2 + 0x10 ) != 0) {
            do {
               uVar10 = uVar9 + 1;
               _mesh_surface_clear(this, pMVar2, uVar9);
               uVar9 = uVar10;
            } while ( uVar10 < *(uint*)( pMVar2 + 0x10 ) );
         }
         if (*(void**)( pMVar2 + 8 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pMVar2 + 8 ), false);
         }
         lVar7 = *(long*)( pMVar2 + 0x58 );
         *(undefined8*)( pMVar2 + 8 ) = 0;
         *(undefined4*)( pMVar2 + 0x10 ) = 0;
         if (( lVar7 != 0 ) && ( *(long*)( lVar7 + -8 ) != 0 )) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar7 = *(long*)( pMVar2 + 0x58 );
               *(undefined8*)( pMVar2 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            } else {
               *(undefined8*)( pMVar2 + 0x58 ) = 0;
            }
         }
         pMVar2[0x14] = (Mesh)0x0;
         *(undefined8*)( pMVar2 + 0x28 ) = 0;
         *(undefined8*)( pMVar2 + 0x18 ) = 0;
         *(undefined8*)( pMVar2 + 0x20 ) = 0;
         Dependency::changed_notify(pMVar2 + 0xa0, 2);
         iVar3 = *(int*)( pMVar2 + 0x94 );
         if (iVar3 != 0) {
            lVar7 = *(long*)( pMVar2 + 0x70 );
            lVar11 = 0;
            while (true) {
               lVar8 = *(long*)( lVar7 + lVar11 * 8 );
               *(undefined8*)( lVar8 + 0x68 ) = 0;
               Dependency::changed_notify(lVar8 + 0xa0, 2);
               if (iVar3 <= (int)lVar11 + 1) break;
               lVar11 = lVar11 + 1;
            };
         }
         if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_0010fb49;
      }
      if (*(int*)( pMVar2 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }
   }
   if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("mesh_clear", "drivers/gles3/storage/mesh_storage.cpp", 0x340, "Parameter \"mesh\" is null.", 0, 0);
      return;
   }
   LAB_0010fb49:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::mesh_surface_remove(RID, int) */void GLES3::MeshStorage::mesh_surface_remove(MeshStorage *this, ulong param_2, uint param_3) {
   Mesh *pMVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   long lVar5;
   long lVar6;
   undefined8 uVar7;
   long *plVar8;
   uint uVar9;
   long lVar10;
   ulong uVar11;
   long *plVar12;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      pMVar1 = (Mesh*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      if (*(int*)( pMVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < *(uint*)( pMVar1 + 0x10 )) {
            if (*(undefined8**)( pMVar1 + 0x60 ) != (undefined8*)0x0) {
               for (puVar4 = (undefined8*)**(undefined8**)( pMVar1 + 0x60 ); puVar4 != (undefined8*)0x0; puVar4 = (undefined8*)puVar4[1]) {
                  _mesh_instance_remove_surface(this, (MeshInstance*)*puVar4, param_3);
               }
            }
            _mesh_surface_clear(this, pMVar1, param_3);
            uVar9 = *(int*)( pMVar1 + 0x10 ) - 1;
            if (param_3 < uVar9) {
               lVar5 = (long)(int)param_3 * 8 + 8;
               memmove((void*)( *(long*)( pMVar1 + 8 ) + -8 + lVar5 ), (void*)( *(long*)( pMVar1 + 8 ) + lVar5 ), ( ulong )(( *(int*)( pMVar1 + 0x10 ) - param_3 ) - 1) << 3);
               uVar9 = *(int*)( pMVar1 + 0x10 ) - 1;
            }
            uVar7 = Memory::realloc_static(*(void**)( pMVar1 + 8 ), (ulong)uVar9 << 3, false);
            *(undefined8*)( pMVar1 + 8 ) = uVar7;
            uVar11 = ( ulong )(*(int*)( pMVar1 + 0x10 ) - 1U);
            lVar5 = *(long*)( pMVar1 + 0x58 );
            *(uint*)( pMVar1 + 0x10 ) = *(int*)( pMVar1 + 0x10 ) - 1U;
            if (( lVar5 == 0 ) || ( *(long*)( lVar5 + -8 ) == 0 )) {
               LAB_0010fc5f:uVar9 = (uint)uVar11;
               *(undefined8*)( pMVar1 + 0x48 ) = 0;
               if (pMVar1[0x14] == (Mesh)0x0) goto LAB_0010fc71;
               LAB_0010fd18:pMVar1[0x14] = (Mesh)0x0;
               uVar9 = (uint)uVar11;
               if (uVar9 != 0) {
                  plVar12 = *(long**)( pMVar1 + 8 );
                  plVar8 = plVar12;
                  do {
                     if (( *(byte*)( *plVar8 + 9 ) & 4 ) != 0) {
                        pMVar1[0x14] = (Mesh)0x1;
                        break;
                     }
                     plVar8 = plVar8 + 1;
                  } while ( plVar12 + uVar11 != plVar8 );
                  goto LAB_0010fdb3;
               }
               LAB_0010fc79:*(undefined8*)( pMVar1 + 0x28 ) = 0;
               *(undefined8*)( pMVar1 + 0x18 ) = 0;
               *(undefined8*)( pMVar1 + 0x20 ) = 0;
            } else {
               LOCK();
               plVar12 = (long*)( lVar5 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 != 0) {
                  *(undefined8*)( pMVar1 + 0x58 ) = 0;
                  uVar11 = ( ulong ) * (uint*)( pMVar1 + 0x10 );
                  goto LAB_0010fc5f;
               }
               lVar5 = *(long*)( pMVar1 + 0x58 );
               *(undefined8*)( pMVar1 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar5 + -0x10 ), false);
               *(undefined8*)( pMVar1 + 0x48 ) = 0;
               uVar9 = *(uint*)( pMVar1 + 0x10 );
               uVar11 = (ulong)uVar9;
               if (pMVar1[0x14] != (Mesh)0x0) goto LAB_0010fd18;
               LAB_0010fc71:if (uVar9 == 0) goto LAB_0010fc79;
               plVar12 = *(long**)( pMVar1 + 8 );
               LAB_0010fdb3:lVar5 = *plVar12;
               uVar7 = *(undefined8*)( lVar5 + 0xa4 );
               *(undefined8*)( pMVar1 + 0x18 ) = *(undefined8*)( lVar5 + 0x9c );
               *(undefined8*)( pMVar1 + 0x20 ) = uVar7;
               *(undefined8*)( pMVar1 + 0x28 ) = *(undefined8*)( lVar5 + 0xac );
               if (1 < uVar9) {
                  uVar9 = 1;
                  do {
                     uVar9 = uVar9 + 1;
                     AABB::merge_with((AABB*)( pMVar1 + 0x18 ));
                  } while ( uVar9 < *(uint*)( pMVar1 + 0x10 ) );
               }
            }
            Dependency::changed_notify(pMVar1 + 0xa0, 2);
            iVar2 = *(int*)( pMVar1 + 0x94 );
            if (iVar2 != 0) {
               lVar5 = *(long*)( pMVar1 + 0x70 );
               lVar10 = 0;
               while (true) {
                  lVar6 = *(long*)( lVar5 + lVar10 * 8 );
                  *(undefined8*)( lVar6 + 0x68 ) = 0;
                  Dependency::changed_notify(lVar6 + 0xa0, 2);
                  if (iVar2 <= (int)lVar10 + 1) break;
                  lVar10 = lVar10 + 1;
               };
            }
         } else {
            _err_print_index_error("mesh_surface_remove", "drivers/gles3/storage/mesh_storage.cpp", 0x413, (ulong)param_3, ( ulong ) * (uint*)( pMVar1 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
         }
         if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_0010ff25;
      }
      if (*(int*)( pMVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("mesh_surface_remove", "drivers/gles3/storage/mesh_storage.cpp", 0x412, "Parameter \"mesh\" is null.", 0, 0);
      return;
   }
   LAB_0010ff25:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_mesh_instance_add_surface(GLES3::MeshInstance*, GLES3::Mesh*, unsigned int)
    */void GLES3::MeshStorage::_mesh_instance_add_surface(MeshStorage *this, MeshInstance *param_1, Mesh *param_2, uint param_3) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char *pcVar4;
   undefined4 uVar5;
   int iVar6;
   undefined8 *puVar7;
   uint *puVar8;
   void *pvVar9;
   undefined4 in_register_0000000c;
   undefined8 uVar10;
   uint uVar11;
   ulong uVar12;
   undefined4 uVar13;
   uint uVar14;
   undefined8 uVar15;
   long lVar16;
   uint uVar17;
   long in_FS_OFFSET;
   undefined8 uVar18;
   undefined8 uVar19;
   undefined8 uVar20;
   uint local_b4;
   long local_b0;
   long local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined4 local_78;
   int iStack_74;
   int iStack_70;
   int iStack_6c;
   int local_68;
   undefined4 uStack_64;
   ulong uStack_60;
   undefined1 local_58[16];
   long local_40;
   uVar10 = CONCAT44(in_register_0000000c, param_3);
   uVar14 = *(uint*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar14 == 0) {
      lVar16 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)param_3 * 8 );
      LAB_0010ff97:if (( *(byte*)( lVar16 + 9 ) & 4 ) != 0) goto LAB_00110076;
   } else {
      uVar11 = *(uint*)( param_1 + 0x20 );
      uVar12 = (ulong)uVar11;
      uVar17 = uVar14;
      if (uVar14 < uVar11) {
         LAB_0011002c:*(uint*)( param_1 + 0x20 ) = uVar14;
         uVar12 = (ulong)uVar14;
      } else if (uVar11 < uVar14) {
         if (uVar14 <= *(uint*)( param_1 + 0x24 )) goto LAB_0011002c;
         uVar11 = uVar14 - 1 | uVar14 - 1 >> 1;
         uVar11 = uVar11 >> 2 | uVar11;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = ( uVar11 | uVar11 >> 0x10 ) + 1;
         *(uint*)( param_1 + 0x24 ) = uVar11;
         lVar16 = Memory::realloc_static(*(void**)( param_1 + 0x28 ), (ulong)uVar11 * 4, false);
         *(long*)( param_1 + 0x28 ) = lVar16;
         if (lVar16 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, uVar10);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         uVar17 = *(uint*)param_2;
         uVar12 = (ulong)uVar14;
         *(uint*)( param_1 + 0x20 ) = uVar14;
      }
      memset(*(void**)( param_1 + 0x28 ), 0, uVar12 << 2);
      lVar16 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)param_3 * 8 );
      if (uVar17 == 0) goto LAB_0010ff97;
      LAB_00110076:uStack_64 = 0;
      local_68 = 0;
      iStack_6c = 0;
      iStack_70 = 0;
      iStack_74 = 0;
      local_78 = 0;
      local_58 = (undefined1[16])0x0;
      local_88 = (undefined1[16])0x0;
      if (*(int*)( lVar16 + 0x20 ) != 0) {
         uStack_60 = *(ulong*)( lVar16 + 8 );
         if (( uStack_60 & 1 ) != 0) {
            iStack_74 = ( -(uint)((uStack_60 & 0x2000000) == 0) & 4 ) + 8;
            iStack_70 = 3 - ( uint )(( uStack_60 & 0x2000000 ) != 0);
         }
         iVar6 = iStack_74;
         if (( uStack_60 & 2 ) != 0) {
            iVar6 = iStack_74 + 8;
            iStack_6c = iStack_74;
         }
         iStack_74 = iVar6;
         iVar6 = iStack_74;
         if (( uStack_60 & 4 ) != 0) {
            iVar6 = iStack_74 + 8;
            local_68 = iStack_74;
         }
         iStack_74 = iVar6;
         uVar14 = iStack_74 * *(int*)( lVar16 + 0x1c );
         ( *_glad_glGenBuffers )(1, &local_78);
         ( *_glad_glBindBuffer )(0x8892, local_78);
         lVar16 = Utilities::singleton;
         uVar12 = (ulong)uVar14;
         local_98 = "MeshInstance vertex buffer";
         local_a0 = 0;
         local_90 = 0x1a;
         String::parse_latin1((StrRange*)&local_a0);
         local_98 = (char*)CONCAT44(local_98._4_4_, local_78);
         ( *_glad_glBufferData )(0x8892, uVar12, 0, 0x88e8);
         plVar1 = (long*)( lVar16 + 0xf8 );
         *plVar1 = *plVar1 + uVar12;
         puVar8 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar16 + 0x68 ), (uint*)&local_98);
         lVar16 = local_a0;
         *puVar8 = uVar14;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar16 + -0x10 ), false);
            }
         }
         if (*(int*)param_2 != 0) {
            lVar16 = 0;
            ( *_glad_glGenBuffers )(2, local_88);
            while (true) {
               ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( local_88 + lVar16 * 4 ));
               lVar3 = Utilities::singleton;
               local_98 = "]";
               local_a0 = 0;
               local_90 = 1;
               String::parse_latin1((StrRange*)&local_a0);
               itos((long)&local_b0);
               operator+((char *)&
               local_a8,(String*)"MeshInstance process buffer[";
               String::operator +((String*)&local_98, (String*)&local_a8);
               local_b4 = *(uint*)( local_88 + lVar16 * 4 );
               ( *_glad_glBufferData )(0x8892, uVar12, 0, 0x88e8);
               plVar1 = (long*)( lVar3 + 0xf8 );
               *plVar1 = *plVar1 + uVar12;
               puVar8 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), &local_b4);
               pcVar4 = local_98;
               *puVar8 = uVar14;
               if (local_98 != (undefined*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = (undefined*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
               lVar3 = local_a8;
               if (local_a8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               lVar3 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               lVar3 = local_a0;
               if (local_a0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a0 = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               if (lVar16 != 0) break;
               lVar16 = 1;
            };
         }
         ( *_glad_glBindBuffer )(0x8892, 0);
         uVar10 = CONCAT44(iStack_70, iStack_74);
         uVar18 = CONCAT44(local_68, iStack_6c);
         uVar15 = local_58._0_8_;
         uVar13 = local_58._8_4_;
         uVar19 = local_88._0_8_;
         uVar20 = local_88._8_8_;
         goto LAB_0010ffb3;
      }
   }
   uStack_60 = 0;
   uStack_64 = 0;
   local_68 = 0;
   iStack_6c = 0;
   iStack_70 = 0;
   iStack_74 = 0;
   local_78 = 0;
   local_58 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   uVar10 = 0;
   uVar18 = 0;
   uVar15 = 0;
   uVar13 = 0;
   uVar19 = 0;
   uVar20 = 0;
   LAB_0010ffb3:uVar12 = uStack_60;
   uVar5 = local_78;
   uVar14 = *(uint*)( param_1 + 0x10 );
   pvVar9 = *(void**)( param_1 + 0x18 );
   if (uVar14 == *(uint*)( param_1 + 0x14 )) {
      uVar14 = uVar14 * 2;
      if (uVar14 == 0) {
         uVar14 = 1;
      }
      *(uint*)( param_1 + 0x14 ) = uVar14;
      pvVar9 = (void*)Memory::realloc_static(pvVar9, (ulong)uVar14 << 6, false);
      *(void**)( param_1 + 0x18 ) = pvVar9;
      if (pvVar9 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      uVar14 = *(uint*)( param_1 + 0x10 );
   }
   puVar7 = (undefined8*)( (ulong)uVar14 * 0x40 + (long)pvVar9 );
   *(uint*)( param_1 + 0x10 ) = uVar14 + 1;
   *(undefined4*)( puVar7 + 2 ) = uVar5;
   puVar7[5] = uVar12;
   puVar7[6] = uVar15;
   *(undefined4*)( puVar7 + 7 ) = uVar13;
   *puVar7 = uVar19;
   puVar7[1] = uVar20;
   *(undefined8*)( (long)puVar7 + 0x14 ) = uVar10;
   *(undefined8*)( (long)puVar7 + 0x1c ) = uVar18;
   param_1[0x40] = (MeshInstance)0x1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_multimesh_allocate_data(RID, int, RenderingServer::MultimeshTransformFormat,
   bool, bool, bool) */void GLES3::MeshStorage::_multimesh_allocate_data(long param_1, ulong param_2, int param_3, int param_4, byte param_5, byte param_6) {
   long *plVar1;
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this;
   uint uVar2;
   long lVar3;
   ulong uVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   int iVar13;
   uint uVar14;
   uint *puVar15;
   int iVar16;
   ulong uVar17;
   long lVar18;
   long lVar19;
   ulong uVar20;
   uint uVar21;
   long in_FS_OFFSET;
   uint local_8c;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined4 uStack_48;
   undefined4 uStack_44;
   long local_40;
   lVar3 = Utilities::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x26c ) )) {
      lVar19 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( param_1 + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x268 ) ) * 8 );
      if (*(int*)( lVar19 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         if (( ( ( *(int*)( lVar19 + 8 ) == param_3 ) && ( *(int*)( lVar19 + 0xc ) == param_4 ) ) && ( *(byte*)( lVar19 + 0x10 ) == param_5 ) ) && ( *(byte*)( lVar19 + 0x11 ) == param_6 )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00110a2b;
         }
         uVar2 = *(uint*)( lVar19 + 0x74 );
         if (uVar2 != 0) {
            local_68 = (char*)CONCAT44(local_68._4_4_, uVar2);
            this(HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> * )(Utilities::singleton + 0x68);
            if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
               uVar4 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
               uVar14 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
               uVar14 = ( uVar14 ^ uVar14 >> 0xd ) * -0x3d4d51cb;
               local_8c = uVar14 ^ uVar14 >> 0x10;
               if (uVar14 == uVar14 >> 0x10) {
                  local_8c = 1;
                  uVar17 = uVar4;
               } else {
                  uVar17 = local_8c * uVar4;
               }
               uVar20 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
               auVar5._8_8_ = 0;
               auVar5._0_8_ = uVar20;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar17;
               lVar18 = SUB168(auVar5 * auVar9, 8);
               iVar16 = SUB164(auVar5 * auVar9, 8);
               uVar14 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar18 * 4 );
               if (uVar14 != 0) {
                  uVar21 = 0;
                  do {
                     if (( uVar14 == local_8c ) && ( uVar2 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar18 * 8 ) + 0x10 ) )) {
                        ( *_glad_glDeleteBuffers )(1, &local_68);
                        puVar15 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this, (uint*)&local_68);
                        *(long*)( lVar3 + 0xf8 ) = *(long*)( lVar3 + 0xf8 ) - ( ulong ) * puVar15;
                        HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this, (uint*)&local_68);
                        goto LAB_00110914;
                     }
                     uVar21 = uVar21 + 1;
                     auVar6._8_8_ = 0;
                     auVar6._0_8_ = ( iVar16 + 1 ) * uVar4;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = uVar20;
                     lVar18 = SUB168(auVar6 * auVar10, 8);
                     uVar14 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar18 * 4 );
                     iVar16 = SUB164(auVar6 * auVar10, 8);
                  } while ( ( uVar14 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar14 * uVar4,auVar11._8_8_ = 0,auVar11._0_8_ = uVar20,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar16 ) - SUB164(auVar7 * auVar11, 8) ) * uVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar20,uVar21 <= SUB164(auVar8 * auVar12, 8) );
               }
            }
            _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
            LAB_00110914:*(undefined4*)( lVar19 + 0x74 ) = 0;
         }
         if (*(void**)( lVar19 + 0x68 ) != (void*)0x0) {
            Memory::free_static(*(void**)( lVar19 + 0x68 ), true);
            *(undefined8*)( lVar19 + 0x68 ) = 0;
            *(undefined4*)( lVar19 + 0x70 ) = 0;
         }
         *(int*)( lVar19 + 8 ) = param_3;
         *(int*)( lVar19 + 0xc ) = param_4;
         *(byte*)( lVar19 + 0x10 ) = param_5;
         iVar16 = ( uint )(param_6 | param_5) * 2;
         *(byte*)( lVar19 + 0x11 ) = param_6;
         iVar13 = ( -(uint)(param_4 == 0) & 0xfffffffc ) + 0xc;
         *(undefined1*)( lVar19 + 0x49 ) = 0;
         *(int*)( lVar19 + 0x50 ) = iVar13;
         iVar13 = iVar13 + iVar16;
         *(int*)( lVar19 + 0x54 ) = iVar13;
         *(int*)( lVar19 + 0x4c ) = iVar16 + iVar13;
         if (*(long*)( lVar19 + 0x60 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar19 + 0x60 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( lVar19 + 0x60 );
               *(undefined8*)( lVar19 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }
            *(undefined8*)( lVar19 + 0x60 ) = 0;
            param_3 = *(int*)( lVar19 + 8 );
         }
         uStack_4c = 0;
         uStack_48 = 0;
         uStack_44 = 0;
         local_58 = 0;
         *(undefined8*)( lVar19 + 0x28 ) = 0;
         uStack_50 = 0;
         *(undefined1*)( lVar19 + 0x48 ) = 0;
         iVar16 = *(int*)( lVar19 + 0x14 );
         if (param_3 < *(int*)( lVar19 + 0x14 )) {
            iVar16 = param_3;
         }
         *(undefined8*)( lVar19 + 0x18 ) = 0;
         *(undefined8*)( lVar19 + 0x20 ) = 0;
         *(int*)( lVar19 + 0x14 ) = iVar16;
         if (param_3 != 0) {
            ( *_glad_glGenBuffers )(1, lVar19 + 0x74);
            ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( lVar19 + 0x74 ));
            lVar3 = Utilities::singleton;
            local_68 = "MultiMesh buffer";
            local_70 = 0;
            local_60 = 0x10;
            String::parse_latin1((StrRange*)&local_70);
            uVar2 = *(int*)( lVar19 + 8 ) * *(int*)( lVar19 + 0x4c ) * 4;
            local_68 = (char*)CONCAT44(local_68._4_4_, *(undefined4*)( lVar19 + 0x74 ));
            ( *_glad_glBufferData )(0x8892, (ulong)uVar2, 0, 0x88e4);
            plVar1 = (long*)( lVar3 + 0xf8 );
            *plVar1 = *plVar1 + (ulong)uVar2;
            puVar15 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_68);
            lVar3 = local_70;
            *puVar15 = uVar2;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  ( *_glad_glBindBuffer )(0x8892, 0);
                  goto LAB_001106f9;
               }
            }
            ( *_glad_glBindBuffer )(0x8892, 0);
         }
         LAB_001106f9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Dependency::changed_notify(lVar19 + 0xe0, 3);
            return;
         }
         goto LAB_00110a2b;
      }
      if (*(int*)( lVar19 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_multimesh_allocate_data", "drivers/gles3/storage/mesh_storage.cpp", 0x5f3, "Parameter \"multimesh\" is null.", 0, 0);
      return;
   }
   LAB_00110a2b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::mesh_instance_free(RID) */long GLES3::MeshStorage::mesh_instance_free(MeshStorage *this, ulong param_2) {
   int iVar1;
   int iVar2;
   void *pvVar3;
   long *plVar4;
   long lVar5;
   ulong uVar6;
   code *pcVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   undefined8 uVar11;
   uint uVar12;
   MeshInstance *pMVar13;
   long lStack_58;
   if (param_2 != 0) {
      uVar12 = (uint)param_2;
      if (uVar12 < *(uint*)( this + 500 )) {
         pMVar13 = (MeshInstance*)( *(long*)( *(long*)( this + 0x1e0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 0xa8 );
         iVar1 = *(int*)( pMVar13 + 0xa0 );
         if (iVar1 != (int)( param_2 >> 0x20 )) {
            lVar9 = mesh_instance_free();
            return lVar9;
         }
         while (*(int*)( pMVar13 + 0x10 ) != 0) {
            _mesh_instance_remove_surface(this, pMVar13, *(int*)( pMVar13 + 0x10 ) + -1);
         };
         lVar9 = *(long*)pMVar13;
         pvVar3 = *(void**)( pMVar13 + 0x30 );
         pMVar13[0x40] = (MeshInstance)0x0;
         plVar4 = *(long**)( lVar9 + 0x60 );
         if (( pvVar3 != (void*)0x0 ) && ( plVar4 != (long*)0x0 )) {
            if (plVar4 == *(long**)( (long)pvVar3 + 0x18 )) {
               lVar10 = *(long*)( (long)pvVar3 + 8 );
               if (pvVar3 == (void*)*plVar4) {
                  *plVar4 = lVar10;
               }
               lVar5 = *(long*)( (long)pvVar3 + 0x10 );
               if (pvVar3 == (void*)plVar4[1]) {
                  plVar4[1] = lVar5;
               }
               if (lVar5 != 0) {
                  *(long*)( lVar5 + 8 ) = lVar10;
                  lVar10 = *(long*)( (long)pvVar3 + 8 );
               }
               if (lVar10 != 0) {
                  *(long*)( lVar10 + 0x10 ) = lVar5;
               }
               Memory::free_static(pvVar3, false);
               *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
            } else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }
            if (*(int*)( (long)*(void**)( lVar9 + 0x60 ) + 0x10 ) == 0) {
               Memory::free_static(*(void**)( lVar9 + 0x60 ), false);
               *(undefined8*)( lVar9 + 0x60 ) = 0;
            }
         }
         *(undefined8*)( pMVar13 + 0x30 ) = 0;
         if (uVar12 < *(uint*)( this + 500 )) {
            uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 );
            lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 0xa8;
            pMVar13 = (MeshInstance*)( *(long*)( *(long*)( this + 0x1e0 ) + uVar6 * 8 ) + lVar9 );
            iVar2 = *(int*)( pMVar13 + 0xa0 );
            if (iVar2 < 0) {
               lStack_58 = 0;
               _err_print_error(&_LC111, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
            } else {
               if (iVar2 != iVar1) {
                  uVar11 = 0x171;
                  goto LAB_00110c1a;
               }
               MeshInstance::~MeshInstance(pMVar13);
               lVar10 = *(long*)( this + 0x1e8 );
               *(undefined4*)( *(long*)( *(long*)( this + 0x1e0 ) + uVar6 * 8 ) + 0xa0 + lVar9 ) = 0xffffffff;
               uVar8 = *(int*)( this + 0x1f8 ) - 1;
               *(uint*)( this + 0x1f8 ) = uVar8;
               lStack_58 = *(long*)( lVar10 + ( (ulong)uVar8 / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 );
               *(uint*)( lStack_58 + ( (ulong)uVar8 % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 4 ) = uVar12;
            }
            return lStack_58;
         }
         uVar11 = 0x161;
         LAB_00110c1a:lVar9 = _err_print_error(&_LC111, "./core/templates/rid_owner.h", uVar11, "Method/function failed.", 0, 0);
         return lVar9;
      }
   }
   /* WARNING: Does not return */
   pcVar7 = (code*)invalidInstructionException();
   ( *pcVar7 )();
}/* GLES3::MeshStorage::mesh_set_shadow_mesh(RID, RID) */void GLES3::MeshStorage::mesh_set_shadow_mesh(MeshStorage *this, ulong param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   uint *puVar3;
   uint *puVar4;
   undefined4 *puVar5;
   undefined4 *puVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   uint uVar33;
   ulong uVar34;
   uint *puVar35;
   int iVar36;
   uint uVar37;
   long lVar38;
   ulong uVar39;
   uint *puVar40;
   uint uVar41;
   ulong uVar42;
   ulong uVar43;
   uint *puVar44;
   uint uVar45;
   ulong uVar46;
   long in_FS_OFFSET;
   Mesh *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == param_2) {
      _err_print_error("mesh_set_shadow_mesh", "drivers/gles3/storage/mesh_storage.cpp", 0x32b, "Condition \"p_mesh == p_shadow_mesh\" is true.", "Cannot set a mesh as its own shadow mesh.", 0, 0);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
         lVar1 = *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
         if (*(int*)( lVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
            if (*(long*)( lVar1 + 0x68 ) != 0) {
               uVar34 = *(ulong*)( lVar1 + 0x68 );
               if ((uint)uVar34 < *(uint*)( this + 0x19c )) {
                  lVar2 = *(long*)( *(long*)( this + 0x188 ) + ( ( uVar34 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( uVar34 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8;
                  if (*(int*)( lVar2 + 0xd0 ) == (int)( uVar34 >> 0x20 )) {
                     lVar8 = *(long*)( lVar2 + 0x70 );
                     if (( lVar8 != 0 ) && ( *(int*)( lVar2 + 0x94 ) != 0 )) {
                        lVar9 = *(long*)( lVar2 + 0x88 );
                        uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar2 + 0x90 ) * 4 );
                        lVar10 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar2 + 0x90 ) * 8 );
                        uVar42 = CONCAT44(0, uVar33);
                        uVar34 = lVar1 * 0x3ffff - 1;
                        uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
                        uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
                        uVar34 = uVar34 >> 0x16 ^ uVar34;
                        uVar43 = uVar34 & 0xffffffff;
                        if ((int)uVar34 == 0) {
                           uVar43 = 1;
                        }
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = uVar43 * lVar10;
                        auVar23._8_8_ = 0;
                        auVar23._0_8_ = uVar42;
                        lVar38 = SUB168(auVar13 * auVar23, 8);
                        uVar45 = *(uint*)( lVar9 + lVar38 * 4 );
                        iVar36 = SUB164(auVar13 * auVar23, 8);
                        if (uVar45 != 0) {
                           uVar41 = 0;
                           LAB_00110ec5:if (uVar45 != (uint)uVar43) goto LAB_00110e78;
                           lVar11 = *(long*)( lVar2 + 0x78 );
                           uVar45 = *(uint*)( lVar11 + lVar38 * 4 );
                           uVar34 = (ulong)uVar45;
                           if (*(long*)( lVar8 + uVar34 * 8 ) != lVar1) goto LAB_00110e78;
                           lVar12 = *(long*)( lVar2 + 0x80 );
                           puVar3 = (uint*)( lVar12 + uVar34 * 4 );
                           uVar41 = *puVar3;
                           uVar43 = (ulong)uVar41;
                           auVar17._8_8_ = 0;
                           auVar17._0_8_ = ( ulong )(uVar41 + 1) * lVar10;
                           auVar27._8_8_ = 0;
                           auVar27._0_8_ = uVar42;
                           lVar38 = SUB168(auVar17 * auVar27, 8) * 4;
                           uVar37 = SUB164(auVar17 * auVar27, 8);
                           uVar46 = (ulong)uVar37;
                           puVar44 = (uint*)( lVar9 + lVar38 );
                           if (( *puVar44 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar44 * lVar10,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar33 + uVar37 ) - SUB164(auVar18 * auVar28, 8)) * lVar10,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,SUB164(auVar19 * auVar29, 8) == 0) {
                              uVar46 = (ulong)uVar41;
                           } else {
                              while (true) {
                                 puVar35 = (uint*)( lVar38 + lVar11 );
                                 puVar4 = (uint*)( lVar11 + uVar43 * 4 );
                                 puVar40 = (uint*)( uVar43 * 4 + lVar9 );
                                 puVar5 = (undefined4*)( lVar12 + ( ulong ) * puVar35 * 4 );
                                 puVar6 = (undefined4*)( lVar12 + ( ulong ) * puVar4 * 4 );
                                 uVar7 = *puVar6;
                                 *puVar6 = *puVar5;
                                 *puVar5 = uVar7;
                                 uVar41 = *puVar44;
                                 *puVar44 = *puVar40;
                                 *puVar40 = uVar41;
                                 uVar41 = *puVar35;
                                 *puVar35 = *puVar4;
                                 *puVar4 = uVar41;
                                 auVar22._8_8_ = 0;
                                 auVar22._0_8_ = ( ulong )((int)uVar46 + 1) * lVar10;
                                 auVar32._8_8_ = 0;
                                 auVar32._0_8_ = uVar42;
                                 uVar39 = SUB168(auVar22 * auVar32, 8);
                                 lVar38 = uVar39 * 4;
                                 puVar44 = (uint*)( lVar9 + lVar38 );
                                 if (( *puVar44 == 0 ) || ( auVar20._8_8_ = 0 ),auVar20._0_8_ = ( ulong ) * puVar44 * lVar10,auVar30._8_8_ = 0,auVar30._0_8_ = uVar42,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( SUB164(auVar22 * auVar32, 8) + uVar33 ) - SUB164(auVar20 * auVar30, 8)) * lVar10,auVar31._8_8_ = 0,auVar31._0_8_ = uVar42,SUB164(auVar21 * auVar31, 8) == 0) break;
                                 uVar43 = uVar46;
                                 uVar46 = uVar39 & 0xffffffff;
                              };
                           }
                           *(undefined4*)( lVar9 + uVar46 * 4 ) = 0;
                           uVar33 = *(int*)( lVar2 + 0x94 ) - 1;
                           *(uint*)( lVar2 + 0x94 ) = uVar33;
                           if (uVar45 < uVar33) {
                              uVar41 = *(uint*)( lVar12 + (ulong)uVar33 * 4 );
                              *(undefined8*)( lVar8 + uVar34 * 8 ) = *(undefined8*)( lVar8 + (ulong)uVar33 * 8 );
                              *puVar3 = uVar41;
                              *(uint*)( lVar11 + ( ulong ) * (uint*)( lVar12 + ( ulong ) * (uint*)( lVar2 + 0x94 ) * 4 ) * 4 ) = uVar45;
                           }
                        }
                     }
                  } else if (*(int*)( lVar2 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }
               }
            }
            LAB_00111040:*(ulong*)( lVar1 + 0x68 ) = param_3;
            if (param_3 != 0) {
               uVar34 = *(ulong*)( lVar1 + 0x68 );
               if ((uint)uVar34 < *(uint*)( this + 0x19c )) {
                  iVar36 = *(int*)( *(long*)( *(long*)( this + 0x188 ) + ( ( uVar34 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( uVar34 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 + 0xd0 );
                  if (iVar36 == (int)( uVar34 >> 0x20 )) {
                     HashSet<GLES3::Mesh*,HashMapHasherDefault,HashMapComparatorDefault<GLES3::Mesh*>>::insert(local_58);
                  } else if (iVar36 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }
               }
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Dependency::changed_notify(lVar1 + 0xa0, 2);
               return;
            }
            goto LAB_001112b8;
         }
         if (*(int*)( lVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("mesh_set_shadow_mesh", "drivers/gles3/storage/mesh_storage.cpp", 0x32d, "Parameter \"mesh\" is null.", 0, 0);
         return;
      }
   }
   LAB_001112b8:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_00110e78:uVar41 = uVar41 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar36 + 1) * lVar10;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar42;
   lVar38 = SUB168(auVar14 * auVar24, 8);
   uVar45 = *(uint*)( lVar9 + lVar38 * 4 );
   iVar36 = SUB164(auVar14 * auVar24, 8);
   if (( uVar45 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar45 * lVar10,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar33 + iVar36 ) - SUB164(auVar15 * auVar25, 8)) * lVar10,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,SUB164(auVar16 * auVar26, 8) < uVar41) goto LAB_00111040;
   goto LAB_00110ec5;
}/* GLES3::MeshStorage::~MeshStorage() */void GLES3::MeshStorage::~MeshStorage(MeshStorage *this) {
   long *plVar1;
   long lVar2;
   MeshInstance *this_00;
   Mesh *this_01;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__MeshStorage_00122490;
   singleton = 0;
   ShaderGLES3::version_free((ShaderGLES3*)( this + 0x48 ), *(undefined8*)( this + 0x178 ));
   RID_Alloc<GLES3::Skeleton,true>::~RID_Alloc((RID_Alloc<GLES3::Skeleton,true>*)( this + 0x2b0 ));
   RID_Alloc<GLES3::MultiMesh,true>::~RID_Alloc((RID_Alloc<GLES3::MultiMesh,true>*)( this + 0x250 ));
   uVar3 = *(uint*)( this + 0x1f8 );
   *(undefined***)( this + 0x1d8 ) = &PTR__RID_Alloc_00122430;
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 500 );
      uVar8 = ( ulong ) * (uint*)( this + 0x1f0 );
      puVar9 = *(undefined8**)( this + 0x1e0 );
      LAB_00111453:if ((uint)uVar8 <= (uint)uVar5) {
         lVar7 = 0;
         while (true) {
            Memory::free_static((void*)puVar9[lVar7], false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x1e8 ) + lVar2 ), false);
            if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
            puVar9 = *(undefined8**)( this + 0x1e0 );
         };
         LAB_00111495:puVar9 = *(undefined8**)( this + 0x1e0 );
      }
   } else {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar3);
      print_error((String*)&local_58);
      pcVar4 = local_58;
      lVar7 = local_60;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
            lVar7 = local_60;
         }
      }
      local_60 = lVar7;
      if (lVar7 != 0) {
         LOCK();
         plVar1 = (long*)( lVar7 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      uVar8 = ( ulong ) * (uint*)( this + 0x1f0 );
      puVar9 = *(undefined8**)( this + 0x1e0 );
      if (*(int*)( this + 500 ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (MeshInstance*)( puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0xa8 );
            if (-1 < *(int*)( this_00 + 0xa0 )) {
               MeshInstance::~MeshInstance(this_00);
               uVar8 = ( ulong ) * (uint*)( this + 0x1f0 );
               puVar9 = *(undefined8**)( this + 0x1e0 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 500 );
            uVar6 = uVar6 + 1;
         } while ( uVar6 < uVar5 );
         goto LAB_00111453;
      }
      if (*(uint*)( this + 0x1f0 ) == 0) {
         Memory::free_static((void*)*puVar9, false);
         Memory::free_static((void*)**(undefined8**)( this + 0x1e8 ), false);
         goto LAB_00111495;
      }
   }
   if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 0x1e8 ), false);
   }
   *(undefined***)( this + 0x180 ) = &PTR__RID_Alloc_00122410;
   uVar3 = *(uint*)( this + 0x1a0 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x19c );
      uVar8 = ( ulong ) * (uint*)( this + 0x198 );
      puVar9 = *(undefined8**)( this + 0x188 );
      LAB_001115e3:if ((uint)uVar5 < (uint)uVar8) goto LAB_0011162c;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 400 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 0x188 );
      };
   } else {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar3);
      print_error((String*)&local_58);
      pcVar4 = local_58;
      lVar7 = local_60;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
            lVar7 = local_60;
         }
      }
      local_60 = lVar7;
      if (lVar7 != 0) {
         LOCK();
         plVar1 = (long*)( lVar7 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      uVar8 = ( ulong ) * (uint*)( this + 0x198 );
      puVar9 = *(undefined8**)( this + 0x188 );
      if (*(int*)( this + 0x19c ) != 0) {
         uVar6 = 0;
         do {
            this_01 = (Mesh*)( puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0xd8 );
            if (-1 < *(int*)( this_01 + 0xd0 )) {
               Mesh::~Mesh(this_01);
               uVar8 = ( ulong ) * (uint*)( this + 0x198 );
               puVar9 = *(undefined8**)( this + 0x188 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x19c );
            uVar6 = uVar6 + 1;
         } while ( uVar6 < uVar5 );
         goto LAB_001115e3;
      }
      if (*(uint*)( this + 0x198 ) != 0) goto LAB_0011162c;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 400 ), false);
   }
   puVar9 = *(undefined8**)( this + 0x188 );
   LAB_0011162c:if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }
   *(undefined***)( this + 0x48 ) = &PTR__init_001223e8;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)( this + 0x48 ));
   *(code**)this = operator_new;
   if (*(void**)( this + 0x30 ) != (void*)0x0) {
      if (*(int*)( this + 0x28 ) != 0) {
         *(undefined4*)( this + 0x28 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x30 ), false);
   }
   if (*(void**)( this + 0x20 ) != (void*)0x0) {
      if (*(int*)( this + 0x18 ) != 0) {
         *(undefined4*)( this + 0x18 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }
   if (*(void**)( this + 0x10 ) == (void*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      if (*(int*)( this + 8 ) != 0) {
         *(undefined4*)( this + 8 ) = 0;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::~MeshStorage() */void GLES3::MeshStorage::~MeshStorage(MeshStorage *this) {
   ~MeshStorage(this)
   ;;
   operator_delete(this, 0x310);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_instance_create(RID) */ulong GLES3::MeshStorage::mesh_instance_create(MeshStorage *this, ulong param_2) {
   Mesh *pMVar1;
   MeshInstance *pMVar2;
   int iVar3;
   long *plVar4;
   long lVar5;
   code *pcVar6;
   ulong uVar7;
   undefined8 *puVar8;
   undefined1(*pauVar9)[16];
   uint uVar10;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      pMVar1 = (Mesh*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      if (*(int*)( pMVar1 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         uVar7 = RID_Alloc<GLES3::MeshInstance,false>::make_rid((RID_Alloc<GLES3::MeshInstance,false>*)( this + 0x1d8 ));
         if (( uVar7 != 0 ) && ( (uint)uVar7 < *(uint*)( this + 500 ) )) {
            pMVar2 = (MeshInstance*)( *(long*)( *(long*)( this + 0x1e0 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1f0 ) ) * 8 ) + ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1f0 ) ) * 0xa8 );
            if (*(int*)( pMVar2 + 0xa0 ) == (int)( uVar7 >> 0x20 )) {
               iVar3 = *(int*)( pMVar1 + 0x10 );
               *(Mesh**)pMVar2 = pMVar1;
               if (iVar3 != 0) {
                  uVar10 = 0;
                  do {
                     _mesh_instance_add_surface(this, pMVar2, pMVar1, uVar10);
                     uVar10 = uVar10 + 1;
                  } while ( uVar10 < *(uint*)( pMVar1 + 0x10 ) );
               }
               if (*(long*)( pMVar1 + 0x60 ) == 0) {
                  pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( pMVar1 + 0x60 ) = pauVar9;
                  *(undefined4*)pauVar9[1] = 0;
                  *pauVar9 = (undefined1[16])0x0;
               }
               puVar8 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
               plVar4 = *(long**)( pMVar1 + 0x60 );
               puVar8[1] = 0;
               lVar5 = plVar4[1];
               *puVar8 = pMVar2;
               puVar8[3] = plVar4;
               puVar8[2] = lVar5;
               if (lVar5 != 0) {
                  *(undefined8**)( lVar5 + 8 ) = puVar8;
               }
               plVar4[1] = (long)puVar8;
               if (*plVar4 == 0) {
                  *plVar4 = (long)puVar8;
               }
               *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
               *(undefined8**)( pMVar2 + 0x30 ) = puVar8;
               pMVar2[0x40] = (MeshInstance)0x1;
               return uVar7;
            }
            if (*(int*)( pMVar2 + 0xa0 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar7 >> 0x20);
            }
         }
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         _DAT_00000000 = pMVar1;
         ( *pcVar6 )();
      }
      if (*(int*)( pMVar1 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_instance_create", "drivers/gles3/storage/mesh_storage.cpp", 0x446, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}/* GLES3::MeshStorage::skeleton_update_dependency(RID, DependencyTracker*) */void GLES3::MeshStorage::skeleton_update_dependency(MeshStorage *this, ulong param_2, Dependency *param_3) {
   int iVar1;
   undefined4 uVar2;
   undefined4 *puVar3;
   long lVar4;
   long in_FS_OFFSET;
   Dependency *local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2cc )) {
         lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( this + 0x2b8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2c8 ) ) * 8 );
         iVar1 = *(int*)( lVar4 + 0x88 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(local_48);
            uVar2 = *(undefined4*)( param_3 + 0x18 );
            local_48[0] = param_3;
            puVar3 = (undefined4*)HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::operator []((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)( lVar4 + 0x58 ), (DependencyTracker**)local_48);
            *puVar3 = uVar2;
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00111b83;
         }
         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("skeleton_update_dependency", "drivers/gles3/storage/mesh_storage.cpp", 0x975, "Parameter \"skeleton\" is null.", 0, 0);
      return;
   }
   LAB_00111b83:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write() [clone .isra.0] */void CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write(CowData<RenderingServer::SurfaceData::LOD> *this) {
   undefined4 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined4 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long lVar9;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 0x18 != 0) {
      uVar7 = lVar2 * 0x18 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }
   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar9 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      puVar8 = puVar5 + 2;
      if (lVar2 != 0) {
         do {
            puVar6 = (undefined4*)( (long)puVar8 + *(long*)this + ( -0x10 - (long)puVar5 ) );
            uVar1 = *puVar6;
            puVar8[2] = 0;
            lVar3 = *(long*)( puVar6 + 4 );
            *(undefined4*)puVar8 = uVar1;
            if (lVar3 != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar8 + 2 ), (CowData*)( puVar6 + 4 ));
            }
            lVar9 = lVar9 + 1;
            puVar8 = puVar8 + 3;
         } while ( lVar2 != lVar9 );
      }
      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      LAB_00111e96:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   } else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }
      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00111e96;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }
   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }
      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }
      FUN_0011b7dc();
      return;
   }
   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }
         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_00111dec;
      }
      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }
   }
   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }
   LAB_00111dec:puVar8[-1] = param_1;
   return;
}/* Error CowData<unsigned int>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<unsigned_int> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<unsigned_int> *pCVar10;
   CowData<unsigned_int> *pCVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar12 = 0;
      pCVar4 = (CowData<unsigned_int>*)0x0;
   } else {
      lVar12 = *(long*)( lVar2 + -8 );
      if (param_1 == lVar12) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
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
      _copy_on_write(this);
      pCVar4 = (CowData<unsigned_int>*)( lVar12 * 4 );
      if (pCVar4 != (CowData<unsigned_int>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<unsigned_int>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }
   }
   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<unsigned_int>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<unsigned_int>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }
            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }
            FUN_0011b7f4();
            return;
         }
         if (pCVar10 != pCVar4) {
            if (lVar12 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_00112011;
               }
               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_00112102;
            }
            pCVar11 = this;
            iVar3 = _realloc(this, (long)pCVar10);
            if (iVar3 != 0) {
               return;
            }
         }
         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            resize<false>((long)pCVar11);
            return;
         }
         LAB_00112011:puVar8[-1] = param_1;
         return;
      }
   }
   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00112102:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_add_surface(RID, RenderingServer::SurfaceData const&) */void GLES3::MeshStorage::mesh_add_surface(MeshStorage *this, ulong param_2, undefined4 *param_3) {
   long *plVar1;
   Mesh *pMVar2;
   int iVar3;
   void *pvVar4;
   code *pcVar5;
   undefined4 uVar6;
   uint uVar7;
   SurfaceData *pSVar8;
   int *piVar9;
   undefined8 *puVar10;
   undefined4 *puVar11;
   uint *puVar12;
   long lVar13;
   undefined4 *puVar14;
   int *piVar15;
   ulong uVar16;
   char *pcVar17;
   long lVar18;
   int iVar19;
   undefined4 *extraout_RDX;
   undefined4 *puVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   undefined8 uVar23;
   undefined4 *extraout_RDX_00;
   undefined4 *puVar24;
   long lVar25;
   long lVar26;
   uint uVar27;
   uint uVar28;
   uint uVar29;
   int iVar30;
   char cVar31;
   int iVar32;
   ulong uVar33;
   size_t sVar34;
   long lVar35;
   long in_FS_OFFSET;
   bool bVar36;
   undefined1 auVar37[16];
   uint local_1c8;
   long local_198;
   long local_190;
   long local_188;
   long local_180;
   long local_178;
   long local_170;
   long local_168;
   undefined8 *local_160;
   char *local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   ulong uStack_130;
   undefined8 local_128;
   void *apvStack_120[2];
   long local_110[2];
   long local_100;
   uint local_f8;
   long local_e8;
   int local_e0;
   undefined8 local_dc;
   undefined8 uStack_d4;
   undefined8 local_cc;
   long local_b8[2];
   long local_a8;
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_80;
   undefined8 uStack_78;
   long local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      pMVar2 = (Mesh*)( *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0xd8 );
      if (*(int*)( pMVar2 + 0xd0 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pMVar2 + 0x10 ) == 0x100) {
            if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar23 = 0x6f;
               pcVar17 = "Condition \"mesh->surface_count == RenderingServer::MAX_MESH_SURFACES\" is true.";
               goto LAB_00113a71;
            }
            goto LAB_001147ec;
         }
         iVar32 = 0;
         iVar30 = 0;
         uVar33 = *(ulong*)( param_3 + 2 );
         uVar16 = 0;
         LAB_001121f0:do {
            if (( uVar33 >> ( uVar16 & 0x3f ) & 1 ) != 0) {
               LAB_001121f8:switch (uVar16 & 0xffffffff) {
                  default:
            if ((uVar33 & 0x22000000) == 0) {
              iVar30 = iVar30 + 0xc;
              uVar16 = uVar16 + 1;
            }
            else {
              iVar30 = iVar30 + 8;
              uVar16 = uVar16 + 1;
            }
            break;
                  case 2:
            if ((uVar33 & 0x20000000) != 0) {
              uVar16 = uVar16 + 1;
              break;
            }
                  case 1:
            iVar30 = iVar30 + 4;
            uVar16 = uVar16 + 1;
            break;
                  case 3:
            goto switchD_00112208_caseD_3;
                  case 4:
                  case 5:
            if ((uVar33 & 0x20000000) == 0) {
              iVar32 = iVar32 + 8;
              uVar16 = uVar16 + 1;
            }
            else {
switchD_00112208_caseD_3:
              iVar32 = iVar32 + 4;
              uVar16 = uVar16 + 1;
            }
            break;
                  for (int i = 0; i < 3; i++) {
                     case 6:
                  }
                  case 9:
            goto switchD_00112208_caseD_6;
                  case 10:
            iVar19 = (-(uint)((uVar33 & 0x8000000) == 0) & 0xfffffff0) + 0x20;
            goto LAB_001122c4;
               }
               goto LAB_001121f0;
            }
            LAB_00112268:uVar16 = uVar16 + 1;
         } while ( uVar16 != 0xb );
         iVar19 = 0;
         LAB_001122c4:iVar3 = param_3[0x10];
         lVar13 = *(long*)( param_3 + 6 );
         if (lVar13 == 0) {
            lVar26 = 0;
         } else {
            lVar26 = *(long*)( lVar13 + -8 );
         }
         if (iVar30 * iVar3 == lVar26) {
            if (*(long*)( param_3 + 0x34 ) == 0) {
               lVar26 = 0;
            } else {
               lVar26 = *(long*)( *(long*)( param_3 + 0x34 ) + -8 );
            }
            if (iVar30 * iVar3 * *(int*)pMVar2 != lVar26) {
               local_168 = 0;
               local_158 = ")";
               local_150 = 1;
               String::parse_latin1((StrRange*)&local_168);
               itos((long)&local_178);
               local_158 = ") does not match expected (";
               local_188 = 0;
               local_150 = 0x1b;
               String::parse_latin1((StrRange*)&local_188);
               itos((long)&local_198);
               operator+((char *)&
               local_190,(String*)"Size of blend shape data provided (";
               String::operator +((String*)&local_180, (String*)&local_190);
               String::operator +((String*)&local_170, (String*)&local_180);
               String::operator +((String*)&local_158, (String*)&local_170);
               pcVar17 = "Condition \"bs_expected_size != p_surface.blend_shape_data.size()\" is true.";
               uVar23 = 0xb6;
               goto LAB_00113bf3;
            }
            lVar26 = *(long*)( param_3 + 10 );
            if (lVar26 == 0) {
               lVar35 = 0;
            } else {
               lVar35 = *(long*)( lVar26 + -8 );
            }
            if (iVar32 * iVar3 != lVar35) {
               local_168 = 0;
               local_158 = ")";
               local_150 = 1;
               String::parse_latin1((StrRange*)&local_168);
               itos((long)&local_178);
               local_158 = ") does not match expected (";
               local_188 = 0;
               local_150 = 0x1b;
               String::parse_latin1((StrRange*)&local_188);
               itos((long)&local_198);
               operator+((char *)&
               local_190,(String*)"Size of attribute data provided (";
               String::operator +((String*)&local_180, (String*)&local_190);
               String::operator +((String*)&local_170, (String*)&local_180);
               String::operator +((String*)&local_158, (String*)&local_170);
               pcVar17 = "Condition \"expected_attrib_size != p_surface.attribute_data.size()\" is true.";
               uVar23 = 0xb9;
               goto LAB_00113bf3;
            }
            if (( ~uVar33 & 0xc00 ) == 0) {
               if (*(long*)( param_3 + 0xe ) == 0) {
                  lVar35 = 0;
               } else {
                  lVar35 = *(long*)( *(long*)( param_3 + 0xe ) + -8 );
               }
               if (iVar3 * iVar19 != lVar35) {
                  local_168 = 0;
                  local_158 = ")";
                  local_150 = 1;
                  String::parse_latin1((StrRange*)&local_168);
                  itos((long)&local_178);
                  local_158 = ") does not match expected (";
                  local_188 = 0;
                  local_150 = 0x1b;
                  String::parse_latin1((StrRange*)&local_188);
                  itos((long)&local_198);
                  operator+((char *)&
                  local_190,(String*)"Size of skin data provided (";
                  String::operator +((String*)&local_180, (String*)&local_190);
                  String::operator +((String*)&local_170, (String*)&local_180);
                  String::operator +((String*)&local_158, (String*)&local_170);
                  pcVar17 = "Condition \"expected_size != p_surface.skin_data.size()\" is true.";
                  uVar23 = 0xbd;
                  goto LAB_00113bf3;
               }
            }
            apvStack_120[0] = (void*)0x0;
            local_138 = CONCAT44(local_138._4_4_, *param_3);
            uStack_130 = uVar33;
            if (lVar13 != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)apvStack_120, (CowData*)( param_3 + 6 ));
               lVar26 = *(long*)( param_3 + 10 );
            }
            local_110[0] = 0;
            if (lVar26 != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)local_110, (CowData*)( param_3 + 10 ));
            }
            local_100 = 0;
            if (*(long*)( param_3 + 0xe ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_100, (CowData*)( param_3 + 0xe ));
            }
            local_e8 = 0;
            local_f8 = param_3[0x10];
            if (*(long*)( param_3 + 0x14 ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_e8, (CowData*)( param_3 + 0x14 ));
            }
            local_b8[0] = 0;
            local_e0 = param_3[0x16];
            local_dc = *(undefined8*)( param_3 + 0x17 );
            uStack_d4 = *(undefined8*)( param_3 + 0x19 );
            local_cc = *(undefined8*)( param_3 + 0x1b );
            if (*(long*)( param_3 + 0x20 ) != 0) {
               CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
               if (*(long*)( param_3 + 0x20 ) != 0) {
                  plVar1 = (long*)( *(long*)( param_3 + 0x20 ) + -0x10 );
                  do {
                     lVar13 = *plVar1;
                     if (lVar13 == 0) goto LAB_001124cc;
                     LOCK();
                     lVar26 = *plVar1;
                     bVar36 = lVar13 == lVar26;
                     if (bVar36) {
                        *plVar1 = lVar13 + 1;
                        lVar26 = lVar13;
                     }
                     UNLOCK();
                  } while ( !bVar36 );
                  if (lVar26 != -1) {
                     local_b8[0] = *(long*)( param_3 + 0x20 );
                  }
               }
            }
            LAB_001124cc:local_a8 = 0;
            if (*(long*)( param_3 + 0x24 ) != 0) {
               CowData<AABB>::_ref((CowData<AABB>*)&local_a8, (CowData*)( param_3 + 0x24 ));
            }
            local_68 = 0;
            local_80 = *(undefined8*)( param_3 + 0x2e );
            uStack_78 = *(undefined8*)( param_3 + 0x30 );
            local_a0 = *(undefined8*)( param_3 + 0x26 );
            uStack_98 = *(undefined8*)( param_3 + 0x28 );
            local_90 = *(undefined8*)( param_3 + 0x2a );
            uStack_88 = *(undefined8*)( param_3 + 0x2c );
            if (*(long*)( param_3 + 0x34 ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_68, (CowData*)( param_3 + 0x34 ));
            }
            local_60 = *(undefined8*)( param_3 + 0x36 );
            uStack_58 = *(undefined8*)( param_3 + 0x38 );
            local_50 = *(undefined8*)( param_3 + 0x3a );
            if (( uVar33 & 0x7f800000000 ) == 0x800000000) {
               LAB_0011264a:piVar9 = (int*)operator_new(0x120, "");
               *(undefined1(*) [16])( piVar9 + 4 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( piVar9 + 0x1e ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( piVar9 + 0x22 ) = (undefined1[16])0x0;
               auVar37 = ZEXT416(_LC54);
               *(undefined1(*) [16])( piVar9 + 0x32 ) = auVar37;
               *(undefined1(*) [16])( piVar9 + 0x36 ) = auVar37;
               *piVar9 = 0;
               piVar9[2] = 0;
               piVar9[3] = 0;
               piVar9[8] = 0;
               piVar9[9] = 0;
               piVar9[10] = 0;
               *(undefined1*)( piVar9 + 0xb ) = 0;
               piVar9[0x1c] = 0;
               piVar9[0x1d] = 0;
               piVar9[0x26] = 0;
               piVar9[0x27] = 0;
               piVar9[0x28] = 0;
               piVar9[0x29] = 0;
               piVar9[0x2a] = 0;
               piVar9[0x2b] = 0;
               piVar9[0x2c] = 0;
               piVar9[0x30] = 0;
               piVar9[0x31] = 0;
               piVar9[0x3a] = 0x3f800000;
               piVar9[0x3b] = 0;
               piVar9[0x3c] = 0;
               piVar9[0x3d] = 0;
               piVar9[0x42] = 0;
               piVar9[0x43] = 0;
               piVar9[0x44] = 0;
               piVar9[0x46] = 0;
               piVar9[0x47] = 0;
               *(undefined1(*) [16])( piVar9 + 0x3e ) = (undefined1[16])0x0;
               *(ulong*)( piVar9 + 2 ) = uStack_130;
               *piVar9 = (int)local_138;
               if (( apvStack_120[0] != (void*)0x0 ) && ( *(long*)( (long)apvStack_120[0] + -8 ) != 0 )) {
                  ( *_glad_glGenBuffers )(1, piVar9 + 4);
                  ( *_glad_glBindBuffer )(0x8892, piVar9[4]);
                  lVar13 = Utilities::singleton;
                  if (( (uint)uStack_130 & 0x20000006 ) == 2) {
                     local_160 = (undefined8*)0x0;
                     if (apvStack_120[0] == (void*)0x0) {
                        uVar33 = 0x14;
                        sVar34 = 4;
                        LAB_00112817:CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_160);
                        puVar10 = (undefined8*)Memory::alloc_static(uVar33, false);
                        if (puVar10 == (undefined8*)0x0) {
                           _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0);
                        } else {
                           local_160 = puVar10 + 2;
                           *puVar10 = 1;
                           memset(local_160, 0, sVar34);
                           puVar10[1] = sVar34;
                        }
                        LAB_0011286c:if (apvStack_120[0] == (void*)0x0) {
                           sVar34 = 0;
                        } else {
                           sVar34 = *(size_t*)( (long)apvStack_120[0] + -8 );
                        }
                     } else {
                        sVar34 = *(long*)( (long)apvStack_120[0] + -8 ) + 4;
                        if ((long)sVar34 < 0) {
                           _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0);
                           goto LAB_0011286c;
                        }
                        if (sVar34 != 0) {
                           uVar33 = *(long*)( (long)apvStack_120[0] + -8 ) + 3;
                           uVar33 = uVar33 >> 1 | uVar33;
                           uVar33 = uVar33 >> 2 | uVar33;
                           uVar33 = uVar33 >> 4 | uVar33;
                           uVar33 = uVar33 >> 8 | uVar33;
                           uVar33 = uVar33 >> 0x10 | uVar33;
                           uVar33 = ( uVar33 >> 0x20 | uVar33 ) + 0x11;
                           goto LAB_00112817;
                        }
                        sVar34 = 0xfffffffffffffffc;
                     }
                     pvVar4 = apvStack_120[0];
                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_160);
                     puVar10 = local_160;
                     memcpy(local_160, pvVar4, sVar34);
                     lVar13 = Utilities::singleton;
                     local_158 = "Mesh vertex buffer";
                     local_170 = 0;
                     local_150 = 0x12;
                     String::parse_latin1((StrRange*)&local_170);
                     uVar33 = puVar10[-1];
                     local_158 = (char*)CONCAT44(local_158._4_4_, piVar9[4]);
                     uVar16 = uVar33 & 0xffffffff;
                     ( *_glad_glBufferData )(0x8892, uVar16, puVar10, ( -(uint)((*(ulong *)(piVar9 + 2) & 0x4000000) == 0) & 0xfffffffc ) + 0x88e8);
                     plVar1 = (long*)( lVar13 + 0xf8 );
                     *plVar1 = *plVar1 + uVar16;
                     puVar11 = (undefined4*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar13 + 0x68 ), (uint*)&local_158);
                     lVar13 = local_170;
                     *puVar11 = (int)uVar33;
                     if (local_170 == 0) {
                        piVar9[8] = (int)puVar10[-1];
                     } else {
                        LOCK();
                        plVar1 = (long*)( local_170 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_170 = 0;
                           Memory::free_static((void*)( lVar13 + -0x10 ), false);
                        }
                        piVar9[8] = (int)puVar10[-1];
                        puVar10 = local_160;
                        if (local_160 == (undefined8*)0x0) goto joined_r0x0011299b;
                     }
                     LOCK();
                     plVar1 = puVar10 + -2;
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(local_160 + -2, false);
                     }
                  } else {
                     local_168 = 0;
                     local_158 = "Mesh vertex buffer";
                     local_150 = 0x12;
                     String::parse_latin1((StrRange*)&local_168);
                     if (apvStack_120[0] == (void*)0x0) {
                        uVar33 = 0;
                        uVar7 = 0;
                     } else {
                        uVar7 = *(uint*)( (long)apvStack_120[0] + -8 );
                        uVar33 = (ulong)uVar7;
                     }
                     local_158 = (char*)CONCAT44(local_158._4_4_, piVar9[4]);
                     ( *_glad_glBufferData )(0x8892, uVar33, apvStack_120[0], ( -(uint)((*(ulong *)(piVar9 + 2) & 0x4000000) == 0) & 0xfffffffc ) + 0x88e8);
                     plVar1 = (long*)( lVar13 + 0xf8 );
                     *plVar1 = *plVar1 + uVar33;
                     puVar12 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar13 + 0x68 ), (uint*)&local_158);
                     lVar13 = local_168;
                     *puVar12 = uVar7;
                     if (local_168 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_168 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_168 = 0;
                           Memory::free_static((void*)( lVar13 + -0x10 ), false);
                        }
                     }
                     if (apvStack_120[0] == (void*)0x0) {
                        iVar30 = 0;
                     } else {
                        iVar30 = *(int*)( (long)apvStack_120[0] + -8 );
                     }
                     piVar9[8] = iVar30;
                  }
               }
               joined_r0x0011299b:if (( local_110[0] != 0 ) && ( *(long*)( local_110[0] + -8 ) != 0 )) {
                  ( *_glad_glGenBuffers )(1, piVar9 + 5);
                  ( *_glad_glBindBuffer )(0x8892, piVar9[5]);
                  lVar13 = Utilities::singleton;
                  local_168 = 0;
                  local_158 = "Mesh attribute buffer";
                  local_150 = 0x15;
                  String::parse_latin1((StrRange*)&local_168);
                  if (local_110[0] == 0) {
                     uVar33 = 0;
                     uVar7 = 0;
                  } else {
                     uVar7 = *(uint*)( local_110[0] + -8 );
                     uVar33 = (ulong)uVar7;
                  }
                  local_158 = (char*)CONCAT44(local_158._4_4_, piVar9[5]);
                  ( *_glad_glBufferData )(0x8892, uVar33, local_110[0], ( -(uint)((*(ulong *)(piVar9 + 2) & 0x4000000) == 0) & 0xfffffffc ) + 0x88e8);
                  plVar1 = (long*)( lVar13 + 0xf8 );
                  *plVar1 = *plVar1 + uVar33;
                  puVar12 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar13 + 0x68 ), (uint*)&local_158);
                  lVar13 = local_168;
                  *puVar12 = uVar7;
                  if (local_168 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_168 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_168 = 0;
                        Memory::free_static((void*)( lVar13 + -0x10 ), false);
                     }
                  }
                  if (local_110[0] == 0) {
                     iVar30 = 0;
                  } else {
                     iVar30 = *(int*)( local_110[0] + -8 );
                  }
                  piVar9[9] = iVar30;
               }
               if (( local_100 != 0 ) && ( *(long*)( local_100 + -8 ) != 0 )) {
                  ( *_glad_glGenBuffers )(1, piVar9 + 6);
                  ( *_glad_glBindBuffer )(0x8892, piVar9[6]);
                  lVar13 = Utilities::singleton;
                  local_168 = 0;
                  local_158 = "Mesh skin buffer";
                  local_150 = 0x10;
                  String::parse_latin1((StrRange*)&local_168);
                  if (local_100 == 0) {
                     uVar33 = 0;
                     uVar7 = 0;
                  } else {
                     uVar7 = *(uint*)( local_100 + -8 );
                     uVar33 = (ulong)uVar7;
                  }
                  local_158 = (char*)CONCAT44(local_158._4_4_, piVar9[6]);
                  ( *_glad_glBufferData )(0x8892, uVar33, local_100, ( -(uint)((*(ulong *)(piVar9 + 2) & 0x4000000) == 0) & 0xfffffffc ) + 0x88e8);
                  plVar1 = (long*)( lVar13 + 0xf8 );
                  *plVar1 = *plVar1 + uVar33;
                  puVar12 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar13 + 0x68 ), (uint*)&local_158);
                  lVar13 = local_168;
                  *puVar12 = uVar7;
                  if (local_168 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_168 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_168 = 0;
                        Memory::free_static((void*)( lVar13 + -0x10 ), false);
                     }
                  }
                  if (local_100 == 0) {
                     iVar30 = 0;
                  } else {
                     iVar30 = *(int*)( local_100 + -8 );
                  }
                  piVar9[10] = iVar30;
               }
               ( *_glad_glBindBuffer )(0x8892, 0);
               uVar7 = local_f8;
               piVar9[7] = local_f8;
               if (( uStack_130 & 0x400 ) != 0) {
                  pMVar2[0x14] = (Mesh)0x1;
               }
               if (local_e0 == 0) {
                  LAB_00112da0:if (local_f8 == 0) {
                     _err_print_error("mesh_add_surface", "drivers/gles3/storage/mesh_storage.cpp", 0x11f, "Condition \"!new_surface.index_count && !new_surface.vertex_count\" is true.", "Meshes must contain a vertex array, an index array, or both", 0, 0);
                     goto LAB_0011438e;
                  }
               } else {
                  ( *_glad_glGenBuffers )(1, piVar9 + 0x1f);
                  ( *_glad_glBindBuffer )(0x8893, piVar9[0x1f]);
                  lVar13 = Utilities::singleton;
                  local_168 = 0;
                  local_158 = "Mesh index buffer";
                  local_150 = 0x11;
                  String::parse_latin1((StrRange*)&local_168);
                  if (local_e8 == 0) {
                     uVar33 = 0;
                  } else {
                     uVar33 = ( ulong ) * (uint*)( local_e8 + -8 );
                  }
                  local_158 = (char*)CONCAT44(local_158._4_4_, piVar9[0x1f]);
                  ( *_glad_glBufferData )(0x8893, uVar33, local_e8, 0x88e4);
                  plVar1 = (long*)( lVar13 + 0xf8 );
                  *plVar1 = *plVar1 + uVar33;
                  puVar11 = (undefined4*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar13 + 0x68 ), (uint*)&local_158);
                  lVar13 = local_168;
                  *puVar11 = (int)uVar33;
                  if (local_168 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_168 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_168 = 0;
                        Memory::free_static((void*)( lVar13 + -0x10 ), false);
                     }
                  }
                  ( *_glad_glBindBuffer )(0x8893, 0);
                  piVar9[0x20] = local_e0;
                  if (local_e8 == 0) {
                     iVar30 = 0;
                  } else {
                     iVar30 = *(int*)( local_e8 + -8 );
                  }
                  piVar9[0x21] = iVar30;
                  if (( local_b8[0] != 0 ) && ( lVar13 = lVar13 != 0 )) {
                     puVar11 = (undefined4*)Memory::alloc_static(lVar13 * 0x10, true);
                     if (puVar11 == (undefined4*)0x0) {
                        _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.");
                        puVar20 = extraout_RDX_00;
                     } else {
                        *(long*)( puVar11 + -2 ) = lVar13;
                        puVar20 = puVar11 + lVar13 * 4;
                        puVar24 = puVar11;
                        do {
                           *puVar24 = 0;
                           puVar14 = puVar24 + 4;
                           *(undefined8*)( puVar24 + 1 ) = 0;
                           puVar24[3] = 0;
                           puVar24 = puVar14;
                        } while ( puVar20 != puVar14 );
                     }
                     *(undefined4**)( piVar9 + 0x24 ) = puVar11;
                     if (local_b8[0] == 0) {
                        piVar9[0x26] = 0;
                     } else {
                        lVar13 = *(long*)( local_b8[0] + -8 );
                        piVar9[0x26] = (int)lVar13;
                        lVar26 = ( -(ulong)(uVar7 - 1 < 0x10000) & 0xfffffffffffffffe ) + 4;
                        for (lVar35 = 0; lVar35 < lVar13; lVar35 = lVar35 + 1) {
                           lVar25 = lVar35 * 0x10;
                           ( *_glad_glGenBuffers )(1, *(long*)( piVar9 + 0x24 ) + lVar25 + 0xc, puVar20);
                           ( *_glad_glBindBuffer )(0x8893, *(undefined4*)( *(long*)( piVar9 + 0x24 ) + 0xc + lVar25 ));
                           lVar18 = Utilities::singleton;
                           local_158 = "]";
                           local_168 = 0;
                           local_150 = 1;
                           String::parse_latin1((StrRange*)&local_168);
                           itos((long)&local_178);
                           operator+((char *)&
                           local_170,(String*)"Mesh index buffer LOD[";
                           String::operator +((String*)&local_158, (String*)&local_170);
                           if (local_b8[0] == 0) {
                              LAB_001136d6:lVar13 = 0;
                              LAB_001136de:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar35, lVar13, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar5 = (code*)invalidInstructionException();
                              ( *pcVar5 )();
                           }
                           lVar13 = *(long*)( local_b8[0] + -8 );
                           if (lVar13 <= lVar35) goto LAB_001136de;
                           lVar13 = *(long*)( local_b8[0] + 0x10 + lVar35 * 0x18 );
                           if (lVar13 == 0) {
                              local_1c8 = 0;
                              uVar33 = 0;
                           } else {
                              local_1c8 = *(uint*)( lVar13 + -8 );
                              uVar33 = (ulong)local_1c8;
                           }
                           local_180 = CONCAT44(local_180._4_4_, *(undefined4*)( *(long*)( piVar9 + 0x24 ) + 0xc + lVar25 ));
                           ( *_glad_glBufferData )(0x8893, uVar33, lVar13, 0x88e4);
                           plVar1 = (long*)( lVar18 + 0xf8 );
                           *plVar1 = *plVar1 + uVar33;
                           puVar12 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar18 + 0x68 ), (uint*)&local_180);
                           pcVar17 = local_158;
                           *puVar12 = local_1c8;
                           if (local_158 != (char*)0x0) {
                              LOCK();
                              plVar1 = (long*)( local_158 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_158 = (char*)0x0;
                                 Memory::free_static(pcVar17 + -0x10, false);
                              }
                           }
                           lVar13 = local_170;
                           if (local_170 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_170 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_170 = 0;
                                 Memory::free_static((void*)( lVar13 + -0x10 ), false);
                              }
                           }
                           lVar13 = local_178;
                           if (local_178 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_178 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_178 = 0;
                                 Memory::free_static((void*)( lVar13 + -0x10 ), false);
                              }
                           }
                           lVar13 = local_168;
                           if (local_168 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_168 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_168 = 0;
                                 Memory::free_static((void*)( lVar13 + -0x10 ), false);
                              }
                           }
                           ( *_glad_glBindBuffer )(0x8893, 0);
                           if (local_b8[0] == 0) goto LAB_001136d6;
                           lVar13 = *(long*)( local_b8[0] + -8 );
                           if (lVar13 <= lVar35) goto LAB_001136de;
                           puVar11 = (undefined4*)( local_b8[0] + lVar35 * 0x18 );
                           puVar24 = (undefined4*)( lVar25 + *(long*)( piVar9 + 0x24 ) );
                           lVar18 = *(long*)( puVar11 + 4 );
                           *puVar24 = *puVar11;
                           if (lVar18 == 0) {
                              lVar18 = 0;
                              uVar6 = 0;
                              puVar20 = extraout_RDX;
                           } else {
                              lVar18 = *(long*)( lVar18 + -8 );
                              uVar6 = ( undefined4 )(lVar18 / lVar26);
                              puVar20 = (undefined4*)( lVar18 % lVar26 );
                           }
                           puVar24[1] = uVar6;
                           puVar24[2] = (int)lVar18;
                        }
                     }
                  }
                  if (local_e0 == 0) goto LAB_00112da0;
               }
               if (( *(char*)( Config::singleton + 0x40 ) != '\0' ) && ( *piVar9 == 3 )) {
                  puVar10 = (undefined8*)operator_new(0xc, "");
                  *puVar10 = 0;
                  *(undefined4*)( puVar10 + 1 ) = 0;
                  *(undefined8**)( piVar9 + 0x22 ) = puVar10;
                  local_160 = (undefined8*)0x0;
                  if (( uStack_130 & 0x1000 ) == 0) {
                     iVar30 = piVar9[7];
                     *(int*)( (long)puVar10 + 4 ) = iVar30 * 2;
                     CowData<unsigned_int>::resize<false>((CowData<unsigned_int>*)&local_160, ( ulong )(uint)(iVar30 * 2));
                     CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int>*)&local_160);
                     uVar7 = *(uint*)( (long)puVar10 + 4 );
                     puVar21 = local_160;
                     if (5 < uVar7) {
                        uVar28 = 5;
                        do {
                           uVar7 = uVar28 - 5 >> 1;
                           *(uint*)( (long)local_160 + ( ulong )(uVar28 - 5) * 4 ) = uVar7;
                           *(uint*)( (long)local_160 + ( ulong )(uVar28 - 4) * 4 ) = uVar7 + 1;
                           *(uint*)( (long)local_160 + ( ulong )(uVar28 - 3) * 4 ) = uVar7 + 1;
                           *(uint*)( (long)local_160 + ( ulong )(uVar28 - 2) * 4 ) = uVar7 + 2;
                           *(uint*)( (long)local_160 + ( ulong )(uVar28 - 1) * 4 ) = uVar7 + 2;
                           uVar33 = (ulong)uVar28;
                           uVar28 = uVar28 + 6;
                           *(uint*)( (long)local_160 + uVar33 * 4 ) = uVar7;
                           uVar7 = *(uint*)( (long)puVar10 + 4 );
                        } while ( uVar28 < uVar7 );
                     }
                  } else {
                     iVar30 = piVar9[0x20];
                     *(int*)( (long)puVar10 + 4 ) = iVar30 * 2;
                     CowData<unsigned_int>::resize<false>((CowData<unsigned_int>*)&local_160, ( ulong )(uint)(iVar30 * 2));
                     plVar1 = (long*)( local_e8 + -0x10 );
                     if (local_e8 == 0) {
                        LAB_00114618:lVar13 = 0;
                     } else {
                        do {
                           lVar13 = *plVar1;
                           if (lVar13 == 0) goto LAB_00114618;
                           LOCK();
                           lVar26 = *plVar1;
                           bVar36 = lVar13 == lVar26;
                           if (bVar36) {
                              *plVar1 = lVar13 + 1;
                              lVar26 = lVar13;
                           }
                           UNLOCK();
                        } while ( !bVar36 );
                        lVar13 = local_e8;
                        if (lVar26 == -1) goto LAB_00114618;
                     }
                     CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int>*)&local_160);
                     puVar21 = local_160;
                     if (local_f8 < 0x10001) {
                        uVar7 = 5;
                        if (5 < *(uint*)( (long)puVar10 + 4 )) {
                           do {
                              uVar27 = uVar7 - 5 >> 1;
                              uVar29 = ( uint ) * (ushort*)( lVar13 + (ulong)uVar27 * 2 );
                              *(uint*)( (long)local_160 + ( ulong )(uVar7 - 5) * 4 ) = uVar29;
                              uVar28 = ( uint ) * (ushort*)( lVar13 + ( ulong )(uVar27 + 1) * 2 );
                              *(uint*)( (long)local_160 + ( ulong )(uVar7 - 4) * 4 ) = uVar28;
                              *(uint*)( (long)local_160 + ( ulong )(uVar7 - 3) * 4 ) = uVar28;
                              uVar28 = ( uint ) * (ushort*)( lVar13 + ( ulong )(uVar27 + 2) * 2 );
                              *(uint*)( (long)local_160 + ( ulong )(uVar7 - 2) * 4 ) = uVar28;
                              *(uint*)( (long)local_160 + ( ulong )(uVar7 - 1) * 4 ) = uVar28;
                              uVar33 = (ulong)uVar7;
                              uVar7 = uVar7 + 6;
                              *(uint*)( (long)local_160 + uVar33 * 4 ) = uVar29;
                           } while ( uVar7 < *(uint*)( (long)puVar10 + 4 ) );
                        }
                     } else if (5 < *(uint*)( (long)puVar10 + 4 )) {
                        uVar7 = 5;
                        do {
                           uVar28 = uVar7 - 5 >> 1;
                           puVar11 = (undefined4*)( lVar13 + (ulong)uVar28 * 4 );
                           *(undefined4*)( (long)local_160 + ( ulong )(uVar7 - 5) * 4 ) = *puVar11;
                           uVar6 = *(undefined4*)( lVar13 + ( ulong )(uVar28 + 1) * 4 );
                           *(undefined4*)( (long)local_160 + ( ulong )(uVar7 - 4) * 4 ) = uVar6;
                           *(undefined4*)( (long)local_160 + ( ulong )(uVar7 - 3) * 4 ) = uVar6;
                           uVar6 = *(undefined4*)( lVar13 + ( ulong )(uVar28 + 2) * 4 );
                           *(undefined4*)( (long)local_160 + ( ulong )(uVar7 - 2) * 4 ) = uVar6;
                           *(undefined4*)( (long)local_160 + ( ulong )(uVar7 - 1) * 4 ) = uVar6;
                           uVar33 = (ulong)uVar7;
                           uVar7 = uVar7 + 6;
                           *(undefined4*)( (long)local_160 + uVar33 * 4 ) = *puVar11;
                        } while ( uVar7 < *(uint*)( (long)puVar10 + 4 ) );
                     }
                     if (lVar13 != 0) {
                        plVar1 = (long*)( lVar13 + -0x10 );
                        LOCK();
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static(plVar1, false);
                        }
                     }
                     uVar7 = *(uint*)( (long)puVar10 + 4 );
                  }
                  *(uint*)( *(long*)( piVar9 + 0x22 ) + 8 ) = uVar7 << 2;
                  ( *_glad_glGenBuffers )(1);
                  ( *_glad_glBindBuffer )(0x8893, **(undefined4**)( piVar9 + 0x22 ));
                  lVar13 = Utilities::singleton;
                  local_158 = "Mesh wireframe index buffer";
                  local_170 = 0;
                  local_150 = 0x1b;
                  String::parse_latin1((StrRange*)&local_170);
                  uVar7 = ( *(undefined4**)( piVar9 + 0x22 ) )[2];
                  local_158 = (char*)CONCAT44(local_158._4_4_, **(undefined4**)( piVar9 + 0x22 ));
                  ( *_glad_glBufferData )(0x8893, (ulong)uVar7, puVar21, 0x88e4);
                  plVar1 = (long*)( lVar13 + 0xf8 );
                  *plVar1 = *plVar1 + (ulong)uVar7;
                  puVar12 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar13 + 0x68 ), (uint*)&local_158);
                  lVar13 = local_170;
                  *puVar12 = uVar7;
                  if (local_170 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_170 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_170 = 0;
                        Memory::free_static((void*)( lVar13 + -0x10 ), false);
                     }
                  }
                  ( *_glad_glBindBuffer )(0x8893);
                  if (local_160 != (undefined8*)0x0) {
                     LOCK();
                     plVar1 = local_160 + -2;
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(local_160 + -2, false);
                     }
                  }
               }
               *(undefined8*)( piVar9 + 0x27 ) = local_dc;
               *(undefined8*)( piVar9 + 0x29 ) = uStack_d4;
               *(undefined8*)( piVar9 + 0x2b ) = local_cc;
               if (*(long*)( piVar9 + 0x30 ) != local_a8) {
                  CowData<AABB>::_ref((CowData<AABB>*)( piVar9 + 0x30 ), (CowData*)&local_a8);
               }
               uVar7 = *(uint*)pMVar2;
               for (int i = 0; i < 3; i++) {
                  uVar23 = *(undefined8*)( param_3 + ( 4*i + 40 ) );
                  *(undefined8*)( piVar9 + ( 4*i + 50 ) ) = *(undefined8*)( param_3 + ( 4*i + 38 ) );
                  *(undefined8*)( piVar9 + ( 4*i + 52 ) ) = uVar23;
               }
               *(undefined8*)( piVar9 + 0x3e ) = local_60;
               *(undefined8*)( piVar9 + 0x40 ) = uStack_58;
               if (( ( local_100 == 0 ) || ( *(long*)( local_100 + -8 ) == 0 ) ) && ( uVar7 == 0 )) {
                  iVar30 = *(int*)( pMVar2 + 0x10 );
                  if (iVar30 != 0) goto LAB_0011301e;
                  LAB_00112e83:*(undefined8*)( pMVar2 + 0x28 ) = local_cc;
                  *(undefined8*)( pMVar2 + 0x18 ) = local_dc;
                  *(undefined8*)( pMVar2 + 0x20 ) = uStack_d4;
               } else {
                  if (apvStack_120[0] == (void*)0x0) {
                     uVar33 = 0;
                  } else {
                     uVar33 = *(ulong*)( (long)apvStack_120[0] + -8 );
                  }
                  if (( uStack_130 & 1 ) == 0) {
                     iVar30 = 0;
                     cVar31 = '\0';
                  } else if (( uStack_130 & 0x2000000 ) == 0) {
                     cVar31 = ( -((uStack_130 & 0x20000000) == 0) & 4U ) + 8;
                     iVar30 = 4 - ( uint )(( uStack_130 & 0x20000000 ) == 0);
                  } else {
                     iVar30 = 2;
                     cVar31 = '\b';
                  }
                  if (( uStack_130 & 2 ) == 0) {
                     iVar32 = 0;
                  } else {
                     iVar32 = 4;
                  }
                  if (( uStack_130 & 4 ) != 0) {
                     iVar32 = iVar32 + 4;
                  }
                  if (uVar7 != 0) {
                     uVar16 = (ulong)uVar7;
                     puVar10 = (undefined8*)Memory::alloc_static(uVar16 * 8, true);
                     if (puVar10 == (undefined8*)0x0) {
                        _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     } else {
                        puVar10[-1] = uVar16;
                        puVar21 = puVar10;
                        if (( uVar16 * 8 & 8 ) != 0) {
                           puVar21 = puVar10 + 1;
                           *puVar10 = 0;
                           if (puVar21 == puVar10 + uVar16) goto LAB_001137d8;
                        }
                        do {
                           *puVar21 = 0;
                           puVar22 = puVar21 + 2;
                           puVar21[1] = 0;
                           puVar21 = puVar22;
                        } while ( puVar22 != puVar10 + uVar16 );
                     }
                     LAB_001137d8:iVar19 = *(int*)pMVar2;
                     *(undefined8**)( piVar9 + 0x42 ) = puVar10;
                     if (iVar19 != 0) {
                        uVar16 = 0;
                        lVar13 = 0;
                        while (true) {
                           lVar26 = lVar13 * 8;
                           ( *_glad_glGenVertexArrays )(1, (long)puVar10 + lVar26 + 4);
                           ( *_glad_glBindVertexArray )(*(undefined4*)( *(long*)( piVar9 + 0x42 ) + 4 + lVar26 ));
                           ( *_glad_glGenBuffers )(1, lVar26 + *(long*)( piVar9 + 0x42 ));
                           ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( *(long*)( piVar9 + 0x42 ) + lVar13 * 8 ));
                           lVar26 = Utilities::singleton;
                           local_158 = "Mesh blend shape buffer";
                           local_168 = 0;
                           local_150 = 0x17;
                           String::parse_latin1((StrRange*)&local_168);
                           local_158 = (char*)CONCAT44(local_158._4_4_, *(undefined4*)( *(long*)( piVar9 + 0x42 ) + lVar13 * 8 ));
                           ( *_glad_glBufferData )(0x8892, uVar33 & 0xffffffff, uVar16 + local_68, ( -(uint)((*(ulong *)(piVar9 + 2) & 0x4000000) == 0) & 0xfffffffc ) + 0x88e8);
                           plVar1 = (long*)( lVar26 + 0xf8 );
                           *plVar1 = *plVar1 + ( uVar33 & 0xffffffff );
                           piVar15 = (int*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar26 + 0x68 ), (uint*)&local_158);
                           lVar26 = local_168;
                           *piVar15 = (int)uVar33;
                           if (local_168 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_168 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_168 = 0;
                                 Memory::free_static((void*)( lVar26 + -0x10 ), false);
                              }
                           }
                           if (( uStack_130 & 1 ) != 0) {
                              ( *_glad_glEnableVertexAttribArray )(3);
                              ( *_glad_glVertexAttribPointer )(3, iVar30, 0x1406, 0, cVar31, 0);
                           }
                           if (( uStack_130 & 2 ) != 0) {
                              ( *_glad_glEnableVertexAttribArray )(4);
                              ( *_glad_glVertexAttribPointer )(4, 2, 0x1403, 1, iVar32);
                           }
                           if (( *(byte*)( param_3 + 2 ) & 4 ) != 0) {
                              ( *_glad_glEnableVertexAttribArray )(5);
                              ( *_glad_glVertexAttribPointer )(5, 2, 0x1403, 1, iVar32);
                           }
                           lVar13 = lVar13 + 1;
                           uVar16 = ( ulong )(uint)((int)uVar16 + (int)uVar33);
                           if (*(uint*)pMVar2 <= (uint)lVar13) break;
                           puVar10 = *(undefined8**)( piVar9 + 0x42 );
                        };
                     }
                     ( *_glad_glBindVertexArray )(0);
                     ( *_glad_glBindBuffer )(0x8892, 0);
                  }
                  ( *_glad_glBindVertexArray )(0);
                  ( *_glad_glBindBuffer )(0x8892, 0);
                  iVar30 = *(int*)( pMVar2 + 0x10 );
                  if (iVar30 == 0) goto LAB_00112e83;
                  LAB_0011301e:AABB::merge_with((AABB*)( pMVar2 + 0x18 ));
                  iVar30 = *(int*)( pMVar2 + 0x10 );
               }
               *(undefined8*)( pMVar2 + 0x48 ) = 0;
               pvVar4 = *(void**)( pMVar2 + 8 );
               *(undefined8*)( piVar9 + 0x46 ) = local_50;
               lVar13 = Memory::realloc_static(pvVar4, ( ulong )(iVar30 + 1) << 3, false);
               uVar7 = *(uint*)( pMVar2 + 0x10 );
               plVar1 = *(long**)( pMVar2 + 0x60 );
               *(long*)( pMVar2 + 8 ) = lVar13;
               *(int**)( lVar13 + (ulong)uVar7 * 8 ) = piVar9;
               iVar30 = uVar7 + 1;
               *(int*)( pMVar2 + 0x10 ) = iVar30;
               if (( plVar1 != (long*)0x0 ) && ( puVar10 = (undefined8*)*plVar1 ),puVar10 != (undefined8*)0x0) {
                  while (true) {
                     _mesh_instance_add_surface(this, (MeshInstance*)*puVar10, pMVar2, iVar30 - 1);
                     puVar10 = (undefined8*)puVar10[1];
                     if (puVar10 == (undefined8*)0x0) break;
                     iVar30 = *(int*)( pMVar2 + 0x10 );
                  };
               }
               Dependency::changed_notify(pMVar2 + 0xa0);
               iVar30 = *(int*)( pMVar2 + 0x94 );
               if (iVar30 != 0) {
                  lVar13 = *(long*)( pMVar2 + 0x70 );
                  lVar26 = 0;
                  while (true) {
                     lVar35 = *(long*)( lVar13 + lVar26 * 8 );
                     *(undefined8*)( lVar35 + 0x68 ) = 0;
                     Dependency::changed_notify(lVar35 + 0xa0);
                     if (iVar30 <= (int)lVar26 + 1) break;
                     lVar26 = lVar26 + 1;
                  };
               }
               lVar13 = *(long*)( pMVar2 + 0x58 );
               if (( lVar13 != 0 ) && ( *(long*)( lVar13 + -8 ) != 0 )) {
                  LOCK();
                  plVar1 = (long*)( lVar13 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar13 = *(long*)( pMVar2 + 0x58 );
                     *(undefined8*)( pMVar2 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  } else {
                     *(undefined8*)( pMVar2 + 0x58 ) = 0;
                  }
               }
               lVar13 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               lVar13 = local_a8;
               if (local_a8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
               lVar13 = local_e8;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               lVar13 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               lVar13 = local_110[0];
               if (local_110[0] != 0) {
                  LOCK();
                  plVar1 = (long*)( local_110[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_110[0] = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               pvVar4 = apvStack_120[0];
               if (apvStack_120[0] != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)apvStack_120[0] + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     apvStack_120[0] = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar4 + -0x10 ), false);
                  }
               }
            } else {
               pSVar8 = (SurfaceData*)RenderingServer::get_singleton();
               local_168 = 0;
               local_158 = "";
               local_150 = 0;
               String::parse_latin1((StrRange*)&local_168);
               RenderingServer::fix_surface_compatibility(pSVar8, (String*)&local_138);
               lVar13 = local_168;
               if (local_168 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_168 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_168 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               uVar33 = uStack_130 & 0x7f800000000;
               if (uVar33 == 0x800000000) goto LAB_0011264a;
               local_168 = 0;
               local_158 = "Surface version provided (%d) does not match current version (%d).";
               local_150 = 0x42;
               String::parse_latin1((StrRange*)&local_168);
               vformat<unsigned_long,unsigned_long>((String*)&local_158, ( ulong ) & local_168, uVar33 >> 0x23);
               _err_print_error("mesh_add_surface", "drivers/gles3/storage/mesh_storage.cpp", 0xce, "Condition \"surface_version != RenderingServer::ARRAY_FLAG_FORMAT_CURRENT_VERSION\" is true.", (String*)&local_158, 0, 0);
               pcVar17 = local_158;
               if (local_158 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_158 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_158 = (char*)0x0;
                     Memory::free_static(pcVar17 + -0x10, false);
                  }
               }
               lVar13 = local_168;
               if (local_168 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_168 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_168 = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }
               }
               LAB_0011438e:RenderingServer::SurfaceData::~SurfaceData((SurfaceData*)&local_138);
            }
         } else {
            local_168 = 0;
            local_158 = ")";
            local_150 = 1;
            String::parse_latin1((StrRange*)&local_168);
            itos((long)&local_178);
            local_158 = ") does not match expected (";
            local_188 = 0;
            local_150 = 0x1b;
            String::parse_latin1((StrRange*)&local_188);
            itos((long)&local_198);
            operator+((char *)&
            local_190,(String*)"Size of vertex data provided (";
            String::operator +((String*)&local_180, (String*)&local_190);
            String::operator +((String*)&local_170, (String*)&local_180);
            String::operator +((String*)&local_158, (String*)&local_170);
            pcVar17 = "Condition \"expected_size != p_surface.vertex_data.size()\" is true.";
            uVar23 = 0xb2;
            LAB_00113bf3:_err_print_error("mesh_add_surface", "drivers/gles3/storage/mesh_storage.cpp", uVar23, pcVar17, &local_158, 0, 0);
            pcVar17 = local_158;
            if (local_158 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_158 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_158 = (char*)0x0;
                  Memory::free_static(pcVar17 + -0x10, false);
               }
            }
            lVar13 = local_170;
            if (local_170 != 0) {
               LOCK();
               plVar1 = (long*)( local_170 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_170 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_180;
            if (local_180 != 0) {
               LOCK();
               plVar1 = (long*)( local_180 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_180 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_190;
            if (local_190 != 0) {
               LOCK();
               plVar1 = (long*)( local_190 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_190 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_198;
            if (local_198 != 0) {
               LOCK();
               plVar1 = (long*)( local_198 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_198 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_188;
            if (local_188 != 0) {
               LOCK();
               plVar1 = (long*)( local_188 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_188 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_178;
            if (local_178 != 0) {
               LOCK();
               plVar1 = (long*)( local_178 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_178 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
            lVar13 = local_168;
            if (local_168 != 0) {
               LOCK();
               plVar1 = (long*)( local_168 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_168 = 0;
                  Memory::free_static((void*)( lVar13 + -0x10 ), false);
               }
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_001147ec;
      }
      if (*(int*)( pMVar2 + 0xd0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar23 = 0x6d;
      pcVar17 = "Parameter \"mesh\" is null.";
      LAB_00113a71:_err_print_error("mesh_add_surface", "drivers/gles3/storage/mesh_storage.cpp", uVar23, pcVar17, 0, 0);
      return;
   }
   LAB_001147ec:/* WARNING: Subroutine does not return */__stack_chk_fail();
   switchD_00112208_caseD_6:local_148 = __LC113;
   uStack_140 = _UNK_001257e8;
   lVar13 = uVar16 * 4;
   uVar16 = uVar16 + 1;
   local_138 = __LC114;
   uStack_130 = _UNK_001257f8;
   local_128 = __LC115;
   apvStack_120[0] = _UNK_00125808;
   iVar32 = iVar32 + *(int*)( (long)&local_138 + ( ulong )(( uint )(uVar33 >> ( ( byte ) * (undefined4*)( (long)&local_160 + lVar13 ) & 0x3f )) & 7) * 4 );
   if (( uVar33 >> ( uVar16 & 0x3f ) & 1 ) == 0) goto LAB_00112268;
   goto LAB_001121f8;
}/* Error CowData<float>::resize<false>(long) [clone .isra.0] */void CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<float> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<float> *pCVar10;
   CowData<float> *pCVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }
   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      if (param_1 == 0) {
         return;
      }
      _copy_on_write(this);
      lVar12 = 0;
      pCVar4 = (CowData<float>*)0x0;
   } else {
      lVar12 = *(long*)( lVar2 + -8 );
      if (param_1 == lVar12) {
         return;
      }
      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
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
      _copy_on_write(this);
      pCVar4 = (CowData<float>*)( lVar12 * 4 );
      if (pCVar4 != (CowData<float>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<float>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }
   }
   if (param_1 * 4 != 0) {
      uVar5 = param_1 * 4 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<float>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<float>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }
            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }
            FUN_0011b80c();
            return;
         }
         if (pCVar10 != pCVar4) {
            if (lVar12 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_00114921;
               }
               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_00114a12;
            }
            pCVar11 = this;
            iVar3 = _realloc(this, (long)pCVar10);
            if (iVar3 != 0) {
               return;
            }
         }
         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            resize<false>((long)pCVar11);
            return;
         }
         LAB_00114921:puVar8[-1] = param_1;
         return;
      }
   }
   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00114a12:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}/* GLES3::MeshStorage::_multimesh_get_buffer(RID) const */long GLES3::MeshStorage::_multimesh_get_buffer(long param_1, long param_2, ulong param_3) {
   long *plVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   byte bVar4;
   ulong uVar5;
   ushort uVar6;
   undefined8 uVar7;
   void *pvVar8;
   int iVar9;
   long lVar10;
   int iVar11;
   int iVar12;
   size_t __n;
   long lVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   uint *puVar17;
   void *pvVar18;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   void *local_80;
   undefined1 local_78[8];
   void *local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x26c ) )) {
      lVar13 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( param_2 + 600 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 8 );
      if (*(int*)( lVar13 + 0x110 ) == (int)( param_3 >> 0x20 )) {
         local_80 = (void*)0x0;
         if (( *(uint*)( lVar13 + 0x74 ) == 0 ) || ( *(int*)( lVar13 + 8 ) == 0 )) {
            *(undefined8*)( param_1 + 8 ) = 0;
         } else {
            lVar14 = *(long*)( lVar13 + 0x60 );
            if (( lVar14 == 0 ) || ( *(long*)( lVar14 + -8 ) == 0 )) {
               GLES3::Utilities::buffer_get_data((uint)local_78, 0x8892, *(uint*)( lVar13 + 0x74 ));
               CowData<float>::resize<false>((CowData<float>*)&local_80, ( ulong )(uint)(*(int*)( lVar13 + 8 ) * *(int*)( lVar13 + 0x4c )));
               CowData<float>::_copy_on_write((CowData<float>*)&local_80);
               pvVar18 = local_80;
               if (local_70 == (void*)0x0) {
                  __n = 0;
               } else {
                  __n = *(size_t*)( (long)local_70 + -8 );
               }
               memcpy(local_80, local_70, __n);
               pvVar8 = local_70;
               if (local_70 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  pvVar18 = local_80;
                  if (*plVar1 == 0) {
                     local_70 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar8 + -0x10 ), false);
                     pvVar18 = local_80;
                  }
               }
            } else {
               plVar1 = (long*)( lVar14 + -0x10 );
               do {
                  lVar14 = *plVar1;
                  pvVar18 = local_80;
                  if (lVar14 == 0) goto LAB_00114b9c;
                  LOCK();
                  lVar10 = *plVar1;
                  bVar20 = lVar14 == lVar10;
                  if (bVar20) {
                     *plVar1 = lVar14 + 1;
                     lVar10 = lVar14;
                  }
                  UNLOCK();
               } while ( !bVar20 );
               if (lVar10 != -1) {
                  local_80 = *(void**)( lVar13 + 0x60 );
                  pvVar18 = local_80;
               }
            }
            LAB_00114b9c:if (*(char*)( lVar13 + 0x10 ) == '\0') {
               if (*(byte*)( lVar13 + 0x11 ) == 0) {
                  *(void**)( param_1 + 8 ) = pvVar18;
                  goto LAB_00114ad7;
               }
               iVar9 = ( -(uint)(*(int *)(lVar13 + 0xc) == 0) & 0xfffffffc ) + 0xc;
            } else {
               iVar9 = ( -(uint)(*(int *)(lVar13 + 0xc) == 0) & 0xfffffffc ) + 0x10;
            }
            iVar9 = iVar9 + ( uint ) * (byte*)( lVar13 + 0x11 ) * 4;
            local_70 = (void*)0x0;
            CowData<float>::resize<false>((CowData<float>*)&local_70, (long)( *(int*)( lVar13 + 8 ) * iVar9 ));
            CowData<float>::_copy_on_write((CowData<float>*)&local_70);
            uVar15 = 0;
            iVar11 = 0;
            if (0 < *(int*)( lVar13 + 8 )) {
               do {
                  lVar14 = (ulong)uVar15 * 4;
                  puVar2 = (undefined8*)( (long)pvVar18 + ( ulong )(uint)(iVar11 * *(int*)( lVar13 + 0x4c )) * 4 );
                  local_58 = puVar2[2];
                  uStack_50 = puVar2[3];
                  local_68 = *puVar2;
                  uStack_60 = puVar2[1];
                  puVar2 = (undefined8*)( (long)local_70 + lVar14 );
                  *puVar2 = local_68;
                  puVar2[1] = uStack_60;
                  puVar2[2] = local_58;
                  puVar2[3] = uStack_50;
                  if (*(int*)( lVar13 + 0xc ) == 1) {
                     puVar2 = (undefined8*)( (long)pvVar18 + ( ulong )(uint)(iVar11 * *(int*)( lVar13 + 0x4c )) * 4 + 0x20 );
                     uVar7 = puVar2[1];
                     puVar3 = (undefined8*)( (long)local_70 + lVar14 + 0x20 );
                     *puVar3 = *puVar2;
                     puVar3[1] = uVar7;
                  }
                  bVar4 = *(byte*)( lVar13 + 0x10 );
                  if (bVar4 != 0) {
                     puVar17 = (uint*)( lVar14 + 0x30 + ( -(ulong)(*(int *)(lVar13 + 0xc) == 0) & 0xfffffffffffffff0 ) + (long)local_70 );
                     uVar5 = *(ulong*)( (long)pvVar18 + ( ( ulong )(uint)(iVar11 * *(int*)( lVar13 + 0x4c )) + ( ulong ) * (uint*)( lVar13 + 0x50 ) ) * 4 );
                     uVar16 = (uint)uVar5;
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c00 ) == 0) {
                        if (( uVar5 & 0x3ff ) != 0) {
                           uVar16 = ( uVar16 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( (ushort)uVar5 & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     *puVar17 = uVar19;
                     uVar16 = ( uint )(uVar5 >> 0x10);
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c000000 ) == 0) {
                        if (( uVar5 & 0x3ff0000 ) != 0) {
                           uVar16 = ( uVar16 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( ( ushort )(uVar5 >> 0x10) & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     puVar17[1] = uVar19;
                     uVar16 = ( uint )(uVar5 >> 0x20);
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c0000000000 ) == 0) {
                        if (( uVar5 & 0x3ff00000000 ) != 0) {
                           uVar16 = ( uVar16 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( ( ushort )(uVar5 >> 0x20) & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     puVar17[2] = uVar19;
                     uVar6 = ( ushort )(uVar5 >> 0x30);
                     uVar16 = (uint)uVar6;
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c00000000000000 ) == 0) {
                        if (( uVar5 & 0x3ff000000000000 ) != 0) {
                           uVar16 = ( uVar6 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( uVar6 & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     puVar17[3] = uVar19;
                  }
                  if (*(char*)( lVar13 + 0x11 ) != '\0') {
                     puVar17 = (uint*)( ( -(ulong)(*(int *)(lVar13 + 0xc) == 0) & 0xfffffffffffffff0 ) + 0x30 + (ulong)bVar4 * 0x10 + lVar14 + (long)local_70 );
                     uVar5 = *(ulong*)( (long)pvVar18 + ( ( ulong )(uint)(iVar11 * *(int*)( lVar13 + 0x4c )) + ( ulong ) * (uint*)( lVar13 + 0x54 ) ) * 4 );
                     uVar16 = (uint)uVar5;
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c00 ) == 0) {
                        if (( uVar5 & 0x3ff ) != 0) {
                           uVar16 = ( uVar16 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( (ushort)uVar5 & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     *puVar17 = uVar19;
                     uVar16 = ( uint )(uVar5 >> 0x10);
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c000000 ) == 0) {
                        if (( uVar5 & 0x3ff0000 ) != 0) {
                           uVar16 = ( uVar16 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( ( ushort )(uVar5 >> 0x10) & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     puVar17[1] = uVar19;
                     uVar16 = ( uint )(uVar5 >> 0x20);
                     uVar19 = ( uVar16 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c0000000000 ) == 0) {
                        if (( uVar5 & 0x3ff00000000 ) != 0) {
                           uVar16 = ( uVar16 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar16 & 0x400 ) == 0) {
                              do {
                                 uVar16 = uVar16 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar16 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar19 = ( ( uVar16 & 0x3fe ) << 0xd | uVar19 ) + iVar12;
                        }
                     } else if (( ( ushort )(uVar5 >> 0x20) & 0x7c00 ) == 0x7c00) {
                        uVar19 = ( ( uVar16 & 0x3ff ) << 0xd | uVar19 ) + 0x7f800000;
                     } else {
                        uVar19 = uVar19 + ( ( uVar16 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     puVar17[2] = uVar19;
                     uVar6 = ( ushort )(uVar5 >> 0x30);
                     uVar19 = (uint)uVar6;
                     uVar16 = ( uVar19 & 0x8000 ) * 0x10000;
                     if (( uVar5 & 0x7c00000000000000 ) == 0) {
                        if (( uVar5 & 0x3ff000000000000 ) != 0) {
                           uVar19 = ( uVar6 & 0xffff03ff ) * 2;
                           iVar12 = 0;
                           if (( uVar19 & 0x400 ) == 0) {
                              do {
                                 uVar19 = uVar19 * 2;
                                 iVar12 = iVar12 + 1;
                              } while ( ( uVar19 & 0x400 ) == 0 );
                              iVar12 = ( 0x70 - iVar12 ) * 0x800000;
                           } else {
                              iVar12 = 0x38000000;
                           }
                           uVar16 = ( ( uVar19 & 0x3fe ) << 0xd | uVar16 ) + iVar12;
                        }
                     } else if (( uVar6 & 0x7c00 ) == 0x7c00) {
                        uVar16 = ( ( uVar19 & 0x3ff ) << 0xd | uVar16 ) + 0x7f800000;
                     } else {
                        uVar16 = uVar16 + ( ( uVar19 & 0x7fff ) + 0x1c000 ) * 0x2000;
                     }
                     puVar17[3] = uVar16;
                  }
                  iVar11 = iVar11 + 1;
                  uVar15 = uVar15 + iVar9;
               } while ( iVar11 < *(int*)( lVar13 + 8 ) );
            }
            *(void**)( param_1 + 8 ) = local_70;
            if (pvVar18 != (void*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)pvVar18 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( (long)local_80 + -0x10 ), false);
               }
            }
         }
         goto LAB_00114ad7;
      }
      if (*(int*)( lVar13 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("_multimesh_get_buffer", "drivers/gles3/storage/mesh_storage.cpp", 0x806, "Parameter \"multimesh\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_00114ad7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::_multimesh_set_buffer(RID, Vector<float> const&) */void GLES3::MeshStorage::_multimesh_set_buffer(MeshStorage *this, ulong param_2, long param_3) {
   CowData<float> *this_00;
   long *plVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   byte bVar4;
   float fVar5;
   undefined8 uVar6;
   char cVar7;
   int iVar8;
   int iVar9;
   void *pvVar10;
   long lVar11;
   char *pcVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   undefined8 uVar16;
   size_t __n;
   long *plVar17;
   ushort uVar18;
   ushort uVar19;
   uint uVar20;
   long lVar21;
   long lVar22;
   ushort uVar23;
   AABB *pAVar24;
   uint uVar25;
   uint *puVar26;
   ulong uVar27;
   int iVar28;
   long in_FS_OFFSET;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   undefined4 uVar33;
   undefined4 uVar34;
   undefined4 uVar35;
   undefined4 uVar36;
   undefined1 local_128[8];
   void *local_120;
   undefined8 local_118;
   float local_110;
   undefined8 local_108;
   float local_100;
   long local_f8;
   float local_f0;
   float local_e8[4];
   long local_d8;
   float fStack_d0;
   float fStack_cc;
   float fStack_c8;
   float fStack_c4;
   undefined8 local_b8;
   float local_b0;
   undefined8 local_ac;
   float local_a4;
   long local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float fStack_84;
   undefined8 local_78;
   undefined4 uStack_70;
   undefined4 uStack_6c;
   undefined4 uStack_68;
   undefined4 uStack_64;
   undefined8 uStack_60;
   undefined4 uStack_58;
   float local_54[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      plVar17 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 ) );
      if ((int)plVar17[0x22] == (int)( param_2 >> 0x20 )) {
         bVar4 = *(byte*)( plVar17 + 2 );
         lVar21 = plVar17[0xc];
         if (( bVar4 == 0 ) && ( *(char*)( (long)plVar17 + 0x11 ) == '\0' )) {
            lVar14 = *(long*)( param_3 + 8 );
            if (( lVar21 == 0 ) || ( *(long*)( lVar21 + -8 ) == 0 )) {
               LAB_001154dd:lVar21 = lVar14;
               if (lVar14 != 0) goto LAB_001154e9;
               lVar22 = 0;
            } else {
               if (lVar14 != lVar21) {
                  CowData<float>::_ref((CowData<float>*)( plVar17 + 0xc ), (CowData*)( param_3 + 8 ));
                  lVar14 = *(long*)( param_3 + 8 );
                  goto LAB_001154dd;
               }
               LAB_001154e9:lVar22 = *(long*)( lVar21 + -8 );
               lVar14 = lVar21;
            }
            if ((int)plVar17[1] * *(int*)( (long)plVar17 + 0x4c ) != lVar22) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar16 = 0x7df;
                  pcVar12 = "Condition \"p_buffer.size() != (multimesh->instances * (int)multimesh->stride_cache)\" is true.";
                  goto LAB_001161f9;
               }
               goto LAB_0011649a;
            }
            ( *_glad_glBindBuffer )(0x8892);
            if (*(long*)( param_3 + 8 ) == 0) {
               lVar21 = 0;
            } else {
               lVar21 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) << 2;
            }
         } else {
            iVar28 = (int)plVar17[1];
            if (( ( lVar21 == 0 ) || ( uVar13 = (uint)bVar4 * (long*)( lVar21 + -8 ) < 1 ) ) && ( uVar13 = iVar28 != 0 )) {
               CowData<float>::resize<false>((CowData<float>*)( plVar17 + 0xc ), ( ulong )(uint)(iVar28 * *(int*)( (long)plVar17 + 0x4c )));
               CowData<float>::_copy_on_write((CowData<float>*)( plVar17 + 0xc ));
               pvVar10 = (void*)plVar17[0xc];
               if (*(char*)( (long)plVar17 + 0x49 ) == '\0') {
                  memset(pvVar10, 0, (long)(int)plVar17[1] * ( ulong ) * (uint*)( (long)plVar17 + 0x4c ) * 4);
               } else {
                  GLES3::Utilities::buffer_get_data((uint)local_128, 0x8892, *(uint*)( (long)plVar17 + 0x74 ));
                  if (local_120 == (void*)0x0) {
                     __n = 0;
                  } else {
                     __n = *(size_t*)( (long)local_120 + -8 );
                  }
                  memcpy(pvVar10, local_120, __n);
                  pvVar10 = local_120;
                  if (local_120 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_120 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_120 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar10 + -0x10 ), false);
                     }
                  }
               }
               iVar28 = (int)plVar17[1];
               iVar9 = iVar28 + 0x3fe;
               if (-1 < iVar28 + 0x1ff) {
                  iVar9 = iVar28 + 0x1ff;
               }
               uVar27 = ( ulong )(uint)(iVar9 >> 9);
               if (uVar27 == 0) {
                  plVar17[0xd] = 0;
               } else {
                  pvVar10 = (void*)Memory::alloc_static(uVar27, true);
                  if (pvVar10 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0);
                  } else {
                     *(ulong*)( (long)pvVar10 + -8 ) = uVar27;
                  }
                  plVar17[0xd] = (long)pvVar10;
                  memset(pvVar10, 0, uVar27);
                  iVar28 = (int)plVar17[1];
               }
               *(undefined4*)( plVar17 + 0xe ) = 0;
               uVar13 = ( uint ) * (byte*)( plVar17 + 2 );
            }
            iVar9 = ( -(uint)(*(int *)((long)plVar17 + 0xc) == 0) & 0xfffffffc ) + 0xc + ( uVar13 + *(byte*)( (long)plVar17 + 0x11 ) ) * 4;
            lVar21 = *(long*)( param_3 + 8 );
            if (lVar21 == 0) {
               lVar14 = 0;
            } else {
               lVar14 = *(long*)( lVar21 + -8 );
            }
            if (iVar28 * iVar9 != lVar14) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar16 = 0x7af;
                  pcVar12 = "Condition \"p_buffer.size() != (multimesh->instances * (int)old_stride)\" is true.";
                  goto LAB_001161f9;
               }
               goto LAB_0011649a;
            }
            this_00 = (CowData<float>*)( plVar17 + 0xc );
            if (lVar21 != plVar17[0xc]) {
               CowData<float>::_ref(this_00, (CowData*)( param_3 + 8 ));
            }
            CowData<float>::_copy_on_write(this_00);
            iVar28 = (int)plVar17[1];
            lVar21 = plVar17[0xc];
            if (0 < iVar28) {
               uVar27 = 0;
               iVar8 = 0;
               do {
                  lVar14 = uVar27 * 4;
                  puVar2 = (undefined8*)( lVar21 + lVar14 );
                  uVar16 = puVar2[2];
                  uStack_60 = puVar2[3];
                  local_78 = *puVar2;
                  uVar6 = puVar2[1];
                  puVar2 = (undefined8*)( lVar21 + ( ulong )(uint)(iVar8 * *(int*)( (long)plVar17 + 0x4c )) * 4 );
                  uStack_70 = (undefined4)uVar6;
                  uStack_6c = ( undefined4 )((ulong)uVar6 >> 0x20);
                  uStack_68 = (undefined4)uVar16;
                  uStack_64 = ( undefined4 )((ulong)uVar16 >> 0x20);
                  *puVar2 = local_78;
                  puVar2[1] = uVar6;
                  puVar2[2] = uVar16;
                  puVar2[3] = uStack_60;
                  if (*(int*)( (long)plVar17 + 0xc ) == 1) {
                     puVar2 = (undefined8*)( lVar21 + 0x20 + lVar14 );
                     uVar16 = puVar2[1];
                     puVar3 = (undefined8*)( lVar21 + 0x20 + ( ulong )(uint)(iVar8 * *(int*)( (long)plVar17 + 0x4c )) * 4 );
                     *puVar3 = *puVar2;
                     puVar3[1] = uVar16;
                  }
                  if ((char)plVar17[2] != '\0') {
                     puVar26 = (uint*)( lVar14 + 0x30 + ( -(ulong)(*(int *)((long)plVar17 + 0xc) == 0) & 0xfffffffffffffff0 ) + lVar21 );
                     uVar13 = *puVar26;
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar23 = 0;
                        if (0x38000000 < uVar20) {
                           uVar23 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | ( ushort )(( uVar13 & 0x7fffff ) >> 0xd) | ( ushort )(uVar20 + 0xc8000000 >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar20 != 0x7f800000 )) {
                           uVar23 = 0;
                        } else {
                           uVar23 = 0x3ff;
                        }
                        uVar23 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | uVar23 | 0x7c00;
                     }
                     uVar13 = puVar26[1];
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar18 = 0;
                        if (0x38000000 < uVar20) {
                           uVar18 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | ( ushort )(( uVar13 & 0x7fffff ) >> 0xd) | ( ushort )(uVar20 + 0xc8000000 >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar20 != 0x7f800000 )) {
                           uVar18 = 0;
                        } else {
                           uVar18 = 0x3ff;
                        }
                        uVar18 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | uVar18 | 0x7c00;
                     }
                     uVar13 = puVar26[2];
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar19 = 0;
                        if (0x38000000 < uVar20) {
                           uVar19 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | ( ushort )(( uVar13 & 0x7fffff ) >> 0xd) | ( ushort )(uVar20 + 0xc8000000 >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar20 != 0x7f800000 )) {
                           uVar19 = 0;
                        } else {
                           uVar19 = 0x3ff;
                        }
                        uVar19 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | uVar19 | 0x7c00;
                     }
                     uVar13 = puVar26[3];
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar15 = 0;
                        if (0x38000000 < uVar20) {
                           uVar15 = ( ulong )(uVar20 + 0xc8000000 >> 0xd | ( uVar13 >> 0x1f ) << 0xf | ( uVar13 & 0x7fffff ) >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar25 = uVar20 != 0x7f800000 )) {
                           uVar25 = 0;
                        }
                        uVar15 = ( ulong )(( uVar13 >> 0x1f ) << 0xf | uVar25) | 0x7c00;
                     }
                     *(ulong*)( lVar21 + ( ( ulong )(uint)(iVar8 * *(int*)( (long)plVar17 + 0x4c )) + ( ulong ) * (uint*)( plVar17 + 10 ) ) * 4 ) = (ulong)CONCAT24(uVar19, CONCAT22(uVar18, uVar23)) | uVar15 << 0x30;
                  }
                  if (*(char*)( (long)plVar17 + 0x11 ) != '\0') {
                     puVar26 = (uint*)( ( -(ulong)(*(int *)((long)plVar17 + 0xc) == 0) & 0xfffffffffffffff0 ) + 0x30 + lVar14 + ( ulong ) * (byte*)( plVar17 + 2 ) * 0x10 + lVar21 );
                     uVar13 = *puVar26;
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar23 = 0;
                        if (0x38000000 < uVar20) {
                           uVar23 = ( ushort )(uVar20 + 0xc8000000 >> 0xd) | ( ushort )(( uVar13 >> 0x1f ) << 0xf) | ( ushort )(( uVar13 & 0x7fffff ) >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar23 = uVar20 != 0x7f800000 )) {
                           uVar23 = 0;
                        }
                        uVar23 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | uVar23 | 0x7c00;
                     }
                     uVar13 = puVar26[1];
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar18 = 0;
                        if (0x38000000 < uVar20) {
                           uVar18 = ( ushort )(uVar20 + 0xc8000000 >> 0xd) | ( ushort )(( uVar13 >> 0x1f ) << 0xf) | ( ushort )(( uVar13 & 0x7fffff ) >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar18 = uVar20 != 0x7f800000 )) {
                           uVar18 = 0;
                        }
                        uVar18 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | uVar18 | 0x7c00;
                     }
                     uVar13 = puVar26[2];
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar19 = 0;
                        if (0x38000000 < uVar20) {
                           uVar19 = ( ushort )(uVar20 + 0xc8000000 >> 0xd) | ( ushort )(( uVar13 >> 0x1f ) << 0xf) | ( ushort )(( uVar13 & 0x7fffff ) >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar19 = uVar20 != 0x7f800000 )) {
                           uVar19 = 0;
                        }
                        uVar19 = ( ushort )(( uVar13 >> 0x1f ) << 0xf) | uVar19 | 0x7c00;
                     }
                     uVar13 = puVar26[3];
                     uVar20 = uVar13 & 0x7f800000;
                     if (uVar20 < 0x47800000) {
                        uVar15 = 0;
                        if (0x38000000 < uVar20) {
                           uVar15 = ( ulong )(uVar20 + 0xc8000000 >> 0xd | ( uVar13 >> 0x1f ) << 0xf | ( uVar13 & 0x7fffff ) >> 0xd);
                        }
                     } else {
                        if (( ( uVar13 & 0x7fffff ) == 0 ) || ( uVar20 != 0x7f800000 )) {
                           uVar20 = 0;
                        } else {
                           uVar20 = 0x3ff;
                        }
                        uVar15 = ( ulong )(( uVar13 >> 0x1f ) << 0xf | uVar20) | 0x7c00;
                     }
                     *(ulong*)( lVar21 + ( ( ulong )(uint)(iVar8 * *(int*)( (long)plVar17 + 0x4c )) + ( ulong ) * (uint*)( (long)plVar17 + 0x54 ) ) * 4 ) = (ulong)CONCAT24(uVar19, CONCAT22(uVar18, uVar23)) | uVar15 << 0x30;
                  }
                  iVar28 = (int)plVar17[1];
                  iVar8 = iVar8 + 1;
                  uVar27 = ( ulong )(uint)((int)uVar27 + iVar9);
               } while ( iVar8 < iVar28 );
            }
            CowData<float>::resize<false>(this_00, (long)( iVar28 * *(int*)( (long)plVar17 + 0x4c ) ));
            lVar14 = plVar17[0xc];
            ( *_glad_glBindBuffer )(0x8892);
            if (plVar17[0xc] == 0) {
               lVar21 = 0;
            } else {
               lVar21 = *(long*)( plVar17[0xc] + -8 ) << 2;
            }
         }
         ( *_glad_glBufferData )(0x8892, lVar21, lVar14, 0x88e4);
         ( *_glad_glBindBuffer )(0x8892);
         *(undefined1*)( (long)plVar17 + 0x49 ) = 1;
         if (( ( ( plVar17[0xc] == 0 ) || ( *(long*)( plVar17[0xc] + -8 ) == 0 ) ) && ( (char)plVar17[2] == '\0' ) ) && ( *(char*)( (long)plVar17 + 0x11 ) == '\0' )) {
            if (*plVar17 != 0) {
               local_78 = 0;
               uStack_70 = 0;
               uStack_6c = 0;
               uStack_68 = 0;
               lVar21 = *(long*)( param_3 + 8 );
               uStack_64 = 0;
               cVar7 = AABB::operator ==((AABB*)( plVar17 + 6 ), (AABB*)&local_78);
               if (cVar7 != '\0') {
                  lVar14 = plVar17[1];
                  if (*plVar17 == 0) {
                     _err_print_error("_multimesh_re_create_aabb", "drivers/gles3/storage/mesh_storage.cpp", 0x690, "Condition \"multimesh->mesh.is_null()\" is true.", 0, 0);
                  } else {
                     local_78 = 0;
                     uStack_70 = 0;
                     uStack_6c = 0;
                     uStack_68 = 0;
                     uStack_64 = 0;
                     cVar7 = AABB::operator !=((AABB*)( plVar17 + 6 ), (AABB*)&local_78);
                     if (cVar7 == '\0') {
                        local_d8 = 0;
                        fStack_d0 = 0.0;
                        fStack_cc = 0.0;
                        fStack_c8 = 0.0;
                        fStack_c4 = 0.0;
                        ( **(code**)( *(long*)this + 0x98 ) )(&local_b8, this, *plVar17, 0);
                        if (0 < (int)lVar14) {
                           iVar28 = 0;
                           uVar33 = __LC96;
                           uVar34 = _UNK_00125794;
                           uVar35 = _UNK_00125798;
                           uVar36 = _UNK_0012579c;
                           do {
                              uStack_70 = uVar34;
                              local_54[2] = 0.0;
                              puVar2 = (undefined8*)( lVar21 + ( ulong )(uint)(iVar28 * *(int*)( (long)plVar17 + 0x4c )) * 4 );
                              uStack_64 = uVar33;
                              uStack_60 = CONCAT44(uVar35, uVar34);
                              uStack_58 = uVar36;
                              local_54[0] = *(float*)( (long)puVar2 + 0xc );
                              local_54[1] = *(float*)( (long)puVar2 + 0x1c );
                              if (*(int*)( (long)plVar17 + 0xc ) == 1) {
                                 uStack_68 = *(undefined4*)( (long)puVar2 + 0x14 );
                                 uStack_64 = *(undefined4*)( puVar2 + 3 );
                                 uStack_60 = puVar2[4];
                                 uStack_58 = *(undefined4*)( puVar2 + 5 );
                                 local_54[2] = (float)*(undefined4*)( (long)puVar2 + 0x2c );
                                 local_78 = *puVar2;
                                 uStack_70 = *(undefined4*)( puVar2 + 1 );
                                 uStack_6c = *(undefined4*)( puVar2 + 2 );
                              } else {
                                 local_78 = *puVar2;
                                 uStack_6c = (undefined4)puVar2[2];
                                 uStack_68 = ( undefined4 )((ulong)puVar2[2] >> 0x20);
                              }
                              lVar22 = 0;
                              local_f8 = 0;
                              local_f0 = 0.0;
                              local_118 = local_b8;
                              local_110 = local_b0;
                              local_108 = CONCAT44((float)( (ulong)local_ac >> 0x20 ) + (float)( (ulong)local_b8 >> 0x20 ), (float)local_ac + (float)local_b8);
                              for (int i = 0; i < 3; i++) {
                                 local_e8[i] = 0;
                              }
                              local_100 = local_a4 + local_b0;
                              pAVar24 = (AABB*)&local_78;
                              if (iVar28 == 0) {
                                 do {
                                    fVar30 = *(float*)( (long)local_54 + lVar22 );
                                    lVar11 = 0;
                                    fVar32 = fVar30;
                                    do {
                                       fVar31 = *(float*)( (long)&local_118 + lVar11 ) * *(float*)( pAVar24 + lVar11 );
                                       fVar29 = *(float*)( pAVar24 + lVar11 ) * *(float*)( (long)&local_108 + lVar11 );
                                       fVar5 = fVar29;
                                       if (fVar31 < fVar29) {
                                          fVar5 = fVar31;
                                          fVar31 = fVar29;
                                       }
                                       fVar32 = fVar32 + fVar31;
                                       fVar30 = fVar30 + fVar5;
                                       lVar11 = lVar11 + 4;
                                    } while ( lVar11 != 0xc );
                                    *(float*)( (long)local_e8 + lVar22 ) = fVar32;
                                    pAVar24 = pAVar24 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar22 ) = fVar30;
                                    lVar22 = lVar22 + 4;
                                 } while ( lVar22 != 0xc );
                                 local_98 = local_f8;
                                 fStack_c4 = local_e8[2] - local_f0;
                                 fStack_cc = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_c8 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 local_d8 = local_f8;
                                 fStack_d0 = local_f0;
                                 fStack_8c = fStack_cc;
                                 fStack_88 = fStack_c8;
                                 fStack_84 = fStack_c4;
                              } else {
                                 do {
                                    fVar30 = *(float*)( (long)local_54 + lVar22 );
                                    lVar11 = 0;
                                    fVar32 = fVar30;
                                    do {
                                       fVar31 = *(float*)( (long)&local_118 + lVar11 ) * *(float*)( pAVar24 + lVar11 );
                                       fVar29 = *(float*)( pAVar24 + lVar11 ) * *(float*)( (long)&local_108 + lVar11 );
                                       fVar5 = fVar29;
                                       if (fVar31 < fVar29) {
                                          fVar5 = fVar31;
                                          fVar31 = fVar29;
                                       }
                                       fVar32 = fVar32 + fVar31;
                                       fVar30 = fVar30 + fVar5;
                                       lVar11 = lVar11 + 4;
                                    } while ( lVar11 != 0xc );
                                    *(float*)( (long)local_e8 + lVar22 ) = fVar32;
                                    pAVar24 = pAVar24 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar22 ) = fVar30;
                                    lVar22 = lVar22 + 4;
                                 } while ( lVar22 != 0xc );
                                 fStack_84 = local_e8[2] - local_f0;
                                 fStack_8c = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_88 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 local_98 = local_f8;
                                 fStack_90 = local_f0;
                                 AABB::merge_with((AABB*)&local_d8);
                                 uVar33 = __LC96;
                                 uVar34 = _UNK_00125794;
                                 uVar35 = _UNK_00125798;
                                 uVar36 = _UNK_0012579c;
                              }
                              iVar28 = iVar28 + 1;
                           } while ( (int)lVar14 != iVar28 );
                        }
                        plVar17[5] = CONCAT44(fStack_c4, fStack_c8);
                        plVar17[3] = local_d8;
                        plVar17[4] = CONCAT44(fStack_cc, fStack_d0);
                     }
                  }
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Dependency::changed_notify(plVar17 + 0x1c, 0);
                     return;
                  }
                  goto LAB_0011649a;
               }
            }
         } else {
            iVar9 = (int)plVar17[1] + 0x1ff;
            iVar28 = (int)plVar17[1] + 0x3fe;
            if (-1 < iVar9) {
               iVar28 = iVar9;
            }
            if (iVar28 >> 9 != 0) {
               memset((void*)plVar17[0xd], 0, ( ulong )(uint)(iVar28 >> 9));
            }
            *(undefined4*)( plVar17 + 0xe ) = 0;
            *(undefined1*)( plVar17 + 9 ) = 1;
            if ((char)plVar17[0xf] == '\0') {
               plVar17[0x10] = *(long*)( this + 0x2a8 );
               *(long**)( this + 0x2a8 ) = plVar17;
               *(undefined1*)( plVar17 + 0xf ) = 1;
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_0011649a;
      }
      if ((int)plVar17[0x22] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar16 = 0x7a5;
      pcVar12 = "Parameter \"multimesh\" is null.";
      LAB_001161f9:_err_print_error("_multimesh_set_buffer", "drivers/gles3/storage/mesh_storage.cpp", uVar16, pcVar12, 0, 0);
      return;
   }
   LAB_0011649a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_get_custom_data(RID, int) const */undefined1[16];GLES3::MeshStorage::_multimesh_instance_get_custom_data (MeshStorage *this,ulong param_2,int param_3) {
   long *plVar1;
   ushort uVar2;
   undefined1 auVar3[16];
   int iVar4;
   uint uVar5;
   void *pvVar6;
   uint uVar7;
   char *pcVar8;
   uint uVar9;
   long lVar10;
   undefined8 uVar11;
   size_t __n;
   long lVar12;
   uint uVar13;
   int iVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined1 local_38[8];
   void *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x26c ) <= (uint)param_2 )) {
      LAB_001169e0:uVar11 = 0x78d;
      pcVar8 = "Parameter \"multimesh\" is null.";
   } else {
      lVar12 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar12 + 0x110 ) != (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar12 + 0x110 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
         goto LAB_001169e0;
      }
      iVar14 = *(int*)( lVar12 + 8 );
      if (( param_3 < 0 ) || ( iVar14 <= param_3 )) {
         _err_print_index_error("_multimesh_instance_get_custom_data", "drivers/gles3/storage/mesh_storage.cpp", 0x78e, (long)param_3, (long)iVar14, "p_index", "multimesh->instances", "", false, false);
         local_48 = 0;
         uStack_40 = 0x3f80000000000000;
         goto LAB_001166fe;
      }
      if (*(char*)( lVar12 + 0x11 ) != '\0') {
         lVar10 = *(long*)( lVar12 + 0x60 );
         if (( lVar10 == 0 ) || ( *(long*)( lVar10 + -8 ) < 1 )) {
            CowData<float>::resize<false>((CowData<float>*)( lVar12 + 0x60 ), ( ulong )(uint)(iVar14 * *(int*)( lVar12 + 0x4c )));
            CowData<float>::_copy_on_write((CowData<float>*)( lVar12 + 0x60 ));
            pvVar6 = *(void**)( lVar12 + 0x60 );
            if (*(char*)( lVar12 + 0x49 ) == '\0') {
               memset(pvVar6, 0, (long)*(int*)( lVar12 + 8 ) * ( ulong ) * (uint*)( lVar12 + 0x4c ) * 4);
            } else {
               GLES3::Utilities::buffer_get_data((uint)local_38, 0x8892, *(uint*)( lVar12 + 0x74 ));
               if (local_30 == (void*)0x0) {
                  __n = 0;
               } else {
                  __n = *(size_t*)( (long)local_30 + -8 );
               }
               memcpy(pvVar6, local_30, __n);
               pvVar6 = local_30;
               if (local_30 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_30 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_30 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar6 + -0x10 ), false);
                  }
               }
            }
            iVar4 = *(int*)( lVar12 + 8 ) + 0x1ff;
            iVar14 = *(int*)( lVar12 + 8 ) + 0x3fe;
            if (-1 < iVar4) {
               iVar14 = iVar4;
            }
            uVar16 = ( ulong )(uint)(iVar14 >> 9);
            if (uVar16 == 0) {
               *(undefined8*)( lVar12 + 0x68 ) = 0;
            } else {
               pvVar6 = (void*)Memory::alloc_static(uVar16, true);
               if (pvVar6 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
               } else {
                  *(ulong*)( (long)pvVar6 + -8 ) = uVar16;
               }
               *(void**)( lVar12 + 0x68 ) = pvVar6;
               memset(pvVar6, 0, uVar16);
            }
            *(undefined4*)( lVar12 + 0x70 ) = 0;
            lVar10 = *(long*)( lVar12 + 0x60 );
         }
         uVar16 = *(ulong*)( lVar10 + ( ( ulong )(uint)(param_3 * *(int*)( lVar12 + 0x4c )) + ( ulong ) * (uint*)( lVar12 + 0x54 ) ) * 4 );
         uVar7 = (uint)uVar16;
         uVar9 = ( uVar7 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c00 ) == 0) {
            if (( uVar16 & 0x3ff ) != 0) {
               uVar7 = ( uVar7 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar7 & 0x400 ) == 0) {
                  do {
                     uVar7 = uVar7 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar7 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar9 = ( ( uVar7 & 0x3fe ) << 0xd | uVar9 ) + iVar14;
            }
         } else if (( (ushort)uVar16 & 0x7c00 ) == 0x7c00) {
            uVar9 = ( ( uVar7 & 0x3ff ) << 0xd | uVar9 ) + 0x7f800000;
         } else {
            uVar9 = uVar9 + ( ( uVar7 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         uVar13 = ( uint )(uVar16 >> 0x10);
         uVar7 = ( uVar13 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c000000 ) == 0) {
            if (( uVar16 & 0x3ff0000 ) != 0) {
               uVar13 = ( uVar13 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar13 & 0x400 ) == 0) {
                  do {
                     uVar13 = uVar13 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar13 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar7 = ( ( uVar13 & 0x3fe ) << 0xd | uVar7 ) + iVar14;
            }
         } else if (( ( ushort )(uVar16 >> 0x10) & 0x7c00 ) == 0x7c00) {
            uVar7 = ( ( uVar13 & 0x3ff ) << 0xd | uVar7 ) + 0x7f800000;
         } else {
            uVar7 = uVar7 + ( ( uVar13 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         uVar15 = ( uint )(uVar16 >> 0x20);
         uVar13 = ( uVar15 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c0000000000 ) == 0) {
            if (( uVar16 & 0x3ff00000000 ) != 0) {
               uVar15 = ( uVar15 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar15 & 0x400 ) == 0) {
                  do {
                     uVar15 = uVar15 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar15 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar13 = ( ( uVar15 & 0x3fe ) << 0xd | uVar13 ) + iVar14;
            }
         } else if (( ( ushort )(uVar16 >> 0x20) & 0x7c00 ) == 0x7c00) {
            uVar13 = ( ( uVar15 & 0x3ff ) << 0xd | uVar13 ) + 0x7f800000;
         } else {
            uVar13 = uVar13 + ( ( uVar15 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         uVar2 = ( ushort )(uVar16 >> 0x30);
         uVar5 = (uint)uVar2;
         uVar15 = ( uVar5 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c00000000000000 ) == 0) {
            if (( uVar16 & 0x3ff000000000000 ) != 0) {
               uVar5 = ( uVar2 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar5 & 0x400 ) == 0) {
                  do {
                     uVar5 = uVar5 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar5 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar15 = ( ( uVar5 & 0x3fe ) << 0xd | uVar15 ) + iVar14;
            }
         } else if (( uVar2 & 0x7c00 ) == 0x7c00) {
            uVar15 = ( ( uVar5 & 0x3ff ) << 0xd | uVar15 ) + 0x7f800000;
         } else {
            uVar15 = uVar15 + ( ( uVar5 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         local_48 = CONCAT44(uVar7, uVar9);
         uStack_40 = CONCAT44(uVar15, uVar13);
         goto LAB_001166fe;
      }
      uVar11 = 0x78f;
      pcVar8 = "Condition \"!multimesh->uses_custom_data\" is true. Returning: Color()";
   }
   _err_print_error("_multimesh_instance_get_custom_data", "drivers/gles3/storage/mesh_storage.cpp", uVar11, pcVar8, 0, 0);
   local_48 = 0;
   uStack_40 = 0x3f80000000000000;
   LAB_001166fe:auVar3._8_8_ = uStack_40;
   auVar3._0_8_ = local_48;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return auVar3;
}/* GLES3::MeshStorage::_multimesh_instance_get_transform_2d(RID, int) const */undefined8 *GLES3::MeshStorage::_multimesh_instance_get_transform_2d(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   int iVar7;
   void *pvVar8;
   char *pcVar9;
   long lVar10;
   undefined8 uVar11;
   size_t __n;
   long lVar12;
   int iVar13;
   long in_FS_OFFSET;
   undefined1 local_48[8];
   void *local_40;
   long local_30;
   ulong __n_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x26c ) <= (uint)param_3 )) {
      LAB_00116d60:uVar11 = 0x75c;
      pcVar9 = "Parameter \"multimesh\" is null.";
   } else {
      lVar12 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( param_2 + 600 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 8 );
      if (*(int*)( lVar12 + 0x110 ) != (int)( param_3 >> 0x20 )) {
         if (*(int*)( lVar12 + 0x110 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
         goto LAB_00116d60;
      }
      iVar13 = *(int*)( lVar12 + 8 );
      if (( param_4 < 0 ) || ( iVar13 <= param_4 )) {
         _err_print_index_error("_multimesh_instance_get_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x75d, (long)param_4, (long)iVar13, "p_index", "multimesh->instances", "", false, false);
         *param_1 = 0x3f800000;
         param_1[1] = 0x3f80000000000000;
         param_1[2] = 0;
         goto LAB_00116c45;
      }
      if (*(int*)( lVar12 + 0xc ) == 0) {
         lVar10 = *(long*)( lVar12 + 0x60 );
         if (( lVar10 == 0 ) || ( *(long*)( lVar10 + -8 ) < 1 )) {
            CowData<float>::resize<false>((CowData<float>*)( lVar12 + 0x60 ), ( ulong )(uint)(iVar13 * *(int*)( lVar12 + 0x4c )));
            CowData<float>::_copy_on_write((CowData<float>*)( lVar12 + 0x60 ));
            pvVar8 = *(void**)( lVar12 + 0x60 );
            if (*(char*)( lVar12 + 0x49 ) == '\0') {
               memset(pvVar8, 0, (long)*(int*)( lVar12 + 8 ) * ( ulong ) * (uint*)( lVar12 + 0x4c ) * 4);
            } else {
               GLES3::Utilities::buffer_get_data((uint)local_48, 0x8892, *(uint*)( lVar12 + 0x74 ));
               if (local_40 == (void*)0x0) {
                  __n = 0;
               } else {
                  __n = *(size_t*)( (long)local_40 + -8 );
               }
               memcpy(pvVar8, local_40, __n);
               pvVar8 = local_40;
               if (local_40 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_40 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_40 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar8 + -0x10 ), false);
                  }
               }
            }
            iVar7 = *(int*)( lVar12 + 8 ) + 0x1ff;
            iVar13 = *(int*)( lVar12 + 8 ) + 0x3fe;
            if (-1 < iVar7) {
               iVar13 = iVar7;
            }
            __n_00 = ( ulong )(uint)(iVar13 >> 9);
            if (__n_00 == 0) {
               *(undefined8*)( lVar12 + 0x68 ) = 0;
            } else {
               pvVar8 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar8 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
               } else {
                  *(ulong*)( (long)pvVar8 + -8 ) = __n_00;
               }
               *(void**)( lVar12 + 0x68 ) = pvVar8;
               memset(pvVar8, 0, __n_00);
            }
            *(undefined4*)( lVar12 + 0x70 ) = 0;
            lVar10 = *(long*)( lVar12 + 0x60 );
         }
         puVar2 = (undefined4*)( lVar10 + ( ulong )(uint)(param_4 * *(int*)( lVar12 + 0x4c )) * 4 );
         uVar3 = puVar2[4];
         uVar4 = puVar2[5];
         uVar5 = *puVar2;
         uVar6 = puVar2[1];
         param_1[2] = CONCAT44((int)( ( ulong ) * (undefined8*)( puVar2 + 6 ) >> 0x20 ), (int)( ( ulong ) * (undefined8*)( puVar2 + 2 ) >> 0x20 ));
         *param_1 = CONCAT44(uVar3, uVar5);
         *(undefined4*)( param_1 + 2 ) = uVar6;
         *(undefined4*)( (long)param_1 + 0x14 ) = uVar4;
         goto LAB_00116c45;
      }
      uVar11 = 0x75e;
      pcVar9 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_2D\" is true. Returning: Transform2D()";
   }
   _err_print_error("_multimesh_instance_get_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", uVar11, pcVar9, 0, 0);
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   LAB_00116c45:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_set_transform_2d(RID, int, Transform2D const&) */void GLES3::MeshStorage::_multimesh_instance_set_transform_2d(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   int iVar4;
   void *pvVar5;
   undefined8 uVar6;
   size_t __n;
   long lVar7;
   uint uVar8;
   char *pcVar9;
   int iVar10;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   ulong __n_00;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar7 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         iVar10 = *(int*)( lVar7 + 8 );
         if (( param_3 < 0 ) || ( iVar10 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", 0x6dd, (long)param_3, (long)iVar10, "p_index", "multimesh->instances", "", false, false);
         } else {
            if (*(int*)( lVar7 + 0xc ) != 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar6 = 0x6de;
                  pcVar9 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_2D\" is true.";
                  goto LAB_00117176;
               }
               goto LAB_00117283;
            }
            if (( *(long*)( lVar7 + 0x60 ) == 0 ) || ( *(long*)( *(long*)( lVar7 + 0x60 ) + -8 ) < 1 )) {
               CowData<float>::resize<false>((CowData<float>*)( lVar7 + 0x60 ), ( ulong )(uint)(iVar10 * *(int*)( lVar7 + 0x4c )));
               CowData<float>::_copy_on_write((CowData<float>*)( lVar7 + 0x60 ));
               pvVar5 = *(void**)( lVar7 + 0x60 );
               if (*(char*)( lVar7 + 0x49 ) == '\0') {
                  memset(pvVar5, 0, (long)*(int*)( lVar7 + 8 ) * ( ulong ) * (uint*)( lVar7 + 0x4c ) * 4);
               } else {
                  GLES3::Utilities::buffer_get_data((uint)local_58, 0x8892, *(uint*)( lVar7 + 0x74 ));
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  } else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }
                  memcpy(pvVar5, local_50, __n);
                  pvVar5 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar5 + -0x10 ), false);
                     }
                  }
               }
               iVar4 = *(int*)( lVar7 + 8 ) + 0x1ff;
               iVar10 = *(int*)( lVar7 + 8 ) + 0x3fe;
               if (-1 < iVar4) {
                  iVar10 = iVar4;
               }
               __n_00 = ( ulong )(uint)(iVar10 >> 9);
               if (__n_00 == 0) {
                  *(undefined8*)( lVar7 + 0x68 ) = 0;
               } else {
                  pvVar5 = (void*)Memory::alloc_static(__n_00, true);
                  if (pvVar5 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  } else {
                     *(ulong*)( (long)pvVar5 + -8 ) = __n_00;
                  }
                  *(void**)( lVar7 + 0x68 ) = pvVar5;
                  memset(pvVar5, 0, __n_00);
               }
               *(undefined4*)( lVar7 + 0x70 ) = 0;
            }
            CowData<float>::_copy_on_write((CowData<float>*)( lVar7 + 0x60 ));
            uVar8 = param_3 >> 9;
            puVar2 = (undefined4*)( *(long*)( lVar7 + 0x60 ) + ( ulong )(uint)(param_3 * *(int*)( lVar7 + 0x4c )) * 4 );
            *puVar2 = *param_4;
            uVar3 = param_4[2];
            puVar2[2] = 0;
            puVar2[1] = uVar3;
            puVar2[3] = param_4[4];
            puVar2[4] = param_4[1];
            uVar3 = param_4[3];
            puVar2[6] = 0;
            puVar2[5] = uVar3;
            puVar2[7] = param_4[5];
            iVar4 = *(int*)( lVar7 + 8 ) + 0x1ff;
            iVar10 = *(int*)( lVar7 + 8 ) + 0x3fe;
            if (-1 < iVar4) {
               iVar10 = iVar4;
            }
            if (uVar8 < ( uint )(iVar10 >> 9)) {
               pcVar9 = (char*)( (long)(int)uVar8 + *(long*)( lVar7 + 0x68 ) );
               if (*pcVar9 == '\0') {
                  *pcVar9 = '\x01';
                  *(int*)( lVar7 + 0x70 ) = *(int*)( lVar7 + 0x70 ) + 1;
               }
               *(undefined1*)( lVar7 + 0x48 ) = 1;
               if (*(char*)( lVar7 + 0x78 ) == '\0') {
                  *(undefined8*)( lVar7 + 0x80 ) = *(undefined8*)( this + 0x2a8 );
                  *(long*)( this + 0x2a8 ) = lVar7;
                  *(undefined1*)( lVar7 + 0x78 ) = 1;
               }
            } else {
               _err_print_index_error("_multimesh_mark_dirty", "drivers/gles3/storage/mesh_storage.cpp", 0x666, (long)(int)uVar8, (long)( iVar10 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_00117283;
      }
      if (*(int*)( lVar7 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar6 = 0x6dc;
      pcVar9 = "Parameter \"multimesh\" is null.";
      LAB_00117176:_err_print_error("_multimesh_instance_set_transform_2d", "drivers/gles3/storage/mesh_storage.cpp", uVar6, pcVar9, 0, 0);
      return;
   }
   LAB_00117283:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_get_transform(RID, int) const */undefined1(*)[16];GLES3::MeshStorage::_multimesh_instance_get_transform(undefined1 (*param_1)[16], long param_2, ulong param_3, int param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   uint uVar10;
   int iVar11;
   void *pvVar12;
   char *pcVar13;
   long lVar14;
   undefined8 uVar15;
   size_t __n;
   long lVar16;
   int iVar17;
   long in_FS_OFFSET;
   undefined1 local_48[8];
   void *local_40;
   long local_30;
   ulong __n_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x26c ) <= (uint)param_3 )) {
      LAB_00117560:uVar15 = 0x73d;
      pcVar13 = "Parameter \"multimesh\" is null.";
   } else {
      lVar16 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( param_2 + 600 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x268 ) ) * 8 );
      if (*(int*)( lVar16 + 0x110 ) != (int)( param_3 >> 0x20 )) {
         if (*(int*)( lVar16 + 0x110 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
         goto LAB_00117560;
      }
      iVar17 = *(int*)( lVar16 + 8 );
      if (( param_4 < 0 ) || ( iVar17 <= param_4 )) {
         _err_print_index_error("_multimesh_instance_get_transform", "drivers/gles3/storage/mesh_storage.cpp", 0x73e, (long)param_4, (long)iVar17, "p_index", "multimesh->instances", "", false, false);
         *(undefined4*)param_1[2] = 0x3f800000;
         uVar10 = _LC54;
         *(undefined8*)( param_1[2] + 4 ) = 0;
         *(undefined4*)( param_1[2] + 0xc ) = 0;
         *param_1 = ZEXT416(uVar10);
         param_1[1] = ZEXT416(uVar10);
         goto LAB_00117433;
      }
      if (*(int*)( lVar16 + 0xc ) == 1) {
         lVar14 = *(long*)( lVar16 + 0x60 );
         if (( lVar14 == 0 ) || ( *(long*)( lVar14 + -8 ) < 1 )) {
            CowData<float>::resize<false>((CowData<float>*)( lVar16 + 0x60 ), ( ulong )(uint)(iVar17 * *(int*)( lVar16 + 0x4c )));
            CowData<float>::_copy_on_write((CowData<float>*)( lVar16 + 0x60 ));
            pvVar12 = *(void**)( lVar16 + 0x60 );
            if (*(char*)( lVar16 + 0x49 ) == '\0') {
               memset(pvVar12, 0, (long)*(int*)( lVar16 + 8 ) * ( ulong ) * (uint*)( lVar16 + 0x4c ) * 4);
            } else {
               GLES3::Utilities::buffer_get_data((uint)local_48, 0x8892, *(uint*)( lVar16 + 0x74 ));
               if (local_40 == (void*)0x0) {
                  __n = 0;
               } else {
                  __n = *(size_t*)( (long)local_40 + -8 );
               }
               memcpy(pvVar12, local_40, __n);
               pvVar12 = local_40;
               if (local_40 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_40 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_40 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar12 + -0x10 ), false);
                  }
               }
            }
            iVar11 = *(int*)( lVar16 + 8 ) + 0x1ff;
            iVar17 = *(int*)( lVar16 + 8 ) + 0x3fe;
            if (-1 < iVar11) {
               iVar17 = iVar11;
            }
            __n_00 = ( ulong )(uint)(iVar17 >> 9);
            if (__n_00 == 0) {
               *(undefined8*)( lVar16 + 0x68 ) = 0;
            } else {
               pvVar12 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar12 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
               } else {
                  *(ulong*)( (long)pvVar12 + -8 ) = __n_00;
               }
               *(void**)( lVar16 + 0x68 ) = pvVar12;
               memset(pvVar12, 0, __n_00);
            }
            *(undefined4*)( lVar16 + 0x70 ) = 0;
            lVar14 = *(long*)( lVar16 + 0x60 );
         }
         puVar2 = (undefined4*)( lVar14 + ( ulong )(uint)(param_4 * *(int*)( lVar16 + 0x4c )) * 4 );
         uVar3 = puVar2[9];
         uVar4 = puVar2[8];
         uVar5 = puVar2[3];
         uVar9 = puVar2[6];
         uVar6 = puVar2[1];
         uVar7 = puVar2[7];
         uVar8 = puVar2[0xb];
         *(undefined4*)param_1[1] = puVar2[5];
         *(undefined4*)( param_1[1] + 4 ) = uVar9;
         *(undefined4*)( param_1[1] + 8 ) = uVar4;
         *(undefined4*)( param_1[1] + 0xc ) = uVar3;
         uVar3 = puVar2[2];
         uVar4 = puVar2[4];
         *(undefined4*)param_1[2] = puVar2[10];
         *(undefined4*)( param_1[2] + 4 ) = uVar5;
         *(undefined4*)( param_1[2] + 8 ) = uVar7;
         *(undefined4*)( param_1[2] + 0xc ) = uVar8;
         *(undefined4*)*param_1 = *puVar2;
         *(undefined4*)( *param_1 + 4 ) = uVar6;
         *(undefined4*)( *param_1 + 8 ) = uVar3;
         *(undefined4*)( *param_1 + 0xc ) = uVar4;
         goto LAB_00117433;
      }
      uVar15 = 0x73f;
      pcVar13 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_3D\" is true. Returning: Transform3D()";
   }
   _err_print_error("_multimesh_instance_get_transform", "drivers/gles3/storage/mesh_storage.cpp", uVar15, pcVar13, 0, 0);
   uVar10 = _LC54;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar10);
   param_1[1] = ZEXT416(uVar10);
   LAB_00117433:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_set_transform(RID, int, Transform3D const&) */void GLES3::MeshStorage::_multimesh_instance_set_transform(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   int iVar3;
   void *pvVar4;
   undefined8 uVar5;
   size_t __n;
   long lVar6;
   uint uVar7;
   char *pcVar8;
   int iVar9;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   ulong __n_00;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar6 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         iVar9 = *(int*)( lVar6 + 8 );
         if (( param_3 < 0 ) || ( iVar9 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_transform", "drivers/gles3/storage/mesh_storage.cpp", 0x6bf, (long)param_3, (long)iVar9, "p_index", "multimesh->instances", "", false, false);
         } else {
            if (*(int*)( lVar6 + 0xc ) != 1) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar5 = 0x6c0;
                  pcVar8 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_3D\" is true.";
                  goto LAB_001179a6;
               }
               goto LAB_00117ab3;
            }
            if (( *(long*)( lVar6 + 0x60 ) == 0 ) || ( *(long*)( *(long*)( lVar6 + 0x60 ) + -8 ) < 1 )) {
               CowData<float>::resize<false>((CowData<float>*)( lVar6 + 0x60 ), ( ulong )(uint)(iVar9 * *(int*)( lVar6 + 0x4c )));
               CowData<float>::_copy_on_write((CowData<float>*)( lVar6 + 0x60 ));
               pvVar4 = *(void**)( lVar6 + 0x60 );
               if (*(char*)( lVar6 + 0x49 ) == '\0') {
                  memset(pvVar4, 0, (long)*(int*)( lVar6 + 8 ) * ( ulong ) * (uint*)( lVar6 + 0x4c ) * 4);
               } else {
                  GLES3::Utilities::buffer_get_data((uint)local_58, 0x8892, *(uint*)( lVar6 + 0x74 ));
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  } else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }
                  memcpy(pvVar4, local_50, __n);
                  pvVar4 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar4 + -0x10 ), false);
                     }
                  }
               }
               iVar3 = *(int*)( lVar6 + 8 ) + 0x1ff;
               iVar9 = *(int*)( lVar6 + 8 ) + 0x3fe;
               if (-1 < iVar3) {
                  iVar9 = iVar3;
               }
               __n_00 = ( ulong )(uint)(iVar9 >> 9);
               if (__n_00 == 0) {
                  *(undefined8*)( lVar6 + 0x68 ) = 0;
               } else {
                  pvVar4 = (void*)Memory::alloc_static(__n_00, true);
                  if (pvVar4 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  } else {
                     *(ulong*)( (long)pvVar4 + -8 ) = __n_00;
                  }
                  *(void**)( lVar6 + 0x68 ) = pvVar4;
                  memset(pvVar4, 0, __n_00);
               }
               *(undefined4*)( lVar6 + 0x70 ) = 0;
            }
            CowData<float>::_copy_on_write((CowData<float>*)( lVar6 + 0x60 ));
            uVar7 = param_3 >> 9;
            puVar2 = (undefined4*)( *(long*)( lVar6 + 0x60 ) + ( ulong )(uint)(param_3 * *(int*)( lVar6 + 0x4c )) * 4 );
            *puVar2 = *param_4;
            puVar2[1] = param_4[1];
            puVar2[2] = param_4[2];
            puVar2[3] = param_4[9];
            puVar2[4] = param_4[3];
            puVar2[5] = param_4[4];
            puVar2[6] = param_4[5];
            puVar2[7] = param_4[10];
            puVar2[8] = param_4[6];
            puVar2[9] = param_4[7];
            puVar2[10] = param_4[8];
            puVar2[0xb] = param_4[0xb];
            iVar3 = *(int*)( lVar6 + 8 ) + 0x1ff;
            iVar9 = *(int*)( lVar6 + 8 ) + 0x3fe;
            if (-1 < iVar3) {
               iVar9 = iVar3;
            }
            if (uVar7 < ( uint )(iVar9 >> 9)) {
               pcVar8 = (char*)( (long)(int)uVar7 + *(long*)( lVar6 + 0x68 ) );
               if (*pcVar8 == '\0') {
                  *pcVar8 = '\x01';
                  *(int*)( lVar6 + 0x70 ) = *(int*)( lVar6 + 0x70 ) + 1;
               }
               *(undefined1*)( lVar6 + 0x48 ) = 1;
               if (*(char*)( lVar6 + 0x78 ) == '\0') {
                  *(undefined8*)( lVar6 + 0x80 ) = *(undefined8*)( this + 0x2a8 );
                  *(long*)( this + 0x2a8 ) = lVar6;
                  *(undefined1*)( lVar6 + 0x78 ) = 1;
               }
            } else {
               _err_print_index_error("_multimesh_mark_dirty", "drivers/gles3/storage/mesh_storage.cpp", 0x666, (long)(int)uVar7, (long)( iVar9 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_00117ab3;
      }
      if (*(int*)( lVar6 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar5 = 0x6be;
      pcVar8 = "Parameter \"multimesh\" is null.";
      LAB_001179a6:_err_print_error("_multimesh_instance_set_transform", "drivers/gles3/storage/mesh_storage.cpp", uVar5, pcVar8, 0, 0);
      return;
   }
   LAB_00117ab3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_set_color(RID, int, Color const&) */void GLES3::MeshStorage::_multimesh_instance_set_color(MeshStorage *this, ulong param_2, int param_3, uint *param_4) {
   long *plVar1;
   int iVar2;
   uint uVar3;
   void *pvVar4;
   undefined8 uVar5;
   size_t __n;
   long lVar6;
   uint uVar7;
   char *pcVar8;
   ulong uVar9;
   ulong uVar10;
   ushort uVar11;
   ushort uVar12;
   int iVar13;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar6 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         iVar13 = *(int*)( lVar6 + 8 );
         if (( param_3 < 0 ) || ( iVar13 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_color", "drivers/gles3/storage/mesh_storage.cpp", 0x6f7, (long)param_3, (long)iVar13, "p_index", "multimesh->instances", "", false, false);
         } else {
            if (*(char*)( lVar6 + 0x10 ) == '\0') {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar5 = 0x6f8;
                  pcVar8 = "Condition \"!multimesh->uses_colors\" is true.";
                  goto LAB_00117fd6;
               }
               goto LAB_001180e3;
            }
            if (( *(long*)( lVar6 + 0x60 ) == 0 ) || ( *(long*)( *(long*)( lVar6 + 0x60 ) + -8 ) < 1 )) {
               CowData<float>::resize<false>((CowData<float>*)( lVar6 + 0x60 ), ( ulong )(uint)(iVar13 * *(int*)( lVar6 + 0x4c )));
               CowData<float>::_copy_on_write((CowData<float>*)( lVar6 + 0x60 ));
               pvVar4 = *(void**)( lVar6 + 0x60 );
               if (*(char*)( lVar6 + 0x49 ) == '\0') {
                  memset(pvVar4, 0, (long)*(int*)( lVar6 + 8 ) * ( ulong ) * (uint*)( lVar6 + 0x4c ) * 4);
               } else {
                  GLES3::Utilities::buffer_get_data((uint)local_58, 0x8892, *(uint*)( lVar6 + 0x74 ));
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  } else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }
                  memcpy(pvVar4, local_50, __n);
                  pvVar4 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar4 + -0x10 ), false);
                     }
                  }
               }
               iVar2 = *(int*)( lVar6 + 8 ) + 0x1ff;
               iVar13 = *(int*)( lVar6 + 8 ) + 0x3fe;
               if (-1 < iVar2) {
                  iVar13 = iVar2;
               }
               uVar9 = ( ulong )(uint)(iVar13 >> 9);
               if (uVar9 == 0) {
                  *(undefined8*)( lVar6 + 0x68 ) = 0;
               } else {
                  pvVar4 = (void*)Memory::alloc_static(uVar9, true);
                  if (pvVar4 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  } else {
                     *(ulong*)( (long)pvVar4 + -8 ) = uVar9;
                  }
                  *(void**)( lVar6 + 0x68 ) = pvVar4;
                  memset(pvVar4, 0, uVar9);
               }
               *(undefined4*)( lVar6 + 0x70 ) = 0;
            }
            CowData<float>::_copy_on_write((CowData<float>*)( lVar6 + 0x60 ));
            uVar7 = *param_4;
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar9 = 0;
               if (0x38000000 < uVar3) {
                  uVar9 = ( ulong )(uVar3 + 0xc8000000 >> 0xd | ( uVar7 >> 0x1f ) << 0xf | ( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar3 != 0x7f800000 )) {
                  uVar11 = 0;
               } else {
                  uVar11 = 0x3ff;
               }
               uVar9 = ( ulong )(ushort)(( ushort )(( uVar7 >> 0x1f ) << 0xf) | uVar11 | 0x7c00);
            }
            uVar7 = param_4[1];
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar11 = 0;
               if (0x38000000 < uVar3) {
                  uVar11 = ( ushort )(uVar3 + 0xc8000000 >> 0xd) | ( ushort )(( uVar7 >> 0x1f ) << 0xf) | ( ushort )(( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar11 = uVar3 != 0x7f800000 )) {
                  uVar11 = 0;
               }
               uVar11 = ( ushort )(( uVar7 >> 0x1f ) << 0xf) | uVar11 | 0x7c00;
            }
            uVar7 = param_4[2];
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar12 = 0;
               if (0x38000000 < uVar3) {
                  uVar12 = ( ushort )(uVar3 + 0xc8000000 >> 0xd) | ( ushort )(( uVar7 >> 0x1f ) << 0xf) | ( ushort )(( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar12 = uVar3 != 0x7f800000 )) {
                  uVar12 = 0;
               }
               uVar12 = ( ushort )(( uVar7 >> 0x1f ) << 0xf) | uVar12 | 0x7c00;
            }
            uVar7 = param_4[3];
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar10 = 0;
               if (0x38000000 < uVar3) {
                  uVar10 = ( ulong )(uVar3 + 0xc8000000 >> 0xd | ( uVar7 >> 0x1f ) << 0xf | ( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar3 != 0x7f800000 )) {
                  uVar3 = 0;
               } else {
                  uVar3 = 0x3ff;
               }
               uVar10 = ( ulong )(( uVar7 >> 0x1f ) << 0xf | uVar3) | 0x7c00;
            }
            uVar7 = param_3 >> 9;
            *(ulong*)( *(long*)( lVar6 + 0x60 ) + ( ( ulong )(uint)(param_3 * *(int*)( lVar6 + 0x4c )) + ( ulong ) * (uint*)( lVar6 + 0x50 ) ) * 4 ) = uVar9 & 0xffff | (ulong)uVar11 << 0x10 | (ulong)uVar12 << 0x20 | uVar10 << 0x30;
            iVar2 = *(int*)( lVar6 + 8 ) + 0x1ff;
            iVar13 = *(int*)( lVar6 + 8 ) + 0x3fe;
            if (-1 < iVar2) {
               iVar13 = iVar2;
            }
            if (uVar7 < ( uint )(iVar13 >> 9)) {
               pcVar8 = (char*)( (long)(int)uVar7 + *(long*)( lVar6 + 0x68 ) );
               if (*pcVar8 == '\0') {
                  *pcVar8 = '\x01';
                  *(int*)( lVar6 + 0x70 ) = *(int*)( lVar6 + 0x70 ) + 1;
               }
               if (*(char*)( lVar6 + 0x78 ) == '\0') {
                  *(undefined8*)( lVar6 + 0x80 ) = *(undefined8*)( this + 0x2a8 );
                  *(long*)( this + 0x2a8 ) = lVar6;
                  *(undefined1*)( lVar6 + 0x78 ) = 1;
               }
            } else {
               _err_print_index_error("_multimesh_mark_dirty", "drivers/gles3/storage/mesh_storage.cpp", 0x666, (long)(int)uVar7, (long)( iVar13 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_001180e3;
      }
      if (*(int*)( lVar6 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar5 = 0x6f6;
      pcVar8 = "Parameter \"multimesh\" is null.";
      LAB_00117fd6:_err_print_error("_multimesh_instance_set_color", "drivers/gles3/storage/mesh_storage.cpp", uVar5, pcVar8, 0, 0);
      return;
   }
   LAB_001180e3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_set_custom_data(RID, int, Color const&) */void GLES3::MeshStorage::_multimesh_instance_set_custom_data(MeshStorage *this, ulong param_2, int param_3, uint *param_4) {
   long *plVar1;
   int iVar2;
   uint uVar3;
   void *pvVar4;
   undefined8 uVar5;
   size_t __n;
   long lVar6;
   uint uVar7;
   char *pcVar8;
   ulong uVar9;
   ulong uVar10;
   ushort uVar11;
   ushort uVar12;
   int iVar13;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x26c ) )) {
      lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar6 + 0x110 ) == (int)( param_2 >> 0x20 )) {
         iVar13 = *(int*)( lVar6 + 8 );
         if (( param_3 < 0 ) || ( iVar13 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_custom_data", "drivers/gles3/storage/mesh_storage.cpp", 0x70b, (long)param_3, (long)iVar13, "p_index", "multimesh->instances", "", false, false);
         } else {
            if (*(char*)( lVar6 + 0x11 ) == '\0') {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar5 = 0x70c;
                  pcVar8 = "Condition \"!multimesh->uses_custom_data\" is true.";
                  goto LAB_00118606;
               }
               goto LAB_00118713;
            }
            if (( *(long*)( lVar6 + 0x60 ) == 0 ) || ( *(long*)( *(long*)( lVar6 + 0x60 ) + -8 ) < 1 )) {
               CowData<float>::resize<false>((CowData<float>*)( lVar6 + 0x60 ), ( ulong )(uint)(iVar13 * *(int*)( lVar6 + 0x4c )));
               CowData<float>::_copy_on_write((CowData<float>*)( lVar6 + 0x60 ));
               pvVar4 = *(void**)( lVar6 + 0x60 );
               if (*(char*)( lVar6 + 0x49 ) == '\0') {
                  memset(pvVar4, 0, (long)*(int*)( lVar6 + 8 ) * ( ulong ) * (uint*)( lVar6 + 0x4c ) * 4);
               } else {
                  GLES3::Utilities::buffer_get_data((uint)local_58, 0x8892, *(uint*)( lVar6 + 0x74 ));
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  } else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }
                  memcpy(pvVar4, local_50, __n);
                  pvVar4 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar4 + -0x10 ), false);
                     }
                  }
               }
               iVar2 = *(int*)( lVar6 + 8 ) + 0x1ff;
               iVar13 = *(int*)( lVar6 + 8 ) + 0x3fe;
               if (-1 < iVar2) {
                  iVar13 = iVar2;
               }
               uVar9 = ( ulong )(uint)(iVar13 >> 9);
               if (uVar9 == 0) {
                  *(undefined8*)( lVar6 + 0x68 ) = 0;
               } else {
                  pvVar4 = (void*)Memory::alloc_static(uVar9, true);
                  if (pvVar4 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  } else {
                     *(ulong*)( (long)pvVar4 + -8 ) = uVar9;
                  }
                  *(void**)( lVar6 + 0x68 ) = pvVar4;
                  memset(pvVar4, 0, uVar9);
               }
               *(undefined4*)( lVar6 + 0x70 ) = 0;
            }
            CowData<float>::_copy_on_write((CowData<float>*)( lVar6 + 0x60 ));
            uVar7 = *param_4;
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar9 = 0;
               if (0x38000000 < uVar3) {
                  uVar9 = ( ulong )(uVar3 + 0xc8000000 >> 0xd | ( uVar7 >> 0x1f ) << 0xf | ( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar3 != 0x7f800000 )) {
                  uVar11 = 0;
               } else {
                  uVar11 = 0x3ff;
               }
               uVar9 = ( ulong )(ushort)(( ushort )(( uVar7 >> 0x1f ) << 0xf) | uVar11 | 0x7c00);
            }
            uVar7 = param_4[1];
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar11 = 0;
               if (0x38000000 < uVar3) {
                  uVar11 = ( ushort )(uVar3 + 0xc8000000 >> 0xd) | ( ushort )(( uVar7 >> 0x1f ) << 0xf) | ( ushort )(( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar11 = uVar3 != 0x7f800000 )) {
                  uVar11 = 0;
               }
               uVar11 = ( ushort )(( uVar7 >> 0x1f ) << 0xf) | uVar11 | 0x7c00;
            }
            uVar7 = param_4[2];
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar12 = 0;
               if (0x38000000 < uVar3) {
                  uVar12 = ( ushort )(uVar3 + 0xc8000000 >> 0xd) | ( ushort )(( uVar7 >> 0x1f ) << 0xf) | ( ushort )(( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar12 = uVar3 != 0x7f800000 )) {
                  uVar12 = 0;
               }
               uVar12 = ( ushort )(( uVar7 >> 0x1f ) << 0xf) | uVar12 | 0x7c00;
            }
            uVar7 = param_4[3];
            uVar3 = uVar7 & 0x7f800000;
            if (uVar3 < 0x47800000) {
               uVar10 = 0;
               if (0x38000000 < uVar3) {
                  uVar10 = ( ulong )(uVar3 + 0xc8000000 >> 0xd | ( uVar7 >> 0x1f ) << 0xf | ( uVar7 & 0x7fffff ) >> 0xd);
               }
            } else {
               if (( ( uVar7 & 0x7fffff ) == 0 ) || ( uVar3 != 0x7f800000 )) {
                  uVar3 = 0;
               } else {
                  uVar3 = 0x3ff;
               }
               uVar10 = ( ulong )(( uVar7 >> 0x1f ) << 0xf | uVar3) | 0x7c00;
            }
            uVar7 = param_3 >> 9;
            *(ulong*)( *(long*)( lVar6 + 0x60 ) + ( ( ulong )(uint)(param_3 * *(int*)( lVar6 + 0x4c )) + ( ulong ) * (uint*)( lVar6 + 0x54 ) ) * 4 ) = uVar9 & 0xffff | (ulong)uVar11 << 0x10 | (ulong)uVar12 << 0x20 | uVar10 << 0x30;
            iVar2 = *(int*)( lVar6 + 8 ) + 0x1ff;
            iVar13 = *(int*)( lVar6 + 8 ) + 0x3fe;
            if (-1 < iVar2) {
               iVar13 = iVar2;
            }
            if (uVar7 < ( uint )(iVar13 >> 9)) {
               pcVar8 = (char*)( (long)(int)uVar7 + *(long*)( lVar6 + 0x68 ) );
               if (*pcVar8 == '\0') {
                  *pcVar8 = '\x01';
                  *(int*)( lVar6 + 0x70 ) = *(int*)( lVar6 + 0x70 ) + 1;
               }
               if (*(char*)( lVar6 + 0x78 ) == '\0') {
                  *(undefined8*)( lVar6 + 0x80 ) = *(undefined8*)( this + 0x2a8 );
                  *(long*)( this + 0x2a8 ) = lVar6;
                  *(undefined1*)( lVar6 + 0x78 ) = 1;
               }
            } else {
               _err_print_index_error("_multimesh_mark_dirty", "drivers/gles3/storage/mesh_storage.cpp", 0x666, (long)(int)uVar7, (long)( iVar13 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_00118713;
      }
      if (*(int*)( lVar6 + 0x110 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar5 = 0x70a;
      pcVar8 = "Parameter \"multimesh\" is null.";
      LAB_00118606:_err_print_error("_multimesh_instance_set_custom_data", "drivers/gles3/storage/mesh_storage.cpp", uVar5, pcVar8, 0, 0);
      return;
   }
   LAB_00118713:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_instance_get_color(RID, int) const */undefined1[16];GLES3::MeshStorage::_multimesh_instance_get_color (MeshStorage *this,ulong param_2,int param_3) {
   long *plVar1;
   ushort uVar2;
   undefined1 auVar3[16];
   int iVar4;
   uint uVar5;
   void *pvVar6;
   uint uVar7;
   char *pcVar8;
   uint uVar9;
   long lVar10;
   undefined8 uVar11;
   size_t __n;
   long lVar12;
   uint uVar13;
   int iVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined1 local_38[8];
   void *local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x26c ) <= (uint)param_2 )) {
      LAB_00118c60:uVar11 = 0x775;
      pcVar8 = "Parameter \"multimesh\" is null.";
   } else {
      lVar12 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x268 ) ) * 0x118 + *(long*)( *(long*)( this + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x268 ) ) * 8 );
      if (*(int*)( lVar12 + 0x110 ) != (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar12 + 0x110 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }
         goto LAB_00118c60;
      }
      iVar14 = *(int*)( lVar12 + 8 );
      if (( param_3 < 0 ) || ( iVar14 <= param_3 )) {
         _err_print_index_error("_multimesh_instance_get_color", "drivers/gles3/storage/mesh_storage.cpp", 0x776, (long)param_3, (long)iVar14, "p_index", "multimesh->instances", "", false, false);
         local_48 = 0;
         uStack_40 = 0x3f80000000000000;
         goto LAB_0011897e;
      }
      if (*(char*)( lVar12 + 0x10 ) != '\0') {
         lVar10 = *(long*)( lVar12 + 0x60 );
         if (( lVar10 == 0 ) || ( *(long*)( lVar10 + -8 ) < 1 )) {
            CowData<float>::resize<false>((CowData<float>*)( lVar12 + 0x60 ), ( ulong )(uint)(iVar14 * *(int*)( lVar12 + 0x4c )));
            CowData<float>::_copy_on_write((CowData<float>*)( lVar12 + 0x60 ));
            pvVar6 = *(void**)( lVar12 + 0x60 );
            if (*(char*)( lVar12 + 0x49 ) == '\0') {
               memset(pvVar6, 0, (long)*(int*)( lVar12 + 8 ) * ( ulong ) * (uint*)( lVar12 + 0x4c ) * 4);
            } else {
               GLES3::Utilities::buffer_get_data((uint)local_38, 0x8892, *(uint*)( lVar12 + 0x74 ));
               if (local_30 == (void*)0x0) {
                  __n = 0;
               } else {
                  __n = *(size_t*)( (long)local_30 + -8 );
               }
               memcpy(pvVar6, local_30, __n);
               pvVar6 = local_30;
               if (local_30 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_30 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_30 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar6 + -0x10 ), false);
                  }
               }
            }
            iVar4 = *(int*)( lVar12 + 8 ) + 0x1ff;
            iVar14 = *(int*)( lVar12 + 8 ) + 0x3fe;
            if (-1 < iVar4) {
               iVar14 = iVar4;
            }
            uVar16 = ( ulong )(uint)(iVar14 >> 9);
            if (uVar16 == 0) {
               *(undefined8*)( lVar12 + 0x68 ) = 0;
            } else {
               pvVar6 = (void*)Memory::alloc_static(uVar16, true);
               if (pvVar6 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
               } else {
                  *(ulong*)( (long)pvVar6 + -8 ) = uVar16;
               }
               *(void**)( lVar12 + 0x68 ) = pvVar6;
               memset(pvVar6, 0, uVar16);
            }
            *(undefined4*)( lVar12 + 0x70 ) = 0;
            lVar10 = *(long*)( lVar12 + 0x60 );
         }
         uVar16 = *(ulong*)( lVar10 + ( ( ulong )(uint)(param_3 * *(int*)( lVar12 + 0x4c )) + ( ulong ) * (uint*)( lVar12 + 0x50 ) ) * 4 );
         uVar7 = (uint)uVar16;
         uVar9 = ( uVar7 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c00 ) == 0) {
            if (( uVar16 & 0x3ff ) != 0) {
               uVar7 = ( uVar7 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar7 & 0x400 ) == 0) {
                  do {
                     uVar7 = uVar7 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar7 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar9 = ( ( uVar7 & 0x3fe ) << 0xd | uVar9 ) + iVar14;
            }
         } else if (( (ushort)uVar16 & 0x7c00 ) == 0x7c00) {
            uVar9 = ( ( uVar7 & 0x3ff ) << 0xd | uVar9 ) + 0x7f800000;
         } else {
            uVar9 = uVar9 + ( ( uVar7 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         uVar13 = ( uint )(uVar16 >> 0x10);
         uVar7 = ( uVar13 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c000000 ) == 0) {
            if (( uVar16 & 0x3ff0000 ) != 0) {
               uVar13 = ( uVar13 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar13 & 0x400 ) == 0) {
                  do {
                     uVar13 = uVar13 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar13 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar7 = ( ( uVar13 & 0x3fe ) << 0xd | uVar7 ) + iVar14;
            }
         } else if (( ( ushort )(uVar16 >> 0x10) & 0x7c00 ) == 0x7c00) {
            uVar7 = ( ( uVar13 & 0x3ff ) << 0xd | uVar7 ) + 0x7f800000;
         } else {
            uVar7 = uVar7 + ( ( uVar13 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         uVar15 = ( uint )(uVar16 >> 0x20);
         uVar13 = ( uVar15 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c0000000000 ) == 0) {
            if (( uVar16 & 0x3ff00000000 ) != 0) {
               uVar15 = ( uVar15 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar15 & 0x400 ) == 0) {
                  do {
                     uVar15 = uVar15 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar15 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar13 = ( ( uVar15 & 0x3fe ) << 0xd | uVar13 ) + iVar14;
            }
         } else if (( ( ushort )(uVar16 >> 0x20) & 0x7c00 ) == 0x7c00) {
            uVar13 = ( ( uVar15 & 0x3ff ) << 0xd | uVar13 ) + 0x7f800000;
         } else {
            uVar13 = uVar13 + ( ( uVar15 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         uVar2 = ( ushort )(uVar16 >> 0x30);
         uVar5 = (uint)uVar2;
         uVar15 = ( uVar5 & 0x8000 ) * 0x10000;
         if (( uVar16 & 0x7c00000000000000 ) == 0) {
            if (( uVar16 & 0x3ff000000000000 ) != 0) {
               uVar5 = ( uVar2 & 0xffff03ff ) * 2;
               iVar14 = 0;
               if (( uVar5 & 0x400 ) == 0) {
                  do {
                     uVar5 = uVar5 * 2;
                     iVar14 = iVar14 + 1;
                  } while ( ( uVar5 & 0x400 ) == 0 );
                  iVar14 = ( 0x70 - iVar14 ) * 0x800000;
               } else {
                  iVar14 = 0x38000000;
               }
               uVar15 = ( ( uVar5 & 0x3fe ) << 0xd | uVar15 ) + iVar14;
            }
         } else if (( uVar2 & 0x7c00 ) == 0x7c00) {
            uVar15 = ( ( uVar5 & 0x3ff ) << 0xd | uVar15 ) + 0x7f800000;
         } else {
            uVar15 = uVar15 + ( ( uVar5 & 0x7fff ) + 0x1c000 ) * 0x2000;
         }
         local_48 = CONCAT44(uVar7, uVar9);
         uStack_40 = CONCAT44(uVar15, uVar13);
         goto LAB_0011897e;
      }
      uVar11 = 0x777;
      pcVar8 = "Condition \"!multimesh->uses_colors\" is true. Returning: Color()";
   }
   _err_print_error("_multimesh_instance_get_color", "drivers/gles3/storage/mesh_storage.cpp", uVar11, pcVar8, 0, 0);
   local_48 = 0;
   uStack_40 = 0x3f80000000000000;
   LAB_0011897e:auVar3._8_8_ = uStack_40;
   auVar3._0_8_ = local_48;
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return auVar3;
}/* GLES3::MeshStorage::mesh_allocate() */void GLES3::MeshStorage::mesh_allocate(MeshStorage *this) {
   RID_Alloc<GLES3::Mesh,true>::allocate_rid((RID_Alloc<GLES3::Mesh,true>*)( this + 0x180 ));
   return;
}/* GLES3::MeshStorage::_multimesh_allocate() */void GLES3::MeshStorage::_multimesh_allocate(MeshStorage *this) {
   RID_Alloc<GLES3::MultiMesh,true>::allocate_rid((RID_Alloc<GLES3::MultiMesh,true>*)( this + 0x250 ));
   return;
}/* GLES3::MeshStorage::skeleton_allocate() */void GLES3::MeshStorage::skeleton_allocate(MeshStorage *this) {
   RID_Alloc<GLES3::Skeleton,true>::allocate_rid((RID_Alloc<GLES3::Skeleton,true>*)( this + 0x2b0 ));
   return;
}/* GLES3::MeshStorage::mesh_initialize(RID) */void GLES3::MeshStorage::mesh_initialize(MeshStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   Mesh local_e8[16];
   undefined1 local_d8[16];
   undefined4 local_c8;
   undefined8 local_c4;
   undefined4 local_bc;
   undefined8 local_b8;
   undefined4 local_b0;
   undefined4 local_ac;
   undefined4 uStack_a8;
   undefined1 auStack_a4[12];
   undefined1 local_90[16];
   undefined8 local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 local_50;
   undefined1 local_40[16];
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 16; i++) {
      local_e8[i] = (Mesh)0;
   }
   auStack_a4 = SUB1612((undefined1[16])0x0, 4);
   local_d8 = (undefined1[16])0x0;
   local_58 = _LC242;
   local_20 = _LC242;
   local_c8 = 0;
   local_c4 = 0;
   local_bc = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_ac = 0;
   uStack_a8 = 0;
   local_80 = 0;
   local_50 = 0;
   local_90 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_40 = (undefined1[16])0x0;
   local_30 = (undefined1[16])0x0;
   RID_Alloc<GLES3::Mesh,true>::initialize_rid((RID_Alloc<GLES3::Mesh,true>*)( this + 0x180 ), param_2, local_e8);
   Mesh::~Mesh(local_e8);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::skeleton_initialize(RID) */void GLES3::MeshStorage::skeleton_initialize(MeshStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined1 local_98[16];
   ulong local_88;
   void *local_80;
   undefined1 local_78[16];
   undefined4 local_68;
   undefined4 local_64;
   undefined4 local_60;
   undefined4 local_5c;
   undefined1 local_58[16];
   undefined8 local_48;
   Dependency local_40[8];
   undefined1 local_38[16];
   undefined1 local_28[16];
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   local_88 = 0;
   local_68 = _LC54;
   local_5c = _LC54;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   local_80 = (void*)0x0;
   local_64 = 0;
   local_60 = 0;
   local_48 = 1;
   local_18 = 2;
   RID_Alloc<GLES3::Skeleton,true>::initialize_rid((RID_Alloc<GLES3::Skeleton,true>*)( this + 0x2b0 ), param_2, local_98);
   Dependency::~Dependency(local_40);
   if (local_80 != (void*)0x0) {
      if ((int)local_88 != 0) {
         local_88 = local_88 & 0xffffffff00000000;
      }
      Memory::free_static(local_80, false);
   }
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::_multimesh_initialize(RID) */void GLES3::MeshStorage::_multimesh_initialize(MeshStorage *this, undefined8 param_2) {
   long *plVar1;
   long lVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 uStack_128;
   undefined4 local_11c;
   undefined4 local_114;
   long local_c8;
   undefined4 local_a0;
   long local_70;
   long local_60;
   long local_50;
   Dependency local_48[40];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar3 = &uStack_128;
   for (lVar2 = 0x22; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }
   local_11c = 1;
   local_114 = 0xffffffff;
   local_a0 = 1;
   local_20 = 2;
   RID_Alloc<GLES3::MultiMesh,true>::initialize_rid((RID_Alloc<GLES3::MultiMesh,true>*)( this + 0x250 ), param_2, &uStack_128);
   Dependency::~Dependency(local_48);
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
   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
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
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* GLES3::MeshStorage::mesh_get_surface(RID, int) const */undefined8 *GLES3::MeshStorage::mesh_get_surface(undefined8 *param_1, long param_2, ulong param_3, uint param_4) {
   long *plVar1;
   uint *puVar2;
   undefined4 uVar3;
   undefined4 *puVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   int iVar8;
   undefined4 *puVar9;
   long lVar10;
   long lVar11;
   undefined8 *puVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   bool bVar15;
   byte bVar16;
   undefined4 local_158[2];
   long local_150;
   long local_148[2];
   undefined4 local_138;
   undefined8 local_130;
   long local_120[2];
   long local_110;
   long local_100;
   undefined4 local_f8;
   long local_e8;
   int local_e0;
   undefined8 local_dc;
   undefined4 uStack_d4;
   undefined4 uStack_d0;
   undefined4 uStack_cc;
   undefined4 uStack_c8;
   long local_b8[2];
   long local_a8;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined4 local_80;
   undefined4 uStack_7c;
   undefined4 uStack_78;
   undefined4 uStack_74;
   Vector<unsigned_char> local_70[8];
   long local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   bVar16 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      puVar2 = (uint*)( *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0xd8 );
      if (puVar2[0x34] == ( uint )(param_3 >> 0x20)) {
         if (puVar2[4] <= param_4) {
            _err_print_index_error("mesh_get_surface", "drivers/gles3/storage/mesh_storage.cpp", 0x25a, (ulong)param_4, (ulong)puVar2[4], "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            puVar12 = param_1;
            for (lVar14 = 0x1e; lVar14 != 0; lVar14 = lVar14 + -1) {
               *puVar12 = 0;
               puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
            }
            *(undefined4*)param_1 = 5;
            *(undefined1*)( (long)param_1 + 0xc ) = 8;
            for (int i = 0; i < 3; i++) {
               *(undefined2*)( (long)param_1 + ( 16*i + 154 ) ) = 16256;
            }
            goto LAB_00119768;
         }
         local_a0 = ZEXT416(_LC54);
         local_138 = 5;
         local_120[0] = 0;
         puVar4 = *(undefined4**)( *(long*)( puVar2 + 2 ) + (long)(int)param_4 * 8 );
         local_110 = 0;
         local_100 = 0;
         local_130 = *(undefined8*)( puVar4 + 2 );
         local_f8 = 0;
         local_e8 = 0;
         local_e0 = 0;
         local_dc = 0;
         uStack_d4 = 0;
         uStack_d0 = 0;
         uStack_cc = 0;
         uStack_c8 = 0;
         local_b8[0] = 0;
         local_a8 = 0;
         local_80 = 0x3f800000;
         uStack_7c = 0;
         uStack_78 = 0;
         uStack_74 = 0;
         local_68 = 0;
         local_50 = 0;
         local_60 = (undefined1[16])0x0;
         local_90 = local_a0;
         if (puVar4[4] != 0) {
            GLES3::Utilities::buffer_get_data((uint)local_158, 0x8892, puVar4[4]);
            if (local_150 != 0) {
               local_120[0] = local_150;
            }
            if (( ( uint ) * (undefined8*)( puVar4 + 2 ) & 0x20000006 ) == 2) {
               if (local_120[0] == 0) {
                  lVar14 = -4;
               } else {
                  lVar14 = *(long*)( local_120[0] + -8 ) + -4;
               }
               CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_120, lVar14);
            }
         }
         lVar14 = local_110;
         if (puVar4[5] != 0) {
            GLES3::Utilities::buffer_get_data((uint)local_158, 0x8892, puVar4[5]);
            lVar7 = local_150;
            if (local_110 == local_150) {
               lVar14 = local_110;
               if (local_110 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_110 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_150 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     lVar14 = local_110;
                  }
               }
            } else {
               lVar14 = local_150;
               if (local_110 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_110 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  lVar14 = local_150;
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_110 + -0x10 ), false);
                     lVar14 = local_150;
                  }
               }
            }
         }
         local_110 = lVar14;
         lVar14 = local_100;
         if (puVar4[6] != 0) {
            GLES3::Utilities::buffer_get_data((uint)local_158, 0x8892, puVar4[6]);
            lVar7 = local_150;
            if (local_100 == local_150) {
               lVar14 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_150 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     lVar14 = local_100;
                  }
               }
            } else {
               lVar14 = local_150;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  lVar14 = local_150;
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_100 + -0x10 ), false);
                     lVar14 = local_150;
                  }
               }
            }
         }
         local_100 = lVar14;
         local_f8 = puVar4[7];
         local_138 = *puVar4;
         local_e0 = puVar4[0x20];
         lVar14 = local_e8;
         if (local_e0 != 0) {
            GLES3::Utilities::buffer_get_data((uint)local_158, 0x8893, puVar4[0x1f]);
            lVar7 = local_150;
            if (local_e8 == local_150) {
               lVar14 = local_e8;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_150 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     lVar14 = local_e8;
                  }
               }
            } else {
               lVar14 = local_150;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  lVar14 = local_150;
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_e8 + -0x10 ), false);
                     lVar14 = local_150;
                  }
               }
            }
         }
         local_e8 = lVar14;
         local_dc = *(undefined8*)( puVar4 + 0x27 );
         lVar14 = 0;
         uStack_cc = ( undefined4 ) * (undefined8*)( puVar4 + 0x2b );
         uStack_c8 = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x2b ) >> 0x20);
         uStack_d4 = ( undefined4 ) * (undefined8*)( puVar4 + 0x29 );
         uStack_d0 = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x29 ) >> 0x20);
         if (puVar4[0x26] != 0) {
            do {
               puVar9 = (undefined4*)( lVar14 * 0x10 + *(long*)( puVar4 + 0x24 ) );
               uVar3 = *puVar9;
               GLES3::Utilities::buffer_get_data((uint)local_158, 0x8893, puVar9[3]);
               lVar7 = local_150;
               local_148[0] = 0;
               local_158[0] = uVar3;
               if (local_150 == 0) {
                  LAB_00119348:if (local_b8[0] == 0) goto LAB_00119495;
                  LAB_00119359:lVar13 = local_148[0];
                  iVar8 = CowData<RenderingServer::SurfaceData::LOD>::resize<false>((CowData<RenderingServer::SurfaceData::LOD>*)local_b8, *(long*)( local_b8[0] + -8 ) + 1);
                  if (iVar8 != 0) goto LAB_001194b0;
                  LAB_00119372:if (local_b8[0] == 0) {
                     lVar11 = -1;
                     lVar10 = 0;
                  } else {
                     lVar10 = *(long*)( local_b8[0] + -8 );
                     lVar11 = lVar10 + -1;
                     if (-1 < lVar11) {
                        CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
                        puVar9 = (undefined4*)( local_b8[0] + lVar11 * 0x18 );
                        *puVar9 = local_158[0];
                        if (lVar13 != *(long*)( puVar9 + 4 )) {
                           CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar9 + 4 ), (CowData*)local_148);
                        }
                        goto LAB_001193d5;
                     }
                  }
                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar11, lVar10, "p_index", "size()", "", false, false);
               } else {
                  plVar1 = (long*)( local_150 + -0x10 );
                  do {
                     lVar13 = *plVar1;
                     if (lVar13 == 0) goto LAB_0011947f;
                     LOCK();
                     lVar10 = *plVar1;
                     bVar15 = lVar13 == lVar10;
                     if (bVar15) {
                        *plVar1 = lVar13 + 1;
                        lVar10 = lVar13;
                     }
                     UNLOCK();
                  } while ( !bVar15 );
                  if (lVar10 != -1) {
                     local_148[0] = local_150;
                     goto LAB_00119348;
                  }
                  LAB_0011947f:if (local_b8[0] != 0) goto LAB_00119359;
                  LAB_00119495:lVar13 = local_148[0];
                  iVar8 = CowData<RenderingServer::SurfaceData::LOD>::resize<false>((CowData<RenderingServer::SurfaceData::LOD>*)local_b8, 1);
                  if (iVar8 == 0) goto LAB_00119372;
                  LAB_001194b0:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               }
               LAB_001193d5:if (lVar13 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar13 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_148[0] + -0x10 ), false);
                  }
               }
               if (lVar7 != 0) {
                  plVar1 = (long*)( lVar7 + -0x10 );
                  LOCK();
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(plVar1, false);
                  }
               }
               lVar14 = lVar14 + 1;
            } while ( (uint)lVar14 < (uint)puVar4[0x26] );
         }
         if (local_a8 != *(long*)( puVar4 + 0x30 )) {
            CowData<AABB>::_ref((CowData<AABB>*)&local_a8, (CowData*)( puVar4 + 0x30 ));
         }
         local_a0 = *(undefined1(*) [16])( puVar4 + 0x32 );
         local_90 = *(undefined1(*) [16])( puVar4 + 0x36 );
         local_80 = ( undefined4 ) * (undefined8*)( puVar4 + 0x3a );
         uStack_7c = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x3a ) >> 0x20);
         uStack_78 = ( undefined4 ) * (undefined8*)( puVar4 + 0x3c );
         uStack_74 = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x3c ) >> 0x20);
         if (*puVar2 != 0) {
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_68 + -0x10 ), false);
               }
               local_68 = 0;
               if (*puVar2 == 0) goto LAB_001195e7;
            }
            lVar14 = 0;
            do {
               GLES3::Utilities::buffer_get_data((uint)local_158, 0x8892, *(uint*)( *(long*)( puVar4 + 0x42 ) + lVar14 * 8 ));
               Vector<unsigned_char>::append_array(local_70);
               lVar7 = local_150;
               if (local_150 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_150 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_150 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }
               }
               lVar14 = lVar14 + 1;
            } while ( (uint)lVar14 < *puVar2 );
         }
         LAB_001195e7:lVar7 = local_b8[0];
         lVar14 = local_e8;
         uVar5 = *(undefined8*)*(undefined1(*) [16])( puVar4 + 0x3e );
         uVar6 = *(undefined8*)( puVar4 + 0x40 );
         local_60 = *(undefined1(*) [16])( puVar4 + 0x3e );
         *(undefined4*)param_1 = local_138;
         param_1[1] = local_130;
         *(undefined8*)( (long)param_1 + 0x5c ) = local_dc;
         *(ulong*)( (long)param_1 + 100 ) = CONCAT44(uStack_d0, uStack_d4);
         param_1[3] = local_120[0];
         local_120[0] = 0;
         param_1[5] = local_110;
         local_110 = 0;
         param_1[7] = local_100;
         local_100 = 0;
         *(undefined4*)( param_1 + 8 ) = local_f8;
         local_e8 = 0;
         param_1[10] = lVar14;
         *(int*)( param_1 + 0xb ) = local_e0;
         *(ulong*)( (long)param_1 + 0x6c ) = CONCAT44(uStack_c8, uStack_cc);
         local_b8[0] = 0;
         param_1[0x10] = lVar7;
         param_1[0x12] = local_a8;
         param_1[0x13] = local_a0._0_8_;
         param_1[0x14] = local_a0._8_8_;
         param_1[0x1b] = uVar5;
         param_1[0x1c] = uVar6;
         param_1[0x1a] = local_68;
         param_1[0x15] = local_90._0_8_;
         param_1[0x16] = local_90._8_8_;
         param_1[0x1d] = local_50;
         param_1[0x17] = CONCAT44(uStack_7c, local_80);
         param_1[0x18] = CONCAT44(uStack_74, uStack_78);
         CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
         if (local_e8 != 0) {
            LOCK();
            plVar1 = (long*)( local_e8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_e8 + -0x10 ), false);
            }
         }
         if (local_100 != 0) {
            LOCK();
            plVar1 = (long*)( local_100 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_100 + -0x10 ), false);
            }
         }
         if (local_110 != 0) {
            LOCK();
            plVar1 = (long*)( local_110 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_110 + -0x10 ), false);
            }
         }
         if (local_120[0] != 0) {
            LOCK();
            plVar1 = (long*)( local_120[0] + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_120[0] + -0x10 ), false);
            }
         }
         goto LAB_00119768;
      }
      if (puVar2[0x34] + 0x80000000 < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }
   }
   _err_print_error("mesh_get_surface", "drivers/gles3/storage/mesh_storage.cpp", 0x259, "Parameter \"mesh\" is null.", 0, 0);
   puVar12 = param_1;
   for (lVar14 = 0x1e; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar12 = 0;
      puVar12 = puVar12 + (ulong)bVar16 * -2 + 1;
   }
   *(undefined4*)param_1 = 5;
   *(undefined1*)( (long)param_1 + 0xc ) = 8;
   for (int i = 0; i < 3; i++) {
      *(undefined2*)( (long)param_1 + ( 16*i + 154 ) ) = 16256;
   }
   LAB_00119768:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* SkeletonShaderGLES3::~SkeletonShaderGLES3() */void SkeletonShaderGLES3::~SkeletonShaderGLES3(SkeletonShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_001223e8;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   return;
}/* SkeletonShaderGLES3::~SkeletonShaderGLES3() */void SkeletonShaderGLES3::~SkeletonShaderGLES3(SkeletonShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_001223e8;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   operator_delete(this, 0x130);
   return;
}/* SkeletonShaderGLES3::_init() */void SkeletonShaderGLES3::_init(SkeletonShaderGLES3 *this) {
   ShaderGLES3::_setup((char*)this, "\n// Compatibility renames. These are exposed with the \"godot_\" prefix\n// to work around two distinct Adreno bugs:\n// 1. Some Adreno devices expose ES310 functions in ES300 shaders.\n//    Internally, we must use the \"godot_\" prefix, but user shaders\n//    will be mapped automatically.\n// 2. Adreno 3XX devices have poor implementations of the other packing\n//    functions, so we just use our own there to keep it simple.\n\n#ifdef USE_HALF2FLOAT\n// Floating point pack/unpack functions are part of the GLSL ES 300 specification used by web and mobile.\n// It appears to be safe to expose these on mobile, but when running through ANGLE this appears to break.\nuint float2half(uint f) {\n\tuint e = f & uint(0x7f800000);\n\tif (e <= uint(0x38000000)) {\n\t\treturn uint(0);\n\t} else {\n\t\treturn ((f >> uint(16)) & uint(0x8000)) |\n\t\t\t\t(((e - uint(0x38000000)) >> uint(13)) & uint(0x7c00)) |\n\t\t\t\t((f >> uint(13)) & uint(0x03ff));\n\t}\n}\n\nuint half2float(uint h) {\n\tuint h_e = h & uint(0x7c00);\n\treturn ((h & uint(0x8000)) << uint(16)) | uint((h_e >> uint(10)) != uint(0)) * (((h_e + uint(0x1c000)) << uint(13)) | ((h & uint(0x03ff)) << uint(13)));\n}\n\nuint godot_packHalf2x16(vec2 v) {\n\treturn float2half(floatBitsToUint(v.x)) | float2half(floatBitsToUint(v.y)) << uint(16);\n}\n\nvec2 godot_unpackHalf2x16(uint v) {\n\treturn vec2(uintBitsToFloat(half2float(v & uint(0xffff))),\n\t\t\tuintBitsToFloat(half2float(v >> uint(16))));\n}\n\nuint godot_packUnorm2x16(vec2 v) {\n\tuvec2 uv = uvec2(round(clamp(v, vec2(0.0), vec2(1.0)) * 65535.0));\n\treturn uv.x | uv.y << uint(16);\n}\n\nvec2 godot_unpackUnorm2x16(uint p) {\n\treturn vec2(float(p & uint(0xffff)), float(p >> uint(16))) * 0.000015259021; // 1.0 / 65535.0 optimization\n}\n\nuint godot_packSnorm2x16(vec2 v) {\n\tuvec2 uv = uvec2(round(clamp(v, vec2(-1.0), vec2(1.0)) * 32767.0) + 32767.0);\n\treturn uv.x | uv.y << uint(16);\n}\n\nvec2 godot_unpackSnorm2x16(uint p) {\n\tvec2 v = vec2(float(p & uint(0xffff)), float(p >> uint(16)));\n\treturn clamp((v - 32767.0) * vec2(0.00003051851), vec2(-1.0), vec2(1.0));\n}\n\n#define packHalf2x16 godot...", /* TRUNCATED STRING LITERAL */, "\nvoid main() {\n\n}\n/* clang-format on */\n", 0x119c25, (char**)&DAT_00000008, 0x125560, (UBOPair*)0x0, (int)_init(), ::_ubo_pairs, (Feedback*)0x3, 0x125480, (TexUnitPair*)0x1, 0x125540, (Specialization*)0x7, 0x1254c0, (char**)0x2);
   return;
}/* GLES3::MeshStorage::mesh_instance_set_skeleton(RID, RID) [clone .cold] */void GLES3::MeshStorage::mesh_instance_set_skeleton(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_instance_set_canvas_item_transform(RID, Transform2D const&) [clone
   .cold] */void GLES3::MeshStorage::mesh_instance_set_canvas_item_transform(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   undefined8 *unaff_RBX;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }
   _DAT_00000088 = *unaff_RBX;
   uRam0000000000000090 = unaff_RBX[1];
   _DAT_00000098 = unaff_RBX[2];
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* GLES3::MeshStorage::mesh_instance_check_for_update(RID) [clone .cold] */void GLES3::MeshStorage::mesh_instance_check_for_update(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* GLES3::MeshStorage::mesh_instance_free(RID) [clone .cold] */void GLES3::MeshStorage::mesh_instance_free(undefined8 param_1, undefined8 param_2) {
   code *pcVar1;
   int unaff_R13D;
   if (unaff_R13D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2);
   }
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::MeshStorage::mesh_instance_create(RID) [clone .cold] */void GLES3::MeshStorage::mesh_instance_create(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
   code *pcVar1;
   int in_EAX;
   undefined8 unaff_RBP;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_3);
   }
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   _DAT_00000000 = unaff_RBP;
   ( *pcVar1 )();
}/* CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011b7dc(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned int>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_int>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011b7f4(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<float>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011b80c(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_insert_with_hash(unsigned int, unsigned long const&,
   ShaderGLES3::Version::Specialization const&) [clone .isra.0] */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_insert_with_hash(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, uint param_1, ulong *param_2, Specialization *param_3) {
   undefined8 *puVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   Specialization SVar4;
   Specialization SVar5;
   uint uVar6;
   undefined4 uVar7;
   long lVar8;
   undefined8 uVar9;
   code *pcVar10;
   void *pvVar11;
   long lVar12;
   void *pvVar13;
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   void *pvVar18;
   ulong uVar19;
   uint uVar20;
   long lVar21;
   uint *puVar22;
   ulong *puVar23;
   void *pvVar24;
   undefined8 uVar25;
   undefined8 uVar26;
   undefined8 uVar27;
   Specialization local_70;
   undefined4 local_68;
   Specialization local_58;
   uint local_54;
   uVar25 = *(undefined8*)param_3;
   uVar19 = (ulong)param_1 % ( ulong ) * (uint*)( this + 0x18 );
   local_68 = *(undefined4*)( param_3 + 8 );
   local_54 = *(uint*)( param_3 + 0x10 );
   if (local_54 == 0) {
      uVar15 = 0;
      pvVar11 = (void*)0x0;
   } else {
      uVar15 = local_54 - 1 | local_54 - 1 >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 >> 4 | uVar15;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
      pvVar11 = (void*)Memory::realloc_static((void*)0x0, (ulong)uVar15 << 2, false);
      if (pvVar11 == (void*)0x0) goto LAB_0011bd55;
      if (*(int*)( param_3 + 0x10 ) != 0) {
         lVar21 = *(long*)( param_3 + 0x18 );
         lVar12 = 0;
         do {
            *(undefined4*)( (long)pvVar11 + lVar12 * 4 ) = *(undefined4*)( lVar21 + lVar12 * 4 );
            lVar12 = lVar12 + 1;
         } while ( (uint)lVar12 < *(uint*)( param_3 + 0x10 ) );
      }
   }
   uVar6 = *(uint*)( param_3 + 0x20 );
   uVar26 = CONCAT44(uVar15, local_54);
   if (uVar6 == 0) {
      uVar15 = 0;
      pvVar13 = (void*)0x0;
   } else {
      uVar15 = uVar6 - 1 | uVar6 - 1 >> 1;
      uVar15 = uVar15 >> 2 | uVar15;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = ( uVar15 >> 0x10 | uVar15 ) + 1;
      pvVar13 = (void*)Memory::realloc_static((void*)0x0, (ulong)uVar15 << 2, false);
      if (pvVar13 == (void*)0x0) goto LAB_0011bd55;
      if (*(int*)( param_3 + 0x20 ) != 0) {
         lVar21 = *(long*)( param_3 + 0x28 );
         lVar12 = 0;
         do {
            *(undefined4*)( (long)pvVar13 + lVar12 * 4 ) = *(undefined4*)( lVar21 + lVar12 * 4 );
            lVar12 = lVar12 + 1;
         } while ( (uint)lVar12 < *(uint*)( param_3 + 0x20 ) );
      }
   }
   local_58 = param_3[0x30];
   lVar21 = uVar19 * 4;
   local_70 = param_3[0x31];
   uVar27 = CONCAT44(uVar15, uVar6);
   lVar12 = *(long*)( this + 0x10 );
   puVar22 = (uint*)( lVar12 + lVar21 );
   lVar17 = *(long*)( this + 8 );
   uVar15 = *puVar22;
   lVar8 = *(long*)this;
   if (uVar15 != 0) {
      uVar14 = ( ulong ) * (uint*)( this + 0x18 );
      uVar20 = 0;
      pvVar18 = pvVar11;
      puVar23 = param_2;
      pvVar24 = pvVar13;
      do {
         uVar16 = ( uint )(( ulong )(uint)(( (int)uVar19 + (int)uVar14 ) - (int)( (ulong)uVar15 % uVar14 )) % uVar14);
         pvVar11 = pvVar18;
         param_2 = puVar23;
         pvVar13 = pvVar24;
         if (uVar16 < uVar20) {
            *puVar22 = param_1;
            puVar1 = (undefined8*)( lVar17 + uVar19 * 8 );
            param_2 = (ulong*)*puVar1;
            *puVar1 = puVar23;
            puVar1 = (undefined8*)( lVar8 + uVar19 * 0x38 );
            uVar6 = *(uint*)( puVar1 + 4 );
            local_54 = *(uint*)( puVar1 + 2 );
            pvVar11 = (void*)puVar1[3];
            uVar9 = puVar1[2];
            puVar1[3] = pvVar18;
            uVar2 = *puVar1;
            uVar3 = puVar1[4];
            SVar4 = *(Specialization*)( puVar1 + 6 );
            uVar7 = *(undefined4*)( puVar1 + 1 );
            *(Specialization*)( puVar1 + 6 ) = local_58;
            *puVar1 = uVar25;
            SVar5 = *(Specialization*)( (long)puVar1 + 0x31 );
            puVar1[2] = uVar26;
            *(Specialization*)( (long)puVar1 + 0x31 ) = local_70;
            puVar1[4] = uVar27;
            pvVar13 = (void*)puVar1[5];
            *(undefined4*)( puVar1 + 1 ) = local_68;
            puVar1[5] = pvVar24;
            uVar14 = ( ulong ) * (uint*)( this + 0x18 );
            param_1 = uVar15;
            uVar20 = uVar16;
            uVar25 = uVar2;
            uVar26 = uVar9;
            uVar27 = uVar3;
            local_58 = SVar4;
            local_70 = SVar5;
            local_68 = uVar7;
         }
         uVar20 = uVar20 + 1;
         uVar19 = ( ulong )((int)uVar19 + 1) % uVar14;
         lVar21 = uVar19 * 4;
         puVar22 = (uint*)( lVar12 + lVar21 );
         uVar15 = *puVar22;
         pvVar18 = pvVar11;
         puVar23 = param_2;
         pvVar24 = pvVar13;
      } while ( uVar15 != 0 );
   }
   *(ulong**)( lVar17 + uVar19 * 8 ) = param_2;
   puVar1 = (undefined8*)( lVar8 + uVar19 * 0x38 );
   puVar1[2] = 0;
   *(undefined4*)( puVar1 + 1 ) = local_68;
   puVar1[3] = 0;
   *puVar1 = uVar25;
   if (local_54 != 0) {
      uVar15 = local_54 - 1 | local_54 - 1 >> 1;
      uVar15 = uVar15 | uVar15 >> 2;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 >> 8 | uVar15;
      uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
      *(uint*)( (long)puVar1 + 0x14 ) = uVar15;
      lVar12 = Memory::realloc_static((void*)0x0, (ulong)uVar15 * 4, false);
      puVar1[3] = lVar12;
      if (lVar12 == 0) goto LAB_0011bd55;
      *(uint*)( puVar1 + 2 ) = local_54;
      lVar17 = 0;
      do {
         *(undefined4*)( lVar12 + lVar17 ) = *(undefined4*)( (long)pvVar11 + lVar17 );
         lVar17 = lVar17 + 4;
      } while ( lVar17 != (ulong)local_54 << 2 );
   }
   puVar1[4] = 0;
   puVar1[5] = 0;
   if (uVar6 == 0) {
      *(Specialization*)( puVar1 + 6 ) = local_58;
      *(Specialization*)( (long)puVar1 + 0x31 ) = local_70;
      *(uint*)( *(long*)( this + 0x10 ) + lVar21 ) = param_1;
      *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
      if (pvVar13 == (void*)0x0) goto joined_r0x0011bc97;
   } else {
      uVar15 = uVar6 - 1 >> 1 | uVar6 - 1;
      uVar15 = uVar15 >> 2 | uVar15;
      uVar15 = uVar15 | uVar15 >> 4;
      uVar15 = uVar15 | uVar15 >> 8;
      uVar15 = ( uVar15 | uVar15 >> 0x10 ) + 1;
      *(uint*)( (long)puVar1 + 0x24 ) = uVar15;
      lVar12 = Memory::realloc_static((void*)0x0, (ulong)uVar15 * 4, false);
      puVar1[5] = lVar12;
      if (lVar12 == 0) {
         LAB_0011bd55:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar10 = (code*)invalidInstructionException();
         ( *pcVar10 )();
      }
      *(uint*)( puVar1 + 4 ) = uVar6;
      lVar17 = 0;
      do {
         *(undefined4*)( lVar12 + lVar17 ) = *(undefined4*)( (long)pvVar13 + lVar17 );
         lVar17 = lVar17 + 4;
      } while ( lVar17 != (ulong)uVar6 << 2 );
      *(Specialization*)( puVar1 + 6 ) = local_58;
      *(Specialization*)( (long)puVar1 + 0x31 ) = local_70;
      *(uint*)( *(long*)( this + 0x10 ) + lVar21 ) = param_1;
      *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
   }
   Memory::free_static(pvVar13, false);
   joined_r0x0011bc97:if (pvVar11 == (void*)0x0) {
      return;
   }
   Memory::free_static(pvVar11, false);
   return;
}/* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      if (*(int*)( this + 0x20 ) != 0) {
         *(undefined4*)( this + 0x20 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x28 ), false);
   }
   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      if (*(int*)( this + 0x10 ) != 0) {
         *(undefined4*)( this + 0x10 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x18 ), false);
      return;
   }
   return;
}/* GLES3::Mesh::~Mesh() */void GLES3::Mesh::~Mesh(Mesh *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   Dependency::~Dependency((Dependency*)( this + 0xa0 ));
   if (*(long*)( this + 0x98 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x98 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x98 );
         *(undefined8*)( this + 0x98 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   pvVar1 = *(void**)( this + 0x70 );
   if (pvVar1 != (void*)0x0) {
      if (*(int*)( this + 0x94 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x90 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x88 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x90 ) * 4 ) << 2);
         }
         *(undefined4*)( this + 0x94 ) = 0;
      }
      Memory::free_static(pvVar1, false);
      Memory::free_static(*(void**)( this + 0x80 ), false);
      Memory::free_static(*(void**)( this + 0x78 ), false);
      Memory::free_static(*(void**)( this + 0x88 ), false);
   }
   plVar4 = *(long**)( this + 0x60 );
   if (plVar4 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar4;
         if (pvVar1 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0011bf7b;
            }
            break;
         }
         if (*(long**)( (long)pvVar1 + 0x18 ) == plVar4) {
            lVar3 = *(long*)( (long)pvVar1 + 8 );
            lVar2 = *(long*)( (long)pvVar1 + 0x10 );
            *plVar4 = lVar3;
            if (pvVar1 == (void*)plVar4[1]) {
               plVar4[1] = lVar2;
            }
            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar3;
               lVar3 = *(long*)( (long)pvVar1 + 8 );
            }
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }
            Memory::free_static(pvVar1, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar4 = *(long**)( this + 0x60 );
      } while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }
   LAB_0011bf7b:if (*(long*)( this + 0x58 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x58 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x58 );
         *(undefined8*)( this + 0x58 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::insert(unsigned long const&,
   ShaderGLES3::Version::Specialization const&) */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, ulong *param_1, Specialization *param_2) {
   undefined8 *puVar1;
   Specialization *pSVar2;
   uint *puVar3;
   ulong uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uint *puVar8;
   uint uVar9;
   Specialization *pSVar10;
   undefined8 *puVar11;
   uVar9 = *(uint*)( this + 0x18 );
   if ((double)uVar9 * __LC119 < (double)( *(int*)( this + 0x1c ) + 1 )) {
      uVar4 = ( ulong )(uVar9 * 2);
      *(undefined4*)( this + 0x1c ) = 0;
      if (uVar9 * 2 == 0) {
         uVar4 = 1;
      }
      puVar1 = *(undefined8**)( this + 8 );
      pSVar2 = *(Specialization**)this;
      *(int*)( this + 0x18 ) = (int)uVar4;
      puVar3 = *(uint**)( this + 0x10 );
      uVar5 = Memory::alloc_static(uVar4 << 3, false);
      *(undefined8*)( this + 8 ) = uVar5;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x38, false);
      *(undefined8*)this = uVar5;
      lVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      *(long*)( this + 0x10 ) = lVar6;
      if (*(int*)( this + 0x18 ) != 0) {
         lVar7 = 0;
         do {
            *(undefined4*)( lVar6 + lVar7 * 4 ) = 0;
            lVar7 = lVar7 + 1;
         } while ( (uint)lVar7 < *(uint*)( this + 0x18 ) );
      }
      if (uVar9 != 0) {
         puVar8 = puVar3;
         pSVar10 = pSVar2;
         puVar11 = puVar1;
         do {
            if (*puVar8 != 0) {
               _insert_with_hash(this, *puVar8, (ulong*)*puVar11, pSVar10);
               if (*(void**)( pSVar10 + 0x28 ) != (void*)0x0) {
                  if (*(int*)( pSVar10 + 0x20 ) != 0) {
                     *(undefined4*)( pSVar10 + 0x20 ) = 0;
                  }
                  Memory::free_static(*(void**)( pSVar10 + 0x28 ), false);
               }
               if (*(void**)( pSVar10 + 0x18 ) != (void*)0x0) {
                  if (*(int*)( pSVar10 + 0x10 ) != 0) {
                     *(undefined4*)( pSVar10 + 0x10 ) = 0;
                  }
                  Memory::free_static(*(void**)( pSVar10 + 0x18 ), false);
               }
            }
            puVar11 = puVar11 + 1;
            puVar8 = puVar8 + 1;
            pSVar10 = pSVar10 + 0x38;
         } while ( puVar11 != puVar1 + uVar9 );
         Memory::free_static(puVar1, false);
         Memory::free_static(pSVar2, false);
         Memory::free_static(puVar3, false);
      }
   }
   uVar4 = (long)*param_1 * 0x3ffff - 1;
   uVar4 = ( uVar4 ^ uVar4 >> 0x1f ) * 0x15;
   uVar4 = ( uVar4 ^ uVar4 >> 0xb ) * 0x41;
   uVar9 = ( uint )(uVar4 >> 0x16) ^ (uint)uVar4;
   if (uVar9 == 0) {
      uVar9 = 1;
   }
   _insert_with_hash(this, uVar9, (ulong*)*param_1, param_2);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Dependency*, HashMapHasherDefault, HashMapComparatorDefault<Dependency*>
   >::insert(Dependency* const&) */undefined1[16];HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(Dependency **param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   int iVar35;
   long *in_RDX;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   uint uVar39;
   ulong uVar40;
   undefined4 uVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   undefined1 auVar45[16];
   ulong uStack_98;
   Dependency *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   local_88 = (Dependency*)*in_RSI;
   if (local_88 == (Dependency*)0x0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      uVar32 = *(uint*)( in_RSI + 4 );
      lVar34 = *in_RDX;
      local_88 = (Dependency*)*in_RSI;
      if (local_88 != (Dependency*)0x0) goto LAB_0011c3bf;
   } else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_0011c3bf:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = lVar34 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_0011c861;
               }
               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            } while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }
      }
   }
   if ((float)uVar31 * __LC135 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Dependency*)*in_RSI;
         goto LAB_0011c861;
      }
      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }
      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }
      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }
               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            };
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         } while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }
      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (Dependency*)*in_RSI;
      lVar34 = *in_RDX;
   }
   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   *(long*)( local_88 + uVar42 * 8 ) = lVar34;
   uVar33 = lVar34 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }
   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar2 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar34 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar34 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }
      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar34 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar34 );
      uVar32 = *puVar1;
   };
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0011c861:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::operator[](unsigned int const&) */undefined1[16];HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator *this,uint*param_1 {
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
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
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1(*pauVar36)[16];
   uint uVar37;
   uint uVar38;
   uint uVar39;
   ulong uVar40;
   undefined8 uVar41;
   void *__s_00;
   undefined1(*pauVar42)[16];
   ulong uVar43;
   int iVar44;
   ulong uVar45;
   long lVar46;
   long lVar47;
   ulong uVar48;
   undefined8 uVar49;
   uint uVar50;
   ulong uVar51;
   long lVar52;
   uint uVar53;
   uint uVar54;
   undefined1(*pauVar55)[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   long lStack_90;
   void *local_70;
   local_70 = *(void**)( this + 8 );
   uVar40 = ( ulong ) * (uint*)( this + 0x28 );
   uVar38 = *param_1;
   uVar39 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar51 = CONCAT44(0, uVar39);
   if (local_70 == (void*)0x0) {
      uVar40 = uVar51 * 4;
      uVar48 = uVar51 * 8;
      uVar41 = Memory::alloc_static(uVar40, false);
      *(undefined8*)( this + 0x10 ) = uVar41;
      lStack_90 = 0x11cfdb;
      local_70 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( this + 8 ) = local_70;
      if (uVar39 == 0) {
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
         if (local_70 == (void*)0x0) goto LAB_0011cb43;
      } else {
         pvVar3 = *(void**)( this + 0x10 );
         if (( pvVar3 < (void*)( (long)local_70 + uVar48 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            } while ( uVar51 != uVar40 );
            iVar44 = *(int*)( this + 0x2c );
            uVar38 = *param_1;
         } else {
            memset(pvVar3, 0, uVar40);
            lStack_90 = 0x11d024;
            memset(local_70, 0, uVar48);
            iVar44 = *(int*)( this + 0x2c );
            uVar38 = *param_1;
         }
      }
      if (iVar44 != 0) {
         uVar40 = ( ulong ) * (uint*)( this + 0x28 );
         lVar52 = *(long*)( this + 0x10 );
         goto LAB_0011cec3;
      }
   } else {
      iVar44 = *(int*)( this + 0x2c );
      if (iVar44 != 0) {
         uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
         uVar53 = uVar37 ^ uVar37 >> 0x10;
         if (uVar37 == uVar37 >> 0x10) {
            uVar53 = 1;
            uVar45 = uVar48;
         } else {
            uVar45 = uVar53 * uVar48;
         }
         lVar52 = *(long*)( this + 0x10 );
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar51;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar45;
         lVar46 = SUB168(auVar4 * auVar20, 8);
         uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
         uVar54 = SUB164(auVar4 * auVar20, 8);
         if (uVar37 != 0) {
            uVar50 = 0;
            lVar47 = lVar46;
            do {
               if (( uVar53 == uVar37 ) && ( uVar38 == *(uint*)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) )) {
                  auVar56._0_8_ = *(long*)( (long)local_70 + (ulong)uVar54 * 8 ) + 0x14;
                  auVar56._8_8_ = lVar47;
                  return auVar56;
               }
               uVar50 = uVar50 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( uVar54 + 1 ) * uVar48;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar51;
               lVar46 = SUB168(auVar5 * auVar21, 8);
               uVar37 = *(uint*)( lVar52 + lVar46 * 4 );
               uVar54 = SUB164(auVar5 * auVar21, 8);
            } while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar48,auVar22._8_8_ = 0,auVar22._0_8_ = uVar51,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar48,auVar23._8_8_ = 0,auVar23._0_8_ = uVar51,lVar47 = SUB168(auVar7 * auVar23, 8),uVar50 <= SUB164(auVar7 * auVar23, 8) );
         }
         LAB_0011cec3:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
         uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
         uVar37 = uVar39 ^ uVar39 >> 0x10;
         if (uVar39 == uVar39 >> 0x10) {
            uVar37 = 1;
            uVar43 = uVar48;
         } else {
            uVar43 = uVar37 * uVar48;
         }
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar45;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar43;
         lVar46 = SUB168(auVar16 * auVar32, 8);
         uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
         uVar53 = SUB164(auVar16 * auVar32, 8);
         if (uVar39 != 0) {
            uVar54 = 0;
            lVar47 = lVar46;
            do {
               if (( uVar37 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_70 + lVar46 * 8 ) + 0x10 ) == uVar38 )) {
                  pauVar42 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar53 * 8 );
                  *(undefined4*)( pauVar42[1] + 4 ) = 0;
                  lStack_90 = lVar47;
                  goto LAB_0011cea4;
               }
               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( uVar53 + 1 ) * uVar48;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
               uVar53 = SUB164(auVar17 * auVar33, 8);
            } while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,lVar47 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }
      }
   }
   LAB_0011cb43:if ((float)uVar51 * __LC135 < (float)( iVar44 + 1 )) {
      uVar38 = *(uint*)( this + 0x28 );
      if (uVar38 == 0x1c) {
         pauVar42 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011cea4;
      }
      uVar40 = ( ulong )(uVar38 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
      if (uVar38 + 1 < 2) {
         uVar40 = 2;
      }
      uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
      uVar48 = (ulong)uVar38;
      *(int*)( this + 0x28 ) = (int)uVar40;
      pvVar3 = *(void**)( this + 0x10 );
      uVar40 = uVar48 * 4;
      uVar51 = uVar48 * 8;
      uVar41 = Memory::alloc_static(uVar40, false);
      *(undefined8*)( this + 0x10 ) = uVar41;
      __s_00 = (void*)Memory::alloc_static(uVar51, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar38 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            } while ( uVar40 != uVar48 );
         } else {
            memset(__s, 0, uVar40);
            memset(__s_00, 0, uVar51);
         }
      }
      if (uVar39 != 0) {
         uVar40 = 0;
         do {
            uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
            if (uVar38 != 0) {
               lVar52 = *(long*)( this + 0x10 );
               uVar54 = 0;
               uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar51 = CONCAT44(0, uVar37);
               lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar38 * lVar46;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar51;
               lVar47 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar52 + lVar47 * 4 );
               iVar44 = SUB164(auVar8 * auVar24, 8);
               uVar53 = *puVar1;
               uVar41 = *(undefined8*)( (long)local_70 + uVar40 * 8 );
               while (uVar53 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar53 * lVar46;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar51;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar37 + iVar44 ) - SUB164(auVar9 * auVar25, 8)) * lVar46;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar51;
                  uVar50 = SUB164(auVar10 * auVar26, 8);
                  uVar49 = uVar41;
                  if (uVar50 < uVar54) {
                     *puVar1 = uVar38;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                     uVar49 = *puVar2;
                     *puVar2 = uVar41;
                     uVar38 = uVar53;
                     uVar54 = uVar50;
                  }
                  uVar54 = uVar54 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar51;
                  lVar47 = SUB168(auVar11 * auVar27, 8);
                  puVar1 = (uint*)( lVar52 + lVar47 * 4 );
                  iVar44 = SUB164(auVar11 * auVar27, 8);
                  uVar41 = uVar49;
                  uVar53 = *puVar1;
               };
               *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
               *puVar1 = uVar38;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }
            uVar40 = uVar40 + 1;
         } while ( uVar39 != uVar40 );
         Memory::free_static(local_70, false);
         Memory::free_static(pvVar3, false);
      }
   }
   uVar38 = *param_1;
   pauVar42 = (undefined1(*) [16])operator_new(0x18, "");
   *(uint*)pauVar42[1] = uVar38;
   *(undefined4*)( pauVar42[1] + 4 ) = 0;
   *pauVar42 = (undefined1[16])0x0;
   puVar2 = *(undefined8**)( this + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
   } else {
      *puVar2 = pauVar42;
      *(undefined8**)( *pauVar42 + 8 ) = puVar2;
   }
   *(undefined1(**) [16])( this + 0x20 ) = pauVar42;
   uVar38 = ( *param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;
   uVar39 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
   uVar38 = uVar39 ^ uVar39 >> 0x10;
   if (uVar39 == uVar39 >> 0x10) {
      uVar40 = 1;
      uVar38 = 1;
   } else {
      uVar40 = (ulong)uVar38;
   }
   uVar53 = 0;
   lVar52 = *(long*)( this + 0x10 );
   lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar51 = CONCAT44(0, uVar39);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar40 * lVar46;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar51;
   lStack_90 = SUB168(auVar12 * auVar28, 8);
   lVar47 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
   iVar44 = SUB164(auVar12 * auVar28, 8);
   uVar37 = *puVar1;
   pauVar36 = pauVar42;
   while (uVar37 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar37 * lVar46;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar51;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar13 * auVar29, 8)) * lVar46;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar51;
      uVar54 = SUB164(auVar14 * auVar30, 8);
      pauVar55 = pauVar36;
      if (uVar54 < uVar53) {
         *puVar1 = uVar38;
         puVar2 = (undefined8*)( lVar47 + lStack_90 * 8 );
         pauVar55 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar36;
         uVar38 = uVar37;
         uVar53 = uVar54;
      }
      uVar53 = uVar53 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar44 + 1) * lVar46;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar51;
      lStack_90 = SUB168(auVar15 * auVar31, 8);
      puVar1 = (uint*)( lVar52 + lStack_90 * 4 );
      iVar44 = SUB164(auVar15 * auVar31, 8);
      pauVar36 = pauVar55;
      uVar37 = *puVar1;
   };
   *(undefined1(**) [16])( lVar47 + lStack_90 * 8 ) = pauVar36;
   *puVar1 = uVar38;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_0011cea4:auVar57._8_8_ = lStack_90;
   auVar57._0_8_ = pauVar42[1] + 4;
   return auVar57;
}/* GLES3::MeshInstance::~MeshInstance() */void GLES3::MeshInstance::~MeshInstance(MeshInstance *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   plVar1 = *(long**)( this + 0x68 );
   if (plVar1 != (long*)0x0) {
      lVar2 = *(long*)( this + 0x78 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x80 );
      }
      lVar3 = *(long*)( this + 0x80 );
      if (lVar3 != 0) {
         *(long*)( lVar3 + 0x10 ) = lVar2;
      }
      if (this + 0x68 == (MeshInstance*)*plVar1) {
         *plVar1 = *(long*)( this + 0x78 );
      }
      if (this + 0x68 == (MeshInstance*)plVar1[1]) {
         plVar1[1] = lVar3;
      }
   }
   plVar1 = *(long**)( this + 0x48 );
   if (plVar1 != (long*)0x0) {
      lVar2 = *(long*)( this + 0x58 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x60 );
      }
      lVar3 = *(long*)( this + 0x60 );
      if (lVar3 != 0) {
         *(long*)( lVar3 + 0x10 ) = lVar2;
      }
      if (this + 0x48 == (MeshInstance*)*plVar1) {
         *plVar1 = *(long*)( this + 0x58 );
      }
      if (this + 0x48 == (MeshInstance*)plVar1[1]) {
         plVar1[1] = lVar3;
      }
   }
   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      if (*(int*)( this + 0x20 ) != 0) {
         *(undefined4*)( this + 0x20 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x28 ), false);
   }
   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      if (*(int*)( this + 0x10 ) != 0) {
         *(undefined4*)( this + 0x10 ) = 0;
      }
      Memory::free_static(*(void**)( this + 0x18 ), false);
      return;
   }
   return;
}/* WARNING: Removing unreachable block (ram,0x0011d410) *//* WARNING: Removing unreachable block (ram,0x0011d540) *//* WARNING: Removing unreachable block (ram,0x0011d6b9) *//* WARNING: Removing unreachable block (ram,0x0011d54c) *//* WARNING: Removing unreachable block (ram,0x0011d556) *//* WARNING: Removing unreachable block (ram,0x0011d69b) *//* WARNING: Removing unreachable block (ram,0x0011d562) *//* WARNING: Removing unreachable block (ram,0x0011d56c) *//* WARNING: Removing unreachable block (ram,0x0011d67d) *//* WARNING: Removing unreachable block (ram,0x0011d578) *//* WARNING: Removing unreachable block (ram,0x0011d582) *//* WARNING: Removing unreachable block (ram,0x0011d65f) *//* WARNING: Removing unreachable block (ram,0x0011d58e) *//* WARNING: Removing unreachable block (ram,0x0011d598) *//* WARNING: Removing unreachable block (ram,0x0011d641) *//* WARNING: Removing unreachable block (ram,0x0011d5a4) *//* WARNING: Removing unreachable block (ram,0x0011d5ae) *//* WARNING: Removing unreachable block (ram,0x0011d623) *//* WARNING: Removing unreachable block (ram,0x0011d5b6) *//* WARNING: Removing unreachable block (ram,0x0011d5c0) *//* WARNING: Removing unreachable block (ram,0x0011d608) *//* WARNING: Removing unreachable block (ram,0x0011d5c8) *//* WARNING: Removing unreachable block (ram,0x0011d5de) *//* WARNING: Removing unreachable block (ram,0x0011d5ea) *//* String vformat<unsigned long, unsigned long>(String const&, unsigned long const, unsigned long
   const) */String *vformat<unsigned_long,unsigned_long>(String *param_1, ulong param_2, ulong param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   ulong in_RCX;
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
   Variant::Variant(local_70, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)param_2);
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<GLES3::Mesh*, HashMapHasherDefault, HashMapComparatorDefault<GLES3::Mesh*>
   >::insert(GLES3::Mesh* const&) */undefined1[16];HashSet<GLES3::Mesh*,HashMapHasherDefault,HashMapComparatorDefault<GLES3::Mesh*>>::insert(Mesh **param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   int iVar35;
   long *in_RDX;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   uint uVar39;
   ulong uVar40;
   undefined4 uVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   undefined1 auVar45[16];
   ulong uStack_98;
   Mesh *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   local_88 = (Mesh*)*in_RSI;
   if (local_88 == (Mesh*)0x0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      uVar32 = *(uint*)( in_RSI + 4 );
      lVar34 = *in_RDX;
      local_88 = (Mesh*)*in_RSI;
      if (local_88 != (Mesh*)0x0) goto LAB_0011d72f;
   } else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_0011d72f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = lVar34 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_0011dbd1;
               }
               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            } while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }
      }
   }
   if ((float)uVar31 * __LC135 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Mesh*)*in_RSI;
         goto LAB_0011dbd1;
      }
      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }
      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }
      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }
               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            };
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         } while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }
      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (Mesh*)*in_RSI;
      lVar34 = *in_RDX;
   }
   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   *(long*)( local_88 + uVar42 * 8 ) = lVar34;
   uVar33 = lVar34 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }
   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar2 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar34 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar34 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }
      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar34 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar34 );
      uVar32 = *puVar1;
   };
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0011dbd1:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}/* WARNING: Removing unreachable block (ram,0x0011de50) *//* WARNING: Removing unreachable block (ram,0x0011df80) *//* WARNING: Removing unreachable block (ram,0x0011e0f9) *//* WARNING: Removing unreachable block (ram,0x0011df8c) *//* WARNING: Removing unreachable block (ram,0x0011df96) *//* WARNING: Removing unreachable block (ram,0x0011e0db) *//* WARNING: Removing unreachable block (ram,0x0011dfa2) *//* WARNING: Removing unreachable block (ram,0x0011dfac) *//* WARNING: Removing unreachable block (ram,0x0011e0bd) *//* WARNING: Removing unreachable block (ram,0x0011dfb8) *//* WARNING: Removing unreachable block (ram,0x0011dfc2) *//* WARNING: Removing unreachable block (ram,0x0011e09f) *//* WARNING: Removing unreachable block (ram,0x0011dfce) *//* WARNING: Removing unreachable block (ram,0x0011dfd8) *//* WARNING: Removing unreachable block (ram,0x0011e081) *//* WARNING: Removing unreachable block (ram,0x0011dfe4) *//* WARNING: Removing unreachable block (ram,0x0011dfee) *//* WARNING: Removing unreachable block (ram,0x0011e063) *//* WARNING: Removing unreachable block (ram,0x0011dff6) *//* WARNING: Removing unreachable block (ram,0x0011e000) *//* WARNING: Removing unreachable block (ram,0x0011e048) *//* WARNING: Removing unreachable block (ram,0x0011e008) *//* WARNING: Removing unreachable block (ram,0x0011e01e) *//* WARNING: Removing unreachable block (ram,0x0011e02a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */String *vformat<unsigned_int,char_const*>(String *param_1, uint param_2, char *param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   char *in_RCX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_88, (uint)param_3);
   Variant::Variant(local_70, in_RCX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* RID_Alloc<GLES3::MultiMesh, true>::~RID_Alloc() */void RID_Alloc<GLES3::MultiMesh,true>::~RID_Alloc(RID_Alloc<GLES3::MultiMesh,true> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122450;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      LAB_0011e34a:if ((uint)uVar5 < (uint)uVar7) goto LAB_0011e38b;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar8[lVar6], false);
         lVar3 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar5 / uVar7) <= (uint)lVar6) break;
         puVar8 = *(undefined8**)( this + 8 );
      };
   } else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar2);
      print_error((String*)&local_48);
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
      lVar6 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar9 = 0;
         do {
            lVar6 = ( uVar9 % uVar7 ) * 0x118 + puVar8[uVar9 / uVar7];
            if (-1 < *(int*)( lVar6 + 0x110 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0xe0 ));
               if (*(long*)( lVar6 + 0xd8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0xd8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0xd8 );
                     *(undefined8*)( lVar6 + 0xd8 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               if (*(long*)( lVar6 + 200 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 200 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 200 );
                     *(undefined8*)( lVar6 + 200 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               if (*(long*)( lVar6 + 0xb8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0xb8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0xb8 );
                     *(undefined8*)( lVar6 + 0xb8 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               if (*(long*)( lVar6 + 0x60 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x60 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0x60 );
                     *(undefined8*)( lVar6 + 0x60 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               uVar7 = ( ulong ) * (uint*)( this + 0x18 );
               puVar8 = *(undefined8**)( this + 8 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar9 = uVar9 + 1;
         } while ( uVar9 < uVar5 );
         goto LAB_0011e34a;
      }
      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011e38b;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar8 = *(undefined8**)( this + 8 );
   LAB_0011e38b:if (puVar8 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      Memory::free_static(puVar8, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::MultiMesh, true>::~RID_Alloc() */void RID_Alloc<GLES3::MultiMesh,true>::~RID_Alloc(RID_Alloc<GLES3::MultiMesh,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}/* RID_Alloc<GLES3::Skeleton, true>::~RID_Alloc() */void RID_Alloc<GLES3::Skeleton,true>::~RID_Alloc(RID_Alloc<GLES3::Skeleton,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   undefined8 *puVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122470;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      LAB_0011e5ca:if ((uint)uVar5 < (uint)uVar7) goto LAB_0011e60b;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar8[lVar6], false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar7) <= (uint)lVar6) break;
         puVar8 = *(undefined8**)( this + 8 );
      };
   } else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
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
      lVar6 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }
      }
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar9 = 0;
         do {
            lVar6 = ( uVar9 % uVar7 ) * 0x90 + puVar8[uVar9 / uVar7];
            if (-1 < *(int*)( lVar6 + 0x88 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0x58 ));
               if (*(void**)( lVar6 + 0x18 ) != (void*)0x0) {
                  if (*(int*)( lVar6 + 0x10 ) != 0) {
                     *(undefined4*)( lVar6 + 0x10 ) = 0;
                  }
                  Memory::free_static(*(void**)( lVar6 + 0x18 ), false);
               }
               uVar7 = ( ulong ) * (uint*)( this + 0x18 );
               puVar8 = *(undefined8**)( this + 8 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar9 = uVar9 + 1;
         } while ( uVar9 < uVar5 );
         goto LAB_0011e5ca;
      }
      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011e60b;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar8 = *(undefined8**)( this + 8 );
   LAB_0011e60b:if (puVar8 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      Memory::free_static(puVar8, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::Skeleton, true>::~RID_Alloc() */void RID_Alloc<GLES3::Skeleton,true>::~RID_Alloc(RID_Alloc<GLES3::Skeleton,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}/* RID_Alloc<GLES3::MeshInstance, false>::~RID_Alloc() */void RID_Alloc<GLES3::MeshInstance,false>::~RID_Alloc(RID_Alloc<GLES3::MeshInstance,false> *this) {
   long *plVar1;
   long lVar2;
   MeshInstance *this_00;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122430;
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011e82a:if ((uint)uVar5 < (uint)uVar8) goto LAB_0011e86b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      };
   } else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
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
      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (MeshInstance*)( puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0xa8 );
            if (-1 < *(int*)( this_00 + 0xa0 )) {
               GLES3::MeshInstance::~MeshInstance(this_00);
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         } while ( uVar6 < uVar5 );
         goto LAB_0011e82a;
      }
      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011e86b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011e86b:if (puVar9 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      Memory::free_static(puVar9, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::Mesh, true>::~RID_Alloc() */void RID_Alloc<GLES3::Mesh,true>::~RID_Alloc(RID_Alloc<GLES3::Mesh,true> *this) {
   long *plVar1;
   long lVar2;
   Mesh *this_00;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122410;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011ea6a:if ((uint)uVar5 < (uint)uVar8) goto LAB_0011eaab;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      };
   } else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
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
      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (Mesh*)( puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0xd8 );
            if (-1 < *(int*)( this_00 + 0xd0 )) {
               GLES3::Mesh::~Mesh(this_00);
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         } while ( uVar6 < uVar5 );
         goto LAB_0011ea6a;
      }
      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011eaab;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011eaab:if (puVar9 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
   } else {
      Memory::free_static(puVar9, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::MeshInstance, false>::~RID_Alloc() */void RID_Alloc<GLES3::MeshInstance,false>::~RID_Alloc(RID_Alloc<GLES3::MeshInstance,false> *this) {
   long *plVar1;
   long lVar2;
   MeshInstance *this_00;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122430;
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011ecaa:if ((uint)uVar5 < (uint)uVar8) goto LAB_0011eceb;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      };
   } else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
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
      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (MeshInstance*)( puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0xa8 );
            if (-1 < *(int*)( this_00 + 0xa0 )) {
               GLES3::MeshInstance::~MeshInstance(this_00);
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         } while ( uVar6 < uVar5 );
         goto LAB_0011ecaa;
      }
      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011eceb;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011eceb:if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::Mesh, true>::~RID_Alloc() */void RID_Alloc<GLES3::Mesh,true>::~RID_Alloc(RID_Alloc<GLES3::Mesh,true> *this) {
   long *plVar1;
   long lVar2;
   Mesh *this_00;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122410;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011eeca:if ((uint)uVar5 < (uint)uVar8) goto LAB_0011ef0b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      };
   } else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
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
      lVar7 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }
      }
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (Mesh*)( puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0xd8 );
            if (-1 < *(int*)( this_00 + 0xd0 )) {
               GLES3::Mesh::~Mesh(this_00);
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }
            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         } while ( uVar6 < uVar5 );
         goto LAB_0011eeca;
      }
      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011ef0b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }
   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011ef0b:if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::MeshInstance, false>::make_rid() */ulong RID_Alloc<GLES3::MeshInstance,false>::make_rid(RID_Alloc<GLES3::MeshInstance,false> *this) {
   undefined8 *puVar1;
   void *pvVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   undefined4 *puVar10;
   undefined8 uVar11;
   long lVar12;
   uint uVar13;
   ulong uVar14;
   char *pcVar15;
   ulong uVar16;
   uVar13 = *(uint*)( this + 0x20 );
   if (uVar13 == *(uint*)( this + 0x1c )) {
      if (uVar13 == 0) {
         lVar12 = 0;
         uVar16 = 8;
      } else {
         uVar16 = ( ulong )((int)( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar12 = ( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }
      lVar4 = Memory::realloc_static(*(void**)( this + 8 ), uVar16, false);
      *(long*)( this + 8 ) = lVar4;
      uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xa8, false);
      pvVar2 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar12 ) = uVar11;
      lVar5 = Memory::realloc_static(pvVar2, uVar16, false);
      *(long*)( this + 0x10 ) = lVar5;
      uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar4 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar5 + lVar12 ) = uVar11;
      if (uVar7 != 0) {
         lVar5 = *(long*)( lVar4 + lVar12 );
         lVar6 = 0;
         puVar10 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar12 ) + 0xa0 );
         do {
            *puVar10 = 0xffffffff;
            puVar10 = puVar10 + 0x2a;
            *(int*)( lVar5 + lVar6 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar6;
            uVar7 = *(uint*)( this + 0x18 );
            lVar6 = lVar6 + 1;
         } while ( (uint)lVar6 < uVar7 );
      }
      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar7;
      uVar13 = *(uint*)( this + 0x20 );
   } else {
      lVar4 = *(long*)( this + 0x10 );
      uVar7 = *(uint*)( this + 0x18 );
   }
   uVar13 = *(uint*)( *(long*)( lVar4 + ( (ulong)uVar13 / (ulong)uVar7 ) * 8 ) + ( (ulong)uVar13 % (ulong)uVar7 ) * 4 );
   uVar16 = (ulong)uVar13;
   LOCK();
   UNLOCK();
   uVar8 = (int)RID_AllocBase::base_id + 1;
   uVar9 = uVar8 & 0x7fffffff;
   if (uVar9 != 0x7fffffff) {
      lVar12 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( *(long*)( lVar12 + ( uVar16 / uVar7 ) * 8 ) + ( uVar16 % (ulong)uVar7 ) * 0xa8 + 0xa0 ) = uVar9 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar14 = CONCAT44(uVar8, uVar13) & 0x7fffffffffffffff;
      if (( uVar14 != 0 ) && ( (uint)uVar14 < *(uint*)( this + 0x1c ) )) {
         puVar1 = (undefined8*)( *(long*)( lVar12 + ( uVar16 / *(uint*)( this + 0x18 ) ) * 8 ) + ( uVar16 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xa8 );
         if ((int)*(uint*)( puVar1 + 0x14 ) < 0) {
            uVar13 = ( uint )(uVar14 >> 0x20);
            if (uVar13 == ( *(uint*)( puVar1 + 0x14 ) & 0x7fffffff )) {
               *(uint*)( puVar1 + 0x14 ) = uVar13;
               *puVar1 = 0;
               puVar1[1] = 0;
               puVar1[2] = 0;
               puVar1[3] = 0;
               puVar1[4] = 0;
               puVar1[7] = 0;
               *(undefined2*)( puVar1 + 8 ) = 0;
               puVar1[9] = 0;
               puVar1[0xb] = 0;
               puVar1[0xc] = 0;
               puVar1[10] = puVar1;
               puVar1[0xd] = 0;
               puVar1[0xe] = puVar1;
               puVar1[0xf] = 0;
               puVar1[0x10] = 0;
               puVar1[0x11] = 0x3f800000;
               puVar1[0x12] = 0x3f80000000000000;
               puVar1[0x13] = 0;
               *(undefined1(*) [16])( puVar1 + 5 ) = (undefined1[16])0x0;
               return uVar14;
            }
            pcVar15 = "Attempting to initialize the wrong RID";
            uVar11 = 0xfc;
         } else {
            pcVar15 = "Initializing already initialized RID";
            uVar11 = 0xf8;
         }
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar11, "Method/function failed. Returning: nullptr", pcVar15, 0, 0);
      }
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x114, "Parameter \"mem\" is null.", 0, 0);
      return uVar14;
   }
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::_resize_and_rehash(unsigned int) */void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::_resize_and_rehash(HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }
   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         } while ( uVar22 != uVar26 );
      } else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }
   }
   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }
               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar26 = uVar26 + 1;
      } while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::operator[](DependencyTracker* const&) */undefined1[16];HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::operator [](HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>
             *this,DependencyTracker**param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 auVar19[16];
  undefined1 auVar20[16];
  undefined1 auVar21[16];
  undefined1 auVar22[16];
  undefined1 auVar23[16];
  undefined1 auVar24[16];
  undefined1 auVar25[16];
  undefined1 auVar26[16];
  undefined1 auVar27[16](*, pauVar28)[16](*, pauVar30)[16](*, pauVar44)[16];
  DependencyTracker *pDVar45;
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(__s_00 = = (void*)0x0) {
   uVar31 = uVar43 * 4;
   uVar29 = uVar43 * 8;
   uVar32 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   lStack_70 = 0x11fa60;
   __s_00 = (void*)Memory::alloc_static(uVar29, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar29 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
         uVar31 = 0;
         do {
            *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
            uVar31 = uVar31 + 1;
         } while ( uVar43 != uVar31 );
         pDVar45 = *param_1;
         iVar36 = *(int*)( this + 0x2c );
      } else {
         memset(__s, 0, uVar31);
         lStack_70 = 0x11faaa;
         memset(__s_00, 0, uVar29);
         pDVar45 = *param_1;
         iVar36 = *(int*)( this + 0x2c );
      }
      LAB_0011fab9:if (iVar36 == 0) goto LAB_0011fb50;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar39 = *(long*)( this + 0x10 );
      goto LAB_0011f764;
   }
   pDVar45 = *param_1;
   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_0011fab9;
}else{iVar36 = *(int*)( this + 0x2c );if (iVar36 == 0) {
   LAB_0011fb50:iVar36 = 0;
} else {
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = (long)pDVar45 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar41 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar41 = 1;
   }
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar41 * lVar2;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar43;
   lVar34 = SUB168(auVar4 * auVar16, 8);
   lVar39 = *(long*)( this + 0x10 );
   uVar40 = SUB164(auVar4 * auVar16, 8);
   uVar33 = *(uint*)( lVar39 + lVar34 * 4 );
   if (uVar33 != 0) {
      uVar38 = 0;
      lVar35 = lVar34;
      do {
         if (( (uint)uVar41 == uVar33 ) && ( pDVar45 == *(DependencyTracker**)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) )) {
            auVar46._0_8_ = *(long*)( (long)__s_00 + (ulong)uVar40 * 8 ) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
         }
         uVar38 = uVar38 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar40 + 1) * lVar2;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar43;
         lVar34 = SUB168(auVar5 * auVar17, 8);
         uVar33 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar40 = SUB164(auVar5 * auVar17, 8);
      } while ( ( uVar33 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar33 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar43,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar40 + uVar37 ) - SUB164(auVar6 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,lVar35 = SUB168(auVar7 * auVar19, 8),uVar38 <= SUB164(auVar7 * auVar19, 8) );
   }
   LAB_0011f764:uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = (long)pDVar45 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar42 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar42 = 1;
   }
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar42 * lVar2;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar41;
   lVar34 = SUB168(auVar8 * auVar20, 8);
   uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
   uVar33 = SUB164(auVar8 * auVar20, 8);
   if (uVar37 != 0) {
      uVar40 = 0;
      lVar35 = lVar34;
      do {
         if (( (uint)uVar42 == uVar37 ) && ( *(DependencyTracker**)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) == pDVar45 )) {
            pauVar30 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar33 * 8 );
            *(undefined4*)( pauVar30[1] + 8 ) = 0;
            lStack_70 = lVar35;
            goto LAB_0011f84e;
         }
         uVar40 = uVar40 + 1;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar41;
         lVar34 = SUB168(auVar9 * auVar21, 8);
         uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar33 = SUB164(auVar9 * auVar21, 8);
      } while ( ( uVar37 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar37 * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar31 * 4 ) + uVar33 ) - SUB164(auVar10 * auVar22, 8)) * lVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar41,lVar35 = SUB168(auVar11 * auVar23, 8),uVar40 <= SUB164(auVar11 * auVar23, 8) );
   }
}}if ((float)uVar43 * __LC135 < (float)( iVar36 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011f84e;
   }
   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}pDVar45 = *param_1;pauVar30 = (undefined1(*) [16])operator_new(0x20, "");*(DependencyTracker**)pauVar30[1] = pDVar45;*(undefined4*)( pauVar30[1] + 8 ) = 0;*pauVar30 = (undefined1[16])0x0;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
} else {
   *puVar3 = pauVar30;
   *(undefined8**)( *pauVar30 + 8 ) = puVar3;
}pDVar45 = *param_1;lVar39 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar30;uVar31 = (long)pDVar45 * 0x3ffff - 1;uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;uVar31 = uVar31 >> 0x16 ^ uVar31;uVar43 = uVar31 & 0xffffffff;if ((int)uVar31 == 0) {
   uVar43 = 1;
}uVar38 = 0;lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar40 = (uint)uVar43;uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar37);auVar12._8_8_ = 0;auVar12._0_8_ = uVar43 * lVar2;auVar24._8_8_ = 0;auVar24._0_8_ = uVar31;lStack_70 = SUB168(auVar12 * auVar24, 8);lVar34 = *(long*)( this + 8 );puVar1 = (uint*)( lVar39 + lStack_70 * 4 );iVar36 = SUB164(auVar12 * auVar24, 8);uVar33 = *puVar1;pauVar28 = pauVar30;while (uVar33 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar33 * lVar2;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar37 + iVar36 ) - SUB164(auVar13 * auVar25, 8)) * lVar2;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   local_68 = SUB164(auVar14 * auVar26, 8);
   pauVar44 = pauVar28;
   if (local_68 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8*)( lVar34 + lStack_70 * 8 );
      pauVar44 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_68;
   }
   uVar40 = (uint)uVar43;
   uVar38 = uVar38 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar36 + 1) * lVar2;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar31;
   lStack_70 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar39 + lStack_70 * 4 );
   iVar36 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar44;
   uVar33 = *puVar1;
};*(undefined1(**) [16])( lVar34 + lStack_70 * 8 ) = pauVar28;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011f84e:auVar47._8_8_ = lStack_70;auVar47._0_8_ = pauVar30[1] + 8;return auVar47;}/* CowData<RenderingServer::SurfaceData::LOD>::_unref() */void CowData<RenderingServer::SurfaceData::LOD>::_unref(CowData<RenderingServer::SurfaceData::LOD> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }
   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x10 );
                     *(undefined8*)( lVar6 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }
               }
               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x18;
            } while ( lVar3 != lVar7 );
         }
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   *(undefined8*)this = 0;
   return;
}/* RenderingServer::SurfaceData::~SurfaceData() */void RenderingServer::SurfaceData::~SurfaceData(SurfaceData *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0xd0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xd0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xd0 );
         *(undefined8*)( this + 0xd0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)( this + 0x80 ));
   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x50 );
         *(undefined8*)( this + 0x50 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x38 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x38 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x38 );
         *(undefined8*)( this + 0x38 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (*(long*)( this + 0x18 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x18 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x18 );
         *(undefined8*)( this + 0x18 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }
   }
   return;
}/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* Vector<unsigned char>::append_array(Vector<unsigned char>) */void Vector<unsigned_char>::append_array(Vector<unsigned_char> *this, long param_2) {
   undefined1 uVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( param_2 + 8 ) == 0) {
      return;
   }
   lVar2 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   if (lVar2 != 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar7 = 0;
         lVar5 = lVar2;
      } else {
         lVar7 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar5 = lVar2 + lVar7;
      }
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 8 ), lVar5);
      if (0 < lVar2) {
         lVar5 = 0;
         do {
            lVar3 = *(long*)( param_2 + 8 );
            if (lVar3 == 0) {
               lVar6 = 0;
               LAB_0011fed9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar6, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }
            lVar6 = *(long*)( lVar3 + -8 );
            if (lVar6 <= lVar5) goto LAB_0011fed9;
            uVar1 = *(undefined1*)( lVar3 + lVar5 );
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
            *(undefined1*)( *(long*)( this + 8 ) + lVar7 + lVar5 ) = uVar1;
            lVar5 = lVar5 + 1;
         } while ( lVar5 != lVar2 );
      }
   }
   return;
}/* CowData<unsigned int>::_realloc(long) */undefined8 CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* CowData<float>::_realloc(long) */undefined8 CowData<float>::_realloc(CowData<float> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* WARNING: Removing unreachable block (ram,0x00120148) *//* WARNING: Removing unreachable block (ram,0x00120278) *//* WARNING: Removing unreachable block (ram,0x00120440) *//* WARNING: Removing unreachable block (ram,0x00120284) *//* WARNING: Removing unreachable block (ram,0x0012028e) *//* WARNING: Removing unreachable block (ram,0x00120420) *//* WARNING: Removing unreachable block (ram,0x0012029a) *//* WARNING: Removing unreachable block (ram,0x001202a4) *//* WARNING: Removing unreachable block (ram,0x00120400) *//* WARNING: Removing unreachable block (ram,0x001202b0) *//* WARNING: Removing unreachable block (ram,0x001202ba) *//* WARNING: Removing unreachable block (ram,0x001203e0) *//* WARNING: Removing unreachable block (ram,0x001202c6) *//* WARNING: Removing unreachable block (ram,0x001202d0) *//* WARNING: Removing unreachable block (ram,0x001203c0) *//* WARNING: Removing unreachable block (ram,0x001202dc) *//* WARNING: Removing unreachable block (ram,0x001202e6) *//* WARNING: Removing unreachable block (ram,0x001203a0) *//* WARNING: Removing unreachable block (ram,0x001202f2) *//* WARNING: Removing unreachable block (ram,0x001202fc) *//* WARNING: Removing unreachable block (ram,0x00120380) *//* WARNING: Removing unreachable block (ram,0x00120304) *//* WARNING: Removing unreachable block (ram,0x0012031a) *//* WARNING: Removing unreachable block (ram,0x00120326) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   } else {
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
}/* RID_Alloc<GLES3::Mesh, true>::allocate_rid() */ulong RID_Alloc<GLES3::Mesh,true>::allocate_rid(RID_Alloc<GLES3::Mesh,true> *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   undefined4 *puVar11;
   uint uVar12;
   uint uVar13;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }
   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }
      if (*(uint*)( this + 0x24 ) == uVar7) {
         pthread_mutex_unlock(__mutex);
         pcVar4 = *(char**)( this + 0x28 );
         if (pcVar4 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         } else {
            local_50 = 0;
            local_40 = strlen(pcVar4);
            local_48 = pcVar4;
            String::parse_latin1((StrRange*)&local_50);
            local_40 = 0x2b;
            local_48 = "Element limit for RID of type \'%s\' reached.";
            local_58 = 0;
            String::parse_latin1((StrRange*)&local_58);
            vformat<String>(&local_48, &local_58, (StrRange*)&local_50);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_48, 0, 0);
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
         }
         uVar10 = 0;
         goto LAB_00120615;
      }
      uVar10 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xd8, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar10 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar10 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar10 * 8 );
         lVar9 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar10 * 8 ) + 0xd0 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x36;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         } while ( (uint)lVar9 < uVar7 );
      }
      *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
      uVar7 = *(uint*)( this + 0x20 );
   }
   uVar2 = *(uint*)( this + 0x18 );
   uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar12 = (int)RID_AllocBase::base_id + 1;
   uVar13 = uVar12 & 0x7fffffff;
   if (uVar13 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   uVar10 = CONCAT44(uVar12, uVar7) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0xd8 + 0xd0 ) = uVar13 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00120615:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::MultiMesh, true>::allocate_rid() */ulong RID_Alloc<GLES3::MultiMesh,true>::allocate_rid(RID_Alloc<GLES3::MultiMesh,true> *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   undefined4 *puVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }
   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }
      if (*(uint*)( this + 0x24 ) == uVar7) {
         pthread_mutex_unlock(__mutex);
         pcVar4 = *(char**)( this + 0x28 );
         if (pcVar4 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         } else {
            local_50 = 0;
            local_40 = strlen(pcVar4);
            local_48 = pcVar4;
            String::parse_latin1((StrRange*)&local_50);
            local_40 = 0x2b;
            local_48 = "Element limit for RID of type \'%s\' reached.";
            local_58 = 0;
            String::parse_latin1((StrRange*)&local_58);
            vformat<String>(&local_48, &local_58, (StrRange*)&local_50);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_48, 0, 0);
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
         }
         uVar13 = 0;
         goto LAB_00120976;
      }
      lVar3 = *(long*)( this + 8 );
      uVar13 = (ulong)uVar7;
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x118, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x110 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x46;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         } while ( (uint)lVar9 < uVar7 );
      }
      *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
      uVar7 = *(uint*)( this + 0x20 );
   }
   uVar2 = *(uint*)( this + 0x18 );
   uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar10 = (int)RID_AllocBase::base_id + 1;
   uVar11 = uVar10 & 0x7fffffff;
   if (uVar11 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   uVar13 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0x118 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0x110 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00120976:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RID_Alloc<GLES3::Skeleton, true>::allocate_rid() */ulong RID_Alloc<GLES3::Skeleton,true>::allocate_rid(RID_Alloc<GLES3::Skeleton,true> *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   code *pcVar5;
   int iVar6;
   uint uVar7;
   undefined8 uVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   undefined4 *puVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar6 = pthread_mutex_lock(__mutex);
   if (iVar6 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar6);
   }
   uVar7 = *(uint*)( this + 0x20 );
   if (uVar7 == *(uint*)( this + 0x1c )) {
      if (uVar7 != 0) {
         uVar7 = uVar7 / *(uint*)( this + 0x18 );
      }
      if (*(uint*)( this + 0x24 ) == uVar7) {
         pthread_mutex_unlock(__mutex);
         pcVar4 = *(char**)( this + 0x28 );
         if (pcVar4 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         } else {
            local_50 = 0;
            local_40 = strlen(pcVar4);
            local_48 = pcVar4;
            String::parse_latin1((StrRange*)&local_50);
            local_40 = 0x2b;
            local_48 = "Element limit for RID of type \'%s\' reached.";
            local_58 = 0;
            String::parse_latin1((StrRange*)&local_58);
            vformat<String>(&local_48, &local_58, (StrRange*)&local_50);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_48, 0, 0);
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
         }
         uVar13 = 0;
         goto LAB_00120cd7;
      }
      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x90, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x88 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x24;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         } while ( (uint)lVar9 < uVar7 );
      }
      *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
      uVar7 = *(uint*)( this + 0x20 );
   }
   uVar2 = *(uint*)( this + 0x18 );
   uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar10 = (int)RID_AllocBase::base_id + 1;
   uVar11 = uVar10 & 0x7fffffff;
   if (uVar11 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }
   uVar13 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0x90 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0x88 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00120cd7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
   HashMapComparatorDefault<DependencyTracker*>,
   DefaultTypedAllocator<HashMapElement<DependencyTracker*, unsigned int> >
   >::insert(DependencyTracker* const&, unsigned int const&, bool) */void HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(DependencyTracker **param_1, uint *param_2, bool param_3) {
   uint *puVar1;
   uint uVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 *puVar5;
   void *__s;
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
   DependencyTracker *pDVar22;
   uint uVar23;
   ulong uVar24;
   DependencyTracker *pDVar25;
   undefined8 uVar26;
   void *__s_00;
   undefined4 *in_RCX;
   int iVar27;
   undefined7 in_register_00000011;
   long *plVar28;
   long lVar29;
   long lVar30;
   ulong uVar31;
   uint uVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   long lVar36;
   DependencyTracker *pDVar37;
   plVar28 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 2 );
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 );
   if (__s_00 == (void*)0x0) {
      uVar34 = (ulong)uVar2;
      uVar24 = uVar34 * 4;
      uVar31 = uVar34 * 8;
      uVar26 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( param_2 + 4 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar31, false);
      *(void**)( param_2 + 2 ) = __s_00;
      if (uVar2 != 0) {
         __s = *(void**)( param_2 + 4 );
         if (( __s < (void*)( (long)__s_00 + uVar31 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
            uVar24 = 0;
            do {
               *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
               uVar24 = uVar24 + 1;
            } while ( uVar34 != uVar24 );
            goto LAB_00120f26;
         }
         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_00120f31;
      }
      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_00120f31;
   } else {
      LAB_00120f26:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_00120f31:if (uVar32 != 0) {
         uVar34 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)param_2[10] * 8 );
         uVar24 = lVar36 * 0x3ffff - 1;
         uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
         uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
         uVar24 = uVar24 >> 0x16 ^ uVar24;
         uVar31 = uVar24 & 0xffffffff;
         if ((int)uVar24 == 0) {
            uVar31 = 1;
         }
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar31 * lVar4;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar34;
         lVar29 = SUB168(auVar6 * auVar14, 8);
         uVar23 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
         uVar33 = SUB164(auVar6 * auVar14, 8);
         if (uVar23 != 0) {
            uVar35 = 0;
            do {
               if (( (uint)uVar31 == uVar23 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar29 * 8 ) + 0x10 ) == lVar36 )) {
                  pDVar25 = *(DependencyTracker**)( (long)__s_00 + (ulong)uVar33 * 8 );
                  *(undefined4*)( pDVar25 + 0x18 ) = *in_RCX;
                  goto LAB_001211f8;
               }
               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar33 + 1) * lVar4;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar34;
               lVar29 = SUB168(auVar7 * auVar15, 8);
               uVar23 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
               uVar33 = SUB164(auVar7 * auVar15, 8);
            } while ( ( uVar23 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar23 * lVar4,auVar16._8_8_ = 0,auVar16._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 ) + uVar33 ) - SUB164(auVar8 * auVar16, 8)) * lVar4,auVar17._8_8_ = 0,auVar17._0_8_ = uVar34,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }
      }
   }
   if ((float)uVar2 * __LC135 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_001211f8;
      }
      _resize_and_rehash((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)param_2, param_2[10] + 1);
   }
   lVar36 = *plVar28;
   uVar3 = *in_RCX;
   pDVar25 = (DependencyTracker*)operator_new(0x20, "");
   *(long*)( pDVar25 + 0x10 ) = lVar36;
   *(undefined4*)( pDVar25 + 0x18 ) = uVar3;
   *(undefined1(*) [16])pDVar25 = (undefined1[16])0x0;
   puVar5 = *(undefined8**)( param_2 + 8 );
   if (puVar5 == (undefined8*)0x0) {
      *(DependencyTracker**)( param_2 + 6 ) = pDVar25;
      *(DependencyTracker**)( param_2 + 8 ) = pDVar25;
   } else if (in_R8B == '\0') {
      *puVar5 = pDVar25;
      *(undefined8**)( pDVar25 + 8 ) = puVar5;
      *(DependencyTracker**)( param_2 + 8 ) = pDVar25;
   } else {
      lVar36 = *(long*)( param_2 + 6 );
      *(DependencyTracker**)( lVar36 + 8 ) = pDVar25;
      *(long*)pDVar25 = lVar36;
      *(DependencyTracker**)( param_2 + 6 ) = pDVar25;
   }
   lVar36 = *(long*)( param_2 + 4 );
   uVar24 = *plVar28 * 0x3ffff - 1;
   uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
   uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
   uVar24 = uVar24 >> 0x16 ^ uVar24;
   uVar31 = uVar24 & 0xffffffff;
   if ((int)uVar24 == 0) {
      uVar31 = 1;
   }
   uVar33 = 0;
   lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)param_2[10] * 8 );
   uVar23 = (uint)uVar31;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 );
   uVar24 = CONCAT44(0, uVar2);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar31 * lVar4;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar24;
   lVar30 = SUB168(auVar10 * auVar18, 8);
   lVar29 = *(long*)( param_2 + 2 );
   puVar1 = (uint*)( lVar36 + lVar30 * 4 );
   iVar27 = SUB164(auVar10 * auVar18, 8);
   uVar32 = *puVar1;
   pDVar22 = pDVar25;
   while (uVar32 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar32 * lVar4;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar11 * auVar19, 8)) * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar24;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      pDVar37 = pDVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar32;
         puVar5 = (undefined8*)( lVar29 + lVar30 * 8 );
         pDVar37 = (DependencyTracker*)*puVar5;
         *puVar5 = pDVar22;
         uVar33 = uVar23;
      }
      uVar23 = (uint)uVar31;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar27 + 1) * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar24;
      lVar30 = SUB168(auVar13 * auVar21, 8);
      puVar1 = (uint*)( lVar36 + lVar30 * 4 );
      iVar27 = SUB164(auVar13 * auVar21, 8);
      pDVar22 = pDVar37;
      uVar32 = *puVar1;
   };
   *(DependencyTracker**)( lVar29 + lVar30 * 8 ) = pDVar22;
   *puVar1 = uVar23;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_001211f8:*param_1 = pDVar25;
   return;
}/* RID_Alloc<GLES3::Mesh, true>::initialize_rid(RID, GLES3::Mesh const&) */void RID_Alloc<GLES3::Mesh,true>::initialize_rid(RID_Alloc<GLES3::Mesh,true> *this, ulong param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   ulong uVar2;
   undefined4 uVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long lVar10;
   undefined1(*pauVar11)[16];
   undefined8 *puVar12;
   long lVar13;
   undefined8 uVar14;
   long lVar15;
   long lVar16;
   undefined8 *puVar17;
   long *plVar18;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   DependencyTracker *pDStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar1 = (undefined8*)( *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xd8 );
      if ((int)*(uint*)( puVar1 + 0x1a ) < 0) {
         uVar19 = ( uint )(param_2 >> 0x20);
         if (uVar19 == ( *(uint*)( puVar1 + 0x1a ) & 0x7fffffff )) {
            *(uint*)( puVar1 + 0x1a ) = uVar19;
            uVar6 = param_3[3];
            uVar7 = param_3[4];
            uVar8 = param_3[6];
            uVar9 = param_3[7];
            *puVar1 = *param_3;
            uVar14 = param_3[1];
            puVar1[3] = uVar6;
            puVar1[4] = uVar7;
            puVar1[1] = uVar14;
            uVar3 = *(undefined4*)( param_3 + 2 );
            puVar1[6] = uVar8;
            puVar1[7] = uVar9;
            *(undefined4*)( puVar1 + 2 ) = uVar3;
            *(undefined1*)( (long)puVar1 + 0x14 ) = *(undefined1*)( (long)param_3 + 0x14 );
            puVar1[5] = param_3[5];
            puVar1[8] = param_3[8];
            uVar14 = param_3[9];
            puVar1[0xb] = 0;
            puVar1[9] = uVar14;
            plVar18 = (long*)( param_3[0xb] + -0x10 );
            if (param_3[0xb] != 0) {
               do {
                  lVar13 = *plVar18;
                  if (lVar13 == 0) goto LAB_0012146b;
                  LOCK();
                  lVar10 = *plVar18;
                  bVar20 = lVar13 == lVar10;
                  if (bVar20) {
                     *plVar18 = lVar13 + 1;
                     lVar10 = lVar13;
                  }
                  UNLOCK();
               } while ( !bVar20 );
               if (lVar10 != -1) {
                  puVar1[0xb] = param_3[0xb];
               }
            }
            LAB_0012146b:plVar18 = (long*)param_3[0xc];
            puVar1[0xc] = 0;
            if (( plVar18 != (long*)0x0 ) && ( puVar17 = (undefined8*)*plVar18 ),puVar17 != (undefined8*)0x0) {
               pauVar11 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               puVar1[0xc] = pauVar11;
               *(undefined4*)pauVar11[1] = 0;
               *pauVar11 = (undefined1[16])0x0;
               do {
                  while (true) {
                     puVar12 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                     uVar14 = *puVar17;
                     puVar12[1] = 0;
                     *puVar12 = uVar14;
                     plVar18 = (long*)puVar1[0xc];
                     lVar13 = plVar18[1];
                     puVar12[3] = plVar18;
                     puVar12[2] = lVar13;
                     if (lVar13 != 0) {
                        *(undefined8**)( lVar13 + 8 ) = puVar12;
                     }
                     plVar18[1] = (long)puVar12;
                     if (*plVar18 != 0) break;
                     puVar17 = (undefined8*)puVar17[1];
                     *(int*)( plVar18 + 2 ) = (int)plVar18[2] + 1;
                     *plVar18 = (long)puVar12;
                     if (puVar17 == (undefined8*)0x0) goto LAB_00121514;
                  };
                  puVar17 = (undefined8*)puVar17[1];
                  *(int*)( plVar18 + 2 ) = (int)plVar18[2] + 1;
               } while ( puVar17 != (undefined8*)0x0 );
            }
            LAB_00121514:uVar14 = param_3[0xd];
            puVar1[0x12] = 0;
            *(undefined1(*) [16])( puVar1 + 0xe ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar1 + 0x10 ) = (undefined1[16])0x0;
            uVar2 = param_3[0x12];
            puVar1[0xd] = uVar14;
            puVar1[0x12] = uVar2;
            if ((int)( uVar2 >> 0x20 ) != 0) {
               uVar19 = *(uint*)( hash_table_size_primes + ( uVar2 & 0xffffffff ) * 4 );
               uVar2 = (ulong)uVar19 * 4;
               uVar14 = Memory::alloc_static(uVar2, false);
               puVar1[0x11] = uVar14;
               uVar14 = Memory::alloc_static((ulong)uVar19 * 8, false);
               puVar1[0xe] = uVar14;
               uVar14 = Memory::alloc_static(uVar2, false);
               puVar1[0x10] = uVar14;
               lVar13 = Memory::alloc_static(uVar2, false);
               puVar1[0xf] = lVar13;
               if (*(int*)( (long)puVar1 + 0x94 ) != 0) {
                  lVar10 = puVar1[0xe];
                  lVar4 = param_3[0xe];
                  lVar15 = 0;
                  lVar5 = param_3[0x10];
                  lVar16 = puVar1[0x10];
                  do {
                     *(undefined8*)( lVar10 + lVar15 * 8 ) = *(undefined8*)( lVar4 + lVar15 * 8 );
                     *(undefined4*)( lVar16 + lVar15 * 4 ) = *(undefined4*)( lVar5 + lVar15 * 4 );
                     lVar15 = lVar15 + 1;
                  } while ( (uint)lVar15 < *(uint*)( (long)puVar1 + 0x94 ) );
               }
               if (uVar19 != 0) {
                  lVar10 = param_3[0x11];
                  lVar4 = puVar1[0x11];
                  lVar16 = 0;
                  lVar5 = param_3[0xf];
                  do {
                     *(undefined4*)( lVar4 + lVar16 ) = *(undefined4*)( lVar10 + lVar16 );
                     *(undefined4*)( lVar13 + lVar16 ) = *(undefined4*)( lVar5 + lVar16 );
                     lVar16 = lVar16 + 4;
                  } while ( uVar2 - lVar16 != 0 );
               }
            }
            puVar1[0x13] = 0;
            if (param_3[0x13] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 0x13 ), (CowData*)( param_3 + 0x13 ));
            }
            uVar19 = *(uint*)( param_3 + 0x19 );
            puVar1[0x19] = 0;
            *(undefined1(*) [16])( puVar1 + 0x15 ) = (undefined1[16])0x0;
            uVar19 = *(uint*)( hash_table_size_primes + (ulong)uVar19 * 4 );
            *(undefined1(*) [16])( puVar1 + 0x17 ) = (undefined1[16])0x0;
            lVar13 = 1;
            if (5 < uVar19) {
               do {
                  if (uVar19 <= *(uint*)( hash_table_size_primes + lVar13 * 4 )) {
                     *(int*)( puVar1 + 0x19 ) = (int)lVar13;
                     goto LAB_00121601;
                  }
                  lVar13 = lVar13 + 1;
               } while ( lVar13 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
            }
            LAB_00121601:if (( *(int*)( (long)param_3 + 0xcc ) != 0 ) && ( plVar18 = (long*)param_3[0x17] ),plVar18 != (long*)0x0) {
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_48, (uint*)( puVar1 + 0x14 ), (bool)( (char)plVar18 + '\x10' ));
                  plVar18 = (long*)*plVar18;
               } while ( plVar18 != (long*)0x0 );
            }
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00121807;
         }
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
      } else {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }
   LAB_00121807:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* RID_Alloc<GLES3::Skeleton, true>::initialize_rid(RID, GLES3::Skeleton const&) */void RID_Alloc<GLES3::Skeleton,true>::initialize_rid(RID_Alloc<GLES3::Skeleton,true> *this, ulong param_2, undefined1 *param_3) {
   undefined1 uVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   undefined1 *puVar11;
   long *plVar12;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x1c )) {
         puVar11 = (undefined1*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x90 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar11 + 0x88 ) < 0) {
            uVar8 = ( uint )(param_2 >> 0x20);
            if (uVar8 == ( *(uint*)( puVar11 + 0x88 ) & 0x7fffffff )) {
               uVar1 = *param_3;
               *(uint*)( puVar11 + 0x88 ) = uVar8;
               *puVar11 = uVar1;
               uVar3 = *(undefined8*)( param_3 + 4 );
               *(undefined8*)( puVar11 + 0x10 ) = 0;
               *(undefined8*)( puVar11 + 4 ) = uVar3;
               iVar2 = *(int*)( param_3 + 0x10 );
               *(undefined8*)( puVar11 + 0x18 ) = 0;
               if (iVar2 != 0) {
                  uVar8 = iVar2 - 1U | iVar2 - 1U >> 1;
                  uVar8 = uVar8 | uVar8 >> 2;
                  uVar8 = uVar8 | uVar8 >> 4;
                  uVar8 = uVar8 | uVar8 >> 8;
                  uVar8 = ( uVar8 | uVar8 >> 0x10 ) + 1;
                  *(uint*)( puVar11 + 0x14 ) = uVar8;
                  lVar9 = Memory::realloc_static((void*)0x0, (ulong)uVar8 * 4, false);
                  *(long*)( puVar11 + 0x18 ) = lVar9;
                  if (lVar9 == 0) {
                     _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar5 = (code*)invalidInstructionException();
                     ( *pcVar5 )();
                  }
                  *(int*)( puVar11 + 0x10 ) = iVar2;
                  uVar8 = *(uint*)( param_3 + 0x10 );
                  if (uVar8 != 0) {
                     lVar4 = *(long*)( param_3 + 0x18 );
                     lVar10 = 0;
                     do {
                        *(undefined4*)( lVar9 + lVar10 ) = *(undefined4*)( lVar4 + lVar10 );
                        lVar10 = lVar10 + 4;
                     } while ( (ulong)uVar8 << 2 != lVar10 );
                  }
               }
               uVar6 = *(undefined8*)( param_3 + 0x30 );
               uVar7 = *(undefined8*)( param_3 + 0x38 );
               puVar11[0x20] = param_3[0x20];
               uVar3 = *(undefined8*)( param_3 + 0x28 );
               *(undefined8*)( puVar11 + 0x30 ) = uVar6;
               *(undefined8*)( puVar11 + 0x38 ) = uVar7;
               *(undefined8*)( puVar11 + 0x28 ) = uVar3;
               *(undefined8*)( puVar11 + 0x40 ) = *(undefined8*)( param_3 + 0x40 );
               *(undefined4*)( puVar11 + 0x48 ) = *(undefined4*)( param_3 + 0x48 );
               uVar3 = *(undefined8*)( param_3 + 0x50 );
               *(undefined8*)( puVar11 + 0x80 ) = 0;
               *(undefined8*)( puVar11 + 0x50 ) = uVar3;
               uVar8 = *(uint*)( param_3 + 0x80 );
               *(undefined1(*) [16])( puVar11 + 0x60 ) = (undefined1[16])0x0;
               uVar8 = *(uint*)( hash_table_size_primes + (ulong)uVar8 * 4 );
               *(undefined1(*) [16])( puVar11 + 0x70 ) = (undefined1[16])0x0;
               lVar9 = 1;
               if (5 < uVar8) {
                  do {
                     if (uVar8 <= *(uint*)( hash_table_size_primes + lVar9 * 4 )) {
                        *(int*)( puVar11 + 0x80 ) = (int)lVar9;
                        goto LAB_001219c2;
                     }
                     lVar9 = lVar9 + 1;
                  } while ( lVar9 != 0x1d );
                  _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
               }
               LAB_001219c2:if (( *(int*)( param_3 + 0x84 ) != 0 ) && ( plVar12 = *(long**)( param_3 + 0x70 ) ),plVar12 != (long*)0x0) {
                  do {
                     HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar11 + 0x58 ), (bool)( (char)plVar12 + '\x10' ));
                     plVar12 = (long*)*plVar12;
                  } while ( plVar12 != (long*)0x0 );
               }
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }
               goto LAB_00121b0a;
            }
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
         } else {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
         }
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }
   LAB_00121b0a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* RID_Alloc<GLES3::MultiMesh, true>::initialize_rid(RID, GLES3::MultiMesh const&) */void RID_Alloc<GLES3::MultiMesh,true>::initialize_rid(RID_Alloc<GLES3::MultiMesh,true> *this, ulong param_2, undefined8 *param_3) {
   undefined1 uVar1;
   undefined2 uVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   uint uVar10;
   long lVar11;
   undefined8 *puVar12;
   long *plVar13;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar12 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x118 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
      if ((int)*(uint*)( puVar12 + 0x22 ) < 0) {
         uVar10 = *(uint*)( puVar12 + 0x22 ) & 0x7fffffff;
         if (uVar10 == ( uint )(param_2 >> 0x20)) {
            uVar6 = param_3[3];
            uVar7 = param_3[4];
            uVar8 = param_3[6];
            uVar9 = param_3[7];
            *(uint*)( puVar12 + 0x22 ) = uVar10;
            uVar4 = *param_3;
            uVar5 = param_3[1];
            puVar12[3] = uVar6;
            puVar12[4] = uVar7;
            *puVar12 = uVar4;
            uVar2 = *(undefined2*)( param_3 + 2 );
            puVar12[1] = uVar5;
            *(undefined2*)( puVar12 + 2 ) = uVar2;
            uVar3 = *(undefined4*)( (long)param_3 + 0x14 );
            puVar12[6] = uVar8;
            puVar12[7] = uVar9;
            *(undefined4*)( (long)puVar12 + 0x14 ) = uVar3;
            puVar12[5] = param_3[5];
            puVar12[8] = param_3[8];
            *(undefined2*)( puVar12 + 9 ) = *(undefined2*)( param_3 + 9 );
            *(undefined8*)( (long)puVar12 + 0x4c ) = *(undefined8*)( (long)param_3 + 0x4c );
            uVar3 = *(undefined4*)( (long)param_3 + 0x54 );
            puVar12[0xc] = 0;
            lVar11 = param_3[0xc];
            *(undefined4*)( (long)puVar12 + 0x54 ) = uVar3;
            if (lVar11 != 0) {
               CowData<float>::_ref((CowData<float>*)( puVar12 + 0xc ), (CowData*)( param_3 + 0xc ));
            }
            puVar12[0xd] = param_3[0xd];
            puVar12[0xe] = param_3[0xe];
            uVar5 = param_3[0x12];
            uVar6 = param_3[0x13];
            *(undefined1*)( puVar12 + 0xf ) = *(undefined1*)( param_3 + 0xf );
            uVar4 = param_3[0x10];
            puVar12[0x12] = uVar5;
            puVar12[0x13] = uVar6;
            puVar12[0x10] = uVar4;
            *(undefined4*)( puVar12 + 0x11 ) = *(undefined4*)( param_3 + 0x11 );
            *(undefined2*)( (long)puVar12 + 0x8c ) = *(undefined2*)( (long)param_3 + 0x8c );
            puVar12[0x14] = param_3[0x14];
            *(undefined2*)( puVar12 + 0x15 ) = *(undefined2*)( param_3 + 0x15 );
            uVar1 = *(undefined1*)( (long)param_3 + 0xaa );
            puVar12[0x17] = 0;
            lVar11 = param_3[0x17];
            *(undefined1*)( (long)puVar12 + 0xaa ) = uVar1;
            if (lVar11 != 0) {
               CowData<float>::_ref((CowData<float>*)( puVar12 + 0x17 ), (CowData*)( param_3 + 0x17 ));
            }
            puVar12[0x19] = 0;
            if (param_3[0x19] != 0) {
               CowData<float>::_ref((CowData<float>*)( puVar12 + 0x19 ), (CowData*)( param_3 + 0x19 ));
            }
            puVar12[0x1b] = 0;
            if (param_3[0x1b] != 0) {
               CowData<float>::_ref((CowData<float>*)( puVar12 + 0x1b ), (CowData*)( param_3 + 0x1b ));
            }
            uVar10 = *(uint*)( param_3 + 0x21 );
            puVar12[0x21] = 0;
            *(undefined1(*) [16])( puVar12 + 0x1d ) = (undefined1[16])0x0;
            uVar10 = *(uint*)( hash_table_size_primes + (ulong)uVar10 * 4 );
            *(undefined1(*) [16])( puVar12 + 0x1f ) = (undefined1[16])0x0;
            lVar11 = 1;
            if (5 < uVar10) {
               do {
                  if (uVar10 <= *(uint*)( hash_table_size_primes + lVar11 * 4 )) {
                     *(int*)( puVar12 + 0x21 ) = (int)lVar11;
                     goto LAB_00121d60;
                  }
                  lVar11 = lVar11 + 1;
               } while ( lVar11 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
            }
            LAB_00121d60:if (( *(int*)( (long)param_3 + 0x10c ) != 0 ) && ( plVar13 = (long*)param_3[0x1f] ),plVar13 != (long*)0x0) {
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar12 + 0x1c ), (bool)( (char)plVar13 + '\x10' ));
                  plVar13 = (long*)*plVar13;
               } while ( plVar13 != (long*)0x0 );
            }
            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }
            goto LAB_00121e78;
         }
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
      } else {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
      }
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }
   LAB_00121e78:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* CowData<RenderingServer::SurfaceData::LOD>::_realloc(long) */undefined8 CowData<RenderingServer::SurfaceData::LOD>::_realloc(CowData<RenderingServer::SurfaceData::LOD> *this, long param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), param_1 + 0x10, false);
   if (puVar1 != (undefined8*)0x0) {
      *puVar1 = 1;
      *(undefined8**)this = puVar1 + 2;
      return 0;
   }
   _err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
   return 6;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingServer::SurfaceData::LOD>::resize<false>(long) */undefined8 CowData<RenderingServer::SurfaceData::LOD>::resize<false>(CowData<RenderingServer::SurfaceData::LOD> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }
   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }
      _copy_on_write(this);
      lVar10 = 0;
      lVar7 = 0;
   } else {
      lVar10 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar10) {
         return 0;
      }
      if (param_1 == 0) {
         _unref(this);
         return 0;
      }
      _copy_on_write(this);
      lVar7 = lVar10 * 0x18;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }
   }
   if (param_1 * 0x18 == 0) {
      LAB_00122180:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }
   uVar8 = param_1 * 0x18 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar9 = uVar8 + 1;
   if (lVar9 == 0) goto LAB_00122180;
   if (param_1 <= lVar10) {
      puVar6 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar6 != (undefined8*)0x0) {
         if ((ulong)puVar6[-1] <= uVar8) {
            LAB_00122041:if (lVar9 != lVar7) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }
               puVar6 = *(undefined8**)this;
               if (puVar6 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }
            }
            goto LAB_001220e7;
         }
         while (puVar6[uVar8 * 3 + 2] == 0) {
            uVar8 = uVar8 + 1;
            if ((ulong)puVar6[-1] <= uVar8) goto LAB_00122041;
         };
         LOCK();
         plVar1 = (long*)( puVar6[uVar8 * 3 + 2] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = puVar6[uVar8 * 3 + 2];
            puVar6[uVar8 * 3 + 2] = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }
         uVar8 = uVar8 + 1;
         puVar6 = *(undefined8**)this;
      };
      goto LAB_001221d6;
   }
   if (lVar9 == lVar7) {
      LAB_00122103:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_001221d6:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      lVar10 = puVar6[-1];
      if (param_1 <= lVar10) goto LAB_001220e7;
   } else {
      if (lVar10 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }
         goto LAB_00122103;
      }
      puVar4 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }
      puVar6 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar6;
      lVar10 = 0;
   }
   puVar4 = puVar6 + lVar10 * 3;
   do {
      *(undefined4*)puVar4 = 0;
      puVar5 = puVar4 + 3;
      puVar4[2] = 0;
      puVar4 = puVar5;
   } while ( puVar5 != puVar6 + param_1 * 3 );
   LAB_001220e7:puVar6[-1] = param_1;
   return 0;
}/* WARNING: Control flow encountered bad instruction data *//* RenderingServer::SurfaceData::~SurfaceData() */void RenderingServer::SurfaceData::~SurfaceData(SurfaceData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::Mesh, true>::~RID_Alloc() */void RID_Alloc<GLES3::Mesh,true>::~RID_Alloc(RID_Alloc<GLES3::Mesh,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::MeshInstance, false>::~RID_Alloc() */void RID_Alloc<GLES3::MeshInstance,false>::~RID_Alloc(RID_Alloc<GLES3::MeshInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::Skeleton, true>::~RID_Alloc() */void RID_Alloc<GLES3::Skeleton,true>::~RID_Alloc(RID_Alloc<GLES3::Skeleton,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::MultiMesh, true>::~RID_Alloc() */void RID_Alloc<GLES3::MultiMesh,true>::~RID_Alloc(RID_Alloc<GLES3::MultiMesh,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* GLES3::MeshInstance::~MeshInstance() */void GLES3::MeshInstance::~MeshInstance(MeshInstance *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* GLES3::Mesh::~Mesh() */void GLES3::Mesh::~Mesh(Mesh *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* SkeletonShaderGLES3::~SkeletonShaderGLES3() */void SkeletonShaderGLES3::~SkeletonShaderGLES3(SkeletonShaderGLES3 *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

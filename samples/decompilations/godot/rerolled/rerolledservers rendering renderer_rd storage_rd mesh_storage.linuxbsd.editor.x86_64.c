/* RendererRD::MeshStorage::mesh_instance_set_skeleton(RID, RID) */void RendererRD::MeshStorage::mesh_instance_set_skeleton(MeshStorage *this, ulong param_2, long param_3) {
   code *pcVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x124 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 );
      if (*(int*)( lVar2 + 0xa8 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar2 + 8 ) != param_3) {
            *(long*)( lVar2 + 8 ) = param_3;
            *(undefined8*)( lVar2 + 0x40 ) = 0;
            *(undefined1*)( lVar2 + 0x48 ) = 1;
         }

         return;
      }

      if (*(int*)( lVar2 + 0xa8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar2);
      }

   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::mesh_instance_set_canvas_item_transform(RID, Transform2D const&) */void RendererRD::MeshStorage::mesh_instance_set_canvas_item_transform(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x124 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 );
      if (*(int*)( lVar3 + 0xa8 ) == (int)( param_2 >> 0x20 )) {
         uVar2 = param_3[1];
         *(undefined8*)( lVar3 + 0x90 ) = *param_3;
         *(undefined8*)( lVar3 + 0x98 ) = uVar2;
         *(undefined8*)( lVar3 + 0xa0 ) = param_3[2];
         return;
      }

      if (*(int*)( lVar3 + 0xa8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar3);
      }

   }

   _DAT_00000090 = *param_3;
   uRam0000000000000098 = param_3[1];
   _DAT_000000a0 = param_3[2];
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::MeshStorage::mesh_instance_set_blend_shape_weight(RID, int, float) */void RendererRD::MeshStorage::mesh_instance_set_blend_shape_weight(undefined4 param_1, MeshStorage *this, ulong param_3, uint param_4) {
   uint uVar1;
   code *pcVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x124 ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 );
      if (*(int*)( lVar3 + 0xa8 ) == (int)( param_3 >> 0x20 )) {
         uVar1 = *(uint*)( lVar3 + 0x20 );
         if (( -1 < (int)param_4 ) && ( (int)param_4 < (int)uVar1 )) {
            if (param_4 < uVar1) {
               *(undefined4*)( *(long*)( lVar3 + 0x28 ) + (long)(int)param_4 * 4 ) = param_1;
               *(undefined1*)( lVar3 + 0x49 ) = 1;
               return;
            }

            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (long)(int)param_4, (ulong)uVar1, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         _err_print_index_error("mesh_instance_set_blend_shape_weight", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x3d2, (long)(int)param_4, (long)(int)uVar1, "p_shape", "(int)mi->blend_weights.size()", "", false, false);
         return;
      }

      if (*(int*)( lVar3 + 0xa8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_instance_set_blend_shape_weight", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x3d1, "Parameter \"mi\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_set_blend_shape_count(RID, int) */void RendererRD::MeshStorage::mesh_set_blend_shape_count(MeshStorage *this, ulong param_2, int param_3) {
   int *piVar1;
   if (param_3 < 0) {
      _err_print_error("mesh_set_blend_shape_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0xf8, "Condition \"p_blend_shape_count < 0\" is true.", 0, 0);
      return;
   }

   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      piVar1 = (int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      if (piVar1[0x36] == (int)( param_2 >> 0x20 )) {
         if (piVar1[4] == 0) {
            *piVar1 = param_3;
            return;
         }

         _err_print_error("mesh_set_blend_shape_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0xfd, "Condition \"mesh->surface_count > 0\" is true.", 0, 0);
         return;
      }

      if (piVar1[0x36] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_set_blend_shape_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0xfb, "Parameter \"mesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_get_blend_shape_count(RID) const */undefined4 RendererRD::MeshStorage::mesh_get_blend_shape_count(MeshStorage *this, ulong param_2) {
   int iVar1;
   undefined4 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      puVar2 = (undefined4*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      iVar1 = puVar2[0x36];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_blend_shape_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x221, "Parameter \"mesh\" is null.", 0, 0);
   return 0xffffffff;
}
/* RendererRD::MeshStorage::mesh_set_blend_shape_mode(RID, RenderingServer::BlendShapeMode) */void RendererRD::MeshStorage::mesh_set_blend_shape_mode(MeshStorage *this, ulong param_2, uint param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xd8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (param_3 < 2) {
            *(uint*)( lVar2 + 4 ) = param_3;
         }
 else {
            _err_print_index_error("mesh_set_blend_shape_mode", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x228, (long)(int)param_3, 2, "(int)p_mode", "2", "", false, false);
         }

         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_set_blend_shape_mode", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x227, "Parameter \"mesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_get_blend_shape_mode(RID) const */undefined4 RendererRD::MeshStorage::mesh_get_blend_shape_mode(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xd8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 4 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_blend_shape_mode", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x22f, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::mesh_surface_get_material(RID, int) const */undefined8 RendererRD::MeshStorage::mesh_surface_get_material(MeshStorage *this, ulong param_2, uint param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar2 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < *(uint*)( lVar2 + 0x10 )) {
            uVar1 = *(undefined8*)( *(long*)( *(long*)( lVar2 + 8 ) + (long)(int)param_3 * 8 ) + 0x120 );
         }
 else {
            _err_print_index_error("mesh_surface_get_material", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x264, (ulong)param_3, ( ulong ) * (uint*)( lVar2 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            uVar1 = 0;
         }

         return uVar1;
      }

      if (*(int*)( lVar2 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_surface_get_material", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x263, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::mesh_get_surface_count(RID) const */undefined4 RendererRD::MeshStorage::mesh_get_surface_count(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xd8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x10 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_surface_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x29b, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::mesh_get_custom_aabb(RID) const */undefined8 *RendererRD::MeshStorage::mesh_get_custom_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xcc ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 200 ) ) * 0xe0 + *(long*)( *(long*)( param_2 + 0xb8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 200 ) ) * 8 );
      if (*(int*)( lVar3 + 0xd8 ) == (int)( param_3 >> 0x20 )) {
         uVar2 = *(undefined8*)( lVar3 + 0x38 );
         uVar1 = *(undefined8*)( lVar3 + 0x40 );
         *param_1 = *(undefined8*)( lVar3 + 0x30 );
         param_1[1] = uVar2;
         param_1[2] = uVar1;
         return param_1;
      }

      if (*(int*)( lVar3 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_custom_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x2a9, "Parameter \"mesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererRD::MeshStorage::mesh_needs_instance(RID, bool) */byte RendererRD::MeshStorage::mesh_needs_instance(MeshStorage *this, ulong param_2, byte param_3) {
   int *piVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      piVar1 = (int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      if (piVar1[0x36] == (int)( param_2 >> 0x20 )) {
         if (*piVar1 != 0) {
            return 1;
         }

         return *(byte*)( piVar1 + 5 ) & param_3;
      }

      if (piVar1[0x36] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_needs_instance", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x39a, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_multimesh_get_instance_count(RID) const */undefined4 RendererRD::MeshStorage::_multimesh_get_instance_count(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x158 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 8 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_instance_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x644, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_multimesh_get_mesh(RID) const */undefined8 RendererRD::MeshStorage::_multimesh_get_mesh(MeshStorage *this, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) );
      iVar1 = *(int*)( puVar2 + 0x2b );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_mesh", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x78e, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_multimesh_get_command_buffer_rd_rid(RID) const */undefined8 RendererRD::MeshStorage::_multimesh_get_command_buffer_rd_rid(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x158 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0xb8 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_command_buffer_rd_rid", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x831, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_multimesh_get_buffer_rd_rid(RID) const */undefined8 RendererRD::MeshStorage::_multimesh_get_buffer_rd_rid(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x158 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0xa0 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_buffer_rd_rid", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x837, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_multimesh_get_visible_instances(RID) const */undefined4 RendererRD::MeshStorage::_multimesh_get_visible_instances(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x158 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x14 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_visible_instances", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x872, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_multimesh_get_custom_aabb(RID) const */undefined8 *RendererRD::MeshStorage::_multimesh_get_custom_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0x160 + *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 );
      if (*(int*)( lVar3 + 0x158 ) == (int)( param_3 >> 0x20 )) {
         uVar2 = *(undefined8*)( lVar3 + 0x38 );
         uVar1 = *(undefined8*)( lVar3 + 0x40 );
         *param_1 = *(undefined8*)( lVar3 + 0x30 );
         param_1[1] = uVar2;
         param_1[2] = uVar1;
         return param_1;
      }

      if (*(int*)( lVar3 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_custom_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x87f, "Parameter \"multimesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererRD::MeshStorage::skeleton_get_bone_count(RID) const */undefined4 RendererRD::MeshStorage::skeleton_get_bone_count(MeshStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x3a4 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98;
      iVar2 = *(int*)( lVar1 + 0x90 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar1 + 4 );
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("skeleton_get_bone_count", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x916, "Parameter \"skeleton\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::skeleton_bone_set_transform(RID, int, Transform3D const&) */void RendererRD::MeshStorage::skeleton_bone_set_transform(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   char *pcVar1;
   undefined4 *puVar2;
   char cVar3;
   undefined8 uVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x3a4 ) )) {
      pcVar1 = (char*)( *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98 );
      if (*(int*)( pcVar1 + 0x90 ) == (int)( param_2 >> 0x20 )) {
         if (( -1 < param_3 ) && ( param_3 < *(int*)( pcVar1 + 4 ) )) {
            if (*pcVar1 == '\0') {
               cVar3 = pcVar1[0x20];
               puVar2 = (undefined4*)( *(long*)( pcVar1 + 0x10 ) + (long)( param_3 * 0xc ) * 4 );
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
               if (cVar3 == '\0') {
                  uVar4 = *(undefined8*)( this + 0x3e0 );
                  pcVar1[0x20] = '\x01';
                  *(undefined8*)( pcVar1 + 0x28 ) = uVar4;
                  *(char**)( this + 0x3e0 ) = pcVar1;
               }

               return;
            }

            _err_print_error("skeleton_bone_set_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x920, "Condition \"skeleton->use_2d\" is true.", 0, 0);
            return;
         }

         _err_print_index_error("skeleton_bone_set_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x91f, (long)param_3, (long)*(int*)( pcVar1 + 4 ), "p_bone", "skeleton->size", "", false, false);
         return;
      }

      if (*(int*)( pcVar1 + 0x90 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("skeleton_bone_set_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x91e, "Parameter \"skeleton\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::skeleton_bone_get_transform(RID, int) const */undefined1(*)[16];RendererRD::MeshStorage::skeleton_bone_get_transform(undefined1 (*param_1)[16], long param_2, ulong param_3, int param_4) {
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
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x3a4 ) )) {
      pcVar10 = (char*)( *(long*)( *(long*)( param_2 + 0x390 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x3a0 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x3a0 ) ) * 0x98 );
      if (*(int*)( pcVar10 + 0x90 ) == (int)( param_3 >> 0x20 )) {
         if (( param_4 < 0 ) || ( *(int*)( pcVar10 + 4 ) <= param_4 )) {
            _err_print_index_error("skeleton_bone_get_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x938, (long)param_4, (long)*(int*)( pcVar10 + 4 ), "p_bone", "skeleton->size", "", false, false);
            uVar9 = _LC46;
            *(undefined4*)param_1[2] = 0x3f800000;
            *(undefined8*)( param_1[2] + 4 ) = 0;
            *(undefined4*)( param_1[2] + 0xc ) = 0;
            *param_1 = ZEXT416(uVar9);
            param_1[1] = ZEXT416(uVar9);
            return param_1;
         }

         if (*pcVar10 == '\0') {
            puVar1 = (undefined4*)( *(long*)( pcVar10 + 0x10 ) + (long)( param_4 * 0xc ) * 4 );
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

         uVar11 = 0x939;
         pcVar10 = "Condition \"skeleton->use_2d\" is true. Returning: Transform3D()";
         goto LAB_0010141a;
      }

      if (*(int*)( pcVar10 + 0x90 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar11 = 0x937;
   pcVar10 = "Parameter \"skeleton\" is null.";
   LAB_0010141a:_err_print_error("skeleton_bone_get_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar11, pcVar10, 0, 0);
   uVar9 = _LC46;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar9);
   param_1[1] = ZEXT416(uVar9);
   return param_1;
}
/* RendererRD::MeshStorage::skeleton_bone_set_transform_2d(RID, int, Transform2D const&) */void RendererRD::MeshStorage::skeleton_bone_set_transform_2d(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   char *pcVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   char cVar4;
   undefined8 uVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x3a4 ) )) {
      pcVar1 = (char*)( *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98 );
      if (*(int*)( pcVar1 + 0x90 ) == (int)( param_2 >> 0x20 )) {
         if (( -1 < param_3 ) && ( param_3 < *(int*)( pcVar1 + 4 ) )) {
            if (*pcVar1 != '\0') {
               cVar4 = pcVar1[0x20];
               puVar2 = (undefined4*)( *(long*)( pcVar1 + 0x10 ) + (long)( param_3 << 3 ) * 4 );
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
               if (cVar4 == '\0') {
                  uVar5 = *(undefined8*)( this + 0x3e0 );
                  pcVar1[0x20] = '\x01';
                  *(undefined8*)( pcVar1 + 0x28 ) = uVar5;
                  *(char**)( this + 0x3e0 ) = pcVar1;
               }

               return;
            }

            _err_print_error("skeleton_bone_set_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x954, "Condition \"!skeleton->use_2d\" is true.", 0, 0);
            return;
         }

         _err_print_index_error("skeleton_bone_set_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x953, (long)param_3, (long)*(int*)( pcVar1 + 4 ), "p_bone", "skeleton->size", "", false, false);
         return;
      }

      if (*(int*)( pcVar1 + 0x90 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("skeleton_bone_set_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x952, "Parameter \"skeleton\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::skeleton_bone_get_transform_2d(RID, int) const */undefined8 *RendererRD::MeshStorage::skeleton_bone_get_transform_2d(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   undefined4 *puVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   char *pcVar6;
   undefined8 uVar7;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x3a4 ) )) {
      pcVar6 = (char*)( *(long*)( *(long*)( param_2 + 0x390 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x3a0 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x3a0 ) ) * 0x98 );
      if (*(int*)( pcVar6 + 0x90 ) == (int)( param_3 >> 0x20 )) {
         if (( param_4 < 0 ) || ( *(int*)( pcVar6 + 4 ) <= param_4 )) {
            _err_print_index_error("skeleton_bone_get_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x967, (long)param_4, (long)*(int*)( pcVar6 + 4 ), "p_bone", "skeleton->size", "", false, false);
            *param_1 = 0x3f800000;
            param_1[1] = 0x3f80000000000000;
            param_1[2] = 0;
            return param_1;
         }

         if (*pcVar6 != '\0') {
            puVar1 = (undefined4*)( *(long*)( pcVar6 + 0x10 ) + (long)( param_4 << 3 ) * 4 );
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

         uVar7 = 0x968;
         pcVar6 = "Condition \"!skeleton->use_2d\" is true. Returning: Transform2D()";
         goto LAB_001017c2;
      }

      if (*(int*)( pcVar6 + 0x90 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar7 = 0x966;
   pcVar6 = "Parameter \"skeleton\" is null.";
   LAB_001017c2:_err_print_error("skeleton_bone_get_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar7, pcVar6, 0, 0);
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   return param_1;
}
/* RendererRD::MeshStorage::skeleton_set_base_transform_2d(RID, Transform2D const&) */void RendererRD::MeshStorage::skeleton_set_base_transform_2d(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   char *pcVar1;
   undefined8 uVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x3a4 ) )) {
      pcVar1 = (char*)( *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98 );
      if (*(int*)( pcVar1 + 0x90 ) == (int)( param_2 >> 0x20 )) {
         if (*pcVar1 != '\0') {
            uVar2 = param_3[1];
            *(undefined8*)( pcVar1 + 0x30 ) = *param_3;
            *(undefined8*)( pcVar1 + 0x38 ) = uVar2;
            *(undefined8*)( pcVar1 + 0x40 ) = param_3[2];
            return;
         }

         _err_print_error("skeleton_set_base_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x97b, "Condition \"!skeleton->use_2d\" is true.", 0, 0);
         return;
      }

      if (*(int*)( pcVar1 + 0x90 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("skeleton_set_base_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x97a, "Parameter \"skeleton\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_set_custom_aabb(RID, AABB const&) */void RendererRD::MeshStorage::mesh_set_custom_aabb(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar2 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x30 ) = *param_3;
         *(undefined8*)( lVar2 + 0x38 ) = uVar1;
         *(undefined8*)( lVar2 + 0x40 ) = param_3[2];
         Dependency::changed_notify(lVar2 + 0xa8, 0);
         return;
      }

      if (*(int*)( lVar2 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_set_custom_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x2a1, "Parameter \"mesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::_multimesh_set_custom_aabb(RID, AABB const&) */void RendererRD::MeshStorage::_multimesh_set_custom_aabb(MeshStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar2 + 0x158 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x30 ) = *param_3;
         *(undefined8*)( lVar2 + 0x38 ) = uVar1;
         *(undefined8*)( lVar2 + 0x40 ) = param_3[2];
         Dependency::changed_notify(lVar2 + 0x128, 0);
         return;
      }

      if (*(int*)( lVar2 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_set_custom_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x878, "Parameter \"multimesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_surface_update_vertex_region(RID, int, int, Vector<unsigned char>
   const&) */void RendererRD::MeshStorage::mesh_surface_update_vertex_region(MeshStorage *this, ulong param_2, uint param_3, undefined4 param_4, long param_5) {
   long lVar1;
   ulong uVar2;
   undefined8 uVar3;
   char *pcVar4;
   long lVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar5 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar5 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_update_vertex_region", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x236, (ulong)param_3, ( ulong ) * (uint*)( lVar5 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }

         lVar1 = *(long*)( param_5 + 8 );
         if (lVar1 == 0) {
            uVar3 = 0x237;
            pcVar4 = "Condition \"p_data.is_empty()\" is true.";
         }
 else {
            if (*(long*)( *(long*)( *(long*)( lVar5 + 8 ) + (long)(int)param_3 * 8 ) + 0x10 ) != 0) {
               uVar2 = *(ulong*)( lVar1 + -8 );
               uVar3 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_update(uVar3, *(undefined8*)( *(long*)( *(long*)( lVar5 + 8 ) + (long)(int)param_3 * 8 ) + 0x10 ), param_4, uVar2 & 0xffffffff, lVar1);
               return;
            }

            uVar3 = 0x238;
            pcVar4 = "Condition \"mesh->surfaces[p_surface]->vertex_buffer.is_null()\" is true.";
         }

         goto LAB_00101c3a;
      }

      if (*(int*)( lVar5 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar3 = 0x235;
   pcVar4 = "Parameter \"mesh\" is null.";
   LAB_00101c3a:_err_print_error("mesh_surface_update_vertex_region", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar3, pcVar4, 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_surface_update_attribute_region(RID, int, int, Vector<unsigned
   char> const&) */void RendererRD::MeshStorage::mesh_surface_update_attribute_region(MeshStorage *this, ulong param_2, uint param_3, undefined4 param_4, long param_5) {
   long lVar1;
   ulong uVar2;
   undefined8 uVar3;
   char *pcVar4;
   long lVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar5 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar5 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_update_attribute_region", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x242, (ulong)param_3, ( ulong ) * (uint*)( lVar5 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }

         lVar1 = *(long*)( param_5 + 8 );
         if (lVar1 == 0) {
            uVar3 = 0x243;
            pcVar4 = "Condition \"p_data.is_empty()\" is true.";
         }
 else {
            if (*(long*)( *(long*)( *(long*)( lVar5 + 8 ) + (long)(int)param_3 * 8 ) + 0x18 ) != 0) {
               uVar2 = *(ulong*)( lVar1 + -8 );
               uVar3 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_update(uVar3, *(undefined8*)( *(long*)( *(long*)( lVar5 + 8 ) + (long)(int)param_3 * 8 ) + 0x18 ), param_4, uVar2 & 0xffffffff, lVar1);
               return;
            }

            uVar3 = 0x244;
            pcVar4 = "Condition \"mesh->surfaces[p_surface]->attribute_buffer.is_null()\" is true.";
         }

         goto LAB_00101dfa;
      }

      if (*(int*)( lVar5 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar3 = 0x241;
   pcVar4 = "Parameter \"mesh\" is null.";
   LAB_00101dfa:_err_print_error("mesh_surface_update_attribute_region", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar3, pcVar4, 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_surface_update_skin_region(RID, int, int, Vector<unsigned char>
   const&) */void RendererRD::MeshStorage::mesh_surface_update_skin_region(MeshStorage *this, ulong param_2, uint param_3, undefined4 param_4, long param_5) {
   long lVar1;
   ulong uVar2;
   undefined8 uVar3;
   char *pcVar4;
   long lVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar5 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar5 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_update_skin_region", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x24e, (ulong)param_3, ( ulong ) * (uint*)( lVar5 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }

         lVar1 = *(long*)( param_5 + 8 );
         if (lVar1 == 0) {
            uVar3 = 0x24f;
            pcVar4 = "Condition \"p_data.is_empty()\" is true.";
         }
 else {
            if (*(long*)( *(long*)( *(long*)( lVar5 + 8 ) + (long)(int)param_3 * 8 ) + 0x20 ) != 0) {
               uVar2 = *(ulong*)( lVar1 + -8 );
               uVar3 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_update(uVar3, *(undefined8*)( *(long*)( *(long*)( lVar5 + 8 ) + (long)(int)param_3 * 8 ) + 0x20 ), param_4, uVar2 & 0xffffffff, lVar1);
               return;
            }

            uVar3 = 0x250;
            pcVar4 = "Condition \"mesh->surfaces[p_surface]->skin_buffer.is_null()\" is true.";
         }

         goto LAB_00101fba;
      }

      if (*(int*)( lVar5 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar3 = 0x24d;
   pcVar4 = "Parameter \"mesh\" is null.";
   LAB_00101fba:_err_print_error("mesh_surface_update_skin_region", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar3, pcVar4, 0, 0);
   return;
}
/* RendererRD::MeshStorage::_multimesh_set_visible_instances(RID, int) */void RendererRD::MeshStorage::_multimesh_set_visible_instances(MeshStorage *this, ulong param_2, uint param_3) {
   ulong uVar1;
   int iVar2;
   undefined8 uVar3;
   uint uVar4;
   char *pcVar5;
   ulong uVar6;
   ulong extraout_RDX;
   ulong *puVar7;
   int iVar8;
   long lVar9;
   uint uVar10;
   ulong in_stack_ffffffffffffffc0;
   uint local_2c;
   local_2c = param_3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      puVar7 = (ulong*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) );
      if ((int)puVar7[0x2b] == (int)( param_2 >> 0x20 )) {
         uVar6 = (ulong)param_3;
         if (( -2 < (int)param_3 ) && ( iVar2 = (int)puVar7[1] ),(int)param_3 <= iVar2) {
            uVar10 = *(uint*)( (long)puVar7 + 0x14 );
            if (param_3 != uVar10) {
               if (( puVar7[0xf] != 0 ) && ( *(long*)( puVar7[0xf] - 8 ) != 0 )) {
                  *(undefined1*)( puVar7 + 9 ) = 1;
                  if ((char)puVar7[0x18] == '\0') {
                     puVar7[0x19] = *(ulong*)( this + 0x1d8 );
                     *(ulong**)( this + 0x1d8 ) = puVar7;
                     *(undefined1*)( puVar7 + 0x18 ) = 1;
                  }

                  if (( -1 < (int)uVar10 ) && ( (int)uVar10 < (int)param_3 )) {
                     while (true) {
                        uVar4 = (int)uVar10 >> 9;
                        iVar8 = iVar2 + 0x3fe;
                        if (-1 < iVar2 + 0x1ff) {
                           iVar8 = iVar2 + 0x1ff;
                        }

                        if (uVar4 < ( uint )(iVar8 >> 9)) {
                           pcVar5 = (char*)( (long)(int)uVar4 + puVar7[0x10] );
                           if (*pcVar5 == '\0') {
                              *pcVar5 = '\x01';
                              *(int*)( puVar7 + 0x11 ) = (int)puVar7[0x11] + 1;
                           }

                           *(undefined1*)( puVar7 + 9 ) = 1;
                           if ((char)puVar7[0x18] == '\0') {
                              puVar7[0x19] = *(ulong*)( this + 0x1d8 );
                              *(ulong**)( this + 0x1d8 ) = puVar7;
                              *(undefined1*)( puVar7 + 0x18 ) = 1;
                           }

                        }
 else {
                           in_stack_ffffffffffffffc0 = 0;
                           _err_print_index_error("_multimesh_mark_dirty", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6c8, (long)(int)uVar4, (long)( iVar8 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
                           uVar6 = (ulong)local_2c;
                        }

                        uVar10 = uVar10 + 1;
                        if ((int)uVar6 <= (int)uVar10) break;
                        iVar2 = (int)puVar7[1];
                     }
;
                  }

               }

               *(int*)( (long)puVar7 + 0x14 ) = (int)uVar6;
               if (( *(char*)( (long)puVar7 + 0x4a ) != '\0' ) && ( *puVar7 != 0 )) {
                  uVar1 = *puVar7;
                  uVar6 = ( ulong ) * (uint*)( this + 0xcc );
                  if ((uint)uVar1 < *(uint*)( this + 0xcc )) {
                     uVar6 = ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 );
                     lVar9 = uVar6 * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
                     if (*(int*)( lVar9 + 0xd8 ) == (int)( uVar1 >> 0x20 )) {
                        uVar10 = 0;
                        iVar2 = 4;
                        if (*(int*)( lVar9 + 0x10 ) != 0) {
                           do {
                              uVar3 = RenderingDevice::get_singleton();
                              uVar10 = uVar10 + 1;
                              RenderingDevice::buffer_update(uVar3, puVar7[0x17], iVar2, 4, &local_2c);
                              uVar6 = extraout_RDX;
                              iVar2 = iVar2 + 0x14;
                           }
 while ( uVar10 < *(uint*)( lVar9 + 0x10 ) );
                        }

                     }
 else if (*(int*)( lVar9 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
                        uVar6 = in_stack_ffffffffffffffc0;
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }

                  }

               }

               Dependency::changed_notify(puVar7 + 0x25, 4, uVar6);
            }

            return;
         }

         _err_print_error("_multimesh_set_visible_instances", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x854, "Condition \"p_visible < -1 || p_visible > multimesh->instances\" is true.", 0, 0);
         return;
      }

      if ((int)puVar7[0x2b] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_set_visible_instances", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x853, "Parameter \"multimesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_get_aabb(RID, RID) */undefined8 *RendererRD::MeshStorage::mesh_get_aabb(undefined8 *param_1, long param_2, ulong param_3, ulong param_4) {
   char *pcVar1;
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
   long lVar12;
   long lVar13;
   long lVar14;
   undefined8 *puVar15;
   long lVar16;
   char cVar17;
   long lVar18;
   AABB *pAVar19;
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
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xcc ) )) {
      lVar12 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 200 ) ) * 0xe0 + *(long*)( *(long*)( param_2 + 0xb8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 200 ) ) * 8 );
      if (*(int*)( lVar12 + 0xd8 ) == (int)( param_3 >> 0x20 )) {
         local_78 = 0;
         uStack_70 = 0;
         uStack_6c = 0;
         uStack_68 = 0;
         uStack_64 = 0;
         cVar9 = AABB::operator !=((AABB*)( lVar12 + 0x30 ), (AABB*)&local_78);
         if (cVar9 == '\0') {
            if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( param_2 + 0x3a4 ) )) {
               pcVar1 = (char*)( *(long*)( *(long*)( param_2 + 0x390 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x3a0 ) ) * 8 ) + ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x3a0 ) ) * 0x98 );
               if (*(int*)( pcVar1 + 0x90 ) == (int)( param_4 >> 0x20 )) {
                  if (( *(int*)( pcVar1 + 4 ) != 0 ) && ( ( lVar16 = *(long*)( pcVar1 + 0x58 ) * (long*)( lVar12 + 0x48 ) != lVar16 || ( param_4 != *(ulong*)( lVar12 + 0x50 ) ) ) )) {
                     local_f8 = 0;
                     fStack_f0 = 0.0;
                     fStack_ec = 0.0;
                     fStack_e8 = 0.0;
                     fStack_e4 = 0.0;
                     if (*(int*)( lVar12 + 0x10 ) != 0) {
                        lVar16 = 0;
                        do {
                           fVar24 = _LC70;
                           local_d8 = 0;
                           fStack_d0 = 0.0;
                           fStack_cc = 0.0;
                           fStack_c8 = 0.0;
                           lVar5 = *(long*)( *(long*)( lVar12 + 8 ) + lVar16 * 8 );
                           fStack_c4 = 0.0;
                           if (( ( ( *(byte*)( lVar5 + 9 ) & 4 ) == 0 ) || ( puVar15 = *(undefined8**)( lVar5 + 0xd0 ) ),puVar15 == (undefined8*)0x0 )) {
                              LAB_00102ab0:auVar4 = *(undefined1(*) [16])( lVar5 + 0xac );
                              local_d8 = auVar4._0_8_;
                              fStack_d0 = auVar4._8_4_;
                              fStack_cc = auVar4._12_4_;
                              fStack_c8 = (float)*(undefined8*)( lVar5 + 0xbc );
                              fStack_c4 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0xbc ) >> 0x20 );
                              if ((int)lVar16 == 0) {
                                 LAB_00102970:fStack_e8 = fStack_c8;
                                 fStack_e4 = fStack_c4;
                                 local_f8 = local_d8;
                                 fStack_f0 = fStack_d0;
                                 fStack_ec = fStack_cc;
                              }
 else {
                                 LAB_00102ada:AABB::merge_with((AABB*)&local_f8);
                              }

                           }
 else {
                              iVar10 = (int)puVar15[-1];
                              if (iVar10 <= *(int*)( pcVar1 + 4 )) {
                                 lVar14 = *(long*)( pcVar1 + 0x10 );
                                 cVar9 = *pcVar1;
                                 if (cVar9 == '\0') {
                                    if (iVar10 < 1) goto LAB_00102a80;
                                    cVar17 = '\0';
                                    iVar20 = 0;
                                    puVar2 = puVar15 + ( ulong )(iVar10 - 1) * 3 + 3;
                                    do {
                                       fVar21 = (float)*(undefined8*)( (long)puVar15 + 0xc );
                                       fVar25 = (float)( ( ulong ) * (undefined8*)( (long)puVar15 + 0xc ) >> 0x20 );
                                       if (( ( fVar21 != fVar24 ) || ( fVar25 != fVar24 ) ) || ( *(float*)( (long)puVar15 + 0x14 ) != fVar24 )) {
                                          local_110 = 0.0;
                                          lVar13 = 0;
                                          puVar3 = (undefined8*)( lVar14 + (long)iVar20 * 4 );
                                          local_118 = 0;
                                          uStack_60 = puVar3[4];
                                          local_108 = 0;
                                          local_100 = 0.0;
                                          local_58 = CONCAT44(*(undefined4*)( (long)puVar3 + 0xc ), *(undefined4*)( puVar3 + 5 ));
                                          uStack_70 = *(undefined4*)( puVar3 + 1 );
                                          uStack_6c = *(undefined4*)( puVar3 + 2 );
                                          local_78 = *puVar3;
                                          uStack_68 = ( undefined4 ) * (undefined8*)( (long)puVar3 + 0x14 );
                                          uStack_64 = ( undefined4 )(( ulong ) * (undefined8*)( (long)puVar3 + 0x14 ) >> 0x20);
                                          uStack_50 = CONCAT44(*(undefined4*)( (long)puVar3 + 0x2c ), *(undefined4*)( (long)puVar3 + 0x1c ));
                                          local_98 = *puVar15;
                                          fStack_90 = (float)*(undefined4*)( puVar15 + 1 );
                                          local_128 = CONCAT44((float)( ( ulong ) * puVar15 >> 0x20 ) + fVar25, (float)*puVar15 + fVar21);
                                          local_120 = *(float*)( (long)puVar15 + 0x14 ) + *(float*)( puVar15 + 1 );
                                          lVar18 = lVar5;
                                          do {
                                             fVar21 = *(float*)( lVar5 + 0xfc + lVar13 );
                                             lVar11 = 0;
                                             fVar25 = fVar21;
                                             do {
                                                fVar26 = *(float*)( lVar18 + 0xd8 + lVar11 );
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
                                             }
 while ( lVar11 != 0xc );
                                             *(float*)( (long)&local_108 + lVar13 ) = fVar25;
                                             lVar18 = lVar18 + 0xc;
                                             *(float*)( (long)&local_118 + lVar13 ) = fVar21;
                                             local_b8 = local_118;
                                             lVar13 = lVar13 + 4;
                                          }
 while ( lVar13 != 0xc );
                                          lVar18 = 0;
                                          local_128 = 0;
                                          uStack_b0 = CONCAT44(uStack_b0._4_4_, local_110);
                                          local_130 = local_100 - local_110;
                                          local_100 = local_110;
                                          local_130 = local_130 + local_110;
                                          local_120 = 0.0;
                                          fVar21 = (float)local_108;
                                          uVar8 = (ulong)local_108 >> 0x20;
                                          fVar25 = (float)local_118;
                                          fVar26 = (float)( (ulong)local_118 >> 0x20 );
                                          local_118 = 0;
                                          local_110 = 0.0;
                                          local_108 = local_b8;
                                          local_138 = CONCAT44(( (float)uVar8 - fVar26 ) + fVar26, ( fVar21 - fVar25 ) + fVar25);
                                          pAVar19 = (AABB*)&local_78;
                                          do {
                                             fVar21 = *(float*)( (long)&local_58 + lVar18 + 4 );
                                             lVar13 = 0;
                                             fVar25 = fVar21;
                                             do {
                                                fVar23 = *(float*)( (long)&local_108 + lVar13 ) * *(float*)( pAVar19 + lVar13 );
                                                fVar22 = *(float*)( pAVar19 + lVar13 ) * *(float*)( (long)&local_138 + lVar13 );
                                                fVar26 = fVar22;
                                                if (fVar23 < fVar22) {
                                                   fVar26 = fVar23;
                                                   fVar23 = fVar22;
                                                }

                                                fVar25 = fVar25 + fVar23;
                                                fVar21 = fVar21 + fVar26;
                                                lVar13 = lVar13 + 4;
                                             }
 while ( lVar13 != 0xc );
                                             *(float*)( (long)&local_118 + lVar18 ) = fVar25;
                                             pAVar19 = pAVar19 + 0xc;
                                             *(float*)( (long)&local_128 + lVar18 ) = fVar21;
                                             lVar18 = lVar18 + 4;
                                          }
 while ( lVar18 != 0xc );
                                          fStack_8c = (float)local_118 - (float)local_128;
                                          fStack_88 = (float)( (ulong)local_118 >> 0x20 ) - local_128._4_4_;
                                          fStack_84 = local_110 - local_120;
                                          local_98 = local_128;
                                          fStack_90 = local_120;
                                          local_a8 = CONCAT44(fStack_84, fStack_88);
                                          local_b8 = local_128;
                                          uStack_b0 = CONCAT44(fStack_8c, local_120);
                                          if (cVar17 == '\0') {
                                             local_d8 = local_128;
                                             fStack_d0 = local_120;
                                             fStack_cc = fStack_8c;
                                             fStack_c8 = fStack_88;
                                             fStack_c4 = fStack_84;
                                          }
 else {
                                             AABB::merge_with((AABB*)&local_d8);
                                          }

                                          cVar17 = '\x01';
                                       }

                                       puVar15 = puVar15 + 3;
                                       iVar20 = iVar20 + 0xc;
                                    }
 while ( puVar2 != puVar15 );
                                    LAB_0010293f:if (cVar17 != '\0') {
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
                                       pAVar19 = (AABB*)&local_78;
                                       do {
                                          fVar24 = *(float*)( (long)&local_58 + lVar14 + 4 );
                                          lVar18 = 0;
                                          fVar21 = fVar24;
                                          do {
                                             fVar26 = *(float*)( (long)&local_b8 + lVar18 ) * *(float*)( pAVar19 + lVar18 );
                                             fVar23 = *(float*)( pAVar19 + lVar18 ) * *(float*)( (long)&local_128 + lVar18 );
                                             fVar25 = fVar23;
                                             if (fVar26 < fVar23) {
                                                fVar25 = fVar26;
                                                fVar26 = fVar23;
                                             }

                                             fVar21 = fVar21 + fVar26;
                                             fVar24 = fVar24 + fVar25;
                                             lVar18 = lVar18 + 4;
                                          }
 while ( lVar18 != 0xc );
                                          *(float*)( (long)&local_108 + lVar14 ) = fVar21;
                                          pAVar19 = pAVar19 + 0xc;
                                          *(float*)( (long)&local_118 + lVar14 ) = fVar24;
                                          lVar14 = lVar14 + 4;
                                       }
 while ( lVar14 != 0xc );
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

                                    if (fStack_cc == 0.0) goto LAB_00102a80;
                                 }
 else {
                                    if (0 < iVar10) {
                                       cVar17 = '\0';
                                       iVar20 = 0;
                                       puVar2 = puVar15 + ( ulong )(iVar10 - 1) * 3 + 3;
                                       do {
                                          if (( ( *(float*)( (long)puVar15 + 0xc ) != fVar24 ) || ( *(float*)( puVar15 + 2 ) != fVar24 ) ) || ( *(float*)( (long)puVar15 + 0x14 ) != fVar24 )) {
                                             uStack_70 = 0;
                                             puVar3 = (undefined8*)( lVar14 + (long)iVar20 * 4 );
                                             uStack_64 = 0;
                                             local_118 = 0;
                                             uStack_60 = 0;
                                             local_78 = *puVar3;
                                             local_110 = 0.0;
                                             lVar13 = 0;
                                             local_108 = 0;
                                             local_58 = CONCAT44(*(undefined4*)( (long)puVar3 + 0xc ), 0x3f800000);
                                             uStack_6c = *(undefined4*)( puVar3 + 2 );
                                             local_100 = 0.0;
                                             uStack_68 = *(undefined4*)( (long)puVar3 + 0x14 );
                                             uStack_50 = ( ulong ) * (uint*)( (long)puVar3 + 0x1c );
                                             local_98 = *puVar15;
                                             fStack_90 = (float)*(undefined4*)( puVar15 + 1 );
                                             local_128 = CONCAT44((float)( ( ulong ) * puVar15 >> 0x20 ) + *(float*)( puVar15 + 2 ), (float)*puVar15 + *(float*)( (long)puVar15 + 0xc ));
                                             local_120 = *(float*)( (long)puVar15 + 0x14 ) + *(float*)( puVar15 + 1 );
                                             lVar18 = lVar5;
                                             do {
                                                fVar21 = *(float*)( lVar5 + 0xfc + lVar13 );
                                                lVar11 = 0;
                                                fVar25 = fVar21;
                                                do {
                                                   fVar26 = *(float*)( lVar18 + 0xd8 + lVar11 );
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
                                                }
 while ( lVar11 != 0xc );
                                                *(float*)( (long)&local_108 + lVar13 ) = fVar25;
                                                lVar18 = lVar18 + 0xc;
                                                *(float*)( (long)&local_118 + lVar13 ) = fVar21;
                                                local_b8 = local_118;
                                                lVar13 = lVar13 + 4;
                                             }
 while ( lVar13 != 0xc );
                                             lVar18 = 0;
                                             local_128 = 0;
                                             uStack_b0 = CONCAT44(uStack_b0._4_4_, local_110);
                                             local_130 = local_100 - local_110;
                                             local_100 = local_110;
                                             local_130 = local_130 + local_110;
                                             local_120 = 0.0;
                                             fVar21 = (float)local_108;
                                             uVar8 = (ulong)local_108 >> 0x20;
                                             fVar25 = (float)local_118;
                                             fVar26 = (float)( (ulong)local_118 >> 0x20 );
                                             local_118 = 0;
                                             local_110 = 0.0;
                                             local_108 = local_b8;
                                             local_138 = CONCAT44(( (float)uVar8 - fVar26 ) + fVar26, ( fVar21 - fVar25 ) + fVar25);
                                             pAVar19 = (AABB*)&local_78;
                                             do {
                                                fVar21 = *(float*)( (long)&local_58 + lVar18 + 4 );
                                                lVar13 = 0;
                                                fVar25 = fVar21;
                                                do {
                                                   fVar23 = *(float*)( (long)&local_108 + lVar13 ) * *(float*)( pAVar19 + lVar13 );
                                                   fVar22 = *(float*)( (long)&local_138 + lVar13 ) * *(float*)( pAVar19 + lVar13 );
                                                   fVar26 = fVar22;
                                                   if (fVar23 < fVar22) {
                                                      fVar26 = fVar23;
                                                      fVar23 = fVar22;
                                                   }

                                                   fVar25 = fVar25 + fVar23;
                                                   fVar21 = fVar21 + fVar26;
                                                   lVar13 = lVar13 + 4;
                                                }
 while ( lVar13 != 0xc );
                                                *(float*)( (long)&local_118 + lVar18 ) = fVar25;
                                                pAVar19 = pAVar19 + 0xc;
                                                *(float*)( (long)&local_128 + lVar18 ) = fVar21;
                                                lVar18 = lVar18 + 4;
                                             }
 while ( lVar18 != 0xc );
                                             fStack_8c = (float)local_118 - (float)local_128;
                                             fStack_88 = (float)( (ulong)local_118 >> 0x20 ) - local_128._4_4_;
                                             fStack_84 = local_110 - local_120;
                                             local_98 = local_128;
                                             fStack_90 = local_120;
                                             local_a8 = CONCAT44(fStack_84, fStack_88);
                                             local_b8 = local_128;
                                             uStack_b0 = CONCAT44(fStack_8c, local_120);
                                             if (cVar17 == '\0') {
                                                local_d8 = local_128;
                                                fStack_d0 = local_120;
                                                cVar17 = cVar9;
                                                fStack_cc = fStack_8c;
                                                fStack_c8 = fStack_88;
                                                fStack_c4 = fStack_84;
                                             }
 else {
                                                AABB::merge_with((AABB*)&local_d8);
                                                cVar17 = cVar9;
                                             }

                                          }

                                          puVar15 = puVar15 + 3;
                                          iVar20 = iVar20 + 8;
                                       }
 while ( puVar15 != puVar2 );
                                       goto LAB_0010293f;
                                    }

                                    LAB_00102a80:if (( fStack_c8 == 0.0 ) && ( fStack_c4 == 0.0 )) goto LAB_00102ab0;
                                 }

                                 if ((int)lVar16 != 0) goto LAB_00102ada;
                                 goto LAB_00102970;
                              }

                              _err_print_error("mesh_get_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x2c6, "Condition \"bs > sbs\" is true. Continuing.", 0, 0);
                           }

                           lVar16 = lVar16 + 1;
                        }
 while ( (uint)lVar16 < *(uint*)( lVar12 + 0x10 ) );
                        lVar16 = *(long*)( pcVar1 + 0x58 );
                     }

                     *(ulong*)( lVar12 + 0x28 ) = CONCAT44(fStack_e4, fStack_e8);
                     param_1[2] = CONCAT44(fStack_e4, fStack_e8);
                     *(undefined8*)( lVar12 + 0x18 ) = local_f8;
                     *(ulong*)( lVar12 + 0x20 ) = CONCAT44(fStack_ec, fStack_f0);
                     *(long*)( lVar12 + 0x48 ) = lVar16;
                     *(ulong*)( lVar12 + 0x50 ) = param_4;
                     *param_1 = local_f8;
                     param_1[1] = CONCAT44(fStack_ec, fStack_f0);
                     goto LAB_00102a04;
                  }

               }
 else if (*(int*)( pcVar1 + 0x90 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar7 = *(undefined8*)( lVar12 + 0x20 );
            uVar6 = *(undefined8*)( lVar12 + 0x28 );
            *param_1 = *(undefined8*)( lVar12 + 0x18 );
            param_1[1] = uVar7;
            param_1[2] = uVar6;
         }
 else {
            uVar6 = *(undefined8*)( lVar12 + 0x30 );
            uVar7 = *(undefined8*)( lVar12 + 0x38 );
            param_1[2] = *(undefined8*)( lVar12 + 0x40 );
            *param_1 = uVar6;
            param_1[1] = uVar7;
         }

         goto LAB_00102a04;
      }

      if (*(int*)( lVar12 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x2af, "Parameter \"mesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   LAB_00102a04:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_long>::_copy_on_write(CowData<unsigned_long> *this) {
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
   __n = lVar2 * 8;
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
/* CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write() [clone .isra.0] */void CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write(CowData<RenderingDeviceCommons::VertexAttribute> *this) {
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
   __n = lVar2 * 0x14;
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
/* RendererRD::MeshStorage::mesh_instance_check_for_update(RID) */undefined1  [16] __thiscallRendererRD::MeshStorage::mesh_instance_check_for_update(MeshStorage *this, ulong param_2) {
   long lVar1;
   ulong uVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   uint uVar6;
   ulong uVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   ulong in_stack_fffffffffffffff0;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x124 ) )) {
      uVar7 = ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 );
      lVar5 = uVar7 * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 );
      if (*(int*)( lVar5 + 0xa8 ) == (int)( param_2 >> 0x20 )) {
         uVar10 = ( ulong ) * (byte*)( lVar5 + 0x48 );
         if (( *(char*)( lVar5 + 0x49 ) == '\0' ) || ( *(long*)( lVar5 + 0x50 ) != 0 )) {
            if (*(long*)( lVar5 + 0x70 ) == 0) {
               if (*(byte*)( lVar5 + 0x48 ) != 0) goto LAB_001034e8;
               if (*(long*)( lVar5 + 8 ) != 0) {
                  uVar2 = *(ulong*)( lVar5 + 8 );
                  uVar7 = ( ulong ) * (uint*)( this + 0x3a4 );
                  uVar10 = uVar2 & 0xffffffff;
                  if ((uint)uVar2 < *(uint*)( this + 0x3a4 )) {
                     uVar10 = *(long*)( *(long*)( this + 0x390 ) + ( uVar10 / *(uint*)( this + 0x3a0 ) ) * 8 ) + ( uVar10 % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98;
                     if (*(int*)( uVar10 + 0x90 ) == (int)( uVar2 >> 0x20 )) {
                        uVar7 = *(ulong*)( lVar5 + 0x40 );
                        if (*(ulong*)( uVar10 + 0x58 ) != uVar7) {
                           if (*(long*)( lVar5 + 0x70 ) != 0) {
                              auVar9 = _err_print_error(&_LC78, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
                              return auVar9;
                           }

                           goto LAB_001034e8;
                        }

                     }
 else {
                        uVar6 = *(int*)( uVar10 + 0x90 ) + 0x80000000;
                        uVar7 = (ulong)uVar6;
                        if (uVar6 < 0x7fffffff) {
                           uVar10 = 0;
                           uVar7 = in_stack_fffffffffffffff0;
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
                        }

                     }

                  }

               }

            }

         }
 else {
            uVar7 = lVar5 + 0x50;
            *(MeshStorage**)( lVar5 + 0x50 ) = this + 0x160;
            uVar10 = *(ulong*)( this + 0x160 );
            *(undefined8*)( lVar5 + 0x68 ) = 0;
            *(ulong*)( lVar5 + 0x60 ) = uVar10;
            if (uVar10 == 0) {
               *(ulong*)( this + 0x168 ) = uVar7;
            }
 else {
               *(ulong*)( uVar10 + 0x18 ) = uVar7;
            }

            lVar1 = *(long*)( lVar5 + 0x70 );
            *(ulong*)( this + 0x160 ) = uVar7;
            if (lVar1 == 0) {
               LAB_001034e8:lVar1 = lVar5 + 0x70;
               *(MeshStorage**)( lVar5 + 0x70 ) = this + 0x170;
               lVar3 = *(long*)( this + 0x170 );
               *(undefined8*)( lVar5 + 0x88 ) = 0;
               *(long*)( lVar5 + 0x80 ) = lVar3;
               if (lVar3 == 0) {
                  *(long*)( this + 0x178 ) = lVar1;
               }
 else {
                  *(long*)( lVar3 + 0x18 ) = lVar1;
               }

               *(long*)( this + 0x170 ) = lVar1;
               auVar9._8_8_ = lVar1;
               auVar9._0_8_ = lVar3;
               return auVar9;
            }

         }

         auVar8._8_8_ = uVar7;
         auVar8._0_8_ = uVar10;
         return auVar8;
      }

      if (*(int*)( lVar5 + 0xa8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar5);
      }

   }

   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* CowData<AABB>::_ref(CowData<AABB> const&) [clone .part.0] */void CowData<AABB>::_ref(CowData<AABB> *this, CowData *param_1) {
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
/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */void CowData<RID>::_ref(CowData<RID> *this, CowData *param_1) {
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
/* RendererRD::MeshStorage::mesh_get_path(RID) const */CowData<char32_t> *RendererRD::MeshStorage::mesh_get_path(CowData<char32_t> *param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xcc ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 200 ) ) * 0xe0 + *(long*)( *(long*)( param_2 + 0xb8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 200 ) ) * 8 );
      if (*(int*)( lVar1 + 0xd8 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)param_1 = 0;
         if (*(long*)( lVar1 + 0xa0 ) != 0) {
            CowData<char32_t>::_ref(param_1, (CowData*)( lVar1 + 0xa0 ));
         }

         return param_1;
      }

      if (*(int*)( lVar1 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_path", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x32f, "Parameter \"mesh\" is null.", 0, 0);
   *(undefined8*)param_1 = 0;
   return param_1;
}
/* RendererRD::MeshStorage::mesh_set_path(RID, String const&) */void RendererRD::MeshStorage::mesh_set_path(MeshStorage *this, ulong param_2, CowData *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar1 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar1 + 0xa0 ) != *(long*)param_3) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( lVar1 + 0xa0 ), param_3);
            return;
         }

         return;
      }

      if (*(int*)( lVar1 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_set_path", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x328, "Parameter \"mesh\" is null.", 0, 0);
   return;
}
/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
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
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) [clone .isra.0] */void CowData<float>::resize<false>(CowData<float> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   CowData<float> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   pCVar9 = this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar10 = 0;
      lVar3 = 0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar3 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar3 = lVar10 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 != 0) {
      uVar4 = param_1 * 4 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (param_1 <= lVar10) {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_00103d00:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
            return;
         }

         if (uVar4 + 1 == lVar3) {
            puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               resize<false>((long)pCVar9);
               return;
            }

         }
 else {
            if (lVar10 == 0) {
               puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) {
                  uVar8 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_00103ce2;
               }

               *puVar5 = 1;
               puVar5[1] = 0;
            }
 else {
               puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
               if (puVar5 == (undefined8*)0x0) goto LAB_00103d00;
               *puVar5 = 1;
            }

            puVar5 = puVar5 + 2;
            *(undefined8**)this = puVar5;
         }

         puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00103ce2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar7, 0, 0);
   return;
}
/* RendererRD::MeshStorage::mesh_surface_set_material(RID, int, RID) */void RendererRD::MeshStorage::mesh_surface_set_material(MeshStorage *this, ulong param_2, uint param_3, undefined8 param_4) {
   long *plVar1;
   long lVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      if (*(int*)( lVar3 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(uint*)( lVar3 + 0x10 ) <= param_3) {
            _err_print_index_error("mesh_surface_set_material", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x25a, (ulong)param_3, ( ulong ) * (uint*)( lVar3 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            return;
         }

         *(undefined8*)( *(long*)( *(long*)( lVar3 + 8 ) + (long)(int)param_3 * 8 ) + 0x120 ) = param_4;
         Dependency::changed_notify(lVar3 + 0xa8);
         lVar2 = *(long*)( lVar3 + 0x60 );
         if (( lVar2 != 0 ) && ( *(long*)( lVar2 + -8 ) != 0 )) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar3 + 0x60 );
               *(undefined8*)( lVar3 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
               return;
            }

            *(undefined8*)( lVar3 + 0x60 ) = 0;
         }

         return;
      }

      if (*(int*)( lVar3 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_surface_set_material", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x259, "Parameter \"mesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::_multimesh_allocate_data(RID, int,
   RenderingServer::MultimeshTransformFormat, bool, bool, bool) */void RendererRD::MeshStorage::_multimesh_allocate_data(MeshStorage *this, ulong param_2, int param_3, int param_4, byte param_5, byte param_6, undefined1 param_7) {
   long *plVar1;
   long lVar2;
   int iVar3;
   undefined8 uVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined1 auStack_68[8];
   long local_60;
   undefined8 local_58;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined4 uStack_48;
   undefined4 uStack_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x19c )) {
         lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
         if (*(int*)( lVar5 + 0x158 ) == (int)( param_2 >> 0x20 )) {
            if (( ( ( *(int*)( lVar5 + 8 ) == param_3 ) && ( *(int*)( lVar5 + 0xc ) == param_4 ) ) && ( *(byte*)( lVar5 + 0x10 ) == param_5 ) ) && ( *(byte*)( lVar5 + 0x11 ) == param_6 )) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

            }
 else {
               if (*(long*)( lVar5 + 0xa0 ) != 0) {
                  uVar4 = RenderingDevice::get_singleton();
                  RenderingDevice::free(uVar4);
                  *(undefined8*)( lVar5 + 0xb0 ) = 0;
                  *(undefined1(*) [16])( lVar5 + 0xa0 ) = (undefined1[16])0x0;
               }

               if (*(void**)( lVar5 + 0x80 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( lVar5 + 0x80 ), true);
                  *(undefined8*)( lVar5 + 0x80 ) = 0;
                  *(undefined4*)( lVar5 + 0x88 ) = 0;
               }

               if (*(void**)( lVar5 + 0x90 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( lVar5 + 0x90 ), true);
                  *(undefined8*)( lVar5 + 0x90 ) = 0;
                  *(undefined4*)( lVar5 + 0x98 ) = 0;
               }

               *(byte*)( lVar5 + 0x10 ) = param_5;
               *(byte*)( lVar5 + 0x11 ) = param_6;
               *(int*)( lVar5 + 8 ) = param_3;
               iVar3 = ( -(uint)(param_4 == 0) & 0xfffffffc ) + 0xc;
               *(int*)( lVar5 + 0xc ) = param_4;
               *(int*)( lVar5 + 100 ) = iVar3;
               iVar3 = iVar3 + (uint)param_5 * 4;
               *(int*)( lVar5 + 0x68 ) = iVar3;
               *(uint*)( lVar5 + 0x60 ) = iVar3 + (uint)param_6 * 4;
               *(undefined1*)( lVar5 + 0x49 ) = 0;
               *(undefined1*)( lVar5 + 0x4a ) = param_7;
               *(undefined8*)( lVar5 + 0xb8 ) = 0;
               if (*(long*)( lVar5 + 0x78 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar5 + 0x78 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *(long*)( lVar5 + 0x78 );
                     *(undefined8*)( lVar5 + 0x78 ) = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

                  *(undefined8*)( lVar5 + 0x78 ) = 0;
                  param_3 = *(int*)( lVar5 + 8 );
               }

               uStack_4c = 0;
               uStack_48 = 0;
               uStack_44 = 0;
               local_58 = 0;
               *(undefined8*)( lVar5 + 0x28 ) = 0;
               uStack_50 = 0;
               *(undefined1*)( lVar5 + 0x48 ) = 0;
               iVar3 = *(int*)( lVar5 + 0x14 );
               if (param_3 < *(int*)( lVar5 + 0x14 )) {
                  iVar3 = param_3;
               }

               *(undefined8*)( lVar5 + 0x4c ) = 0;
               *(undefined8*)( lVar5 + 0x58 ) = 0xffffffffffffffff;
               *(int*)( lVar5 + 0x14 ) = iVar3;
               *(undefined1*)( lVar5 + 0x4b ) = 0;
               *(undefined8*)( lVar5 + 0x18 ) = 0;
               *(undefined8*)( lVar5 + 0x20 ) = 0;
               if (param_3 != 0) {
                  iVar3 = *(int*)( lVar5 + 0x60 );
                  uVar4 = RenderingDevice::get_singleton();
                  local_60 = 0;
                  uVar4 = RenderingDevice::storage_buffer_create(uVar4, param_3 * iVar3 * 4, auStack_68, 0, 0);
                  lVar2 = local_60;
                  *(undefined8*)( lVar5 + 0xa0 ) = uVar4;
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

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Dependency::changed_notify(lVar5 + 0x128, 3);
                  return;
               }

            }

            goto LAB_0010423b;
         }

         if (*(int*)( lVar5 + 0x158 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_multimesh_allocate_data", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x5d3, "Parameter \"multimesh\" is null.", 0, 0);
      return;
   }

   LAB_0010423b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_get_buffer(RID) const */long RendererRD::MeshStorage::_multimesh_get_buffer(long param_1, long param_2, ulong param_3) {
   long *plVar1;
   long lVar2;
   void *__dest;
   undefined8 uVar3;
   size_t sVar4;
   long lVar5;
   long in_FS_OFFSET;
   void *local_40;
   undefined1 local_38[8];
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      lVar5 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0x160 + *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 );
      if (*(int*)( lVar5 + 0x158 ) == (int)( param_3 >> 0x20 )) {
         if (*(long*)( lVar5 + 0xa0 ) == 0) {
            *(undefined8*)( param_1 + 8 ) = 0;
         }
 else {
            local_40 = (void*)0x0;
            CowData<float>::resize<false>((CowData<float>*)&local_40, ( ulong )(uint)(*(int*)( lVar5 + 8 ) * *(int*)( lVar5 + 0x60 )));
            CowData<float>::_copy_on_write((CowData<float>*)&local_40);
            __dest = local_40;
            lVar2 = *(long*)( lVar5 + 0x78 );
            if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) == 0 )) {
               uVar3 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(local_38, uVar3, *(undefined8*)( lVar5 + 0xa0 ), 0, 0);
               if (__dest == (void*)0x0) {
                  sVar4 = 0;
               }
 else {
                  sVar4 = *(long*)( (long)__dest + -8 ) * 4;
               }

               memcpy(__dest, (void*)( local_30 + ( ulong )(uint)(*(int*)( lVar5 + 0x4c ) * *(int*)( lVar5 + 0x60 )) * 4 ), sVar4);
               lVar5 = local_30;
               if (local_30 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_30 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_30 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

            }
 else {
               if (local_40 == (void*)0x0) {
                  sVar4 = 0;
               }
 else {
                  sVar4 = *(long*)( (long)local_40 + -8 ) * 4;
               }

               memcpy(local_40, (void*)( lVar2 + ( ulong )(uint)(*(int*)( lVar5 + 0x4c ) * *(int*)( lVar5 + 0x60 )) * 4 ), sVar4);
            }

            *(void**)( param_1 + 8 ) = __dest;
         }

         goto LAB_001042c0;
      }

      if (*(int*)( lVar5 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_buffer", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x83d, "Parameter \"multimesh\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_001042c0:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_get_interpolator(RID) const */long RendererRD::MeshStorage::_multimesh_get_interpolator(MeshStorage *this, ulong param_2) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar2 = *(int*)( lVar3 + 0x158 );
      lVar3 = lVar3 + 0xd0;
      if (iVar2 == (int)( param_2 >> 0x20 )) goto LAB_001044d9;
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   itos((long)&local_30);
   operator+((char *)&
   local_28,(String*)"Multimesh not found: ";
   _err_print_error("_multimesh_get_interpolator", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x892, "Parameter \"multimesh\" is null.", &local_28, 0, 0);
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
         goto LAB_001044d9;
      }

   }

   lVar3 = 0;
   LAB_001044d9:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return lVar3;
}
/* RendererRD::MeshStorage::_multimesh_instance_get_color(RID, int) const */undefined1  [16] __thiscallRendererRD::MeshStorage::_multimesh_instance_get_color(MeshStorage *this, ulong param_2, int param_3) {
   long *plVar1;
   int iVar2;
   void *pvVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   char *pcVar7;
   size_t __n;
   long lVar8;
   uint uVar9;
   int iVar10;
   long in_FS_OFFSET;
   undefined1 auVar11[16];
   undefined1 auStack_48[8];
   void *local_40;
   long local_30;
   ulong __n_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x19c ) <= (uint)param_2 )) {
      LAB_001048c0:uVar5 = 0x7d4;
      pcVar7 = "Parameter \"multimesh\" is null.";
   }
 else {
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar8 + 0x158 ) != (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar8 + 0x158 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001048c0;
      }

      iVar10 = *(int*)( lVar8 + 8 );
      if (( param_3 < 0 ) || ( iVar10 <= param_3 )) {
         _err_print_index_error("_multimesh_instance_get_color", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x7d5, (long)param_3, (long)iVar10, "p_index", "multimesh->instances", "", false, false);
         uVar5 = 0;
         uVar6 = 0x3f80000000000000;
         goto LAB_001047a4;
      }

      if (*(char*)( lVar8 + 0x10 ) != '\0') {
         lVar4 = *(long*)( lVar8 + 0x78 );
         if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) < 1 )) {
            uVar9 = iVar10 * *(int*)( lVar8 + 0x60 );
            if (*(char*)( lVar8 + 0x4b ) != '\0') {
               uVar9 = uVar9 * 2;
            }

            CowData<float>::resize<false>((CowData<float>*)( lVar8 + 0x78 ), (ulong)uVar9);
            CowData<float>::_copy_on_write((CowData<float>*)( lVar8 + 0x78 ));
            pvVar3 = *(void**)( lVar8 + 0x78 );
            if (*(char*)( lVar8 + 0x49 ) == '\0') {
               memset(pvVar3, 0, (ulong)uVar9 * 4);
            }
 else {
               uVar5 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(auStack_48, uVar5, *(undefined8*)( lVar8 + 0xa0 ), 0, 0);
               if (local_40 == (void*)0x0) {
                  __n = 0;
               }
 else {
                  __n = *(size_t*)( (long)local_40 + -8 );
               }

               memcpy(pvVar3, local_40, __n);
               pvVar3 = local_40;
               if (local_40 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_40 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_40 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar3 + -0x10 ), false);
                  }

               }

            }

            iVar2 = *(int*)( lVar8 + 8 ) + 0x1ff;
            iVar10 = *(int*)( lVar8 + 8 ) + 0x3fe;
            if (-1 < iVar2) {
               iVar10 = iVar2;
            }

            __n_00 = ( ulong )(uint)(iVar10 >> 9);
            if (__n_00 == 0) {
               *(undefined8*)( lVar8 + 0x80 ) = 0;
               pvVar3 = (void*)0x0;
               *(undefined4*)( lVar8 + 0x88 ) = 0;
            }
 else {
               pvVar3 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar3 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  *(undefined8*)( lVar8 + 0x80 ) = 0;
                  memset((void*)0x0, 0, __n_00);
               }
 else {
                  *(ulong*)( (long)pvVar3 + -8 ) = __n_00;
                  *(void**)( lVar8 + 0x80 ) = pvVar3;
                  memset(pvVar3, 0, __n_00);
               }

               *(undefined4*)( lVar8 + 0x88 ) = 0;
               pvVar3 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar3 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  pvVar3 = (void*)0x0;
               }
 else {
                  *(ulong*)( (long)pvVar3 + -8 ) = __n_00;
               }

            }

            *(void**)( lVar8 + 0x90 ) = pvVar3;
            memset(pvVar3, 0, __n_00);
            lVar4 = *(long*)( lVar8 + 0x78 );
            *(undefined4*)( lVar8 + 0x98 ) = 0;
         }

         lVar8 = ( ulong )(uint)(( param_3 + *(int*)( lVar8 + 0x4c ) ) * *(int*)( lVar8 + 0x60 )) + ( ulong ) * (uint*)( lVar8 + 100 );
         uVar5 = *(undefined8*)( lVar4 + lVar8 * 4 );
         uVar6 = *(undefined8*)( lVar4 + 8 + lVar8 * 4 );
         goto LAB_001047a4;
      }

      uVar5 = 0x7d6;
      pcVar7 = "Condition \"!multimesh->uses_colors\" is true. Returning: Color()";
   }

   _err_print_error("_multimesh_instance_get_color", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar5, pcVar7, 0, 0);
   uVar5 = 0;
   uVar6 = 0x3f80000000000000;
   LAB_001047a4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar11._8_8_ = uVar6;
      auVar11._0_8_ = uVar5;
      return auVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_instance_get_custom_data(RID, int) const */undefined1  [16] __thiscallRendererRD::MeshStorage::_multimesh_instance_get_custom_data(MeshStorage *this, ulong param_2, int param_3) {
   long *plVar1;
   int iVar2;
   void *pvVar3;
   long lVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   char *pcVar7;
   size_t __n;
   long lVar8;
   uint uVar9;
   int iVar10;
   long in_FS_OFFSET;
   undefined1 auVar11[16];
   undefined1 auStack_48[8];
   void *local_40;
   long local_30;
   ulong __n_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x19c ) <= (uint)param_2 )) {
      LAB_00104c90:uVar5 = 0x7eb;
      pcVar7 = "Parameter \"multimesh\" is null.";
   }
 else {
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar8 + 0x158 ) != (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar8 + 0x158 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00104c90;
      }

      iVar10 = *(int*)( lVar8 + 8 );
      if (( param_3 < 0 ) || ( iVar10 <= param_3 )) {
         _err_print_index_error("_multimesh_instance_get_custom_data", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x7ec, (long)param_3, (long)iVar10, "p_index", "multimesh->instances", "", false, false);
         uVar5 = 0;
         uVar6 = 0x3f80000000000000;
         goto LAB_00104b74;
      }

      if (*(char*)( lVar8 + 0x11 ) != '\0') {
         lVar4 = *(long*)( lVar8 + 0x78 );
         if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) < 1 )) {
            uVar9 = iVar10 * *(int*)( lVar8 + 0x60 );
            if (*(char*)( lVar8 + 0x4b ) != '\0') {
               uVar9 = uVar9 * 2;
            }

            CowData<float>::resize<false>((CowData<float>*)( lVar8 + 0x78 ), (ulong)uVar9);
            CowData<float>::_copy_on_write((CowData<float>*)( lVar8 + 0x78 ));
            pvVar3 = *(void**)( lVar8 + 0x78 );
            if (*(char*)( lVar8 + 0x49 ) == '\0') {
               memset(pvVar3, 0, (ulong)uVar9 * 4);
            }
 else {
               uVar5 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(auStack_48, uVar5, *(undefined8*)( lVar8 + 0xa0 ), 0, 0);
               if (local_40 == (void*)0x0) {
                  __n = 0;
               }
 else {
                  __n = *(size_t*)( (long)local_40 + -8 );
               }

               memcpy(pvVar3, local_40, __n);
               pvVar3 = local_40;
               if (local_40 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_40 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_40 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar3 + -0x10 ), false);
                  }

               }

            }

            iVar2 = *(int*)( lVar8 + 8 ) + 0x1ff;
            iVar10 = *(int*)( lVar8 + 8 ) + 0x3fe;
            if (-1 < iVar2) {
               iVar10 = iVar2;
            }

            __n_00 = ( ulong )(uint)(iVar10 >> 9);
            if (__n_00 == 0) {
               *(undefined8*)( lVar8 + 0x80 ) = 0;
               pvVar3 = (void*)0x0;
               *(undefined4*)( lVar8 + 0x88 ) = 0;
            }
 else {
               pvVar3 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar3 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  *(undefined8*)( lVar8 + 0x80 ) = 0;
                  memset((void*)0x0, 0, __n_00);
               }
 else {
                  *(ulong*)( (long)pvVar3 + -8 ) = __n_00;
                  *(void**)( lVar8 + 0x80 ) = pvVar3;
                  memset(pvVar3, 0, __n_00);
               }

               *(undefined4*)( lVar8 + 0x88 ) = 0;
               pvVar3 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar3 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  pvVar3 = (void*)0x0;
               }
 else {
                  *(ulong*)( (long)pvVar3 + -8 ) = __n_00;
               }

            }

            *(void**)( lVar8 + 0x90 ) = pvVar3;
            memset(pvVar3, 0, __n_00);
            lVar4 = *(long*)( lVar8 + 0x78 );
            *(undefined4*)( lVar8 + 0x98 ) = 0;
         }

         lVar8 = ( ulong )(uint)(( param_3 + *(int*)( lVar8 + 0x4c ) ) * *(int*)( lVar8 + 0x60 )) + ( ulong ) * (uint*)( lVar8 + 0x68 );
         uVar5 = *(undefined8*)( lVar4 + lVar8 * 4 );
         uVar6 = *(undefined8*)( lVar4 + 8 + lVar8 * 4 );
         goto LAB_00104b74;
      }

      uVar5 = 0x7ed;
      pcVar7 = "Condition \"!multimesh->uses_custom_data\" is true. Returning: Color()";
   }

   _err_print_error("_multimesh_instance_get_custom_data", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar5, pcVar7, 0, 0);
   uVar5 = 0;
   uVar6 = 0x3f80000000000000;
   LAB_00104b74:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar11._8_8_ = uVar6;
      auVar11._0_8_ = uVar5;
      return auVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] */void CowData<RID>::_copy_on_write(CowData<RID> *this) {
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
   __n = lVar2 * 8;
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
/* RendererRD::MeshStorage::_multimesh_instance_get_transform_2d(RID, int) const */undefined8 *RendererRD::MeshStorage::_multimesh_instance_get_transform_2d(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   int iVar7;
   void *pvVar8;
   long lVar9;
   undefined8 uVar10;
   char *pcVar11;
   size_t __n;
   long lVar12;
   uint uVar13;
   int iVar14;
   long in_FS_OFFSET;
   undefined1 auStack_48[8];
   void *local_40;
   long local_30;
   ulong __n_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x19c ) <= (uint)param_3 )) {
      LAB_001051b0:uVar10 = 0x7bb;
      pcVar11 = "Parameter \"multimesh\" is null.";
   }
 else {
      lVar12 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0x160 + *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 );
      if (*(int*)( lVar12 + 0x158 ) != (int)( param_3 >> 0x20 )) {
         if (*(int*)( lVar12 + 0x158 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001051b0;
      }

      iVar14 = *(int*)( lVar12 + 8 );
      if (( param_4 < 0 ) || ( iVar14 <= param_4 )) {
         _err_print_index_error("_multimesh_instance_get_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x7bc, (long)param_4, (long)iVar14, "p_index", "multimesh->instances", "", false, false);
         *param_1 = 0x3f800000;
         param_1[1] = 0x3f80000000000000;
         param_1[2] = 0;
         goto LAB_00105085;
      }

      if (*(int*)( lVar12 + 0xc ) == 0) {
         lVar9 = *(long*)( lVar12 + 0x78 );
         if (( lVar9 == 0 ) || ( *(long*)( lVar9 + -8 ) < 1 )) {
            uVar13 = iVar14 * *(int*)( lVar12 + 0x60 );
            if (*(char*)( lVar12 + 0x4b ) != '\0') {
               uVar13 = uVar13 * 2;
            }

            CowData<float>::resize<false>((CowData<float>*)( lVar12 + 0x78 ), (ulong)uVar13);
            CowData<float>::_copy_on_write((CowData<float>*)( lVar12 + 0x78 ));
            pvVar8 = *(void**)( lVar12 + 0x78 );
            if (*(char*)( lVar12 + 0x49 ) == '\0') {
               memset(pvVar8, 0, (ulong)uVar13 * 4);
            }
 else {
               uVar10 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(auStack_48, uVar10, *(undefined8*)( lVar12 + 0xa0 ), 0, 0);
               if (local_40 == (void*)0x0) {
                  __n = 0;
               }
 else {
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
            iVar14 = *(int*)( lVar12 + 8 ) + 0x3fe;
            if (-1 < iVar7) {
               iVar14 = iVar7;
            }

            __n_00 = ( ulong )(uint)(iVar14 >> 9);
            if (__n_00 == 0) {
               *(undefined8*)( lVar12 + 0x80 ) = 0;
               pvVar8 = (void*)0x0;
               *(undefined4*)( lVar12 + 0x88 ) = 0;
            }
 else {
               pvVar8 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar8 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  *(undefined8*)( lVar12 + 0x80 ) = 0;
                  memset((void*)0x0, 0, __n_00);
               }
 else {
                  *(ulong*)( (long)pvVar8 + -8 ) = __n_00;
                  *(void**)( lVar12 + 0x80 ) = pvVar8;
                  memset(pvVar8, 0, __n_00);
               }

               *(undefined4*)( lVar12 + 0x88 ) = 0;
               pvVar8 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar8 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  pvVar8 = (void*)0x0;
               }
 else {
                  *(ulong*)( (long)pvVar8 + -8 ) = __n_00;
               }

            }

            *(void**)( lVar12 + 0x90 ) = pvVar8;
            memset(pvVar8, 0, __n_00);
            lVar9 = *(long*)( lVar12 + 0x78 );
            *(undefined4*)( lVar12 + 0x98 ) = 0;
         }

         puVar2 = (undefined4*)( lVar9 + ( ulong )(uint)(( param_4 + *(int*)( lVar12 + 0x4c ) ) * *(int*)( lVar12 + 0x60 )) * 4 );
         uVar3 = puVar2[4];
         uVar4 = puVar2[5];
         uVar5 = *puVar2;
         uVar6 = puVar2[1];
         param_1[2] = CONCAT44((int)( ( ulong ) * (undefined8*)( puVar2 + 6 ) >> 0x20 ), (int)( ( ulong ) * (undefined8*)( puVar2 + 2 ) >> 0x20 ));
         *param_1 = CONCAT44(uVar3, uVar5);
         *(undefined4*)( param_1 + 2 ) = uVar6;
         *(undefined4*)( (long)param_1 + 0x14 ) = uVar4;
         goto LAB_00105085;
      }

      uVar10 = 0x7bd;
      pcVar11 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_2D\" is true. Returning: Transform2D()";
   }

   _err_print_error("_multimesh_instance_get_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar10, pcVar11, 0, 0);
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   LAB_00105085:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_instance_get_transform(RID, int) const */undefined1(*)[16];RendererRD::MeshStorage::_multimesh_instance_get_transform(undefined1 (*param_1)[16], long param_2, ulong param_3, int param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   int iVar10;
   void *pvVar11;
   long lVar12;
   undefined8 uVar13;
   char *pcVar14;
   size_t __n;
   long lVar15;
   uint uVar16;
   int iVar17;
   long in_FS_OFFSET;
   undefined1 auStack_48[8];
   void *local_40;
   long local_30;
   ulong __n_00;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x19c ) <= (uint)param_3 )) {
      LAB_00105600:uVar13 = 0x79c;
      pcVar14 = "Parameter \"multimesh\" is null.";
   }
 else {
      lVar15 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0x160 + *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 );
      if (*(int*)( lVar15 + 0x158 ) != (int)( param_3 >> 0x20 )) {
         if (*(int*)( lVar15 + 0x158 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00105600;
      }

      iVar17 = *(int*)( lVar15 + 8 );
      if (( param_4 < 0 ) || ( iVar17 <= param_4 )) {
         _err_print_index_error("_multimesh_instance_get_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x79d, (long)param_4, (long)iVar17, "p_index", "multimesh->instances", "", false, false);
         uVar16 = _LC46;
         *(undefined4*)param_1[2] = 0x3f800000;
         *(undefined8*)( param_1[2] + 4 ) = 0;
         *(undefined4*)( param_1[2] + 0xc ) = 0;
         *param_1 = ZEXT416(uVar16);
         param_1[1] = ZEXT416(uVar16);
         goto LAB_001054c5;
      }

      if (*(int*)( lVar15 + 0xc ) == 1) {
         lVar12 = *(long*)( lVar15 + 0x78 );
         if (( lVar12 == 0 ) || ( *(long*)( lVar12 + -8 ) < 1 )) {
            uVar16 = iVar17 * *(int*)( lVar15 + 0x60 );
            if (*(char*)( lVar15 + 0x4b ) != '\0') {
               uVar16 = uVar16 * 2;
            }

            CowData<float>::resize<false>((CowData<float>*)( lVar15 + 0x78 ), (ulong)uVar16);
            CowData<float>::_copy_on_write((CowData<float>*)( lVar15 + 0x78 ));
            pvVar11 = *(void**)( lVar15 + 0x78 );
            if (*(char*)( lVar15 + 0x49 ) == '\0') {
               memset(pvVar11, 0, (ulong)uVar16 * 4);
            }
 else {
               uVar13 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(auStack_48, uVar13, *(undefined8*)( lVar15 + 0xa0 ), 0, 0);
               if (local_40 == (void*)0x0) {
                  __n = 0;
               }
 else {
                  __n = *(size_t*)( (long)local_40 + -8 );
               }

               memcpy(pvVar11, local_40, __n);
               pvVar11 = local_40;
               if (local_40 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_40 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_40 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar11 + -0x10 ), false);
                  }

               }

            }

            iVar10 = *(int*)( lVar15 + 8 ) + 0x1ff;
            iVar17 = *(int*)( lVar15 + 8 ) + 0x3fe;
            if (-1 < iVar10) {
               iVar17 = iVar10;
            }

            __n_00 = ( ulong )(uint)(iVar17 >> 9);
            if (__n_00 == 0) {
               *(undefined8*)( lVar15 + 0x80 ) = 0;
               pvVar11 = (void*)0x0;
               *(undefined4*)( lVar15 + 0x88 ) = 0;
            }
 else {
               pvVar11 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar11 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  *(undefined8*)( lVar15 + 0x80 ) = 0;
                  memset((void*)0x0, 0, __n_00);
               }
 else {
                  *(ulong*)( (long)pvVar11 + -8 ) = __n_00;
                  *(void**)( lVar15 + 0x80 ) = pvVar11;
                  memset(pvVar11, 0, __n_00);
               }

               *(undefined4*)( lVar15 + 0x88 ) = 0;
               pvVar11 = (void*)Memory::alloc_static(__n_00, true);
               if (pvVar11 == (void*)0x0) {
                  _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                  pvVar11 = (void*)0x0;
               }
 else {
                  *(ulong*)( (long)pvVar11 + -8 ) = __n_00;
               }

            }

            *(void**)( lVar15 + 0x90 ) = pvVar11;
            memset(pvVar11, 0, __n_00);
            lVar12 = *(long*)( lVar15 + 0x78 );
            *(undefined4*)( lVar15 + 0x98 ) = 0;
         }

         puVar2 = (undefined4*)( lVar12 + ( ulong )(uint)(( param_4 + *(int*)( lVar15 + 0x4c ) ) * *(int*)( lVar15 + 0x60 )) * 4 );
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
         goto LAB_001054c5;
      }

      uVar13 = 0x79e;
      pcVar14 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_3D\" is true. Returning: Transform3D()";
   }

   _err_print_error("_multimesh_instance_get_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar13, pcVar14, 0, 0);
   uVar16 = _LC46;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar16);
   param_1[1] = ZEXT416(uVar16);
   LAB_001054c5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
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
}
/* RendererRD::MeshStorage::_multimesh_instance_set_color(RID, int, Color const&) */void RendererRD::MeshStorage::_multimesh_instance_set_color(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   int iVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   void *pvVar7;
   undefined8 uVar8;
   int iVar9;
   uint uVar10;
   size_t __n;
   long lVar11;
   char *pcVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar11 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar11 + 0x158 ) == (int)( param_2 >> 0x20 )) {
         iVar9 = *(int*)( lVar11 + 8 );
         if (( param_3 < 0 ) || ( iVar9 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_color", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x761, (long)param_3, (long)iVar9, "p_index", "multimesh->instances", "", false, false);
         }
 else {
            if (*(char*)( lVar11 + 0x10 ) == '\0') {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar8 = 0x762;
                  pcVar12 = "Condition \"!multimesh->uses_colors\" is true.";
                  goto LAB_00105d16;
               }

               goto LAB_00105ec7;
            }

            if (( *(long*)( lVar11 + 0x78 ) == 0 ) || ( *(long*)( *(long*)( lVar11 + 0x78 ) + -8 ) < 1 )) {
               uVar13 = iVar9 * *(int*)( lVar11 + 0x60 );
               if (*(char*)( lVar11 + 0x4b ) != '\0') {
                  uVar13 = uVar13 * 2;
               }

               CowData<float>::resize<false>((CowData<float>*)( lVar11 + 0x78 ), (ulong)uVar13);
               CowData<float>::_copy_on_write((CowData<float>*)( lVar11 + 0x78 ));
               pvVar7 = *(void**)( lVar11 + 0x78 );
               if (*(char*)( lVar11 + 0x49 ) == '\0') {
                  memset(pvVar7, 0, (ulong)uVar13 * 4);
               }
 else {
                  uVar8 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_get_data(local_58, uVar8, *(undefined8*)( lVar11 + 0xa0 ), 0, 0);
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  }
 else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }

                  memcpy(pvVar7, local_50, __n);
                  pvVar7 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar7 + -0x10 ), false);
                     }

                  }

               }

               iVar6 = *(int*)( lVar11 + 8 ) + 0x1ff;
               iVar9 = *(int*)( lVar11 + 8 ) + 0x3fe;
               if (-1 < iVar6) {
                  iVar9 = iVar6;
               }

               uVar15 = ( ulong )(uint)(iVar9 >> 9);
               if (uVar15 == 0) {
                  *(undefined8*)( lVar11 + 0x80 ) = 0;
                  pvVar7 = (void*)0x0;
                  *(undefined4*)( lVar11 + 0x88 ) = 0;
               }
 else {
                  pvVar7 = (void*)Memory::alloc_static(uVar15, true);
                  if (pvVar7 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0);
                     *(undefined8*)( lVar11 + 0x80 ) = 0;
                     memset((void*)0x0, 0, uVar15);
                  }
 else {
                     *(ulong*)( (long)pvVar7 + -8 ) = uVar15;
                     *(void**)( lVar11 + 0x80 ) = pvVar7;
                     memset(pvVar7, 0, uVar15);
                  }

                  *(undefined4*)( lVar11 + 0x88 ) = 0;
                  pvVar7 = (void*)Memory::alloc_static(uVar15, true);
                  if (pvVar7 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0);
                     pvVar7 = (void*)0x0;
                  }
 else {
                     *(ulong*)( (long)pvVar7 + -8 ) = uVar15;
                  }

               }

               *(void**)( lVar11 + 0x90 ) = pvVar7;
               memset(pvVar7, 0, uVar15);
               *(undefined4*)( lVar11 + 0x98 ) = 0;
               if (*(long*)( lVar11 + 0x78 ) != 0) goto LAB_00105ab0;
               _err_print_error("_multimesh_update_motion_vectors_data_cache", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6a2, "Condition \"multimesh->data_cache.is_empty()\" is true.", 0, 0);
            }
 else {
               LAB_00105ab0:if (*(char*)( lVar11 + 0x4b ) != '\0') {
                  uVar13 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
                  if (*(ulong*)( lVar11 + 0x58 ) != (ulong)uVar13) {
                     *(ulong*)( lVar11 + 0x58 ) = (ulong)uVar13;
                     *(ulong*)( lVar11 + 0x4c ) = CONCAT44(*(int*)( lVar11 + 0x4c ), *(int*)( lVar11 + 8 ) - *(int*)( lVar11 + 0x4c ));
                     if (*(int*)( lVar11 + 0x98 ) != 0) {
                        CowData<float>::_copy_on_write((CowData<float>*)( lVar11 + 0x78 ));
                        iVar9 = *(int*)( lVar11 + 0x14 );
                        if (iVar9 < 0) {
                           if (*(int*)( lVar11 + 8 ) != 0) {
                              iVar6 = *(int*)( lVar11 + 0x60 );
                              iVar9 = *(int*)( lVar11 + 8 ) * iVar6;
                              uVar13 = *(int*)( lVar11 + 8 ) + 0x1ffU >> 9;
                              if (uVar13 != 0) goto LAB_00105b35;
                           }

                        }
 else if (iVar9 != 0) {
                           iVar6 = *(int*)( lVar11 + 0x60 );
                           uVar13 = iVar9 + 0x1ffU >> 9;
                           iVar9 = *(int*)( lVar11 + 8 ) * iVar6;
                           LAB_00105b35:uVar10 = iVar9 * 4;
                           uVar14 = iVar6 * 0x800;
                           iVar9 = *(int*)( lVar11 + 0x4c );
                           lVar4 = *(long*)( lVar11 + 0x78 );
                           uVar15 = 0;
                           iVar3 = *(int*)( lVar11 + 0x50 );
                           uVar16 = 0;
                           do {
                              if (*(char*)( *(long*)( lVar11 + 0x90 ) + uVar15 ) != '\0') {
                                 uVar5 = uVar10;
                                 if (uVar14 <= uVar10) {
                                    uVar5 = uVar14;
                                 }

                                 memcpy((void*)( ( ulong )(uint)(iVar9 * iVar6 * 4) + (ulong)uVar16 + lVar4 ), (void*)( ( ulong )(uint)(iVar6 * iVar3 * 4) + (ulong)uVar16 + lVar4 ), (ulong)uVar5);
                              }

                              uVar15 = uVar15 + 1;
                              uVar10 = uVar10 + iVar6 * -0x800;
                              uVar16 = uVar16 + uVar14;
                           }
 while ( uVar13 != uVar15 );
                        }

                     }

                  }

               }

            }

            CowData<float>::_copy_on_write((CowData<float>*)( lVar11 + 0x78 ));
            uVar13 = param_3 >> 9;
            puVar2 = (undefined4*)( *(long*)( lVar11 + 0x78 ) + ( ( ulong )(uint)(( *(int*)( lVar11 + 0x4c ) + param_3 ) * *(int*)( lVar11 + 0x60 )) + ( ulong ) * (uint*)( lVar11 + 100 ) ) * 4 );
            *puVar2 = *param_4;
            for (int i = 0; i < 3; i++) {
               puVar2[( i + 1 )] = param_4[( i + 1 )];
            }

            iVar6 = *(int*)( lVar11 + 8 ) + 0x1ff;
            iVar9 = *(int*)( lVar11 + 8 ) + 0x3fe;
            if (-1 < iVar6) {
               iVar9 = iVar6;
            }

            if (uVar13 < ( uint )(iVar9 >> 9)) {
               pcVar12 = (char*)( (long)(int)uVar13 + *(long*)( lVar11 + 0x80 ) );
               if (*pcVar12 == '\0') {
                  *pcVar12 = '\x01';
                  *(int*)( lVar11 + 0x88 ) = *(int*)( lVar11 + 0x88 ) + 1;
               }

               if (*(char*)( lVar11 + 0xc0 ) == '\0') {
                  *(undefined8*)( lVar11 + 200 ) = *(undefined8*)( this + 0x1d8 );
                  *(long*)( this + 0x1d8 ) = lVar11;
                  *(undefined1*)( lVar11 + 0xc0 ) = 1;
               }

            }
 else {
               _err_print_index_error("_multimesh_mark_dirty", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6c8, (long)(int)uVar13, (long)( iVar9 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00105ec7;
      }

      if (*(int*)( lVar11 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar8 = 0x760;
      pcVar12 = "Parameter \"multimesh\" is null.";
      LAB_00105d16:_err_print_error("_multimesh_instance_set_color", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar8, pcVar12, 0, 0);
      return;
   }

   LAB_00105ec7:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_instance_set_custom_data(RID, int, Color const&) */void RendererRD::MeshStorage::_multimesh_instance_set_custom_data(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   int iVar3;
   long lVar4;
   uint uVar5;
   int iVar6;
   void *pvVar7;
   undefined8 uVar8;
   int iVar9;
   uint uVar10;
   size_t __n;
   long lVar11;
   char *pcVar12;
   uint uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar11 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar11 + 0x158 ) == (int)( param_2 >> 0x20 )) {
         iVar9 = *(int*)( lVar11 + 8 );
         if (( param_3 < 0 ) || ( iVar9 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_custom_data", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x778, (long)param_3, (long)iVar9, "p_index", "multimesh->instances", "", false, false);
         }
 else {
            if (*(char*)( lVar11 + 0x11 ) == '\0') {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar8 = 0x779;
                  pcVar12 = "Condition \"!multimesh->uses_custom_data\" is true.";
                  goto LAB_001063a6;
               }

               goto LAB_00106557;
            }

            if (( *(long*)( lVar11 + 0x78 ) == 0 ) || ( *(long*)( *(long*)( lVar11 + 0x78 ) + -8 ) < 1 )) {
               uVar13 = iVar9 * *(int*)( lVar11 + 0x60 );
               if (*(char*)( lVar11 + 0x4b ) != '\0') {
                  uVar13 = uVar13 * 2;
               }

               CowData<float>::resize<false>((CowData<float>*)( lVar11 + 0x78 ), (ulong)uVar13);
               CowData<float>::_copy_on_write((CowData<float>*)( lVar11 + 0x78 ));
               pvVar7 = *(void**)( lVar11 + 0x78 );
               if (*(char*)( lVar11 + 0x49 ) == '\0') {
                  memset(pvVar7, 0, (ulong)uVar13 * 4);
               }
 else {
                  uVar8 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_get_data(local_58, uVar8, *(undefined8*)( lVar11 + 0xa0 ), 0, 0);
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  }
 else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }

                  memcpy(pvVar7, local_50, __n);
                  pvVar7 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar7 + -0x10 ), false);
                     }

                  }

               }

               iVar6 = *(int*)( lVar11 + 8 ) + 0x1ff;
               iVar9 = *(int*)( lVar11 + 8 ) + 0x3fe;
               if (-1 < iVar6) {
                  iVar9 = iVar6;
               }

               uVar15 = ( ulong )(uint)(iVar9 >> 9);
               if (uVar15 == 0) {
                  *(undefined8*)( lVar11 + 0x80 ) = 0;
                  pvVar7 = (void*)0x0;
                  *(undefined4*)( lVar11 + 0x88 ) = 0;
               }
 else {
                  pvVar7 = (void*)Memory::alloc_static(uVar15, true);
                  if (pvVar7 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0);
                     *(undefined8*)( lVar11 + 0x80 ) = 0;
                     memset((void*)0x0, 0, uVar15);
                  }
 else {
                     *(ulong*)( (long)pvVar7 + -8 ) = uVar15;
                     *(void**)( lVar11 + 0x80 ) = pvVar7;
                     memset(pvVar7, 0, uVar15);
                  }

                  *(undefined4*)( lVar11 + 0x88 ) = 0;
                  pvVar7 = (void*)Memory::alloc_static(uVar15, true);
                  if (pvVar7 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0);
                     pvVar7 = (void*)0x0;
                  }
 else {
                     *(ulong*)( (long)pvVar7 + -8 ) = uVar15;
                  }

               }

               *(void**)( lVar11 + 0x90 ) = pvVar7;
               memset(pvVar7, 0, uVar15);
               *(undefined4*)( lVar11 + 0x98 ) = 0;
               if (*(long*)( lVar11 + 0x78 ) != 0) goto LAB_00106140;
               _err_print_error("_multimesh_update_motion_vectors_data_cache", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6a2, "Condition \"multimesh->data_cache.is_empty()\" is true.", 0, 0);
            }
 else {
               LAB_00106140:if (*(char*)( lVar11 + 0x4b ) != '\0') {
                  uVar13 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
                  if (*(ulong*)( lVar11 + 0x58 ) != (ulong)uVar13) {
                     *(ulong*)( lVar11 + 0x58 ) = (ulong)uVar13;
                     *(ulong*)( lVar11 + 0x4c ) = CONCAT44(*(int*)( lVar11 + 0x4c ), *(int*)( lVar11 + 8 ) - *(int*)( lVar11 + 0x4c ));
                     if (*(int*)( lVar11 + 0x98 ) != 0) {
                        CowData<float>::_copy_on_write((CowData<float>*)( lVar11 + 0x78 ));
                        iVar9 = *(int*)( lVar11 + 0x14 );
                        if (iVar9 < 0) {
                           if (*(int*)( lVar11 + 8 ) != 0) {
                              iVar6 = *(int*)( lVar11 + 0x60 );
                              iVar9 = *(int*)( lVar11 + 8 ) * iVar6;
                              uVar13 = *(int*)( lVar11 + 8 ) + 0x1ffU >> 9;
                              if (uVar13 != 0) goto LAB_001061c5;
                           }

                        }
 else if (iVar9 != 0) {
                           iVar6 = *(int*)( lVar11 + 0x60 );
                           uVar13 = iVar9 + 0x1ffU >> 9;
                           iVar9 = *(int*)( lVar11 + 8 ) * iVar6;
                           LAB_001061c5:uVar10 = iVar9 * 4;
                           uVar14 = iVar6 * 0x800;
                           iVar9 = *(int*)( lVar11 + 0x4c );
                           lVar4 = *(long*)( lVar11 + 0x78 );
                           uVar15 = 0;
                           iVar3 = *(int*)( lVar11 + 0x50 );
                           uVar16 = 0;
                           do {
                              if (*(char*)( *(long*)( lVar11 + 0x90 ) + uVar15 ) != '\0') {
                                 uVar5 = uVar10;
                                 if (uVar14 <= uVar10) {
                                    uVar5 = uVar14;
                                 }

                                 memcpy((void*)( ( ulong )(uint)(iVar9 * iVar6 * 4) + (ulong)uVar16 + lVar4 ), (void*)( ( ulong )(uint)(iVar6 * iVar3 * 4) + (ulong)uVar16 + lVar4 ), (ulong)uVar5);
                              }

                              uVar15 = uVar15 + 1;
                              uVar10 = uVar10 + iVar6 * -0x800;
                              uVar16 = uVar16 + uVar14;
                           }
 while ( uVar13 != uVar15 );
                        }

                     }

                  }

               }

            }

            CowData<float>::_copy_on_write((CowData<float>*)( lVar11 + 0x78 ));
            uVar13 = param_3 >> 9;
            puVar2 = (undefined4*)( *(long*)( lVar11 + 0x78 ) + ( ( ulong )(uint)(( *(int*)( lVar11 + 0x4c ) + param_3 ) * *(int*)( lVar11 + 0x60 )) + ( ulong ) * (uint*)( lVar11 + 0x68 ) ) * 4 );
            *puVar2 = *param_4;
            for (int i = 0; i < 3; i++) {
               puVar2[( i + 1 )] = param_4[( i + 1 )];
            }

            iVar6 = *(int*)( lVar11 + 8 ) + 0x1ff;
            iVar9 = *(int*)( lVar11 + 8 ) + 0x3fe;
            if (-1 < iVar6) {
               iVar9 = iVar6;
            }

            if (uVar13 < ( uint )(iVar9 >> 9)) {
               pcVar12 = (char*)( (long)(int)uVar13 + *(long*)( lVar11 + 0x80 ) );
               if (*pcVar12 == '\0') {
                  *pcVar12 = '\x01';
                  *(int*)( lVar11 + 0x88 ) = *(int*)( lVar11 + 0x88 ) + 1;
               }

               if (*(char*)( lVar11 + 0xc0 ) == '\0') {
                  *(undefined8*)( lVar11 + 200 ) = *(undefined8*)( this + 0x1d8 );
                  *(long*)( this + 0x1d8 ) = lVar11;
                  *(undefined1*)( lVar11 + 0xc0 ) = 1;
               }

            }
 else {
               _err_print_index_error("_multimesh_mark_dirty", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6c8, (long)(int)uVar13, (long)( iVar9 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00106557;
      }

      if (*(int*)( lVar11 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar8 = 0x777;
      pcVar12 = "Parameter \"multimesh\" is null.";
      LAB_001063a6:_err_print_error("_multimesh_instance_set_custom_data", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar8, pcVar12, 0, 0);
      return;
   }

   LAB_00106557:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_instance_set_transform_2d(RID, int, Transform2D const&) */void RendererRD::MeshStorage::_multimesh_instance_set_transform_2d(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   int iVar7;
   void *pvVar8;
   undefined8 uVar9;
   size_t __n;
   long lVar10;
   char *pcVar11;
   uint uVar12;
   int iVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   long in_FS_OFFSET;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar10 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar10 + 0x158 ) == (int)( param_2 >> 0x20 )) {
         iVar13 = *(int*)( lVar10 + 8 );
         if (( param_3 < 0 ) || ( iVar13 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x746, (long)param_3, (long)iVar13, "p_index", "multimesh->instances", "", false, false);
         }
 else {
            if (*(int*)( lVar10 + 0xc ) != 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar9 = 0x747;
                  pcVar11 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_2D\" is true.";
                  goto LAB_00106a96;
               }

               goto LAB_00106c57;
            }

            if (( *(long*)( lVar10 + 0x78 ) == 0 ) || ( *(long*)( *(long*)( lVar10 + 0x78 ) + -8 ) < 1 )) {
               uVar12 = iVar13 * *(int*)( lVar10 + 0x60 );
               if (*(char*)( lVar10 + 0x4b ) != '\0') {
                  uVar12 = uVar12 * 2;
               }

               CowData<float>::resize<false>((CowData<float>*)( lVar10 + 0x78 ), (ulong)uVar12);
               CowData<float>::_copy_on_write((CowData<float>*)( lVar10 + 0x78 ));
               pvVar8 = *(void**)( lVar10 + 0x78 );
               if (*(char*)( lVar10 + 0x49 ) == '\0') {
                  memset(pvVar8, 0, (ulong)uVar12 * 4);
               }
 else {
                  uVar9 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_get_data(local_58, uVar9, *(undefined8*)( lVar10 + 0xa0 ), 0, 0);
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  }
 else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }

                  memcpy(pvVar8, local_50, __n);
                  pvVar8 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar8 + -0x10 ), false);
                     }

                  }

               }

               iVar7 = *(int*)( lVar10 + 8 ) + 0x1ff;
               iVar13 = *(int*)( lVar10 + 8 ) + 0x3fe;
               if (-1 < iVar7) {
                  iVar13 = iVar7;
               }

               uVar16 = ( ulong )(uint)(iVar13 >> 9);
               if (uVar16 == 0) {
                  *(undefined8*)( lVar10 + 0x80 ) = 0;
                  pvVar8 = (void*)0x0;
                  *(undefined4*)( lVar10 + 0x88 ) = 0;
               }
 else {
                  pvVar8 = (void*)Memory::alloc_static(uVar16, true);
                  if (pvVar8 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     *(undefined8*)( lVar10 + 0x80 ) = 0;
                     memset((void*)0x0, 0, uVar16);
                  }
 else {
                     *(ulong*)( (long)pvVar8 + -8 ) = uVar16;
                     *(void**)( lVar10 + 0x80 ) = pvVar8;
                     memset(pvVar8, 0, uVar16);
                  }

                  *(undefined4*)( lVar10 + 0x88 ) = 0;
                  pvVar8 = (void*)Memory::alloc_static(uVar16, true);
                  if (pvVar8 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     pvVar8 = (void*)0x0;
                  }
 else {
                     *(ulong*)( (long)pvVar8 + -8 ) = uVar16;
                  }

               }

               *(void**)( lVar10 + 0x90 ) = pvVar8;
               memset(pvVar8, 0, uVar16);
               *(undefined4*)( lVar10 + 0x98 ) = 0;
               if (*(long*)( lVar10 + 0x78 ) != 0) goto LAB_00106820;
               _err_print_error("_multimesh_update_motion_vectors_data_cache", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6a2, "Condition \"multimesh->data_cache.is_empty()\" is true.", 0, 0);
            }
 else {
               LAB_00106820:if (*(char*)( lVar10 + 0x4b ) != '\0') {
                  uVar12 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
                  if (*(ulong*)( lVar10 + 0x58 ) != (ulong)uVar12) {
                     *(ulong*)( lVar10 + 0x58 ) = (ulong)uVar12;
                     *(ulong*)( lVar10 + 0x4c ) = CONCAT44(*(int*)( lVar10 + 0x4c ), *(int*)( lVar10 + 8 ) - *(int*)( lVar10 + 0x4c ));
                     if (*(int*)( lVar10 + 0x98 ) != 0) {
                        CowData<float>::_copy_on_write((CowData<float>*)( lVar10 + 0x78 ));
                        iVar13 = *(int*)( lVar10 + 0x14 );
                        if (iVar13 < 0) {
                           if (*(int*)( lVar10 + 8 ) != 0) {
                              iVar7 = *(int*)( lVar10 + 0x60 );
                              iVar13 = *(int*)( lVar10 + 8 ) * iVar7;
                              uVar12 = *(int*)( lVar10 + 8 ) + 0x1ffU >> 9;
                              if (uVar12 != 0) goto LAB_001068a8;
                           }

                        }
 else if (iVar13 != 0) {
                           iVar7 = *(int*)( lVar10 + 0x60 );
                           uVar12 = iVar13 + 0x1ffU >> 9;
                           iVar13 = *(int*)( lVar10 + 8 ) * iVar7;
                           LAB_001068a8:uVar14 = iVar13 * 4;
                           uVar15 = iVar7 * 0x800;
                           iVar13 = *(int*)( lVar10 + 0x4c );
                           lVar5 = *(long*)( lVar10 + 0x78 );
                           iVar4 = *(int*)( lVar10 + 0x50 );
                           uVar16 = 0;
                           uVar17 = 0;
                           do {
                              if (*(char*)( *(long*)( lVar10 + 0x90 ) + uVar16 ) != '\0') {
                                 uVar6 = uVar14;
                                 if (uVar15 <= uVar14) {
                                    uVar6 = uVar15;
                                 }

                                 memcpy((void*)( ( ulong )(uint)(iVar13 * iVar7 * 4) + (ulong)uVar17 + lVar5 ), (void*)( ( ulong )(uint)(iVar7 * iVar4 * 4) + (ulong)uVar17 + lVar5 ), (ulong)uVar6);
                              }

                              uVar16 = uVar16 + 1;
                              uVar14 = uVar14 + iVar7 * -0x800;
                              uVar17 = uVar17 + uVar15;
                           }
 while ( uVar12 != uVar16 );
                        }

                     }

                  }

               }

            }

            CowData<float>::_copy_on_write((CowData<float>*)( lVar10 + 0x78 ));
            uVar12 = param_3 >> 9;
            puVar2 = (undefined4*)( *(long*)( lVar10 + 0x78 ) + ( ulong )(uint)(( *(int*)( lVar10 + 0x4c ) + param_3 ) * *(int*)( lVar10 + 0x60 )) * 4 );
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
            iVar7 = *(int*)( lVar10 + 8 ) + 0x1ff;
            iVar13 = *(int*)( lVar10 + 8 ) + 0x3fe;
            if (-1 < iVar7) {
               iVar13 = iVar7;
            }

            if (uVar12 < ( uint )(iVar13 >> 9)) {
               pcVar11 = (char*)( (long)(int)uVar12 + *(long*)( lVar10 + 0x80 ) );
               if (*pcVar11 == '\0') {
                  *pcVar11 = '\x01';
                  *(int*)( lVar10 + 0x88 ) = *(int*)( lVar10 + 0x88 ) + 1;
               }

               *(undefined1*)( lVar10 + 0x48 ) = 1;
               if (*(char*)( lVar10 + 0xc0 ) == '\0') {
                  *(undefined8*)( lVar10 + 200 ) = *(undefined8*)( this + 0x1d8 );
                  *(long*)( this + 0x1d8 ) = lVar10;
                  *(undefined1*)( lVar10 + 0xc0 ) = 1;
               }

            }
 else {
               _err_print_index_error("_multimesh_mark_dirty", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6c8, (long)(int)uVar12, (long)( iVar13 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00106c57;
      }

      if (*(int*)( lVar10 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar9 = 0x745;
      pcVar11 = "Parameter \"multimesh\" is null.";
      LAB_00106a96:_err_print_error("_multimesh_instance_set_transform_2d", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar9, pcVar11, 0, 0);
      return;
   }

   LAB_00106c57:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::get_singleton() */undefined8 RendererRD::MeshStorage::get_singleton(void) {
   return singleton;
}
/* RendererRD::MeshStorage::free(RID) */undefined8 RendererRD::MeshStorage::free(MeshStorage *this, ulong param_2) {
   pthread_mutex_t *ppVar1;
   pthread_mutex_t *__mutex;
   int iVar2;
   uint uVar3;
   ulong uVar4;
   uint uVar5;
   ppVar1 = (pthread_mutex_t*)( this + 0xe0 );
   iVar2 = pthread_mutex_lock(ppVar1);
   if (iVar2 != 0) goto LAB_00106ee4;
   uVar3 = (uint)param_2;
   uVar4 = param_2 & 0xffffffff;
   uVar5 = ( uint )(param_2 >> 0x20);
   if (uVar3 < *(uint*)( this + 0xcc )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(ppVar1);
      }
 else {
         if (( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) + 0xd8 ) & 0x7fffffff ) == uVar5) {
            pthread_mutex_unlock(ppVar1);
            ( **(code**)( *(long*)this + 0x20 ) )(this, param_2);
            return 1;
         }

         pthread_mutex_unlock(ppVar1);
         if (uVar3 < *(uint*)( this + 0x124 )) goto LAB_00106d08;
      }

   }
 else {
      pthread_mutex_unlock(ppVar1);
      if (( uVar3 < *(uint*)( this + 0x124 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
         LAB_00106d08:if (( *(uint*)( ( uVar4 % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( uVar4 / *(uint*)( this + 0x120 ) ) * 8 ) + 0xa8 ) & 0x7fffffff ) == uVar5) {
            ( **(code**)( *(long*)this + 0xd8 ) )(this, param_2);
            return 1;
         }

      }

   }

   ppVar1 = (pthread_mutex_t*)( this + 0x1b0 );
   iVar2 = pthread_mutex_lock(ppVar1);
   if (iVar2 == 0) {
      if (( ( uVar3 < *(uint*)( this + 0x19c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar4 % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( uVar4 / *(uint*)( this + 0x198 ) ) * 8 ) + 0x158 ) & 0x7fffffff ) == uVar5 )) {
         pthread_mutex_unlock(ppVar1);
         ( **(code**)( *(long*)this + 0x118 ) )(this, param_2);
      }
 else {
         __mutex = (pthread_mutex_t*)( this + 0x3b8 );
         pthread_mutex_unlock(ppVar1);
         iVar2 = pthread_mutex_lock(__mutex);
         if (iVar2 != 0) goto LAB_00106ee4;
         if (( ( *(uint*)( this + 0x3a4 ) <= uVar3 ) || ( param_2 >> 0x20 == 0x7fffffff ) ) || ( ( *(uint*)( *(long*)( *(long*)( this + 0x390 ) + ( uVar4 / *(uint*)( this + 0x3a0 ) ) * 8 ) + ( uVar4 % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98 + 0x90 ) & 0x7fffffff ) != uVar5 )) {
            pthread_mutex_unlock(__mutex);
            return 0;
         }

         pthread_mutex_unlock(__mutex);
         ( **(code**)( *(long*)this + 0x2c0 ) )(this, param_2);
      }

      return 1;
   }

   LAB_00106ee4:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar2);
}
/* RendererRD::MeshStorage::mesh_free(RID) */ulong RendererRD::MeshStorage::mesh_free(MeshStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   Mesh *this_00;
   ( **(code**)( *(long*)this + 0xc0 ) )();
   ( **(code**)( *(long*)this + 0xb0 ) )(this, param_2, 0);
   if (param_2 != 0) {
      uVar4 = (uint)param_2;
      if (uVar4 < *(uint*)( this + 0xcc )) {
         lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
         iVar6 = (int)( param_2 >> 0x20 );
         if (*(int*)( lVar7 + 0xd8 ) == iVar6) {
            Dependency::deleted_notify((RID*)( lVar7 + 0xa8 ));
            if (( *(long*)( lVar7 + 0x68 ) == 0 ) || ( *(int*)( *(long*)( lVar7 + 0x68 ) + 0x10 ) == 0 )) {
               iVar2 = *(int*)( lVar7 + 0x9c );
            }
 else {
               _err_print_error("mesh_free", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0xeb, "deleting mesh with active instances", 0, 0);
               iVar2 = *(int*)( lVar7 + 0x9c );
            }

            if (iVar2 != 0) {
               lVar7 = *(long*)( lVar7 + 0x78 );
               lVar8 = 0;
               while (true) {
                  lVar1 = *(long*)( lVar7 + lVar8 * 8 );
                  *(undefined8*)( lVar1 + 0x70 ) = 0;
                  Dependency::changed_notify(lVar1 + 0xa8, 2);
                  if (iVar2 <= (int)lVar8 + 1) break;
                  lVar8 = lVar8 + 1;
               }
;
            }

            __mutex = (pthread_mutex_t*)( this + 0xe0 );
            iVar2 = pthread_mutex_lock(__mutex);
            if (iVar2 == 0) {
               if (uVar4 < *(uint*)( this + 0xcc )) {
                  uVar5 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 );
                  lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0;
                  this_00 = (Mesh*)( *(long*)( *(long*)( this + 0xb8 ) + uVar5 * 8 ) + lVar7 );
                  iVar2 = *(int*)( this_00 + 0xd8 );
                  if (iVar2 < 0) {
                     pthread_mutex_unlock(__mutex);
                     uVar5 = 0;
                     _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
                  }
 else if (iVar6 == iVar2) {
                     Mesh::~Mesh(this_00);
                     lVar8 = *(long*)( this + 0xc0 );
                     *(undefined4*)( *(long*)( *(long*)( this + 0xb8 ) + uVar5 * 8 ) + 0xd8 + lVar7 ) = 0xffffffff;
                     uVar3 = *(int*)( this + 0xd0 ) - 1;
                     *(uint*)( this + 0xd0 ) = uVar3;
                     *(uint*)( *(long*)( lVar8 + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 200 ) ) * 4 ) = uVar4;
                     uVar4 = pthread_mutex_unlock(__mutex);
                     uVar5 = (ulong)uVar4;
                  }
 else {
                     pthread_mutex_unlock(__mutex);
                     uVar5 = _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
                  }

               }
 else {
                  pthread_mutex_unlock(__mutex);
                  uVar5 = _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
               }

               return uVar5;
            }

            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }

         if (*(int*)( lVar7 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   uVar5 = _err_print_error("mesh_free", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0xe7, "Parameter \"mesh\" is null.", 0, 0);
   return uVar5;
}
/* RendererRD::MeshStorage::_mesh_surface_clear(RendererRD::MeshStorage::Mesh*, int) */void RendererRD::MeshStorage::_mesh_surface_clear(MeshStorage *this, Mesh *param_1, int param_2) {
   long *plVar1;
   long lVar2;
   void *pvVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   lVar2 = *(long*)( *(long*)( param_1 + 8 ) + (long)param_2 * 8 );
   for (int i = 0; i < 3; i++) {
      if (*(long*)( lVar2 + ( 8*i + 16 ) ) != 0) {
         uVar4 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar4);
      }

   }

   if (*(void**)( lVar2 + 0x78 ) != (void*)0x0) {
      Memory::free_static(*(void**)( lVar2 + 0x78 ), false);
   }

   if (*(long*)( lVar2 + 0x88 ) != 0) {
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar4);
   }

   if (*(int*)( lVar2 + 0xa8 ) != 0) {
      lVar5 = 0;
      do {
         uVar4 = RenderingDevice::get_singleton();
         lVar6 = lVar5 + 1;
         RenderingDevice::free(uVar4, *(undefined8*)( *(long*)( lVar2 + 0xa0 ) + lVar5 * 0x18 + 8 ));
         lVar5 = lVar6;
      }
 while ( (uint)lVar6 < *(uint*)( lVar2 + 0xa8 ) );
      Memory::free_static(*(void**)( lVar2 + 0xa0 ), true);
   }

   if (*(long*)( lVar2 + 0x118 ) != 0) {
      uVar4 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar4);
   }

   pvVar3 = *(void**)( *(long*)( param_1 + 8 ) + (long)param_2 * 8 );
   if (*(long*)( (long)pvVar3 + 0xd0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( (long)pvVar3 + 0xd0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( (long)pvVar3 + 0xd0 );
         *(undefined8*)( (long)pvVar3 + 0xd0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Memory::free_static(pvVar3, false);
   return;
}
/* RendererRD::MeshStorage::mesh_get_dependency(RID) const */long RendererRD::MeshStorage::mesh_get_dependency(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xd8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0xa8;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_dependency", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x3a1, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::_mesh_instance_remove_surface(RendererRD::MeshStorage::MeshInstance*,
   int) */void RendererRD::MeshStorage::_mesh_instance_remove_surface(MeshStorage *this, MeshInstance *param_1, int param_2) {
   undefined8 *puVar1;
   long lVar2;
   code *pcVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   ulong uVar8;
   void *pvVar9;
   ulong uVar10;
   long *plVar11;
   uint uVar12;
   if (*(uint*)( param_1 + 0x10 ) <= (uint)param_2) {
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)(uint)param_2, ( ulong ) * (uint*)( param_1 + 0x10 ), "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   uVar10 = (ulong)(uint)param_2;
   plVar11 = (long*)( *(long*)( param_1 + 0x18 ) + uVar10 * 0x40 );
   pvVar9 = (void*)plVar11[6];
   if (pvVar9 != (void*)0x0) {
      if ((int)plVar11[7] != 0) {
         uVar12 = 0;
         do {
            uVar5 = RenderingDevice::get_singleton();
            uVar12 = uVar12 + 1;
            RenderingDevice::free(uVar5);
         }
 while ( uVar12 < *(uint*)( plVar11 + 7 ) );
         pvVar9 = (void*)plVar11[6];
      }

      Memory::free_static(pvVar9, false);
   }

   if (*plVar11 != 0) {
      uVar5 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar5, *plVar11);
   }

   if (plVar11[1] != 0) {
      uVar5 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar5, plVar11[1]);
   }

   uVar12 = *(uint*)( param_1 + 0x10 );
   if ((uint)param_2 < uVar12) {
      uVar4 = uVar12 - 1;
      *(uint*)( param_1 + 0x10 ) = uVar4;
      if ((uint)param_2 < uVar4) {
         lVar2 = *(long*)( param_1 + 0x18 );
         uVar8 = ( ulong )(param_2 + 1);
         puVar6 = (undefined8*)( lVar2 + uVar10 * 0x40 );
         do {
            puVar7 = puVar6 + 8;
            uVar5 = ( puVar6 + uVar10 * -8 + uVar8 * 8 )[1];
            *puVar6 = puVar6[uVar10 * -8 + uVar8 * 8];
            puVar6[1] = uVar5;
            uVar5 = ( puVar6 + uVar10 * -8 + uVar8 * 8 + 2 )[1];
            puVar6[2] = puVar6[uVar10 * -8 + uVar8 * 8 + 2];
            puVar6[3] = uVar5;
            uVar5 = ( puVar6 + uVar10 * -8 + uVar8 * 8 + 4 )[1];
            puVar6[4] = puVar6[uVar10 * -8 + uVar8 * 8 + 4];
            puVar6[5] = uVar5;
            puVar1 = (undefined8*)( (long)puVar6 + uVar8 * 0x40 + uVar10 * -0x40 + 0x2c );
            uVar5 = puVar1[1];
            *(undefined8*)( (long)puVar6 + 0x2c ) = *puVar1;
            *(undefined8*)( (long)puVar6 + 0x34 ) = uVar5;
            puVar6 = puVar7;
         }
 while ( puVar7 != (undefined8*)( lVar2 + 0x40 + ( ( ( uVar12 - param_2 ) - 2 ) + uVar10 ) * 0x40 ) );
         goto LAB_001075d6;
      }

   }
 else {
      _err_print_index_error("remove_at", "./core/templates/local_vector.h", 0x4c, uVar10, (ulong)uVar12, "p_index", "count", "", false, false);
      uVar4 = *(uint*)( param_1 + 0x10 );
   }

   if (uVar4 == 0) {
      if (*(long*)( param_1 + 0x30 ) != 0) {
         uVar5 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar5, *(undefined8*)( param_1 + 0x30 ));
         *(undefined8*)( param_1 + 0x30 ) = 0;
      }

      if (*(int*)( param_1 + 0x20 ) != 0) {
         *(undefined4*)( param_1 + 0x20 ) = 0;
      }

      param_1[0x49] = (MeshInstance)0x0;
      *(undefined8*)( param_1 + 0x40 ) = 0;
   }

   LAB_001075d6:param_1[0x48] = (MeshInstance)0x1;
   return;
}
/* RendererRD::MeshStorage::_mesh_instance_clear(RendererRD::MeshStorage::MeshInstance*) */void RendererRD::MeshStorage::_mesh_instance_clear(MeshStorage *this, MeshInstance *param_1) {
   int iVar1;
   iVar1 = *(int*)( param_1 + 0x10 );
   while (iVar1 != 0) {
      _mesh_instance_remove_surface(this, param_1, iVar1 + -1);
      iVar1 = *(int*)( param_1 + 0x10 );
   }
;
   param_1[0x48] = (MeshInstance)0x0;
   return;
}
/* RendererRD::MeshStorage::mesh_surface_remove(RID, int) */void RendererRD::MeshStorage::mesh_surface_remove(MeshStorage *this, ulong param_2, uint param_3) {
   int iVar1;
   long lVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long *plVar7;
   uint uVar8;
   long lVar9;
   Mesh *pMVar10;
   ulong uVar11;
   long *plVar12;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      pMVar10 = (Mesh*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      if (*(int*)( pMVar10 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < *(uint*)( pMVar10 + 0x10 )) {
            if (*(undefined8**)( pMVar10 + 0x68 ) != (undefined8*)0x0) {
               for (puVar3 = (undefined8*)**(undefined8**)( pMVar10 + 0x68 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)puVar3[1]) {
                  _mesh_instance_remove_surface(this, (MeshInstance*)*puVar3, param_3);
               }

            }

            _mesh_surface_clear(this, pMVar10, param_3);
            uVar8 = *(int*)( pMVar10 + 0x10 ) - 1;
            if (param_3 < uVar8) {
               lVar4 = (long)(int)param_3 * 8 + 8;
               memmove((void*)( *(long*)( pMVar10 + 8 ) + -8 + lVar4 ), (void*)( *(long*)( pMVar10 + 8 ) + lVar4 ), ( ulong )(( *(int*)( pMVar10 + 0x10 ) - param_3 ) - 1) << 3);
               uVar8 = *(int*)( pMVar10 + 0x10 ) - 1;
            }

            uVar6 = Memory::realloc_static(*(void**)( pMVar10 + 8 ), (ulong)uVar8 << 3, false);
            *(undefined8*)( pMVar10 + 8 ) = uVar6;
            uVar11 = ( ulong )(*(int*)( pMVar10 + 0x10 ) - 1U);
            lVar4 = *(long*)( pMVar10 + 0x60 );
            *(uint*)( pMVar10 + 0x10 ) = *(int*)( pMVar10 + 0x10 ) - 1U;
            if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) == 0 )) {
               LAB_0010783f:uVar8 = (uint)uVar11;
               *(undefined8*)( pMVar10 + 0x48 ) = 0;
               if (pMVar10[0x14] == (Mesh)0x0) goto LAB_00107851;
               LAB_001078f8:pMVar10[0x14] = (Mesh)0x0;
               uVar8 = (uint)uVar11;
               if (uVar8 != 0) {
                  plVar12 = *(long**)( pMVar10 + 8 );
                  plVar7 = plVar12;
                  do {
                     if (( *(byte*)( *plVar7 + 9 ) & 4 ) != 0) {
                        pMVar10[0x14] = (Mesh)0x1;
                        break;
                     }

                     plVar7 = plVar7 + 1;
                  }
 while ( plVar12 + uVar11 != plVar7 );
                  goto LAB_00107993;
               }

               LAB_00107859:*(undefined8*)( pMVar10 + 0x28 ) = 0;
               *(undefined8*)( pMVar10 + 0x18 ) = 0;
               *(undefined8*)( pMVar10 + 0x20 ) = 0;
            }
 else {
               LOCK();
               plVar12 = (long*)( lVar4 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 != 0) {
                  *(undefined8*)( pMVar10 + 0x60 ) = 0;
                  uVar11 = ( ulong ) * (uint*)( pMVar10 + 0x10 );
                  goto LAB_0010783f;
               }

               lVar4 = *(long*)( pMVar10 + 0x60 );
               *(undefined8*)( pMVar10 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
               *(undefined8*)( pMVar10 + 0x48 ) = 0;
               uVar8 = *(uint*)( pMVar10 + 0x10 );
               uVar11 = (ulong)uVar8;
               if (pMVar10[0x14] != (Mesh)0x0) goto LAB_001078f8;
               LAB_00107851:if (uVar8 == 0) goto LAB_00107859;
               plVar12 = *(long**)( pMVar10 + 8 );
               LAB_00107993:lVar4 = *plVar12;
               uVar6 = *(undefined8*)( lVar4 + 0xb4 );
               *(undefined8*)( pMVar10 + 0x18 ) = *(undefined8*)( lVar4 + 0xac );
               *(undefined8*)( pMVar10 + 0x20 ) = uVar6;
               *(undefined8*)( pMVar10 + 0x28 ) = *(undefined8*)( lVar4 + 0xbc );
               if (1 < uVar8) {
                  uVar8 = 1;
                  do {
                     uVar8 = uVar8 + 1;
                     AABB::merge_with((AABB*)( pMVar10 + 0x18 ));
                  }
 while ( uVar8 < *(uint*)( pMVar10 + 0x10 ) );
               }

            }

            Dependency::changed_notify(pMVar10 + 0xa8, 2);
            iVar1 = *(int*)( pMVar10 + 0x9c );
            if (iVar1 != 0) {
               lVar4 = *(long*)( pMVar10 + 0x78 );
               lVar9 = 0;
               while (true) {
                  lVar5 = *(long*)( lVar4 + lVar9 * 8 );
                  *(undefined8*)( lVar5 + 0x70 ) = 0;
                  Dependency::changed_notify(lVar5 + 0xa8, 2);
                  if (iVar1 <= (int)lVar9 + 1) break;
                  lVar9 = lVar9 + 1;
               }
;
            }

         }
 else {
            _err_print_index_error("mesh_surface_remove", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x369, (ulong)param_3, ( ulong ) * (uint*)( pMVar10 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
         }

         if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00107b05;
      }

      if (*(int*)( pMVar10 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("mesh_surface_remove", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x368, "Parameter \"mesh\" is null.", 0, 0);
      return;
   }

   LAB_00107b05:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::mesh_clear(RID) */void RendererRD::MeshStorage::mesh_clear(MeshStorage *this, ulong param_2) {
   long *plVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   MeshInstance *pMVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   Mesh *pMVar11;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      pMVar11 = (Mesh*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      if (*(int*)( pMVar11 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(undefined8**)( pMVar11 + 0x68 ) != (undefined8*)0x0) {
            puVar4 = (undefined8*)**(undefined8**)( pMVar11 + 0x68 );
            while (puVar4 != (undefined8*)0x0) {
               pMVar5 = (MeshInstance*)*puVar4;
               iVar2 = *(int*)( pMVar5 + 0x10 );
               while (iVar2 != 0) {
                  _mesh_instance_remove_surface(this, pMVar5, iVar2 + -1);
                  iVar2 = *(int*)( pMVar5 + 0x10 );
               }
;
               puVar4 = (undefined8*)puVar4[1];
               pMVar5[0x48] = (MeshInstance)0x0;
            }
;
         }

         uVar8 = 0;
         if (*(int*)( pMVar11 + 0x10 ) != 0) {
            do {
               uVar9 = uVar8 + 1;
               _mesh_surface_clear(this, pMVar11, uVar8);
               uVar8 = uVar9;
            }
 while ( uVar9 < *(uint*)( pMVar11 + 0x10 ) );
         }

         if (*(void**)( pMVar11 + 8 ) != (void*)0x0) {
            Memory::free_static(*(void**)( pMVar11 + 8 ), false);
         }

         lVar6 = *(long*)( pMVar11 + 0x60 );
         *(undefined8*)( pMVar11 + 8 ) = 0;
         *(undefined4*)( pMVar11 + 0x10 ) = 0;
         if (( lVar6 != 0 ) && ( *(long*)( lVar6 + -8 ) != 0 )) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar6 = *(long*)( pMVar11 + 0x60 );
               *(undefined8*)( pMVar11 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
 else {
               *(undefined8*)( pMVar11 + 0x60 ) = 0;
            }

         }

         pMVar11[0x14] = (Mesh)0x0;
         *(undefined8*)( pMVar11 + 0x28 ) = 0;
         *(undefined8*)( pMVar11 + 0x18 ) = 0;
         *(undefined8*)( pMVar11 + 0x20 ) = 0;
         Dependency::changed_notify(pMVar11 + 0xa8, 2);
         iVar2 = *(int*)( pMVar11 + 0x9c );
         if (iVar2 != 0) {
            lVar6 = *(long*)( pMVar11 + 0x78 );
            lVar10 = 0;
            while (true) {
               lVar7 = *(long*)( lVar6 + lVar10 * 8 );
               *(undefined8*)( lVar7 + 0x70 ) = 0;
               Dependency::changed_notify(lVar7 + 0xa8, 2);
               if (iVar2 <= (int)lVar10 + 1) break;
               lVar10 = lVar10 + 1;
            }
;
         }

         if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00107d79;
      }

      if (*(int*)( pMVar11 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("mesh_clear", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x34a, "Parameter \"mesh\" is null.", 0, 0);
      return;
   }

   LAB_00107d79:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_get_motion_vectors_offsets(RID, unsigned int&, unsigned int&)
    */void RendererRD::MeshStorage::_multimesh_get_motion_vectors_offsets(MeshStorage *this, ulong param_2, undefined4 *param_3, undefined4 *param_4) {
   long *plVar1;
   long lVar2;
   undefined4 uVar3;
   long lVar4;
   plVar1 = RenderingServerGlobals::rasterizer;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar4 + 0x158 ) == (int)( param_2 >> 0x20 )) {
         *param_3 = *(undefined4*)( lVar4 + 0x4c );
         lVar2 = ( **(code**)( *plVar1 + 0x88 ) )();
         uVar3 = *(undefined4*)( lVar4 + 0x50 );
         if (1 < ( ulong )(lVar2 - *(long*)( lVar4 + 0x58 ))) {
            *(undefined4*)( lVar4 + 0x50 ) = *(undefined4*)( lVar4 + 0x4c );
            uVar3 = *(undefined4*)( lVar4 + 0x4c );
         }

         *param_4 = uVar3;
         return;
      }

      if (*(int*)( lVar4 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_motion_vectors_offsets", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x634, "Parameter \"multimesh\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::_multimesh_uses_motion_vectors_offsets(RID) */undefined8 RendererRD::MeshStorage::_multimesh_uses_motion_vectors_offsets(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   long lVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar1 = *(int*)( lVar4 + 0x158 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
         uVar3 = lVar2 - *(long*)( lVar4 + 0x58 );
         return CONCAT71(( int7 )(uVar3 >> 8), uVar3 < 2);
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_uses_motion_vectors_offsets", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x63e, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* RendererRD::MeshStorage::multimesh_get_dependency(RID) const */long RendererRD::MeshStorage::multimesh_get_dependency(MeshStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x158 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0x128;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("multimesh_get_dependency", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x795, "Parameter \"multimesh\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::_update_dirty_multimeshes() */void RendererRD::MeshStorage::_update_dirty_multimeshes(MeshStorage *this) {
   undefined8 *puVar1;
   long lVar2;
   float fVar3;
   long lVar4;
   ulong uVar5;
   ulong uVar6;
   float fVar7;
   char cVar8;
   uint uVar9;
   undefined8 uVar10;
   long lVar11;
   int iVar12;
   uint uVar13;
   long *plVar14;
   void *__src;
   AABB *pAVar15;
   int iVar16;
   int iVar17;
   uint uVar18;
   int iVar19;
   long lVar20;
   long in_FS_OFFSET;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   undefined8 uVar27;
   undefined8 uVar28;
   float fVar29;
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
   plVar14 = *(long**)( this + 0x1d8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar14 != (long*)0x0) {
      do {
         lVar2 = plVar14[0xf];
         if (( lVar2 != 0 ) && ( *(long*)( lVar2 + -8 ) != 0 )) {
            iVar17 = *(int*)( (long)plVar14 + 0x14 );
            if (iVar17 < 0) {
               iVar17 = (int)plVar14[1];
            }

            uVar18 = *(int*)( (long)plVar14 + 0x4c ) * (int)plVar14[0xc];
            lVar2 = lVar2 + (ulong)uVar18 * 4;
            uVar13 = (int)plVar14[0x13] + (int)plVar14[0x11];
            if (uVar13 != 0) {
               iVar12 = (int)plVar14[1] + 0x1ff;
               iVar19 = (int)plVar14[1] + 0x3fe;
               if (-1 < iVar12) {
                  iVar19 = iVar12;
               }

               iVar12 = uVar18 * 4;
               if (iVar17 == 0) {
                  uVar18 = 0;
                  LAB_0010820f:uVar10 = RenderingDevice::get_singleton();
                  uVar13 = (int)plVar14[1] * (int)plVar14[0xc] * 4;
                  if (uVar18 < uVar13) {
                     uVar13 = uVar18;
                  }

                  RenderingDevice::buffer_update(uVar10, plVar14[0x14], iVar12, uVar13, lVar2);
                  __src = (void*)plVar14[0x10];
               }
 else {
                  uVar9 = (int)plVar14[0xc] * 0x800;
                  uVar18 = iVar17 + 0x1ffU >> 9;
                  if (( 0x20 < uVar13 ) || ( iVar17 + 0x1ffU >> 10 < uVar13 )) {
                     uVar18 = uVar18 * uVar9;
                     goto LAB_0010820f;
                  }

                  lVar20 = 0;
                  iVar16 = 0;
                  __src = (void*)plVar14[0x10];
                  do {
                     if (( *(char*)( (long)__src + lVar20 ) != '\0' ) || ( *(char*)( plVar14[0x12] + lVar20 ) != '\0' )) {
                        lVar11 = plVar14[0xc];
                        lVar4 = plVar14[1];
                        uVar10 = RenderingDevice::get_singleton();
                        uVar13 = (int)lVar11 * (int)lVar4 * 4 - iVar16;
                        if (uVar9 < uVar13) {
                           uVar13 = uVar9;
                        }

                        RenderingDevice::buffer_update(uVar10, plVar14[0x14], iVar12 + iVar16, uVar13, lVar2 + ( ulong )(uint)((int)lVar11 * (int)lVar20 * 0x200) * 4);
                        __src = (void*)plVar14[0x10];
                     }

                     lVar20 = lVar20 + 1;
                     iVar16 = iVar16 + uVar9;
                  }
 while ( (uint)lVar20 < uVar18 );
               }

               memcpy((void*)plVar14[0x12], __src, ( ulong )(uint)(iVar19 >> 9));
               memset((void*)plVar14[0x10], 0, ( ulong )(uint)(iVar19 >> 9));
               lVar20 = plVar14[0x11];
               *(undefined4*)( plVar14 + 0x11 ) = 0;
               *(int*)( plVar14 + 0x13 ) = (int)lVar20;
            }

            if ((char)plVar14[9] != '\0') {
               *(undefined1*)( plVar14 + 9 ) = 0;
               local_78 = 0;
               uStack_74 = 0;
               uStack_70 = 0;
               uStack_6c = 0;
               uStack_68 = 0;
               uStack_64 = 0;
               cVar8 = AABB::operator ==((AABB*)( plVar14 + 6 ), (AABB*)&local_78);
               if (cVar8 != '\0') {
                  if (*plVar14 == 0) {
                     _err_print_error("_multimesh_re_create_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6f2, "Condition \"multimesh->mesh.is_null()\" is true.", 0, 0);
                  }
 else {
                     local_78 = 0;
                     uStack_74 = 0;
                     uStack_70 = 0;
                     uStack_6c = 0;
                     uStack_68 = 0;
                     uStack_64 = 0;
                     cVar8 = AABB::operator !=((AABB*)( plVar14 + 6 ), (AABB*)&local_78);
                     if (cVar8 == '\0') {
                        local_d8 = 0;
                        fStack_d0 = 0.0;
                        fStack_cc = 0.0;
                        fStack_c8 = 0.0;
                        fStack_c4 = 0.0;
                        ( **(code**)( *(long*)this + 0x98 ) )(&local_b8, this, *plVar14);
                        fVar7 = local_b0;
                        uVar10 = local_b8;
                        if (0 < iVar17) {
                           fVar23 = (float)local_ac;
                           uVar6 = (ulong)local_ac >> 0x20;
                           fVar29 = (float)local_b8;
                           uVar5 = (ulong)local_b8 >> 0x20;
                           fVar21 = local_a4 + local_b0;
                           iVar19 = 0;
                           uVar27 = __LC134;
                           uVar28 = _UNK_0011d538;
                           do {
                              uStack_70 = ( undefined4 )((ulong)uVar27 >> 0x20);
                              local_54[2] = 0.0;
                              puVar1 = (undefined8*)( lVar2 + ( ulong )(uint)(iVar19 * (int)plVar14[0xc]) * 4 );
                              uStack_64 = (undefined4)uVar27;
                              uStack_5c = (undefined4)uVar28;
                              uStack_58 = ( undefined4 )((ulong)uVar28 >> 0x20);
                              local_78 = *(undefined4*)puVar1;
                              uStack_74 = *(undefined4*)( (long)puVar1 + 4 );
                              uStack_6c = *(undefined4*)( puVar1 + 2 );
                              uStack_68 = *(undefined4*)( (long)puVar1 + 0x14 );
                              if (*(int*)( (long)plVar14 + 0xc ) == 1) {
                                 uStack_64 = *(undefined4*)( puVar1 + 3 );
                                 uStack_58 = *(undefined4*)( puVar1 + 5 );
                                 uStack_70 = *(undefined4*)( puVar1 + 1 );
                                 uStack_60 = (undefined4)puVar1[4];
                                 uStack_5c = ( undefined4 )((ulong)puVar1[4] >> 0x20);
                                 local_54[2] = (float)*(undefined4*)( (long)puVar1 + 0x2c );
                              }
 else {
                                 local_78 = ( undefined4 ) * puVar1;
                                 uStack_74 = ( undefined4 )(( ulong ) * puVar1 >> 0x20);
                                 uStack_6c = (undefined4)puVar1[2];
                                 uStack_68 = ( undefined4 )((ulong)puVar1[2] >> 0x20);
                                 uStack_60 = uStack_70;
                              }

                              local_54[1] = (float)*(undefined4*)( (long)puVar1 + 0x1c );
                              local_54[0] = (float)*(undefined4*)( (long)puVar1 + 0xc );
                              local_118 = uVar10;
                              lVar20 = 0;
                              local_f8 = 0;
                              local_108 = CONCAT44((float)uVar6 + (float)uVar5, fVar23 + fVar29);
                              local_110 = fVar7;
                              local_f0 = 0.0;
                              for (int i = 0; i < 3; i++) {
                                 local_e8[i] = 0;
                              }

                              local_100 = fVar21;
                              pAVar15 = (AABB*)&local_78;
                              if (iVar19 == 0) {
                                 do {
                                    fVar26 = *(float*)( (long)local_54 + lVar20 );
                                    lVar11 = 0;
                                    fVar24 = fVar26;
                                    do {
                                       fVar25 = *(float*)( (long)&local_118 + lVar11 ) * *(float*)( pAVar15 + lVar11 );
                                       fVar22 = *(float*)( pAVar15 + lVar11 ) * *(float*)( (long)&local_108 + lVar11 );
                                       fVar3 = fVar25;
                                       if (fVar25 < fVar22) {
                                          fVar3 = fVar22;
                                          fVar22 = fVar25;
                                       }

                                       fVar24 = fVar24 + fVar22;
                                       fVar26 = fVar26 + fVar3;
                                       lVar11 = lVar11 + 4;
                                    }
 while ( lVar11 != 0xc );
                                    *(float*)( (long)local_e8 + lVar20 ) = fVar26;
                                    pAVar15 = pAVar15 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar20 ) = fVar24;
                                    lVar20 = lVar20 + 4;
                                 }
 while ( lVar20 != 0xc );
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
                              }
 else {
                                 do {
                                    fVar26 = *(float*)( (long)local_54 + lVar20 );
                                    lVar11 = 0;
                                    fVar24 = fVar26;
                                    do {
                                       fVar25 = *(float*)( (long)&local_118 + lVar11 ) * *(float*)( pAVar15 + lVar11 );
                                       fVar22 = *(float*)( pAVar15 + lVar11 ) * *(float*)( (long)&local_108 + lVar11 );
                                       fVar3 = fVar25;
                                       if (fVar25 < fVar22) {
                                          fVar3 = fVar22;
                                          fVar22 = fVar25;
                                       }

                                       fVar24 = fVar24 + fVar22;
                                       fVar26 = fVar26 + fVar3;
                                       lVar11 = lVar11 + 4;
                                    }
 while ( lVar11 != 0xc );
                                    *(float*)( (long)local_e8 + lVar20 ) = fVar26;
                                    pAVar15 = pAVar15 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar20 ) = fVar24;
                                    lVar20 = lVar20 + 4;
                                 }
 while ( lVar20 != 0xc );
                                 fStack_84 = local_e8[2] - local_f0;
                                 local_98 = local_f8;
                                 fStack_8c = (float)local_e8._0_8_ - (float)local_f8;
                                 fStack_88 = SUB84(local_e8._0_8_, 4) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 AABB::merge_with((AABB*)&local_d8);
                                 uVar27 = __LC134;
                                 uVar28 = _UNK_0011d538;
                              }

                              iVar19 = iVar19 + 1;
                           }
 while ( iVar17 != iVar19 );
                        }

                        plVar14[5] = CONCAT44(fStack_c4, fStack_c8);
                        plVar14[3] = local_d8;
                        plVar14[4] = CONCAT44(fStack_cc, fStack_d0);
                     }

                  }

                  Dependency::changed_notify(plVar14 + 0x25, 0);
               }

            }

         }

         *(long*)( this + 0x1d8 ) = plVar14[0x19];
         plVar14[0x19] = 0;
         *(undefined1*)( plVar14 + 0x18 ) = 0;
         plVar14 = *(long**)( this + 0x1d8 );
      }
 while ( plVar14 != (long*)0x0 );
   }

   *(undefined8*)( this + 0x1d8 ) = 0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::MeshStorage::_multimesh_free(RID) */ulong RendererRD::MeshStorage::_multimesh_free(MeshStorage *this, ulong param_2) {
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
   if (( param_2 != 0 ) && ( uVar5 < *(uint*)( this + 0x19c ) )) {
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar8 + 0x158 ) == iVar7) goto LAB_00108893;
      if (*(int*)( lVar8 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         lVar8 = 0;
         goto LAB_00108893;
      }

   }

   lVar8 = 0;
   LAB_00108893:__mutex = (pthread_mutex_t*)( this + 0x1b0 );
   Dependency::deleted_notify((RID*)( lVar8 + 0x128 ));
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   if (uVar5 < *(uint*)( this + 0x19c )) {
      uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 );
      lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160;
      lVar8 = *(long*)( *(long*)( this + 0x188 ) + uVar6 * 8 ) + lVar9;
      if (*(int*)( lVar8 + 0x158 ) < 0) {
         pthread_mutex_unlock(__mutex);
         uVar6 = 0;
         _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
      }
 else if (iVar7 == *(int*)( lVar8 + 0x158 )) {
         Dependency::~Dependency((Dependency*)( lVar8 + 0x128 ));
         if (*(long*)( lVar8 + 0x120 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x120 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar8 + 0x120 );
               *(undefined8*)( lVar8 + 0x120 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar8 + 0x110 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x110 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar8 + 0x110 );
               *(undefined8*)( lVar8 + 0x110 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar8 + 0x100 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x100 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar8 + 0x100 );
               *(undefined8*)( lVar8 + 0x100 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (*(long*)( lVar8 + 0x78 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar8 + 0x78 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar8 + 0x78 );
               *(undefined8*)( lVar8 + 0x78 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         lVar8 = *(long*)( this + 400 );
         *(undefined4*)( *(long*)( *(long*)( this + 0x188 ) + uVar6 * 8 ) + 0x158 + lVar9 ) = 0xffffffff;
         uVar4 = *(int*)( this + 0x1a0 ) - 1;
         *(uint*)( this + 0x1a0 ) = uVar4;
         *(uint*)( *(long*)( lVar8 + ( (ulong)uVar4 / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) + ( (ulong)uVar4 % ( ulong ) * (uint*)( this + 0x198 ) ) * 4 ) = uVar5;
         uVar5 = pthread_mutex_unlock(__mutex);
         uVar6 = (ulong)uVar5;
      }
 else {
         pthread_mutex_unlock(__mutex);
         uVar6 = _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      }

   }
 else {
      pthread_mutex_unlock(__mutex);
      uVar6 = _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
   }

   return uVar6;
}
/* RendererRD::MeshStorage::_multimesh_get_aabb(RID) */undefined8 *RendererRD::MeshStorage::_multimesh_get_aabb(undefined8 *param_1, MeshStorage *param_2, ulong param_3) {
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
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x19c ) )) {
      lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 0x160 + *(long*)( *(long*)( param_2 + 0x188 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x198 ) ) * 8 );
      if (*(int*)( lVar4 + 0x158 ) == (int)( param_3 >> 0x20 )) {
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
         }
 else {
            uVar2 = *(undefined8*)( lVar4 + 0x38 );
            uVar1 = *(undefined8*)( lVar4 + 0x40 );
            *param_1 = *(undefined8*)( lVar4 + 0x30 );
            param_1[1] = uVar2;
            param_1[2] = uVar1;
         }

         goto LAB_00108c49;
      }

      if (*(int*)( lVar4 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_multimesh_get_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x885, "Parameter \"multimesh\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   LAB_00108c49:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::_update_dirty_skeletons() */void RendererRD::MeshStorage::_update_dirty_skeletons(MeshStorage *this) {
   long lVar1;
   undefined8 uVar2;
   lVar1 = *(long*)( this + 0x3e0 );
   while (lVar1 != 0) {
      if (*(int*)( lVar1 + 4 ) != 0) {
         uVar2 = RenderingDevice::get_singleton();
         RenderingDevice::buffer_update(uVar2, *(undefined8*)( lVar1 + 0x18 ), 0, *(int*)( lVar1 + 8 ) * 4, *(undefined8*)( lVar1 + 0x10 ));
      }

      *(undefined8*)( this + 0x3e0 ) = *(undefined8*)( lVar1 + 0x28 );
      Dependency::changed_notify(lVar1 + 0x60, 9);
      *(long*)( lVar1 + 0x58 ) = *(long*)( lVar1 + 0x58 ) + 1;
      *(undefined1*)( lVar1 + 0x20 ) = 0;
      *(undefined8*)( lVar1 + 0x28 ) = 0;
      lVar1 = *(long*)( this + 0x3e0 );
   }
;
   *(undefined8*)( this + 0x3e0 ) = 0;
   return;
}
/* RendererRD::MeshStorage::skeleton_free(RID) */void RendererRD::MeshStorage::skeleton_free(MeshStorage *this, ulong param_2) {
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
      if (uVar4 < *(uint*)( this + 0x3a4 )) {
         lVar6 = *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98;
         if (*(int*)( lVar6 + 0x90 ) == iVar5) goto LAB_00108e58;
         if (*(int*)( lVar6 + 0x90 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            lVar6 = 0;
            goto LAB_00108e58;
         }

      }

   }

   lVar6 = 0;
   LAB_00108e58:__mutex = (pthread_mutex_t*)( this + 0x3b8 );
   Dependency::deleted_notify((RID*)( lVar6 + 0x60 ));
   iVar2 = pthread_mutex_lock(__mutex);
   if (iVar2 == 0) {
      if (uVar4 < *(uint*)( this + 0x3a4 )) {
         uVar1 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 );
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98;
         lVar7 = *(long*)( *(long*)( this + 0x390 ) + uVar1 * 8 ) + lVar6;
         if (*(int*)( lVar7 + 0x90 ) < 0) {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
         }
 else if (iVar5 == *(int*)( lVar7 + 0x90 )) {
            Dependency::~Dependency((Dependency*)( lVar7 + 0x60 ));
            if (*(void**)( lVar7 + 0x10 ) != (void*)0x0) {
               if (*(int*)( lVar7 + 8 ) != 0) {
                  *(undefined4*)( lVar7 + 8 ) = 0;
               }

               Memory::free_static(*(void**)( lVar7 + 0x10 ), false);
            }

            lVar7 = *(long*)( this + 0x398 );
            *(undefined4*)( *(long*)( *(long*)( this + 0x390 ) + uVar1 * 8 ) + 0x90 + lVar6 ) = 0xffffffff;
            uVar3 = *(int*)( this + 0x3a8 ) - 1;
            *(uint*)( this + 0x3a8 ) = uVar3;
            *(uint*)( *(long*)( lVar7 + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 4 ) = uVar4;
            pthread_mutex_unlock(__mutex);
         }
 else {
            pthread_mutex_unlock(__mutex);
            _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
         }

      }
 else {
         pthread_mutex_unlock(__mutex);
         _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      }

      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar2);
}
/* RendererRD::MeshStorage::mesh_instance_free(RID) */long RendererRD::MeshStorage::mesh_instance_free(MeshStorage *this, ulong param_2) {
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
      if (uVar12 < *(uint*)( this + 0x124 )) {
         pMVar13 = (MeshInstance*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 ) );
         iVar1 = *(int*)( pMVar13 + 0xa8 );
         if (iVar1 != (int)( param_2 >> 0x20 )) {
            lVar9 = mesh_instance_free();
            return lVar9;
         }

         while (*(int*)( pMVar13 + 0x10 ) != 0) {
            _mesh_instance_remove_surface(this, pMVar13, *(int*)( pMVar13 + 0x10 ) + -1);
         }
;
         lVar9 = *(long*)pMVar13;
         pvVar3 = *(void**)( pMVar13 + 0x38 );
         pMVar13[0x48] = (MeshInstance)0x0;
         plVar4 = *(long**)( lVar9 + 0x68 );
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
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

            if (*(int*)( (long)*(void**)( lVar9 + 0x68 ) + 0x10 ) == 0) {
               Memory::free_static(*(void**)( lVar9 + 0x68 ), false);
               *(undefined8*)( lVar9 + 0x68 ) = 0;
            }

         }

         *(undefined8*)( pMVar13 + 0x38 ) = 0;
         if (uVar12 < *(uint*)( this + 0x124 )) {
            uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 );
            lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0;
            pMVar13 = (MeshInstance*)( *(long*)( *(long*)( this + 0x110 ) + uVar6 * 8 ) + lVar9 );
            iVar2 = *(int*)( pMVar13 + 0xa8 );
            if (iVar2 < 0) {
               lStack_58 = 0;
               _err_print_error(&_LC123, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
            }
 else {
               if (iVar2 != iVar1) {
                  uVar11 = 0x171;
                  goto LAB_0010925a;
               }

               MeshInstance::~MeshInstance(pMVar13);
               lVar10 = *(long*)( this + 0x118 );
               *(undefined4*)( *(long*)( *(long*)( this + 0x110 ) + uVar6 * 8 ) + 0xa8 + lVar9 ) = 0xffffffff;
               uVar8 = *(int*)( this + 0x128 ) - 1;
               *(uint*)( this + 0x128 ) = uVar8;
               lStack_58 = *(long*)( lVar10 + ( (ulong)uVar8 / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 );
               *(uint*)( lStack_58 + ( (ulong)uVar8 % ( ulong ) * (uint*)( this + 0x120 ) ) * 4 ) = uVar12;
            }

            return lStack_58;
         }

         uVar11 = 0x161;
         LAB_0010925a:lVar9 = _err_print_error(&_LC123, "./core/templates/rid_owner.h", uVar11, "Method/function failed.", 0, 0);
         return lVar9;
      }

   }

   /* WARNING: Does not return */
   pcVar7 = (code*)invalidInstructionException();
   ( *pcVar7 )();
}
/* RendererRD::MeshStorage::mesh_set_shadow_mesh(RID, RID) */void RendererRD::MeshStorage::mesh_set_shadow_mesh(MeshStorage *this, ulong param_2, ulong param_3) {
   uint *puVar1;
   uint *puVar2;
   undefined4 *puVar3;
   undefined4 *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
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
   ulong uVar32;
   uint *puVar33;
   int iVar34;
   uint uVar35;
   long lVar36;
   long lVar37;
   ulong uVar38;
   long lVar39;
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
      _err_print_error("mesh_set_shadow_mesh", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x335, "Condition \"p_mesh == p_shadow_mesh\" is true.", "Cannot set a mesh as its own shadow mesh.", 0, 0);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
         lVar39 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
         if (*(int*)( lVar39 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
            if (*(long*)( lVar39 + 0x70 ) != 0) {
               uVar32 = *(ulong*)( lVar39 + 0x70 );
               if ((uint)uVar32 < *(uint*)( this + 0xcc )) {
                  lVar36 = ( ( uVar32 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( uVar32 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
                  if (*(int*)( lVar36 + 0xd8 ) == (int)( uVar32 >> 0x20 )) {
                     lVar6 = *(long*)( lVar36 + 0x78 );
                     if (( lVar6 != 0 ) && ( *(int*)( lVar36 + 0x9c ) != 0 )) {
                        lVar7 = *(long*)( lVar36 + 0x90 );
                        uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar36 + 0x98 ) * 4 );
                        lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar36 + 0x98 ) * 8 );
                        uVar42 = CONCAT44(0, uVar31);
                        uVar32 = lVar39 * 0x3ffff - 1;
                        uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
                        uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
                        uVar32 = uVar32 >> 0x16 ^ uVar32;
                        uVar43 = uVar32 & 0xffffffff;
                        if ((int)uVar32 == 0) {
                           uVar43 = 1;
                        }

                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = uVar43 * lVar8;
                        auVar21._8_8_ = 0;
                        auVar21._0_8_ = uVar42;
                        lVar37 = SUB168(auVar11 * auVar21, 8);
                        uVar45 = *(uint*)( lVar7 + lVar37 * 4 );
                        iVar34 = SUB164(auVar11 * auVar21, 8);
                        if (uVar45 != 0) {
                           uVar41 = 0;
                           LAB_0010950d:if (uVar45 != (uint)uVar43) goto LAB_001094c0;
                           lVar9 = *(long*)( lVar36 + 0x80 );
                           uVar45 = *(uint*)( lVar9 + lVar37 * 4 );
                           uVar32 = (ulong)uVar45;
                           if (*(long*)( lVar6 + uVar32 * 8 ) != lVar39) goto LAB_001094c0;
                           lVar10 = *(long*)( lVar36 + 0x88 );
                           puVar1 = (uint*)( lVar10 + uVar32 * 4 );
                           uVar41 = *puVar1;
                           uVar43 = (ulong)uVar41;
                           auVar15._8_8_ = 0;
                           auVar15._0_8_ = ( ulong )(uVar41 + 1) * lVar8;
                           auVar25._8_8_ = 0;
                           auVar25._0_8_ = uVar42;
                           lVar37 = SUB168(auVar15 * auVar25, 8) * 4;
                           uVar35 = SUB164(auVar15 * auVar25, 8);
                           uVar46 = (ulong)uVar35;
                           puVar44 = (uint*)( lVar7 + lVar37 );
                           if (( *puVar44 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar44 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar31 + uVar35 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,SUB164(auVar17 * auVar27, 8) == 0) {
                              uVar46 = (ulong)uVar41;
                           }
 else {
                              while (true) {
                                 puVar33 = (uint*)( lVar37 + lVar9 );
                                 puVar2 = (uint*)( lVar9 + uVar43 * 4 );
                                 puVar40 = (uint*)( uVar43 * 4 + lVar7 );
                                 puVar3 = (undefined4*)( lVar10 + ( ulong ) * puVar33 * 4 );
                                 puVar4 = (undefined4*)( lVar10 + ( ulong ) * puVar2 * 4 );
                                 uVar5 = *puVar4;
                                 *puVar4 = *puVar3;
                                 *puVar3 = uVar5;
                                 uVar41 = *puVar44;
                                 *puVar44 = *puVar40;
                                 *puVar40 = uVar41;
                                 uVar41 = *puVar33;
                                 *puVar33 = *puVar2;
                                 *puVar2 = uVar41;
                                 auVar20._8_8_ = 0;
                                 auVar20._0_8_ = ( ulong )((int)uVar46 + 1) * lVar8;
                                 auVar30._8_8_ = 0;
                                 auVar30._0_8_ = uVar42;
                                 uVar38 = SUB168(auVar20 * auVar30, 8);
                                 lVar37 = uVar38 * 4;
                                 puVar44 = (uint*)( lVar7 + lVar37 );
                                 if (( *puVar44 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar44 * lVar8,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar30, 8) + uVar31 ) - SUB164(auVar18 * auVar28, 8)) * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,SUB164(auVar19 * auVar29, 8) == 0) break;
                                 uVar43 = uVar46;
                                 uVar46 = uVar38 & 0xffffffff;
                              }
;
                           }

                           *(undefined4*)( lVar7 + uVar46 * 4 ) = 0;
                           uVar31 = *(int*)( lVar36 + 0x9c ) - 1;
                           *(uint*)( lVar36 + 0x9c ) = uVar31;
                           if (uVar45 < uVar31) {
                              uVar41 = *(uint*)( lVar10 + (ulong)uVar31 * 4 );
                              *(undefined8*)( lVar6 + uVar32 * 8 ) = *(undefined8*)( lVar6 + (ulong)uVar31 * 8 );
                              *puVar1 = uVar41;
                              *(uint*)( lVar9 + ( ulong ) * (uint*)( lVar10 + ( ulong ) * (uint*)( lVar36 + 0x9c ) * 4 ) * 4 ) = uVar45;
                           }

                        }

                     }

                  }
 else if (*(int*)( lVar36 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            LAB_00109688:*(ulong*)( lVar39 + 0x70 ) = param_3;
            if (param_3 != 0) {
               uVar32 = *(ulong*)( lVar39 + 0x70 );
               if ((uint)uVar32 < *(uint*)( this + 0xcc )) {
                  iVar34 = *(int*)( ( ( uVar32 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( uVar32 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) + 0xd8 );
                  if (iVar34 == (int)( uVar32 >> 0x20 )) {
                     HashSet<RendererRD::MeshStorage::Mesh*,HashMapHasherDefault,HashMapComparatorDefault<RendererRD::MeshStorage::Mesh*>>::insert(local_58);
                  }
 else if (iVar34 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Dependency::changed_notify(lVar39 + 0xa8, 2);
               return;
            }

            goto LAB_001098f8;
         }

         if (*(int*)( lVar39 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("mesh_set_shadow_mesh", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x337, "Parameter \"mesh\" is null.", 0, 0);
         return;
      }

   }

   LAB_001098f8:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_001094c0:uVar41 = uVar41 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar34 + 1) * lVar8;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar42;
   lVar37 = SUB168(auVar12 * auVar22, 8);
   uVar45 = *(uint*)( lVar7 + lVar37 * 4 );
   iVar34 = SUB164(auVar12 * auVar22, 8);
   if (( uVar45 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar45 * lVar8,auVar23._8_8_ = 0,auVar23._0_8_ = uVar42,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar31 + iVar34 ) - SUB164(auVar13 * auVar23, 8)) * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,SUB164(auVar14 * auVar24, 8) < uVar41) goto LAB_00109688;
   goto LAB_0010950d;
}
/* RendererRD::MeshStorage::_multimesh_instance_set_transform(RID, int, Transform3D const&) */void RendererRD::MeshStorage::_multimesh_instance_set_transform(MeshStorage *this, ulong param_2, int param_3, undefined4 *param_4) {
   long *plVar1;
   undefined4 *puVar2;
   char cVar3;
   int iVar4;
   uint uVar5;
   int iVar6;
   int iVar7;
   void *pvVar8;
   long lVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   long lVar12;
   uint uVar13;
   size_t __n;
   char *pcVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   CowData<float> *local_88;
   undefined1 local_58[8];
   void *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      lVar17 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 );
      if (*(int*)( lVar17 + 0x158 ) == (int)( param_2 >> 0x20 )) {
         iVar7 = *(int*)( lVar17 + 8 );
         if (( param_3 < 0 ) || ( iVar7 <= param_3 )) {
            _err_print_index_error("_multimesh_instance_set_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x721, (long)param_3, (long)iVar7, "p_index", "multimesh->instances", "", false, false);
         }
 else {
            if (*(int*)( lVar17 + 0xc ) != 1) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar10 = 0x722;
                  pcVar14 = "Condition \"multimesh->xform_format != RenderingServer::MULTIMESH_TRANSFORM_3D\" is true.";
                  goto LAB_0010a046;
               }

               goto LAB_0010a2bf;
            }

            if (( *(long*)( lVar17 + 0x78 ) == 0 ) || ( *(long*)( *(long*)( lVar17 + 0x78 ) + -8 ) < 1 )) {
               uVar15 = iVar7 * *(int*)( lVar17 + 0x60 );
               if (*(char*)( lVar17 + 0x4b ) != '\0') {
                  uVar15 = uVar15 * 2;
               }

               CowData<float>::resize<false>((CowData<float>*)( lVar17 + 0x78 ), (ulong)uVar15);
               CowData<float>::_copy_on_write((CowData<float>*)( lVar17 + 0x78 ));
               pvVar8 = *(void**)( lVar17 + 0x78 );
               if (*(char*)( lVar17 + 0x49 ) == '\0') {
                  memset(pvVar8, 0, (ulong)uVar15 * 4);
               }
 else {
                  uVar10 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_get_data(local_58, uVar10, *(undefined8*)( lVar17 + 0xa0 ), 0, 0);
                  if (local_50 == (void*)0x0) {
                     __n = 0;
                  }
 else {
                     __n = *(size_t*)( (long)local_50 + -8 );
                  }

                  memcpy(pvVar8, local_50, __n);
                  pvVar8 = local_50;
                  if (local_50 != (void*)0x0) {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_50 = (void*)0x0;
                        Memory::free_static((void*)( (long)pvVar8 + -0x10 ), false);
                     }

                  }

               }

               iVar6 = *(int*)( lVar17 + 8 ) + 0x1ff;
               iVar7 = *(int*)( lVar17 + 8 ) + 0x3fe;
               if (-1 < iVar6) {
                  iVar7 = iVar6;
               }

               uVar18 = ( ulong )(uint)(iVar7 >> 9);
               if (uVar18 == 0) {
                  *(undefined8*)( lVar17 + 0x80 ) = 0;
                  pvVar8 = (void*)0x0;
                  *(undefined4*)( lVar17 + 0x88 ) = 0;
               }
 else {
                  pvVar8 = (void*)Memory::alloc_static(uVar18, true);
                  if (pvVar8 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     *(undefined8*)( lVar17 + 0x80 ) = 0;
                     memset((void*)0x0, 0, uVar18);
                  }
 else {
                     *(ulong*)( (long)pvVar8 + -8 ) = uVar18;
                     *(void**)( lVar17 + 0x80 ) = pvVar8;
                     memset(pvVar8, 0, uVar18);
                  }

                  *(undefined4*)( lVar17 + 0x88 ) = 0;
                  pvVar8 = (void*)Memory::alloc_static(uVar18, true);
                  if (pvVar8 == (void*)0x0) {
                     _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     pvVar8 = (void*)0x0;
                  }
 else {
                     *(ulong*)( (long)pvVar8 + -8 ) = uVar18;
                  }

               }

               *(void**)( lVar17 + 0x90 ) = pvVar8;
               memset(pvVar8, 0, uVar18);
               *(undefined4*)( lVar17 + 0x98 ) = 0;
            }

            local_88 = (CowData<float>*)( lVar17 + 0x78 );
            iVar7 = RendererViewport::get_num_viewports_with_motion_vectors();
            if (iVar7 < 1) {
               if (0 < *(int*)( RendererCompositorStorage::singleton + 8 )) {
                  cVar3 = *(char*)( lVar17 + 0x4b );
                  lVar12 = *(long*)( lVar17 + 0x78 );
                  goto joined_r0x00109e05;
               }

            }
 else {
               cVar3 = *(char*)( lVar17 + 0x4b );
               lVar12 = *(long*)( lVar17 + 0x78 );
               joined_r0x00109e05:if (cVar3 == '\0') {
                  *(undefined1*)( lVar17 + 0x4b ) = 1;
                  *(undefined8*)( lVar17 + 0x4c ) = 0;
                  *(undefined8*)( lVar17 + 0x58 ) = 0xffffffffffffffff;
                  if (lVar12 != 0) {
                     local_50 = (void*)0x0;
                     plVar1 = (long*)( lVar12 + -0x10 );
                     do {
                        lVar12 = *plVar1;
                        if (lVar12 == 0) goto LAB_00109b28;
                        LOCK();
                        lVar9 = *plVar1;
                        bVar20 = lVar12 == lVar9;
                        if (bVar20) {
                           *plVar1 = lVar12 + 1;
                           lVar9 = lVar12;
                        }

                        UNLOCK();
                     }
 while ( !bVar20 );
                     if (lVar9 != -1) {
                        local_50 = *(void**)( lVar17 + 0x78 );
                     }

                     LAB_00109b28:pvVar8 = local_50;
                     Vector<float>::append_array((Vector<float>*)( lVar17 + 0x70 ));
                     if (pvVar8 != (void*)0x0) {
                        LOCK();
                        plVar1 = (long*)( (long)pvVar8 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static((void*)( (long)local_50 + -0x10 ), false);
                        }

                     }

                  }

                  iVar7 = *(int*)( lVar17 + 8 ) * *(int*)( lVar17 + 0x60 );
                  uVar15 = iVar7 * 8;
                  uVar10 = RenderingDevice::get_singleton();
                  local_50 = (void*)0x0;
                  uVar10 = RenderingDevice::storage_buffer_create(uVar10, uVar15, local_58, 0, 0);
                  pvVar8 = local_50;
                  if (local_50 == (void*)0x0) {
                     LAB_00109ba6:lVar12 = *(long*)( lVar17 + 0x78 );
                     if (*(char*)( lVar17 + 0x49 ) != '\0') goto LAB_00109bb3;
                     LAB_00109c10:if (lVar12 != 0) goto LAB_00109bbc;
                     LAB_00109c15:lVar12 = *(long*)( lVar17 + 0xa0 );
                  }
 else {
                     LOCK();
                     plVar1 = (long*)( (long)local_50 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 != 0) goto LAB_00109ba6;
                     local_50 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar8 + -0x10 ), false);
                     lVar12 = *(long*)( lVar17 + 0x78 );
                     if (*(char*)( lVar17 + 0x49 ) == '\0') goto LAB_00109c10;
                     LAB_00109bb3:if (lVar12 == 0) {
                        uVar11 = RenderingDevice::get_singleton();
                        iVar7 = iVar7 * 4;
                        RenderingDevice::buffer_copy(uVar11, *(undefined8*)( lVar17 + 0xa0 ), uVar10, 0, 0, iVar7);
                        uVar11 = RenderingDevice::get_singleton();
                        RenderingDevice::buffer_copy(uVar11, *(undefined8*)( lVar17 + 0xa0 ), uVar10, 0, iVar7, iVar7);
                        goto LAB_00109c15;
                     }

                     LAB_00109bbc:if (*(long*)( lVar12 + -8 ) << 2 != (ulong)uVar15) {
                        _err_print_error("_multimesh_enable_motion_vectors", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x623, "Condition \"multimesh->data_cache.size() * sizeof(float) != size_t(new_buffer_size)\" is true.", 0, 0);
                        goto LAB_00109c46;
                     }

                     uVar11 = RenderingDevice::get_singleton();
                     RenderingDevice::buffer_update(uVar11, uVar10, 0, uVar15, *(undefined8*)( lVar17 + 0x78 ));
                     lVar12 = *(long*)( lVar17 + 0xa0 );
                  }

                  if (lVar12 != 0) {
                     uVar11 = RenderingDevice::get_singleton();
                     RenderingDevice::free(uVar11, *(undefined8*)( lVar17 + 0xa0 ));
                  }

                  *(undefined8*)( lVar17 + 0xa0 ) = uVar10;
                  *(undefined8*)( lVar17 + 0xa8 ) = 0;
                  Dependency::changed_notify(lVar17 + 0x128, 3);
               }

            }

            LAB_00109c46:if (*(long*)( lVar17 + 0x78 ) == 0) {
               _err_print_error("_multimesh_update_motion_vectors_data_cache", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6a2, "Condition \"multimesh->data_cache.is_empty()\" is true.", 0, 0);
            }
 else if (*(char*)( lVar17 + 0x4b ) != '\0') {
               uVar15 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
               if (*(ulong*)( lVar17 + 0x58 ) != (ulong)uVar15) {
                  *(ulong*)( lVar17 + 0x58 ) = (ulong)uVar15;
                  *(ulong*)( lVar17 + 0x4c ) = CONCAT44(*(int*)( lVar17 + 0x4c ), *(int*)( lVar17 + 8 ) - *(int*)( lVar17 + 0x4c ));
                  if (*(int*)( lVar17 + 0x98 ) != 0) {
                     CowData<float>::_copy_on_write(local_88);
                     iVar7 = *(int*)( lVar17 + 0x14 );
                     if (iVar7 < 0) {
                        if (*(int*)( lVar17 + 8 ) != 0) {
                           iVar6 = *(int*)( lVar17 + 0x60 );
                           iVar7 = *(int*)( lVar17 + 8 ) * iVar6;
                           uVar15 = *(int*)( lVar17 + 8 ) + 0x1ffU >> 9;
                           if (uVar15 != 0) goto LAB_00109efd;
                        }

                     }
 else if (iVar7 != 0) {
                        iVar6 = *(int*)( lVar17 + 0x60 );
                        uVar15 = iVar7 + 0x1ffU >> 9;
                        iVar7 = *(int*)( lVar17 + 8 ) * iVar6;
                        LAB_00109efd:uVar19 = iVar7 * 4;
                        uVar16 = iVar6 * 0x800;
                        iVar7 = *(int*)( lVar17 + 0x4c );
                        lVar12 = *(long*)( lVar17 + 0x78 );
                        uVar18 = 0;
                        iVar4 = *(int*)( lVar17 + 0x50 );
                        uVar13 = 0;
                        do {
                           if (*(char*)( *(long*)( lVar17 + 0x90 ) + uVar18 ) != '\0') {
                              uVar5 = uVar19;
                              if (uVar16 <= uVar19) {
                                 uVar5 = uVar16;
                              }

                              memcpy((void*)( ( ulong )(uint)(iVar7 * iVar6 * 4) + (ulong)uVar13 + lVar12 ), (void*)( ( ulong )(uint)(iVar6 * iVar4 * 4) + (ulong)uVar13 + lVar12 ), (ulong)uVar5);
                           }

                           uVar18 = uVar18 + 1;
                           uVar19 = uVar19 + iVar6 * -0x800;
                           uVar13 = uVar13 + uVar16;
                        }
 while ( uVar18 != uVar15 );
                     }

                  }

               }

            }

            CowData<float>::_copy_on_write(local_88);
            uVar15 = param_3 >> 9;
            puVar2 = (undefined4*)( *(long*)( lVar17 + 0x78 ) + ( ulong )(uint)(( *(int*)( lVar17 + 0x4c ) + param_3 ) * *(int*)( lVar17 + 0x60 )) * 4 );
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
            iVar6 = *(int*)( lVar17 + 8 ) + 0x1ff;
            iVar7 = *(int*)( lVar17 + 8 ) + 0x3fe;
            if (-1 < iVar6) {
               iVar7 = iVar6;
            }

            if (uVar15 < ( uint )(iVar7 >> 9)) {
               pcVar14 = (char*)( (long)(int)uVar15 + *(long*)( lVar17 + 0x80 ) );
               if (*pcVar14 == '\0') {
                  *pcVar14 = '\x01';
                  *(int*)( lVar17 + 0x88 ) = *(int*)( lVar17 + 0x88 ) + 1;
               }

               *(undefined1*)( lVar17 + 0x48 ) = 1;
               if (*(char*)( lVar17 + 0xc0 ) == '\0') {
                  *(undefined8*)( lVar17 + 200 ) = *(undefined8*)( this + 0x1d8 );
                  *(long*)( this + 0x1d8 ) = lVar17;
                  *(undefined1*)( lVar17 + 0xc0 ) = 1;
               }

            }
 else {
               _err_print_index_error("_multimesh_mark_dirty", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6c8, (long)(int)uVar15, (long)( iVar7 >> 9 ), "region_index", "data_cache_dirty_region_count", "", false, false);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010a2bf;
      }

      if (*(int*)( lVar17 + 0x158 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar10 = 0x720;
      pcVar14 = "Parameter \"multimesh\" is null.";
      LAB_0010a046:_err_print_error("_multimesh_instance_set_transform", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar10, pcVar14, 0, 0);
      return;
   }

   LAB_0010a2bf:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::_multimesh_set_buffer(RID, Vector<float> const&) */void RendererRD::MeshStorage::_multimesh_set_buffer(MeshStorage *this, ulong param_2, long param_3) {
   long *plVar1;
   undefined8 *puVar2;
   void *__src;
   float fVar3;
   char *pcVar4;
   char cVar5;
   char cVar6;
   int iVar7;
   undefined8 uVar8;
   long lVar9;
   undefined8 uVar10;
   char *pcVar11;
   long lVar12;
   char *pcVar13;
   int iVar14;
   char *pcVar15;
   long lVar16;
   size_t __n;
   long lVar17;
   AABB *pAVar18;
   long *plVar19;
   uint uVar20;
   long in_FS_OFFSET;
   bool bVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   undefined1 local_128[8];
   long local_120;
   undefined8 local_118;
   float local_110;
   undefined8 local_108;
   float local_100;
   long local_f8;
   float local_f0;
   undefined8 local_e8;
   float local_e0;
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
   undefined8 local_54;
   undefined4 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      plVar19 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) );
      if ((int)plVar19[0x2b] == (int)( param_2 >> 0x20 )) {
         if (*(long*)( param_3 + 8 ) == 0) {
            lVar16 = 0;
         }
 else {
            lVar16 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         }

         if ((int)plVar19[1] * (int)plVar19[0xc] != lVar16) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = 0x803;
               pcVar13 = "Condition \"p_buffer.size() != (multimesh->instances * (int)multimesh->stride_cache)\" is true.";
               goto LAB_0010ab39;
            }

            goto LAB_0010ae23;
         }

         cVar6 = *(char*)( (long)plVar19 + 0x4b );
         iVar7 = RendererViewport::get_num_viewports_with_motion_vectors();
         if (iVar7 < 1) {
            if (0 < *(int*)( RendererCompositorStorage::singleton + 8 )) {
               cVar5 = *(char*)( (long)plVar19 + 0x4b );
               goto joined_r0x0010a5d7;
            }

            LAB_0010a4ea:cVar5 = *(char*)( (long)plVar19 + 0x4b );
            LAB_0010a4ef:if (cVar5 != '\0') goto LAB_0010a4f3;
         }
 else {
            cVar5 = *(char*)( (long)plVar19 + 0x4b );
            joined_r0x0010a5d7:if (cVar5 == '\0') {
               *(undefined1*)( (long)plVar19 + 0x4b ) = 1;
               *(undefined8*)( (long)plVar19 + 0x4c ) = 0;
               plVar19[0xb] = -1;
               if (plVar19[0xf] != 0) {
                  local_120 = 0;
                  plVar1 = (long*)( plVar19[0xf] + -0x10 );
                  do {
                     lVar16 = *plVar1;
                     if (lVar16 == 0) goto LAB_0010a3f8;
                     LOCK();
                     lVar9 = *plVar1;
                     bVar21 = lVar16 == lVar9;
                     if (bVar21) {
                        *plVar1 = lVar16 + 1;
                        lVar9 = lVar16;
                     }

                     UNLOCK();
                  }
 while ( !bVar21 );
                  if (lVar9 != -1) {
                     local_120 = plVar19[0xf];
                  }

                  LAB_0010a3f8:lVar16 = local_120;
                  Vector<float>::append_array((Vector<float>*)( plVar19 + 0xe ));
                  if (lVar16 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar16 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_120 + -0x10 ), false);
                     }

                  }

               }

               iVar7 = (int)plVar19[1] * (int)plVar19[0xc];
               uVar20 = iVar7 * 8;
               uVar8 = RenderingDevice::get_singleton();
               local_120 = 0;
               lVar9 = RenderingDevice::storage_buffer_create(uVar8, uVar20, local_128, 0, 0);
               lVar16 = local_120;
               if (local_120 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_120 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_120 = 0;
                     Memory::free_static((void*)( lVar16 + -0x10 ), false);
                  }

               }

               lVar16 = plVar19[0xf];
               if (*(char*)( (long)plVar19 + 0x49 ) == '\0') {
                  if (lVar16 != 0) goto LAB_0010a48c;
                  lVar16 = plVar19[0x14];
                  joined_r0x0010a6b9:if (lVar16 != 0) {
                     uVar8 = RenderingDevice::get_singleton();
                     RenderingDevice::free(uVar8, plVar19[0x14]);
                  }

                  plVar19[0x14] = lVar9;
                  plVar19[0x15] = 0;
                  Dependency::changed_notify(plVar19 + 0x25, 3);
                  goto LAB_0010a4ea;
               }

               if (lVar16 == 0) {
                  uVar8 = RenderingDevice::get_singleton();
                  iVar7 = iVar7 * 4;
                  RenderingDevice::buffer_copy(uVar8, plVar19[0x14], lVar9, 0, 0, iVar7);
                  uVar8 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_copy(uVar8, plVar19[0x14], lVar9, 0, iVar7, iVar7);
                  LAB_0010a4b9:lVar16 = plVar19[0x14];
                  goto joined_r0x0010a6b9;
               }

               LAB_0010a48c:if (*(long*)( lVar16 + -8 ) << 2 == (ulong)uVar20) {
                  uVar8 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_update(uVar8, lVar9, 0, uVar20, plVar19[0xf]);
                  goto LAB_0010a4b9;
               }

               _err_print_error("_multimesh_enable_motion_vectors", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x623, "Condition \"multimesh->data_cache.size() * sizeof(float) != size_t(new_buffer_size)\" is true.", 0, 0);
               cVar5 = *(char*)( (long)plVar19 + 0x4b );
               goto LAB_0010a4ef;
            }

            LAB_0010a4f3:uVar20 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
            if (plVar19[0xb] != (ulong)uVar20) {
               plVar19[0xb] = (ulong)uVar20;
               *(ulong*)( (long)plVar19 + 0x4c ) = CONCAT44(*(int*)( (long)plVar19 + 0x4c ), (int)plVar19[1] - *(int*)( (long)plVar19 + 0x4c ));
            }

         }

         uVar8 = *(undefined8*)( param_3 + 8 );
         uVar10 = RenderingDevice::get_singleton();
         if (*(long*)( param_3 + 8 ) == 0) {
            iVar7 = 0;
         }
 else {
            iVar7 = (int)*(undefined8*)( *(long*)( param_3 + 8 ) + -8 ) << 2;
         }

         RenderingDevice::buffer_update(uVar10, plVar19[0x14], *(int*)( (long)plVar19 + 0x4c ) * (int)plVar19[0xc] * 4, iVar7, uVar8);
         if (( *(char*)( (long)plVar19 + 0x4b ) == '\x01' ) && ( cVar6 == '\0' )) {
            uVar10 = RenderingDevice::get_singleton();
            if (*(long*)( param_3 + 8 ) == 0) {
               iVar7 = 0;
            }
 else {
               iVar7 = (int)*(undefined8*)( *(long*)( param_3 + 8 ) + -8 ) << 2;
            }

            RenderingDevice::buffer_update(uVar10, plVar19[0x14], (int)plVar19[10] * (int)plVar19[0xc] * 4, iVar7, uVar8);
         }

         *(undefined1*)( (long)plVar19 + 0x49 ) = 1;
         if (( plVar19[0xf] == 0 ) || ( *(long*)( plVar19[0xf] + -8 ) == 0 )) {
            if (*plVar19 != 0) {
               lVar16 = *(long*)( param_3 + 8 );
               local_78 = 0;
               uStack_74 = 0;
               uStack_70 = 0;
               uStack_6c = 0;
               uStack_68 = 0;
               uStack_64 = 0;
               cVar6 = AABB::operator ==((AABB*)( plVar19 + 6 ), (AABB*)&local_78);
               if (cVar6 != '\0') {
                  lVar9 = plVar19[1];
                  if (*plVar19 == 0) {
                     _err_print_error("_multimesh_re_create_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6f2, "Condition \"multimesh->mesh.is_null()\" is true.", 0, 0);
                  }
 else {
                     local_78 = 0;
                     uStack_74 = 0;
                     uStack_70 = 0;
                     uStack_6c = 0;
                     uStack_68 = 0;
                     uStack_64 = 0;
                     cVar6 = AABB::operator !=((AABB*)( plVar19 + 6 ), (AABB*)&local_78);
                     if (cVar6 == '\0') {
                        local_d8 = 0;
                        fStack_d0 = 0.0;
                        fStack_cc = 0.0;
                        fStack_c8 = 0.0;
                        fStack_c4 = 0.0;
                        ( **(code**)( *(long*)this + 0x98 ) )(&local_b8, this, *plVar19);
                        if (0 < (int)lVar9) {
                           iVar7 = 0;
                           uVar8 = __LC134;
                           uVar10 = _UNK_0011d538;
                           do {
                              uStack_70 = ( undefined4 )((ulong)uVar8 >> 0x20);
                              local_4c = 0;
                              puVar2 = (undefined8*)( lVar16 + ( ulong )(uint)(iVar7 * (int)plVar19[0xc]) * 4 );
                              uStack_64 = (undefined4)uVar8;
                              uStack_5c = (undefined4)uVar10;
                              uStack_58 = ( undefined4 )((ulong)uVar10 >> 0x20);
                              if (*(int*)( (long)plVar19 + 0xc ) == 1) {
                                 uStack_68 = *(undefined4*)( (long)puVar2 + 0x14 );
                                 uStack_64 = *(undefined4*)( puVar2 + 3 );
                                 uStack_60 = (undefined4)puVar2[4];
                                 uStack_5c = ( undefined4 )((ulong)puVar2[4] >> 0x20);
                                 uStack_58 = *(undefined4*)( puVar2 + 5 );
                                 local_4c = *(undefined4*)( (long)puVar2 + 0x2c );
                                 local_78 = ( undefined4 ) * puVar2;
                                 uStack_74 = ( undefined4 )(( ulong ) * puVar2 >> 0x20);
                                 uStack_70 = *(undefined4*)( puVar2 + 1 );
                                 uStack_6c = *(undefined4*)( puVar2 + 2 );
                              }
 else {
                                 local_78 = ( undefined4 ) * puVar2;
                                 uStack_74 = ( undefined4 )(( ulong ) * puVar2 >> 0x20);
                                 uStack_6c = (undefined4)puVar2[2];
                                 uStack_68 = ( undefined4 )((ulong)puVar2[2] >> 0x20);
                                 uStack_60 = uStack_70;
                              }

                              local_54 = CONCAT44(*(undefined4*)( (long)puVar2 + 0x1c ), *(undefined4*)( (long)puVar2 + 0xc ));
                              local_118 = local_b8;
                              local_108 = CONCAT44((float)( (ulong)local_ac >> 0x20 ) + (float)( (ulong)local_b8 >> 0x20 ), (float)local_ac + (float)local_b8);
                              local_110 = local_b0;
                              if (iVar7 == 0) {
                                 lVar17 = 0;
                                 local_f8 = 0;
                                 local_f0 = 0.0;
                                 local_e8 = 0;
                                 local_e0 = 0.0;
                                 local_100 = local_a4 + local_b0;
                                 pAVar18 = (AABB*)&local_78;
                                 do {
                                    fVar25 = *(float*)( (long)&local_54 + lVar17 );
                                    lVar12 = 0;
                                    fVar23 = fVar25;
                                    do {
                                       fVar24 = *(float*)( (long)&local_118 + lVar12 ) * *(float*)( pAVar18 + lVar12 );
                                       fVar22 = *(float*)( pAVar18 + lVar12 ) * *(float*)( (long)&local_108 + lVar12 );
                                       fVar3 = fVar24;
                                       if (fVar24 < fVar22) {
                                          fVar3 = fVar22;
                                          fVar22 = fVar24;
                                       }

                                       fVar23 = fVar23 + fVar22;
                                       fVar25 = fVar25 + fVar3;
                                       lVar12 = lVar12 + 4;
                                    }
 while ( lVar12 != 0xc );
                                    *(float*)( (long)&local_e8 + lVar17 ) = fVar25;
                                    pAVar18 = pAVar18 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar17 ) = fVar23;
                                    lVar17 = lVar17 + 4;
                                 }
 while ( lVar17 != 0xc );
                                 local_98 = local_f8;
                                 fStack_c4 = local_e0 - local_f0;
                                 fStack_cc = (float)local_e8 - (float)local_f8;
                                 fStack_c8 = (float)( (ulong)local_e8 >> 0x20 ) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 local_d8 = local_f8;
                                 fStack_d0 = local_f0;
                                 fStack_8c = fStack_cc;
                                 fStack_88 = fStack_c8;
                                 fStack_84 = fStack_c4;
                              }
 else {
                                 lVar17 = 0;
                                 local_f8 = 0;
                                 local_f0 = 0.0;
                                 local_e8 = 0;
                                 local_e0 = 0.0;
                                 local_100 = local_a4 + local_b0;
                                 pAVar18 = (AABB*)&local_78;
                                 do {
                                    fVar25 = *(float*)( (long)&local_54 + lVar17 );
                                    lVar12 = 0;
                                    fVar23 = fVar25;
                                    do {
                                       fVar24 = *(float*)( (long)&local_118 + lVar12 ) * *(float*)( pAVar18 + lVar12 );
                                       fVar22 = *(float*)( pAVar18 + lVar12 ) * *(float*)( (long)&local_108 + lVar12 );
                                       fVar3 = fVar24;
                                       if (fVar24 < fVar22) {
                                          fVar3 = fVar22;
                                          fVar22 = fVar24;
                                       }

                                       fVar23 = fVar23 + fVar22;
                                       fVar25 = fVar25 + fVar3;
                                       lVar12 = lVar12 + 4;
                                    }
 while ( lVar12 != 0xc );
                                    *(float*)( (long)&local_e8 + lVar17 ) = fVar25;
                                    pAVar18 = pAVar18 + 0xc;
                                    *(float*)( (long)&local_f8 + lVar17 ) = fVar23;
                                    lVar17 = lVar17 + 4;
                                 }
 while ( lVar17 != 0xc );
                                 fStack_84 = local_e0 - local_f0;
                                 local_98 = local_f8;
                                 fStack_8c = (float)local_e8 - (float)local_f8;
                                 fStack_88 = (float)( (ulong)local_e8 >> 0x20 ) - (float)( (ulong)local_f8 >> 0x20 );
                                 fStack_90 = local_f0;
                                 AABB::merge_with((AABB*)&local_d8);
                                 uVar8 = __LC134;
                                 uVar10 = _UNK_0011d538;
                              }

                              iVar7 = iVar7 + 1;
                           }
 while ( (int)lVar9 != iVar7 );
                        }

                        plVar19[5] = CONCAT44(fStack_c4, fStack_c8);
                        plVar19[3] = local_d8;
                        plVar19[4] = CONCAT44(fStack_cc, fStack_d0);
                     }

                  }

                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Dependency::changed_notify(plVar19 + 0x25, 0);
                     return;
                  }

                  goto LAB_0010ae23;
               }

            }

         }
 else {
            CowData<float>::_copy_on_write((CowData<float>*)( plVar19 + 0xf ));
            __src = *(void**)( param_3 + 8 );
            if (__src == (void*)0x0) {
               __n = 0;
            }
 else {
               __n = *(long*)( (long)__src + -8 ) * 4;
            }

            memcpy((void*)( plVar19[0xf] + ( ulong )(uint)(*(int*)( (long)plVar19 + 0x4c ) * (int)plVar19[0xc]) * 4 ), __src, __n);
            iVar14 = (int)plVar19[1] + 0x1ff;
            iVar7 = (int)plVar19[1] + 0x3fe;
            if (-1 < iVar14) {
               iVar7 = iVar14;
            }

            if (iVar7 >> 9 != 0) {
               pcVar13 = (char*)plVar19[0x10] + 1;
               pcVar4 = pcVar13;
               pcVar15 = (char*)plVar19[0x10];
               while (true) {
                  pcVar11 = pcVar4;
                  if (*pcVar15 == '\0') {
                     *pcVar15 = '\x01';
                     *(int*)( plVar19 + 0x11 ) = (int)plVar19[0x11] + 1;
                  }

                  if (pcVar11 == pcVar13 + ( ( iVar7 >> 9 ) - 1 )) break;
                  pcVar4 = pcVar11 + 1;
                  pcVar15 = pcVar11;
               }
;
            }

            *(undefined1*)( plVar19 + 9 ) = 1;
            if ((char)plVar19[0x18] == '\0') {
               plVar19[0x19] = *(long*)( this + 0x1d8 );
               *(long**)( this + 0x1d8 ) = plVar19;
               *(undefined1*)( plVar19 + 0x18 ) = 1;
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010ae23;
      }

      if ((int)plVar19[0x2b] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar8 = 0x802;
      pcVar13 = "Parameter \"multimesh\" is null.";
      LAB_0010ab39:_err_print_error("_multimesh_set_buffer", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar8, pcVar13, 0, 0);
      return;
   }

   LAB_0010ae23:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Vector<RID>::push_back(RID) [clone .isra.0] */void Vector<RID>::push_back(Vector<RID> *this, undefined8 param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<RID>::resize<false>((CowData<RID>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<RID>::_copy_on_write((CowData<RID>*)( this + 8 ));
            *(undefined8*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* RendererRD::MeshStorage::~MeshStorage() */void RendererRD::MeshStorage::~MeshStorage(MeshStorage *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   int iVar8;
   ulong uVar9;
   MeshInstance *this_00;
   Mesh *this_01;
   uint uVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   iVar8 = 0;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__MeshStorage_0011a798;
   do {
      uVar4 = RenderingDevice::get_singleton();
      lVar5 = (long)iVar8;
      iVar8 = iVar8 + 1;
      RenderingDevice::free(uVar4, *(undefined8*)( this + lVar5 * 8 + 0x50 ));
   }
 while ( iVar8 != 0xc );
   ShaderRD::version_free((ShaderRD*)( this + 0x1e0 ), *(undefined8*)( this + 0x358 ));
   uVar4 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar4, *(undefined8*)( this + 0x48 ));
   singleton = 0;
   RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::~RID_Alloc((RID_Alloc<RendererRD::MeshStorage::Skeleton,true>*)( this + 0x388 ));
   *(undefined***)( this + 0x1e0 ) = &PTR__SkeletonShaderRD_0011a6f8;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x1e0 ));
   RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::~RID_Alloc((RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>*)( this + 0x180 ));
   uVar10 = *(uint*)( this + 0x128 );
   *(undefined***)( this + 0x108 ) = &PTR__RID_Alloc_0011a738;
   if (uVar10 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x124 );
      uVar10 = *(uint*)( this + 0x120 );
      puVar7 = *(undefined8**)( this + 0x110 );
      LAB_0010b114:if (uVar10 <= (uint)uVar6) {
         lVar5 = 0;
         while (true) {
            Memory::free_static((void*)puVar7[lVar5], false);
            lVar2 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x118 ) + lVar2 ), false);
            if (( uint )(uVar6 / uVar10) <= (uint)lVar5) break;
            puVar7 = *(undefined8**)( this + 0x110 );
         }
;
         LAB_0010b15d:puVar7 = *(undefined8**)( this + 0x110 );
      }

   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar10);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      lVar5 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
            lVar5 = local_50;
         }

      }

      local_50 = lVar5;
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      uVar10 = *(uint*)( this + 0x120 );
      puVar7 = *(undefined8**)( this + 0x110 );
      if (*(int*)( this + 0x124 ) != 0) {
         uVar9 = 0;
         do {
            this_00 = (MeshInstance*)( ( uVar9 % (ulong)uVar10 ) * 0xb0 + puVar7[uVar9 / uVar10] );
            if (-1 < *(int*)( this_00 + 0xa8 )) {
               MeshInstance::~MeshInstance(this_00);
               uVar10 = *(uint*)( this + 0x120 );
               puVar7 = *(undefined8**)( this + 0x110 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x124 );
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 < uVar6 );
         goto LAB_0010b114;
      }

      if (uVar10 == 0) {
         Memory::free_static((void*)*puVar7, false);
         Memory::free_static((void*)**(undefined8**)( this + 0x118 ), false);
         goto LAB_0010b15d;
      }

   }

   if (puVar7 != (undefined8*)0x0) {
      Memory::free_static(puVar7, false);
      Memory::free_static(*(void**)( this + 0x118 ), false);
   }

   *(undefined***)( this + 0xb0 ) = &PTR__RID_Alloc_0011a718;
   uVar10 = *(uint*)( this + 0xd0 );
   if (uVar10 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0xcc );
      uVar10 = *(uint*)( this + 200 );
      puVar7 = *(undefined8**)( this + 0xb8 );
      LAB_0010b2b4:if ((uint)uVar6 < uVar10) goto LAB_0010b304;
      lVar5 = 0;
      while (true) {
         Memory::free_static((void*)puVar7[lVar5], false);
         lVar2 = lVar5 * 8;
         lVar5 = lVar5 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0xc0 ) + lVar2 ), false);
         if (( uint )(uVar6 / uVar10) <= (uint)lVar5) break;
         puVar7 = *(undefined8**)( this + 0xb8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar10);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      lVar5 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
            lVar5 = local_50;
         }

      }

      local_50 = lVar5;
      if (lVar5 != 0) {
         LOCK();
         plVar1 = (long*)( lVar5 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      uVar10 = *(uint*)( this + 200 );
      puVar7 = *(undefined8**)( this + 0xb8 );
      if (*(int*)( this + 0xcc ) != 0) {
         uVar9 = 0;
         do {
            this_01 = (Mesh*)( ( uVar9 % (ulong)uVar10 ) * 0xe0 + puVar7[uVar9 / uVar10] );
            if (-1 < *(int*)( this_01 + 0xd8 )) {
               Mesh::~Mesh(this_01);
               uVar10 = *(uint*)( this + 200 );
               puVar7 = *(undefined8**)( this + 0xb8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0xcc );
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 < uVar6 );
         goto LAB_0010b2b4;
      }

      if (uVar10 != 0) goto LAB_0010b304;
      Memory::free_static((void*)*puVar7, false);
      Memory::free_static((void*)**(undefined8**)( this + 0xc0 ), false);
   }

   puVar7 = *(undefined8**)( this + 0xb8 );
   LAB_0010b304:if (puVar7 != (undefined8*)0x0) {
      Memory::free_static(puVar7, false);
      Memory::free_static(*(void**)( this + 0xc0 ), false);
   }

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
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (*(int*)( this + 8 ) != 0) {
         *(undefined4*)( this + 8 ) = 0;
      }

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::~MeshStorage() */void RendererRD::MeshStorage::~MeshStorage(MeshStorage *this) {
   ~MeshStorage(this)
   ;;
   operator_delete(this, 1000);
   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
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
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] */void CowData<RenderingDevice::Uniform>::_copy_on_write(CowData<RenderingDevice::Uniform> *this) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
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

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 0x28 != 0) {
      uVar7 = lVar1 * 0x28 - 1;
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
      puVar5[1] = lVar1;
      puVar8 = puVar5 + 2;
      if (lVar1 != 0) {
         do {
            puVar6 = (undefined8*)( (long)puVar8 + *(long*)this + ( -0x10 - (long)puVar5 ) );
            *puVar8 = *puVar6;
            *(undefined1*)( puVar8 + 1 ) = *(undefined1*)( puVar6 + 1 );
            uVar2 = puVar6[2];
            puVar8[4] = 0;
            lVar3 = puVar6[4];
            puVar8[2] = uVar2;
            if (lVar3 != 0) {
               CowData<RID>::_ref((CowData<RID>*)( puVar8 + 4 ), (CowData*)( puVar6 + 4 ));
            }

            lVar9 = lVar9 + 1;
            puVar8 = puVar8 + 5;
         }
 while ( lVar1 != lVar9 );
      }

      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* RendererRD::MeshStorage::skeleton_update_dependency(RID, DependencyTracker*) */void RendererRD::MeshStorage::skeleton_update_dependency(MeshStorage *this, ulong param_2, Dependency *param_3) {
   long lVar1;
   int iVar2;
   undefined4 uVar3;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   Dependency *local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x3a4 )) {
         lVar1 = *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98;
         iVar2 = *(int*)( lVar1 + 0x90 );
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(local_48);
            uVar3 = *(undefined4*)( param_3 + 0x18 );
            local_48[0] = param_3;
            puVar4 = (undefined4*)HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::operator []((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)( lVar1 + 0x60 ), (DependencyTracker**)local_48);
            *puVar4 = uVar3;
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010b9e3;
         }

         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("skeleton_update_dependency", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x997, "Parameter \"skeleton\" is null.", 0, 0);
      return;
   }

   LAB_0010b9e3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<true>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<true>(CowData<unsigned_char> *this, long param_1) {
   long lVar1;
   long *plVar2;
   code *pcVar3;
   int iVar4;
   ulong uVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar6 = *(long*)this;
   if (lVar6 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar6 = 0;
   }
 else {
      lVar9 = *(long*)( lVar6 + -8 );
      if (param_1 == lVar9) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar6 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar6 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      lVar6 = 0;
      if (lVar9 != 0) {
         uVar5 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar6 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar1 = uVar5 + 1;
   if (param_1 <= lVar9) {
      if (( lVar1 != lVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      lVar6 = *(long*)this;
      if (lVar6 == 0) {
         FUN_0011365e();
         return;
      }

      goto LAB_0010bb20;
   }

   if (lVar1 == lVar6) {
      LAB_0010bb7c:puVar8 = *(undefined8**)this;
   }
 else {
      if (lVar9 != 0) {
         iVar4 = _realloc(this, lVar1);
         if (iVar4 != 0) {
            return;
         }

         goto LAB_0010bb7c;
      }

      puVar7 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar7 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return;
      }

      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8**)this = puVar8;
   }

   memset((void*)( (long)puVar8 + lVar9 ), 0, param_1 - lVar9);
   lVar6 = *(long*)this;
   if (lVar6 == 0) {
      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   LAB_0010bb20:*(long*)( lVar6 + -8 ) = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::_multimesh_set_mesh(RID, RID) */void RendererRD::MeshStorage::_multimesh_set_mesh(MeshStorage *this, ulong param_2, ulong param_3) {
   long *plVar1;
   undefined8 *puVar2;
   uint uVar3;
   float fVar4;
   ulong uVar5;
   char cVar6;
   undefined8 uVar7;
   ulong uVar8;
   char *pcVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   AABB *pAVar13;
   long lVar14;
   long lVar15;
   int iVar16;
   long lVar17;
   long lVar18;
   ulong *puVar19;
   long in_FS_OFFSET;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   undefined8 uVar24;
   long local_160;
   undefined1 local_128[8];
   long local_120;
   undefined8 local_118;
   float local_110;
   undefined8 local_108;
   float local_100;
   ulong local_f8;
   float local_f0;
   float local_e8[4];
   ulong local_d8;
   float fStack_d0;
   float fStack_cc;
   float fStack_c8;
   float fStack_c4;
   undefined8 local_b8;
   float local_b0;
   undefined8 local_ac;
   float local_a4;
   ulong local_98;
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
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x19c ) )) {
      puVar19 = (ulong*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x198 ) ) * 0x160 + *(long*)( *(long*)( this + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x198 ) ) * 8 ) );
      if ((int)puVar19[0x2b] == (int)( param_2 >> 0x20 )) {
         if (*puVar19 != param_3) {
            *puVar19 = param_3;
            if (*(char*)( (long)puVar19 + 0x4a ) != '\0') {
               if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0xcc ) )) {
                  lVar10 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 );
                  if (*(int*)( lVar10 + 0xd8 ) == (int)( param_3 >> 0x20 )) {
                     uVar3 = *(uint*)( lVar10 + 0x10 );
                     if (uVar3 != 0) {
                        if (puVar19[0x17] != 0) {
                           uVar7 = RenderingDevice::get_singleton();
                           RenderingDevice::free(uVar7, puVar19[0x17]);
                           uVar3 = *(uint*)( lVar10 + 0x10 );
                        }

                        local_120 = 0;
                        CowData<unsigned_char>::resize<true>((CowData<unsigned_char>*)&local_120, (ulong)uVar3 * 0x14);
                        if (*(int*)( lVar10 + 0x10 ) != 0) {
                           lVar15 = 0;
                           lVar12 = 0;
                           local_160 = 3;
                           lVar17 = 1;
                           lVar18 = 2;
                           do {
                              lVar14 = *(long*)( *(long*)( lVar10 + 8 ) + lVar12 * 8 );
                              iVar11 = *(int*)( lVar14 + 0x98 );
                              if (iVar11 == 0) {
                                 iVar11 = *(int*)( lVar14 + 0x28 );
                              }

                              if (local_120 == 0) {
                                 lVar14 = 0;
                                 LAB_0010c3eb:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar15, lVar14, "p_index", "size()", "", false, false);
                              }
 else {
                                 lVar14 = *(long*)( local_120 + -8 );
                                 if (lVar14 <= lVar15) goto LAB_0010c3eb;
                                 CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_120);
                                 *(char*)( local_120 + lVar15 ) = (char)iVar11;
                              }

                              if (local_120 == 0) {
                                 lVar14 = 0;
                                 LAB_0010c47b:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar17, lVar14, "p_index", "size()", "", false, false);
                              }
 else {
                                 lVar14 = *(long*)( local_120 + -8 );
                                 if (lVar14 <= lVar17) goto LAB_0010c47b;
                                 CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_120);
                                 *(char*)( local_120 + lVar17 ) = (char)( (uint)iVar11 >> 8 );
                              }

                              if (local_120 == 0) {
                                 lVar14 = 0;
                                 LAB_0010c433:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar18, lVar14, "p_index", "size()", "", false, false);
                              }
 else {
                                 lVar14 = *(long*)( local_120 + -8 );
                                 if (lVar14 <= lVar18) goto LAB_0010c433;
                                 CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_120);
                                 *(char*)( local_120 + lVar18 ) = (char)( (uint)iVar11 >> 0x10 );
                              }

                              if (local_120 == 0) {
                                 lVar14 = 0;
                                 LAB_0010c3a3:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, local_160, lVar14, "p_index", "size()", "", false, false);
                              }
 else {
                                 lVar14 = *(long*)( local_120 + -8 );
                                 if (lVar14 <= local_160) goto LAB_0010c3a3;
                                 CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_120);
                                 *(char*)( local_120 + local_160 ) = (char)( (uint)iVar11 >> 0x18 );
                              }

                              lVar12 = lVar12 + 1;
                              lVar15 = lVar15 + 0x14;
                              lVar18 = lVar18 + 0x14;
                              lVar17 = lVar17 + 0x14;
                              local_160 = local_160 + 0x14;
                           }
 while ( (uint)lVar12 < *(uint*)( lVar10 + 0x10 ) );
                        }

                        uVar7 = RenderingDevice::get_singleton();
                        uVar8 = RenderingDevice::storage_buffer_create(uVar7, *(int*)( lVar10 + 0x10 ) * 0x14, local_128, 1);
                        lVar10 = local_120;
                        puVar19[0x17] = uVar8;
                        if (local_120 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_120 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_120 = 0;
                              Memory::free_static((void*)( lVar10 + -0x10 ), false);
                           }

                        }

                     }

                     goto LAB_0010bf18;
                  }

                  if (*(int*)( lVar10 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010c774;
               uVar7 = 0x652;
               pcVar9 = "Parameter \"mesh\" is null.";
               goto LAB_0010c4f9;
            }

            LAB_0010bf18:if ((int)puVar19[1] != 0) {
               if (( puVar19[0xf] == 0 ) || ( *(long*)( puVar19[0xf] - 8 ) == 0 )) {
                  if (*(char*)( (long)puVar19 + 0x49 ) != '\0') {
                     uVar7 = RenderingDevice::get_singleton();
                     RenderingDevice::buffer_get_data(local_128, uVar7, puVar19[0x14], 0);
                     lVar10 = local_120;
                     iVar11 = *(int*)( (long)puVar19 + 0x4c );
                     uVar8 = puVar19[0xc];
                     uVar5 = puVar19[1];
                     if (*puVar19 == 0) {
                        _err_print_error("_multimesh_re_create_aabb", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x6f2, "Condition \"multimesh->mesh.is_null()\" is true.", 0, 0);
                     }
 else {
                        local_78 = 0;
                        uStack_74 = 0;
                        uStack_70 = 0;
                        uStack_6c = 0;
                        uStack_68 = 0;
                        uStack_64 = 0;
                        cVar6 = AABB::operator !=((AABB*)( puVar19 + 6 ), (AABB*)&local_78);
                        if (cVar6 == '\0') {
                           local_d8 = 0;
                           fStack_d0 = 0.0;
                           fStack_cc = 0.0;
                           fStack_c8 = 0.0;
                           fStack_c4 = 0.0;
                           ( **(code**)( *(long*)this + 0x98 ) )(&local_b8, this, *puVar19, 0);
                           if (0 < (int)uVar5) {
                              iVar16 = 0;
                              uVar7 = __LC134;
                              uVar24 = _UNK_0011d538;
                              do {
                                 local_54[2] = 0.0;
                                 uStack_70 = ( undefined4 )((ulong)uVar7 >> 0x20);
                                 uStack_64 = (undefined4)uVar7;
                                 uStack_5c = (undefined4)uVar24;
                                 uStack_58 = ( undefined4 )((ulong)uVar24 >> 0x20);
                                 puVar2 = (undefined8*)( lVar10 + ( ( ulong )(uint)(iVar16 * (int)puVar19[0xc]) + ( ulong )(uint)(iVar11 * (int)uVar8) ) * 4 );
                                 if (*(int*)( (long)puVar19 + 0xc ) == 1) {
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
                                 }
 else {
                                    local_78 = ( undefined4 ) * puVar2;
                                    uStack_74 = ( undefined4 )(( ulong ) * puVar2 >> 0x20);
                                    uStack_6c = (undefined4)puVar2[2];
                                    uStack_68 = ( undefined4 )((ulong)puVar2[2] >> 0x20);
                                    uStack_60 = uStack_70;
                                 }

                                 local_54[1] = (float)*(undefined4*)( (long)puVar2 + 0x1c );
                                 local_54[0] = (float)*(undefined4*)( (long)puVar2 + 0xc );
                                 lVar15 = 0;
                                 local_f8 = 0;
                                 local_f0 = 0.0;
                                 local_110 = local_b0;
                                 local_108 = CONCAT44((float)( (ulong)local_ac >> 0x20 ) + (float)( (ulong)local_b8 >> 0x20 ), (float)local_ac + (float)local_b8);
                                 for (int i = 0; i < 3; i++) {
                                    local_e8[i] = 0;
                                 }

                                 local_118 = local_b8;
                                 local_100 = local_a4 + local_b0;
                                 pAVar13 = (AABB*)&local_78;
                                 if (iVar16 == 0) {
                                    do {
                                       fVar23 = *(float*)( (long)local_54 + lVar15 );
                                       lVar12 = 0;
                                       fVar21 = fVar23;
                                       do {
                                          fVar22 = *(float*)( (long)&local_118 + lVar12 ) * *(float*)( pAVar13 + lVar12 );
                                          fVar20 = *(float*)( pAVar13 + lVar12 ) * *(float*)( (long)&local_108 + lVar12 );
                                          fVar4 = fVar22;
                                          if (fVar22 < fVar20) {
                                             fVar4 = fVar20;
                                             fVar20 = fVar22;
                                          }

                                          fVar21 = fVar21 + fVar20;
                                          fVar23 = fVar23 + fVar4;
                                          lVar12 = lVar12 + 4;
                                       }
 while ( lVar12 != 0xc );
                                       *(float*)( (long)local_e8 + lVar15 ) = fVar23;
                                       pAVar13 = pAVar13 + 0xc;
                                       *(float*)( (long)&local_f8 + lVar15 ) = fVar21;
                                       lVar15 = lVar15 + 4;
                                    }
 while ( lVar15 != 0xc );
                                    local_98 = local_f8;
                                    fStack_c4 = local_e8[2] - local_f0;
                                    fStack_cc = (float)local_e8._0_8_ - (float)local_f8;
                                    fStack_c8 = SUB84(local_e8._0_8_, 4) - (float)( local_f8 >> 0x20 );
                                    fStack_90 = local_f0;
                                    local_d8 = local_f8;
                                    fStack_d0 = local_f0;
                                    fStack_8c = fStack_cc;
                                    fStack_88 = fStack_c8;
                                    fStack_84 = fStack_c4;
                                 }
 else {
                                    do {
                                       fVar23 = *(float*)( (long)local_54 + lVar15 );
                                       lVar12 = 0;
                                       fVar21 = fVar23;
                                       do {
                                          fVar22 = *(float*)( (long)&local_118 + lVar12 ) * *(float*)( pAVar13 + lVar12 );
                                          fVar20 = *(float*)( pAVar13 + lVar12 ) * *(float*)( (long)&local_108 + lVar12 );
                                          fVar4 = fVar22;
                                          if (fVar22 < fVar20) {
                                             fVar4 = fVar20;
                                             fVar20 = fVar22;
                                          }

                                          fVar21 = fVar21 + fVar20;
                                          fVar23 = fVar23 + fVar4;
                                          lVar12 = lVar12 + 4;
                                       }
 while ( lVar12 != 0xc );
                                       *(float*)( (long)local_e8 + lVar15 ) = fVar23;
                                       pAVar13 = pAVar13 + 0xc;
                                       *(float*)( (long)&local_f8 + lVar15 ) = fVar21;
                                       lVar15 = lVar15 + 4;
                                    }
 while ( lVar15 != 0xc );
                                    fStack_84 = local_e8[2] - local_f0;
                                    fStack_8c = (float)local_e8._0_8_ - (float)local_f8;
                                    fStack_88 = SUB84(local_e8._0_8_, 4) - (float)( local_f8 >> 0x20 );
                                    local_98 = local_f8;
                                    fStack_90 = local_f0;
                                    AABB::merge_with((AABB*)&local_d8);
                                    uVar7 = __LC134;
                                    uVar24 = _UNK_0011d538;
                                 }

                                 iVar16 = iVar16 + 1;
                              }
 while ( (int)uVar5 != iVar16 );
                           }

                           puVar19[5] = CONCAT44(fStack_c4, fStack_c8);
                           puVar19[3] = local_d8;
                           puVar19[4] = CONCAT44(fStack_cc, fStack_d0);
                        }

                     }

                     lVar10 = local_120;
                     if (local_120 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_120 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_120 = 0;
                           Memory::free_static((void*)( lVar10 + -0x10 ), false);
                        }

                     }

                  }

               }
 else {
                  *(undefined1*)( puVar19 + 9 ) = 1;
                  if ((char)puVar19[0x18] == '\0') {
                     puVar19[0x19] = *(ulong*)( this + 0x1d8 );
                     *(ulong**)( this + 0x1d8 ) = puVar19;
                     *(undefined1*)( puVar19 + 0x18 ) = 1;
                  }

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Dependency::changed_notify(puVar19 + 0x25, 2);
                  return;
               }

               goto LAB_0010c774;
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010c774;
      }

      if ((int)puVar19[0x2b] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar7 = 0x64a;
      pcVar9 = "Parameter \"multimesh\" is null.";
      LAB_0010c4f9:_err_print_error("_multimesh_set_mesh", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar7, pcVar9, 0, 0);
      return;
   }

   LAB_0010c774:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
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
      LAB_0010c936:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
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
      if (lVar10 == 0) goto LAB_0010c936;
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

      FUN_00113676();
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
         goto LAB_0010c88c;
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

   LAB_0010c88c:puVar8[-1] = param_1;
   return;
}
/* CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write() [clone .isra.0] */void CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write(CowData<RenderingServer::SurfaceData::LOD> *this) {
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
         }
 while ( lVar2 != lVar9 );
      }

      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<unsigned long>::push_back(unsigned long) [clone .isra.0] */void Vector<unsigned_long>::push_back(Vector<unsigned_long> *this, ulong param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<unsigned_long>::resize<false>((CowData<unsigned_long>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<unsigned_long>::_copy_on_write((CowData<unsigned_long>*)( this + 8 ));
            *(ulong*)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* Vector<RenderingDevice::Uniform>::push_back(RenderingDevice::Uniform) [clone .isra.0] */void Vector<RenderingDevice::Uniform>::push_back(Vector<RenderingDevice::Uniform> *this, undefined8 *param_2) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( this + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<RenderingDevice::Uniform>::resize<false>((CowData<RenderingDevice::Uniform>*)( this + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)( this + 8 ));
            puVar1 = (undefined8*)( *(long*)( this + 8 ) + lVar4 * 0x28 );
            *puVar1 = *param_2;
            *(undefined1*)( puVar1 + 1 ) = *(undefined1*)( param_2 + 1 );
            puVar1[2] = param_2[2];
            if (puVar1[4] == param_2[4]) {
               return;
            }

            CowData<RID>::_ref((CowData<RID>*)( puVar1 + 4 ), (CowData*)( param_2 + 4 ));
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* RendererRD::MeshStorage::skeleton_allocate_data(RID, int, bool) */void RendererRD::MeshStorage::skeleton_allocate_data(MeshStorage *this, ulong param_2, int param_3, char param_4) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   char *pcVar6;
   uint uVar7;
   uint uVar8;
   long in_FS_OFFSET;
   Vector<RenderingDevice::Uniform> aVStack_68[8];
   undefined8 local_60;
   undefined8 local_58;
   ulong local_50;
   undefined8 local_48;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x3a4 )) {
         pcVar6 = (char*)( *(long*)( *(long*)( this + 0x390 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98 );
         if (*(int*)( pcVar6 + 0x90 ) == (int)( param_2 >> 0x20 )) {
            if (param_3 < 0) {
               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010d0b6;
               uVar4 = 0x8ec;
               pcVar6 = "Condition \"p_bones < 0\" is true.";
               goto LAB_0010d036;
            }

            if (( *(int*)( pcVar6 + 4 ) == param_3 ) && ( *pcVar6 == param_4 )) {
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_0010d0b6;
            }

            *(int*)( pcVar6 + 4 ) = param_3;
            *pcVar6 = param_4;
            for (int i = 0; i < 8; i++) {
               pcVar6[( i + 72 )] = '\0';
            }

            if (*(long*)( pcVar6 + 0x18 ) != 0) {
               uVar4 = RenderingDevice::get_singleton();
               RenderingDevice::free(uVar4, *(undefined8*)( pcVar6 + 0x18 ));
               for (int i = 0; i < 8; i++) {
                  pcVar6[( i + 24 )] = '\0';
               }

               if (*(int*)( pcVar6 + 8 ) != 0) {
                  for (int i = 0; i < 4; i++) {
                     pcVar6[( i + 8 )] = '\0';
                  }

               }

               for (int i = 0; i < 8; i++) {
                  pcVar6[( i + 80 )] = '\0';
               }

               param_3 = *(int*)( pcVar6 + 4 );
            }

            if (param_3 != 0) {
               uVar8 = param_3 * ( ( -(uint)(*pcVar6 == '\0') & 4 ) + 8 );
               if (uVar8 < *(uint*)( pcVar6 + 8 )) {
                  LAB_0010cdfc:*(uint*)( pcVar6 + 8 ) = uVar8;
               }
 else if (*(uint*)( pcVar6 + 8 ) < uVar8) {
                  if (*(uint*)( pcVar6 + 0xc ) < uVar8) {
                     uVar7 = uVar8 - 1 >> 1 | uVar8 - 1;
                     uVar7 = uVar7 >> 2 | uVar7;
                     uVar7 = uVar7 >> 4 | uVar7;
                     uVar7 = uVar7 >> 8 | uVar7;
                     uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
                     *(uint*)( pcVar6 + 0xc ) = uVar7;
                     lVar5 = Memory::realloc_static(*(void**)( pcVar6 + 0x10 ), (ulong)uVar7 * 4, false);
                     *(long*)( pcVar6 + 0x10 ) = lVar5;
                     if (lVar5 == 0) {
                        _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                  }

                  goto LAB_0010cdfc;
               }

               uVar4 = RenderingDevice::get_singleton();
               local_50 = 0;
               uVar4 = RenderingDevice::storage_buffer_create(uVar4, *(int*)( pcVar6 + 8 ) * 4, &local_58, 0, 0);
               uVar3 = local_50;
               *(undefined8*)( pcVar6 + 0x18 ) = uVar4;
               if (local_50 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_50 - 0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_50 = 0;
                     Memory::free_static((void*)( uVar3 - 0x10 ), false);
                  }

               }

               memset(*(void**)( pcVar6 + 0x10 ), 0, ( ulong ) * (uint*)( pcVar6 + 8 ) << 2);
               if (pcVar6[0x20] == '\0') {
                  uVar4 = *(undefined8*)( this + 0x3e0 );
                  pcVar6[0x20] = '\x01';
                  *(undefined8*)( pcVar6 + 0x28 ) = uVar4;
                  *(char**)( this + 0x3e0 ) = pcVar6;
               }

               local_48 = *(undefined8*)( pcVar6 + 0x18 );
               local_60 = 0;
               local_50 = local_50 & 0xffffffffffffff00;
               local_58 = 8;
               local_38 = 0;
               Vector<RenderingDevice::Uniform>::push_back(aVStack_68, &local_58);
               uVar4 = RenderingDevice::get_singleton();
               uVar4 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar4, aVStack_68, *(undefined8*)( this + 0x360 ), 2, 0);
               *(undefined8*)( pcVar6 + 0x50 ) = uVar4;
               CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_60);
            }

            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Dependency::changed_notify(pcVar6 + 0x60, 8);
               return;
            }

            goto LAB_0010d0b6;
         }

         if (*(int*)( pcVar6 + 0x90 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar4 = 0x8eb;
      pcVar6 = "Parameter \"skeleton\" is null.";
      LAB_0010d036:_err_print_error("skeleton_allocate_data", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar4, pcVar6, 0, 0);
      return;
   }

   LAB_0010d0b6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::MeshStorage::_mesh_instance_add_surface_buffer(RendererRD::MeshStorage::MeshInstance*,
   RendererRD::MeshStorage::Mesh*, RendererRD::MeshStorage::MeshInstance::Surface*, unsigned int,
   unsigned int) */void RendererRD::MeshStorage::_mesh_instance_add_surface_buffer(MeshStorage *this, MeshInstance *param_1, Mesh *param_2, Surface *param_3, uint param_4, uint param_5) {
   long *plVar1;
   ulong uVar2;
   undefined8 uVar3;
   ulong uVar4;
   long in_FS_OFFSET;
   Vector<RenderingDevice::Uniform> local_78[8];
   undefined8 local_70;
   undefined8 local_68;
   ulong local_60;
   long local_58;
   undefined8 local_48;
   long local_40;
   uVar4 = (ulong)param_5;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = RenderingDevice::get_singleton();
   local_60 = 0;
   uVar3 = RenderingDevice::vertex_buffer_create(uVar3, *(undefined4*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)param_4 * 8 ) + 0x2c ), &local_68, 2);
   uVar2 = local_60;
   *(undefined8*)( param_3 + uVar4 * 8 ) = uVar3;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 - 0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( uVar2 - 0x10 ), false);
      }

   }

   local_58 = *(long*)( param_3 + uVar4 * 8 );
   local_60 = local_60 & 0xffffffffffffff00;
   local_70 = 0;
   local_68 = _LC186;
   local_48 = 0;
   Vector<RenderingDevice::Uniform>::push_back(local_78, &local_68);
   local_58 = *(long*)( param_1 + 0x30 );
   if (local_58 == 0) {
      local_58 = *(long*)( this + 0x48 );
   }

   local_60 = local_60 & 0xffffffffffffff00;
   local_48 = 0;
   local_68 = _LC187;
   Vector<RenderingDevice::Uniform>::push_back(local_78, &local_68);
   uVar3 = RenderingDevice::get_singleton();
   uVar3 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar3, local_78, *(undefined8*)( this + 0x360 ), 0, 0);
   *(undefined8*)( param_3 + ( uVar4 + 2 ) * 8 ) = uVar3;
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::_mesh_instance_add_surface(RendererRD::MeshStorage::MeshInstance*,
   RendererRD::MeshStorage::Mesh*, unsigned int) */void RendererRD::MeshStorage::_mesh_instance_add_surface(MeshStorage *this, MeshInstance *param_1, Mesh *param_2, uint param_3) {
   long *plVar1;
   int iVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined4 uVar7;
   uint uVar8;
   long lVar9;
   undefined8 *puVar10;
   undefined8 uVar11;
   void *pvVar12;
   uint uVar13;
   long in_FS_OFFSET;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined1 auVar17[16];
   undefined1 local_98[8];
   void *local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   uVar13 = *(uint*)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (uVar13 == 0) {
      LAB_0010d3ee:lVar9 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)param_3 * 8 );
      if (uVar13 != 0) goto LAB_0010d2c3;
      if (( *(byte*)( lVar9 + 9 ) & 4 ) != 0) {
         iVar2 = *(int*)( lVar9 + 0x2c );
         goto joined_r0x0010d442;
      }

   }
 else {
      if (*(long*)( param_1 + 0x30 ) == 0) {
         uVar8 = *(uint*)( param_1 + 0x20 );
         pvVar12 = *(void**)( param_1 + 0x28 );
         if (uVar13 < uVar8) {
            LAB_0010d340:*(uint*)( param_1 + 0x20 ) = uVar13;
            uVar8 = uVar13;
         }
 else if (uVar8 < uVar13) {
            if (*(uint*)( param_1 + 0x24 ) < uVar13) {
               uVar8 = uVar13 - 1 | uVar13 - 1 >> 1;
               uVar8 = uVar8 | uVar8 >> 2;
               uVar8 = uVar8 | uVar8 >> 4;
               uVar8 = uVar8 | uVar8 >> 8;
               uVar8 = ( uVar8 | uVar8 >> 0x10 ) + 1;
               *(uint*)( param_1 + 0x24 ) = uVar8;
               auVar17 = Memory::realloc_static(pvVar12, (ulong)uVar8 * 4, false);
               pvVar12 = auVar17._0_8_;
               *(void**)( param_1 + 0x28 ) = pvVar12;
               if (pvVar12 == (void*)0x0) {
                  _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0, auVar17._8_8_);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            goto LAB_0010d340;
         }

         if ((ulong)uVar8 != 0) {
            memset(pvVar12, 0, (ulong)uVar8 << 2);
         }

         uVar11 = RenderingDevice::get_singleton();
         local_90 = (void*)0x0;
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_90, ( ulong ) * (uint*)( param_1 + 0x20 ) << 2);
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_90);
         if (local_90 != (void*)0x0) {
            memcpy(local_90, *(void**)( param_1 + 0x28 ), ( ulong ) * (uint*)( param_1 + 0x20 ) << 2);
         }

         uVar11 = RenderingDevice::storage_buffer_create(uVar11, *(int*)( param_1 + 0x20 ) * 4, local_98, 0, 0);
         pvVar12 = local_90;
         *(undefined8*)( param_1 + 0x30 ) = uVar11;
         if (local_90 != (void*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = (void*)0x0;
               Memory::free_static((void*)( (long)pvVar12 + -0x10 ), false);
            }

         }

         param_1[0x49] = (MeshInstance)0x1;
         uVar13 = *(uint*)param_2;
         goto LAB_0010d3ee;
      }

      lVar9 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)param_3 * 8 );
      LAB_0010d2c3:iVar2 = *(int*)( lVar9 + 0x2c );
      joined_r0x0010d442:if (iVar2 != 0) {
         local_50 = 0;
         local_58 = 0;
         local_60 = 0;
         local_68 = 0;
         local_78 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
         _mesh_instance_add_surface_buffer(this, param_1, param_2, (Surface*)local_88, param_3, 0);
         uVar11 = local_78._0_8_;
         uVar14 = local_78._8_8_;
         uVar15 = local_88._0_8_;
         uVar16 = local_88._8_8_;
         goto LAB_0010d2e1;
      }

   }

   local_50 = 0;
   local_58 = 0;
   local_60 = 0;
   local_68 = 0;
   local_78 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   uVar11 = 0;
   uVar14 = 0;
   uVar15 = 0;
   uVar16 = 0;
   LAB_0010d2e1:uVar7 = local_50;
   uVar6 = local_58;
   uVar5 = local_60;
   uVar4 = local_68;
   uVar13 = *(uint*)( param_1 + 0x10 );
   pvVar12 = *(void**)( param_1 + 0x18 );
   if (uVar13 == *(uint*)( param_1 + 0x14 )) {
      uVar13 = uVar13 * 2;
      if (uVar13 == 0) {
         uVar13 = 1;
      }

      *(uint*)( param_1 + 0x14 ) = uVar13;
      pvVar12 = (void*)Memory::realloc_static(pvVar12, (ulong)uVar13 << 6, false);
      *(void**)( param_1 + 0x18 ) = pvVar12;
      if (pvVar12 == (void*)0x0) {
         _err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      uVar13 = *(uint*)( param_1 + 0x10 );
   }

   puVar10 = (undefined8*)( (ulong)uVar13 * 0x40 + (long)pvVar12 );
   *(uint*)( param_1 + 0x10 ) = uVar13 + 1;
   puVar10[4] = uVar4;
   puVar10[5] = uVar5;
   puVar10[6] = uVar6;
   *(undefined4*)( puVar10 + 7 ) = uVar7;
   *puVar10 = uVar15;
   puVar10[1] = uVar16;
   puVar10[2] = uVar11;
   puVar10[3] = uVar14;
   param_1[0x48] = (MeshInstance)0x1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::mesh_instance_create(RID) */ulong RendererRD::MeshStorage::mesh_instance_create(MeshStorage *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   long lVar3;
   code *pcVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   uint uVar8;
   Mesh *pMVar9;
   MeshInstance *pMVar10;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      pMVar9 = (Mesh*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      if (*(int*)( pMVar9 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         uVar5 = RID_Alloc<RendererRD::MeshStorage::MeshInstance,false>::make_rid((RID_Alloc<RendererRD::MeshStorage::MeshInstance,false>*)( this + 0x108 ));
         if (( uVar5 != 0 ) && ( (uint)uVar5 < *(uint*)( this + 0x124 ) )) {
            pMVar10 = (MeshInstance*)( ( ( uVar5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x120 ) ) * 0xb0 + *(long*)( *(long*)( this + 0x110 ) + ( ( uVar5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x120 ) ) * 8 ) );
            if (*(int*)( pMVar10 + 0xa8 ) == (int)( uVar5 >> 0x20 )) {
               iVar1 = *(int*)( pMVar9 + 0x10 );
               *(Mesh**)pMVar10 = pMVar9;
               if (iVar1 != 0) {
                  uVar8 = 0;
                  do {
                     _mesh_instance_add_surface(this, pMVar10, pMVar9, uVar8);
                     uVar8 = uVar8 + 1;
                  }
 while ( uVar8 < *(uint*)( pMVar9 + 0x10 ) );
               }

               if (*(long*)( pMVar9 + 0x68 ) == 0) {
                  pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( pMVar9 + 0x68 ) = pauVar7;
                  *(undefined4*)pauVar7[1] = 0;
                  *pauVar7 = (undefined1[16])0x0;
               }

               puVar6 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
               plVar2 = *(long**)( pMVar9 + 0x68 );
               puVar6[1] = 0;
               lVar3 = plVar2[1];
               *puVar6 = pMVar10;
               puVar6[3] = plVar2;
               puVar6[2] = lVar3;
               if (lVar3 != 0) {
                  *(undefined8**)( lVar3 + 8 ) = puVar6;
               }

               plVar2[1] = (long)puVar6;
               if (*plVar2 == 0) {
                  *plVar2 = (long)puVar6;
               }

               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
               *(undefined8**)( pMVar10 + 0x38 ) = puVar6;
               pMVar10[0x48] = (MeshInstance)0x1;
               return uVar5;
            }

            if (*(int*)( pMVar10 + 0xa8 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar5 >> 0x20);
            }

         }

         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         _DAT_00000000 = pMVar9;
         ( *pcVar4 )();
      }

      if (*(int*)( pMVar9 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_instance_create", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x3aa, "Parameter \"mesh\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::mesh_add_surface(RID, RenderingServer::SurfaceData const&) */void RendererRD::MeshStorage::mesh_add_surface(MeshStorage *this, ulong param_2, undefined4 *param_3) {
   long *plVar1;
   int iVar2;
   void *pvVar3;
   long lVar4;
   code *pcVar5;
   undefined8 uVar6;
   undefined4 uVar7;
   int iVar8;
   SurfaceData *pSVar9;
   undefined4 *puVar10;
   undefined8 uVar11;
   long lVar12;
   undefined4 *puVar13;
   undefined4 *puVar14;
   undefined4 *puVar15;
   long lVar16;
   ulong uVar17;
   char *pcVar18;
   int iVar19;
   ulong uVar20;
   undefined8 *puVar21;
   long lVar22;
   Mesh *pMVar23;
   int iVar24;
   size_t __n;
   byte bVar25;
   uint uVar26;
   long in_FS_OFFSET;
   bool bVar27;
   undefined1 auVar28[16];
   long local_1b8;
   long local_1b0;
   long local_1a8;
   long local_1a0;
   long local_198;
   long local_190;
   long local_188;
   undefined8 local_180;
   char *local_178;
   void *local_170;
   long local_168;
   undefined4 auStack_160[2];
   undefined8 local_158;
   undefined8 local_148;
   undefined8 uStack_140;
   undefined8 local_138;
   ulong uStack_130;
   undefined8 local_128;
   void *pvStack_120;
   undefined1 local_118[8];
   long local_110;
   undefined1 local_108[8];
   long local_100;
   int local_f8;
   undefined1 local_f0[8];
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
   undefined1 local_70[8];
   long local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xcc ) )) {
      pMVar23 = (Mesh*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 200 ) ) * 0xe0 + *(long*)( *(long*)( this + 0xb8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 200 ) ) * 8 ) );
      if (*(int*)( pMVar23 + 0xd8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pMVar23 + 0x10 ) == 0x100) {
            if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar11 = 0x107;
               pcVar18 = "Condition \"mesh->surface_count == RenderingServer::MAX_MESH_SURFACES\" is true.";
               goto LAB_0010e691;
            }

            goto LAB_0010f0a4;
         }

         uVar20 = *(ulong*)( param_3 + 2 );
         uVar17 = 0;
         iVar8 = 0;
         iVar24 = 0;
         LAB_0010d868:do {
            if (( uVar20 >> ( uVar17 & 0x3f ) & 1 ) != 0) {
               LAB_0010d870:switch (uVar17 & 0xffffffff) {
                  default:
            if ((uVar20 & 0x22000000) == 0) {
              iVar24 = iVar24 + 0xc;
              uVar17 = uVar17 + 1;
            }
            else {
              iVar24 = iVar24 + 8;
              uVar17 = uVar17 + 1;
            }
            break;
                  case 2:
            if ((uVar20 & 0x20000000) != 0) {
              uVar17 = uVar17 + 1;
              break;
            }
                  case 1:
            iVar24 = iVar24 + 4;
            uVar17 = uVar17 + 1;
            break;
                  case 3:
            goto switchD_0010d880_caseD_3;
                  case 4:
                  case 5:
            if ((uVar20 & 0x20000000) == 0) {
              iVar8 = iVar8 + 8;
              uVar17 = uVar17 + 1;
            }
            else {
switchD_0010d880_caseD_3:
              iVar8 = iVar8 + 4;
              uVar17 = uVar17 + 1;
            }
            break;
                  case 6:
                  case 7:
                  case 8:
                  case 9:
            goto switchD_0010d880_caseD_6;
                  case 10:
            iVar19 = (-(uint)((uVar20 & 0x8000000) == 0) & 0xfffffff0) + 0x20;
            goto LAB_0010d934;
               }

               goto LAB_0010d868;
            }

            LAB_0010d8e0:uVar17 = uVar17 + 1;
         }
 while ( uVar17 != 0xb );
         iVar19 = 0;
         LAB_0010d934:iVar2 = param_3[0x10];
         lVar12 = *(long*)( param_3 + 6 );
         if (lVar12 == 0) {
            lVar22 = 0;
         }
 else {
            lVar22 = *(long*)( lVar12 + -8 );
         }

         if (iVar24 * iVar2 == lVar22) {
            if (*(long*)( param_3 + 0x34 ) == 0) {
               lVar22 = 0;
            }
 else {
               lVar22 = *(long*)( *(long*)( param_3 + 0x34 ) + -8 );
            }

            if (iVar24 * iVar2 * *(int*)pMVar23 != lVar22) {
               local_188 = 0;
               local_170 = (void*)0x1;
               local_178 = ")";
               String::parse_latin1((StrRange*)&local_188);
               itos((long)&local_198);
               local_178 = ") does not match expected (";
               local_1a8 = 0;
               local_170 = (void*)0x1b;
               String::parse_latin1((StrRange*)&local_1a8);
               itos((long)&local_1b8);
               operator+((char *)&
               local_1b0,(String*)"Size of blend shape data provided (";
               String::operator +((String*)&local_1a0, (String*)&local_1b0);
               String::operator +((String*)&local_190, (String*)&local_1a0);
               String::operator +((String*)&local_178, (String*)&local_190);
               pcVar18 = "Condition \"bs_expected_size != p_surface.blend_shape_data.size()\" is true.";
               uVar11 = 0x151;
               goto LAB_0010e7eb;
            }

            lVar22 = *(long*)( param_3 + 10 );
            if (lVar22 == 0) {
               lVar16 = 0;
            }
 else {
               lVar16 = *(long*)( lVar22 + -8 );
            }

            if (iVar8 * iVar2 != lVar16) {
               local_188 = 0;
               local_170 = (void*)0x1;
               local_178 = ")";
               String::parse_latin1((StrRange*)&local_188);
               itos((long)&local_198);
               local_178 = ") does not match expected (";
               local_1a8 = 0;
               local_170 = (void*)0x1b;
               String::parse_latin1((StrRange*)&local_1a8);
               itos((long)&local_1b8);
               operator+((char *)&
               local_1b0,(String*)"Size of attribute data provided (";
               String::operator +((String*)&local_1a0, (String*)&local_1b0);
               String::operator +((String*)&local_190, (String*)&local_1a0);
               String::operator +((String*)&local_178, (String*)&local_190);
               pcVar18 = "Condition \"expected_attrib_size != p_surface.attribute_data.size()\" is true.";
               uVar11 = 0x154;
               goto LAB_0010e7eb;
            }

            if (( ~uVar20 & 0xc00 ) == 0) {
               if (*(long*)( param_3 + 0xe ) == 0) {
                  lVar16 = 0;
               }
 else {
                  lVar16 = *(long*)( *(long*)( param_3 + 0xe ) + -8 );
               }

               if (iVar2 * iVar19 != lVar16) {
                  local_188 = 0;
                  local_170 = (void*)0x1;
                  local_178 = ")";
                  String::parse_latin1((StrRange*)&local_188);
                  itos((long)&local_198);
                  local_178 = ") does not match expected (";
                  local_1a8 = 0;
                  local_170 = (void*)0x1b;
                  String::parse_latin1((StrRange*)&local_1a8);
                  itos((long)&local_1b8);
                  operator+((char *)&
                  local_1b0,(String*)"Size of skin data provided (";
                  String::operator +((String*)&local_1a0, (String*)&local_1b0);
                  String::operator +((String*)&local_190, (String*)&local_1a0);
                  String::operator +((String*)&local_178, (String*)&local_190);
                  pcVar18 = "Condition \"expected_size != p_surface.skin_data.size()\" is true.";
                  uVar11 = 0x158;
                  goto LAB_0010e7eb;
               }

            }

            pvStack_120 = (void*)0x0;
            local_138 = CONCAT44(local_138._4_4_, *param_3);
            uStack_130 = uVar20;
            if (lVar12 != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&pvStack_120, (CowData*)( param_3 + 6 ));
               lVar22 = *(long*)( param_3 + 10 );
            }

            local_110 = 0;
            if (lVar22 != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_110, (CowData*)( param_3 + 10 ));
            }

            local_100 = 0;
            if (*(long*)( param_3 + 0xe ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_100, (CowData*)( param_3 + 0xe ));
            }

            local_f8 = param_3[0x10];
            local_e8 = 0;
            if (*(long*)( param_3 + 0x14 ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_e8, (CowData*)( param_3 + 0x14 ));
            }

            local_e0 = param_3[0x16];
            local_dc = *(undefined8*)( param_3 + 0x17 );
            uStack_d4 = *(undefined8*)( param_3 + 0x19 );
            local_b8[0] = 0;
            local_cc = *(undefined8*)( param_3 + 0x1b );
            if (*(long*)( param_3 + 0x20 ) != 0) {
               CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
               if (*(long*)( param_3 + 0x20 ) != 0) {
                  plVar1 = (long*)( *(long*)( param_3 + 0x20 ) + -0x10 );
                  do {
                     lVar12 = *plVar1;
                     if (lVar12 == 0) goto LAB_0010db07;
                     LOCK();
                     lVar22 = *plVar1;
                     bVar27 = lVar12 == lVar22;
                     if (bVar27) {
                        *plVar1 = lVar12 + 1;
                        lVar22 = lVar12;
                     }

                     UNLOCK();
                  }
 while ( !bVar27 );
                  if (lVar22 != -1) {
                     local_b8[0] = *(long*)( param_3 + 0x20 );
                  }

               }

            }

            LAB_0010db07:local_a8 = 0;
            if (*(long*)( param_3 + 0x24 ) != 0) {
               CowData<AABB>::_ref((CowData<AABB>*)&local_a8, (CowData*)( param_3 + 0x24 ));
            }

            local_a0 = *(undefined8*)( param_3 + 0x26 );
            uStack_98 = *(undefined8*)( param_3 + 0x28 );
            local_68 = 0;
            local_90 = *(undefined8*)( param_3 + 0x2a );
            uStack_88 = *(undefined8*)( param_3 + 0x2c );
            local_80 = *(undefined8*)( param_3 + 0x2e );
            uStack_78 = *(undefined8*)( param_3 + 0x30 );
            if (*(long*)( param_3 + 0x34 ) != 0) {
               CowData<unsigned_char>::_ref((CowData<unsigned_char>*)&local_68, (CowData*)( param_3 + 0x34 ));
            }

            local_60 = *(undefined8*)( param_3 + 0x36 );
            uStack_58 = *(undefined8*)( param_3 + 0x38 );
            local_50 = *(undefined8*)( param_3 + 0x3a );
            if (( uVar20 & 0x7f800000000 ) == 0x800000000) {
               LAB_0010dc60:puVar10 = (undefined4*)operator_new(0x160, "");
               auVar28 = ZEXT416(_LC46);
               *(undefined1(*) [16])( puVar10 + 0x36 ) = auVar28;
               *(undefined1(*) [16])( puVar10 + 0x3a ) = auVar28;
               *puVar10 = 0;
               *(undefined8*)( puVar10 + 10 ) = 0;
               puVar10[0xc] = 0;
               *(undefined1*)( puVar10 + 0xd ) = 0;
               *(undefined8*)( puVar10 + 0x1e ) = 0;
               puVar10[0x20] = 0;
               puVar10[0x26] = 0;
               *(undefined8*)( puVar10 + 0x28 ) = 0;
               puVar10[0x2a] = 0;
               *(undefined8*)( puVar10 + 0x2b ) = 0;
               puVar10[0x2d] = 0;
               *(undefined8*)( puVar10 + 0x2e ) = 0;
               puVar10[0x30] = 0;
               *(undefined8*)( puVar10 + 0x34 ) = 0;
               puVar10[0x3e] = 0x3f800000;
               *(undefined8*)( puVar10 + 0x3f ) = 0;
               puVar10[0x41] = 0;
               puVar10[0x4a] = 0;
               *(undefined8*)( puVar10 + 0x4c ) = 0;
               puVar10[0x4e] = 0;
               *(undefined8*)( puVar10 + 0x50 ) = 0;
               puVar10[0x52] = 0;
               *(undefined1(*) [16])( puVar10 + 2 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar10 + 6 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar10 + 0x22 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar10 + 0x42 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar10 + 0x46 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar10 + 0x54 ) = (undefined1[16])0x0;
               *(ulong*)( puVar10 + 2 ) = uStack_130;
               *puVar10 = (undefined4)local_138;
               if (( local_100 == 0 ) || ( *(long*)( local_100 + -8 ) == 0 )) {
                  bVar27 = *(int*)pMVar23 != 0;
                  bVar25 = -(*(int *)pMVar23 != 0) & 2;
               }
 else {
                  bVar27 = true;
                  bVar25 = 2;
               }

               if (( pvStack_120 != (void*)0x0 ) && ( *(long*)( (long)pvStack_120 + -8 ) != 0 )) {
                  if (( (uint)uStack_130 & 0x20000006 ) == 2) {
                     local_170 = (void*)0x0;
                     CowData<unsigned_char>::resize<true>((CowData<unsigned_char>*)&local_170, *(long*)( (long)pvStack_120 + -8 ) + 4);
                     pvVar3 = pvStack_120;
                     if (pvStack_120 == (void*)0x0) {
                        __n = 0;
                     }
 else {
                        __n = *(size_t*)( (long)pvStack_120 + -8 );
                     }

                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_170);
                     memcpy(local_170, pvVar3, __n);
                     uVar11 = RenderingDevice::get_singleton();
                     if (local_170 == (void*)0x0) {
                        uVar7 = 0;
                     }
 else {
                        uVar7 = *(undefined4*)( (long)local_170 - 8 );
                     }

                     uVar11 = RenderingDevice::vertex_buffer_create(uVar11, uVar7, &local_178, bVar25);
                     pvVar3 = local_170;
                     *(undefined8*)( puVar10 + 4 ) = uVar11;
                     if (local_170 == (void*)0x0) {
                        puVar10[0xb] = 0;
                     }
 else {
                        puVar10[0xb] = (int)*(undefined8*)( (long)local_170 - 8 );
                        LOCK();
                        plVar1 = (long*)( (long)local_170 - 0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_170 = (void*)0x0;
                           Memory::free_static((void*)( (long)pvVar3 - 0x10 ), false);
                        }

                     }

                  }
 else {
                     uVar11 = RenderingDevice::get_singleton();
                     if (pvStack_120 == (void*)0x0) {
                        uVar7 = 0;
                     }
 else {
                        uVar7 = *(undefined4*)( (long)pvStack_120 + -8 );
                     }

                     uVar11 = RenderingDevice::vertex_buffer_create(uVar11, uVar7, &local_128, bVar25);
                     *(undefined8*)( puVar10 + 4 ) = uVar11;
                     if (pvStack_120 == (void*)0x0) {
                        uVar7 = 0;
                     }
 else {
                        uVar7 = *(undefined4*)( (long)pvStack_120 + -8 );
                     }

                     puVar10[0xb] = uVar7;
                  }

               }

               if (( local_110 != 0 ) && ( *(long*)( local_110 + -8 ) != 0 )) {
                  uVar11 = RenderingDevice::get_singleton();
                  if (local_110 == 0) {
                     uVar7 = 0;
                  }
 else {
                     uVar7 = *(undefined4*)( local_110 + -8 );
                  }

                  uVar11 = RenderingDevice::vertex_buffer_create(uVar11, uVar7, local_118, 0);
                  *(undefined8*)( puVar10 + 6 ) = uVar11;
               }

               if (( local_100 != 0 ) && ( *(long*)( local_100 + -8 ) != 0 )) {
                  uVar11 = RenderingDevice::get_singleton();
                  if (local_100 == 0) {
                     uVar7 = 0;
                  }
 else {
                     uVar7 = *(undefined4*)( local_100 + -8 );
                  }

                  uVar11 = RenderingDevice::vertex_buffer_create(uVar11, uVar7, local_108, bVar25);
                  *(undefined8*)( puVar10 + 8 ) = uVar11;
                  if (local_100 == 0) {
                     uVar7 = 0;
                  }
 else {
                     uVar7 = *(undefined4*)( local_100 + -8 );
                  }

                  puVar10[0xc] = uVar7;
               }

               iVar8 = local_f8;
               puVar10[10] = local_f8;
               if (( uStack_130 & 0x400 ) != 0) {
                  pMVar23[0x14] = (Mesh)0x1;
               }

               if (local_e0 == 0) {
                  LAB_0010de93:if (local_f8 == 0) {
                     _err_print_error("mesh_add_surface", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x1ae, "Condition \"!new_surface.index_count && !new_surface.vertex_count\" is true.", "Meshes must contain a vertex array, an index array, or both", 0, 0);
                     goto LAB_0010edc8;
                  }

               }
 else {
                  uVar11 = RenderingDevice::get_singleton();
                  uVar26 = iVar8 - 1;
                  uVar11 = RenderingDevice::index_buffer_create(uVar11, local_e0, 0xffff < uVar26, local_f0, 0, 0);
                  *(undefined8*)( puVar10 + 0x22 ) = uVar11;
                  puVar10[0x26] = local_e0;
                  uVar11 = RenderingDevice::get_singleton();
                  uVar11 = RenderingDevice::index_array_create(uVar11, *(undefined8*)( puVar10 + 0x22 ), 0, puVar10[0x26]);
                  *(undefined8*)( puVar10 + 0x24 ) = uVar11;
                  if (( local_b8[0] != 0 ) && ( lVar12 = lVar12 != 0 )) {
                     puVar13 = (undefined4*)Memory::alloc_static(lVar12 * 0x18, true);
                     if (puVar13 == (undefined4*)0x0) {
                        _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
                     }
 else {
                        *(long*)( puVar13 + -2 ) = lVar12;
                        puVar14 = puVar13;
                        do {
                           *puVar14 = 0;
                           puVar15 = puVar14 + 6;
                           puVar14[1] = 0;
                           *(undefined1(*) [16])( puVar14 + 2 ) = (undefined1[16])0x0;
                           puVar14 = puVar15;
                        }
 while ( puVar15 != puVar13 + lVar12 * 6 );
                     }

                     *(undefined4**)( puVar10 + 0x28 ) = puVar13;
                     if (local_b8[0] == 0) {
                        puVar10[0x2a] = 0;
                     }
 else {
                        lVar12 = *(long*)( local_b8[0] + -8 );
                        puVar10[0x2a] = (int)lVar12;
                        for (lVar22 = 0; lVar22 < lVar12; lVar22 = lVar22 + 1) {
                           lVar16 = lVar22 * 0x18;
                           lVar12 = *(long*)( local_b8[0] + 0x10 + lVar16 );
                           if (lVar12 == 0) {
                              uVar20 = 0;
                           }
 else {
                              uVar20 = *(long*)( lVar12 + -8 ) / (long)( ( -(ulong)(uVar26 < 0x10000) & 0xfffffffffffffffe ) + 4 );
                           }

                           uVar11 = RenderingDevice::get_singleton();
                           if (local_b8[0] == 0) {
                              LAB_0010ef65:lVar12 = 0;
                              LAB_0010ef6b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar22, lVar12, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar5 = (code*)invalidInstructionException();
                              ( *pcVar5 )();
                           }

                           lVar12 = *(long*)( local_b8[0] + -8 );
                           if (lVar12 <= lVar22) goto LAB_0010ef6b;
                           lVar12 = *(long*)( puVar10 + 0x28 );
                           uVar11 = RenderingDevice::index_buffer_create(uVar11, uVar20 & 0xffffffff, 0xffff < uVar26, local_b8[0] + 8 + lVar16, 0, 0);
                           *(undefined8*)( lVar12 + 8 + lVar16 ) = uVar11;
                           uVar11 = RenderingDevice::get_singleton();
                           lVar12 = *(long*)( puVar10 + 0x28 );
                           uVar11 = RenderingDevice::index_array_create(uVar11, *(undefined8*)( lVar12 + lVar16 + 8 ), 0, uVar20 & 0xffffffff);
                           *(undefined8*)( lVar12 + lVar16 + 0x10 ) = uVar11;
                           if (local_b8[0] == 0) goto LAB_0010ef65;
                           lVar12 = *(long*)( local_b8[0] + -8 );
                           if (lVar12 <= lVar22) goto LAB_0010ef6b;
                           lVar4 = *(long*)( puVar10 + 0x28 );
                           uVar7 = *(undefined4*)( local_b8[0] + lVar22 * 0x18 );
                           ( (undefined4*)( lVar16 + lVar4 ) )[1] = (int)uVar20;
                           *(undefined4*)( lVar16 + lVar4 ) = uVar7;
                        }

                     }

                  }

                  if (local_e0 == 0) goto LAB_0010de93;
               }

               *(undefined8*)( puVar10 + 0x2b ) = local_dc;
               *(undefined8*)( puVar10 + 0x2d ) = uStack_d4;
               *(undefined8*)( puVar10 + 0x2f ) = local_cc;
               if (*(long*)( puVar10 + 0x34 ) != local_a8) {
                  CowData<AABB>::_ref((CowData<AABB>*)( puVar10 + 0x34 ), (CowData*)&local_a8);
               }

               uVar11 = *(undefined8*)( param_3 + 0x28 );
               iVar8 = *(int*)pMVar23;
               *(undefined8*)( puVar10 + 0x36 ) = *(undefined8*)( param_3 + 0x26 );
               *(undefined8*)( puVar10 + 0x38 ) = uVar11;
               uVar11 = *(undefined8*)( param_3 + 0x2c );
               *(undefined8*)( puVar10 + 0x3a ) = *(undefined8*)( param_3 + 0x2a );
               *(undefined8*)( puVar10 + 0x3c ) = uVar11;
               uVar11 = *(undefined8*)( param_3 + 0x2e );
               uVar6 = *(undefined8*)( param_3 + 0x30 );
               *(undefined8*)( puVar10 + 0x42 ) = local_60;
               *(undefined8*)( puVar10 + 0x44 ) = uStack_58;
               *(undefined8*)( puVar10 + 0x3e ) = uVar11;
               *(undefined8*)( puVar10 + 0x40 ) = uVar6;
               if (iVar8 != 0) {
                  uVar11 = RenderingDevice::get_singleton();
                  if (local_68 == 0) {
                     uVar7 = 0;
                  }
 else {
                     uVar7 = *(undefined4*)( local_68 + -8 );
                  }

                  uVar11 = RenderingDevice::storage_buffer_create(uVar11, uVar7, local_70, 0, 0);
                  *(undefined8*)( puVar10 + 0x46 ) = uVar11;
               }

               if (bVar27) {
                  local_180 = 0;
                  local_168 = *(long*)( puVar10 + 4 );
                  if (local_168 == 0) {
                     local_168 = *(long*)( this + 0x48 );
                  }

                  local_178 = (char*)0x8;
                  local_170 = (void*)( (ulong)local_170 & 0xffffffffffffff00 );
                  local_158 = 0;
                  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform>*)&local_188, &local_178);
                  local_168 = *(long*)( puVar10 + 8 );
                  if (local_168 == 0) {
                     local_168 = *(long*)( this + 0x48 );
                  }

                  local_170 = (void*)( (ulong)local_170 & 0xffffffffffffff00 );
                  local_178 = _LC186;
                  local_158 = 0;
                  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform>*)&local_188, &local_178);
                  local_168 = *(long*)( puVar10 + 0x46 );
                  if (local_168 == 0) {
                     local_168 = *(long*)( this + 0x48 );
                  }

                  local_170 = (void*)( (ulong)local_170 & 0xffffffffffffff00 );
                  local_178 = _LC187;
                  local_158 = 0;
                  Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform>*)&local_188, &local_178);
                  uVar11 = RenderingDevice::get_singleton();
                  uVar11 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar11, (Vector<RenderingDevice::Uniform>*)&local_188, *(undefined8*)( this + 0x360 ), 1, 0);
                  *(undefined8*)( puVar10 + 0x56 ) = uVar11;
                  CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_180);
               }

               if (*(int*)( pMVar23 + 0x10 ) == 0) {
                  *(undefined8*)( pMVar23 + 0x28 ) = local_cc;
                  *(undefined8*)( pMVar23 + 0x18 ) = local_dc;
                  *(undefined8*)( pMVar23 + 0x20 ) = uStack_d4;
                  iVar8 = 0;
               }
 else {
                  AABB::merge_with((AABB*)( pMVar23 + 0x18 ));
                  iVar8 = *(int*)( pMVar23 + 0x10 );
               }

               *(undefined8*)( pMVar23 + 0x48 ) = 0;
               pvVar3 = *(void**)( pMVar23 + 8 );
               *(undefined8*)( puVar10 + 0x48 ) = local_50;
               lVar12 = Memory::realloc_static(pvVar3, ( ulong )(iVar8 + 1) << 3, false);
               uVar26 = *(uint*)( pMVar23 + 0x10 );
               plVar1 = *(long**)( pMVar23 + 0x68 );
               *(long*)( pMVar23 + 8 ) = lVar12;
               *(undefined4**)( lVar12 + (ulong)uVar26 * 8 ) = puVar10;
               iVar8 = uVar26 + 1;
               *(int*)( pMVar23 + 0x10 ) = iVar8;
               if (( plVar1 != (long*)0x0 ) && ( puVar21 = (undefined8*)*plVar1 ),puVar21 != (undefined8*)0x0) {
                  while (true) {
                     _mesh_instance_add_surface(this, (MeshInstance*)*puVar21, pMVar23, iVar8 - 1);
                     puVar21 = (undefined8*)puVar21[1];
                     if (puVar21 == (undefined8*)0x0) break;
                     iVar8 = *(int*)( pMVar23 + 0x10 );
                  }
;
               }

               Dependency::changed_notify(pMVar23 + 0xa8);
               iVar8 = *(int*)( pMVar23 + 0x9c );
               if (iVar8 != 0) {
                  lVar12 = *(long*)( pMVar23 + 0x78 );
                  lVar22 = 0;
                  while (true) {
                     lVar16 = *(long*)( lVar12 + lVar22 * 8 );
                     *(undefined8*)( lVar16 + 0x70 ) = 0;
                     Dependency::changed_notify(lVar16 + 0xa8);
                     if (iVar8 <= (int)lVar22 + 1) break;
                     lVar22 = lVar22 + 1;
                  }
;
               }

               lVar12 = *(long*)( pMVar23 + 0x60 );
               if (( lVar12 != 0 ) && ( *(long*)( lVar12 + -8 ) != 0 )) {
                  LOCK();
                  plVar1 = (long*)( lVar12 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar12 = *(long*)( pMVar23 + 0x60 );
                     *(undefined8*)( pMVar23 + 0x60 ) = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }
 else {
                     *(undefined8*)( pMVar23 + 0x60 ) = 0;
                  }

               }

               lVar12 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               lVar12 = local_a8;
               if (local_a8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               CowData<RenderingServer::SurfaceData::LOD>::_unref((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
               lVar12 = local_e8;
               if (local_e8 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_e8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_e8 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               lVar12 = local_100;
               if (local_100 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_100 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_100 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               lVar12 = local_110;
               if (local_110 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_110 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_110 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               pvVar3 = pvStack_120;
               if (pvStack_120 != (void*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)pvStack_120 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     pvStack_120 = (void*)0x0;
                     Memory::free_static((void*)( (long)pvVar3 + -0x10 ), false);
                  }

               }

            }
 else {
               pSVar9 = (SurfaceData*)RenderingServer::get_singleton();
               local_188 = 0;
               local_170 = (void*)0x0;
               local_178 = "";
               String::parse_latin1((StrRange*)&local_188);
               RenderingServer::fix_surface_compatibility(pSVar9, (String*)&local_138);
               lVar12 = local_188;
               if (local_188 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_188 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_188 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               uVar20 = uStack_130 & 0x7f800000000;
               if (uVar20 == 0x800000000) goto LAB_0010dc60;
               local_178 = "Surface version provided (%d) does not match current version (%d).";
               local_188 = 0;
               local_170 = (void*)0x42;
               String::parse_latin1((StrRange*)&local_188);
               vformat<unsigned_long,unsigned_long>((String*)&local_178, ( ulong ) & local_188, uVar20 >> 0x23);
               _err_print_error("mesh_add_surface", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x169, "Condition \"surface_version != RenderingServer::ARRAY_FLAG_FORMAT_CURRENT_VERSION\" is true.", (String*)&local_178, 0, 0);
               pcVar18 = local_178;
               if (local_178 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_178 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_178 = (char*)0x0;
                     Memory::free_static(pcVar18 + -0x10, false);
                  }

               }

               lVar12 = local_188;
               if (local_188 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_188 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_188 = 0;
                     Memory::free_static((void*)( lVar12 + -0x10 ), false);
                  }

               }

               LAB_0010edc8:RenderingServer::SurfaceData::~SurfaceData((SurfaceData*)&local_138);
            }

         }
 else {
            local_188 = 0;
            local_170 = (void*)0x1;
            local_178 = ")";
            String::parse_latin1((StrRange*)&local_188);
            itos((long)&local_198);
            local_178 = ") does not match expected (";
            local_1a8 = 0;
            local_170 = (void*)0x1b;
            String::parse_latin1((StrRange*)&local_1a8);
            itos((long)&local_1b8);
            operator+((char *)&
            local_1b0,(String*)"Size of vertex data provided (";
            String::operator +((String*)&local_1a0, (String*)&local_1b0);
            String::operator +((String*)&local_190, (String*)&local_1a0);
            String::operator +((String*)&local_178, (String*)&local_190);
            pcVar18 = "Condition \"expected_size != p_surface.vertex_data.size()\" is true.";
            uVar11 = 0x14d;
            LAB_0010e7eb:_err_print_error("mesh_add_surface", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar11, pcVar18, &local_178, 0, 0);
            pcVar18 = local_178;
            if (local_178 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_178 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_178 = (char*)0x0;
                  Memory::free_static(pcVar18 + -0x10, false);
               }

            }

            lVar12 = local_190;
            if (local_190 != 0) {
               LOCK();
               plVar1 = (long*)( local_190 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_190 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            lVar12 = local_1a0;
            if (local_1a0 != 0) {
               LOCK();
               plVar1 = (long*)( local_1a0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_1a0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            lVar12 = local_1b0;
            if (local_1b0 != 0) {
               LOCK();
               plVar1 = (long*)( local_1b0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_1b0 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            lVar12 = local_1b8;
            if (local_1b8 != 0) {
               LOCK();
               plVar1 = (long*)( local_1b8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_1b8 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            lVar12 = local_1a8;
            if (local_1a8 != 0) {
               LOCK();
               plVar1 = (long*)( local_1a8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_1a8 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            lVar12 = local_198;
            if (local_198 != 0) {
               LOCK();
               plVar1 = (long*)( local_198 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_198 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

            lVar12 = local_188;
            if (local_188 != 0) {
               LOCK();
               plVar1 = (long*)( local_188 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_188 = 0;
                  Memory::free_static((void*)( lVar12 + -0x10 ), false);
               }

            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010f0a4;
      }

      if (*(int*)( pMVar23 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar11 = 0x105;
      pcVar18 = "Parameter \"mesh\" is null.";
      LAB_0010e691:_err_print_error("mesh_add_surface", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", uVar11, pcVar18, 0, 0);
      return;
   }

   LAB_0010f0a4:/* WARNING: Subroutine does not return */__stack_chk_fail();
   switchD_0010d880_caseD_6:local_148 = __LC192;
   uStack_140 = _UNK_0011d548;
   puVar10 = auStack_160 + uVar17;
   uVar17 = uVar17 + 1;
   local_138 = __LC193;
   uStack_130 = _UNK_0011d558;
   local_128 = __LC194;
   pvStack_120 = _UNK_0011d568;
   iVar8 = iVar8 + *(int*)( (long)&local_138 + ( ulong )(( uint )(uVar20 >> ( ( byte ) * puVar10 & 0x3f )) & 7) * 4 );
   if (( uVar20 >> ( uVar17 & 0x3f ) & 1 ) == 0) goto LAB_0010d8e0;
   goto LAB_0010d870;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::update_mesh_instances() */void RendererRD::MeshStorage::update_mesh_instances(MeshStorage *this) {
   uint uVar1;
   MeshStorage *pMVar2;
   MeshInstance *pMVar3;
   MeshInstance *pMVar4;
   long lVar5;
   Mesh *pMVar6;
   MeshInstance *pMVar7;
   bool bVar8;
   code *pcVar9;
   int iVar10;
   uint uVar11;
   long lVar12;
   void *pvVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   long lVar16;
   Surface *pSVar17;
   ulong uVar18;
   uint uVar19;
   ulong uVar20;
   int *piVar21;
   ulong uVar22;
   char *pcVar23;
   long in_FS_OFFSET;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 local_e8;
   undefined8 uStack_e0;
   undefined8 local_d8;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined8 local_b8;
   uint local_a8;
   uint local_a4;
   ulong local_a0;
   undefined8 uStack_98;
   undefined4 local_90;
   int local_8c;
   ulong local_88;
   int local_80;
   undefined4 local_7c;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 uStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar12 = *(long*)( this + 0x160 );
   while (lVar12 != 0) {
      while (true) {
         lVar16 = *(long*)( lVar12 + 8 );
         if (*(long*)( lVar16 + 0x30 ) == 0) {
            pMVar2 = *(MeshStorage**)( lVar16 + 0x50 );
         }
 else {
            uVar14 = RenderingDevice::get_singleton();
            RenderingDevice::buffer_update(uVar14, *(undefined8*)( lVar16 + 0x30 ), 0, *(int*)( lVar16 + 0x20 ) * 4, *(undefined8*)( lVar16 + 0x28 ));
            pMVar2 = *(MeshStorage**)( lVar16 + 0x50 );
         }

         if (pMVar2 != this + 0x160) break;
         lVar12 = *(long*)( lVar16 + 0x60 );
         if (lVar12 != 0) {
            *(undefined8*)( lVar12 + 0x18 ) = *(undefined8*)( lVar16 + 0x68 );
         }

         lVar5 = *(long*)( lVar16 + 0x68 );
         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar12;
         }

         lVar12 = *(long*)( this + 0x160 );
         if (lVar16 + 0x50 == lVar12) {
            lVar12 = *(long*)( lVar16 + 0x60 );
            *(long*)( this + 0x160 ) = lVar12;
         }

         if (lVar16 + 0x50 == *(long*)( this + 0x168 )) {
            *(long*)( this + 0x168 ) = lVar5;
         }

         *(undefined8*)( lVar16 + 0x50 ) = 0;
         *(undefined1*)( lVar16 + 0x49 ) = 0;
         *(undefined1(*) [16])( lVar16 + 0x60 ) = (undefined1[16])0x0;
         if (lVar12 == 0) goto LAB_0010f1f0;
      }
;
      _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
      lVar12 = *(long*)( this + 0x160 );
      *(undefined1*)( lVar16 + 0x49 ) = 0;
   }
;
   LAB_0010f1f0:if (*(long*)( this + 0x170 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      lVar12 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
      iVar10 = RendererViewport::get_num_viewports_with_motion_vectors();
      bVar8 = true;
      if (iVar10 < 1) {
         bVar8 = 0 < *(int*)( RendererCompositorStorage::singleton + 8 );
      }

      RenderingDevice::get_singleton();
      pvVar13 = (void*)RenderingDevice::compute_list_begin();
      pMVar3 = *(MeshInstance**)( this + 0x170 );
      while (pMVar3 != (MeshInstance*)0x0) {
         pMVar4 = *(MeshInstance**)( pMVar3 + 8 );
         if (*(long*)( pMVar4 + 8 ) == 0) {
            LAB_0010f760:iVar10 = *(int*)( pMVar4 + 0x10 );
            joined_r0x0010f767:if (iVar10 == 0) {
               pMVar4[0x48] = (MeshInstance)0x0;
            }
 else {
               pcVar23 = (char*)0x0;
               LAB_0010f2b9:uVar20 = 0;
               do {
                  while (true) {
                     pSVar17 = (Surface*)( *(long*)( pMVar4 + 0x18 ) + uVar20 * 0x40 );
                     if (*(long*)( pSVar17 + 0x10 ) != 0) break;
                     LAB_0010f32f:uVar20 = uVar20 + 1;
                     if (*(uint*)( pMVar4 + 0x10 ) <= (uint)uVar20) goto LAB_0010f640;
                  }
;
                  pMVar6 = *(Mesh**)pMVar4;
                  lVar16 = uVar20 * 8;
                  if (*(long*)( *(long*)( *(long*)( pMVar6 + 8 ) + uVar20 * 8 ) + 0x158 ) == 0) goto LAB_0010f32f;
                  uVar11 = *(uint*)( pSVar17 + 0x20 );
                  uVar19 = (uint)uVar20;
                  *(uint*)( pSVar17 + 0x24 ) = uVar11;
                  if (( ( bVar8 ) && ( *(long*)( pSVar17 + 0x28 ) != 0 ) ) && ( ( ulong )(lVar12 - *(long*)( pSVar17 + 0x28 )) < 3 )) {
                     uVar22 = ( ulong )(uVar11 ^ 1);
                     if (*(long*)( pSVar17 + uVar22 * 8 + 0x10 ) == 0) {
                        _mesh_instance_add_surface_buffer(this, pMVar4, pMVar6, pSVar17, uVar19, uVar11 ^ 1);
                     }

                     uVar1 = *(uint*)( pMVar4 + 0x10 );
                     if (uVar1 <= uVar19) {
                        LAB_0010f708:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar20 & 0xffffffff, (ulong)uVar1, "p_index", "count", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar9 = (code*)invalidInstructionException();
                        ( *pcVar9 )();
                     }

                     pSVar17 = (Surface*)( *(long*)( pMVar4 + 0x18 ) + uVar20 * 0x40 );
                     *(uint*)( pSVar17 + 0x20 ) = uVar11 ^ 1;
                  }
 else {
                     uVar1 = *(uint*)( pMVar4 + 0x10 );
                     if (uVar1 <= uVar19) goto LAB_0010f708;
                     uVar22 = (ulong)uVar11;
                  }

                  lVar5 = *(long*)( pSVar17 + uVar22 * 8 + 0x10 );
                  *(long*)( pSVar17 + 0x28 ) = lVar12;
                  if (lVar5 == 0) goto LAB_0010f32f;
                  uVar22 = *(ulong*)( *(long*)( *(long*)( *(long*)pMVar4 + 8 ) + lVar16 ) + 8 );
                  uVar14 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_bind_compute_pipeline(uVar14, pvVar13, *(undefined8*)( this + ( ( ulong )(( uVar22 & 0x2000000 ) == 0) + 0x6e ) * 8 ));
                  uVar14 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_bind_uniform_set(uVar14, pvVar13, lVar5, 0);
                  uVar14 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_bind_uniform_set(uVar14, pvVar13, *(undefined8*)( *(long*)( *(long*)( *(long*)pMVar4 + 8 ) + lVar16 ) + 0x158 ), 1);
                  if (pcVar23 == (char*)0x0) {
                     uVar14 = RenderingDevice::get_singleton();
                     RenderingDevice::compute_list_bind_uniform_set(uVar14, pvVar13, *(undefined8*)( this + 0x380 ), 2);
                     piVar21 = *(int**)pMVar4;
                     uVar11 = 0;
                     lVar16 = *(long*)( *(long*)( piVar21 + 2 ) + lVar16 );
                     uVar18 = *(ulong*)( lVar16 + 8 );
                     local_a8 = (uint)uVar18 & 2;
                     local_a4 = (uint)uVar18 & 4;
                  }
 else {
                     if (*(long*)( pcVar23 + 0x50 ) == 0) {
                        uVar15 = RenderingDevice::get_singleton();
                        uVar14 = *(undefined8*)( this + 0x380 );
                     }
 else {
                        uVar15 = RenderingDevice::get_singleton();
                        uVar14 = *(undefined8*)( pcVar23 + 0x50 );
                     }

                     RenderingDevice::compute_list_bind_uniform_set(uVar15, pvVar13, uVar14, 2);
                     piVar21 = *(int**)pMVar4;
                     uVar11 = 0;
                     lVar16 = *(long*)( *(long*)( piVar21 + 2 ) + lVar16 );
                     uVar18 = *(ulong*)( lVar16 + 8 );
                     local_a8 = (uint)uVar18 & 2;
                     local_a4 = (uint)uVar18 & 4;
                     if ((bool)*pcVar23 == ( ( uVar22 & 0x2000000 ) != 0 )) {
                        uVar11 = ( uint )(uVar18 >> 10) & 1;
                     }

                  }

                  local_e8 = 0x3f800000;
                  local_d8 = 0;
                  local_80 = ( ( local_a4 != 0 ) + 1 ) - ( uint )(local_a8 == 0);
                  local_a0 = (ulong)CONCAT14(*piVar21 != 0, uVar11);
                  uVar11 = *(uint*)( lVar16 + 0x28 );
                  uStack_98 = CONCAT44((int)( ( ulong ) * (uint*)( lVar16 + 0x2c ) / (ulong)uVar11 >> 2 ) - local_80, uVar11);
                  local_90 = ( undefined4 )(( ulong ) * (uint*)( lVar16 + 0x30 ) / (ulong)uVar11 >> 2);
                  local_8c = ( -(uint)((uVar18 & 0x8000000) == 0) & 0xfffffffe ) + 4;
                  uStack_e0 = 0x3f80000000000000;
                  uVar14 = __LC210;
                  uVar15 = _UNK_0011d578;
                  if (( pcVar23 != (char*)0x0 ) && ( *pcVar23 != '\0' )) {
                     Transform2D::affine_inverse();
                     Transform2D::operator *((Transform2D*)&local_108, (Transform2D*)&local_c8);
                     local_e8 = local_108;
                     uStack_e0 = uStack_100;
                     local_d8 = local_f8;
                     uVar14 = local_108;
                     uVar15 = uStack_100;
                  }

                  local_78 = uVar14;
                  uStack_70 = uVar15;
                  local_68 = local_d8;
                  Transform2D::affine_inverse();
                  local_50 = local_b8;
                  local_60 = local_c8;
                  uStack_58 = uStack_c0;
                  local_7c = 0;
                  uVar20 = uVar20 + 1;
                  local_88 = (ulong)CONCAT14(( *(undefined4**)pMVar4 )[1] == 0, **(undefined4**)pMVar4);
                  lVar16 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_set_push_constant(lVar16, pvVar13, ( uint ) & local_a8);
                  lVar16 = RenderingDevice::get_singleton();
                  RenderingDevice::compute_list_dispatch_threads(lVar16, (uint)pvVar13, (uint)uStack_98, 1);
               }
 while ( (uint)uVar20 < *(uint*)( pMVar4 + 0x10 ) );
               LAB_0010f640:pMVar4[0x48] = (MeshInstance)0x0;
               if (pcVar23 != (char*)0x0) goto LAB_0010f64e;
            }

         }
 else {
            uVar20 = *(ulong*)( pMVar4 + 8 );
            if (*(uint*)( this + 0x3a4 ) <= (uint)uVar20) goto LAB_0010f760;
            pcVar23 = (char*)( *(long*)( *(long*)( this + 0x390 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x3a0 ) ) * 8 ) + ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x3a0 ) ) * 0x98 );
            if (*(int*)( pcVar23 + 0x90 ) != (int)( uVar20 >> 0x20 )) {
               if (0x7ffffffe < *(int*)( pcVar23 + 0x90 ) + 0x80000000U) goto LAB_0010f760;
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               iVar10 = *(int*)( pMVar4 + 0x10 );
               goto joined_r0x0010f767;
            }

            if (*(int*)( pMVar4 + 0x10 ) != 0) goto LAB_0010f2b9;
            pMVar4[0x48] = (MeshInstance)0x0;
            LAB_0010f64e:*(undefined8*)( pMVar4 + 0x40 ) = *(undefined8*)( pcVar23 + 0x58 );
         }

         if (*(MeshStorage**)( pMVar4 + 0x70 ) == this + 0x170) {
            lVar16 = *(long*)( pMVar4 + 0x80 );
            if (lVar16 != 0) {
               *(undefined8*)( lVar16 + 0x18 ) = *(undefined8*)( pMVar4 + 0x88 );
            }

            lVar5 = *(long*)( pMVar4 + 0x88 );
            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar16;
            }

            pMVar3 = *(MeshInstance**)( this + 0x170 );
            if (pMVar4 + 0x70 == pMVar3) {
               pMVar3 = *(MeshInstance**)( pMVar4 + 0x80 );
               *(MeshInstance**)( this + 0x170 ) = pMVar3;
               pMVar7 = *(MeshInstance**)( this + 0x178 );
            }
 else {
               pMVar7 = *(MeshInstance**)( this + 0x178 );
            }

            if (pMVar4 + 0x70 == pMVar7) {
               *(long*)( this + 0x178 ) = lVar5;
            }

            *(undefined8*)( pMVar4 + 0x70 ) = 0;
            *(undefined1(*) [16])( pMVar4 + 0x80 ) = (undefined1[16])0x0;
         }
 else {
            _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0);
            pMVar3 = *(MeshInstance**)( this + 0x170 );
         }

      }
;
      RenderingDevice::get_singleton();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RenderingDevice::compute_list_end();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::MeshStorage() */void RendererRD::MeshStorage::MeshStorage(MeshStorage *this) {
   long *plVar1;
   ShaderRD *this_00;
   char cVar2;
   ulong uVar3;
   code *pcVar4;
   uint uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined1(*pauVar9)[16];
   undefined8 uVar10;
   ulong uVar11;
   ulong uVar12;
   long lVar13;
   undefined4 uVar14;
   undefined8 *puVar15;
   long lVar16;
   int iVar17;
   long lVar18;
   long in_FS_OFFSET;
   long local_90;
   String local_88[8];
   undefined8 local_80;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined1(*local_60)[16];
   undefined8 local_58;
   undefined8 local_48;
   long local_40;
   this_00 = (ShaderRD*)( this + 0x1e0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   *(MeshStorage**)( this + 0x38 ) = this + 0x18;
   *(MeshStorage**)( this + 0x40 ) = this + 0x28;
   *(undefined***)this = &PTR__MeshStorage_0011a798;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x28 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined8*)( this + 0x50 ) = 0;
   *(undefined8*)( this + 0xa8 ) = 0;
   puVar15 = (undefined8*)( ( ulong )(this + 0x58) & 0xfffffffffffffff8 );
   for (uVar11 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x58) & 0xfffffffffffffff8 ) ) + 0xb0U >> 3); uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
   }

   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined***)( this + 0xb0 ) = &PTR__RID_Alloc_0011a718;
   *(undefined8*)( this + 0xc0 ) = 0;
   *(undefined8*)( this + 0xd8 ) = 0;
   uVar6 = _UNK_0011d588;
   uVar10 = __LC213;
   *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x100 ) = 0;
   *(undefined4*)( this + 0xf0 ) = 1;
   *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 200 ) = uVar10;
   *(undefined8*)( this + 0xd0 ) = uVar6;
   uVar10 = Memory::alloc_static(0x1b10, false);
   *(undefined8*)( this + 0xb8 ) = uVar10;
   uVar10 = Memory::alloc_static(( ulong ) * (uint*)( this + 0xd4 ) << 3, false);
   *(undefined8*)( this + 0xc0 ) = uVar10;
   *(undefined***)( this + 0x108 ) = &PTR__RID_Alloc_0011a738;
   *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
   uVar8 = _UNK_0011d5a8;
   uVar7 = __LC215;
   uVar6 = _UNK_0011d598;
   uVar10 = __LC214;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 272 ) ) = 0;
   }

   *(undefined4*)( this + 0x148 ) = 1;
   *(undefined***)( this + 0x180 ) = &PTR__RID_Alloc_0011a758;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 392 ) ) = 0;
   }

   *(undefined4*)( this + 0x1c0 ) = 1;
   *(undefined8*)( this + 0x120 ) = uVar10;
   *(undefined8*)( this + 0x128 ) = uVar6;
   *(undefined8*)( this + 0x198 ) = uVar7;
   *(undefined8*)( this + 0x1a0 ) = uVar8;
   *(undefined1(*) [16])( this + 0x138 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x160 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x170 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   uVar10 = Memory::alloc_static(0x2b20, false);
   *(undefined8*)( this + 0x188 ) = uVar10;
   uVar10 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x1a4 ) << 3, false);
   *(undefined8*)( this + 400 ) = uVar10;
   *(undefined8*)( this + 0x1d8 ) = 0;
   ShaderRD::ShaderRD(this_00);
   *(undefined***)( this + 0x1e0 ) = &PTR__SkeletonShaderRD_0011a6f8;
   ShaderRD::setup((char*)this_00, (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 64, local_size_y = 1, local_size_z = 1) in;\n\nlayout(set = 0, binding = 1, std430) buffer restrict writeonly DstVertexData {\n\tuint data[];\n}\ndst_vertices;\n\nlayout(set = 0, binding = 2, std430) buffer restrict readonly BlendShapeWeights {\n\tfloat data[];\n}\nblend_shape_weights;\n\nlayout(set = 1, binding = 0, std430) buffer restrict readonly SrcVertexData {\n\tuint data[];\n}\nsrc_vertices;\n\nlayout(set = 1, binding = 1, std430) buffer restrict readonly BoneWeightData {\n\tuint data[];\n}\nsrc_bone_weights;\n\nlayout(set = 1, binding = 2, std430) buffer restrict readonly BlendShapeData {\n\tuint data[];\n}\nsrc_blend_shapes;\n\nlayout(set = 2, binding = 0, std430) buffer restrict readonly SkeletonData {\n\tvec4 data[];\n}\nbone_transforms;\n\nlayout(push_constant, std430) uniform Params {\n\tbool has_normal;\n\tbool has_tangent;\n\tbool has_skeleton;\n\tbool has_blend_shape;\n\n\tuint vertex_count;\n\tuint vertex_stride;\n\tuint skin_stride;\n\tuint skin_weight_offset;\n\n\tuint blend_shape_count;\n\tbool normalized_blend_shapes;\n\tuint normal_tangent_stride;\n\tuint pad1;\n\n\tvec2 skeleton_transform_x;\n\tvec2 skeleton_transform_y;\n\n\tvec2 skeleton_transform_offset;\n\tvec2 inverse_transform_x;\n\n\tvec2 inverse_transform_y;\n\tvec2 inverse_transform_offset;\n}\nparams;\n\nvec2 uint_to_vec2(uint base) {\n\tuvec2 decode = (uvec2(base) >> uvec2(0, 16)) & uvec2(0xFFFF, 0xFFFF);\n\treturn vec2(decode) / vec2(65535.0, 65535.0) * 2.0 - 1.0;\n}\n\nvec3 oct_to_vec3(vec2 oct) {\n\tvec3 v = vec3(oct.xy, 1.0 - abs(oct.x) - abs(oct.y));\n\tfloat t = max(-v.z, 0.0);\n\tv.xy += t * -sign(v.xy);\n\treturn normalize(v);\n}\n\nvec3 decode_uint_oct_to_norm(uint base) {\n\treturn oct_to_vec3(uint_to_vec2(base));\n}\n\nvec4 decode_uint_oct_to_tang(uint base) {\n\tvec2 oct_sign_encoded = uint_to_vec2(base);\n\t\n\tvec2 oct = vec2(oct_sign_encoded.x, abs(oct_sign_encoded.y) * 2.0 - 1.0);\n\treturn vec4(oct_to_vec3(oct), sign(oct_sign_encoded.y));\n}\n\nvec2 signNotZero(vec2 v) {\n\treturn mix(vec2(-1.0), vec2(1.0), greaterThanEqual(v.xy, vec2(0.0)));\n}\n\nuint vec2_to_uint(vec2 base) {...", /* TRUNCATED STRING LITERAL */);
   *(undefined1(*) [16])( this + 0x3c8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3b8 ) = (undefined1[16])0x0;
   uVar6 = _UNK_0011d5b8;
   uVar10 = __LC217;
   *(undefined***)( this + 0x388 ) = &PTR__RID_Alloc_0011a778;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 912 ) ) = 0;
   }

   *(undefined4*)( this + 0x3c8 ) = 1;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 856 ) ) = (undefined1[16])0;
   }

   *(undefined8*)( this + 0x3a0 ) = uVar10;
   *(undefined8*)( this + 0x3a8 ) = uVar6;
   uVar10 = Memory::alloc_static(0x1208, false);
   *(undefined8*)( this + 0x390 ) = uVar10;
   uVar10 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x3ac ) << 3, false);
   *(undefined8*)( this + 0x398 ) = uVar10;
   singleton = this;
   *(undefined8*)( this + 0x3e0 ) = 0;
   uVar10 = RenderingDevice::get_singleton();
   local_60 = (undefined1(*) [16])0x0;
   uVar10 = RenderingDevice::storage_buffer_create(uVar10, 0x10, &local_68, 0);
   pauVar9 = local_60;
   *(undefined8*)( this + 0x48 ) = uVar10;
   if (local_60 != (undefined1(*) [16])0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = (undefined1(*) [16])0x0;
         Memory::free_static((void*)( (long)pauVar9 + -0x10 ), false);
      }

   }

   local_60 = (undefined1(*) [16])0x0;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0xc);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *(undefined8*)*local_60 = 0;
   *(undefined4*)( *local_60 + 8 ) = 0;
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0x50 ) = uVar10;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0xc);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *(undefined8*)*local_60 = 0x3f800000;
   *(undefined4*)( *local_60 + 8 ) = 0;
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0x58 ) = uVar10;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0x10);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *local_60 = ZEXT416(_LC46);
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0x60 ) = uVar10;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0x10);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   uVar5 = _LC46;
   *(uint*)*local_60 = _LC46;
   for (int i = 0; i < 3; i++) {
      *(uint*)( *local_60 + ( 4*i + 4 ) ) = uVar5;
   }

   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0x68 ) = uVar10;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 8);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *(undefined8*)*local_60 = 0;
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0x70 ) = uVar10;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 8);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *(undefined8*)*local_60 = 0;
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   iVar17 = 6;
   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0x78 ) = uVar10;
   do {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0x10);
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
      *local_60 = (undefined1[16])0x0;
      uVar10 = RenderingDevice::get_singleton();
      if (local_60 == (undefined1(*) [16])0x0) {
         uVar14 = 0;
      }
 else {
         uVar14 = *(undefined4*)( local_60[-1] + 8 );
      }

      lVar18 = (long)iVar17;
      iVar17 = iVar17 + 1;
      uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
      *(undefined8*)( this + ( lVar18 + 10 ) * 8 ) = uVar10;
   }
 while ( iVar17 != 10 );
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0x10);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *local_60 = (undefined1[16])0x0;
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   *(undefined8*)( this + 0xa0 ) = uVar10;
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, 0x10);
   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   *local_60 = (undefined1[16])0x0;
   uVar10 = RenderingDevice::get_singleton();
   if (local_60 == (undefined1(*) [16])0x0) {
      uVar14 = 0;
   }
 else {
      uVar14 = *(undefined4*)( local_60[-1] + 8 );
   }

   uVar10 = RenderingDevice::vertex_buffer_create(uVar10, uVar14, &local_68, 0);
   pauVar9 = local_60;
   *(undefined8*)( this + 0xa8 ) = uVar10;
   if (local_60 != (undefined1(*) [16])0x0) {
      LOCK();
      local_60 = local_60 + -1;
      *(long*)*local_60 = *(long*)*local_60 + -1;
      UNLOCK();
      if (*(long*)*local_60 == 0) {
         local_60 = (undefined1(*) [16])0x0;
         Memory::free_static(pauVar9 + -1, false);
      }

   }

   local_80 = 0;
   local_68 = "\n#define MODE_2D\n";
   local_78 = 0;
   local_60 = (undefined1(*) [16])0x11;
   String::parse_latin1((StrRange*)&local_78);
   Vector<String>::push_back((Vector<String>*)local_88);
   lVar18 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar18 + -0x10 ), false);
      }

   }

   local_78 = 0;
   local_68 = "";
   local_60 = (undefined1(*) [16])0x0;
   String::parse_latin1((StrRange*)&local_78);
   Vector<String>::push_back((Vector<String>*)local_88);
   lVar18 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar1 = (long*)( local_78 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar18 + -0x10 ), false);
      }

   }

   local_70 = 0;
   local_68 = "";
   local_90 = 0;
   local_60 = (undefined1(*) [16])0x0;
   String::parse_latin1((StrRange*)&local_90);
   ShaderRD::initialize((Vector*)this_00, local_88, (Vector*)&local_90);
   lVar18 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar18 + -0x10 ), false);
      }

   }

   uVar11 = 0;
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_70);
   uVar10 = ShaderRD::version_create();
   *(undefined8*)( this + 0x358 ) = uVar10;
   do {
      uVar3 = *(ulong*)( this + 0x358 );
      if (*(long*)( this + 0x1f8 ) == 0) {
         lVar18 = 0;
         LAB_001104c7:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, uVar11, lVar18, "p_variant", "variant_defines.size()", "", false, false);
         LAB_00110501:uVar10 = 0;
      }
 else {
         lVar18 = *(long*)( *(long*)( this + 0x1f8 ) + -8 );
         if (lVar18 <= (long)uVar11) goto LAB_001104c7;
         lVar18 = *(long*)( this + 0x208 );
         uVar12 = uVar11;
         if (lVar18 == 0) goto LAB_00110480;
         lVar16 = *(long*)( lVar18 + -8 );
         if (lVar16 <= (long)uVar11) goto LAB_001104a1;
         if (*(char*)( lVar18 + uVar11 ) != '\0') {
            if (( uVar3 == 0 ) || ( *(uint*)( this + 0x2b4 ) <= (uint)uVar3 )) {
               LAB_00110550:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
               uVar10 = 0;
               goto LAB_0011022b;
            }

            lVar18 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2b0 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x2a0 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2b0 ) ) * 8 );
            if (*(int*)( lVar18 + 0x98 ) != (int)( uVar3 >> 0x20 )) {
               if (*(int*)( lVar18 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00110550;
            }

            iVar17 = (int)lVar18;
            if (*(char*)( lVar18 + 0x91 ) != '\0') {
               ShaderRD::_initialize_version((Version*)this_00);
               lVar16 = *(long*)( this + 600 );
               if (lVar16 != 0) {
                  lVar13 = 0;
                  do {
                     if (*(long*)( lVar16 + -8 ) <= lVar13) break;
                     if (*(char*)( lVar16 + lVar13 ) == '\0') {
                        ShaderRD::_allocate_placeholders((Version*)this_00, iVar17);
                     }
 else {
                        ShaderRD::_compile_version_start((Version*)this_00, iVar17);
                     }

                     lVar16 = *(long*)( this + 600 );
                     lVar13 = lVar13 + 1;
                  }
 while ( lVar16 != 0 );
               }

            }

            lVar13 = *(long*)( this + 0x218 );
            if (lVar13 == 0) {
               LAB_00110480:lVar16 = 0;
               uVar12 = uVar11;
               LAB_001104a1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar12, lVar16, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar16 = *(long*)( lVar13 + -8 );
            if (lVar16 <= (long)uVar11) goto LAB_001104a1;
            uVar12 = ( ulong ) * (uint*)( lVar13 + uVar11 * 4 );
            lVar13 = *(long*)( lVar18 + 0x68 );
            if (lVar13 == 0) {
               lVar16 = 0;
               goto LAB_001104a1;
            }

            lVar16 = *(long*)( lVar13 + -8 );
            if (lVar16 <= (long)uVar12) goto LAB_001104a1;
            if (*(long*)( lVar13 + uVar12 * 8 ) == 0) {
               cVar2 = *(char*)( lVar18 + 0x90 );
            }
 else {
               ShaderRD::_compile_version_end((Version*)this_00, iVar17);
               cVar2 = *(char*)( lVar18 + 0x90 );
            }

            if (cVar2 != '\0') {
               lVar18 = *(long*)( lVar18 + 0x88 );
               if (lVar18 != 0) {
                  lVar16 = *(long*)( lVar18 + -8 );
                  uVar12 = uVar11;
                  if (lVar16 <= (long)uVar11) goto LAB_001104a1;
                  uVar10 = *(undefined8*)( lVar18 + uVar11 * 8 );
                  goto LAB_0011022b;
               }

               goto LAB_00110480;
            }

            goto LAB_00110501;
         }

         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         uVar10 = 0;
      }

      LAB_0011022b:*(undefined8*)( this + uVar11 * 8 + 0x360 ) = uVar10;
      uVar10 = RenderingDevice::get_singleton();
      local_60 = (undefined1(*) [16])0x0;
      uVar10 = RenderingDevice::compute_pipeline_create(uVar10, *(undefined8*)( this + (long)(int)uVar11 * 8 + 0x360 ), &local_68);
      pauVar9 = local_60;
      *(undefined8*)( this + ( (long)(int)uVar11 + 0x6e ) * 8 ) = uVar10;
      if (local_60 != (undefined1(*) [16])0x0) {
         LOCK();
         plVar1 = (long*)( (long)local_60 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = (undefined1(*) [16])0x0;
            Memory::free_static((void*)( (long)pauVar9 - 0x10 ), false);
         }

      }

      if (uVar11 != 0) {
         local_58 = *(undefined8*)( this + 0x48 );
         local_60 = (undefined1(*) [16])( (ulong)local_60 & 0xffffffffffffff00 );
         local_70 = 0;
         local_68 = (char*)0x8;
         local_48 = 0;
         Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform>*)&local_78, &local_68);
         uVar10 = RenderingDevice::get_singleton();
         uVar10 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar10, (StrRange*)&local_78, *(undefined8*)( this + 0x360 ), 2, 0);
         *(undefined8*)( this + 0x380 ) = uVar10;
         CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_70);
         CowData<String>::_unref((CowData<String>*)&local_80);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      uVar11 = 1;
   }
 while ( true );
}
/* RendererRD::MeshStorage::mesh_allocate() */void RendererRD::MeshStorage::mesh_allocate(MeshStorage *this) {
   RID_Alloc<RendererRD::MeshStorage::Mesh,true>::allocate_rid((RID_Alloc<RendererRD::MeshStorage::Mesh,true>*)( this + 0xb0 ));
   return;
}
/* RendererRD::MeshStorage::_multimesh_allocate() */void RendererRD::MeshStorage::_multimesh_allocate(MeshStorage *this) {
   RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::allocate_rid((RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>*)( this + 0x180 ));
   return;
}
/* RendererRD::MeshStorage::skeleton_allocate() */void RendererRD::MeshStorage::skeleton_allocate(MeshStorage *this) {
   RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::allocate_rid((RID_Alloc<RendererRD::MeshStorage::Skeleton,true>*)( this + 0x388 ));
   return;
}
/* RendererRD::MeshStorage::mesh_initialize(RID) */void RendererRD::MeshStorage::mesh_initialize(MeshStorage *this, undefined8 param_2) {
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
   undefined8 local_98;
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined1 local_38[16];
   undefined1 local_28[16];
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 16; i++) {
      local_e8[i] = (Mesh)0;
   }

   auStack_a4 = SUB1612((undefined1[16])0x0, 4);
   local_d8 = (undefined1[16])0x0;
   local_50 = _LC235;
   local_18 = _LC235;
   local_c8 = 0;
   local_c4 = 0;
   local_bc = 0;
   local_b8 = 0;
   local_b0 = 0;
   local_ac = 0;
   uStack_a8 = 0;
   local_98 = 0;
   local_78 = 0;
   local_48 = 0;
   local_88 = (undefined1[16])0x0;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_28 = (undefined1[16])0x0;
   RID_Alloc<RendererRD::MeshStorage::Mesh,true>::initialize_rid((RID_Alloc<RendererRD::MeshStorage::Mesh,true>*)( this + 0xb0 ), param_2, local_e8);
   Mesh::~Mesh(local_e8);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::skeleton_initialize(RID) */void RendererRD::MeshStorage::skeleton_initialize(MeshStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined1 local_a8[16];
   void *local_98;
   undefined8 local_90;
   undefined1 local_88[16];
   undefined4 local_78;
   undefined4 local_74;
   undefined4 local_70;
   undefined4 local_6c;
   undefined8 local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   Dependency local_48[8];
   undefined1 local_40[16];
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (undefined1[16])0x0;
   local_88 = (undefined1[16])0x0;
   local_98 = (void*)0x0;
   local_78 = _LC46;
   local_6c = _LC46;
   local_60 = (undefined1[16])0x0;
   local_40 = (undefined1[16])0x0;
   local_30 = (undefined1[16])0x0;
   local_90 = 0;
   local_74 = 0;
   local_70 = 0;
   local_68 = 0;
   local_50 = 1;
   local_20 = 2;
   RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::initialize_rid((RID_Alloc<RendererRD::MeshStorage::Skeleton,true>*)( this + 0x388 ), param_2, local_a8);
   Dependency::~Dependency(local_48);
   if (local_98 != (void*)0x0) {
      if (local_a8._8_4_ != 0) {
         local_a8._8_4_ = 0;
      }

      Memory::free_static(local_98, false);
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::_multimesh_initialize(RID) */void RendererRD::MeshStorage::_multimesh_initialize(MeshStorage *this, undefined8 param_2) {
   long *plVar1;
   long lVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   undefined8 uStack_168;
   undefined4 local_15c;
   undefined4 local_154;
   undefined8 local_110;
   long local_f0;
   undefined4 local_98;
   long local_68;
   long local_58;
   long local_48;
   Dependency local_40[40];
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   puVar3 = &uStack_168;
   for (lVar2 = 0x2b; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
   }

   local_15c = 1;
   local_154 = 0xffffffff;
   local_110 = 0xffffffffffffffff;
   local_98 = 1;
   local_18 = 2;
   RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::initialize_rid((RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>*)( this + 0x180 ), param_2, &uStack_168);
   Dependency::~Dependency(local_40);
   lVar2 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::MeshStorage::mesh_get_surface(RID, int) const */undefined8 *RendererRD::MeshStorage::mesh_get_surface(undefined8 *param_1, long param_2, ulong param_3, uint param_4) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   undefined4 *puVar4;
   int iVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   undefined8 *puVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   byte bVar14;
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
   long local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   bVar14 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xcc ) )) {
      lVar9 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 200 ) ) * 0xe0 + *(long*)( *(long*)( param_2 + 0xb8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 200 ) ) * 8 );
      if (*(int*)( lVar9 + 0xd8 ) == (int)( param_3 >> 0x20 )) {
         if (param_4 < *(uint*)( lVar9 + 0x10 )) {
            local_a0 = ZEXT416(_LC46);
            local_138 = 5;
            puVar4 = *(undefined4**)( *(long*)( lVar9 + 8 ) + (long)(int)param_4 * 8 );
            local_120[0] = 0;
            local_130 = *(undefined8*)( puVar4 + 2 );
            local_110 = 0;
            local_100 = 0;
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
            if (*(long*)( puVar4 + 4 ) != 0) {
               uVar7 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(local_158, uVar7, *(undefined8*)( puVar4 + 4 ), 0);
               if (local_150 != 0) {
                  local_120[0] = local_150;
               }

               if (( ( uint ) * (undefined8*)( puVar4 + 2 ) & 0x20000006 ) == 2) {
                  if (local_120[0] == 0) {
                     lVar9 = -4;
                  }
 else {
                     lVar9 = *(long*)( local_120[0] + -8 ) + -4;
                  }

                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)local_120, lVar9);
               }

            }

            lVar9 = local_110;
            if (*(long*)( puVar4 + 6 ) != 0) {
               uVar7 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(local_158, uVar7, *(undefined8*)( puVar4 + 6 ), 0);
               lVar10 = local_150;
               if (local_110 == local_150) {
                  lVar9 = local_110;
                  if (local_110 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_110 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_150 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                        lVar9 = local_110;
                     }

                  }

               }
 else {
                  lVar9 = local_150;
                  if (local_110 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_110 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     lVar9 = local_150;
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_110 + -0x10 ), false);
                        lVar9 = local_150;
                     }

                  }

               }

            }

            local_110 = lVar9;
            lVar9 = local_100;
            if (*(long*)( puVar4 + 8 ) != 0) {
               uVar7 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(local_158, uVar7, *(undefined8*)( puVar4 + 8 ), 0);
               lVar10 = local_150;
               if (local_100 == local_150) {
                  lVar9 = local_100;
                  if (local_100 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_100 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_150 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                        lVar9 = local_100;
                     }

                  }

               }
 else {
                  lVar9 = local_150;
                  if (local_100 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_100 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     lVar9 = local_150;
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_100 + -0x10 ), false);
                        lVar9 = local_150;
                     }

                  }

               }

            }

            local_100 = lVar9;
            local_f8 = puVar4[10];
            local_138 = *puVar4;
            local_e0 = puVar4[0x26];
            lVar9 = local_e8;
            if (local_e0 != 0) {
               uVar7 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(local_158, uVar7, *(undefined8*)( puVar4 + 0x22 ), 0);
               lVar10 = local_150;
               if (local_e8 == local_150) {
                  lVar9 = local_e8;
                  if (local_e8 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_e8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_150 = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                        lVar9 = local_e8;
                     }

                  }

               }
 else {
                  lVar9 = local_150;
                  if (local_e8 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_e8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     lVar9 = local_150;
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_e8 + -0x10 ), false);
                        lVar9 = local_150;
                     }

                  }

               }

            }

            local_e8 = lVar9;
            local_dc = *(undefined8*)( puVar4 + 0x2b );
            lVar9 = 0;
            local_60 = *(undefined1(*) [16])( puVar4 + 0x42 );
            uStack_cc = ( undefined4 ) * (undefined8*)( puVar4 + 0x2f );
            uStack_c8 = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x2f ) >> 0x20);
            uStack_d4 = ( undefined4 ) * (undefined8*)( puVar4 + 0x2d );
            uStack_d0 = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x2d ) >> 0x20);
            if (puVar4[0x2a] != 0) {
               do {
                  uVar3 = *(undefined4*)( *(long*)( puVar4 + 0x28 ) + lVar9 * 0x18 );
                  uVar7 = RenderingDevice::get_singleton();
                  RenderingDevice::buffer_get_data(local_158, uVar7, *(undefined8*)( *(long*)( puVar4 + 0x28 ) + 8 + lVar9 * 0x18 ), 0);
                  lVar10 = local_150;
                  local_148[0] = 0;
                  local_158[0] = uVar3;
                  if (local_150 == 0) {
                     LAB_00110c20:if (local_b8[0] == 0) goto LAB_00110d80;
                     LAB_00110c31:lVar12 = local_148[0];
                     iVar5 = CowData<RenderingServer::SurfaceData::LOD>::resize<false>((CowData<RenderingServer::SurfaceData::LOD>*)local_b8, *(long*)( local_b8[0] + -8 ) + 1);
                     if (iVar5 != 0) goto LAB_00110d98;
                     LAB_00110c49:if (local_b8[0] == 0) {
                        lVar8 = -1;
                        lVar6 = 0;
                     }
 else {
                        lVar6 = *(long*)( local_b8[0] + -8 );
                        lVar8 = lVar6 + -1;
                        if (-1 < lVar8) {
                           CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write((CowData<RenderingServer::SurfaceData::LOD>*)local_b8);
                           puVar2 = (undefined4*)( local_b8[0] + lVar8 * 0x18 );
                           *puVar2 = local_158[0];
                           if (lVar12 != *(long*)( puVar2 + 4 )) {
                              CowData<unsigned_char>::_ref((CowData<unsigned_char>*)( puVar2 + 4 ), (CowData*)local_148);
                           }

                           goto LAB_00110cab;
                        }

                     }

                     _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar6, "p_index", "size()", "", false, false);
                  }
 else {
                     plVar1 = (long*)( local_150 + -0x10 );
                     do {
                        lVar12 = *plVar1;
                        if (lVar12 == 0) goto LAB_00110d6a;
                        LOCK();
                        lVar6 = *plVar1;
                        bVar13 = lVar12 == lVar6;
                        if (bVar13) {
                           *plVar1 = lVar12 + 1;
                           lVar6 = lVar12;
                        }

                        UNLOCK();
                     }
 while ( !bVar13 );
                     if (lVar6 != -1) {
                        local_148[0] = local_150;
                        goto LAB_00110c20;
                     }

                     LAB_00110d6a:if (local_b8[0] != 0) goto LAB_00110c31;
                     LAB_00110d80:lVar12 = local_148[0];
                     iVar5 = CowData<RenderingServer::SurfaceData::LOD>::resize<false>((CowData<RenderingServer::SurfaceData::LOD>*)local_b8, 1);
                     if (iVar5 == 0) goto LAB_00110c49;
                     LAB_00110d98:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                  }

                  LAB_00110cab:if (lVar12 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar12 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_148[0] + -0x10 ), false);
                     }

                  }

                  if (lVar10 != 0) {
                     plVar1 = (long*)( lVar10 + -0x10 );
                     LOCK();
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static(plVar1, false);
                     }

                  }

                  lVar9 = lVar9 + 1;
               }
 while ( (uint)lVar9 < (uint)puVar4[0x2a] );
            }

            if (local_a8 != *(long*)( puVar4 + 0x34 )) {
               CowData<AABB>::_ref((CowData<AABB>*)&local_a8, (CowData*)( puVar4 + 0x34 ));
            }

            lVar9 = local_68;
            local_a0 = *(undefined1(*) [16])( puVar4 + 0x36 );
            local_90 = *(undefined1(*) [16])( puVar4 + 0x3a );
            local_80 = ( undefined4 ) * (undefined8*)( puVar4 + 0x3e );
            uStack_7c = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x3e ) >> 0x20);
            uStack_78 = ( undefined4 ) * (undefined8*)( puVar4 + 0x40 );
            uStack_74 = ( undefined4 )(( ulong ) * (undefined8*)( puVar4 + 0x40 ) >> 0x20);
            lVar10 = lVar9;
            if (*(long*)( puVar4 + 0x46 ) != 0) {
               uVar7 = RenderingDevice::get_singleton();
               RenderingDevice::buffer_get_data(local_158, uVar7, *(undefined8*)( puVar4 + 0x46 ), 0, 0);
               lVar12 = local_150;
               if (local_150 == lVar9) {
                  if (lVar9 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar9 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     lVar10 = local_68;
                     if (*plVar1 == 0) {
                        local_150 = 0;
                        Memory::free_static((void*)( lVar12 + -0x10 ), false);
                        lVar10 = local_68;
                     }

                  }

               }
 else {
                  lVar10 = local_150;
                  if (lVar9 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar9 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        Memory::free_static((void*)( local_68 + -0x10 ), false);
                        lVar10 = local_150;
                     }

                  }

               }

            }

            lVar12 = local_b8[0];
            lVar9 = local_e8;
            *(undefined4*)param_1 = local_138;
            *(undefined8*)( (long)param_1 + 0x5c ) = local_dc;
            *(ulong*)( (long)param_1 + 100 ) = CONCAT44(uStack_d0, uStack_d4);
            param_1[1] = local_130;
            param_1[0x13] = local_a0._0_8_;
            param_1[0x14] = local_a0._8_8_;
            param_1[3] = local_120[0];
            local_120[0] = 0;
            param_1[5] = local_110;
            local_110 = 0;
            param_1[7] = local_100;
            local_100 = 0;
            *(undefined4*)( param_1 + 8 ) = local_f8;
            local_e8 = 0;
            param_1[10] = lVar9;
            *(int*)( param_1 + 0xb ) = local_e0;
            *(ulong*)( (long)param_1 + 0x6c ) = CONCAT44(uStack_c8, uStack_cc);
            local_b8[0] = 0;
            param_1[0x10] = lVar12;
            param_1[0x12] = local_a8;
            param_1[0x15] = local_90._0_8_;
            param_1[0x16] = local_90._8_8_;
            param_1[0x1a] = lVar10;
            param_1[0x1d] = local_50;
            param_1[0x17] = CONCAT44(uStack_7c, local_80);
            param_1[0x18] = CONCAT44(uStack_74, uStack_78);
            param_1[0x1b] = local_60._0_8_;
            param_1[0x1c] = local_60._8_8_;
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

         }
 else {
            _err_print_index_error("mesh_get_surface", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x26c, (ulong)param_4, ( ulong ) * (uint*)( lVar9 + 0x10 ), "(uint32_t)p_surface", "mesh->surface_count", "", false, false);
            puVar11 = param_1;
            for (lVar9 = 0x1e; lVar9 != 0; lVar9 = lVar9 + -1) {
               *puVar11 = 0;
               puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
            }

            *(undefined4*)param_1 = 5;
            *(undefined1*)( (long)param_1 + 0xc ) = 8;
            for (int i = 0; i < 3; i++) {
               *(undefined2*)( (long)param_1 + ( 16*i + 154 ) ) = 16256;
            }

         }

         goto LAB_00110fa4;
      }

      if (*(int*)( lVar9 + 0xd8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("mesh_get_surface", "servers/rendering/renderer_rd/storage_rd/mesh_storage.cpp", 0x26b, "Parameter \"mesh\" is null.", 0, 0);
   puVar11 = param_1;
   for (lVar9 = 0x1e; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar11 = 0;
      puVar11 = puVar11 + (ulong)bVar14 * -2 + 1;
   }

   *(undefined4*)param_1 = 5;
   *(undefined1*)( (long)param_1 + 0xc ) = 8;
   for (int i = 0; i < 3; i++) {
      *(undefined2*)( (long)param_1 + ( 16*i + 154 ) ) = 16256;
   }

   LAB_00110fa4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Vector<RenderingDeviceCommons::VertexAttribute>::push_back(RenderingDeviceCommons::VertexAttribute)
   [clone .isra.0] */void Vector<RenderingDeviceCommons::VertexAttribute>::push_back(long param_1) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   undefined8 in_stack_00000008;
   undefined8 in_stack_00000010;
   undefined4 in_stack_00000018;
   if (*(long*)( param_1 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>((CowData<RenderingDeviceCommons::VertexAttribute>*)( param_1 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write((CowData<RenderingDeviceCommons::VertexAttribute>*)( param_1 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_1 + 8 ) + lVar4 * 0x14 );
            *puVar1 = in_stack_00000008;
            puVar1[1] = in_stack_00000010;
            *(undefined4*)( puVar1 + 2 ) = in_stack_00000018;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::_mesh_surface_generate_vertex_format(unsigned long, unsigned long, bool,
   bool, unsigned int&) */undefined8 RendererRD::MeshStorage::_mesh_surface_generate_vertex_format(MeshStorage *this, ulong param_1, ulong param_2, bool param_3, bool param_4, uint *param_5) {
   int iVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   Vector *pVVar5;
   undefined8 uVar6;
   ulong uVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   int iVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   uint local_dc;
   int local_d0;
   undefined1 local_c8[8];
   long local_c0;
   int local_b8;
   uint uStack_b4;
   undefined4 auStack_b0[6];
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   uVar12 = 0;
   uVar10 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = 0;
   *param_5 = 0;
   local_dc = 0;
   local_d0 = 0;
   LAB_00111630:do {
      iVar11 = (int)uVar12;
      uStack_b4 = (uint)__LC238;
      auStack_b0[0] = ( undefined4 )((ulong)__LC238 >> 0x20);
      auStack_b0[1] = (undefined4)_UNK_0011d5d8;
      auStack_b0[2] = ( undefined4 )((ulong)_UNK_0011d5d8 >> 0x20);
      uVar3 = uVar10;
      if (( param_1 >> ( uVar12 & 0x3f ) & 1 ) != 0) {
         auStack_b0[1] = 1;
         switch (uVar12 & 0xffffffff) {
            default:
        uStack_b4 = *param_5;
        if ((param_1 & 0x2000000) == 0) {
          if ((param_3) || ((param_1 & 0x20000000) == 0)) {
            auStack_b0[0] = 0x69;
            *param_5 = 0xc;
          }
          else {
            auStack_b0[0] = 0x5a;
            *param_5 = 8;
          }
        }
        else {
          auStack_b0[0] = 0x66;
          *param_5 = 8;
        }
        goto LAB_00111670;
            case 1:
        if ((param_3) || ((param_1 & 0x20000000) == 0)) {
          auStack_b0[0] = 0x5a;
          iVar1 = local_d0 + 8;
          local_d0 = local_d0 + 4;
          if ((param_1 & 4) != 0) {
            local_d0 = iVar1;
          }
        }
        else {
          auStack_b0[0] = 0x4c;
          local_d0 = local_d0 + 4;
        }
        break;
            case 2:
        auStack_b0[0] = 0x6c;
        auStack_b0[1] = 0;
        break;
            case 3:
        auStack_b0[0] = 0x24;
        uVar3 = uVar10 + 4;
        uStack_b4 = uVar10;
        break;
            case 4:
            case 5:
        if ((param_1 & 0x20000000) == 0) {
          auStack_b0[0] = 0x66;
          uVar3 = uVar10 + 8;
          uStack_b4 = uVar10;
        }
        else {
          auStack_b0[0] = 0x4c;
          uVar3 = uVar10 + 4;
          uStack_b4 = uVar10;
        }
        break;
            case 6:
            case 7:
            case 8:
            case 9:
        local_98 = __LC192;
        uStack_90 = _UNK_0011d548;
        local_88 = __LC193;
        uStack_80 = _UNK_0011d558;
        local_78 = __LC194;
        uStack_70 = _UNK_0011d568;
        uVar7 = (ulong)((uint)(param_1 >> ((byte)auStack_b0[uVar12] & 0x3f)) & 7);
        local_68 = __LC240;
        uStack_60 = _UNK_0011d5e8;
        local_58 = __LC241;
        uStack_50 = _UNK_0011d5f8;
        auStack_b0[0] = *(undefined4 *)((long)&local_68 + uVar7 * 4);
        uVar3 = uVar10 + *(int *)((long)&local_88 + uVar7 * 4);
        uStack_b4 = uVar10;
        break;
            case 10:
        uStack_b4 = local_dc;
        auStack_b0[0] = 0x5e;
        local_dc = local_dc + 8;
        break;
            case 0xb:
        auStack_b0[0] = 0x5a;
        uStack_b4 = local_dc;
        local_dc = local_dc + 8;
        goto LAB_00111670;
         }

         goto LAB_001117d0;
      }

      switch (uVar12 & 0xffffffff) {
         default:
      auStack_b0[0] = 0x69;
      break;
         case 2:
         case 3:
         case 6:
         case 7:
         case 8:
         case 9:
         case 0xb:
      auStack_b0[0] = 0x6c;
      goto LAB_00111670;
         case 4:
         case 5:
      auStack_b0[0] = 0x66;
      break;
         case 10:
      auStack_b0[0] = 0x6a;
LAB_00111670:
      if ((param_2 >> (uVar12 & 0x3f) & 1) != 0) goto LAB_00111676;
      goto LAB_001116b5;
      }

      LAB_001117d0:uVar10 = uVar3;
      if (( param_2 >> ( uVar12 & 0x3f ) & 1 ) == 0) {
         uVar12 = uVar12 + 1;
         goto LAB_00111630;
      }

      LAB_00111676:local_b8 = iVar11;
      Vector<RenderingDeviceCommons::VertexAttribute>::push_back(local_c8);
      if (( param_4 ) && ( uVar12 < 3 )) {
         uVar12 = uVar12 + 1;
         local_b8 = iVar11 + 0xc;
         Vector<RenderingDeviceCommons::VertexAttribute>::push_back(local_c8);
         goto LAB_00111630;
      }

      LAB_001116b5:uVar12 = uVar12 + 1;
   }
 while ( uVar12 != 0xc );
   lVar8 = 0;
   lVar4 = local_c0;
   do {
      while (true) {
         if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) <= lVar8 )) {
            pVVar5 = (Vector*)RenderingDevice::get_singleton();
            uVar6 = RenderingDevice::vertex_format_create(pVVar5);
            lVar8 = local_c0;
            if (local_c0 != 0) {
               LOCK();
               plVar2 = (long*)( local_c0 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_c0 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return uVar6;
         }

         lVar9 = lVar8 * 0x14;
         if (( (int*)( lVar4 + lVar9 ) )[3] != 0) break;
         LAB_001116f0:lVar8 = lVar8 + 1;
      }
;
      iVar11 = *(int*)( lVar4 + lVar9 );
      if (( iVar11 == 0 ) || ( iVar11 == 0xc )) {
         uVar3 = *param_5;
         CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write((CowData<RenderingDeviceCommons::VertexAttribute>*)&local_c0);
         *(uint*)( local_c0 + 0xc + lVar9 ) = uVar3;
         lVar4 = local_c0;
         goto LAB_001116f0;
      }

      if (( iVar11 - 0xdU < 2 ) || ( iVar11 < 3 )) {
         CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write((CowData<RenderingDeviceCommons::VertexAttribute>*)&local_c0);
         *(int*)( local_c0 + 0xc + lVar9 ) = local_d0;
         lVar4 = local_c0;
         goto LAB_001116f0;
      }

      if (iVar11 < 10) {
         CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write((CowData<RenderingDeviceCommons::VertexAttribute>*)&local_c0);
         *(uint*)( local_c0 + 0xc + lVar9 ) = uVar10;
         lVar4 = local_c0;
         goto LAB_001116f0;
      }

      CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write((CowData<RenderingDeviceCommons::VertexAttribute>*)&local_c0);
      lVar8 = lVar8 + 1;
      *(uint*)( local_c0 + 0xc + lVar9 ) = local_dc;
      lVar4 = local_c0;
   }
 while ( true );
}
/* RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask(RendererRD::MeshStorage::Mesh::Surface::Version&,
   RendererRD::MeshStorage::Mesh::Surface*, unsigned long, bool,
   RendererRD::MeshStorage::MeshInstance::Surface*, unsigned int, unsigned int) */void RendererRD::MeshStorage::_mesh_surface_generate_version_for_input_mask(MeshStorage *this, Version *param_1, Surface *param_2, ulong param_3, bool param_4, Surface *param_5, uint param_6, uint param_7) {
   long *plVar1;
   uint uVar2;
   undefined8 uVar3;
   ulong uVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   Surface *pSVar8;
   long in_FS_OFFSET;
   ulong local_b0;
   uint local_6c;
   Vector local_68[8];
   long local_60;
   Vector<unsigned_long> local_58[8];
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6c = 0;
   uVar7 = 0;
   uVar3 = _mesh_surface_generate_vertex_format(this, *(ulong*)( param_2 + 8 ), param_3, param_5 != (Surface*)0x0, param_4, &local_6c);
   local_60 = 0;
   *(undefined8*)( param_1 + 0x18 ) = uVar3;
   local_50 = 0;
   uVar5 = *(ulong*)( param_2 + 8 );
   LAB_00111b6b:do {
      uVar4 = uVar7 & 0xffffffff;
      if (( uVar5 >> ( uVar7 & 0x3f ) & 1 ) != 0) goto LAB_00111bd2;
      LAB_00111b73:lVar6 = *(long*)( this + uVar7 * 8 + 0x50 );
      LAB_00111b7d:if (( param_3 >> ( uVar4 & 0x3f ) & 1 ) == 0) goto LAB_00111bb8;
      LAB_00111b83:do {
         local_b0 = 0;
         LAB_00111b8c:Vector<RID>::push_back((Vector<RID>*)local_68, lVar6);
         Vector<unsigned_long>::push_back(local_58, local_b0);
         if (( (int)uVar7 < 3 ) && ( param_4 )) {
            if (( param_5 == (Surface*)0x0 ) || ( *(long*)( this + uVar7 * 8 + 0x50 ) == lVar6 )) {
               Vector<RID>::push_back((Vector<RID>*)local_68, lVar6);
            }
 else {
               Vector<RID>::push_back((Vector<RID>*)local_68, *(undefined8*)( param_5 + (ulong)param_7 * 8 ));
            }

            uVar7 = uVar7 + 1;
            Vector<unsigned_long>::push_back(local_58, local_b0);
         }
 else {
            LAB_00111bb8:uVar7 = uVar7 + 1;
            if (uVar7 == 0xc) {
               *(ulong*)param_1 = param_3;
               param_1[0x10] = (Version)param_4;
               *(uint*)( param_1 + 8 ) = param_6;
               *(uint*)( param_1 + 0xc ) = param_7;
               uVar2 = RenderingDevice::get_singleton();
               uVar3 = RenderingDevice::vertex_array_create(uVar2, ( ulong ) * (uint*)( param_2 + 0x28 ), *(Vector**)( param_1 + 0x18 ), local_68);
               lVar6 = local_50;
               *(undefined8*)( param_1 + 0x20 ) = uVar3;
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

               lVar6 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

         }

         uVar5 = *(ulong*)( param_2 + 8 );
         uVar4 = uVar7 & 0xffffffff;
         if (( uVar5 >> ( uVar7 & 0x3f ) & 1 ) == 0) goto LAB_00111b73;
         LAB_00111bd2:if (9 < uVar7) {
            lVar6 = *(long*)( param_2 + 0x20 );
            goto LAB_00111b7d;
         }

         if (2 < uVar7) {
            lVar6 = *(long*)( param_2 + 0x18 );
            if (( param_3 >> ( uVar7 & 0x3f ) & 1 ) == 0) goto LAB_00111c40;
            goto LAB_00111b83;
         }

         if (uVar7 != 2) goto LAB_00111c10;
         lVar6 = *(long*)( this + 0x60 );
      }
 while ( ( param_3 & 4 ) != 0 );
      uVar7 = 3;
   }
 while ( true );
   LAB_00111c10:local_b0 = 0;
   if (uVar7 == 1) {
      local_b0 = ( ulong )(*(int*)( param_2 + 0x28 ) * local_6c);
   }

   pSVar8 = param_2 + 0x10;
   if (param_5 != (Surface*)0x0) {
      pSVar8 = (Surface*)( param_5 + (ulong)param_6 * 8 );
   }

   lVar6 = *(long*)pSVar8;
   if (( param_3 >> ( uVar4 & 0x3f ) & 1 ) == 0) {
      LAB_00111c40:uVar7 = uVar7 + 1;
      goto LAB_00111b6b;
   }

   goto LAB_00111b8c;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* RendererRD::MeshStorage::mesh_instance_set_skeleton(RID, RID) [clone .cold] */void RendererRD::MeshStorage::mesh_instance_set_skeleton(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::mesh_instance_set_canvas_item_transform(RID, Transform2D const&) [clone
   .cold] */void RendererRD::MeshStorage::mesh_instance_set_canvas_item_transform(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   undefined8 *unaff_RBX;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   _DAT_00000090 = *unaff_RBX;
   uRam0000000000000098 = unaff_RBX[1];
   _DAT_000000a0 = unaff_RBX[2];
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned long>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_long>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write() [clone .isra.0] [clone .cold]
    */void CowData<RenderingDeviceCommons::VertexAttribute>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::MeshStorage::mesh_instance_check_for_update(RID) [clone .cold] */void RendererRD::MeshStorage::mesh_instance_check_for_update(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<float>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::MeshStorage::mesh_instance_free(RID) [clone .cold] */void RendererRD::MeshStorage::mesh_instance_free(undefined8 param_1, undefined8 param_2) {
   code *pcVar1;
   int unaff_R13D;
   if (unaff_R13D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RenderingDevice::Uniform>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RenderingDevice::Uniform>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<true>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<true>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011365e(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00113676(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RenderingServer::SurfaceData::LOD>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::MeshStorage::mesh_instance_create(RID) [clone .cold] */void RendererRD::MeshStorage::mesh_instance_create(undefined8 param_1, undefined8 param_2, undefined8 param_3) {
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
}
/* SkeletonShaderRD::~SkeletonShaderRD() */void SkeletonShaderRD::~SkeletonShaderRD(SkeletonShaderRD *this) {
   *(undefined***)this = &PTR__SkeletonShaderRD_0011a6f8;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* SkeletonShaderRD::~SkeletonShaderRD() */void SkeletonShaderRD::~SkeletonShaderRD(SkeletonShaderRD *this) {
   *(undefined***)this = &PTR__SkeletonShaderRD_0011a6f8;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
}
/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */void CowData<float>::_ref(CowData<float> *this, CowData *param_1) {
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
/* RendererRD::MeshStorage::Mesh::~Mesh() */void RendererRD::MeshStorage::Mesh::~Mesh(Mesh *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   Dependency::~Dependency((Dependency*)( this + 0xa8 ));
   if (*(long*)( this + 0xa0 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0xa0 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0xa0 );
         *(undefined8*)( this + 0xa0 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   pvVar1 = *(void**)( this + 0x78 );
   if (pvVar1 != (void*)0x0) {
      if (*(int*)( this + 0x9c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x98 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x90 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x98 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0x9c ) = 0;
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(*(void**)( this + 0x88 ), false);
      Memory::free_static(*(void**)( this + 0x80 ), false);
      Memory::free_static(*(void**)( this + 0x90 ), false);
   }

   plVar4 = *(long**)( this + 0x68 );
   if (plVar4 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar4;
         if (pvVar1 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0011393e;
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
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar4 = *(long**)( this + 0x68 );
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }

   LAB_0011393e:if (*(long*)( this + 0x60 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x60 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x60 );
         *(undefined8*)( this + 0x60 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Dependency*, HashMapHasherDefault, HashMapComparatorDefault<Dependency*>
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
      if (local_88 != (Dependency*)0x0) goto LAB_00113b1f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_00113b1f:if (uVar44 != 0) {
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
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_00113fc1;
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
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC136 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Dependency*)*in_RSI;
         goto LAB_00113fc1;
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
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
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
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_00113fc1:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* RendererRD::MeshStorage::MeshInstance::~MeshInstance() */void RendererRD::MeshStorage::MeshInstance::~MeshInstance(MeshInstance *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   plVar1 = *(long**)( this + 0x70 );
   if (plVar1 != (long*)0x0) {
      lVar2 = *(long*)( this + 0x80 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x88 );
      }

      lVar3 = *(long*)( this + 0x88 );
      if (lVar3 != 0) {
         *(long*)( lVar3 + 0x10 ) = lVar2;
      }

      if (this + 0x70 == (MeshInstance*)*plVar1) {
         *plVar1 = *(long*)( this + 0x80 );
      }

      if (this + 0x70 == (MeshInstance*)plVar1[1]) {
         plVar1[1] = lVar3;
      }

   }

   plVar1 = *(long**)( this + 0x50 );
   if (plVar1 != (long*)0x0) {
      lVar2 = *(long*)( this + 0x60 );
      if (lVar2 != 0) {
         *(undefined8*)( lVar2 + 0x18 ) = *(undefined8*)( this + 0x68 );
      }

      lVar3 = *(long*)( this + 0x68 );
      if (lVar3 != 0) {
         *(long*)( lVar3 + 0x10 ) = lVar2;
      }

      if (this + 0x50 == (MeshInstance*)*plVar1) {
         *plVar1 = *(long*)( this + 0x60 );
      }

      if (this + 0x50 == (MeshInstance*)plVar1[1]) {
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
}
/* WARNING: Removing unreachable block (ram,0x001143c0) *//* WARNING: Removing unreachable block (ram,0x001144f0) *//* WARNING: Removing unreachable block (ram,0x00114669) *//* WARNING: Removing unreachable block (ram,0x001144fc) *//* WARNING: Removing unreachable block (ram,0x00114506) *//* WARNING: Removing unreachable block (ram,0x0011464b) *//* WARNING: Removing unreachable block (ram,0x00114512) *//* WARNING: Removing unreachable block (ram,0x0011451c) *//* WARNING: Removing unreachable block (ram,0x0011462d) *//* WARNING: Removing unreachable block (ram,0x00114528) *//* WARNING: Removing unreachable block (ram,0x00114532) *//* WARNING: Removing unreachable block (ram,0x0011460f) *//* WARNING: Removing unreachable block (ram,0x0011453e) *//* WARNING: Removing unreachable block (ram,0x00114548) *//* WARNING: Removing unreachable block (ram,0x001145f1) *//* WARNING: Removing unreachable block (ram,0x00114554) *//* WARNING: Removing unreachable block (ram,0x0011455e) *//* WARNING: Removing unreachable block (ram,0x001145d3) *//* WARNING: Removing unreachable block (ram,0x00114566) *//* WARNING: Removing unreachable block (ram,0x00114570) *//* WARNING: Removing unreachable block (ram,0x001145b8) *//* WARNING: Removing unreachable block (ram,0x00114578) *//* WARNING: Removing unreachable block (ram,0x0011458e) *//* WARNING: Removing unreachable block (ram,0x0011459a) *//* String vformat<unsigned long, unsigned long>(String const&, unsigned long const, unsigned long
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

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<RendererRD::MeshStorage::Mesh*, HashMapHasherDefault,
   HashMapComparatorDefault<RendererRD::MeshStorage::Mesh*> >::insert(RendererRD::MeshStorage::Mesh*
   const&) */undefined1[16];HashSet<RendererRD::MeshStorage::Mesh*,HashMapHasherDefault,HashMapComparatorDefault<RendererRD::MeshStorage::Mesh*>>::insert(Mesh **param_1) {
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
      if (local_88 != (Mesh*)0x0) goto LAB_001146df;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_001146df:if (uVar44 != 0) {
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
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_00114b81;
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
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC136 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Mesh*)*in_RSI;
         goto LAB_00114b81;
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
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
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
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_00114b81:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* Vector<float>::append_array(Vector<float>) */void Vector<float>::append_array(Vector<float> *this, long param_2) {
   undefined4 uVar1;
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
         lVar6 = 0;
         lVar5 = lVar2;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar5 = lVar2 + lVar6;
      }

      CowData<float>::resize<false>((CowData<float>*)( this + 8 ), lVar5);
      if (0 < lVar2) {
         lVar6 = lVar6 << 2;
         lVar5 = 0;
         do {
            lVar3 = *(long*)( param_2 + 8 );
            if (lVar3 == 0) {
               lVar7 = 0;
               LAB_00114d5d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar7 = *(long*)( lVar3 + -8 );
            if (lVar7 <= lVar5) goto LAB_00114d5d;
            uVar1 = *(undefined4*)( lVar3 + lVar5 * 4 );
            lVar5 = lVar5 + 1;
            CowData<float>::_copy_on_write((CowData<float>*)( this + 8 ));
            *(undefined4*)( *(long*)( this + 8 ) + lVar6 ) = uVar1;
            lVar6 = lVar6 + 4;
         }
 while ( lVar5 != lVar2 );
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RID>::resize<false>(long) */undefined8 CowData<RID>::resize<false>(CowData<RID> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00115058:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   if (uVar4 == 0xffffffffffffffff) goto LAB_00115058;
   if (param_1 <= lVar7) {
      puVar6 = *(undefined8**)this;
      if (uVar4 + 1 == lVar3) {
         if (puVar6 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

      }
 else {
         puVar5 = (undefined8*)Memory::realloc_static(puVar6 + -2, uVar4 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) {
            LAB_00115090:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
            return 6;
         }

         puVar6 = puVar5 + 2;
         *puVar5 = 1;
         *(undefined8**)this = puVar6;
      }

      puVar6[-1] = param_1;
      return 0;
   }

   if (uVar4 + 1 == lVar3) {
      puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar6[-1];
      LAB_00114f99:if (param_1 <= lVar3) goto LAB_00114f11;
   }
 else {
      if (lVar7 != 0) {
         puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
         if (puVar5 == (undefined8*)0x0) goto LAB_00115090;
         puVar6 = puVar5 + 2;
         *puVar5 = 1;
         *(undefined8**)this = puVar6;
         lVar3 = puVar5[1];
         goto LAB_00114f99;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar6 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar6;
      lVar3 = 0;
   }

   memset(puVar6 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_00114f11:puVar6[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00115250) *//* WARNING: Removing unreachable block (ram,0x00115380) *//* WARNING: Removing unreachable block (ram,0x001154f9) *//* WARNING: Removing unreachable block (ram,0x0011538c) *//* WARNING: Removing unreachable block (ram,0x00115396) *//* WARNING: Removing unreachable block (ram,0x001154db) *//* WARNING: Removing unreachable block (ram,0x001153a2) *//* WARNING: Removing unreachable block (ram,0x001153ac) *//* WARNING: Removing unreachable block (ram,0x001154bd) *//* WARNING: Removing unreachable block (ram,0x001153b8) *//* WARNING: Removing unreachable block (ram,0x001153c2) *//* WARNING: Removing unreachable block (ram,0x0011549f) *//* WARNING: Removing unreachable block (ram,0x001153ce) *//* WARNING: Removing unreachable block (ram,0x001153d8) *//* WARNING: Removing unreachable block (ram,0x00115481) *//* WARNING: Removing unreachable block (ram,0x001153e4) *//* WARNING: Removing unreachable block (ram,0x001153ee) *//* WARNING: Removing unreachable block (ram,0x00115463) *//* WARNING: Removing unreachable block (ram,0x001153f6) *//* WARNING: Removing unreachable block (ram,0x00115400) *//* WARNING: Removing unreachable block (ram,0x00115448) *//* WARNING: Removing unreachable block (ram,0x00115408) *//* WARNING: Removing unreachable block (ram,0x0011541e) *//* WARNING: Removing unreachable block (ram,0x0011542a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* RID_Alloc<RendererRD::MeshStorage::MultiMesh, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::MultiMesh,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_0011a758;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      LAB_00115752:if ((uint)uVar5 < (uint)uVar7) goto LAB_00115793;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar8[lVar6], false);
         lVar3 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar5 / uVar7) <= (uint)lVar6) break;
         puVar8 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
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
            lVar6 = ( uVar9 % uVar7 ) * 0x160 + puVar8[uVar9 / uVar7];
            if (-1 < *(int*)( lVar6 + 0x158 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0x128 ));
               if (*(long*)( lVar6 + 0x120 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x120 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0x120 );
                     *(undefined8*)( lVar6 + 0x120 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x110 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x110 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0x110 );
                     *(undefined8*)( lVar6 + 0x110 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x100 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x100 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0x100 );
                     *(undefined8*)( lVar6 + 0x100 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 0x78 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x78 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar6 + 0x78 );
                     *(undefined8*)( lVar6 + 0x78 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               uVar7 = ( ulong ) * (uint*)( this + 0x18 );
               puVar8 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 < uVar5 );
         goto LAB_00115752;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00115793;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar8 = *(undefined8**)( this + 8 );
   LAB_00115793:if (puVar8 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar8, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::MultiMesh, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::MultiMesh,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererRD::MeshStorage::Skeleton, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::Skeleton,true> *this) {
   long *plVar1;
   long lVar2;
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
   *(undefined***)this = &PTR__RID_Alloc_0011a778;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_001159d2:if ((uint)uVar5 < (uint)uVar8) goto LAB_00115a13;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
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
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x98;
            if (-1 < *(int*)( lVar7 + 0x90 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x60 ));
               if (*(void**)( lVar7 + 0x10 ) != (void*)0x0) {
                  if (*(int*)( lVar7 + 8 ) != 0) {
                     *(undefined4*)( lVar7 + 8 ) = 0;
                  }

                  Memory::free_static(*(void**)( lVar7 + 0x10 ), false);
               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_001159d2;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00115a13;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_00115a13:if (puVar9 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar9, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::Skeleton, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::Skeleton,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererRD::MeshStorage::MeshInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::MeshInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::MeshInstance,false> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   MeshInstance *this_00;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar8 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011a738;
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_00115c2b:if ((uint)uVar4 < uVar8) goto LAB_00115c6b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar5[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar5 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
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

      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (MeshInstance*)( ( uVar6 % (ulong)uVar8 ) * 0xb0 + puVar5[uVar6 / uVar8] );
            if (-1 < *(int*)( this_00 + 0xa8 )) {
               RendererRD::MeshStorage::MeshInstance::~MeshInstance(this_00);
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_00115c2b;
      }

      if (uVar8 != 0) goto LAB_00115c6b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_00115c6b:if (puVar5 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar5, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::Mesh, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::Mesh,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::Mesh,true> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   Mesh *this_00;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011a718;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_00115e6b:if ((uint)uVar4 < uVar8) goto LAB_00115eab;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar5[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar5 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
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

      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (Mesh*)( ( uVar6 % (ulong)uVar8 ) * 0xe0 + puVar5[uVar6 / uVar8] );
            if (-1 < *(int*)( this_00 + 0xd8 )) {
               RendererRD::MeshStorage::Mesh::~Mesh(this_00);
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_00115e6b;
      }

      if (uVar8 != 0) goto LAB_00115eab;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_00115eab:if (puVar5 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar5, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::MeshInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::MeshInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::MeshInstance,false> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   MeshInstance *this_00;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar8 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011a738;
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_001160ab:if ((uint)uVar4 < uVar8) goto LAB_001160eb;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar5[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar5 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
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

      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (MeshInstance*)( ( uVar6 % (ulong)uVar8 ) * 0xb0 + puVar5[uVar6 / uVar8] );
            if (-1 < *(int*)( this_00 + 0xa8 )) {
               RendererRD::MeshStorage::MeshInstance::~MeshInstance(this_00);
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_001160ab;
      }

      if (uVar8 != 0) goto LAB_001160eb;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_001160eb:if (puVar5 != (undefined8*)0x0) {
      Memory::free_static(puVar5, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::Mesh, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::Mesh,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::Mesh,true> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   Mesh *this_00;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011a718;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_001162cb:if ((uint)uVar4 < uVar8) goto LAB_0011630b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar5[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar4 / uVar8) <= (uint)lVar7) break;
         puVar5 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String*)&local_48);
      pcVar3 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
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

      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar6 = 0;
         do {
            this_00 = (Mesh*)( ( uVar6 % (ulong)uVar8 ) * 0xe0 + puVar5[uVar6 / uVar8] );
            if (-1 < *(int*)( this_00 + 0xd8 )) {
               RendererRD::MeshStorage::Mesh::~Mesh(this_00);
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_001162cb;
      }

      if (uVar8 != 0) goto LAB_0011630b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_0011630b:if (puVar5 != (undefined8*)0x0) {
      Memory::free_static(puVar5, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::MeshInstance, false>::make_rid() */ulong RID_Alloc<RendererRD::MeshStorage::MeshInstance,false>::make_rid(RID_Alloc<RendererRD::MeshStorage::MeshInstance,false> *this) {
   void *pvVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   uint uVar8;
   undefined8 *puVar9;
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
      }
 else {
         uVar16 = ( ulong )((int)( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar12 = ( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar3 = Memory::realloc_static(*(void**)( this + 8 ), uVar16, false);
      *(long*)( this + 8 ) = lVar3;
      uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xb0, false);
      pvVar1 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar3 + lVar12 ) = uVar11;
      lVar4 = Memory::realloc_static(pvVar1, uVar16, false);
      *(long*)( this + 0x10 ) = lVar4;
      uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar6 = *(uint*)( this + 0x18 );
      lVar3 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar12 ) = uVar11;
      if (uVar6 != 0) {
         lVar4 = *(long*)( lVar3 + lVar12 );
         lVar5 = 0;
         puVar10 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar12 ) + 0xa8 );
         do {
            *puVar10 = 0xffffffff;
            puVar10 = puVar10 + 0x2c;
            *(int*)( lVar4 + lVar5 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar5;
            uVar6 = *(uint*)( this + 0x18 );
            lVar5 = lVar5 + 1;
         }
 while ( (uint)lVar5 < uVar6 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar6;
      uVar13 = *(uint*)( this + 0x20 );
   }
 else {
      lVar3 = *(long*)( this + 0x10 );
      uVar6 = *(uint*)( this + 0x18 );
   }

   uVar13 = *(uint*)( *(long*)( lVar3 + ( (ulong)uVar13 / (ulong)uVar6 ) * 8 ) + ( (ulong)uVar13 % (ulong)uVar6 ) * 4 );
   uVar16 = (ulong)uVar13;
   LOCK();
   UNLOCK();
   uVar7 = (int)RID_AllocBase::base_id + 1;
   uVar8 = uVar7 & 0x7fffffff;
   if (uVar8 != 0x7fffffff) {
      lVar12 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar16 % (ulong)uVar6 ) * 0xb0 + *(long*)( lVar12 + ( uVar16 / uVar6 ) * 8 ) + 0xa8 ) = uVar8 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar14 = CONCAT44(uVar7, uVar13) & 0x7fffffffffffffff;
      if (( uVar14 != 0 ) && ( (uint)uVar14 < *(uint*)( this + 0x1c ) )) {
         puVar9 = (undefined8*)( ( uVar16 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xb0 + *(long*)( lVar12 + ( uVar16 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar9 + 0x15 ) < 0) {
            uVar13 = ( uint )(uVar14 >> 0x20);
            if (uVar13 == ( *(uint*)( puVar9 + 0x15 ) & 0x7fffffff )) {
               *(uint*)( puVar9 + 0x15 ) = uVar13;
               *puVar9 = 0;
               for (int i = 0; i < 8; i++) {
                  puVar9[( i + 1 )] = 0;
               }

               *(undefined2*)( puVar9 + 9 ) = 0;
               puVar9[10] = 0;
               puVar9[0xc] = 0;
               puVar9[0xd] = 0;
               puVar9[0xb] = puVar9;
               puVar9[0xe] = 0;
               puVar9[0xf] = puVar9;
               puVar9[0x10] = 0;
               puVar9[0x11] = 0;
               puVar9[0x12] = 0x3f800000;
               puVar9[0x13] = 0x3f80000000000000;
               puVar9[0x14] = 0;
               return uVar14;
            }

            pcVar15 = "Attempting to initialize the wrong RID";
            uVar11 = 0xfc;
         }
 else {
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
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
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
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
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
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
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
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00116b60:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00116b60;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00116a39:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00116a39;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00116bb6;
   }

   if (lVar10 == lVar7) {
      LAB_00116adf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00116bb6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00116aca;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00116adf;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_00116aca:puVar9[-1] = param_1;
   return 0;
}
/* CowData<RenderingDevice::Uniform>::_unref() */void CowData<RenderingDevice::Uniform>::_unref(CowData<RenderingDevice::Uniform> *this) {
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
               if (*(long*)( lVar6 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x20 );
                     *(undefined8*)( lVar6 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x28;
            }
 while ( lVar3 != lVar7 );
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
}
/* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
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
         }
 while ( uVar22 != uVar26 );
      }
 else {
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
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
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
   lStack_70 = 0x117380;
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
         }
 while ( uVar43 != uVar31 );
         pDVar45 = *param_1;
         iVar36 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar31);
         lStack_70 = 0x1173ca;
         memset(__s_00, 0, uVar29);
         pDVar45 = *param_1;
         iVar36 = *(int*)( this + 0x2c );
      }

      LAB_001173d9:if (iVar36 == 0) goto LAB_00117470;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar39 = *(long*)( this + 0x10 );
      goto LAB_00117084;
   }

   pDVar45 = *param_1;
   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_001173d9;
}
else{iVar36 = *(int*)( this + 0x2c );if (iVar36 == 0) {
   LAB_00117470:iVar36 = 0;
}
 else {
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
      }
 while ( ( uVar33 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar33 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar43,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar40 + uVar37 ) - SUB164(auVar6 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,lVar35 = SUB168(auVar7 * auVar19, 8),uVar38 <= SUB164(auVar7 * auVar19, 8) );
   }

   LAB_00117084:uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
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
            goto LAB_0011716e;
         }

         uVar40 = uVar40 + 1;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar41;
         lVar34 = SUB168(auVar9 * auVar21, 8);
         uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar33 = SUB164(auVar9 * auVar21, 8);
      }
 while ( ( uVar37 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar37 * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar31 * 4 ) + uVar33 ) - SUB164(auVar10 * auVar22, 8)) * lVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar41,lVar35 = SUB168(auVar11 * auVar23, 8),uVar40 <= SUB164(auVar11 * auVar23, 8) );
   }

}
}if ((float)uVar43 * __LC136 < (float)( iVar36 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011716e;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
pDVar45 = *param_1;pauVar30 = (undefined1(*) [16])operator_new(0x20, "");*(DependencyTracker**)pauVar30[1] = pDVar45;*(undefined4*)( pauVar30[1] + 8 ) = 0;*pauVar30 = (undefined1[16])0x0;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
}
 else {
   *puVar3 = pauVar30;
   *(undefined8**)( *pauVar30 + 8 ) = puVar3;
}
pDVar45 = *param_1;lVar39 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar30;uVar31 = (long)pDVar45 * 0x3ffff - 1;uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;uVar31 = uVar31 >> 0x16 ^ uVar31;uVar43 = uVar31 & 0xffffffff;if ((int)uVar31 == 0) {
   uVar43 = 1;
}
uVar38 = 0;lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar40 = (uint)uVar43;uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar37);auVar12._8_8_ = 0;auVar12._0_8_ = uVar43 * lVar2;auVar24._8_8_ = 0;auVar24._0_8_ = uVar31;lStack_70 = SUB168(auVar12 * auVar24, 8);lVar34 = *(long*)( this + 8 );puVar1 = (uint*)( lVar39 + lStack_70 * 4 );iVar36 = SUB164(auVar12 * auVar24, 8);uVar33 = *puVar1;pauVar28 = pauVar30;while (uVar33 != 0) {
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
}
;*(undefined1(**) [16])( lVar34 + lStack_70 * 8 ) = pauVar28;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011716e:auVar47._8_8_ = lStack_70;auVar47._0_8_ = pauVar30[1] + 8;return auVar47;}/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* CowData<RenderingServer::SurfaceData::LOD>::_unref() */void CowData<RenderingServer::SurfaceData::LOD>::_unref(CowData<RenderingServer::SurfaceData::LOD> *this) {
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
            }
 while ( lVar3 != lVar7 );
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
}
/* RenderingServer::SurfaceData::~SurfaceData() */void RenderingServer::SurfaceData::~SurfaceData(SurfaceData *this) {
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
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned long>::resize<false>(long) */undefined8 CowData<unsigned_long>::resize<false>(CowData<unsigned_long> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
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
      lVar7 = 0;
      lVar3 = 0;
   }
 else {
      lVar7 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar7) {
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
      lVar3 = lVar7 * 8;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar4 = param_1 * 8 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = uVar4 | uVar4 >> 0x20;
      if (uVar4 != 0xffffffffffffffff) {
         if (lVar7 < param_1) {
            if (uVar4 + 1 == lVar3) {
               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) goto LAB_001178d9;
            }
 else {
               if (lVar7 == 0) {
                  puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                     return 6;
                  }

                  *puVar5 = 1;
                  puVar5[1] = 0;
               }
 else {
                  puVar5 = (undefined8*)Memory::realloc_static((void*)( *(long*)this + -0x10 ), uVar4 + 0x11, false);
                  if (puVar5 == (undefined8*)0x0) goto LAB_001179c0;
                  *puVar5 = 1;
               }

               puVar5 = puVar5 + 2;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }
 else {
            puVar5 = *(undefined8**)this;
            if (uVar4 + 1 == lVar3) {
               if (puVar5 == (undefined8*)0x0) {
                  LAB_001178d9:_DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }
 else {
               puVar6 = (undefined8*)Memory::realloc_static(puVar5 + -2, uVar4 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  LAB_001179c0:_err_print_error("_realloc", "./core/templates/cowdata.h", 0x1a9, "Parameter \"mem_new\" is null.", 0, 0);
                  return 6;
               }

               puVar5 = puVar6 + 2;
               *puVar6 = 1;
               *(undefined8**)this = puVar5;
            }

            puVar5[-1] = param_1;
         }

         return 0;
      }

   }

   _err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
   return 6;
}
/* CowData<RenderingDevice::Uniform>::_realloc(long) */undefined8 CowData<RenderingDevice::Uniform>::_realloc(CowData<RenderingDevice::Uniform> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDevice::Uniform>::resize<false>(long) */undefined8 CowData<RenderingDevice::Uniform>::resize<false>(CowData<RenderingDevice::Uniform> *this, long param_1) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar9 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar9 = lVar8 * 0x28;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x28 == 0) {
      LAB_00117d40:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x28 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar11 = uVar10 + 1;
   if (lVar11 == 0) goto LAB_00117d40;
   if (param_1 <= lVar8) {
      lVar8 = *(long*)this;
      uVar10 = param_1;
      while (lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            LAB_00117bd1:if (lVar11 != lVar9) {
               uVar4 = _realloc(this, lVar11);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar8 = *(long*)this;
               if (lVar8 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            lVar2 = lVar8 + uVar10 * 0x28;
            if (*(long*)( lVar2 + 0x20 ) != 0) break;
            uVar10 = uVar10 + 1;
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_00117bd1;
         }
;
         LOCK();
         plVar1 = (long*)( *(long*)( lVar2 + 0x20 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar8 = *(long*)( lVar2 + 0x20 );
            *(undefined8*)( lVar2 + 0x20 ) = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

         uVar10 = uVar10 + 1;
         lVar8 = *(long*)this;
      }
;
      goto LAB_00117d96;
   }

   if (lVar11 == lVar9) {
      LAB_00117cb3:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00117d96:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar7[-1];
      if (param_1 <= lVar8) goto LAB_00117c90;
   }
 else {
      if (lVar8 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00117cb3;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar7;
      lVar8 = 0;
   }

   uVar4 = _LC180;
   puVar5 = puVar7 + lVar8 * 5;
   do {
      *puVar5 = uVar4;
      puVar6 = puVar5 + 5;
      *(undefined1*)( puVar5 + 1 ) = 0;
      puVar5[2] = 0;
      puVar5[4] = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar7 + param_1 * 5 );
   LAB_00117c90:puVar7[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00117f48) *//* WARNING: Removing unreachable block (ram,0x00118078) *//* WARNING: Removing unreachable block (ram,0x00118240) *//* WARNING: Removing unreachable block (ram,0x00118084) *//* WARNING: Removing unreachable block (ram,0x0011808e) *//* WARNING: Removing unreachable block (ram,0x00118220) *//* WARNING: Removing unreachable block (ram,0x0011809a) *//* WARNING: Removing unreachable block (ram,0x001180a4) *//* WARNING: Removing unreachable block (ram,0x00118200) *//* WARNING: Removing unreachable block (ram,0x001180b0) *//* WARNING: Removing unreachable block (ram,0x001180ba) *//* WARNING: Removing unreachable block (ram,0x001181e0) *//* WARNING: Removing unreachable block (ram,0x001180c6) *//* WARNING: Removing unreachable block (ram,0x001180d0) *//* WARNING: Removing unreachable block (ram,0x001181c0) *//* WARNING: Removing unreachable block (ram,0x001180dc) *//* WARNING: Removing unreachable block (ram,0x001180e6) *//* WARNING: Removing unreachable block (ram,0x001181a0) *//* WARNING: Removing unreachable block (ram,0x001180f2) *//* WARNING: Removing unreachable block (ram,0x001180fc) *//* WARNING: Removing unreachable block (ram,0x00118180) *//* WARNING: Removing unreachable block (ram,0x00118104) *//* WARNING: Removing unreachable block (ram,0x0011811a) *//* WARNING: Removing unreachable block (ram,0x00118126) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* RID_Alloc<RendererRD::MeshStorage::Mesh, true>::allocate_rid() */ulong RID_Alloc<RendererRD::MeshStorage::Mesh,true>::allocate_rid(RID_Alloc<RendererRD::MeshStorage::Mesh,true> *this) {
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
         }
 else {
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
         goto LAB_00118448;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xe0, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0xd8 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x38;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar7 );
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0xe0 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0xd8 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00118448:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::MultiMesh, true>::allocate_rid() */ulong RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::allocate_rid(RID_Alloc<RendererRD::MeshStorage::MultiMesh,true> *this) {
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
         }
 else {
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
         goto LAB_001187b5;
      }

      uVar10 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x160, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar10 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar10 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar10 * 8 );
         lVar9 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar10 * 8 ) + 0x158 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x58;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar7 );
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0x160 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0x158 ) = uVar13 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_001187b5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::Skeleton, true>::allocate_rid() */ulong RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::allocate_rid(RID_Alloc<RendererRD::MeshStorage::Skeleton,true> *this) {
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
         }
 else {
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
         goto LAB_00118b25;
      }

      uVar10 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x98, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar10 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar10 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar10 * 8 );
         lVar9 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar10 * 8 ) + 0x90 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x26;
            *(int*)( lVar3 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar7 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar7 );
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
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0x98 + 0x90 ) = uVar13 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00118b25:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar10;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<DependencyTracker*, unsigned int, HashMapHasherDefault,
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
            }
 while ( uVar34 != uVar24 );
            goto LAB_00118d76;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_00118d81;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_00118d81;
   }
 else {
      LAB_00118d76:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_00118d81:if (uVar32 != 0) {
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
                  goto LAB_00119048;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar33 + 1) * lVar4;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar34;
               lVar29 = SUB168(auVar7 * auVar15, 8);
               uVar23 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
               uVar33 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar23 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar23 * lVar4,auVar16._8_8_ = 0,auVar16._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)param_2[10] * 4 ) + uVar33 ) - SUB164(auVar8 * auVar16, 8)) * lVar4,auVar17._8_8_ = 0,auVar17._0_8_ = uVar34,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

      }

   }

   if ((float)uVar2 * __LC136 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_00119048;
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
   }
 else if (in_R8B == '\0') {
      *puVar5 = pDVar25;
      *(undefined8**)( pDVar25 + 8 ) = puVar5;
      *(DependencyTracker**)( param_2 + 8 ) = pDVar25;
   }
 else {
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
   }
;
   *(DependencyTracker**)( lVar29 + lVar30 * 8 ) = pDVar22;
   *puVar1 = uVar23;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_00119048:*param_1 = pDVar25;
   return;
}
/* RID_Alloc<RendererRD::MeshStorage::Mesh, true>::initialize_rid(RID, RendererRD::MeshStorage::Mesh
   const&) */void RID_Alloc<RendererRD::MeshStorage::Mesh,true>::initialize_rid(RID_Alloc<RendererRD::MeshStorage::Mesh,true> *this, ulong param_2, undefined8 *param_3) {
   ulong uVar1;
   undefined4 uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined1(*pauVar10)[16];
   undefined8 *puVar11;
   long lVar12;
   undefined8 uVar13;
   long lVar14;
   long lVar15;
   undefined8 *puVar16;
   undefined8 *puVar17;
   long *plVar18;
   uint uVar19;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar16 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xe0 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
      if ((int)*(uint*)( puVar16 + 0x1b ) < 0) {
         uVar19 = ( uint )(param_2 >> 0x20);
         if (uVar19 == ( *(uint*)( puVar16 + 0x1b ) & 0x7fffffff )) {
            *(uint*)( puVar16 + 0x1b ) = uVar19;
            uVar6 = param_3[3];
            uVar7 = param_3[4];
            uVar8 = param_3[6];
            uVar9 = param_3[7];
            *puVar16 = *param_3;
            uVar13 = param_3[1];
            puVar16[3] = uVar6;
            puVar16[4] = uVar7;
            puVar16[1] = uVar13;
            uVar2 = *(undefined4*)( param_3 + 2 );
            puVar16[6] = uVar8;
            puVar16[7] = uVar9;
            *(undefined4*)( puVar16 + 2 ) = uVar2;
            *(undefined1*)( (long)puVar16 + 0x14 ) = *(undefined1*)( (long)param_3 + 0x14 );
            puVar16[5] = param_3[5];
            puVar16[8] = param_3[8];
            puVar16[9] = param_3[9];
            uVar13 = param_3[10];
            puVar16[0xc] = 0;
            lVar12 = param_3[0xc];
            puVar16[10] = uVar13;
            if (lVar12 != 0) {
               CowData<RID>::_ref((CowData<RID>*)( puVar16 + 0xc ), (CowData*)( param_3 + 0xc ));
            }

            plVar18 = (long*)param_3[0xd];
            puVar16[0xd] = 0;
            if (( plVar18 != (long*)0x0 ) && ( puVar17 = (undefined8*)*plVar18 ),puVar17 != (undefined8*)0x0) {
               pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               puVar16[0xd] = pauVar10;
               *(undefined4*)pauVar10[1] = 0;
               *pauVar10 = (undefined1[16])0x0;
               do {
                  while (true) {
                     puVar11 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                     uVar13 = *puVar17;
                     puVar11[1] = 0;
                     *puVar11 = uVar13;
                     plVar18 = (long*)puVar16[0xd];
                     lVar12 = plVar18[1];
                     puVar11[3] = plVar18;
                     puVar11[2] = lVar12;
                     if (lVar12 != 0) {
                        *(undefined8**)( lVar12 + 8 ) = puVar11;
                     }

                     plVar18[1] = (long)puVar11;
                     if (*plVar18 != 0) break;
                     puVar17 = (undefined8*)puVar17[1];
                     *(int*)( plVar18 + 2 ) = (int)plVar18[2] + 1;
                     *plVar18 = (long)puVar11;
                     if (puVar17 == (undefined8*)0x0) goto LAB_00119354;
                  }
;
                  puVar17 = (undefined8*)puVar17[1];
                  *(int*)( plVar18 + 2 ) = (int)plVar18[2] + 1;
               }
 while ( puVar17 != (undefined8*)0x0 );
            }

            LAB_00119354:uVar13 = param_3[0xe];
            puVar16[0x13] = 0;
            *(undefined1(*) [16])( puVar16 + 0xf ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar16 + 0x11 ) = (undefined1[16])0x0;
            uVar1 = param_3[0x13];
            puVar16[0xe] = uVar13;
            puVar16[0x13] = uVar1;
            if ((int)( uVar1 >> 0x20 ) != 0) {
               uVar19 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
               uVar1 = (ulong)uVar19 * 4;
               uVar13 = Memory::alloc_static(uVar1, false);
               puVar16[0x12] = uVar13;
               uVar13 = Memory::alloc_static((ulong)uVar19 * 8, false);
               puVar16[0xf] = uVar13;
               uVar13 = Memory::alloc_static(uVar1, false);
               puVar16[0x11] = uVar13;
               lVar12 = Memory::alloc_static(uVar1, false);
               puVar16[0x10] = lVar12;
               if (*(int*)( (long)puVar16 + 0x9c ) != 0) {
                  lVar3 = puVar16[0xf];
                  lVar4 = param_3[0xf];
                  lVar14 = 0;
                  lVar5 = param_3[0x11];
                  lVar15 = puVar16[0x11];
                  do {
                     *(undefined8*)( lVar3 + lVar14 * 8 ) = *(undefined8*)( lVar4 + lVar14 * 8 );
                     *(undefined4*)( lVar15 + lVar14 * 4 ) = *(undefined4*)( lVar5 + lVar14 * 4 );
                     lVar14 = lVar14 + 1;
                  }
 while ( (uint)lVar14 < *(uint*)( (long)puVar16 + 0x9c ) );
               }

               if (uVar19 != 0) {
                  lVar3 = param_3[0x12];
                  lVar4 = puVar16[0x12];
                  lVar15 = 0;
                  lVar5 = param_3[0x10];
                  do {
                     *(undefined4*)( lVar4 + lVar15 ) = *(undefined4*)( lVar3 + lVar15 );
                     *(undefined4*)( lVar12 + lVar15 ) = *(undefined4*)( lVar5 + lVar15 );
                     lVar15 = lVar15 + 4;
                  }
 while ( uVar1 - lVar15 != 0 );
               }

            }

            puVar16[0x14] = 0;
            if (param_3[0x14] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar16 + 0x14 ), (CowData*)( param_3 + 0x14 ));
            }

            uVar19 = *(uint*)( param_3 + 0x1a );
            puVar16[0x1a] = 0;
            *(undefined1(*) [16])( puVar16 + 0x16 ) = (undefined1[16])0x0;
            uVar19 = *(uint*)( hash_table_size_primes + (ulong)uVar19 * 4 );
            *(undefined1(*) [16])( puVar16 + 0x18 ) = (undefined1[16])0x0;
            lVar12 = 1;
            if (5 < uVar19) {
               do {
                  if (uVar19 <= *(uint*)( hash_table_size_primes + lVar12 * 4 )) {
                     *(int*)( puVar16 + 0x1a ) = (int)lVar12;
                     goto LAB_00119441;
                  }

                  lVar12 = lVar12 + 1;
               }
 while ( lVar12 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
            }

            LAB_00119441:if (( *(int*)( (long)param_3 + 0xd4 ) != 0 ) && ( plVar18 = (long*)param_3[0x18] ),plVar18 != (long*)0x0) {
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_48, (uint*)( puVar16 + 0x15 ), (bool)( (char)plVar18 + '\x10' ));
                  plVar18 = (long*)*plVar18;
               }
 while ( plVar18 != (long*)0x0 );
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_00119647;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
      }
 else {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }

   LAB_00119647:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::Skeleton, true>::initialize_rid(RID,
   RendererRD::MeshStorage::Skeleton const&) */void RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::initialize_rid(RID_Alloc<RendererRD::MeshStorage::Skeleton,true> *this, ulong param_2, undefined1 *param_3) {
   undefined1 *puVar1;
   undefined1 uVar2;
   int iVar3;
   undefined4 uVar4;
   long lVar5;
   undefined8 uVar6;
   code *pcVar7;
   undefined8 uVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   long *plVar12;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x1c )) {
         puVar1 = (undefined1*)( *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x98 );
         if ((int)*(uint*)( puVar1 + 0x90 ) < 0) {
            uVar9 = ( uint )(param_2 >> 0x20);
            if (uVar9 == ( *(uint*)( puVar1 + 0x90 ) & 0x7fffffff )) {
               uVar2 = *param_3;
               iVar3 = *(int*)( param_3 + 8 );
               *(uint*)( puVar1 + 0x90 ) = uVar9;
               *puVar1 = uVar2;
               uVar4 = *(undefined4*)( param_3 + 4 );
               *(undefined8*)( puVar1 + 8 ) = 0;
               *(undefined4*)( puVar1 + 4 ) = uVar4;
               *(undefined8*)( puVar1 + 0x10 ) = 0;
               if (iVar3 != 0) {
                  uVar9 = iVar3 - 1U | iVar3 - 1U >> 1;
                  uVar9 = uVar9 | uVar9 >> 2;
                  uVar9 = uVar9 | uVar9 >> 4;
                  uVar9 = uVar9 | uVar9 >> 8;
                  uVar9 = ( uVar9 | uVar9 >> 0x10 ) + 1;
                  *(uint*)( puVar1 + 0xc ) = uVar9;
                  lVar10 = Memory::realloc_static((void*)0x0, (ulong)uVar9 * 4, false);
                  *(long*)( puVar1 + 0x10 ) = lVar10;
                  if (lVar10 == 0) {
                     _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar7 = (code*)invalidInstructionException();
                     ( *pcVar7 )();
                  }

                  *(int*)( puVar1 + 8 ) = iVar3;
                  uVar9 = *(uint*)( param_3 + 8 );
                  if (uVar9 != 0) {
                     lVar5 = *(long*)( param_3 + 0x10 );
                     lVar11 = 0;
                     do {
                        *(undefined4*)( lVar10 + lVar11 ) = *(undefined4*)( lVar5 + lVar11 );
                        lVar11 = lVar11 + 4;
                     }
 while ( (ulong)uVar9 << 2 != lVar11 );
                  }

               }

               uVar6 = *(undefined8*)( param_3 + 0x30 );
               uVar8 = *(undefined8*)( param_3 + 0x38 );
               *(undefined8*)( puVar1 + 0x18 ) = *(undefined8*)( param_3 + 0x18 );
               uVar2 = param_3[0x20];
               *(undefined8*)( puVar1 + 0x30 ) = uVar6;
               *(undefined8*)( puVar1 + 0x38 ) = uVar8;
               puVar1[0x20] = uVar2;
               *(undefined8*)( puVar1 + 0x28 ) = *(undefined8*)( param_3 + 0x28 );
               *(undefined8*)( puVar1 + 0x40 ) = *(undefined8*)( param_3 + 0x40 );
               *(undefined8*)( puVar1 + 0x48 ) = *(undefined8*)( param_3 + 0x48 );
               *(undefined8*)( puVar1 + 0x50 ) = *(undefined8*)( param_3 + 0x50 );
               uVar6 = *(undefined8*)( param_3 + 0x58 );
               *(undefined8*)( puVar1 + 0x88 ) = 0;
               *(undefined8*)( puVar1 + 0x58 ) = uVar6;
               uVar9 = *(uint*)( param_3 + 0x88 );
               *(undefined1(*) [16])( puVar1 + 0x68 ) = (undefined1[16])0x0;
               uVar9 = *(uint*)( hash_table_size_primes + (ulong)uVar9 * 4 );
               *(undefined1(*) [16])( puVar1 + 0x78 ) = (undefined1[16])0x0;
               lVar10 = 1;
               if (5 < uVar9) {
                  do {
                     if (uVar9 <= *(uint*)( hash_table_size_primes + lVar10 * 4 )) {
                        *(int*)( puVar1 + 0x88 ) = (int)lVar10;
                        goto LAB_00119814;
                     }

                     lVar10 = lVar10 + 1;
                  }
 while ( lVar10 != 0x1d );
                  _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
               }

               LAB_00119814:if (( *(int*)( param_3 + 0x8c ) != 0 ) && ( plVar12 = *(long**)( param_3 + 0x78 ) ),plVar12 != (long*)0x0) {
                  do {
                     HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar1 + 0x60 ), (bool)( (char)plVar12 + '\x10' ));
                     plVar12 = (long*)*plVar12;
                  }
 while ( plVar12 != (long*)0x0 );
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_0011995a;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
         }
 else {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }

   LAB_0011995a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RID_Alloc<RendererRD::MeshStorage::MultiMesh, true>::initialize_rid(RID,
   RendererRD::MeshStorage::MultiMesh const&) */void RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::initialize_rid(RID_Alloc<RendererRD::MeshStorage::MultiMesh,true> *this, ulong param_2, undefined8 *param_3) {
   undefined2 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   uint uVar9;
   long lVar10;
   undefined8 *puVar11;
   long *plVar12;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x1c )) {
         puVar11 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x160 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar11 + 0x2b ) < 0) {
            uVar9 = *(uint*)( puVar11 + 0x2b ) & 0x7fffffff;
            if (uVar9 == ( uint )(param_2 >> 0x20)) {
               uVar5 = param_3[3];
               uVar6 = param_3[4];
               uVar7 = param_3[6];
               uVar8 = param_3[7];
               *(uint*)( puVar11 + 0x2b ) = uVar9;
               uVar3 = *param_3;
               uVar4 = param_3[1];
               puVar11[3] = uVar5;
               puVar11[4] = uVar6;
               *puVar11 = uVar3;
               uVar1 = *(undefined2*)( param_3 + 2 );
               puVar11[1] = uVar4;
               *(undefined2*)( puVar11 + 2 ) = uVar1;
               uVar2 = *(undefined4*)( (long)param_3 + 0x14 );
               puVar11[6] = uVar7;
               puVar11[7] = uVar8;
               *(undefined4*)( (long)puVar11 + 0x14 ) = uVar2;
               puVar11[5] = param_3[5];
               puVar11[8] = param_3[8];
               *(undefined4*)( puVar11 + 9 ) = *(undefined4*)( param_3 + 9 );
               *(undefined8*)( (long)puVar11 + 0x4c ) = *(undefined8*)( (long)param_3 + 0x4c );
               puVar11[0xb] = param_3[0xb];
               puVar11[0xc] = param_3[0xc];
               uVar2 = *(undefined4*)( param_3 + 0xd );
               puVar11[0xf] = 0;
               lVar10 = param_3[0xf];
               *(undefined4*)( puVar11 + 0xd ) = uVar2;
               if (lVar10 != 0) {
                  CowData<float>::_ref((CowData<float>*)( puVar11 + 0xf ), (CowData*)( param_3 + 0xf ));
               }

               puVar11[0x10] = param_3[0x10];
               *(undefined4*)( puVar11 + 0x11 ) = *(undefined4*)( param_3 + 0x11 );
               puVar11[0x12] = param_3[0x12];
               *(undefined4*)( puVar11 + 0x13 ) = *(undefined4*)( param_3 + 0x13 );
               uVar4 = param_3[0x1b];
               uVar5 = param_3[0x1c];
               for (int i = 0; i < 4; i++) {
                  puVar11[( i + 20 )] = param_3[( i + 20 )];
               }

               *(undefined1*)( puVar11 + 0x18 ) = *(undefined1*)( param_3 + 0x18 );
               uVar3 = param_3[0x19];
               puVar11[0x1b] = uVar4;
               puVar11[0x1c] = uVar5;
               puVar11[0x19] = uVar3;
               *(undefined4*)( puVar11 + 0x1a ) = *(undefined4*)( param_3 + 0x1a );
               *(undefined2*)( (long)puVar11 + 0xd4 ) = *(undefined2*)( (long)param_3 + 0xd4 );
               puVar11[0x1d] = param_3[0x1d];
               *(undefined2*)( puVar11 + 0x1e ) = *(undefined2*)( param_3 + 0x1e );
               *(undefined1*)( (long)puVar11 + 0xf2 ) = *(undefined1*)( (long)param_3 + 0xf2 );
               for (int i = 0; i < 3; i++) {
                  puVar11[( 2*i + 32 )] = 0;
                  if (param_3[( 2*i + 32 )] != 0) {
                     CowData<float>::_ref((CowData<float>*)( puVar11 + ( 2*i + 32 ) ), (CowData*)( param_3 + ( 2*i + 32 ) ));
                  }

               }

               uVar9 = *(uint*)( param_3 + 0x2a );
               puVar11[0x2a] = 0;
               *(undefined1(*) [16])( puVar11 + 0x26 ) = (undefined1[16])0x0;
               uVar9 = *(uint*)( hash_table_size_primes + (ulong)uVar9 * 4 );
               *(undefined1(*) [16])( puVar11 + 0x28 ) = (undefined1[16])0x0;
               lVar10 = 1;
               if (5 < uVar9) {
                  do {
                     if (uVar9 <= *(uint*)( hash_table_size_primes + lVar10 * 4 )) {
                        *(int*)( puVar11 + 0x2a ) = (int)lVar10;
                        goto LAB_00119c20;
                     }

                     lVar10 = lVar10 + 1;
                  }
 while ( lVar10 != 0x1d );
                  _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
               }

               LAB_00119c20:if (( *(int*)( (long)param_3 + 0x154 ) != 0 ) && ( plVar12 = (long*)param_3[0x28] ),plVar12 != (long*)0x0) {
                  do {
                     HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar11 + 0x25 ), (bool)( (char)plVar12 + '\x10' ));
                     plVar12 = (long*)*plVar12;
                  }
 while ( plVar12 != (long*)0x0 );
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00119d38;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
         }
 else {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }

   LAB_00119d38:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<RenderingServer::SurfaceData::LOD>::_realloc(long) */undefined8 CowData<RenderingServer::SurfaceData::LOD>::_realloc(CowData<RenderingServer::SurfaceData::LOD> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingServer::SurfaceData::LOD>::resize<false>(long) */undefined8 CowData<RenderingServer::SurfaceData::LOD>::resize<false>(CowData<RenderingServer::SurfaceData::LOD> *this, long param_1) {
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
   }
 else {
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
      LAB_0011a040:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar9 == 0) goto LAB_0011a040;
   if (param_1 <= lVar10) {
      puVar6 = *(undefined8**)this;
      uVar8 = param_1;
      while (puVar6 != (undefined8*)0x0) {
         if ((ulong)puVar6[-1] <= uVar8) {
            LAB_00119f01:if (lVar9 != lVar7) {
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

            goto LAB_00119fa7;
         }

         while (puVar6[uVar8 * 3 + 2] == 0) {
            uVar8 = uVar8 + 1;
            if ((ulong)puVar6[-1] <= uVar8) goto LAB_00119f01;
         }
;
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
      }
;
      goto LAB_0011a096;
   }

   if (lVar9 == lVar7) {
      LAB_00119fc3:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_0011a096:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar10 = puVar6[-1];
      if (param_1 <= lVar10) goto LAB_00119fa7;
   }
 else {
      if (lVar10 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_00119fc3;
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
   }
 while ( puVar5 != puVar6 + param_1 * 3 );
   LAB_00119fa7:puVar6[-1] = param_1;
   return 0;
}
/* CowData<RenderingDeviceCommons::VertexAttribute>::_realloc(long) */undefined8 CowData<RenderingDeviceCommons::VertexAttribute>::_realloc(CowData<RenderingDeviceCommons::VertexAttribute> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>(long) */undefined8 CowData<RenderingDeviceCommons::VertexAttribute>::resize<false>(CowData<RenderingDeviceCommons::VertexAttribute> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar12 = 0;
      lVar4 = 0;
   }
 else {
      lVar12 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar12) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar12 * 0x14;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   lVar11 = param_1 * 0x14;
   if (lVar11 == 0) {
      LAB_0011a370:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = lVar11 - 1U >> 1 | lVar11 - 1U;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar10 = uVar5 + 1;
   if (lVar10 == 0) goto LAB_0011a370;
   if (param_1 <= lVar12) {
      if (( lVar10 != lVar4 ) && ( uVar8 = _realloc(this, lVar10) ),(int)uVar8 != 0) {
         return uVar8;
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

   if (lVar10 == lVar4) {
      LAB_0011a2dc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar9[-1];
      if (param_1 <= lVar4) goto LAB_0011a26c;
   }
 else {
      if (lVar12 != 0) {
         uVar8 = _realloc(this, lVar10);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_0011a2dc;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar9;
      lVar4 = 0;
   }

   uVar3 = _UNK_0011d5c8;
   uVar8 = __LC237;
   puVar6 = (undefined8*)( (long)puVar9 + lVar4 * 0x14 );
   do {
      *(undefined4*)( puVar6 + 2 ) = 0;
      puVar7 = (undefined8*)( (long)puVar6 + 0x14 );
      *puVar6 = uVar8;
      puVar6[1] = uVar3;
      puVar6 = puVar7;
   }
 while ( (undefined8*)( lVar11 + (long)puVar9 ) != puVar7 );
   LAB_0011a26c:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Control flow encountered bad instruction data *//* RenderingServer::SurfaceData::~SurfaceData() */void RenderingServer::SurfaceData::~SurfaceData(SurfaceData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::MeshStorage::Mesh, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::Mesh,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::Mesh,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::MeshStorage::MeshInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::MeshInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::MeshInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::MeshStorage::Skeleton, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::Skeleton,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::Skeleton,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::MeshStorage::MultiMesh, true>::~RID_Alloc() */void RID_Alloc<RendererRD::MeshStorage::MultiMesh,true>::~RID_Alloc(RID_Alloc<RendererRD::MeshStorage::MultiMesh,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererRD::MeshStorage::MeshInstance::~MeshInstance() */void RendererRD::MeshStorage::MeshInstance::~MeshInstance(MeshInstance *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererRD::MeshStorage::Mesh::~Mesh() */void RendererRD::MeshStorage::Mesh::~Mesh(Mesh *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SkeletonShaderRD::~SkeletonShaderRD() */void SkeletonShaderRD::~SkeletonShaderRD(SkeletonShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* GLES3::TextureStorage::texture_2d_placeholder_initialize(RID) */void GLES3::TextureStorage::texture_2d_placeholder_initialize(TextureStorage *this, undefined8 param_2) {
   /* WARNING: Could not recover jumptable at 0x0010000e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x58 ) )(this, param_2, this + 0x308);
   return;
}
/* GLES3::TextureStorage::texture_2d_layered_placeholder_initialize(RID,
   RenderingServer::TextureLayeredType) */void GLES3::TextureStorage::texture_2d_layered_placeholder_initialize(TextureStorage *this, undefined8 param_2, int param_3) {
   if (param_3 == 0) {
      /* WARNING: Could not recover jumptable at 0x00100038. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *(long*)this + 0x60 ) )(this, param_2, this + 0x310, 0);
      return;
   }

   /* WARNING: Could not recover jumptable at 0x00100047. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x60 ) )(this, param_2, this + 800, param_3);
   return;
}
/* GLES3::TextureStorage::texture_3d_placeholder_initialize(RID) */void GLES3::TextureStorage::texture_3d_placeholder_initialize(TextureStorage *this, undefined8 param_2) {
   ( **(code**)( *(long*)this + 0x68 ) )(this, param_2, 5, 4, 4, 4, 0, this + 0x330);
   return;
}
/* GLES3::TextureStorage::texture_rd_initialize(RID, RID const&,
   RenderingServer::TextureLayeredType) */void GLES3::TextureStorage::texture_rd_initialize(void) {
   return;
}
/* GLES3::TextureStorage::texture_get_rd_texture(RID, bool) const */undefined8 GLES3::TextureStorage::texture_get_rd_texture(void) {
   return 0;
}
/* GLES3::TextureStorage::decal_allocate() */undefined8 GLES3::TextureStorage::decal_allocate(void) {
   return 0;
}
/* GLES3::TextureStorage::decal_initialize(RID) */void GLES3::TextureStorage::decal_initialize(void) {
   return;
}
/* GLES3::TextureStorage::decal_set_modulate(RID, Color const&) */void GLES3::TextureStorage::decal_set_modulate(void) {
   return;
}
/* GLES3::TextureStorage::decal_set_texture(RID, RenderingServer::DecalTexture, RID) */void GLES3::TextureStorage::decal_set_texture(void) {
   return;
}
/* GLES3::TextureStorage::decal_set_albedo_mix(RID, float) */void GLES3::TextureStorage::decal_set_albedo_mix(void) {
   return;
}
/* GLES3::TextureStorage::decal_set_cull_mask(RID, unsigned int) */void GLES3::TextureStorage::decal_set_cull_mask(void) {
   return;
}
/* GLES3::TextureStorage::decal_set_distance_fade(RID, bool, float, float) */void GLES3::TextureStorage::decal_set_distance_fade(void) {
   return;
}
/* GLES3::TextureStorage::decal_set_fade(RID, float, float) */void GLES3::TextureStorage::decal_set_fade(void) {
   return;
}
/* GLES3::TextureStorage::decal_get_aabb(RID) const */undefined8 *GLES3::TextureStorage::decal_get_aabb(undefined8 *param_1) {
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* GLES3::TextureStorage::render_target_set_position(RID, int, int) */void GLES3::TextureStorage::render_target_set_position(TextureStorage *this, ulong param_2, undefined4 param_3, undefined4 param_4) {
   undefined4 *puVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      puVar1 = (undefined4*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (puVar1[0x3a] == (int)( param_2 >> 0x20 )) {
         *puVar1 = param_3;
         puVar1[1] = param_4;
         return;
      }

      if (puVar1[0x3a] + 0x80000000 < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_position", "drivers/gles3/storage/texture_storage.cpp", 0x9b4, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_get_position(RID) const */undefined8 GLES3::TextureStorage::render_target_get_position(TextureStorage *this, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      iVar1 = *(int*)( puVar2 + 0x1d );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_position", "drivers/gles3/storage/texture_storage.cpp", 0x9bb, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_size(RID) const */undefined8 GLES3::TextureStorage::render_target_get_size(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 8 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_size", "drivers/gles3/storage/texture_storage.cpp", 0x9d6, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_override_color(RID) const */undefined8 GLES3::TextureStorage::render_target_get_override_color(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0x98 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_override_color", "drivers/gles3/storage/texture_storage.cpp", 0xa15, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_override_depth(RID) const */undefined8 GLES3::TextureStorage::render_target_get_override_depth(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0xa0 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_override_depth", "drivers/gles3/storage/texture_storage.cpp", 0xa1c, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_override_velocity(RID) const */undefined8 GLES3::TextureStorage::render_target_get_override_velocity(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0xa8 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_override_velocity", "drivers/gles3/storage/texture_storage.cpp", 0xa23, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_set_render_region(RID, Rect2i const&) */void GLES3::TextureStorage::render_target_set_render_region(TextureStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      if (*(int*)( lVar2 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x80 ) = *param_3;
         *(undefined8*)( lVar2 + 0x88 ) = uVar1;
         return;
      }

      if (*(int*)( lVar2 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_render_region", "drivers/gles3/storage/texture_storage.cpp", 0xa2a, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_get_render_region(RID) const */undefined1  [16] __thiscallGLES3::TextureStorage::render_target_get_render_region(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1(*) [16])( lVar2 + 0x80 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_render_region", "drivers/gles3/storage/texture_storage.cpp", 0xa31, "Parameter \"rt\" is null.", 0, 0);
   return ZEXT816(0);
}
/* GLES3::TextureStorage::render_target_get_texture(RID) */undefined8 GLES3::TextureStorage::render_target_get_texture(TextureStorage *this, ulong param_2) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar1 + 0x98 ) == 0) {
            return *(undefined8*)( lVar1 + 200 );
         }

         return *(undefined8*)( lVar1 + 0x98 );
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_texture", "drivers/gles3/storage/texture_storage.cpp", 0xa38, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_transparent(RID) const */undefined1 GLES3::TextureStorage::render_target_get_transparent(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x75 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_transparent", "drivers/gles3/storage/texture_storage.cpp", 0xa4f, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_direct_to_screen(RID) const */undefined1 GLES3::TextureStorage::render_target_get_direct_to_screen(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x76 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_direct_to_screen", "drivers/gles3/storage/texture_storage.cpp", 0xa69, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_was_used(RID) const */undefined1 GLES3::TextureStorage::render_target_was_used(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x77 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_was_used", "drivers/gles3/storage/texture_storage.cpp", 0xa70, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_msaa(RID) const */undefined4 GLES3::TextureStorage::render_target_get_msaa(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x78 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_msaa", "drivers/gles3/storage/texture_storage.cpp", 0xa8d, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_is_using_hdr(RID) const */undefined1 GLES3::TextureStorage::render_target_is_using_hdr(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x38 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_is_using_hdr", "drivers/gles3/storage/texture_storage.cpp", 0xaa1, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_request_clear(RID, Color const&) */void GLES3::TextureStorage::render_target_request_clear(TextureStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      if (*(int*)( lVar3 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = *param_3;
         uVar2 = param_3[1];
         *(undefined1*)( lVar3 + 0xe0 ) = 1;
         *(undefined8*)( lVar3 + 0xd0 ) = uVar1;
         *(undefined8*)( lVar3 + 0xd8 ) = uVar2;
         return;
      }

      if (*(int*)( lVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_request_clear", "drivers/gles3/storage/texture_storage.cpp", 0xac4, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_is_clear_requested(RID) */undefined1 GLES3::TextureStorage::render_target_is_clear_requested(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0xe0 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_is_clear_requested", "drivers/gles3/storage/texture_storage.cpp", 0xacb, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_clear_request_color(RID) */undefined1  [16] __thiscallGLES3::TextureStorage::render_target_get_clear_request_color(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1(*) [16])( lVar2 + 0xd0 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_clear_request_color", "drivers/gles3/storage/texture_storage.cpp", 0xad0, "Parameter \"rt\" is null.", 0, 0);
   return ZEXT816(0x3f80000000000000) << 0x40;
}
/* GLES3::TextureStorage::render_target_disable_clear_request(RID) */void GLES3::TextureStorage::render_target_disable_clear_request(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0xe0 ) = 0;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_disable_clear_request", "drivers/gles3/storage/texture_storage.cpp", 0xad6, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::render_target_do_clear_request(RID) */void GLES3::TextureStorage::render_target_do_clear_request(TextureStorage *this, ulong param_2) {
   undefined4 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      if (*(int*)( lVar2 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( lVar2 + 0xe0 ) != '\0') {
            ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( lVar2 + 0x20 ));
            ( *_glad_glClearBufferfv )(0x1800, 0, lVar2 + 0xd0);
            uVar1 = system_fbo;
            *(undefined1*)( lVar2 + 0xe0 ) = 0;
            /* WARNING: Could not recover jumptable at 0x0010118b. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *_glad_glBindFramebuffer )(0x8d40, uVar1);
            return;
         }

         return;
      }

      if (*(int*)( lVar2 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_do_clear_request", "drivers/gles3/storage/texture_storage.cpp", 0xadc, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_mark_sdf_enabled(RID, bool) */void GLES3::TextureStorage::render_target_mark_sdf_enabled(TextureStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x74 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_mark_sdf_enabled", "drivers/gles3/storage/texture_storage.cpp", 0xb4d, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::canvas_texture_set_channel(RID, RenderingServer::CanvasTextureChannel,
   RID) */void GLES3::TextureStorage::canvas_texture_set_channel(TextureStorage *this, ulong param_2, int param_3, undefined8 param_4) {
   undefined8 *puVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x9c ) )) {
      puVar1 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x40 + *(long*)( *(long*)( this + 0x88 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 ) );
      if (*(int*)( puVar1 + 7 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 == 1) {
            puVar1[1] = param_4;
            return;
         }

         if (param_3 != 2) {
            if (param_3 == 0) {
               *puVar1 = param_4;
            }

            return;
         }

         puVar1[2] = param_4;
         return;
      }

      if (*(int*)( puVar1 + 7 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("canvas_texture_set_channel", "drivers/gles3/storage/texture_storage.cpp", 0x128, "Parameter \"ct\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::canvas_texture_set_shading_parameters(RID, Color const&, float) */void GLES3::TextureStorage::canvas_texture_set_shading_parameters(undefined4 param_1, TextureStorage *this, ulong param_3, undefined4 *param_4) {
   undefined4 uVar1;
   undefined4 uVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x9c ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x40 + *(long*)( *(long*)( this + 0x88 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
      if (*(int*)( lVar3 + 0x38 ) == (int)( param_3 >> 0x20 )) {
         uVar1 = param_4[1];
         uVar2 = param_4[2];
         *(undefined4*)( lVar3 + 0x18 ) = *param_4;
         *(undefined4*)( lVar3 + 0x1c ) = uVar1;
         *(undefined4*)( lVar3 + 0x20 ) = uVar2;
         *(undefined4*)( lVar3 + 0x24 ) = param_1;
         return;
      }

      if (*(int*)( lVar3 + 0x38 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("canvas_texture_set_shading_parameters", "drivers/gles3/storage/texture_storage.cpp", 0x139, "Parameter \"ct\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::canvas_texture_set_texture_filter(RID,
   RenderingServer::CanvasItemTextureFilter) */void GLES3::TextureStorage::canvas_texture_set_texture_filter(TextureStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x9c )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x40 + *(long*)( *(long*)( this + 0x88 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0x38 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            *(undefined4*)( lVar2 + 0x2c ) = param_3;
            return;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("canvas_texture_set_texture_filter", "drivers/gles3/storage/texture_storage.cpp", 0x143, "Parameter \"ct\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::canvas_texture_set_texture_repeat(RID,
   RenderingServer::CanvasItemTextureRepeat) */void GLES3::TextureStorage::canvas_texture_set_texture_repeat(TextureStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x9c )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x40 + *(long*)( *(long*)( this + 0x88 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0x38 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            *(undefined4*)( lVar2 + 0x30 ) = param_3;
            return;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("canvas_texture_set_texture_repeat", "drivers/gles3/storage/texture_storage.cpp", 0x14a, "Parameter \"ct\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_external_update(RID, int, int, unsigned long) */void GLES3::TextureStorage::texture_external_update(long param_1, ulong param_2, undefined4 param_3, undefined4 param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0xf4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_1 + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0xf0 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x30 ) = param_3;
         *(undefined4*)( lVar1 + 0x44 ) = param_3;
         *(undefined4*)( lVar1 + 0x34 ) = param_4;
         *(undefined4*)( lVar1 + 0x48 ) = param_4;
         return;
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_external_update", "drivers/gles3/storage/texture_storage.cpp", 0x3ff, "Parameter \"tex\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_set_size_override(RID, int, int) */void GLES3::TextureStorage::texture_set_size_override(TextureStorage *this, ulong param_2, int param_3, int param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( lVar1 + 10 ) != '\0') {
            _err_print_error("texture_set_size_override", "drivers/gles3/storage/texture_storage.cpp", 0x589, "Condition \"texture->is_render_target\" is true.", 0, 0);
            return;
         }

         if (param_3 - 1U < 0x4000) {
            if (param_4 - 1U < 0x4000) {
               *(int*)( lVar1 + 0x30 ) = param_3;
               *(int*)( lVar1 + 0x34 ) = param_4;
               return;
            }

            _err_print_error("texture_set_size_override", "drivers/gles3/storage/texture_storage.cpp", 0x58c, "Condition \"p_height <= 0 || p_height > 16384\" is true.", 0, 0);
            return;
         }

         _err_print_error("texture_set_size_override", "drivers/gles3/storage/texture_storage.cpp", 0x58b, "Condition \"p_width <= 0 || p_width > 16384\" is true.", 0, 0);
         return;
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_set_size_override", "drivers/gles3/storage/texture_storage.cpp", 0x588, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_set_detect_3d_callback(RID, void (*)(void*), void*) */void GLES3::TextureStorage::texture_set_detect_3d_callback(TextureStorage *this, ulong param_2, undefined8 param_3, undefined8 param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 0xa8 ) = param_3;
         *(undefined8*)( lVar1 + 0xb0 ) = param_4;
         return;
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_set_detect_3d_callback", "drivers/gles3/storage/texture_storage.cpp", 0x5a2, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_set_detect_normal_callback(RID, void (*)(void*), void*) */void GLES3::TextureStorage::texture_set_detect_normal_callback(TextureStorage *this, ulong param_2, undefined8 param_3, undefined8 param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 0xb8 ) = param_3;
         *(undefined8*)( lVar1 + 0xc0 ) = param_4;
         return;
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_set_detect_normal_callback", "drivers/gles3/storage/texture_storage.cpp", 0x5ad, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_set_detect_roughness_callback(RID, void (*)(void*, String const&,
   RenderingServer::TextureDetectRoughnessChannel), void*) */void GLES3::TextureStorage::texture_set_detect_roughness_callback(TextureStorage *this, ulong param_2, undefined8 param_3, undefined8 param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 200 ) = param_3;
         *(undefined8*)( lVar1 + 0xd0 ) = param_4;
         return;
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_set_detect_roughness_callback", "drivers/gles3/storage/texture_storage.cpp", 0x5b5, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_set_force_redraw_if_visible(RID, bool) */void GLES3::TextureStorage::texture_set_force_redraw_if_visible(TextureStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0xa0 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_set_force_redraw_if_visible", "drivers/gles3/storage/texture_storage.cpp", 0x5df, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_size_with_proxy(RID) */undefined8 GLES3::TextureStorage::texture_size_with_proxy(TextureStorage *this, ulong param_2) {
   ulong uVar1;
   code *pcVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar3 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( lVar3 + 8 ) != '\0') {
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               uVar1 = *(ulong*)( lVar3 + 0x10 );
               if ((uint)uVar1 < *(uint*)( this + 0xf4 )) {
                  lVar3 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                  if (*(int*)( lVar3 + 0xe8 ) == (int)( uVar1 >> 0x20 )) goto LAB_00101d15;
                  if (*(int*)( lVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar3);
                  }

               }

            }

            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         LAB_00101d15:return CONCAT44((float)(int)( ( ulong ) * (undefined8*)( lVar3 + 0x30 ) >> 0x20 ), (float)(int)*(undefined8*)( lVar3 + 0x30 ));
      }

      if (*(int*)( lVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_size_with_proxy", "drivers/gles3/storage/texture_storage.cpp", 0x5e6, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::texture_get_native_handle(RID, bool) const */undefined4 GLES3::TextureStorage::texture_get_native_handle(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_1 + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x74 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_native_handle", "drivers/gles3/storage/texture_storage.cpp", 0x5f8, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::texture_get_format(RID) const */undefined4 GLES3::TextureStorage::texture_get_format(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x4c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_format", "drivers/gles3/storage/texture_storage.cpp", 0x6f8, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
void FUN_00101faa(void) {
   return;
}
undefined8 switchD_00101f77::caseD_0(void) {
   undefined4 *unaff_RBX;
   undefined4 *unaff_RBP;
   undefined4 *in_R8;
   undefined4 *in_R9;
   undefined4 *unaff_R12;
   if ((char)RasterizerGLES3::gles_over_gl == '\0') {
      *in_R8 = 0x1909;
      *unaff_RBP = 0x1909;
      *in_R9 = 0x1401;
   }
 else {
      *unaff_R12 = 0x8229;
      *unaff_RBP = 0x1903;
      *unaff_RBX = 0x1401;
   }

   return 0;
}
/* GLES3::TextureStorage::canvas_texture_initialize(RID) */void GLES3::TextureStorage::canvas_texture_initialize(TextureStorage *this, ulong param_2) {
   undefined4 uVar1;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   uint uVar4;
   char *pcVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x9c ) )) {
      pauVar2 = (undefined1(*) [16])( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x40 + *(long*)( *(long*)( this + 0x88 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 ) );
      if ((int)*(uint*)( pauVar2[3] + 8 ) < 0) {
         uVar4 = ( uint )(param_2 >> 0x20);
         if (uVar4 == ( *(uint*)( pauVar2[3] + 8 ) & 0x7fffffff )) {
            *(uint*)( pauVar2[3] + 8 ) = uVar4;
            *pauVar2 = (undefined1[16])0x0;
            uVar1 = _LC55;
            *(undefined8*)pauVar2[1] = 0;
            *(undefined4*)( pauVar2[2] + 8 ) = 0x3f800000;
            *(undefined8*)( pauVar2[2] + 0xc ) = 0;
            *(undefined4*)( pauVar2[1] + 8 ) = uVar1;
            *(undefined4*)( pauVar2[1] + 0xc ) = uVar1;
            *(undefined4*)pauVar2[2] = uVar1;
            *(undefined4*)( pauVar2[2] + 4 ) = uVar1;
            return;
         }

         pcVar5 = "Attempting to initialize the wrong RID";
         uVar3 = 0xfc;
      }
 else {
         pcVar5 = "Initializing already initialized RID";
         uVar3 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar3, "Method/function failed. Returning: nullptr", pcVar5, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x114, "Parameter \"mem\" is null.", 0, 0);
   return;
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
/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned int>, DefaultTypedAllocator<HashMapElement<unsigned int,
   GLES3::Utilities::ResourceAllocation> > >::_lookup_pos(unsigned int const&, unsigned int&) const
   [clone .isra.0] */undefined8 HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::_lookup_pos(HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this, uint *param_1, uint *param_2) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (( *(long*)( this + 8 ) == 0 ) || ( *(int*)( this + 0x2c ) == 0 )) {
      return 0;
   }

   uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar10 = ( ( uint )((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1 ) * -0x7a143595;
   uVar10 = ( uVar10 ^ uVar10 >> 0xd ) * -0x3d4d51cb;
   uVar14 = uVar10 ^ uVar10 >> 0x10;
   if (uVar10 == uVar10 >> 0x10) {
      uVar14 = 1;
      uVar12 = uVar1;
   }
 else {
      uVar12 = uVar14 * uVar1;
   }

   uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar15;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar12;
   lVar13 = SUB168(auVar2 * auVar6, 8);
   uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
   uVar11 = SUB164(auVar2 * auVar6, 8);
   if (uVar10 != 0) {
      uVar16 = 0;
      do {
         if (( uVar14 == uVar10 ) && ( *(uint*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == (uint)param_1 )) {
            *param_2 = uVar11;
            return 1;
         }

         uVar16 = uVar16 + 1;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = ( uVar11 + 1 ) * uVar1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar15;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar11 = SUB164(auVar3 * auVar7, 8);
      }
 while ( ( uVar10 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar10 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar11 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
   }

   return 0;
}
/* GLES3::TextureStorage::canvas_texture_free(RID) */int GLES3::TextureStorage::canvas_texture_free(TextureStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   __mutex = (pthread_mutex_t*)( this + 0xb0 );
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar1);
   }

   if ((uint)param_2 < *(uint*)( this + 0x9c )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x98 ) ) * 0x40 + *(long*)( *(long*)( this + 0x88 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 );
      iVar1 = *(int*)( lVar3 + 0x38 );
      if (iVar1 < 0) {
         pthread_mutex_unlock(__mutex);
         _err_print_error(&_LC65, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         return 0;
      }

      if ((int)( param_2 >> 0x20 ) == iVar1) {
         *(undefined4*)( lVar3 + 0x38 ) = 0xffffffff;
         uVar2 = *(int*)( this + 0xa0 ) - 1;
         *(uint*)( this + 0xa0 ) = uVar2;
         *(uint*)( *(long*)( *(long*)( this + 0x90 ) + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x98 ) ) * 8 ) + ( (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x98 ) ) * 4 ) = (uint)param_2;
         iVar1 = pthread_mutex_unlock(__mutex);
         return iVar1;
      }

      pthread_mutex_unlock(__mutex);
      uVar4 = 0x171;
   }
 else {
      pthread_mutex_unlock(__mutex);
      uVar4 = 0x161;
   }

   iVar1 = _err_print_error(&_LC65, "./core/templates/rid_owner.h", uVar4, "Method/function failed.", 0, 0);
   return iVar1;
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
/* CowData<unsigned int>::_ref(CowData<unsigned int> const&) [clone .part.0] */void CowData<unsigned_int>::_ref(CowData<unsigned_int> *this, CowData *param_1) {
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
/* CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write() [clone .isra.0] */void CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write(CowData<GLES3::TextureStorage::TextureAtlas::SortItem> *this) {
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
   __n = lVar2 * 0x20;
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
/* GLES3::TextureStorage::texture_set_path(RID, String const&) */void GLES3::TextureStorage::texture_set_path(TextureStorage *this, ulong param_2, CowData *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar1 + 0x28 ) != *(long*)param_3) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( lVar1 + 0x28 ), param_3);
            return;
         }

         return;
      }

      if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_set_path", "drivers/gles3/storage/texture_storage.cpp", 0x594, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_get_path(RID) const */CowData<char32_t> *GLES3::TextureStorage::texture_get_path(CowData<char32_t> *param_1, long param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xf4 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_2 + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 8 );
      if (*(int*)( lVar2 + 0xe8 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)param_1 = 0;
         if (*(long*)( lVar2 + 0x28 ) != 0) {
            CowData<char32_t>::_ref(param_1, (CowData*)( lVar2 + 0x28 ));
         }

         goto LAB_00102c0f;
      }

      if (*(int*)( lVar2 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_path", "drivers/gles3/storage/texture_storage.cpp", 0x59b, "Parameter \"texture\" is null.", 0, 0);
   *(undefined8*)param_1 = 0;
   String::parse_latin1((StrRange*)param_1);
   LAB_00102c0f:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
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
      }
 else {
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
                  }
;
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
         }
 while ( ( uVar28 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar28 * uVar7,auVar20._8_8_ = 0,auVar20._0_8_ = uVar39,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( uVar5 + uVar29 ) - SUB164(auVar11 * auVar20, 8) ) * uVar7,auVar21._8_8_ = 0,auVar21._0_8_ = uVar39,uVar30 = uVar31,uVar37 <= SUB164(auVar12 * auVar21, 8) );
      }

   }

   return;
}
/* HashMap<RID, GLES3::TextureStorage::TextureAtlas::Texture, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   GLES3::TextureStorage::TextureAtlas::Texture> > >::erase(RID const&) [clone .isra.0] */void HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>::erase(HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>> *this, RID *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
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
   ulong uVar29;
   uint uVar30;
   ulong uVar31;
   ulong uVar32;
   ulong uVar33;
   long *plVar34;
   ulong uVar35;
   uint uVar36;
   uint uVar37;
   uint *puVar38;
   lVar6 = *(long*)( this + 8 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      lVar7 = *(long*)( this + 0x10 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar35 = CONCAT44(0, uVar5);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = *(long*)param_1 * 0x3ffff - 1;
      uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
      uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar32 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
         uVar32 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar32 * lVar8;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar35;
      uVar29 = SUB168(auVar11 * auVar20, 8);
      uVar37 = *(uint*)( lVar7 + uVar29 * 4 );
      uVar33 = (ulong)SUB164(auVar11 * auVar20, 8);
      if (uVar37 != 0) {
         uVar36 = 0;
         do {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar35;
            uVar31 = SUB168(auVar14 * auVar23, 8);
            uVar30 = SUB164(auVar14 * auVar23, 8);
            if (( (uint)uVar32 == uVar37 ) && ( *(long*)param_1 == *(long*)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
               puVar38 = (uint*)( lVar7 + uVar31 * 4 );
               uVar37 = *puVar38;
               if (( uVar37 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar5 ) - SUB164(auVar15 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,uVar29 = (ulong)uVar30,uVar32 = uVar33,SUB164(auVar16 * auVar25, 8) != 0) {
                  while (true) {
                     uVar33 = uVar29;
                     puVar1 = (uint*)( lVar7 + uVar32 * 4 );
                     *puVar38 = *puVar1;
                     puVar2 = (undefined8*)( lVar6 + uVar31 * 8 );
                     *puVar1 = uVar37;
                     puVar3 = (undefined8*)( lVar6 + uVar32 * 8 );
                     uVar9 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar9;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar35;
                     uVar31 = SUB168(auVar19 * auVar28, 8);
                     puVar38 = (uint*)( lVar7 + uVar31 * 4 );
                     uVar37 = *puVar38;
                     if (( uVar37 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar28, 8) + uVar5 ) - SUB164(auVar17 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar35,SUB164(auVar18 * auVar27, 8) == 0) break;
                     uVar29 = uVar31 & 0xffffffff;
                     uVar32 = uVar33;
                  }
;
               }

               plVar4 = (long*)( lVar6 + uVar33 * 8 );
               *(undefined4*)( lVar7 + uVar33 * 4 ) = 0;
               plVar34 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar34) {
                  *(long*)( this + 0x18 ) = *plVar34;
                  plVar34 = (long*)*plVar4;
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00103119;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00103119:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00103120;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00103120:if (plVar10 != (long*)0x0) {
                  *plVar10 = *plVar34;
                  plVar34 = (long*)*plVar4;
               }

               if (*plVar34 != 0) {
                  *(long*)( *plVar34 + 8 ) = plVar34[1];
                  plVar34 = (long*)*plVar4;
               }

               Memory::free_static(plVar34, false);
               *(undefined8*)( *(long*)( this + 8 ) + uVar33 * 8 ) = 0;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
               return;
            }

            uVar37 = *(uint*)( lVar7 + uVar31 * 4 );
            uVar33 = uVar31 & 0xffffffff;
            uVar36 = uVar36 + 1;
         }
 while ( ( uVar37 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar37 * lVar8,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar30 ) - SUB164(auVar12 * auVar21, 8)) * lVar8,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,uVar29 = uVar31,uVar36 <= SUB164(auVar13 * auVar22, 8) );
      }

   }

   return;
}
/* GLES3::TextureStorage::texture_debug_usage(List<RenderingServer::TextureInfo, DefaultAllocator>*)
    */void GLES3::TextureStorage::texture_debug_usage(TextureStorage *this, List *param_1) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   uint uVar2;
   undefined4 uVar3;
   ulong uVar4;
   long lVar5;
   undefined8 uVar6;
   void *pvVar7;
   int iVar8;
   ulong *puVar9;
   undefined8 *puVar10;
   long lVar11;
   undefined1(*pauVar12)[16];
   undefined1(*pauVar13)[16];
   undefined4 uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   long in_FS_OFFSET;
   bool bVar18;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __mutex = (pthread_mutex_t*)( this + 0x108 );
   iVar8 = pthread_mutex_lock(__mutex);
   if (iVar8 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar8);
   }

   pauVar13 = (undefined1(*) [16])0x0;
   uVar16 = 0;
   if (*(int*)( this + 0xf4 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         pthread_mutex_unlock(__mutex);
         return;
      }

   }
 else {
      do {
         uVar2 = *(uint*)( ( uVar16 % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( uVar16 / *(uint*)( this + 0xf0 ) ) * 8 ) + 0xe8 );
         if (uVar2 != 0xffffffff) {
            if (pauVar13 == (undefined1(*) [16])0x0) {
               pauVar13 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)pauVar13[1] = 0;
               *pauVar13 = (undefined1[16])0x0;
            }

            puVar9 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
            uVar4 = *(ulong*)( *pauVar13 + 8 );
            puVar9[1] = 0;
            *puVar9 = (ulong)uVar2 << 0x20 | uVar16;
            puVar9[2] = uVar4;
            puVar9[3] = (ulong)pauVar13;
            if (uVar4 != 0) {
               *(ulong**)( uVar4 + 8 ) = puVar9;
            }

            lVar15 = *(long*)*pauVar13;
            *(ulong**)( *pauVar13 + 8 ) = puVar9;
            if (lVar15 == 0) {
               *(ulong**)*pauVar13 = puVar9;
            }

            *(int*)pauVar13[1] = *(int*)pauVar13[1] + 1;
         }

         uVar16 = uVar16 + 1;
      }
 while ( uVar16 < *(uint*)( this + 0xf4 ) );
      pthread_mutex_unlock(__mutex);
      if (pauVar13 != (undefined1(*) [16])0x0) {
         for (puVar9 = *(ulong**)*pauVar13; puVar9 != (ulong*)0x0; puVar9 = (ulong*)puVar9[1]) {
            if (*puVar9 != 0) {
               uVar16 = *puVar9;
               if ((uint)uVar16 < *(uint*)( this + 0xf4 )) {
                  lVar15 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                  if (*(int*)( lVar15 + 0xe8 ) == (int)( uVar16 >> 0x20 )) {
                     lVar17 = *(long*)( lVar15 + 0x28 );
                     local_48 = 0;
                     if (lVar17 != 0) {
                        plVar1 = (long*)( lVar17 + -0x10 );
                        do {
                           lVar5 = *plVar1;
                           lVar17 = local_48;
                           if (lVar5 == 0) goto LAB_0010347b;
                           LOCK();
                           lVar11 = *plVar1;
                           bVar18 = lVar5 == lVar11;
                           if (bVar18) {
                              *plVar1 = lVar5 + 1;
                              lVar11 = lVar5;
                           }

                           UNLOCK();
                        }
 while ( !bVar18 );
                        if (lVar11 != -1) {
                           local_48 = *(long*)( lVar15 + 0x28 );
                           lVar17 = local_48;
                        }

                     }

                     LAB_0010347b:uVar3 = *(undefined4*)( lVar15 + 0x4c );
                     uVar6 = *(undefined8*)( lVar15 + 0x44 );
                     iVar8 = *(int*)( lVar15 + 0x6c );
                     if (*(int*)( lVar15 + 0x54 ) == 1) {
                        uVar14 = *(undefined4*)( lVar15 + 0x40 );
                     }
 else {
                        uVar14 = 0;
                        if (*(int*)( lVar15 + 0x54 ) == 2) {
                           uVar14 = *(undefined4*)( lVar15 + 0x38 );
                        }

                     }

                     if (*(long*)param_1 == 0) {
                        pauVar12 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined1(**) [16])param_1 = pauVar12;
                        *(undefined4*)pauVar12[1] = 0;
                        *pauVar12 = (undefined1[16])0x0;
                     }

                     puVar10 = (undefined8*)operator_new(0x40, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( puVar10 + 4 ) = (undefined1[16])0x0;
                     *(undefined1(*) [16])( puVar10 + 6 ) = (undefined1[16])0x0;
                     puVar10[1] = uVar6;
                     *puVar10 = 0;
                     *(undefined4*)( puVar10 + 2 ) = uVar14;
                     *(undefined4*)( (long)puVar10 + 0x14 ) = uVar3;
                     puVar10[3] = (long)iVar8;
                     if (lVar17 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 4 ), (CowData*)&local_48);
                     }

                     plVar1 = *(long**)param_1;
                     lVar15 = plVar1[1];
                     puVar10[5] = 0;
                     puVar10[7] = plVar1;
                     puVar10[6] = lVar15;
                     if (lVar15 != 0) {
                        *(undefined8**)( lVar15 + 0x28 ) = puVar10;
                     }

                     plVar1[1] = (long)puVar10;
                     if (*plVar1 == 0) {
                        *plVar1 = (long)puVar10;
                     }

                     *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
                     if (lVar17 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar17 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static((void*)( local_48 + -0x10 ), false);
                        }

                     }

                  }
 else if (*(int*)( lVar15 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

         }

         if (pauVar13 != (undefined1(*) [16])0x0) {
            do {
               while (true) {
                  pvVar7 = *(void**)*pauVar13;
                  if (pvVar7 == (void*)0x0) {
                     if (*(int*)pauVar13[1] != 0) {
                        if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           return;
                        }

                        goto LAB_00103708;
                     }

                     goto LAB_0010352c;
                  }

                  if (*(undefined1(**) [16])( (long)pvVar7 + 0x18 ) != pauVar13) break;
                  lVar15 = *(long*)( (long)pvVar7 + 8 );
                  lVar17 = *(long*)( (long)pvVar7 + 0x10 );
                  *(long*)*pauVar13 = lVar15;
                  if (pvVar7 == *(void**)( *pauVar13 + 8 )) {
                     *(long*)( *pauVar13 + 8 ) = lVar17;
                  }

                  if (lVar17 != 0) {
                     *(long*)( lVar17 + 8 ) = lVar15;
                     lVar15 = *(long*)( (long)pvVar7 + 8 );
                  }

                  if (lVar15 != 0) {
                     *(long*)( lVar15 + 0x10 ) = lVar17;
                  }

                  Memory::free_static(pvVar7, false);
                  pauVar12 = pauVar13 + 1;
                  *(int*)*pauVar12 = *(int*)*pauVar12 + -1;
                  if (*(int*)*pauVar12 == 0) goto LAB_0010352c;
               }
;
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }
 while ( *(int*)pauVar13[1] != 0 );
            LAB_0010352c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pauVar13, false);
               return;
            }

            goto LAB_00103708;
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   LAB_00103708:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_int>::_copy_on_write(CowData<unsigned_int> *this) {
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
/* GLES3::TextureStorage::get_singleton() */undefined8 GLES3::TextureStorage::get_singleton(void) {
   return singleton;
}
/* GLES3::TextureStorage::texture_set_detect_srgb_callback(RID, void (*)(void*), void*) */void GLES3::TextureStorage::texture_set_detect_srgb_callback(void) {
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_texture_set_swizzle(GLES3::Texture*, Image::Format) */void GLES3::TextureStorage::_texture_set_swizzle(undefined8 param_1_00, long param_1, int param_3) {
   int iVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   iVar1 = *(int*)( param_1 + 0x4c );
   uVar3 = *(undefined4*)( param_1 + 0x5c );
   if (iVar1 == 1) {
      if ((char)RasterizerGLES3::gles_over_gl != '\0') {
         ( *_glad_glTexParameteri )(uVar3, 0x8e42, 0x1903);
         ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e43, 0x1903);
         ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e44, 0x1903);
         uVar3 = *(undefined4*)( param_1 + 0x5c );
         uVar2 = 0x1904;
         goto LAB_001039f4;
      }

   }
 else if (iVar1 < 2) {
      if (( iVar1 == 0 ) && ( (char)RasterizerGLES3::gles_over_gl != '\0' )) {
         ( *_glad_glTexParameteri )(uVar3, 0x8e42, 0x1903);
         ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e43, 0x1903);
         ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e44, 0x1903);
         uVar3 = *(undefined4*)( param_1 + 0x5c );
         uVar2 = 1;
         goto LAB_001039f4;
      }

   }
 else if (iVar1 - 0x21U < 2) {
      ( *_glad_glTexParameteri )(uVar3, 0x8e42, 0x1903);
      if (*(int*)( param_1 + 0x4c ) == param_3) {
         ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e43, 0x1906);
      }
 else {
         ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e43, 0x1904);
      }

      ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e44, 0);
      uVar3 = *(undefined4*)( param_1 + 0x5c );
      uVar2 = 1;
      goto LAB_001039f4;
   }

   ( *_glad_glTexParameteri )(uVar3, 0x8e42, 0x1903);
   ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e43, 0x1904);
   ( *_glad_glTexParameteri )(*(undefined4*)( param_1 + 0x5c ), 0x8e44, 0x1905);
   uVar3 = *(undefined4*)( param_1 + 0x5c );
   uVar2 = 0x1906;
   LAB_001039f4:/* WARNING: Could not recover jumptable at 0x001039ff. Too many branches *//* WARNING: Treating indirect jump as call */( *_glad_glTexParameteri )(uVar3, 0x8e45, uVar2);
   return;
}
/* GLES3::TextureStorage::texture_get_texid(RID) const */undefined4 GLES3::TextureStorage::texture_get_texid(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x74 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_texid", "drivers/gles3/storage/texture_storage.cpp", 0x700, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::texture_get_size(RID) const */undefined8 GLES3::TextureStorage::texture_get_size(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar4 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         uVar3 = *(undefined8*)( lVar4 + 0x30 );
         goto LAB_00103c47;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_size", "drivers/gles3/storage/texture_storage.cpp", 0x708, "Parameter \"texture\" is null.", 0, 0);
   uVar3 = 0;
   LAB_00103c47:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::texture_get_width(RID) const */undefined4 GLES3::TextureStorage::texture_get_width(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x30 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_width", "drivers/gles3/storage/texture_storage.cpp", 0x710, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::texture_get_height(RID) const */undefined4 GLES3::TextureStorage::texture_get_height(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x34 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_height", "drivers/gles3/storage/texture_storage.cpp", 0x718, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::texture_get_depth(RID) const */undefined4 GLES3::TextureStorage::texture_get_depth(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x38 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_get_depth", "drivers/gles3/storage/texture_storage.cpp", 0x720, "Parameter \"texture\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_bind(RID, unsigned int) */void GLES3::TextureStorage::texture_bind(TextureStorage *this, ulong param_2, int param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0xf4 )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
            ( *_glad_glActiveTexture )(param_3 + 0x84c0);
            /* WARNING: Could not recover jumptable at 0x00103faf. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *_glad_glBindTexture )(*(undefined4*)( lVar1 + 0x5c ), *(undefined4*)( lVar1 + 0x74 ));
            return;
         }

         if (*(int*)( lVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("texture_bind", "drivers/gles3/storage/texture_storage.cpp", 0x728, "Parameter \"texture\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_remove_from_texture_atlas(RID) */void GLES3::TextureStorage::texture_remove_from_texture_atlas(TextureStorage *this, long param_2) {
   int *piVar1;
   long lVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   long local_40[2];
   lVar2 = *(long*)( this + 0x138 );
   local_40[0] = param_2;
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
      uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
      uVar12 = param_2 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar15 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar15 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar14 = SUB168(auVar4 * auVar8, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x140 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar4 * auVar8, 8);
      if (uVar16 != 0) {
         uVar18 = 0;
         do {
            if (( (uint)uVar15 == uVar16 ) && ( param_2 == *(long*)( *(long*)( lVar2 + lVar14 * 8 ) + 0x10 ) )) {
               piVar1 = (int*)( *(long*)( lVar2 + (ulong)uVar13 * 8 ) + 0x18 );
               *piVar1 = *piVar1 + -1;
               if (*piVar1 != 0) {
                  return;
               }

               HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>::erase((HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>*)( this + 0x130 ), (RID*)local_40);
               return;
            }

            uVar18 = uVar18 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar13 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar17;
            lVar14 = SUB168(auVar5 * auVar9, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x140 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar16 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + uVar13 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar17,uVar18 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   _err_print_error("texture_remove_from_texture_atlas", "drivers/gles3/storage/texture_storage.cpp", 0x73e, "Parameter \"t\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_atlas_mark_dirty_on_texture(RID) */void GLES3::TextureStorage::texture_atlas_mark_dirty_on_texture(TextureStorage *this, long param_2) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   int iVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (( *(long*)( this + 0x138 ) != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
      uVar10 = param_2 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar13 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar13 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x140 ) + lVar12 * 4 );
      iVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         while (( (uint)uVar13 != uVar14 || ( param_2 != *(long*)( *(long*)( *(long*)( this + 0x138 ) + lVar12 * 8 ) + 0x10 ) ) )) {
            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x140 ) + lVar12 * 4 );
            iVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar14 == 0) {
               return;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar14 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
            if (SUB164(auVar5 * auVar9, 8) < uVar16) {
               return;
            }

         }
;
         this[0x160] = (TextureStorage)0x1;
      }

   }

   return;
}
/* GLES3::TextureStorage::texture_atlas_remove_texture(RID) */void GLES3::TextureStorage::texture_atlas_remove_texture(TextureStorage *this, long param_2) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   int iVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long local_40[2];
   if (( *(long*)( this + 0x138 ) != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
      uVar16 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
      uVar10 = param_2 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar13 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar13 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar16;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x140 ) + lVar12 * 4 );
      iVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar15 != 0) {
         uVar14 = 0;
         while (( (uint)uVar13 != uVar15 || ( param_2 != *(long*)( *(long*)( *(long*)( this + 0x138 ) + lVar12 * 8 ) + 0x10 ) ) )) {
            uVar14 = uVar14 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar16;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x140 ) + lVar12 * 4 );
            iVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar15 == 0) {
               return;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar15 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar16;
            if (SUB164(auVar5 * auVar9, 8) < uVar14) {
               return;
            }

         }
;
         local_40[0] = param_2;
         HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>::erase((HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>*)( this + 0x130 ), (RID*)local_40);
      }

   }

   return;
}
/* GLES3::TextureStorage::texture_atlas_get_texture() const */undefined4 GLES3::TextureStorage::texture_atlas_get_texture(TextureStorage *this) {
   return *(undefined4*)( this + 0x164 );
}
/* GLES3::TextureStorage::render_target_clear_used(RID) */void GLES3::TextureStorage::render_target_clear_used(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x77 ) = 0;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_clear_used", "drivers/gles3/storage/texture_storage.cpp", 0xa77, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_get_color_internal_format(RID) const */undefined4 GLES3::TextureStorage::render_target_get_color_internal_format(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x3c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_color_internal_format", "drivers/gles3/storage/texture_storage.cpp", 0xaa8, "Parameter \"rt\" is null.", 0, 0);
   return 0x8058;
}
/* GLES3::TextureStorage::render_target_get_color_format(RID) const */undefined4 GLES3::TextureStorage::render_target_get_color_format(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x40 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_color_format", "drivers/gles3/storage/texture_storage.cpp", 0xaaf, "Parameter \"rt\" is null.", 0, 0);
   return 0x1908;
}
/* GLES3::TextureStorage::render_target_get_color_type(RID) const */undefined4 GLES3::TextureStorage::render_target_get_color_type(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x44 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_color_type", "drivers/gles3/storage/texture_storage.cpp", 0xab6, "Parameter \"rt\" is null.", 0, 0);
   return 0x1401;
}
/* GLES3::TextureStorage::render_target_get_color_format_size(RID) const */undefined4 GLES3::TextureStorage::render_target_get_color_format_size(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x48 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_color_format_size", "drivers/gles3/storage/texture_storage.cpp", 0xabd, "Parameter \"rt\" is null.", 0, 0);
   return 4;
}
/* GLES3::TextureStorage::render_target_get_fbo(RID) const */undefined4 GLES3::TextureStorage::render_target_get_fbo(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x20 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_fbo", "drivers/gles3/storage/texture_storage.cpp", 0xae9, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_color(RID) const */undefined4 GLES3::TextureStorage::render_target_get_color(TextureStorage *this, ulong param_2) {
   ulong uVar1;
   int iVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      if (*(int*)( lVar3 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = *(ulong*)( lVar3 + 0x98 );
         if (uVar1 == 0) {
            return *(undefined4*)( lVar3 + 0x24 );
         }

         if ((uint)uVar1 < *(uint*)( this + 0xf4 )) {
            lVar3 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
            iVar2 = *(int*)( lVar3 + 0xe8 );
            if (iVar2 == (int)( uVar1 >> 0x20 )) {
               if (*(char*)( lVar3 + 8 ) == '\0') {
                  LAB_00104a55:return *(undefined4*)( lVar3 + 0x74 );
               }

               if (( *(long*)( lVar3 + 0x10 ) == 0 ) || ( uVar1 = *(ulong*)( lVar3 + 0x10 ) * (uint*)( this + 0xf4 ) <= (uint)uVar1 )) goto LAB_00104af0;
               lVar3 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               iVar2 = *(int*)( lVar3 + 0xe8 );
               if (iVar2 == (int)( uVar1 >> 0x20 )) goto LAB_00104a55;
            }

            if (iVar2 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         LAB_00104af0:_err_print_error("render_target_get_color", "drivers/gles3/storage/texture_storage.cpp", 0xaf4, "Parameter \"texture\" is null.", 0, 0);
         return 0;
      }

      if (*(int*)( lVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_color", "drivers/gles3/storage/texture_storage.cpp", 0xaf0, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_depth(RID) const */undefined4 GLES3::TextureStorage::render_target_get_depth(TextureStorage *this, ulong param_2) {
   ulong uVar1;
   int iVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      if (*(int*)( lVar3 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = *(ulong*)( lVar3 + 0xa0 );
         if (uVar1 == 0) {
            return *(undefined4*)( lVar3 + 0x28 );
         }

         if ((uint)uVar1 < *(uint*)( this + 0xf4 )) {
            lVar3 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
            iVar2 = *(int*)( lVar3 + 0xe8 );
            if (iVar2 == (int)( uVar1 >> 0x20 )) {
               if (*(char*)( lVar3 + 8 ) == '\0') {
                  LAB_00104c75:return *(undefined4*)( lVar3 + 0x74 );
               }

               if (( *(long*)( lVar3 + 0x10 ) == 0 ) || ( uVar1 = *(ulong*)( lVar3 + 0x10 ) * (uint*)( this + 0xf4 ) <= (uint)uVar1 )) goto LAB_00104d10;
               lVar3 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               iVar2 = *(int*)( lVar3 + 0xe8 );
               if (iVar2 == (int)( uVar1 >> 0x20 )) goto LAB_00104c75;
            }

            if (iVar2 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         LAB_00104d10:_err_print_error("render_target_get_depth", "drivers/gles3/storage/texture_storage.cpp", 0xb02, "Parameter \"texture\" is null.", 0, 0);
         return 0;
      }

      if (*(int*)( lVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_depth", "drivers/gles3/storage/texture_storage.cpp", 0xafe, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_set_reattach_textures(RID, bool) const */void GLES3::TextureStorage::render_target_set_reattach_textures(TextureStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x7c ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_reattach_textures", "drivers/gles3/storage/texture_storage.cpp", 0xb0c, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_is_reattach_textures(RID) const */undefined1 GLES3::TextureStorage::render_target_is_reattach_textures(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x7c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_is_reattach_textures", "drivers/gles3/storage/texture_storage.cpp", 0xb13, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::_render_target_get_sdf_rect(GLES3::RenderTarget const*) const */undefined8 GLES3::TextureStorage::_render_target_get_sdf_rect(TextureStorage *this, RenderTarget *param_1) {
   uint uVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar1 = *(uint*)( param_1 + 100 );
   local_58 = 0;
   if (uVar1 == 2) {
      iVar2 = 0x96;
   }
 else {
      if (uVar1 < 3) {
         iVar2 = 0x78;
         if (uVar1 != 0) goto LAB_00104f78;
      }
 else {
         iVar2 = 200;
         if (uVar1 == 3) goto LAB_00104f78;
         _err_print_error("_render_target_get_sdf_rect", "drivers/gles3/storage/texture_storage.cpp", 0xb36, "Invalid viewport SDF oversize, defaulting to 100%.", 0, 0);
      }

      iVar2 = 100;
   }

   LAB_00104f78:local_50 = Vector2i::operator *((Vector2i*)( param_1 + 8 ), iVar2);
   local_48 = Vector2i::operator /((Vector2i*)&local_50, 100);
   local_58 = Vector2i::operator -((Vector2i*)&local_48, (Vector2i*)( param_1 + 8 ));
   local_48 = 0;
   local_40[0] = *(undefined8*)( param_1 + 8 );
   Vector2i::operator -=((Vector2i*)&local_48, (Vector2i*)&local_58);
   local_50 = Vector2i::operator *((Vector2i*)&local_58, 2);
   Vector2i::operator +=((Vector2i*)local_40, (Vector2i*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_48;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::render_target_get_sdf_rect(RID) const */undefined8 GLES3::TextureStorage::render_target_get_sdf_rect(TextureStorage *this, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   RenderTarget *pRVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar3 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      iVar1 = *(int*)( pRVar3 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         uVar2 = _render_target_get_sdf_rect(this, pRVar3);
         return uVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_sdf_rect", "drivers/gles3/storage/texture_storage.cpp", 0xb46, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_is_sdf_enabled(RID) const */undefined1 GLES3::TextureStorage::render_target_is_sdf_enabled(TextureStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x74 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_is_sdf_enabled", "drivers/gles3/storage/texture_storage.cpp", 0xb54, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* GLES3::TextureStorage::render_target_get_sdf_texture(RID) */int GLES3::TextureStorage::render_target_get_sdf_texture(TextureStorage *this, ulong param_2) {
   int iVar1;
   ulong uVar2;
   code *pcVar3;
   long lVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
      iVar1 = *(int*)( lVar4 + 0xe8 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         iVar1 = *(int*)( lVar4 + 0x60 );
         if (iVar1 != 0) {
            return iVar1;
         }

         if (*(long*)( this + 0x20 ) != 0) {
            uVar2 = *(ulong*)( this + 0x20 );
            if ((uint)uVar2 < *(uint*)( this + 0xf4 )) {
               lVar4 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               if (*(int*)( lVar4 + 0xe8 ) == (int)( uVar2 >> 0x20 )) {
                  return *(int*)( lVar4 + 0x74 );
               }

               if (*(int*)( lVar4 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar4);
               }

            }

         }

         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_sdf_texture", "drivers/gles3/storage/texture_storage.cpp", 0xb5b, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::render_target_sdf_process(RID) */void GLES3::TextureStorage::render_target_sdf_process(TextureStorage *this, ulong param_2) {
   Version *pVVar1;
   ulong *puVar2;
   code *pcVar3;
   uint uVar4;
   int iVar5;
   long lVar6;
   ulong uVar7;
   undefined4 *puVar8;
   ulong extraout_RDX;
   long lVar9;
   undefined8 uVar10;
   RenderTarget *pRVar11;
   undefined4 uVar12;
   char *this_00;
   long lVar13;
   uint uVar14;
   char *pcVar15;
   uint uVar16;
   ulong in_R10;
   byte bVar17;
   ulong uVar18;
   ulong uVar19;
   ulong uVar20;
   uint uVar21;
   OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *pOVar22;
   int iVar23;
   long in_FS_OFFSET;
   char *pcVar24;
   int local_120;
   ulong local_f8;
   undefined4 local_e4;
   undefined4 local_c4;
   ulong local_c0[7];
   ulong local_88[6];
   undefined2 local_58;
   ulong local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   GLES3::CopyEffects::get_singleton();
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar11 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar11 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pRVar11 + 0x54 ) == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar10 = 0xbcd;
               pcVar15 = "Condition \"rt->sdf_texture_write_fb == 0\" is true.";
               goto LAB_001067f9;
            }

            goto LAB_0010964d;
         }

         _render_target_get_sdf_rect(this, pRVar11);
         iVar5 = (int)( extraout_RDX >> 0x20 );
         if (*(int*)( pRVar11 + 0x68 ) == 1) {
            local_120 = 1;
            bVar17 = 1;
            local_e4 = 1;
            local_f8 = CONCAT44(iVar5 >> 1, (int)extraout_RDX >> 1);
            uVar21 = 1;
         }
 else if (*(int*)( pRVar11 + 0x68 ) == 2) {
            uVar21 = 1;
            bVar17 = 1;
            local_120 = 1;
            local_e4 = 2;
            local_f8 = CONCAT44(iVar5 >> 2, (int)extraout_RDX >> 2);
         }
 else {
            uVar21 = 0;
            bVar17 = 0;
            local_120 = 0;
            local_e4 = 0;
            local_f8 = extraout_RDX;
         }

         ( *_glad_glGenFramebuffers )(1, &local_c4);
         ( *_glad_glBindFramebuffer )(0x8d40, local_c4);
         pVVar1 = (Version*)( this + 0x1d0 );
         iVar5 = *(int*)( this + 0x2f0 );
         local_c0[6] = 0;
         uVar19 = *(ulong*)( this + 0x300 );
         if (local_120 < iVar5) {
            if (uVar19 != 0) {
               if ((uint)uVar19 < *(uint*)( this + 0x224 )) {
                  uVar18 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                  iVar5 = *(int*)( uVar18 + 0x78 );
                  if (iVar5 == (int)( uVar19 >> 0x20 )) {
                     uVar4 = *(uint*)( uVar18 + 0x68 );
                     if (uVar4 == 0) {
                        ShaderGLES3::_initialize_version(pVVar1);
                        uVar4 = *(uint*)( uVar18 + 0x68 );
                     }

                     uVar19 = (ulong)bVar17;
                     if (uVar4 <= uVar21) {
                        LAB_00106918:uVar18 = (ulong)uVar4;
                        goto LAB_001066b6;
                     }

                     uVar19 = (ulong)bVar17;
                     lVar6 = uVar19 * 0x20;
                     pOVar22 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( uVar18 + 0x70 ) + lVar6 );
                     uVar4 = *(uint*)( pOVar22 + 0x18 );
                     uVar7 = local_c0[6] * 0x3ffff - 1;
                     uVar7 = ( uVar7 ^ uVar7 >> 0x1f ) * 0x15;
                     uVar7 = ( uVar7 ^ uVar7 >> 0xb ) * 0x41;
                     uVar7 = uVar7 >> 0x16 ^ uVar7;
                     uVar20 = uVar7 & 0xffffffff;
                     if ((int)uVar7 == 0) {
                        uVar20 = 1;
                     }

                     uVar7 = uVar20 % (ulong)uVar4;
                     uVar14 = *(uint*)( *(long*)( pOVar22 + 0x10 ) + uVar7 * 4 );
                     if (uVar14 != 0) {
                        in_R10 = 0;
                        while (( (uint)uVar20 != uVar14 || ( local_c0[6] != *(long*)( *(long*)( pOVar22 + 8 ) + uVar7 * 8 ) ) )) {
                           uVar16 = (int)in_R10 + 1;
                           in_R10 = (ulong)uVar16;
                           uVar7 = ( ulong )((int)uVar7 + 1) % (ulong)uVar4;
                           uVar14 = *(uint*)( *(long*)( pOVar22 + 0x10 ) + uVar7 * 4 );
                           if (( uVar14 == 0 ) || ( ( ( uVar4 + (int)uVar7 ) - uVar14 % uVar4 ) % uVar4 < uVar16 )) goto LAB_001066e0;
                        }
;
                        puVar8 = (undefined4*)( *(long*)pOVar22 + uVar7 * 0x38 );
                        if (puVar8 != (undefined4*)0x0) {
                           if (*(char*)( puVar8 + 0xc ) == '\0') goto LAB_0010562d;
                           puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr(pOVar22, (ulong*)( this + 0x2e0 ));
                           goto LAB_00105624;
                        }

                     }

                     LAB_001066e0:local_58 = 0;
                     for (int i = 0; i < 6; i++) {
                        local_88[i] = 0;
                     }

                     ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)local_88, (Version*)(ulong)uVar21, uVar18);
                     uVar4 = *(uint*)( uVar18 + 0x68 );
                     if (uVar21 < uVar4) {
                        OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( uVar18 + 0x70 ) ), local_c0 + 6, (Specialization*)local_88);
                        uVar4 = *(uint*)( uVar18 + 0x68 );
                        if (uVar21 < uVar4) {
                           puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( uVar18 + 0x70 ) ), local_c0 + 6);
                           if (this[0x270] != (TextureStorage)0x0) {
                              ShaderGLES3::_save_to_cache(pVVar1);
                           }

                           ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_88);
                           LAB_00105624:if (puVar8 != (undefined4*)0x0) {
                              LAB_0010562d:if (*(char*)( (long)puVar8 + 0x31 ) != '\0') {
                                 ( *_glad_glUseProgram )(*puVar8);
                                 lVar13 = (long)*(int*)( this + 0x2a0 );
                                 *(undefined4**)( this + 0x2f8 ) = puVar8;
                                 local_88[0] = 0;
                                 uVar18 = *(ulong*)( this + 0x300 );
                                 if (*(int*)( this + 0x2a0 ) < 4) {
                                    uVar18 = 3;
                                    pcVar15 = "p_which";
                                    iVar5 = 0xe4;
                                    pcVar24 = "uniform_count";
                                    LAB_0010740d:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, uVar18, lVar13, pcVar15, pcVar24, "", false, false);
                                    lVar13 = (long)*(int*)( this + 0x2a0 );
                                    goto LAB_001057e1;
                                 }

                                 if (( uVar18 != 0 ) && ( (uint)uVar18 < *(uint*)( this + 0x224 ) )) {
                                    lVar9 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                    iVar5 = *(int*)( lVar9 + 0x78 );
                                    if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                       if (iVar5 + 0x80000000U < 0x7fffffff) {
                                          uVar7 = 0;
                                          _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                       }

                                       goto LAB_001069d0;
                                    }

                                    uVar4 = *(uint*)( lVar9 + 0x68 );
                                    lVar13 = (long)(int)uVar4;
                                    if ((int)uVar4 <= local_120) {
                                       iVar5 = 0xe7;
                                       pcVar15 = "p_variant";
                                       pcVar24 = "int(version->variants.size())";
                                       uVar18 = uVar19;
                                       goto LAB_0010740d;
                                    }

                                    if (uVar21 < uVar4) {
                                       lVar9 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar9 + 0x70 ) ), local_88);
                                       pcVar3 = _glad_glUniform2iv;
                                       if (lVar9 == 0) {
                                          _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                       }
 else {
                                          lVar13 = (long)*(int*)( lVar9 + 0x10 );
                                          if (*(int*)( lVar9 + 0x10 ) < 4) {
                                             pcVar15 = "p_which";
                                             iVar5 = 0xea;
                                             pcVar24 = "int(spec->uniform_location.size())";
                                             uVar18 = 3;
                                             goto LAB_0010740d;
                                          }

                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                          uVar4 = *(uint*)( *(long*)( lVar9 + 0x18 ) + 0xc );
                                          in_R10 = (ulong)uVar4;
                                          if ((int)uVar4 < 0) goto LAB_001057e1;
                                          local_c0[6] = 0;
                                          if (*(int*)( this + 0x2a0 ) < 4) {
                                             local_48 = extraout_RDX;
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, lVar13, "p_which", "uniform_count", "", false, false);
                                             goto LAB_00107bad;
                                          }

                                          local_48 = extraout_RDX;
                                          if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                             lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                             if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                                if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                   _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                                }

                                                goto LAB_00107c23;
                                             }

                                             uVar4 = *(uint*)( lVar13 + 0x68 );
                                             if ((int)uVar4 <= local_120) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                                goto LAB_00107bad;
                                             }

                                             if (uVar4 <= uVar21) goto LAB_00106690;
                                             lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 6);
                                             if (lVar13 == 0) {
                                                _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                goto LAB_00107bad;
                                             }

                                             if (*(int*)( lVar13 + 0x10 ) < 4) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                goto LAB_00107bad;
                                             }

                                             uVar12 = *(undefined4*)( *(long*)( lVar13 + 0x18 ) + 0xc );
                                          }
 else {
                                             LAB_00107c23:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                             LAB_00107bad:uVar12 = 0xffffffff;
                                          }

                                          ( *pcVar3 )(uVar12, 1, &local_48);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                       }

                                       goto LAB_001057e1;
                                    }

                                    LAB_00106690:uVar19 = 1;
                                    uVar18 = 1;
                                    goto LAB_001066b6;
                                 }

                                 LAB_001069d0:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                 lVar13 = (long)*(int*)( this + 0x2a0 );
                                 LAB_001057e1:local_c0[5] = 0;
                                 uVar18 = *(ulong*)( this + 0x300 );
                                 if ((int)lVar13 < 1) {
                                    uVar18 = 0;
                                    iVar5 = 0xe4;
                                    pcVar15 = "p_which";
                                    pcVar24 = "uniform_count";
                                    LAB_00107498:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, uVar18, lVar13, pcVar15, pcVar24, "", false, false);
                                    lVar13 = (long)*(int*)( this + 0x2a0 );
                                    goto LAB_0010596b;
                                 }

                                 if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                    LAB_001076a0:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                    lVar13 = (long)*(int*)( this + 0x2a0 );
                                 }
 else {
                                    lVar9 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                    iVar5 = *(int*)( lVar9 + 0x78 );
                                    if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                       if (iVar5 + 0x80000000U < 0x7fffffff) {
                                          _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                       }

                                       goto LAB_001076a0;
                                    }

                                    uVar4 = *(uint*)( lVar9 + 0x68 );
                                    lVar13 = (long)(int)uVar4;
                                    if ((int)uVar4 <= local_120) {
                                       iVar5 = 0xe7;
                                       pcVar15 = "p_variant";
                                       pcVar24 = "int(version->variants.size())";
                                       uVar18 = uVar19;
                                       goto LAB_00107498;
                                    }

                                    if (uVar4 <= uVar21) goto LAB_00106690;
                                    lVar9 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar9 + 0x70 ) ), local_c0 + 5);
                                    pcVar3 = _glad_glUniform2iv;
                                    if (lVar9 == 0) {
                                       _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                    }
 else {
                                       lVar13 = (long)*(int*)( lVar9 + 0x10 );
                                       if (*(int*)( lVar9 + 0x10 ) < 1) {
                                          iVar5 = 0xea;
                                          pcVar15 = "p_which";
                                          pcVar24 = "int(spec->uniform_location.size())";
                                          uVar18 = 0;
                                          goto LAB_00107498;
                                       }

                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                       if (**(int**)( lVar9 + 0x18 ) < 0) goto LAB_0010596b;
                                       local_c0[4] = 0;
                                       local_50 = local_f8;
                                       if (*(int*)( this + 0x2a0 ) < 1) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, lVar13, "p_which", "uniform_count", "", false, false);
                                          goto LAB_00107c86;
                                       }

                                       if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                          lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                             if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_00107d10;
                                          }

                                          uVar4 = *(uint*)( lVar13 + 0x68 );
                                          if ((int)uVar4 <= local_120) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_00107c86;
                                          }

                                          if (uVar4 <= uVar21) goto LAB_00106690;
                                          lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 4);
                                          if (lVar13 == 0) {
                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             goto LAB_00107c86;
                                          }

                                          if (*(int*)( lVar13 + 0x10 ) < 1) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             goto LAB_00107c86;
                                          }

                                          uVar12 = **(undefined4**)( lVar13 + 0x18 );
                                       }
 else {
                                          LAB_00107d10:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          LAB_00107c86:uVar12 = 0xffffffff;
                                       }

                                       ( *pcVar3 )(uVar12, 1, &local_50);
                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                    }

                                 }

                                 LAB_0010596b:local_c0[3] = 0;
                                 uVar18 = *(ulong*)( this + 0x300 );
                                 if ((int)lVar13 < 2) {
                                    uVar18 = 1;
                                    pcVar15 = "p_which";
                                    iVar5 = 0xe4;
                                    pcVar24 = "uniform_count";
                                    LAB_0010763b:uVar20 = 0;
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, uVar18, lVar13, pcVar15, pcVar24, "", false, false);
                                    lVar13 = (long)*(int*)( this + 0x2a0 );
                                    goto LAB_00105adf;
                                 }

                                 if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                    LAB_001077b0:uVar20 = 0x1077d5;
                                    _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                    lVar13 = (long)*(int*)( this + 0x2a0 );
                                 }
 else {
                                    lVar9 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                    iVar5 = *(int*)( lVar9 + 0x78 );
                                    if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                       if (iVar5 + 0x80000000U < 0x7fffffff) {
                                          _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                       }

                                       goto LAB_001077b0;
                                    }

                                    uVar4 = *(uint*)( lVar9 + 0x68 );
                                    lVar13 = (long)(int)uVar4;
                                    if ((int)uVar4 <= local_120) {
                                       iVar5 = 0xe7;
                                       pcVar15 = "p_variant";
                                       pcVar24 = "int(version->variants.size())";
                                       uVar18 = uVar19;
                                       goto LAB_0010763b;
                                    }

                                    if (uVar4 <= uVar21) goto LAB_00106690;
                                    uVar20 = 0x105a04;
                                    lVar9 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar9 + 0x70 ) ), local_c0 + 3);
                                    pcVar3 = _glad_glUniform1i;
                                    if (lVar9 == 0) {
                                       uVar20 = 0x107ad0;
                                       _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                    }
 else {
                                       lVar13 = (long)*(int*)( lVar9 + 0x10 );
                                       if (*(int*)( lVar9 + 0x10 ) < 2) {
                                          pcVar15 = "p_which";
                                          iVar5 = 0xea;
                                          pcVar24 = "int(spec->uniform_location.size())";
                                          uVar18 = 1;
                                          goto LAB_0010763b;
                                       }

                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                       if (*(int*)( *(long*)( lVar9 + 0x18 ) + 4 ) < 0) goto LAB_00105adf;
                                       local_c0[2] = 0;
                                       if (*(int*)( this + 0x2a0 ) < 2) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, lVar13, "p_which", "uniform_count", "", false, false);
                                          goto LAB_00107e68;
                                       }

                                       if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                          lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                             if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                uVar7 = 0;
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_00107eb3;
                                          }

                                          uVar4 = *(uint*)( lVar13 + 0x68 );
                                          if ((int)uVar4 <= local_120) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_00107e68;
                                          }

                                          if (uVar4 <= uVar21) goto LAB_00106690;
                                          lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 2);
                                          if (lVar13 == 0) {
                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             goto LAB_00107e68;
                                          }

                                          if (*(int*)( lVar13 + 0x10 ) < 2) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             goto LAB_00107e68;
                                          }

                                          uVar12 = *(undefined4*)( *(long*)( lVar13 + 0x18 ) + 4 );
                                       }
 else {
                                          LAB_00107eb3:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          LAB_00107e68:uVar12 = 0xffffffff;
                                       }

                                       uVar20 = 0x105ad8;
                                       ( *pcVar3 )(uVar12, 0);
                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                    }

                                 }

                                 LAB_00105adf:local_c0[1] = 0;
                                 uVar18 = *(ulong*)( this + 0x300 );
                                 if ((int)lVar13 < 3) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, lVar13, "p_which", "uniform_count", "", false, false);
                                    goto LAB_00105c48;
                                 }

                                 if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                    LAB_00107958:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                 }
 else {
                                    lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                    iVar5 = *(int*)( lVar13 + 0x78 );
                                    if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                       if (iVar5 + 0x80000000U < 0x7fffffff) {
                                          in_R10 = uVar20;
                                          _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                       }

                                       goto LAB_00107958;
                                    }

                                    uVar4 = *(uint*)( lVar13 + 0x68 );
                                    if ((int)uVar4 <= local_120) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                       goto LAB_00105c48;
                                    }

                                    if (uVar4 <= uVar21) goto LAB_00106690;
                                    lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 1);
                                    pcVar3 = _glad_glUniform1i;
                                    if (lVar13 == 0) {
                                       _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                    }
 else if (*(int*)( lVar13 + 0x10 ) < 3) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                    }
 else if (-1 < *(int*)( *(long*)( lVar13 + 0x18 ) + 8 )) {
                                       local_c0[0] = 0;
                                       if (*(int*)( this + 0x2a0 ) < 3) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                          goto LAB_00106ae5;
                                       }

                                       if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                          lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                             if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_00106b01;
                                          }

                                          uVar4 = *(uint*)( lVar13 + 0x68 );
                                          if ((int)uVar4 <= local_120) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_00106ae5;
                                          }

                                          if (uVar4 <= uVar21) goto LAB_00106690;
                                          lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0);
                                          if (lVar6 == 0) {
                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             goto LAB_00106ae5;
                                          }

                                          if (*(int*)( lVar6 + 0x10 ) < 3) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             goto LAB_00106ae5;
                                          }

                                          uVar12 = *(undefined4*)( *(long*)( lVar6 + 0x18 ) + 8 );
                                       }
 else {
                                          LAB_00106b01:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          LAB_00106ae5:uVar12 = 0xffffffff;
                                       }

                                       ( *pcVar3 )(uVar12, local_e4);
                                    }

                                 }

                                 LAB_00105c48:uVar4 = ( uint )(local_f8 >> 0x20);
                                 ( *_glad_glActiveTexture )(0x84c0);
                                 ( *_glad_glBindTexture )(0xde1, *(undefined4*)( pRVar11 + 0x50 ));
                                 ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( pRVar11 + 0x58 ), 0);
                                 ( *_glad_glViewport )(0, 0, local_f8 & 0xffffffff, uVar4);
                                 ( *_glad_glEnable )(0xc11);
                                 ( *_glad_glScissor )(0, 0, local_f8 & 0xffffffff, uVar4);
                                 GLES3::CopyEffects::draw_screen_triangle();
                                 iVar5 = *(int*)( this + 0x2f0 );
                                 local_c0[6] = 0;
                                 uVar19 = *(ulong*)( this + 0x300 );
                                 if (iVar5 < 3) {
                                    uVar19 = 2;
                                    goto LAB_001068ef;
                                 }

                                 if (( uVar19 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar19 )) goto LAB_00106830;
                                 uVar20 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                 iVar5 = *(int*)( uVar20 + 0x78 );
                                 if (iVar5 != (int)( uVar19 >> 0x20 )) goto LAB_0010681d;
                                 uVar14 = *(uint*)( uVar20 + 0x68 );
                                 if (uVar14 == 0) {
                                    ShaderGLES3::_initialize_version(pVVar1);
                                    uVar14 = *(uint*)( uVar20 + 0x68 );
                                 }

                                 uVar18 = (ulong)uVar14;
                                 if (2 < uVar14) {
                                    pOVar22 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( uVar20 + 0x70 ) + 0x40 );
                                    puVar2 = local_c0 + 6;
                                    puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr(pOVar22, puVar2);
                                    if (puVar8 != (undefined4*)0x0) {
                                       if (*(char*)( puVar8 + 0xc ) != '\0') {
                                          puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr(pOVar22, (ulong*)( this + 0x2e0 ));
                                          LAB_00105d82:if (puVar8 == (undefined4*)0x0) goto LAB_00106600;
                                       }

                                       if (*(char*)( (long)puVar8 + 0x31 ) == '\0') goto LAB_00106600;
                                       ( *_glad_glUseProgram )(*puVar8);
                                       lVar6 = (long)*(int*)( this + 0x2a0 );
                                       local_88[0] = 0;
                                       uVar19 = *(ulong*)( this + 0x300 );
                                       *(undefined4**)( this + 0x2f8 ) = puVar8;
                                       if (*(int*)( this + 0x2a0 ) < 4) {
                                          lVar13 = 3;
                                          pcVar15 = "p_which";
                                          iVar5 = 0xe4;
                                          pcVar24 = "uniform_count";
                                          goto LAB_00107ff4;
                                       }

                                       if (( uVar19 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar19 )) {
                                          LAB_00106a78:uVar18 = 0x106a9d;
                                          _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          lVar6 = (long)*(int*)( this + 0x2a0 );
                                       }
 else {
                                          lVar13 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar13 + 0x78 );
                                          if (iVar5 != (int)( uVar19 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_00106a78;
                                          }

                                          lVar6 = (long)*(int*)( lVar13 + 0x68 );
                                          if (*(int*)( lVar13 + 0x68 ) < 3) {
                                             lVar13 = 2;
                                             pcVar15 = "p_variant";
                                             iVar5 = 0xe7;
                                             pcVar24 = "int(version->variants.size())";
                                             LAB_00107ff4:uVar18 = 0;
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, lVar13, lVar6, pcVar15, pcVar24, "", false, false);
                                             lVar6 = (long)*(int*)( this + 0x2a0 );
                                          }
 else {
                                             uVar18 = 0x105e4a;
                                             lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar13 + 0x70 ) + 0x40 ), local_88);
                                             pcVar3 = _glad_glUniform2iv;
                                             if (lVar13 == 0) {
                                                uVar18 = 0x108453;
                                                _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                lVar6 = (long)*(int*)( this + 0x2a0 );
                                             }
 else {
                                                lVar6 = (long)*(int*)( lVar13 + 0x10 );
                                                if (*(int*)( lVar13 + 0x10 ) < 4) {
                                                   lVar13 = 3;
                                                   pcVar15 = "p_which";
                                                   iVar5 = 0xea;
                                                   pcVar24 = "int(spec->uniform_location.size())";
                                                   goto LAB_00107ff4;
                                                }

                                                lVar6 = (long)*(int*)( this + 0x2a0 );
                                                if (*(int*)( *(long*)( lVar13 + 0x18 ) + 0xc ) < 0) goto LAB_00105f39;
                                                local_88[0] = 0;
                                                if (*(int*)( this + 0x2a0 ) < 4) {
                                                   local_48 = extraout_RDX;
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, lVar6, "p_which", "uniform_count", "", false, false);
                                                   goto LAB_001087da;
                                                }

                                                local_48 = extraout_RDX;
                                                if ((uint)uVar19 < *(uint*)( this + 0x224 )) {
                                                   lVar6 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                   if (iVar5 != *(int*)( lVar6 + 0x78 )) {
                                                      if (*(int*)( lVar6 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, local_88);
                                                      }

                                                      goto LAB_001087b5;
                                                   }

                                                   if (*(int*)( lVar6 + 0x68 ) < 3) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                                      goto LAB_001087da;
                                                   }

                                                   lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                                   if (lVar6 == 0) {
                                                      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                      goto LAB_001087da;
                                                   }

                                                   if (*(int*)( lVar6 + 0x10 ) < 4) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                      goto LAB_001087da;
                                                   }

                                                   uVar12 = *(undefined4*)( *(long*)( lVar6 + 0x18 ) + 0xc );
                                                }
 else {
                                                   LAB_001087b5:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                   LAB_001087da:uVar12 = 0xffffffff;
                                                }

                                                uVar18 = 0x105f32;
                                                ( *pcVar3 )(uVar12, 1, &local_48);
                                                lVar6 = (long)*(int*)( this + 0x2a0 );
                                             }

                                          }

                                       }

                                       LAB_00105f39:local_88[0] = 0;
                                       uVar19 = *(ulong*)( this + 0x300 );
                                       if ((int)lVar6 < 1) {
                                          lVar13 = 0;
                                          iVar5 = 0xe4;
                                          pcVar15 = "p_which";
                                          pcVar24 = "uniform_count";
                                          goto LAB_0010807a;
                                       }

                                       if (( uVar19 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar19 )) {
                                          LAB_001082a3:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          lVar6 = (long)*(int*)( this + 0x2a0 );
                                       }
 else {
                                          lVar13 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar13 + 0x78 );
                                          if (iVar5 != (int)( uVar19 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                in_R10 = 0;
                                                uVar7 = uVar18;
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_001082a3;
                                          }

                                          lVar6 = (long)*(int*)( lVar13 + 0x68 );
                                          if (*(int*)( lVar13 + 0x68 ) < 3) {
                                             lVar13 = 2;
                                             pcVar15 = "p_variant";
                                             iVar5 = 0xe7;
                                             pcVar24 = "int(version->variants.size())";
                                             LAB_0010807a:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, lVar13, lVar6, pcVar15, pcVar24, "", false, false);
                                             lVar6 = (long)*(int*)( this + 0x2a0 );
                                          }
 else {
                                             lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar13 + 0x70 ) + 0x40 ), local_88);
                                             pcVar3 = _glad_glUniform2iv;
                                             if (lVar13 == 0) {
                                                _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                lVar6 = (long)*(int*)( this + 0x2a0 );
                                             }
 else {
                                                lVar6 = (long)*(int*)( lVar13 + 0x10 );
                                                if (*(int*)( lVar13 + 0x10 ) < 1) {
                                                   lVar13 = 0;
                                                   iVar5 = 0xea;
                                                   pcVar15 = "p_which";
                                                   pcVar24 = "int(spec->uniform_location.size())";
                                                   goto LAB_0010807a;
                                                }

                                                lVar6 = (long)*(int*)( this + 0x2a0 );
                                                if (**(int**)( lVar13 + 0x18 ) < 0) goto LAB_001060b9;
                                                local_88[0] = 0;
                                                local_48 = local_f8;
                                                if (*(int*)( this + 0x2a0 ) < 1) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, lVar6, "p_which", "uniform_count", "", false, false);
                                                   goto LAB_00108883;
                                                }

                                                if ((uint)uVar19 < *(uint*)( this + 0x224 )) {
                                                   lVar6 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                   if (iVar5 != *(int*)( lVar6 + 0x78 )) {
                                                      if (*(int*)( lVar6 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x210 ));
                                                      }

                                                      goto LAB_0010885e;
                                                   }

                                                   if (*(int*)( lVar6 + 0x68 ) < 3) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                                      goto LAB_00108883;
                                                   }

                                                   lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                                   if (lVar6 == 0) {
                                                      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                      goto LAB_00108883;
                                                   }

                                                   if (*(int*)( lVar6 + 0x10 ) < 1) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                      goto LAB_00108883;
                                                   }

                                                   uVar12 = **(undefined4**)( lVar6 + 0x18 );
                                                }
 else {
                                                   LAB_0010885e:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                   LAB_00108883:uVar12 = 0xffffffff;
                                                }

                                                ( *pcVar3 )(uVar12, 1, &local_48);
                                                lVar6 = (long)*(int*)( this + 0x2a0 );
                                             }

                                          }

                                       }

                                       LAB_001060b9:local_88[0] = 0;
                                       uVar19 = local_f8 & 0xffffffff;
                                       if ((int)local_f8 < (int)uVar4) {
                                          uVar19 = (ulong)uVar4;
                                       }

                                       uVar18 = *(ulong*)( this + 0x300 );
                                       uVar4 = ( (int)( uVar19 >> 0x1f ) + (int)uVar19 >> 1 ) - 1;
                                       uVar4 = uVar4 | (int)uVar4 >> 1;
                                       uVar4 = (int)uVar4 >> 2 | uVar4;
                                       uVar4 = (int)uVar4 >> 4 | uVar4;
                                       uVar4 = uVar4 | (int)uVar4 >> 8;
                                       iVar23 = ( uVar4 | (int)uVar4 >> 0x10 ) + 1;
                                       if ((int)lVar6 < 2) {
                                          uVar19 = 0;
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, lVar6, "p_which", "uniform_count", "", false, false);
                                          goto LAB_00106257;
                                       }

                                       if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                          LAB_0010811f:uVar19 = 0x108144;
                                          _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                       }
 else {
                                          lVar6 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar6 + 0x78 );
                                          if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_0010811f;
                                          }

                                          if (*(int*)( lVar6 + 0x68 ) < 3) {
                                             uVar19 = 0;
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                          }
 else {
                                             uVar19 = 0x106187;
                                             lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                             pcVar3 = _glad_glUniform1i;
                                             if (lVar6 == 0) {
                                                uVar19 = 0x108484;
                                                _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             }
 else if (*(int*)( lVar6 + 0x10 ) < 2) {
                                                uVar19 = 0;
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             }
 else if (-1 < *(int*)( *(long*)( lVar6 + 0x18 ) + 4 )) {
                                                local_88[0] = 0;
                                                if (*(int*)( this + 0x2a0 ) < 2) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                                   goto LAB_00108686;
                                                }

                                                if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                                   lVar6 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                   if (iVar5 != *(int*)( lVar6 + 0x78 )) {
                                                      if (*(int*)( lVar6 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar7);
                                                      }

                                                      goto LAB_00108661;
                                                   }

                                                   if (*(int*)( lVar6 + 0x68 ) < 3) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                                      goto LAB_00108686;
                                                   }

                                                   lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                                   if (lVar6 == 0) {
                                                      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                      goto LAB_00108686;
                                                   }

                                                   if (*(int*)( lVar6 + 0x10 ) < 2) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                      goto LAB_00108686;
                                                   }

                                                   uVar12 = *(undefined4*)( *(long*)( lVar6 + 0x18 ) + 4 );
                                                }
 else {
                                                   LAB_00108661:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                   LAB_00108686:uVar12 = 0xffffffff;
                                                }

                                                uVar19 = 0x106257;
                                                ( *pcVar3 )(uVar12, iVar23);
                                             }

                                          }

                                       }

                                       LAB_00106257:uVar18 = *(ulong*)( this + 0x300 );
                                       local_88[0] = 0;
                                       if (*(int*)( this + 0x2a0 ) < 3) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                          goto LAB_001063c4;
                                       }

                                       if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                          LAB_00108238:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                       }
 else {
                                          lVar6 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar6 + 0x78 );
                                          if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                in_R10 = uVar19;
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                             }

                                             goto LAB_00108238;
                                          }

                                          if (*(int*)( lVar6 + 0x68 ) < 3) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                          }
 else {
                                             lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                             pcVar3 = _glad_glUniform1i;
                                             if (lVar6 == 0) {
                                                _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             }
 else if (*(int*)( lVar6 + 0x10 ) < 3) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                             }
 else if (-1 < *(int*)( *(long*)( lVar6 + 0x18 ) + 8 )) {
                                                local_88[0] = 0;
                                                if (*(int*)( this + 0x2a0 ) < 3) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                                   goto LAB_0010872f;
                                                }

                                                if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                                   lVar6 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                   if (iVar5 != *(int*)( lVar6 + 0x78 )) {
                                                      if (*(int*)( lVar6 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x210 ));
                                                      }

                                                      goto LAB_0010870a;
                                                   }

                                                   if (*(int*)( lVar6 + 0x68 ) < 3) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                                      goto LAB_0010872f;
                                                   }

                                                   lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                                   if (lVar6 == 0) {
                                                      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                      goto LAB_0010872f;
                                                   }

                                                   if (*(int*)( lVar6 + 0x10 ) < 3) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                      goto LAB_0010872f;
                                                   }

                                                   uVar12 = *(undefined4*)( *(long*)( lVar6 + 0x18 ) + 8 );
                                                }
 else {
                                                   LAB_0010870a:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                   LAB_0010872f:uVar12 = 0xffffffff;
                                                }

                                                ( *pcVar3 )(uVar12, local_e4);
                                             }

                                          }

                                       }

                                       LAB_001063c4:bVar17 = 0;
                                       if (0 < iVar23) {
                                          do {
                                             uVar19 = (ulong)bVar17;
                                             bVar17 = bVar17 ^ 1;
                                             ( *_glad_glBindTexture )(0xde1, 0);
                                             ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( pRVar11 + (ulong)bVar17 * 4 + 0x58 ), 0);
                                             ( *_glad_glBindTexture )(0xde1, *(undefined4*)( pRVar11 + uVar19 * 4 + 0x58 ));
                                             local_88[0] = 0;
                                             uVar19 = *(ulong*)( this + 0x300 );
                                             if (*(int*)( this + 0x2a0 ) < 2) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                                goto LAB_00106520;
                                             }

                                             if (( uVar19 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar19 )) {
                                                LAB_001065a5:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.");
                                             }
 else {
                                                lVar6 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                iVar5 = *(int*)( lVar6 + 0x78 );
                                                if (iVar5 != (int)( uVar19 >> 0x20 )) {
                                                   if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                                   }

                                                   goto LAB_001065a5;
                                                }

                                                if (*(int*)( lVar6 + 0x68 ) < 3) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                                }
 else {
                                                   lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                                   pcVar3 = _glad_glUniform1i;
                                                   if (lVar6 == 0) {
                                                      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.");
                                                   }
 else if (*(int*)( lVar6 + 0x10 ) < 2) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                   }
 else if (-1 < *(int*)( *(long*)( lVar6 + 0x18 ) + 4 )) {
                                                      local_88[0] = 0;
                                                      if (*(int*)( this + 0x2a0 ) < 2) {
                                                         _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                                         goto LAB_0010746c;
                                                      }

                                                      if ((uint)uVar19 < *(uint*)( this + 0x224 )) {
                                                         lVar6 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                         if (iVar5 != *(int*)( lVar6 + 0x78 )) {
                                                            if (*(int*)( lVar6 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                                            }

                                                            goto LAB_001075ec;
                                                         }

                                                         if (*(int*)( lVar6 + 0x68 ) < 3) {
                                                            _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 2, (long)*(int*)( lVar6 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                                            goto LAB_0010746c;
                                                         }

                                                         lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( lVar6 + 0x70 ) + 0x40 ), local_88);
                                                         if (lVar6 == 0) {
                                                            _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.");
                                                            goto LAB_0010746c;
                                                         }

                                                         if (*(int*)( lVar6 + 0x10 ) < 2) {
                                                            _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                            goto LAB_0010746c;
                                                         }

                                                         uVar12 = *(undefined4*)( *(long*)( lVar6 + 0x18 ) + 4 );
                                                      }
 else {
                                                         LAB_001075ec:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.");
                                                         LAB_0010746c:uVar12 = 0xffffffff;
                                                      }

                                                      ( *pcVar3 )(uVar12);
                                                   }

                                                }

                                             }

                                             LAB_00106520:GLES3::CopyEffects::draw_screen_triangle();
                                             iVar23 = iVar23 >> 1;
                                          }
 while ( iVar23 != 0 );
                                       }

                                       iVar5 = *(int*)( this + 0x2f0 );
                                       local_c0[6] = 0;
                                       uVar18 = *(ulong*)( this + 0x300 );
                                       uVar21 = uVar21 + 3;
                                       uVar19 = (ulong)uVar21;
                                       if (iVar5 <= (int)uVar21) {
                                          uVar19 = (ulong)uVar21;
                                          goto LAB_001068ef;
                                       }

                                       if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) goto LAB_00106830;
                                       uVar20 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                       iVar5 = *(int*)( uVar20 + 0x78 );
                                       if (iVar5 != (int)( uVar18 >> 0x20 )) goto LAB_0010681d;
                                       uVar4 = *(uint*)( uVar20 + 0x68 );
                                       if (uVar4 == 0) {
                                          ShaderGLES3::_initialize_version(pVVar1);
                                          uVar4 = *(uint*)( uVar20 + 0x68 );
                                       }

                                       if (uVar4 <= uVar21) goto LAB_00106918;
                                       lVar6 = uVar19 * 0x20;
                                       pOVar22 = (OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( uVar20 + 0x70 ) );
                                       puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr(pOVar22, puVar2);
                                       if (puVar8 == (undefined4*)0x0) {
                                          for (int i = 0; i < 6; i++) {
                                             local_88[i] = 0;
                                          }

                                          local_58 = 0;
                                          ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)local_88, (Version*)(ulong)uVar21, uVar20);
                                          uVar4 = *(uint*)( uVar20 + 0x68 );
                                          if (uVar21 < uVar4) {
                                             OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( uVar20 + 0x70 ) ), puVar2, (Specialization*)local_88);
                                             uVar4 = *(uint*)( uVar20 + 0x68 );
                                             if (uVar21 < uVar4) {
                                                puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( uVar20 + 0x70 ) ), puVar2);
                                                if (this[0x270] != (TextureStorage)0x0) {
                                                   ShaderGLES3::_save_to_cache(pVVar1);
                                                }

                                                ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_88);
                                                goto LAB_00106bfb;
                                             }

                                          }

                                          uVar18 = (ulong)uVar4;
                                          goto LAB_001066b6;
                                       }

                                       if (*(char*)( puVar8 + 0xc ) != '\0') {
                                          puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr(pOVar22, (ulong*)( this + 0x2e0 ));
                                          LAB_00106bfb:if (puVar8 == (undefined4*)0x0) goto LAB_00106600;
                                       }

                                       if (*(char*)( (long)puVar8 + 0x31 ) == '\0') goto LAB_00106600;
                                       ( *_glad_glUseProgram )(*puVar8);
                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                       local_88[0] = 0;
                                       uVar18 = *(ulong*)( this + 0x300 );
                                       *(undefined4**)( this + 0x2f8 ) = puVar8;
                                       if (*(int*)( this + 0x2a0 ) < 4) {
                                          uVar18 = 3;
                                          pcVar15 = "p_which";
                                          iVar5 = 0xe4;
                                          pcVar24 = "uniform_count";
                                          LAB_001088ed:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, uVar18, lVar13, pcVar15, pcVar24, "", false, false);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                          goto LAB_00106dbb;
                                       }

                                       if (( uVar18 != 0 ) && ( (uint)uVar18 < *(uint*)( this + 0x224 ) )) {
                                          lVar9 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar9 + 0x78 );
                                          if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x210 ));
                                             }

                                             goto LAB_0010894d;
                                          }

                                          uVar4 = *(uint*)( lVar9 + 0x68 );
                                          lVar13 = (long)(int)uVar4;
                                          if ((int)uVar4 <= (int)uVar21) {
                                             iVar5 = 0xe7;
                                             pcVar15 = "p_variant";
                                             pcVar24 = "int(version->variants.size())";
                                             uVar18 = uVar19;
                                             goto LAB_001088ed;
                                          }

                                          if (uVar21 < uVar4) {
                                             lVar9 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar9 + 0x70 ) ), local_88);
                                             pcVar3 = _glad_glUniform2iv;
                                             if (lVar9 == 0) {
                                                _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                lVar13 = (long)*(int*)( this + 0x2a0 );
                                             }
 else {
                                                lVar13 = (long)*(int*)( lVar9 + 0x10 );
                                                if (*(int*)( lVar9 + 0x10 ) < 4) {
                                                   pcVar15 = "p_which";
                                                   iVar5 = 0xea;
                                                   pcVar24 = "int(spec->uniform_location.size())";
                                                   uVar18 = 3;
                                                   goto LAB_001088ed;
                                                }

                                                lVar13 = (long)*(int*)( this + 0x2a0 );
                                                if (*(int*)( *(long*)( lVar9 + 0x18 ) + 0xc ) < 0) goto LAB_00106dbb;
                                                local_c0[6] = 0;
                                                if (*(int*)( this + 0x2a0 ) < 4) {
                                                   local_48 = extraout_RDX;
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, lVar13, "p_which", "uniform_count", "", false, false);
                                                   goto LAB_0010915d;
                                                }

                                                local_48 = extraout_RDX;
                                                if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                                   lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                   if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                                      if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar13);
                                                      }

                                                      goto LAB_001091a3;
                                                   }

                                                   uVar4 = *(uint*)( lVar13 + 0x68 );
                                                   if ((int)uVar4 <= (int)uVar21) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                                      goto LAB_0010915d;
                                                   }

                                                   if (uVar4 <= uVar21) goto LAB_00107bb7;
                                                   lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), puVar2);
                                                   if (lVar13 == 0) {
                                                      _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                      goto LAB_0010915d;
                                                   }

                                                   if (*(int*)( lVar13 + 0x10 ) < 4) {
                                                      _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                      goto LAB_0010915d;
                                                   }

                                                   uVar12 = *(undefined4*)( *(long*)( lVar13 + 0x18 ) + 0xc );
                                                }
 else {
                                                   LAB_001091a3:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                   LAB_0010915d:uVar12 = 0xffffffff;
                                                }

                                                ( *pcVar3 )(uVar12, 1, &local_48);
                                                lVar13 = (long)*(int*)( this + 0x2a0 );
                                             }

                                             goto LAB_00106dbb;
                                          }

                                          LAB_00107bb7:uVar19 = 4;
                                          uVar18 = 4;
                                          goto LAB_001066b6;
                                       }

                                       LAB_0010894d:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                       lVar13 = (long)*(int*)( this + 0x2a0 );
                                       LAB_00106dbb:local_c0[5] = 0;
                                       uVar18 = *(ulong*)( this + 0x300 );
                                       if ((int)lVar13 < 1) {
                                          uVar18 = 0;
                                          iVar5 = 0xe4;
                                          pcVar15 = "p_which";
                                          pcVar24 = "uniform_count";
                                          LAB_00108a65:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, uVar18, lVar13, pcVar15, pcVar24, "", false, false);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                          goto LAB_00106f4e;
                                       }

                                       if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                          LAB_00108a12:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                       }
 else {
                                          lVar9 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar9 + 0x78 );
                                          if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                             in_R10 = ( ulong )(iVar5 + 0x80000000U);
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar7);
                                             }

                                             goto LAB_00108a12;
                                          }

                                          uVar4 = *(uint*)( lVar9 + 0x68 );
                                          lVar13 = (long)(int)uVar4;
                                          if ((int)uVar4 <= (int)uVar21) {
                                             iVar5 = 0xe7;
                                             pcVar15 = "p_variant";
                                             pcVar24 = "int(version->variants.size())";
                                             uVar18 = uVar19;
                                             goto LAB_00108a65;
                                          }

                                          if (uVar4 <= uVar21) goto LAB_00107bb7;
                                          lVar9 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar9 + 0x70 ) ), local_c0 + 5);
                                          pcVar3 = _glad_glUniform2iv;
                                          if (lVar9 == 0) {
                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             lVar13 = (long)*(int*)( this + 0x2a0 );
                                          }
 else {
                                             lVar13 = (long)*(int*)( lVar9 + 0x10 );
                                             if (*(int*)( lVar9 + 0x10 ) < 1) {
                                                iVar5 = 0xea;
                                                pcVar15 = "p_which";
                                                pcVar24 = "int(spec->uniform_location.size())";
                                                uVar18 = 0;
                                                goto LAB_00108a65;
                                             }

                                             lVar13 = (long)*(int*)( this + 0x2a0 );
                                             in_R10 = ( ulong ) * *(uint**)( lVar9 + 0x18 );
                                             if ((int)**(uint**)( lVar9 + 0x18 ) < 0) goto LAB_00106f4e;
                                             local_c0[4] = 0;
                                             local_50 = local_f8;
                                             if (*(int*)( this + 0x2a0 ) < 1) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, lVar13, "p_which", "uniform_count", "", false, false);
                                                goto LAB_001090b2;
                                             }

                                             if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                                lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                                   if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x210 ));
                                                   }

                                                   goto LAB_0010908d;
                                                }

                                                uVar4 = *(uint*)( lVar13 + 0x68 );
                                                if ((int)uVar4 <= (int)uVar21) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                                   goto LAB_001090b2;
                                                }

                                                if (uVar4 <= uVar21) goto LAB_00107bb7;
                                                lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 4);
                                                if (lVar13 == 0) {
                                                   _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                   goto LAB_001090b2;
                                                }

                                                if (*(int*)( lVar13 + 0x10 ) < 1) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                   goto LAB_001090b2;
                                                }

                                                uVar12 = **(undefined4**)( lVar13 + 0x18 );
                                             }
 else {
                                                LAB_0010908d:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                LAB_001090b2:uVar12 = 0xffffffff;
                                             }

                                             ( *pcVar3 )(uVar12, 1, &local_50);
                                             lVar13 = (long)*(int*)( this + 0x2a0 );
                                          }

                                       }

                                       LAB_00106f4e:local_c0[3] = 0;
                                       uVar18 = *(ulong*)( this + 0x300 );
                                       if ((int)lVar13 < 2) {
                                          uVar18 = 1;
                                          pcVar15 = "p_which";
                                          iVar5 = 0xe4;
                                          pcVar24 = "uniform_count";
                                          LAB_00108aad:this_00 = "_version_get_uniform";
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar5, uVar18, lVar13, pcVar15, pcVar24, "", false, false);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                          goto LAB_001070c8;
                                       }

                                       if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                          LAB_00108d17:this_00 = "_version_get_uniform";
                                          _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                          lVar13 = (long)*(int*)( this + 0x2a0 );
                                       }
 else {
                                          lVar9 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar9 + 0x78 );
                                          if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar9);
                                             }

                                             goto LAB_00108d17;
                                          }

                                          uVar4 = *(uint*)( lVar9 + 0x68 );
                                          lVar13 = (long)(int)uVar4;
                                          if ((int)uVar4 <= (int)uVar21) {
                                             iVar5 = 0xe7;
                                             pcVar15 = "p_variant";
                                             pcVar24 = "int(version->variants.size())";
                                             uVar18 = uVar19;
                                             goto LAB_00108aad;
                                          }

                                          if (uVar4 <= uVar21) goto LAB_00107bb7;
                                          this_00 = (char*)( lVar6 + *(long*)( lVar9 + 0x70 ) );
                                          lVar9 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)this_00, local_c0 + 3);
                                          pcVar3 = _glad_glUniform1i;
                                          if (lVar9 == 0) {
                                             this_00 = "_version_get_uniform";
                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                             lVar13 = (long)*(int*)( this + 0x2a0 );
                                          }
 else {
                                             lVar13 = (long)*(int*)( lVar9 + 0x10 );
                                             if (*(int*)( lVar9 + 0x10 ) < 2) {
                                                pcVar15 = "p_which";
                                                iVar5 = 0xea;
                                                pcVar24 = "int(spec->uniform_location.size())";
                                                uVar18 = 1;
                                                goto LAB_00108aad;
                                             }

                                             lVar13 = (long)*(int*)( this + 0x2a0 );
                                             if (*(int*)( *(long*)( lVar9 + 0x18 ) + 4 ) < 0) goto LAB_001070c8;
                                             local_c0[2] = 0;
                                             if (*(int*)( this + 0x2a0 ) < 2) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, lVar13, "p_which", "uniform_count", "", false, false);
                                                goto LAB_00109247;
                                             }

                                             if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                                lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                                   if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R10);
                                                   }

                                                   goto LAB_00109307;
                                                }

                                                uVar4 = *(uint*)( lVar13 + 0x68 );
                                                if ((int)uVar4 <= (int)uVar21) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                                   goto LAB_00109247;
                                                }

                                                if (uVar4 <= uVar21) goto LAB_00107bb7;
                                                lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 2);
                                                if (lVar13 == 0) {
                                                   _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                   goto LAB_00109247;
                                                }

                                                if (*(int*)( lVar13 + 0x10 ) < 2) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                   goto LAB_00109247;
                                                }

                                                this_00 = (char*)( ulong ) * (uint*)( *(long*)( lVar13 + 0x18 ) + 4 );
                                             }
 else {
                                                LAB_00109307:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                LAB_00109247:this_00 = (char*)0xffffffff;
                                             }

                                             ( *pcVar3 )(this_00, iVar23);
                                             lVar13 = (long)*(int*)( this + 0x2a0 );
                                          }

                                       }

                                       LAB_001070c8:local_c0[1] = 0;
                                       uVar18 = *(ulong*)( this + 0x300 );
                                       if ((int)lVar13 < 3) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, lVar13, "p_which", "uniform_count", "", false, false);
                                          goto LAB_0010722d;
                                       }

                                       if (( uVar18 == 0 ) || ( *(uint*)( this + 0x224 ) <= (uint)uVar18 )) {
                                          LAB_00108d88:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                       }
 else {
                                          lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                          iVar5 = *(int*)( lVar13 + 0x78 );
                                          if (iVar5 != (int)( uVar18 >> 0x20 )) {
                                             if (iVar5 + 0x80000000U < 0x7fffffff) {
                                                _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, this_00);
                                             }

                                             goto LAB_00108d88;
                                          }

                                          uVar4 = *(uint*)( lVar13 + 0x68 );
                                          if ((int)uVar4 <= (int)uVar21) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                             goto LAB_0010722d;
                                          }

                                          if (uVar4 <= uVar21) goto LAB_00107bb7;
                                          lVar13 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0 + 1);
                                          pcVar3 = _glad_glUniform1i;
                                          if (lVar13 == 0) {
                                             _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                          }
 else if (*(int*)( lVar13 + 0x10 ) < 3) {
                                             _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar13 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                          }
 else if (-1 < *(int*)( *(long*)( lVar13 + 0x18 ) + 8 )) {
                                             local_c0[0] = 0;
                                             if (*(int*)( this + 0x2a0 ) < 3) {
                                                _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( this + 0x2a0 ), "p_which", "uniform_count", "", false, false);
                                                goto LAB_0010936d;
                                             }

                                             if ((uint)uVar18 < *(uint*)( this + 0x224 )) {
                                                lVar13 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x220 ) ) * 0x80 + *(long*)( *(long*)( this + 0x210 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x220 ) ) * 8 );
                                                if (iVar5 != *(int*)( lVar13 + 0x78 )) {
                                                   if (*(int*)( lVar13 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                                      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar13);
                                                   }

                                                   goto LAB_00109498;
                                                }

                                                uVar4 = *(uint*)( lVar13 + 0x68 );
                                                if ((int)uVar4 <= (int)uVar21) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, uVar19, (long)(int)uVar4, "p_variant", "int(version->variants.size())", "", false, false);
                                                   goto LAB_0010936d;
                                                }

                                                if (uVar4 <= uVar21) goto LAB_00107bb7;
                                                lVar6 = OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( lVar6 + *(long*)( lVar13 + 0x70 ) ), local_c0);
                                                if (lVar6 == 0) {
                                                   _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                                   goto LAB_0010936d;
                                                }

                                                if (*(int*)( lVar6 + 0x10 ) < 3) {
                                                   _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar6 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                                   goto LAB_0010936d;
                                                }

                                                uVar12 = *(undefined4*)( *(long*)( lVar6 + 0x18 ) + 8 );
                                             }
 else {
                                                LAB_00109498:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                                LAB_0010936d:uVar12 = 0xffffffff;
                                             }

                                             ( *pcVar3 )(uVar12, local_e4);
                                          }

                                       }

                                       LAB_0010722d:( *_glad_glBindTexture )(0xde1, 0);
                                       ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( pRVar11 + 0x60 ), 0);
                                       ( *_glad_glBindTexture )(0xde1, *(undefined4*)( pRVar11 + (ulong)bVar17 * 4 + 0x58 ));
                                       GLES3::CopyEffects::draw_screen_triangle();
                                       ( *_glad_glBindTexture )(0xde1, 0);
                                       ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
                                       ( *_glad_glDeleteFramebuffers )(1, &local_c4);
                                       ( *_glad_glDisable )(0xc11);
                                       goto LAB_0010660d;
                                    }

                                    local_58 = 0;
                                    for (int i = 0; i < 6; i++) {
                                       local_88[i] = 0;
                                    }

                                    ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)local_88, (Version*)0x2, uVar20);
                                    uVar18 = ( ulong ) * (uint*)( uVar20 + 0x68 );
                                    if (2 < *(uint*)( uVar20 + 0x68 )) {
                                       OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( uVar20 + 0x70 ) + 0x40 ), puVar2, (Specialization*)local_88);
                                       uVar18 = ( ulong ) * (uint*)( uVar20 + 0x68 );
                                       if (2 < *(uint*)( uVar20 + 0x68 )) {
                                          puVar8 = (undefined4*)OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr((OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>*)( *(long*)( uVar20 + 0x70 ) + 0x40 ), puVar2);
                                          if (this[0x270] != (TextureStorage)0x0) {
                                             ShaderGLES3::_save_to_cache(pVVar1);
                                          }

                                          ShaderGLES3::Version::Specialization::~Specialization((Specialization*)local_88);
                                          goto LAB_00105d82;
                                       }

                                    }

                                 }

                                 uVar19 = 2;
                                 goto LAB_001066b6;
                              }

                           }

                           LAB_00106600:if (ShaderGLES3::_version_bind_shader(RID, ,int, unsigned_long) != '\0') {
                              _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xda, "shader failed to compile, unable to bind shader.", 0, 1);
                              ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print =
                              '\0';
                           }

                           goto LAB_0010660d;
                        }

                     }

                     uVar18 = (ulong)uVar4;
                     LAB_001066b6:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar19, uVar18, "p_index", "count", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  LAB_0010681d:local_c0[6] = 0;
                  if (iVar5 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            LAB_00106830:_err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbe, "Parameter \"version\" is null.", 0, 0);
         }
 else {
            uVar19 = (ulong)bVar17;
            LAB_001068ef:local_c0[6] = 0;
            _err_print_index_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbb, uVar19, (long)iVar5, "p_variant", "variant_count", "", false, false);
         }

         LAB_0010660d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010964d;
      }

      if (*(int*)( pRVar11 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar10 = 0xbcc;
      pcVar15 = "Parameter \"rt\" is null.";
      LAB_001067f9:_err_print_error("render_target_sdf_process", "drivers/gles3/storage/texture_storage.cpp", uVar10, pcVar15, 0, 0);
      return;
   }

   LAB_0010964d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_render_target_allocate_sdf(GLES3::RenderTarget*) */void GLES3::TextureStorage::_render_target_allocate_sdf(TextureStorage *this, RenderTarget *param_1) {
   long *plVar1;
   int iVar2;
   uint *puVar3;
   long lVar4;
   int iVar5;
   ulong extraout_RDX;
   uint uVar6;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x54 ) == 0) {
      _render_target_get_sdf_rect(this, param_1);
      local_40 = extraout_RDX;
      ( *_glad_glGenTextures )(1, param_1 + 0x50);
      ( *_glad_glActiveTexture )(0x84c0);
      ( *_glad_glBindTexture )(0xde1, *(undefined4*)( param_1 + 0x50 ));
      ( *_glad_glTexImage2D )(0xde1, 0, 0x8229, local_40 & 0xffffffff, local_40._4_4_, 0, 0x1903, 0x1401, 0);
      lVar4 = Utilities::singleton;
      local_58 = "SDF texture";
      local_60 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange*)&local_60);
      uVar6 = (int)local_40 * local_40._4_4_;
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x50 ));
      plVar1 = (long*)( lVar4 + 0x108 );
      *plVar1 = *plVar1 + (ulong)uVar6;
      puVar3 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar4 + 200 ), (uint*)&local_58);
      lVar4 = local_60;
      *puVar3 = uVar6;
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

      ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2600);
      ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2600);
      ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x813d, 1);
      ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
      ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
      ( *_glad_glGenFramebuffers )(1, param_1 + 0x54);
      ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( param_1 + 0x54 ));
      ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( param_1 + 0x50 ), 0);
      iVar5 = *(int*)( param_1 + 0x68 );
      iVar2 = 0x32;
      if (( iVar5 != 1 ) && ( iVar2 = iVar5 != 2 )) {
         if (iVar5 != 0) {
            _err_print_error("_render_target_allocate_sdf", "drivers/gles3/storage/texture_storage.cpp", 0xb85, "Invalid viewport SDF scale, defaulting to 100%.", 0, 0);
         }

         iVar2 = 100;
      }

      local_38 = Vector2i::operator *((Vector2i*)&local_40, iVar2);
      lVar4 = Vector2i::operator /((Vector2i*)&local_38, 100);
      iVar5 = (int)( (ulong)lVar4 >> 0x20 );
      if (iVar5 == 0 || lVar4 < 0) {
         iVar5 = 1;
      }

      iVar2 = (int)lVar4;
      if (iVar2 < 1) {
         iVar2 = 1;
      }

      *(int*)( param_1 + 0x70 ) = iVar5;
      *(int*)( param_1 + 0x6c ) = iVar2;
      ( *_glad_glGenTextures )(2, param_1 + 0x58);
      ( *_glad_glBindTexture )(0xde1, *(undefined4*)( param_1 + 0x58 ));
      ( *_glad_glTexImage2D )(0xde1, 0, 0x8239, *(undefined4*)( param_1 + 0x6c ), *(undefined4*)( param_1 + 0x70 ), 0, 0x8228, 0x1402, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2600);
      ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2600);
      ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x813d, 1);
      ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
      ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
      lVar4 = Utilities::singleton;
      local_58 = "SDF process texture[0]";
      local_60 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange*)&local_60);
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x58 ));
      uVar6 = *(int*)( param_1 + 0x6c ) * *(int*)( param_1 + 0x70 ) * 4;
      plVar1 = (long*)( lVar4 + 0x108 );
      *plVar1 = *plVar1 + (ulong)uVar6;
      puVar3 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar4 + 200 ), (uint*)&local_58);
      lVar4 = local_60;
      *puVar3 = uVar6;
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

      ( *_glad_glBindTexture )(0xde1, *(undefined4*)( param_1 + 0x5c ));
      ( *_glad_glTexImage2D )(0xde1, 0, 0x8239, *(undefined4*)( param_1 + 0x6c ), *(undefined4*)( param_1 + 0x70 ), 0, 0x8228, 0x1402, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2600);
      ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2600);
      ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x813d, 1);
      ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
      ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
      lVar4 = Utilities::singleton;
      local_58 = "SDF process texture[1]";
      local_60 = 0;
      local_50 = 0x16;
      String::parse_latin1((StrRange*)&local_60);
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x5c ));
      uVar6 = *(int*)( param_1 + 0x6c ) * *(int*)( param_1 + 0x70 ) * 4;
      plVar1 = (long*)( lVar4 + 0x108 );
      *plVar1 = *plVar1 + (ulong)uVar6;
      puVar3 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar4 + 200 ), (uint*)&local_58);
      lVar4 = local_60;
      *puVar3 = uVar6;
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

      ( *_glad_glGenTextures )(1, param_1 + 0x60);
      ( *_glad_glBindTexture )(0xde1, *(undefined4*)( param_1 + 0x60 ));
      ( *_glad_glTexImage2D )(0xde1, 0, 0x8058, *(undefined4*)( param_1 + 0x6c ), *(undefined4*)( param_1 + 0x70 ), 0, 0x1908, 0x1401, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2601);
      ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
      ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x813d, 1);
      ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
      ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
      lVar4 = Utilities::singleton;
      local_58 = "SDF texture (read)";
      local_60 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_60);
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x60 ));
      uVar6 = *(int*)( param_1 + 0x6c ) * *(int*)( param_1 + 0x70 ) * 4;
      plVar1 = (long*)( lVar4 + 0x108 );
      *plVar1 = *plVar1 + (ulong)uVar6;
      puVar3 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar4 + 200 ), (uint*)&local_58);
      lVar4 = local_60;
      *puVar3 = uVar6;
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

      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_render_target_allocate_sdf", "drivers/gles3/storage/texture_storage.cpp", 0xb65, "Condition \"rt->sdf_texture_write_fb != 0\" is true.", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::render_target_get_sdf_framebuffer(RID) */int GLES3::TextureStorage::render_target_get_sdf_framebuffer(TextureStorage *this, ulong param_2) {
   RenderTarget *pRVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar1 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pRVar1 + 0x54 ) != 0) {
            return *(int*)( pRVar1 + 0x54 );
         }

         _render_target_allocate_sdf(this, pRVar1);
         return *(int*)( pRVar1 + 0x54 );
      }

      if (*(int*)( pRVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_get_sdf_framebuffer", "drivers/gles3/storage/texture_storage.cpp", 0xbc0, "Parameter \"rt\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_render_target_clear_sdf(GLES3::RenderTarget*) [clone .part.0] */void GLES3::TextureStorage::_render_target_clear_sdf(RenderTarget *param_1) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *pHVar1;
   ulong uVar2;
   undefined1 auVar3[16];
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
   long lVar35;
   uint uVar36;
   uint *puVar37;
   int iVar38;
   long lVar39;
   ulong uVar40;
   uint uVar41;
   ulong uVar42;
   uint uVar43;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar35 = Utilities::singleton;
   local_44 = *(uint*)( param_1 + 0x60 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
   if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
      uVar36 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
      uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
      uVar41 = uVar36 ^ uVar36 >> 0x10;
      if (uVar36 == uVar36 >> 0x10) {
         uVar41 = 1;
         uVar40 = uVar2;
      }
 else {
         uVar40 = uVar41 * uVar2;
      }

      uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar42;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar40;
      lVar39 = SUB168(auVar3 * auVar19, 8);
      uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
      iVar38 = SUB164(auVar3 * auVar19, 8);
      if (uVar36 != 0) {
         uVar43 = 0;
         do {
            if (( uVar41 == uVar36 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar39 * 8 ) + 0x10 ) )) {
               ( *_glad_glDeleteTextures )(1, &local_44);
               puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
               *(long*)( lVar35 + 0x108 ) = *(long*)( lVar35 + 0x108 ) - ( ulong ) * puVar37;
               HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
               goto LAB_00109f80;
            }

            uVar43 = uVar43 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( iVar38 + 1 ) * uVar2;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar42;
            lVar39 = SUB168(auVar4 * auVar20, 8);
            uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
            iVar38 = SUB164(auVar4 * auVar20, 8);
         }
 while ( ( uVar36 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar36 * uVar2,auVar21._8_8_ = 0,auVar21._0_8_ = uVar42,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar38 ) - SUB164(auVar5 * auVar21, 8) ) * uVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar42,uVar43 <= SUB164(auVar6 * auVar22, 8) );
      }

   }

   _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
   LAB_00109f80:lVar35 = Utilities::singleton;
   local_44 = *(uint*)( param_1 + 0x50 );
   pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
   if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
      uVar36 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
      uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
      uVar41 = uVar36 ^ uVar36 >> 0x10;
      if (uVar36 == uVar36 >> 0x10) {
         uVar41 = 1;
         uVar40 = uVar2;
      }
 else {
         uVar40 = uVar41 * uVar2;
      }

      uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar40;
      lVar39 = SUB168(auVar7 * auVar23, 8);
      uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
      iVar38 = SUB164(auVar7 * auVar23, 8);
      if (uVar36 != 0) {
         uVar43 = 0;
         do {
            if (( uVar41 == uVar36 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar39 * 8 ) + 0x10 ) )) {
               ( *_glad_glDeleteTextures )(1, &local_44);
               puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
               *(long*)( lVar35 + 0x108 ) = *(long*)( lVar35 + 0x108 ) - ( ulong ) * puVar37;
               HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
               goto LAB_0010a0d0;
            }

            uVar43 = uVar43 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( iVar38 + 1 ) * uVar2;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar42;
            lVar39 = SUB168(auVar8 * auVar24, 8);
            uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
            iVar38 = SUB164(auVar8 * auVar24, 8);
         }
 while ( ( uVar36 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar36 * uVar2,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,auVar10._8_8_ = 0,auVar10._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar38 ) - SUB164(auVar9 * auVar25, 8) ) * uVar2,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,uVar43 <= SUB164(auVar10 * auVar26, 8) );
      }

   }

   _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
   LAB_0010a0d0:lVar35 = Utilities::singleton;
   local_44 = *(uint*)( param_1 + 0x58 );
   pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
   if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
      uVar36 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
      uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
      uVar41 = uVar36 ^ uVar36 >> 0x10;
      if (uVar36 == uVar36 >> 0x10) {
         uVar41 = 1;
         uVar40 = uVar2;
      }
 else {
         uVar40 = uVar41 * uVar2;
      }

      uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar42;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      lVar39 = SUB168(auVar11 * auVar27, 8);
      uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
      iVar38 = SUB164(auVar11 * auVar27, 8);
      if (uVar36 != 0) {
         uVar43 = 0;
         do {
            if (( uVar41 == uVar36 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar39 * 8 ) + 0x10 ) )) {
               ( *_glad_glDeleteTextures )(1, &local_44);
               puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
               *(long*)( lVar35 + 0x108 ) = *(long*)( lVar35 + 0x108 ) - ( ulong ) * puVar37;
               HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
               goto LAB_0010a220;
            }

            uVar43 = uVar43 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( iVar38 + 1 ) * uVar2;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar42;
            lVar39 = SUB168(auVar12 * auVar28, 8);
            uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
            iVar38 = SUB164(auVar12 * auVar28, 8);
         }
 while ( ( uVar36 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar36 * uVar2,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar38 ) - SUB164(auVar13 * auVar29, 8) ) * uVar2,auVar30._8_8_ = 0,auVar30._0_8_ = uVar42,uVar43 <= SUB164(auVar14 * auVar30, 8) );
      }

   }

   _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
   LAB_0010a220:lVar35 = Utilities::singleton;
   local_44 = *(uint*)( param_1 + 0x5c );
   pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
   if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
      uVar36 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
      uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
      uVar41 = uVar36 ^ uVar36 >> 0x10;
      if (uVar36 == uVar36 >> 0x10) {
         uVar41 = 1;
         uVar40 = uVar2;
      }
 else {
         uVar40 = uVar41 * uVar2;
      }

      uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar42;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar40;
      lVar39 = SUB168(auVar15 * auVar31, 8);
      uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
      iVar38 = SUB164(auVar15 * auVar31, 8);
      if (uVar36 != 0) {
         uVar43 = 0;
         do {
            if (( uVar41 == uVar36 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar39 * 8 ) + 0x10 ) )) {
               ( *_glad_glDeleteTextures )(1, &local_44);
               puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
               *(long*)( lVar35 + 0x108 ) = *(long*)( lVar35 + 0x108 ) - ( ulong ) * puVar37;
               HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
               goto LAB_0010a370;
            }

            uVar43 = uVar43 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = ( iVar38 + 1 ) * uVar2;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar42;
            lVar39 = SUB168(auVar16 * auVar32, 8);
            uVar36 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar39 * 4 );
            iVar38 = SUB164(auVar16 * auVar32, 8);
         }
 while ( ( uVar36 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar36 * uVar2,auVar33._8_8_ = 0,auVar33._0_8_ = uVar42,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar38 ) - SUB164(auVar17 * auVar33, 8) ) * uVar2,auVar34._8_8_ = 0,auVar34._0_8_ = uVar42,uVar43 <= SUB164(auVar18 * auVar34, 8) );
      }

   }

   _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
   LAB_0010a370:( *_glad_glDeleteFramebuffers )(1, param_1 + 0x54);
   *(undefined4*)( param_1 + 0x60 ) = 0;
   *(undefined1(*) [16])( param_1 + 0x50 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::_render_target_clear_sdf(GLES3::RenderTarget*) */void GLES3::TextureStorage::_render_target_clear_sdf(TextureStorage *this, RenderTarget *param_1) {
   if (*(int*)( param_1 + 0x54 ) == 0) {
      return;
   }

   _render_target_clear_sdf(param_1);
   return;
}
/* GLES3::TextureStorage::render_target_set_sdf_size_and_scale(RID,
   RenderingServer::ViewportSDFOversize, RenderingServer::ViewportSDFScale) */void GLES3::TextureStorage::render_target_set_sdf_size_and_scale(TextureStorage *this, ulong param_2, int param_3, int param_4) {
   int iVar1;
   RenderTarget *pRVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar2 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar2 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pRVar2 + 100 ) == param_3) {
            if (*(int*)( pRVar2 + 0x68 ) == param_4) {
               return;
            }

            iVar1 = *(int*)( pRVar2 + 0x54 );
            *(int*)( pRVar2 + 100 ) = param_3;
            *(int*)( pRVar2 + 0x68 ) = param_4;
         }
 else {
            iVar1 = *(int*)( pRVar2 + 0x54 );
            *(int*)( pRVar2 + 100 ) = param_3;
            *(int*)( pRVar2 + 0x68 ) = param_4;
         }

         if (iVar1 == 0) {
            return;
         }

         _render_target_clear_sdf(pRVar2);
         return;
      }

      if (*(int*)( pRVar2 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_sdf_size_and_scale", "drivers/gles3/storage/texture_storage.cpp", 0xb1a, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::texture_add_to_texture_atlas(RID) */void GLES3::TextureStorage::texture_add_to_texture_atlas(TextureStorage *this, long param_2) {
   int *piVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
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
   code *pcVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 *puVar23;
   uint uVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   long lVar28;
   long lVar29;
   ulong uVar30;
   uint uVar31;
   long in_FS_OFFSET;
   long local_60;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   undefined4 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( this + 0x138 );
   local_60 = param_2;
   if (( lVar3 != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
      lVar4 = *(long*)( this + 0x140 );
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 );
      uVar30 = CONCAT44(0, uVar2);
      lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
      uVar22 = param_2 * 0x3ffff - 1;
      uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
      uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
      uVar21 = ( uint )(uVar22 >> 0x16) ^ (uint)uVar22;
      uVar25 = 1;
      if (uVar21 != 0) {
         uVar25 = uVar21;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar25 * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar30;
      lVar28 = SUB168(auVar6 * auVar13, 8);
      uVar21 = *(uint*)( lVar4 + lVar28 * 4 );
      uVar26 = SUB164(auVar6 * auVar13, 8);
      if (uVar21 != 0) {
         uVar31 = 0;
         lVar29 = lVar28;
         uVar24 = uVar21;
         uVar27 = uVar26;
         do {
            if (( uVar25 == uVar24 ) && ( param_2 == *(long*)( *(long*)( lVar3 + lVar29 * 8 ) + 0x10 ) )) {
               uVar24 = 0;
               while (( uVar25 != uVar21 || ( param_2 != *(long*)( *(long*)( lVar3 + lVar28 * 8 ) + 0x10 ) ) )) {
                  uVar24 = uVar24 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(uVar26 + 1) * lVar5;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar30;
                  lVar28 = SUB168(auVar10 * auVar17, 8);
                  uVar21 = *(uint*)( lVar4 + lVar28 * 4 );
                  uVar26 = SUB164(auVar10 * auVar17, 8);
                  if (( uVar21 == 0 ) || ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar21 * lVar5,auVar18._8_8_ = 0,auVar18._0_8_ = uVar30,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar2 + uVar26 ) - SUB164(auVar11 * auVar18, 8)) * lVar5,auVar19._8_8_ = 0,auVar19._0_8_ = uVar30,SUB164(auVar12 * auVar19, 8) < uVar24) {
                     /* WARNING: Does not return */
                     pcVar20 = (code*)invalidInstructionException();
                     ( *pcVar20 )();
                  }

               }
;
               piVar1 = (int*)( *(long*)( lVar3 + (ulong)uVar26 * 8 ) + 0x18 );
               *piVar1 = *piVar1 + 1;
               goto LAB_0010a7ef;
            }

            uVar31 = uVar31 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar27 + 1) * lVar5;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar30;
            lVar29 = SUB168(auVar7 * auVar14, 8);
            uVar24 = *(uint*)( lVar4 + lVar29 * 4 );
            uVar27 = SUB164(auVar7 * auVar14, 8);
         }
 while ( ( uVar24 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar24 * lVar5,auVar15._8_8_ = 0,auVar15._0_8_ = uVar30,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar2 + uVar27 ) - SUB164(auVar8 * auVar15, 8)) * lVar5,auVar16._8_8_ = 0,auVar16._0_8_ = uVar30,uVar31 <= SUB164(auVar9 * auVar16, 8) );
      }

   }

   uStack_54 = 0;
   uStack_50 = 0;
   uStack_4c = 0;
   uStack_48 = 0;
   puVar23 = (undefined8*)HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>::operator []((HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>*)( this + 0x130 ), (RID*)&local_60);
   local_58 = 1;
   *(undefined4*)( puVar23 + 2 ) = uStack_48;
   *puVar23 = CONCAT44(uStack_54, 1);
   puVar23[1] = CONCAT44(uStack_4c, uStack_50);
   this[0x160] = (TextureStorage)0x1;
   LAB_0010a7ef:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_clear_render_target(GLES3::RenderTarget*) [clone .part.0] */void GLES3::TextureStorage::_clear_render_target(TextureStorage *this, RenderTarget *param_1) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *pHVar1;
   ulong uVar2;
   undefined1 auVar3[16];
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
   code *pcVar35;
   uint uVar36;
   uint *puVar37;
   long lVar38;
   int iVar39;
   ulong uVar40;
   ulong uVar41;
   long lVar42;
   undefined4 uVar43;
   uint uVar44;
   uint uVar45;
   undefined8 in_R11;
   uint uVar46;
   long in_FS_OFFSET;
   uint local_58;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0xb0 ) != 0) {
      lVar38 = *(long*)( *(long*)( param_1 + 0xb0 ) + 0x10 );
      if (lVar38 != *(long*)( param_1 + 0xb8 )) {
         do {
            lVar42 = lVar38;
            lVar38 = *(long*)( lVar42 + 0x10 );
         }
 while ( *(long*)( param_1 + 0xb8 ) != *(long*)( lVar42 + 0x10 ) );
         do {
            if (*(long*)( lVar42 + 0x58 ) == 0) {
               uVar43 = 0;
            }
 else {
               uVar43 = *(undefined4*)( *(long*)( lVar42 + 0x58 ) + -8 );
            }

            ( *_glad_glDeleteTextures )(uVar43);
            if (*(int*)( lVar42 + 0x38 ) != *(int*)( param_1 + 0x20 )) {
               ( *_glad_glDeleteFramebuffers )(1, lVar42 + 0x38);
            }

            lVar42 = *(long*)( lVar42 + 0x20 );
         }
 while ( lVar42 != 0 );
      }

   }

   RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)( param_1 + 0xb0 ));
   if (*(int*)( param_1 + 0x20 ) != 0) {
      ( *_glad_glDeleteFramebuffers )(1, param_1 + 0x20);
      *(undefined4*)( param_1 + 0x20 ) = 0;
   }

   uVar2 = *(ulong*)( param_1 + 0x98 );
   if (uVar2 == 0) {
      if (*(long*)( param_1 + 200 ) != 0) {
         lVar38 = get_texture(this, *(undefined8*)( param_1 + 200 ));
         *(undefined8*)( lVar38 + 0x44 ) = 0;
         *(undefined8*)( lVar38 + 0x30 ) = 0;
         *(undefined1*)( lVar38 + 0x72 ) = 0;
         *(undefined8*)( lVar38 + 0x80 ) = 0;
         *(undefined1*)( lVar38 + 10 ) = 0;
         if (*(int*)( lVar38 + 0xe0 ) != 7) {
            *(undefined4*)( lVar38 + 0xe0 ) = 7;
         }

         if (*(int*)( lVar38 + 0xe4 ) != 4) {
            *(undefined4*)( lVar38 + 0xe4 ) = 4;
         }

         goto LAB_0010ab78;
      }

   }
 else {
      if (*(uint*)( this + 0xf4 ) <= (uint)uVar2) goto LAB_0011b7e3;
      lVar38 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar39 = *(int*)( lVar38 + 0xe8 );
      if (iVar39 != (int)( uVar2 >> 0x20 )) {
         GLES3_TextureStorage__clear_render_target:if (iVar39 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R11);
         }

         LAB_0011b7e3:_DAT_00000080 = 0;
         /* WARNING: Does not return */
         pcVar35 = (code*)invalidInstructionException();
         ( *pcVar35 )();
      }

      if (*(char*)( lVar38 + 8 ) != '\0') {
         if (( *(long*)( lVar38 + 0x10 ) == 0 ) || ( uVar2 = *(ulong*)( lVar38 + 0x10 ) * (uint*)( this + 0xf4 ) <= (uint)uVar2 )) goto LAB_0011b7e3;
         lVar38 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
         iVar39 = *(int*)( lVar38 + 0xe8 );
         if (iVar39 != (int)( uVar2 >> 0x20 )) goto GLES3_TextureStorage__clear_render_target;
      }

      *(undefined8*)( lVar38 + 0x80 ) = 0;
      *(undefined1*)( lVar38 + 10 ) = 0;
      LAB_0010ab78:if (*(long*)( param_1 + 0x98 ) != 0) {
         *(undefined8*)( param_1 + 0x98 ) = 0;
         goto LAB_0010a904;
      }

   }

   lVar38 = Utilities::singleton;
   uVar36 = *(uint*)( param_1 + 0x24 );
   if (uVar36 != 0) {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
      local_44 = uVar36;
      if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
         uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
         uVar46 = ( uVar36 >> 0x10 ^ uVar36 ) * -0x7a143595;
         uVar46 = ( uVar46 ^ uVar46 >> 0xd ) * -0x3d4d51cb;
         local_58 = uVar46 ^ uVar46 >> 0x10;
         if (uVar46 == uVar46 >> 0x10) {
            local_58 = 1;
            uVar40 = uVar2;
         }
 else {
            uVar40 = local_58 * uVar2;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar41;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar40;
         lVar42 = SUB168(auVar15 * auVar31, 8);
         uVar46 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar42 * 4 );
         iVar39 = SUB164(auVar15 * auVar31, 8);
         if (uVar46 != 0) {
            uVar45 = 0;
            do {
               if (( local_58 == uVar46 ) && ( uVar36 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar42 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteTextures )(1, &local_44);
                  puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar38 + 0x108 ) = *(long*)( lVar38 + 0x108 ) - ( ulong ) * puVar37;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010b0c6;
               }

               uVar45 = uVar45 + 1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( iVar39 + 1 ) * uVar2;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar41;
               lVar42 = SUB168(auVar16 * auVar32, 8);
               uVar46 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar42 * 4 );
               iVar39 = SUB164(auVar16 * auVar32, 8);
            }
 while ( ( uVar46 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar46 * uVar2,auVar33._8_8_ = 0,auVar33._0_8_ = uVar41,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar39 ) - SUB164(auVar17 * auVar33, 8) ) * uVar2,auVar34._8_8_ = 0,auVar34._0_8_ = uVar41,uVar45 <= SUB164(auVar18 * auVar34, 8) );
         }

      }

      _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010b0c6:if (*(long*)( param_1 + 200 ) != 0) {
         lVar38 = get_texture(this, *(undefined8*)( param_1 + 200 ));
         *(undefined4*)( lVar38 + 0x74 ) = 0;
      }

   }

   LAB_0010a904:*(undefined4*)( param_1 + 0x24 ) = 0;
   lVar38 = Utilities::singleton;
   if (*(long*)( param_1 + 0xa0 ) == 0) {
      uVar36 = *(uint*)( param_1 + 0x28 );
      if (uVar36 != 0) {
         pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
         local_44 = uVar36;
         if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
            uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
            uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
            uVar46 = ( uVar36 >> 0x10 ^ uVar36 ) * -0x7a143595;
            uVar46 = ( uVar46 ^ uVar46 >> 0xd ) * -0x3d4d51cb;
            uVar45 = uVar46 ^ uVar46 >> 0x10;
            if (uVar46 == uVar46 >> 0x10) {
               uVar45 = 1;
               uVar40 = uVar2;
            }
 else {
               uVar40 = uVar45 * uVar2;
            }

            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar41;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar40;
            lVar42 = SUB168(auVar3 * auVar19, 8);
            uVar46 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar42 * 4 );
            iVar39 = SUB164(auVar3 * auVar19, 8);
            if (uVar46 != 0) {
               uVar44 = 0;
               do {
                  if (( uVar45 == uVar46 ) && ( uVar36 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar42 * 8 ) + 0x10 ) )) {
                     ( *_glad_glDeleteTextures )(1, &local_44);
                     puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                     *(long*)( lVar38 + 0x108 ) = *(long*)( lVar38 + 0x108 ) - ( ulong ) * puVar37;
                     HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                     goto LAB_0010a924;
                  }

                  uVar44 = uVar44 + 1;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = ( iVar39 + 1 ) * uVar2;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar41;
                  lVar42 = SUB168(auVar4 * auVar20, 8);
                  uVar46 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar42 * 4 );
                  iVar39 = SUB164(auVar4 * auVar20, 8);
               }
 while ( ( uVar46 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar46 * uVar2,auVar21._8_8_ = 0,auVar21._0_8_ = uVar41,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar39 ) - SUB164(auVar5 * auVar21, 8) ) * uVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,uVar44 <= SUB164(auVar6 * auVar22, 8) );
            }

         }

         _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
      }

   }
 else {
      *(undefined8*)( param_1 + 0xa0 ) = 0;
   }

   LAB_0010a924:*(undefined4*)( param_1 + 0x28 ) = 0;
   *(undefined8*)( param_1 + 0xa8 ) = 0;
   param_1[0x90] = (RenderTarget)0x0;
   if (*(int*)( param_1 + 0x2c ) != 0) {
      ( *_glad_glDeleteFramebuffers )(1, param_1 + 0x2c);
      *(undefined4*)( param_1 + 0x2c ) = 0;
   }

   lVar38 = Utilities::singleton;
   uVar36 = *(uint*)( param_1 + 0x30 );
   if (uVar36 == 0) {
      uVar46 = *(uint*)( param_1 + 0x34 );
      uVar36 = local_44;
   }
 else {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
      local_44 = uVar36;
      if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
         uVar46 = ( uVar36 >> 0x10 ^ uVar36 ) * -0x7a143595;
         uVar46 = ( uVar46 ^ uVar46 >> 0xd ) * -0x3d4d51cb;
         uVar45 = uVar46 ^ uVar46 >> 0x10;
         if (uVar46 == uVar46 >> 0x10) {
            uVar45 = 1;
            uVar41 = uVar2;
         }
 else {
            uVar41 = uVar45 * uVar2;
         }

         uVar40 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar40;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar41;
         lVar42 = SUB168(auVar7 * auVar23, 8);
         uVar46 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar42 * 4 );
         iVar39 = SUB164(auVar7 * auVar23, 8);
         if (uVar46 != 0) {
            uVar44 = 0;
            do {
               if (( uVar45 == uVar46 ) && ( uVar36 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar42 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteTextures )(1, &local_44);
                  puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar38 + 0x108 ) = *(long*)( lVar38 + 0x108 ) - ( ulong ) * puVar37;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010adb4;
               }

               uVar44 = uVar44 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( iVar39 + 1 ) * uVar2;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar40;
               lVar42 = SUB168(auVar8 * auVar24, 8);
               uVar46 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar42 * 4 );
               iVar39 = SUB164(auVar8 * auVar24, 8);
            }
 while ( ( uVar46 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar46 * uVar2,auVar25._8_8_ = 0,auVar25._0_8_ = uVar40,auVar10._8_8_ = 0,auVar10._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar39 ) - SUB164(auVar9 * auVar25, 8) ) * uVar2,auVar26._8_8_ = 0,auVar26._0_8_ = uVar40,uVar44 <= SUB164(auVar10 * auVar26, 8) );
         }

      }

      _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010adb4:*(undefined4*)( param_1 + 0x30 ) = 0;
      uVar46 = *(uint*)( param_1 + 0x34 );
      lVar38 = Utilities::singleton;
      uVar36 = local_44;
   }

   local_44 = uVar46;
   Utilities::singleton = lVar38;
   if (local_44 == 0) {
      iVar39 = *(int*)( param_1 + 0x54 );
      local_44 = uVar36;
   }
 else {
      if (( *(long*)( lVar38 + 0xd0 ) != 0 ) && ( *(int*)( lVar38 + 0xf4 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar38 + 0xf0 ) * 8 );
         uVar36 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar36 = ( uVar36 ^ uVar36 >> 0xd ) * -0x3d4d51cb;
         uVar46 = uVar36 ^ uVar36 >> 0x10;
         if (uVar36 == uVar36 >> 0x10) {
            uVar46 = 1;
            uVar41 = uVar2;
         }
 else {
            uVar41 = uVar46 * uVar2;
         }

         uVar40 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar38 + 0xf0 ) * 4 ));
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uVar40;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar41;
         lVar42 = SUB168(auVar11 * auVar27, 8);
         uVar36 = *(uint*)( *(long*)( lVar38 + 0xd8 ) + lVar42 * 4 );
         iVar39 = SUB164(auVar11 * auVar27, 8);
         if (uVar36 != 0) {
            uVar45 = 0;
            do {
               if (( uVar46 == uVar36 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( lVar38 + 0xd0 ) + lVar42 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteTextures )(1, &local_44);
                  puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar38 + 200 ), &local_44);
                  *(long*)( lVar38 + 0x108 ) = *(long*)( lVar38 + 0x108 ) - ( ulong ) * puVar37;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar38 + 200 ), &local_44);
                  goto LAB_0010af1c;
               }

               uVar45 = uVar45 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( iVar39 + 1 ) * uVar2;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar40;
               lVar42 = SUB168(auVar12 * auVar28, 8);
               uVar36 = *(uint*)( *(long*)( lVar38 + 0xd8 ) + lVar42 * 4 );
               iVar39 = SUB164(auVar12 * auVar28, 8);
            }
 while ( ( uVar36 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar36 * uVar2,auVar29._8_8_ = 0,auVar29._0_8_ = uVar40,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar38 + 0xf0 ) * 4 ) + iVar39 ) - SUB164(auVar13 * auVar29, 8) ) * uVar2,auVar30._8_8_ = 0,auVar30._0_8_ = uVar40,uVar45 <= SUB164(auVar14 * auVar30, 8) );
         }

      }

      _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010af1c:iVar39 = *(int*)( param_1 + 0x54 );
      *(undefined4*)( param_1 + 0x34 ) = 0;
   }

   if (iVar39 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _render_target_clear_sdf(param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::_clear_render_target(GLES3::RenderTarget*) */void GLES3::TextureStorage::_clear_render_target(TextureStorage *this, RenderTarget *param_1) {
   if (param_1[0x76] == (RenderTarget)0x0) {
      _clear_render_target(this, param_1);
      return;
   }

   return;
}
/* GLES3::TextureStorage::render_target_free(RID) */undefined1  [16] __thiscallGLES3::TextureStorage::render_target_free(TextureStorage *this, ulong param_2) {
   long *plVar1;
   int iVar2;
   int iVar3;
   ulong uVar4;
   void *pvVar5;
   code *pcVar6;
   uint uVar7;
   long lVar8;
   undefined8 uVar9;
   RenderTarget *pRVar10;
   uint uVar11;
   long lVar12;
   undefined1 auVar13[16];
   ulong in_stack_ffffffffffffffc0;
   if (param_2 == 0) {
      LAB_0011b800:/* WARNING: Does not return */pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   uVar11 = (uint)param_2;
   if (*(uint*)( this + 0x194 ) <= uVar11) goto LAB_0011b800;
   pRVar10 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
   iVar2 = *(int*)( pRVar10 + 0xe8 );
   if (iVar2 != (int)( param_2 >> 0x20 )) {
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, this);
      }

      goto LAB_0011b800;
   }

   if (pRVar10[0x76] == (RenderTarget)0x0) {
      in_stack_ffffffffffffffc0 = 0x10b28a;
      _clear_render_target(this, pRVar10);
   }

   uVar4 = *(ulong*)( pRVar10 + 200 );
   if (( uVar4 == 0 ) || ( *(uint*)( this + 0xf4 ) <= (uint)uVar4 )) {
      LAB_0010b346:uVar7 = *(uint*)( this + 0x194 );
   }
 else {
      lVar8 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar3 = *(int*)( lVar8 + 0xe8 );
      if (iVar3 != (int)( uVar4 >> 0x20 )) {
         joined_r0x0010b50c:if (iVar3 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_0010b346;
      }

      if (*(char*)( lVar8 + 8 ) != '\0') {
         if (*(long*)( lVar8 + 0x10 ) != 0) {
            uVar4 = *(ulong*)( lVar8 + 0x10 );
            if ((uint)uVar4 < *(uint*)( this + 0xf4 )) {
               lVar8 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               iVar3 = *(int*)( lVar8 + 0xe8 );
               if (iVar3 != (int)( uVar4 >> 0x20 )) goto joined_r0x0010b50c;
               goto LAB_0010b334;
            }

         }

         goto LAB_0010b346;
      }

      LAB_0010b334:lVar12 = *(long*)( pRVar10 + 0x98 );
      *(undefined1*)( lVar8 + 10 ) = 0;
      if (lVar12 != 0) goto LAB_0010b346;
      in_stack_ffffffffffffffc0 = 0x10b430;
      ( **(code**)( *(long*)this + 0x50 ) )(this);
      uVar7 = *(uint*)( this + 0x194 );
   }

   if (uVar7 <= uVar11) {
      uVar9 = 0x161;
      LAB_0010b44f:auVar13 = _err_print_error(&_LC65, "./core/templates/rid_owner.h", uVar9, "Method/function failed.", 0, 0);
      return auVar13;
   }

   uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 );
   lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0;
   lVar12 = *(long*)( *(long*)( this + 0x180 ) + uVar4 * 8 ) + lVar8;
   if (*(int*)( lVar12 + 0xe8 ) < 0) {
      lVar8 = 0;
      _err_print_error(&_LC65, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
      goto LAB_0010b40c;
   }

   if (iVar2 != *(int*)( lVar12 + 0xe8 )) {
      uVar9 = 0x171;
      goto LAB_0010b44f;
   }

   RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)( lVar12 + 0xb0 ));
   pvVar5 = *(void**)( lVar12 + 0xb0 );
   if (pvVar5 != (void*)0x0) {
      if (*(long*)( (long)pvVar5 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar12 = *(long*)( (long)pvVar5 + 0x58 );
            *(undefined8*)( (long)pvVar5 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
            Memory::free_static(pvVar5, false);
            goto LAB_0010b3ce;
         }

      }

      Memory::free_static(pvVar5, false);
   }

   LAB_0010b3ce:lVar12 = *(long*)( this + 0x188 );
   *(undefined4*)( *(long*)( *(long*)( this + 0x180 ) + uVar4 * 8 ) + 0xe8 + lVar8 ) = 0xffffffff;
   uVar7 = *(int*)( this + 0x198 ) - 1;
   *(uint*)( this + 0x198 ) = uVar7;
   in_stack_ffffffffffffffc0 = (ulong)uVar7 % ( ulong ) * (uint*)( this + 400 );
   lVar8 = *(long*)( lVar12 + ( (ulong)uVar7 / ( ulong ) * (uint*)( this + 400 ) ) * 8 );
   *(uint*)( lVar8 + in_stack_ffffffffffffffc0 * 4 ) = uVar11;
   LAB_0010b40c:auVar13._8_8_ = in_stack_ffffffffffffffc0;
   auVar13._0_8_ = lVar8;
   return auVar13;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_create_render_target_backbuffer(GLES3::RenderTarget*) */void GLES3::TextureStorage::_create_render_target_backbuffer(TextureStorage *this, RenderTarget *param_1) {
   long *plVar1;
   int iVar2;
   long lVar3;
   int iVar4;
   int iVar5;
   uint *puVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x2c ) != 0) {
      _err_print_error("_create_render_target_backbuffer", "drivers/gles3/storage/texture_storage.cpp", 0x8d7, "Condition \"rt->backbuffer_fbo != 0\" is true.", "Cannot allocate RenderTarget backbuffer: already initialized.", 0, 0);
      LAB_0010b758:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      goto LAB_0010ba3a;
   }

   if (param_1[0x76] != (RenderTarget)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_create_render_target_backbuffer", "drivers/gles3/storage/texture_storage.cpp", 0x8d8, "Condition \"rt->direct_to_screen\" is true.", 0, 0);
         return;
      }

      goto LAB_0010ba3a;
   }

   iVar4 = Image::get_image_required_mipmaps(*(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), 5);
   iVar5 = *(int*)( param_1 + 8 );
   if (( iVar5 < 0x29 ) || ( iVar7 = iVar7 < 0x29 )) goto LAB_0010b758;
   iVar2 = iVar4 + -4;
   if (iVar4 + -4 < 1) {
      iVar2 = 1;
   }

   *(int*)( param_1 + 0x14 ) = iVar2;
   ( *_glad_glGenTextures )(1, param_1 + 0x30);
   ( *_glad_glBindTexture )(0xde1, *(undefined4*)( param_1 + 0x30 ));
   uVar9 = 0;
   iVar4 = 0;
   do {
      iVar8 = iVar4;
      iVar4 = iVar5 >> 1;
      uVar9 = uVar9 + iVar5 * iVar7 * 4;
      ( *_glad_glTexImage2D )(0xde1, iVar8, *(undefined4*)( param_1 + 0x3c ), iVar5, iVar7, 0, *(undefined4*)( param_1 + 0x40 ), *(undefined4*)( param_1 + 0x44 ), 0);
      iVar5 = iVar4;
      if (iVar4 < 1) {
         iVar5 = 1;
      }

      iVar7 = iVar7 >> 1;
      if (iVar7 < 1) {
         iVar7 = 1;
      }

      iVar4 = iVar8 + 1;
   }
 while ( iVar8 + 1 != iVar2 );
   ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
   ( *_glad_glTexParameteri )(0xde1, 0x813d, iVar8);
   ( *_glad_glGenFramebuffers )(1, param_1 + 0x2c);
   ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( param_1 + 0x2c ));
   ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( param_1 + 0x30 ), 0);
   iVar5 = ( *_glad_glCheckFramebufferStatus )(0x8d40);
   lVar3 = Utilities::singleton;
   if (iVar5 == 0x8cd5) {
      local_60 = 0;
      local_50 = 0x26;
      local_58 = "Render target backbuffer color texture";
      String::parse_latin1((StrRange*)&local_60);
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x30 ));
      plVar1 = (long*)( lVar3 + 0x108 );
      *plVar1 = *plVar1 + (ulong)uVar9;
      puVar6 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 200 ), (uint*)&local_58);
      *puVar6 = uVar9;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      iVar5 = 0;
      do {
         iVar4 = iVar5 + 1;
         ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( param_1 + 0x30 ), iVar5);
         ( *_glad_glClearColor )(0, 0, 0);
         ( *_glad_glClear )(0x4000);
         iVar5 = iVar4;
      }
 while ( iVar4 != iVar2 );
      ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( param_1 + 0x30 ), 0);
      ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
      ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2703);
      ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x0010b8bc. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
         return;
      }

      goto LAB_0010ba3a;
   }

   if (_create_render_target_backbuffer(GLES3::RenderTarget * ::first_print != '\0') {
      if (iVar5 == 0x8cd6) {
         local_58 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
         local_50 = 0x24;
         LAB_0010b9c0:local_60 = 0;
         String::parse_latin1((StrRange*)&local_60);
      }
 else {
         if (iVar5 == 0x8cd7) {
            local_58 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
            local_50 = 0x2c;
            goto LAB_0010b9c0;
         }

         if (iVar5 == 0x8cdb) {
            local_58 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
            local_50 = 0x25;
            goto LAB_0010b9c0;
         }

         if (iVar5 == 0x8cdc) {
            local_58 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
            local_50 = 0x25;
            goto LAB_0010b9c0;
         }

         itos((long)&local_60);
      }

      operator+((char *)&
      local_58,(String*)"Cannot allocate mipmaps for canvas screen blur. Status: ";
      _err_print_error("_create_render_target_backbuffer", "drivers/gles3/storage/texture_storage.cpp", 0x8f7, (CowData<char32_t>*)&local_58, 0, 1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      _create_render_target_backbuffer(GLES3::RenderTarget*)::first_print =
      '\0';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010b712. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
      return;
   }

   LAB_0010ba3a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::render_target_copy_to_back_buffer(RID, Rect2i const&, bool) */void GLES3::TextureStorage::render_target_copy_to_back_buffer(TextureStorage *this, ulong param_2, Vector2i *param_3, char param_4) {
   undefined1 auVar1[16];
   char cVar2;
   int iVar3;
   uint uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   Rect2 *pRVar7;
   int iVar8;
   char *pcVar9;
   RenderTarget *pRVar10;
   long in_FS_OFFSET;
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined4 local_70;
   int local_6c;
   undefined8 local_68;
   undefined8 local_60;
   int local_58[2];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar10 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar10 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (pRVar10[0x76] != (RenderTarget)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = 0xc3b;
               pcVar9 = "Condition \"rt->direct_to_screen\" is true.";
               goto LAB_0010bdd6;
            }

            goto LAB_0010be56;
         }

         if (*(int*)( pRVar10 + 0x2c ) == 0) {
            _create_render_target_backbuffer(this, pRVar10);
         }

         local_68 = 0;
         local_60 = 0;
         local_48._0_8_ = 0;
         local_48._8_8_ = 0;
         cVar2 = Vector2i::operator ==(param_3, (Vector2i*)local_48);
         if (( cVar2 == '\0' ) || ( cVar2 = Vector2i::operator ==(param_3 + 8, (Vector2i*)( local_48 + 8 )) ),cVar2 == '\0') {
            local_50 = *(undefined8*)( pRVar10 + 8 );
            local_48._0_8_ = *(undefined8*)param_3;
            uVar6 = *(undefined8*)( param_3 + 8 );
            local_58[0] = 0;
            local_58[1] = 0;
            if ((int)( ( uint )((ulong)local_50 >> 0x20) | (uint)local_50 ) < 0) {
               LAB_0010bd68:local_48._8_8_ = uVar6;
               _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0, 0);
               iVar8 = local_58[0];
               uVar6 = local_48._8_8_;
            }
 else {
               local_48._8_4_ = (undefined4)uVar6;
               local_48._12_4_ = ( undefined4 )((ulong)uVar6 >> 0x20);
               iVar8 = 0;
               if ((int)( local_48._8_4_ | local_48._12_4_ ) < 0) goto LAB_0010bd68;
            }

            local_48._8_8_ = uVar6;
            iVar3 = local_48._8_4_ + local_48._0_4_;
            if (( iVar8 < iVar3 ) && ( (int)local_48._0_4_ < (int)local_50 + iVar8 )) {
               if (( (int)( local_48._12_4_ + local_48._4_4_ ) <= local_58[1] ) || ( local_50._4_4_ + local_58[1] <= (int)local_48._4_4_ )) goto LAB_0010bd58;
               local_48._4_4_ = local_58[1];
               if (local_58[1] < *(int*)( param_3 + 4 )) {
                  local_48._4_4_ = *(int*)( param_3 + 4 );
               }

               local_48._0_4_ = *(int*)param_3;
               if (*(int*)param_3 < iVar8) {
                  local_48._0_4_ = iVar8;
               }

               uVar5 = Vector2i::operator +(param_3, param_3 + 8);
               uVar6 = Vector2i::operator +((Vector2i*)local_58, (Vector2i*)&local_50);
               local_6c = (int)( (ulong)uVar6 >> 0x20 );
               iVar8 = (int)( (ulong)uVar5 >> 0x20 );
               if (iVar8 < local_6c) {
                  local_6c = iVar8;
               }

               if ((int)uVar5 < (int)uVar6) {
                  uVar6 = uVar5;
               }

               local_70 = (undefined4)uVar6;
               local_60 = Vector2i::operator -((Vector2i*)&local_70, (Vector2i*)local_48);
               local_68 = local_48._0_8_;
               local_48._8_8_ = local_60;
            }
 else {
               LAB_0010bd58:local_68 = 0;
               local_60 = 0;
            }

            local_48._0_8_ = 0;
            cVar2 = Vector2i::operator ==((Vector2i*)&local_60, (Vector2i*)local_48);
            if (cVar2 == '\0') goto LAB_0010bc40;
         }
 else {
            local_60 = *(undefined8*)( pRVar10 + 8 );
            LAB_0010bc40:( *_glad_glDisable )(0xbe2);
            ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( pRVar10 + 0x2c ));
            ( *_glad_glActiveTexture )(0x84c0);
            ( *_glad_glBindTexture )(0xde1, *(undefined4*)( pRVar10 + 0x24 ));
            local_48 = Rect2i::operator_cast_to_Rect2((Rect2i*)&local_68);
            uVar6 = Vector2i::operator_cast_to_Vector2((Vector2i*)( pRVar10 + 8 ));
            auVar11._8_8_ = 0;
            auVar11._0_8_ = local_48._0_8_;
            auVar12._8_8_ = __LC55;
            auVar12._0_8_ = uVar6;
            auVar12 = divps(auVar11, auVar12);
            local_48._0_8_ = auVar12._0_8_;
            uVar6 = Vector2i::operator_cast_to_Vector2((Vector2i*)( pRVar10 + 8 ));
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_48._8_8_;
            auVar1._8_8_ = __LC55;
            auVar1._0_8_ = uVar6;
            auVar12 = divps(auVar13, auVar1);
            local_48._8_8_ = auVar12._0_8_;
            pRVar7 = (Rect2*)GLES3::CopyEffects::get_singleton();
            GLES3::CopyEffects::copy_to_and_from_rect(pRVar7);
            if (param_4 != '\0') {
               uVar4 = GLES3::CopyEffects::get_singleton();
               GLES3::CopyEffects::gaussian_blur(uVar4, *(int*)( pRVar10 + 0x30 ), (Rect2i*)( ulong ) * (uint*)( pRVar10 + 0x14 ), (Vector2i*)&local_68);
               ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( pRVar10 + 0x2c ));
            }

            ( *_glad_glEnable )(0xbe2);
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010be56;
      }

      if (*(int*)( pRVar10 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar6 = 0xc3a;
      pcVar9 = "Parameter \"rt\" is null.";
      LAB_0010bdd6:_err_print_error("render_target_copy_to_back_buffer", "drivers/gles3/storage/texture_storage.cpp", uVar6, pcVar9, 0, 0);
      return;
   }

   LAB_0010be56:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::render_target_clear_back_buffer(RID, Rect2i const&, Color const&) */void GLES3::TextureStorage::render_target_clear_back_buffer(TextureStorage *this, ulong param_2, Vector2i *param_3, Rect2i *param_4) {
   char cVar1;
   int iVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   Color *pCVar5;
   int iVar6;
   int iVar7;
   char *pcVar8;
   RenderTarget *pRVar9;
   long in_FS_OFFSET;
   undefined4 local_70;
   int local_6c;
   undefined8 local_68;
   undefined8 local_60;
   int local_58[2];
   undefined8 local_50;
   undefined8 local_48;
   undefined8 uStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar9 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar9 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (pRVar9[0x76] != (RenderTarget)0x0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar4 = 0xc60;
               pcVar8 = "Condition \"rt->direct_to_screen\" is true.";
               goto LAB_0010c15e;
            }

            goto LAB_0010c1de;
         }

         if (*(int*)( pRVar9 + 0x2c ) == 0) {
            _create_render_target_backbuffer(this, pRVar9);
         }

         local_68 = 0;
         local_60 = 0;
         local_48 = 0;
         uStack_40 = 0;
         cVar1 = Vector2i::operator ==(param_3, (Vector2i*)&local_48);
         if (cVar1 == '\0') {
            LAB_0010bf21:local_50 = *(undefined8*)( pRVar9 + 8 );
            local_48 = *(undefined8*)param_3;
            uVar4 = *(undefined8*)( param_3 + 8 );
            local_58[0] = 0;
            local_58[1] = 0;
            if ((int)( ( uint )((ulong)local_50 >> 0x20) | (uint)local_50 ) < 0) {
               LAB_0010c0f0:uStack_40 = uVar4;
               _err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0, 0);
               iVar7 = local_58[0];
               uVar4 = uStack_40;
            }
 else {
               uStack_40._0_4_ = (uint)uVar4;
               uStack_40._4_4_ = ( uint )((ulong)uVar4 >> 0x20);
               iVar7 = 0;
               if ((int)( (uint)uStack_40 | uStack_40._4_4_ ) < 0) goto LAB_0010c0f0;
            }

            uStack_40 = uVar4;
            iVar2 = (uint)uStack_40 + (int)local_48;
            if (( iVar7 < iVar2 ) && ( (int)local_48 < (int)local_50 + iVar7 )) {
               if (( (int)( uStack_40._4_4_ + local_48._4_4_ ) <= local_58[1] ) || ( local_50._4_4_ + local_58[1] <= local_48._4_4_ )) goto LAB_0010c0e0;
               iVar2 = local_58[1];
               if (local_58[1] < *(int*)( param_3 + 4 )) {
                  iVar2 = *(int*)( param_3 + 4 );
               }

               iVar6 = *(int*)param_3;
               if (*(int*)param_3 < iVar7) {
                  iVar6 = iVar7;
               }

               local_48 = CONCAT44(iVar2, iVar6);
               uVar3 = Vector2i::operator +(param_3, param_3 + 8);
               uVar4 = Vector2i::operator +((Vector2i*)local_58, (Vector2i*)&local_50);
               local_6c = (int)( (ulong)uVar4 >> 0x20 );
               iVar7 = (int)( (ulong)uVar3 >> 0x20 );
               if (iVar7 < local_6c) {
                  local_6c = iVar7;
               }

               if ((int)uVar3 < (int)uVar4) {
                  uVar4 = uVar3;
               }

               local_70 = (undefined4)uVar4;
               local_60 = Vector2i::operator -((Vector2i*)&local_70, (Vector2i*)&local_48);
               local_68 = local_48;
               uStack_40 = local_60;
            }
 else {
               LAB_0010c0e0:local_68 = 0;
               local_60 = 0;
            }

            local_48 = 0;
            cVar1 = Vector2i::operator ==((Vector2i*)&local_60, (Vector2i*)&local_48);
            if (cVar1 == '\0') {
               ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( pRVar9 + 0x2c ));
               pCVar5 = (Color*)GLES3::CopyEffects::get_singleton();
               GLES3::CopyEffects::set_color(pCVar5, param_4);
            }

         }
 else {
            cVar1 = Vector2i::operator ==(param_3 + 8, (Vector2i*)&uStack_40);
            if (cVar1 == '\0') goto LAB_0010bf21;
            ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( pRVar9 + 0x2c ));
            ( *_glad_glClearColor )(*(undefined4*)param_4, *(undefined4*)( param_4 + 4 ), *(undefined4*)( param_4 + 8 ), *(undefined4*)( param_4 + 0xc ));
            ( *_glad_glClear )(0x4000);
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010c1de;
      }

      if (*(int*)( pRVar9 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar4 = 0xc5f;
      pcVar8 = "Parameter \"rt\" is null.";
      LAB_0010c15e:_err_print_error("render_target_clear_back_buffer", "drivers/gles3/storage/texture_storage.cpp", uVar4, pcVar8, 0, 0);
      return;
   }

   LAB_0010c1de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::render_target_gen_back_buffer_mipmaps(RID, Rect2i const&) */void GLES3::TextureStorage::render_target_gen_back_buffer_mipmaps(TextureStorage *this, ulong param_2, Vector2i *param_3) {
   char cVar1;
   int iVar2;
   uint uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   int iVar7;
   RenderTarget *pRVar8;
   long in_FS_OFFSET;
   undefined4 local_60;
   int local_5c;
   undefined8 local_58;
   undefined8 local_50;
   int local_48[2];
   undefined8 local_40;
   undefined8 local_38;
   undefined8 uStack_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar8 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar8 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pRVar8 + 0x2c ) == 0) {
            _create_render_target_backbuffer(this, pRVar8);
         }

         local_58 = 0;
         local_50 = 0;
         local_38 = 0;
         uStack_30 = 0;
         cVar1 = Vector2i::operator ==(param_3, (Vector2i*)&local_38);
         if (( cVar1 == '\0' ) || ( cVar1 = Vector2i::operator ==(param_3 + 8, (Vector2i*)&uStack_30) ),cVar1 == '\0') {
            local_40 = *(undefined8*)( pRVar8 + 8 );
            local_38 = *(undefined8*)param_3;
            uStack_30 = *(undefined8*)( param_3 + 8 );
            local_48[0] = 0;
            local_48[1] = 0;
            if ((int)( ( uint )((ulong)local_40 >> 0x20) | (uint)local_40 ) < 0) {
               LAB_0010c460:_err_print_error("intersects", "./core/math/rect2i.h", 0x38, "Rect2i size is negative, this is not supported. Use Rect2i.abs() to get a Rect2i with a positive size.", 0, 0);
               iVar7 = local_48[0];
               if ((int)( (uint)uStack_30 + (int)local_38 ) <= local_48[0]) goto LAB_0010c450;
               LAB_0010c2f2:if ((int)local_40 + iVar7 <= (int)local_38) goto LAB_0010c450;
               if (( (int)( uStack_30._4_4_ + local_38._4_4_ ) <= local_48[1] ) || ( local_40._4_4_ + local_48[1] <= local_38._4_4_ )) goto LAB_0010c450;
               iVar2 = local_48[1];
               if (local_48[1] < *(int*)( param_3 + 4 )) {
                  iVar2 = *(int*)( param_3 + 4 );
               }

               iVar6 = *(int*)param_3;
               if (*(int*)param_3 < iVar7) {
                  iVar6 = iVar7;
               }

               local_38 = CONCAT44(iVar2, iVar6);
               uVar4 = Vector2i::operator +(param_3, param_3 + 8);
               uVar5 = Vector2i::operator +((Vector2i*)local_48, (Vector2i*)&local_40);
               local_5c = (int)( (ulong)uVar5 >> 0x20 );
               iVar7 = (int)( (ulong)uVar4 >> 0x20 );
               if (iVar7 < local_5c) {
                  local_5c = iVar7;
               }

               if ((int)uVar4 < (int)uVar5) {
                  uVar5 = uVar4;
               }

               local_60 = (undefined4)uVar5;
               local_50 = Vector2i::operator -((Vector2i*)&local_60, (Vector2i*)&local_38);
               local_58 = local_38;
               uStack_30 = local_50;
            }
 else {
               uStack_30._4_4_ = ( uint )((ulong)uStack_30 >> 0x20);
               if ((int)( (uint)uStack_30 | uStack_30._4_4_ ) < 0) goto LAB_0010c460;
               iVar2 = (uint)uStack_30 + (int)local_38;
               iVar7 = 0;
               if (0 < iVar2) goto LAB_0010c2f2;
               LAB_0010c450:local_58 = 0;
               local_50 = 0;
            }

            local_38 = 0;
            cVar1 = Vector2i::operator ==((Vector2i*)&local_50, (Vector2i*)&local_38);
            if (cVar1 == '\0') goto LAB_0010c3df;
         }
 else {
            local_50 = *(undefined8*)( pRVar8 + 8 );
            LAB_0010c3df:( *_glad_glDisable )(0xbe2);
            uVar3 = GLES3::CopyEffects::get_singleton();
            GLES3::CopyEffects::gaussian_blur(uVar3, *(int*)( pRVar8 + 0x30 ), (Rect2i*)( ulong ) * (uint*)( pRVar8 + 0x14 ), (Vector2i*)&local_58);
            ( *_glad_glEnable )(0xbe2);
            ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( pRVar8 + 0x2c ));
         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010c523;
      }

      if (*(int*)( pRVar8 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("render_target_gen_back_buffer_mipmaps", "drivers/gles3/storage/texture_storage.cpp", 0xc78, "Parameter \"rt\" is null.", 0, 0);
      return;
   }

   LAB_0010c523:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::check_backbuffer(GLES3::RenderTarget*, bool, bool) */void GLES3::TextureStorage::check_backbuffer(TextureStorage *this, RenderTarget *param_1, bool param_2, bool param_3) {
   long *plVar1;
   int iVar2;
   long lVar3;
   uint *puVar4;
   uint uVar5;
   int iVar6;
   char cVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(int*)( param_1 + 0x30 ) == 0 ) || ( *(int*)( param_1 + 0x34 ) == 0 )) {
      if (*(uint*)( param_1 + 0x10 ) < 2) {
         cVar7 = '\0';
         iVar6 = 0xde1;
      }
 else {
         cVar7 = *(char*)( Config::singleton + 0x88 );
         iVar6 = ( -(uint)(cVar7 == '\0') & 0xffff81c7 ) + 0x8c1a;
      }

      iVar2 = *(int*)( param_1 + 0x2c );
      if (iVar2 == 0) {
         ( *_glad_glGenFramebuffers )(1, param_1 + 0x2c);
         iVar2 = *(int*)( param_1 + 0x2c );
      }

      ( *_glad_glBindFramebuffer )(0x8d40, iVar2);
      if (( *(int*)( param_1 + 0x30 ) == 0 ) && ( param_2 )) {
         ( *_glad_glGenTextures )(1, param_1 + 0x30);
         ( *_glad_glBindTexture )(iVar6, *(undefined4*)( param_1 + 0x30 ));
         if (cVar7 == '\0') {
            ( *_glad_glTexImage2D )(iVar6, 0, *(undefined4*)( param_1 + 0x3c ), *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), 0, *(undefined4*)( param_1 + 0x40 ), *(undefined4*)( param_1 + 0x44 ), 0);
         }
 else {
            ( *_glad_glTexImage3D )(iVar6, 0, *(undefined4*)( param_1 + 0x3c ), *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), *(undefined4*)( param_1 + 0x10 ), 0, *(undefined4*)( param_1 + 0x40 ), *(undefined4*)( param_1 + 0x44 ), 0);
         }

         lVar3 = Utilities::singleton;
         local_60 = 0;
         local_50 = 0x2b;
         local_58 = "Render target backbuffer color texture (3D)";
         String::parse_latin1((StrRange*)&local_60);
         uVar5 = *(int*)( param_1 + 8 ) * *(int*)( param_1 + 0xc ) * *(int*)( param_1 + 0x10 ) * *(int*)( param_1 + 0x48 );
         local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x30 ));
         plVar1 = (long*)( lVar3 + 0x108 );
         *plVar1 = *plVar1 + (ulong)uVar5;
         puVar4 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 200 ), (uint*)&local_58);
         *puVar4 = uVar5;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         ( *_glad_glTexParameteri )(iVar6, 0x2800, 0x2600);
         ( *_glad_glTexParameteri )(iVar6, 0x2801, 0x2600);
         ( *_glad_glTexParameteri )(iVar6, 0x2802, 0x812f);
         ( *_glad_glTexParameteri )(iVar6, 0x2803, 0x812f);
         if (cVar7 == '\0') {
            ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( param_1 + 0x30 ), 0);
            if (( *(int*)( param_1 + 0x34 ) == 0 ) && ( param_3 )) {
               ( *_glad_glGenTextures )(1, param_1 + 0x34);
               ( *_glad_glBindTexture )(iVar6, *(undefined4*)( param_1 + 0x34 ));
               goto LAB_0010c989;
            }

         }
 else {
            ( *_glad_glFramebufferTextureMultiviewOVR )(0x8d40, 0x8ce0, *(undefined4*)( param_1 + 0x30 ), 0, 0, *(undefined4*)( param_1 + 0x10 ));
            if (( *(int*)( param_1 + 0x34 ) == 0 ) && ( param_3 )) {
               ( *_glad_glGenTextures )(1, param_1 + 0x34);
               ( *_glad_glBindTexture )(iVar6, *(undefined4*)( param_1 + 0x34 ));
               goto LAB_0010c7ad;
            }

         }

      }
 else if (( *(int*)( param_1 + 0x34 ) == 0 ) && ( param_3 )) {
         ( *_glad_glGenTextures )(1, param_1 + 0x34);
         ( *_glad_glBindTexture )(iVar6, *(undefined4*)( param_1 + 0x34 ));
         if (cVar7 == '\0') {
            LAB_0010c989:( *_glad_glTexImage2D )(iVar6, 0, 0x81a6, *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), 0, 0x1902, 0x1405, 0);
         }
 else {
            LAB_0010c7ad:( *_glad_glTexImage3D )(iVar6, 0, 0x81a6, *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), *(undefined4*)( param_1 + 0x10 ), 0, 0x1902, 0x1405, 0);
         }

         lVar3 = Utilities::singleton;
         local_58 = "Render target backbuffer depth texture";
         local_60 = 0;
         local_50 = 0x26;
         String::parse_latin1((StrRange*)&local_60);
         uVar5 = *(int*)( param_1 + 8 ) * *(int*)( param_1 + 0xc ) * *(int*)( param_1 + 0x10 ) * 3;
         local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x34 ));
         plVar1 = (long*)( lVar3 + 0x108 );
         *plVar1 = *plVar1 + (ulong)uVar5;
         puVar4 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 200 ), (uint*)&local_58);
         *puVar4 = uVar5;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         ( *_glad_glTexParameteri )(iVar6, 0x2800, 0x2600);
         ( *_glad_glTexParameteri )(iVar6, 0x2801, 0x2600);
         ( *_glad_glTexParameteri )(iVar6, 0x2802, 0x812f);
         ( *_glad_glTexParameteri )(iVar6, 0x2803, 0x812f);
         if (cVar7 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010c937. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8d00, 0xde1, *(undefined4*)( param_1 + 0x34 ), 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010c8cd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *_glad_glFramebufferTextureMultiviewOVR )(0x8d40, 0x8d00, *(undefined4*)( param_1 + 0x34 ), 0, 0, *(undefined4*)( param_1 + 0x10 ));
            return;
         }

         goto LAB_0010c9bb;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010c9bb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_update_render_target(GLES3::RenderTarget*) [clone .part.0] */void GLES3::TextureStorage::_update_render_target(TextureStorage *this, RenderTarget *param_1) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *pHVar1;
   long *plVar2;
   RenderTarget RVar3;
   ulong uVar4;
   long lVar5;
   long lVar6;
   char cVar7;
   int iVar8;
   uint *puVar9;
   undefined4 uVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   undefined8 uVar14;
   long lVar15;
   undefined4 uVar16;
   long in_FS_OFFSET;
   char local_90;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   lVar6 = Config::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0x38] == (RenderTarget)0x0) {
      uVar10 = 5;
      iVar11 = 0x8059 - ( uint )(param_1[0x75] != (RenderTarget)0x0);
      uVar16 = 4;
      iVar8 = ( -(uint)(param_1[0x75] == (RenderTarget)0x0) & 0x6f67 ) + 0x1401;
   }
 else {
      iVar11 = 0x881a;
      iVar8 = 0x1406;
      uVar16 = 8;
      uVar10 = 0xb;
   }

   *(int*)( param_1 + 0x44 ) = iVar8;
   *(int*)( param_1 + 0x3c ) = iVar11;
   *(undefined4*)( param_1 + 0x48 ) = uVar16;
   *(undefined4*)( param_1 + 0x4c ) = uVar10;
   *(undefined4*)( param_1 + 0x40 ) = 0x1908;
   ( *_glad_glDisable )(0xc11);
   ( *_glad_glColorMask )(1, 1, 1, 1);
   ( *_glad_glDepthMask )(0);
   if (*(uint*)( param_1 + 0x10 ) < 2) {
      local_90 = '\0';
      iVar8 = 0xde1;
   }
 else {
      local_90 = *(char*)( lVar6 + 0x88 );
      iVar8 = ( -(uint)(local_90 == '\0') & 0xffff81c7 ) + 0x8c1a;
   }

   ( *_glad_glGenFramebuffers )(1, param_1 + 0x20);
   ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( param_1 + 0x20 ));
   uVar4 = *(ulong*)( param_1 + 0x98 );
   if (uVar4 == 0) {
      uVar4 = *(ulong*)( param_1 + 200 );
      if (( uVar4 != 0 ) && ( (uint)uVar4 < *(uint*)( this + 0xf4 ) )) {
         lVar15 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
         iVar11 = *(int*)( lVar15 + 0xe8 );
         if (iVar11 == (int)( uVar4 >> 0x20 )) {
            if (*(char*)( lVar15 + 8 ) == '\0') {
               LAB_0010ce67:( *_glad_glGenTextures )(1, param_1 + 0x24);
               ( *_glad_glBindTexture )(iVar8, *(undefined4*)( param_1 + 0x24 ));
               if (local_90 == '\0') {
                  ( *_glad_glTexImage2D )(iVar8, 0, *(undefined4*)( param_1 + 0x3c ), *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), 0, *(undefined4*)( param_1 + 0x40 ), *(undefined4*)( param_1 + 0x44 ), 0);
               }
 else {
                  ( *_glad_glTexImage3D )(iVar8, 0, *(undefined4*)( param_1 + 0x3c ), *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), *(undefined4*)( param_1 + 0x10 ), 0, *(undefined4*)( param_1 + 0x40 ), *(undefined4*)( param_1 + 0x44 ), 0);
               }

               lVar5 = Config::singleton;
               if (*(int*)( lVar15 + 0xe0 ) != 1) {
                  *(undefined4*)( lVar15 + 0xe0 ) = 1;
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2801, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2800, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x813c, 0);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x813d, 0);
                  if (*(char*)( lVar5 + 0x7b ) != '\0') {
                     ( *_glad_glTexParameterf )(*(undefined4*)( lVar15 + 0x5c ), 0x84fe);
                  }

               }

               if (*(int*)( lVar15 + 0xe4 ) != 1) {
                  *(undefined4*)( lVar15 + 0xe4 ) = 1;
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2803, 0x812f);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x8072, 0x812f);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2802, 0x812f);
               }

               lVar5 = Utilities::singleton;
               local_60 = 0;
               local_50 = 0x1b;
               local_58 = "Render target color texture";
               String::parse_latin1((StrRange*)&local_60);
               uVar12 = *(int*)( param_1 + 8 ) * *(int*)( param_1 + 0xc ) * *(int*)( param_1 + 0x10 ) * *(int*)( param_1 + 0x48 );
               local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x24 ));
               plVar2 = (long*)( lVar5 + 0x108 );
               *plVar2 = *plVar2 + (ulong)uVar12;
               puVar9 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar5 + 200 ), (uint*)&local_58);
               *puVar9 = uVar12;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               uVar10 = *(undefined4*)( param_1 + 0x24 );
               goto joined_r0x0010d004;
            }

            if (*(long*)( lVar15 + 0x10 ) != 0) {
               uVar4 = *(ulong*)( lVar15 + 0x10 );
               if ((uint)uVar4 < *(uint*)( this + 0xf4 )) {
                  lVar15 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                  iVar11 = *(int*)( lVar15 + 0xe8 );
                  if (iVar11 != (int)( uVar4 >> 0x20 )) goto joined_r0x0010d564;
                  goto LAB_0010ce67;
               }

            }

         }
 else {
            joined_r0x0010d564:if (iVar11 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar14 = 0x867;
         goto LAB_0010d2de;
      }

      goto LAB_0010d61a;
   }

   if ((uint)uVar4 < *(uint*)( this + 0xf4 )) {
      lVar15 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar11 = *(int*)( lVar15 + 0xe8 );
      if (iVar11 == (int)( uVar4 >> 0x20 )) {
         if (*(char*)( lVar15 + 8 ) == '\0') {
            LAB_0010cb1d:uVar10 = *(undefined4*)( lVar15 + 0x74 );
            *(undefined4*)( param_1 + 0x24 ) = uVar10;
            *(undefined8*)( param_1 + 8 ) = *(undefined8*)( lVar15 + 0x30 );
            joined_r0x0010d004:if (local_90 == '\0') {
               ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, iVar8, uVar10, 0);
               if (*(long*)( param_1 + 0xa0 ) != 0) goto LAB_0010d1a0;
               ( *_glad_glGenTextures )(1, param_1 + 0x28);
               ( *_glad_glBindTexture )(iVar8, *(undefined4*)( param_1 + 0x28 ));
               ( *_glad_glTexImage2D )(iVar8, 0, 0x81a6, *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), 0, 0x1902, 0x1405, 0);
               LAB_0010cba6:( *_glad_glTexParameteri )(iVar8, 0x2800, 0x2600);
               ( *_glad_glTexParameteri )(iVar8, 0x2801, 0x2600);
               ( *_glad_glTexParameteri )(iVar8, 0x2802, 0x812f);
               ( *_glad_glTexParameteri )(iVar8, 0x2803, 0x812f);
               lVar5 = Utilities::singleton;
               local_58 = "Render target depth texture";
               local_60 = 0;
               local_50 = 0x1b;
               String::parse_latin1((StrRange*)&local_60);
               uVar12 = *(int*)( param_1 + 8 ) * *(int*)( param_1 + 0xc ) * *(int*)( param_1 + 0x10 ) * 3;
               local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0x28 ));
               plVar2 = (long*)( lVar5 + 0x108 );
               *plVar2 = *plVar2 + (ulong)uVar12;
               puVar9 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar5 + 200 ), (uint*)&local_58);
               lVar5 = local_60;
               *puVar9 = uVar12;
               if (local_60 != 0) {
                  LOCK();
                  plVar2 = (long*)( local_60 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               uVar10 = *(undefined4*)( param_1 + 0x28 );
            }
 else {
               ( *_glad_glFramebufferTextureMultiviewOVR )(0x8d40, 0x8ce0, uVar10, 0, 0, *(undefined4*)( param_1 + 0x10 ));
               if (*(long*)( param_1 + 0xa0 ) == 0) {
                  ( *_glad_glGenTextures )(1, param_1 + 0x28);
                  ( *_glad_glBindTexture )(iVar8, *(undefined4*)( param_1 + 0x28 ));
                  ( *_glad_glTexImage3D )(iVar8, 0, 0x81a6, *(undefined4*)( param_1 + 8 ), *(undefined4*)( param_1 + 0xc ), *(undefined4*)( param_1 + 0x10 ), 0, 0x1902, 0x1405, 0);
                  goto LAB_0010cba6;
               }

               LAB_0010d1a0:lVar15 = get_texture(this, *(undefined8*)( param_1 + 0xa0 ));
               if (lVar15 == 0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     uVar14 = 0x884;
                     goto LAB_0010d2de;
                  }

                  goto LAB_0010d61a;
               }

               uVar10 = *(undefined4*)( lVar15 + 0x74 );
               *(undefined4*)( param_1 + 0x28 ) = uVar10;
            }

            if (local_90 == '\0') {
               ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8d00, iVar8, uVar10, 0);
            }
 else {
               ( *_glad_glFramebufferTextureMultiviewOVR )(0x8d40, 0x8d00, uVar10, 0, 0, *(undefined4*)( param_1 + 0x10 ));
            }

            iVar11 = ( *_glad_glCheckFramebufferStatus )(0x8d40);
            if (iVar11 == 0x8cd5) {
               lVar5 = *(long*)( param_1 + 0x98 );
               *(undefined1*)( lVar15 + 10 ) = 1;
               *(RenderTarget**)( lVar15 + 0x80 ) = param_1;
               if (lVar5 == 0) {
                  uVar10 = *(undefined4*)( param_1 + 0x4c );
                  uVar12 = *(uint*)( param_1 + 0x10 );
                  *(int*)( lVar15 + 0x5c ) = iVar8;
                  *(ulong*)( lVar15 + 0x4c ) = CONCAT44(uVar10, uVar10);
                  if (uVar12 < 2) {
                     uVar12 = 1;
                     uVar13 = 0;
                  }
 else {
                     if (*(char*)( lVar6 + 0x88 ) == '\0') {
                        uVar12 = 1;
                     }

                     uVar13 = ( uint )(*(char*)( lVar6 + 0x88 ) != '\0');
                  }

                  RVar3 = param_1[0x38];
                  uVar10 = *(undefined4*)( param_1 + 0x3c );
                  *(uint*)( lVar15 + 0x40 ) = uVar12;
                  uVar16 = *(undefined4*)( param_1 + 0x40 );
                  *(uint*)( lVar15 + 0x54 ) = uVar13;
                  *(undefined4*)( lVar15 + 0x60 ) = uVar16;
                  *(ulong*)( lVar15 + 100 ) = CONCAT44(( -(uint)(RVar3 == (RenderTarget)0x0) & 0xfffffffb ) + 0x1406, uVar10);
                  *(undefined4*)( lVar15 + 0x74 ) = *(undefined4*)( param_1 + 0x24 );
                  uVar14 = *(undefined8*)( param_1 + 8 );
                  *(undefined1*)( lVar15 + 0x72 ) = 1;
                  *(undefined8*)( lVar15 + 0x30 ) = uVar14;
                  *(undefined8*)( lVar15 + 0x44 ) = uVar14;
               }

               ( *_glad_glClearColor )();
               ( *_glad_glClear )(0x4000);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Could not recover jumptable at 0x0010d16a. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
                  return;
               }

               goto LAB_0010d61a;
            }

            ( *_glad_glDeleteFramebuffers )(1, param_1 + 0x20);
            lVar6 = Utilities::singleton;
            if (*(long*)( param_1 + 0x98 ) == 0) {
               pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
               local_60 = CONCAT44(local_60._4_4_, *(uint*)( param_1 + 0x24 ));
               cVar7 = HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::_lookup_pos(pHVar1, (uint*)( ulong ) * (uint*)( param_1 + 0x24 ), (uint*)&local_58);
               if (cVar7 == '\0') {
                  _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
               }
 else {
                  ( *_glad_glDeleteTextures )(1, (CowData<char32_t>*)&local_60);
                  puVar9 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, (uint*)&local_60);
                  *(long*)( lVar6 + 0x108 ) = *(long*)( lVar6 + 0x108 ) - ( ulong ) * puVar9;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, (uint*)&local_60);
               }

            }

            lVar6 = Utilities::singleton;
            if (*(long*)( param_1 + 0xa0 ) == 0) {
               pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
               local_60 = CONCAT44(local_60._4_4_, *(uint*)( param_1 + 0x28 ));
               cVar7 = HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::_lookup_pos(pHVar1, (uint*)( ulong ) * (uint*)( param_1 + 0x28 ), (uint*)&local_58);
               if (cVar7 == '\0') {
                  _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
               }
 else {
                  ( *_glad_glDeleteTextures )(1, (CowData<char32_t>*)&local_60);
                  puVar9 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, (uint*)&local_60);
                  *(long*)( lVar6 + 0x108 ) = *(long*)( lVar6 + 0x108 ) - ( ulong ) * puVar9;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, (uint*)&local_60);
               }

            }

            *(undefined8*)( param_1 + 8 ) = 0;
            *(undefined8*)( param_1 + 0x20 ) = 0;
            *(undefined4*)( param_1 + 0x28 ) = 0;
            if (*(long*)( param_1 + 0x98 ) == 0) {
               *(undefined4*)( lVar15 + 0x74 ) = 0;
               *(undefined1*)( lVar15 + 0x72 ) = 0;
            }

            if (iVar11 == 0x8cd6) {
               local_60 = 0;
               local_58 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
               local_50 = 0x24;
               String::parse_latin1((StrRange*)&local_60);
            }
 else if (iVar11 == 0x8cd7) {
               local_60 = 0;
               local_58 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
               local_50 = 0x2c;
               String::parse_latin1((StrRange*)&local_60);
            }
 else {
               if (iVar11 == 0x8cdb) {
                  local_58 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
               }
 else {
                  if (iVar11 != 0x8cdc) {
                     itos((long)&local_60);
                     goto LAB_0010cd6e;
                  }

                  local_58 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
               }

               local_60 = 0;
               local_50 = 0x25;
               String::parse_latin1((StrRange*)&local_60);
            }

            LAB_0010cd6e:operator + ( (char*)&local_58,(String*)"Could not create render target, status: " );
            _err_print_error("_update_render_target", "drivers/gles3/storage/texture_storage.cpp", 0x8b4, (CowData<char32_t>*)&local_58, 0, 1);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_0010d61a;
         }

         if (*(long*)( lVar15 + 0x10 ) != 0) {
            uVar4 = *(ulong*)( lVar15 + 0x10 );
            if ((uint)uVar4 < *(uint*)( this + 0xf4 )) {
               lVar15 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               iVar11 = *(int*)( lVar15 + 0xe8 );
               if (iVar11 != (int)( uVar4 >> 0x20 )) goto joined_r0x0010d57c;
               goto LAB_0010cb1d;
            }

         }

      }
 else {
         joined_r0x0010d57c:if (iVar11 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar14 = 0x861;
      LAB_0010d2de:_err_print_error("_update_render_target", "drivers/gles3/storage/texture_storage.cpp", uVar14, "Parameter \"texture\" is null.", 0, 0);
      return;
   }

   LAB_0010d61a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GLES3::TextureStorage::_update_render_target(GLES3::RenderTarget*) */void GLES3::TextureStorage::_update_render_target(TextureStorage *this, RenderTarget *param_1) {
   if (( 0 < *(int*)( param_1 + 8 ) ) && ( 0 < *(int*)( param_1 + 0xc ) )) {
      if (param_1[0x76] == (RenderTarget)0x0) {
         _update_render_target(this, param_1);
         return;
      }

      *(undefined4*)( param_1 + 0x20 ) = system_fbo;
      return;
   }

   return;
}
/* GLES3::TextureStorage::render_target_set_direct_to_screen(RID, bool) */void GLES3::TextureStorage::render_target_set_direct_to_screen(TextureStorage *this, ulong param_2, RenderTarget param_3) {
   RenderTarget *pRVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar1 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (pRVar1[0x76] != param_3) {
            if (pRVar1[0x76] == (RenderTarget)0x0) {
               _clear_render_target(this, pRVar1);
            }

            pRVar1[0x76] = param_3;
            if (param_3 == (RenderTarget)0x0) {
               if (( 0 < *(int*)( pRVar1 + 8 ) ) && ( 0 < *(int*)( pRVar1 + 0xc ) )) {
                  _update_render_target(this, pRVar1);
                  return;
               }

            }
 else {
               *(undefined8*)( pRVar1 + 0xa8 ) = 0;
               *(undefined1(*) [16])( pRVar1 + 0x98 ) = (undefined1[16])0x0;
               if (( 0 < *(int*)( pRVar1 + 8 ) ) && ( 0 < *(int*)( pRVar1 + 0xc ) )) {
                  *(undefined4*)( pRVar1 + 0x20 ) = system_fbo;
               }

            }

         }

         return;
      }

      if (*(int*)( pRVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_direct_to_screen", "drivers/gles3/storage/texture_storage.cpp", 0xa56, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_set_size(RID, int, int, unsigned int) */void GLES3::TextureStorage::render_target_set_size(TextureStorage *this, ulong param_2, int param_3, int param_4, int param_5) {
   RenderTarget *pRVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar1 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (( ( ( *(int*)( pRVar1 + 8 ) != param_3 ) || ( *(int*)( pRVar1 + 0xc ) != param_4 ) ) || ( *(int*)( pRVar1 + 0x10 ) != param_5 ) ) && ( *(long*)( pRVar1 + 0x98 ) == 0 )) {
            if (pRVar1[0x76] == (RenderTarget)0x0) {
               _clear_render_target(this, pRVar1);
            }

            *(int*)( pRVar1 + 8 ) = param_3;
            *(int*)( pRVar1 + 0xc ) = param_4;
            *(int*)( pRVar1 + 0x10 ) = param_5;
            if (( 0 < param_4 ) && ( 0 < param_3 )) {
               if (pRVar1[0x76] == (RenderTarget)0x0) {
                  _update_render_target(this, pRVar1);
                  return;
               }

               *(undefined4*)( pRVar1 + 0x20 ) = system_fbo;
            }

         }

         return;
      }

      if (*(int*)( pRVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_size", "drivers/gles3/storage/texture_storage.cpp", 0x9c2, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_set_use_hdr(RID, bool) */void GLES3::TextureStorage::render_target_set_use_hdr(TextureStorage *this, ulong param_2, RenderTarget param_3) {
   char *pcVar1;
   undefined8 uVar2;
   RenderTarget *pRVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar3 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar3 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (pRVar3[0x76] == (RenderTarget)0x0) {
            if (pRVar3[0x38] != param_3) {
               _clear_render_target(this, pRVar3);
               pRVar3[0x38] = param_3;
               if (( 0 < *(int*)( pRVar3 + 8 ) ) && ( 0 < *(int*)( pRVar3 + 0xc ) )) {
                  if (pRVar3[0x76] == (RenderTarget)0x0) {
                     _update_render_target(this, pRVar3);
                     return;
                  }

                  *(undefined4*)( pRVar3 + 0x20 ) = system_fbo;
               }

            }

            return;
         }

         uVar2 = 0xa95;
         pcVar1 = "Condition \"rt->direct_to_screen\" is true.";
         goto LAB_0010d9d2;
      }

      if (*(int*)( pRVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar2 = 0xa94;
   pcVar1 = "Parameter \"rt\" is null.";
   LAB_0010d9d2:_err_print_error("render_target_set_use_hdr", "drivers/gles3/storage/texture_storage.cpp", uVar2, pcVar1, 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_set_transparent(RID, bool) */void GLES3::TextureStorage::render_target_set_transparent(TextureStorage *this, ulong param_2, RenderTarget param_3) {
   RenderTarget *pRVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar1 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar1 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         pRVar1[0x75] = param_3;
         if (*(long*)( pRVar1 + 0x98 ) == 0) {
            if (pRVar1[0x76] == (RenderTarget)0x0) {
               _clear_render_target(this, pRVar1);
            }

            if (( 0 < *(int*)( pRVar1 + 8 ) ) && ( 0 < *(int*)( pRVar1 + 0xc ) )) {
               if (pRVar1[0x76] == (RenderTarget)0x0) {
                  _update_render_target(this, pRVar1);
                  return;
               }

               *(undefined4*)( pRVar1 + 0x20 ) = system_fbo;
            }

         }

         return;
      }

      if (*(int*)( pRVar1 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("render_target_set_transparent", "drivers/gles3/storage/texture_storage.cpp", 0xa43, "Parameter \"rt\" is null.", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_set_msaa(RID, RenderingServer::ViewportMSAA) */void GLES3::TextureStorage::render_target_set_msaa(TextureStorage *this, ulong param_2, int param_3) {
   char *pcVar1;
   undefined8 uVar2;
   RenderTarget *pRVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x194 ) )) {
      pRVar3 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 400 ) ) * 0xf0 + *(long*)( *(long*)( this + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 400 ) ) * 8 ) );
      if (*(int*)( pRVar3 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (pRVar3[0x76] == (RenderTarget)0x0) {
            if (*(int*)( pRVar3 + 0x78 ) != param_3) {
               _err_print_error("render_target_set_msaa", "drivers/gles3/storage/texture_storage.cpp", 0xa84, "2D MSAA is not yet supported for GLES3.", 0, 1);
               if (pRVar3[0x76] == (RenderTarget)0x0) {
                  _clear_render_target(this, pRVar3);
               }

               *(int*)( pRVar3 + 0x78 ) = param_3;
               if (( 0 < *(int*)( pRVar3 + 8 ) ) && ( 0 < *(int*)( pRVar3 + 0xc ) )) {
                  if (pRVar3[0x76] == (RenderTarget)0x0) {
                     _update_render_target(this, pRVar3);
                     return;
                  }

                  *(undefined4*)( pRVar3 + 0x20 ) = system_fbo;
               }

            }

            return;
         }

         uVar2 = 0xa7f;
         pcVar1 = "Condition \"rt->direct_to_screen\" is true.";
         goto LAB_0010dc72;
      }

      if (*(int*)( pRVar3 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar2 = 0xa7e;
   pcVar1 = "Parameter \"rt\" is null.";
   LAB_0010dc72:_err_print_error("render_target_set_msaa", "drivers/gles3/storage/texture_storage.cpp", uVar2, pcVar1, 0, 0);
   return;
}
/* GLES3::TextureStorage::canvas_texture_allocate() */void GLES3::TextureStorage::canvas_texture_allocate(TextureStorage *this) {
   RID_Alloc<GLES3::CanvasTexture,true>::allocate_rid((RID_Alloc<GLES3::CanvasTexture,true>*)( this + 0x80 ));
   return;
}
/* GLES3::TextureStorage::texture_allocate() */void GLES3::TextureStorage::texture_allocate(TextureStorage *this) {
   RID_Alloc<GLES3::Texture,true>::allocate_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ));
   return;
}
/* Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Image> const&) [clone .isra.0] */void Ref<Image>::operator =(Ref<Image> *this, Ref *param_1) {
   Image *pIVar1;
   char cVar2;
   pIVar1 = *(Image**)this;
   if (pIVar1 != (Image*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pIVar1 != (Image*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            memdelete<Image>(pIVar1);
            return;
         }

      }

   }

   return;
}
/* GLES3::TextureStorage::_get_gl_image_and_format(Ref<Image> const&, Image::Format, Image::Format&,
   unsigned int&, unsigned int&, unsigned int&, bool&, bool) const */Ref<Image> *GLES3::TextureStorage::_get_gl_image_and_format(Ref<Image> *param_1, undefined8 param_2, long *param_3, undefined4 param_4, undefined4 *param_5, undefined4 *param_6, undefined4 *param_7, undefined4 *param_8, undefined1 *param_9, char param_10) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   Image *pIVar7;
   undefined4 uVar8;
   char *pcVar9;
   undefined4 uVar10;
   undefined8 uVar11;
   Image *pIVar12;
   long in_FS_OFFSET;
   Image *local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   lVar1 = Config::singleton;
   pIVar12 = (Image*)*param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *param_6 = 0;
   if (( pIVar12 == (Image*)0x0 ) || ( local_68 = pIVar12 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
      local_68 = (Image*)0x0;
      pIVar12 = (Image*)0x0;
   }

   *param_9 = 0;
   *param_5 = param_4;
   cVar3 = Image::is_format_compressed(param_4);
   if (cVar3 == '\0') {
      iVar5 = _get_gl_uncompressed_format(param_3, param_4, param_5, param_6, param_7, param_8);
      if (iVar5 != 0) {
         local_60 = 0;
         local_50 = 0x43;
         local_58 = (Object*)0x11a390;
         String::parse_latin1((StrRange*)&local_60);
         vformat<Image::Format>(&local_58, (StrRange*)&local_60, param_4);
         pcVar9 = "Condition \"err != OK\" is true. Returning: Ref<Image>()";
         uVar11 = 499;
         goto LAB_0010e4e8;
      }

      LAB_0010de63:*(undefined8*)param_1 = 0;
      if (*param_3 != 0) {
         *(long*)param_1 = *param_3;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)param_1 = 0;
         }

      }

      LAB_0010de88:if (pIVar12 == (Image*)0x0) goto LAB_0010de91;
   }
 else {
      switch (param_4) {
         case 0x11:
      cVar3 = *(char *)(lVar1 + 0x72);
      if (cVar3 != '\0') {
        uVar8 = 0x83f1;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
LAB_0010dee8:
        *param_7 = uVar8;
        *param_6 = uVar10;
        *param_8 = uVar6;
        *param_9 = 1;
        if (param_10 == '\0') goto LAB_0010de63;
      }
      break;
         case 0x12:
      cVar3 = *(char *)(lVar1 + 0x72);
      if (cVar3 != '\0') {
        uVar8 = 0x83f2;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x13:
      cVar3 = *(char *)(lVar1 + 0x72);
      if (cVar3 != '\0') {
        uVar8 = 0x83f3;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x14:
      cVar3 = *(char *)(lVar1 + 0x73);
      if (cVar3 != '\0') {
        uVar8 = 0x8dbb;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x15:
      cVar3 = *(char *)(lVar1 + 0x73);
      if (cVar3 != '\0') {
        uVar8 = 0x8dbd;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x16:
      cVar3 = *(char *)(lVar1 + 0x74);
      if (cVar3 != '\0') {
        uVar8 = 0x8e8c;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x17:
      cVar3 = *(char *)(lVar1 + 0x74);
      if (cVar3 != '\0') {
        uVar8 = 0x8e8e;
        uVar10 = 0x1907;
        uVar6 = 0x1406;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x18:
      cVar3 = *(char *)(lVar1 + 0x74);
      if (cVar3 != '\0') {
        uVar8 = 0x8e8f;
        uVar10 = 0x1907;
        uVar6 = 0x1406;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x19:
         case 0x1e:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9274;
        uVar10 = 0x1907;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x1a:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9270;
        uVar10 = 0x1903;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x1b:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9271;
        uVar10 = 0x1903;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x1c:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9272;
        uVar10 = 0x8227;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x1d:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9273;
        uVar10 = 0x8227;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x1f:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9278;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x20:
      cVar3 = *(char *)(lVar1 + 0x75);
      if (cVar3 != '\0') {
        uVar8 = 0x9276;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      break;
         case 0x21:
      if (*(char *)(lVar1 + 0x75) != '\0') {
        uVar8 = 0x9278;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = *(char *)(lVar1 + 0x75);
        goto LAB_0010dee8;
      }
      break;
         case 0x22:
      if (*(char *)(lVar1 + 0x72) != '\0') {
        uVar8 = 0x83f3;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = *(char *)(lVar1 + 0x72);
        goto LAB_0010dee8;
      }
      break;
         case 0x23:
      if (*(char *)(lVar1 + 0x76) != '\0') {
LAB_0010e2d3:
        uVar8 = 0x93b0;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      cVar3 = '\0';
      break;
         case 0x24:
      cVar3 = *(char *)(lVar1 + 0x77);
      if (cVar3 != '\0') goto LAB_0010e2d3;
      break;
         case 0x25:
      if (*(char *)(lVar1 + 0x76) != '\0') {
LAB_0010e10b:
        uVar8 = 0x93b7;
        uVar10 = 0x1908;
        uVar6 = 0x1401;
        cVar3 = '\0';
        goto LAB_0010dee8;
      }
      cVar3 = '\0';
      break;
         case 0x26:
      cVar3 = *(char *)(lVar1 + 0x77);
      if (cVar3 != '\0') goto LAB_0010e10b;
      break;
         default:
      local_60 = 0;
      local_50 = 0x43;
      local_58 = (Object *)0x11a390;
      String::parse_latin1((StrRange *)&local_60);
      vformat<Image::Format>(&local_58,(StrRange *)&local_60,param_4);
      pcVar9 = "Method/function failed. Returning: Ref<Image>()";
      uVar11 = 0x2d8;
LAB_0010e4e8:
      _err_print_error("_get_gl_image_and_format","drivers/gles3/storage/texture_storage.cpp",uVar11
                       ,pcVar9,(CowData<char32_t> *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      *(undefined8 *)param_1 = 0;
      goto LAB_0010de88;
      }

      if (pIVar12 == (Image*)0x0) {
         *(undefined8*)param_1 = 0;
         goto LAB_0010de91;
      }

      ( **(code**)( *(long*)pIVar12 + 0x198 ) )((CowData<char32_t>*)&local_58, pIVar12, 0);
      if (local_58 == (Object*)0x0) {
         LAB_0010df6d:local_68 = (Image*)0x0;
         LAB_0010df76:cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            memdelete<Image>(pIVar12);
         }

         if (local_58 != (Object*)0x0) goto LAB_0010e3c8;
      }
 else {
         pIVar7 = (Image*)__dynamic_cast(local_58, &Object::typeinfo, &Image::typeinfo, 0);
         if (pIVar7 != pIVar12) {
            local_68 = pIVar7;
            if (( pIVar7 != (Image*)0x0 ) && ( cVar4 = cVar4 == '\0' )) goto LAB_0010df6d;
            goto LAB_0010df76;
         }

         LAB_0010e3c8:cVar4 = RefCounted::unreference();
         pOVar2 = local_58;
         if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

      pIVar12 = local_68;
      Image::decompress();
      cVar4 = Image::is_compressed();
      if (cVar4 != '\0') {
         _err_print_error("_get_gl_image_and_format", "drivers/gles3/storage/texture_storage.cpp", 0x2e0, "Condition \"image->is_compressed()\" is true. Returning: image", 0, 0);
         *(undefined8*)param_1 = 0;
         Ref<Image>::operator =(param_1, (Ref*)pIVar12);
         goto LAB_0010de88;
      }

      if (cVar3 != '\0') {
         Image::convert_ra_rgba8_to_rg();
         Image::convert(pIVar12, 3);
      }

      uVar6 = Image::get_format();
      iVar5 = _get_gl_uncompressed_format(&local_68, uVar6, param_5, param_6, param_7, param_8);
      if (iVar5 == 0) {
         uVar6 = Image::get_format();
         *param_5 = uVar6;
         *param_9 = 0;
         *(Image**)param_1 = pIVar12;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)param_1 = 0;
         }

      }
 else {
         uVar6 = Image::get_format();
         local_60 = 0;
         local_50 = 0x43;
         local_58 = (Object*)0x11a390;
         String::parse_latin1((StrRange*)&local_60);
         vformat<Image::Format>((CowData<char32_t>*)&local_58, (StrRange*)&local_60, uVar6);
         _err_print_error("_get_gl_image_and_format", "drivers/gles3/storage/texture_storage.cpp", 0x2e8, "Condition \"err != OK\" is true. Returning: Ref<Image>()", (CowData<char32_t>*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         *(undefined8*)param_1 = 0;
      }

   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      memdelete<Image>(pIVar12);
   }

   LAB_0010de91:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_texture_set_data(RID, Ref<Image> const&, int, bool) */void GLES3::TextureStorage::_texture_set_data(TextureStorage *this, ulong param_2, long *param_3, int param_4, char param_5) {
   Object *pOVar1;
   char cVar2;
   int iVar3;
   int iVar4;
   undefined4 uVar5;
   code *pcVar6;
   Image *pIVar7;
   long lVar8;
   char *pcVar9;
   ulong uVar10;
   undefined8 uVar11;
   undefined1 uVar12;
   uint uVar13;
   long lVar14;
   Image *pIVar15;
   int iVar16;
   long in_FS_OFFSET;
   int *piVar17;
   String *this_00;
   uint local_ac;
   byte local_9c;
   int local_94;
   char local_81;
   uint local_80;
   undefined4 local_7c;
   undefined4 local_78;
   undefined4 local_74;
   Image *local_70;
   int local_68;
   undefined4 uStack_64;
   long local_60;
   Object *local_58;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar14 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar14 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar14 + 0x5c ) != 0x806f) {
            if (*(char*)( lVar14 + 0x72 ) == '\0') {
               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010f0dc;
               uVar11 = 0x609;
               pcVar9 = "Condition \"!texture->active\" is true.";
               goto LAB_0010eb6e;
            }

            if (*(char*)( lVar14 + 10 ) != '\0') {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar11 = 0x60a;
                  pcVar9 = "Condition \"texture->is_render_target\" is true.";
                  goto LAB_0010eb6e;
               }

               goto LAB_0010f0dc;
            }

            if (*param_3 == 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar11 = 0x60b;
                  pcVar9 = "Condition \"p_image.is_null()\" is true.";
                  goto LAB_0010eb6e;
               }

               goto LAB_0010f0dc;
            }

            iVar4 = *(int*)( lVar14 + 0x4c );
            iVar3 = Image::get_format();
            if (iVar4 != iVar3) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar11 = 0x60c;
                  pcVar9 = "Condition \"texture->format != p_image->get_format()\" is true.";
                  goto LAB_0010eb6e;
               }

               goto LAB_0010f0dc;
            }

            iVar4 = Image::get_width();
            if (iVar4 == 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar11 = 0x60e;
                  pcVar9 = "Condition \"!p_image->get_width()\" is true.";
                  goto LAB_0010eb6e;
               }

               goto LAB_0010f0dc;
            }

            iVar4 = Image::get_height();
            if (iVar4 == 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar11 = 0x60f;
                  pcVar9 = "Condition \"!p_image->get_height()\" is true.";
                  goto LAB_0010eb6e;
               }

               goto LAB_0010f0dc;
            }

            uVar12 = *(undefined1*)( lVar14 + 0x71 );
            local_81 = '\0';
            if (( ( (char)RasterizerGLES3::gles_over_gl == '\0' ) && ( *(int*)( lVar14 + 0x5c ) == 0x8c1a ) ) && ( ( iVar4 = Image::get_format() ),iVar4 == 0x14 || ( iVar4 = iVar4 == 0x15 ) )) {
               uVar12 = 1;
            }

            uVar5 = Image::get_format();
            _get_gl_image_and_format((Ref<Image>*)&local_70, this, param_3, uVar5, &local_74, &local_7c, &local_78, &local_80, &local_81, uVar12);
            pIVar15 = local_70;
            if (local_70 == (Image*)0x0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar11 = 0x621;
                  pcVar9 = "Condition \"img.is_null()\" is true.";
                  goto LAB_0010eb6e;
               }

               goto LAB_0010f0dc;
            }

            if (*(char*)( lVar14 + 0x71 ) != '\0') {
               cVar2 = Image::is_compressed();
               if (cVar2 != '\0') {
                  local_60 = 0;
                  local_58 = (Object*)0x11a598;
                  local_50[0] = 0x8f;
                  String::parse_latin1((StrRange*)&local_60);
                  this_00 = (String*)&local_68;
                  operator+((char *)
                  this_00,(String*)"Texture \'";
                  String::operator +((String*)&local_58, this_00);
                  _err_print_error("_texture_set_data", "drivers/gles3/storage/texture_storage.cpp", 0x624, (String*)&local_58, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               }

               if ((Image*)*param_3 == pIVar15) {
                  ( **(code**)( *(long*)pIVar15 + 0x198 ) )((String*)&local_58, pIVar15, 0);
                  if (local_58 == (Object*)0x0) {
                     LAB_0010f04f:local_70 = (Image*)0x0;
                     LAB_0010f058:cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        memdelete<Image>(pIVar15);
                     }

                     pIVar15 = local_70;
                     if (local_58 == (Object*)0x0) goto LAB_0010ed99;
                  }
 else {
                     pIVar7 = (Image*)__dynamic_cast(local_58, &Object::typeinfo, &Image::typeinfo, 0);
                     if (pIVar15 != pIVar7) {
                        local_70 = pIVar7;
                        if (( pIVar7 != (Image*)0x0 ) && ( cVar2 = cVar2 == '\0' )) goto LAB_0010f04f;
                        goto LAB_0010f058;
                     }

                  }

                  cVar2 = RefCounted::unreference();
                  pOVar1 = local_58;
                  pIVar15 = local_70;
                  if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(local_58) ),pIVar15 = local_70,cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                     Memory::free_static(pOVar1, false);
                     pIVar15 = local_70;
                  }

               }

               LAB_0010ed99:Image::resize_to_po2(pIVar15, 0, 1);
            }

            local_94 = *(int*)( lVar14 + 0x5c );
            if (local_94 == 0x8513) {
               local_94 = *(int*)( _cube_side_enum + (long)param_4 * 4 );
            }

            Image::get_data();
            ( *_glad_glActiveTexture )(0x84c0);
            ( *_glad_glBindTexture )(*(undefined4*)( lVar14 + 0x5c ), *(undefined4*)( lVar14 + 0x74 ));
            _texture_set_swizzle(this, lVar14, local_74);
            cVar2 = Image::has_mipmaps();
            if (cVar2 == '\0') {
               local_ac = 1;
               LAB_0010e7d9:pcVar9 = Config::singleton;
               if (*(int*)( lVar14 + 0xe0 ) != 1) {
                  *(undefined4*)( lVar14 + 0xe0 ) = 1;
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x2801, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x2800, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x813c, 0);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x813d, 0);
                  if (pcVar9[0x7b] != '\0') {
                     ( *_glad_glTexParameterf )(_LC55, *(undefined4*)( lVar14 + 0x5c ), 0x84fe);
                  }

               }

               if (*(int*)( lVar14 + 0xe4 ) != 2) {
                  LAB_0010e866:*(undefined4*)( lVar14 + 0xe4 ) = 2;
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x2803, 0x2901);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x8072, 0x2901);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x2802, 0x2901);
               }

               iVar4 = Image::get_width();
               iVar3 = Image::get_height();
               if (0 < (int)local_ac) goto LAB_0010e8ce;
               iVar16 = 0;
            }
 else {
               iVar4 = Image::get_mipmap_count();
               pcVar9 = Config::singleton;
               local_ac = iVar4 + 1;
               if ((int)local_ac < 2) goto LAB_0010e7d9;
               if (*(int*)( lVar14 + 0xe0 ) != 3) {
                  *(undefined4*)( lVar14 + 0xe0 ) = 3;
                  if (*(int*)( lVar14 + 0x3c ) < 2) {
                     iVar4 = 0x2600;
                     uVar11 = 0;
                  }
 else {
                     uVar11 = 1000;
                     iVar4 = ( -(uint)(*pcVar9 == '\0') & 2 ) + 0x2700;
                  }

                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x2801, iVar4);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x2800, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x813c, 0);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar14 + 0x5c ), 0x813d, uVar11);
                  if (pcVar9[0x7b] != '\0') {
                     ( *_glad_glTexParameterf )(_LC55, *(undefined4*)( lVar14 + 0x5c ), 0x84fe);
                  }

               }

               if (*(int*)( lVar14 + 0xe4 ) != 2) goto LAB_0010e866;
               iVar4 = Image::get_width();
               iVar3 = Image::get_height();
               LAB_0010e8ce:cVar2 = local_81;
               uVar13 = 0;
               iVar16 = 0;
               piVar17 = &local_68;
               do {
                  Image::get_mipmap_offset_and_size((int)pIVar15, (long*)(ulong)uVar13, &local_60);
                  if (cVar2 == '\0') {
                     ( *_glad_glPixelStorei )(0xcf5, 1);
                     if (*(int*)( lVar14 + 0x5c ) == 0x8c1a) {
                        if (param_5 != '\0') {
                           ( *_glad_glTexImage3D )(0x8c1a, uVar13, local_78, iVar4, iVar3, *(undefined4*)( lVar14 + 0x40 ), 0, local_7c, local_80, 0, piVar17);
                        }

                        if (local_60 < 0) goto LAB_0010ec10;
                        if (local_50[0] == 0) goto LAB_0010ed70;
                        if (local_60 < *(long*)( local_50[0] + -8 )) {
                           lVar8 = local_50[0] + local_60;
                           uVar10 = (ulong)local_80;
                           pcVar6 = _glad_glTexSubImage3D;
                           uVar5 = local_7c;
                           goto LAB_0010ecd1;
                        }

                     }
 else {
                        if (local_60 < 0) goto LAB_0010ec10;
                        if (local_50[0] == 0) goto LAB_0010ed70;
                        if (local_60 < *(long*)( local_50[0] + -8 )) {
                           ( *_glad_glTexImage2D )(local_94, uVar13, local_78, iVar4, iVar3, 0, local_7c, local_80, local_50[0] + local_60);
                           goto LAB_0010e978;
                        }

                     }

                     LAB_0010ec19:lVar14 = *(long*)( local_50[0] + -8 );
                     LAB_0010ec1d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, local_60, lVar14, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar6 = (code*)invalidInstructionException();
                     ( *pcVar6 )();
                  }

                  ( *_glad_glPixelStorei )(0xcf5, 4);
                  if (*(int*)( lVar14 + 0x5c ) == 0x8c1a) {
                     if (param_5 != '\0') {
                        ( *_glad_glCompressedTexImage3D )(0x8c1a, uVar13, local_78, iVar4, iVar3, *(int*)( lVar14 + 0x40 ), 0, local_68 * *(int*)( lVar14 + 0x40 ), 0);
                     }

                     if (local_60 < 0) {
                        LAB_0010ec10:if (local_50[0] != 0) goto LAB_0010ec19;
                     }
 else if (local_50[0] != 0) {
                        if (*(long*)( local_50[0] + -8 ) <= local_60) goto LAB_0010ec19;
                        lVar8 = local_50[0] + local_60;
                        uVar10 = CONCAT44(uStack_64, local_68);
                        pcVar6 = _glad_glCompressedTexSubImage3D;
                        uVar5 = local_78;
                        LAB_0010ecd1:( *pcVar6 )(0x8c1a, uVar13, 0, 0, param_4, iVar4, iVar3, 1, uVar5, uVar10, lVar8);
                        goto LAB_0010e978;
                     }

                     LAB_0010ed70:lVar14 = 0;
                     goto LAB_0010ec1d;
                  }

                  if (local_60 < 0) goto LAB_0010ec10;
                  if (local_50[0] == 0) goto LAB_0010ed70;
                  if (*(long*)( local_50[0] + -8 ) <= local_60) goto LAB_0010ec19;
                  ( *_glad_glCompressedTexImage2D )(local_94, uVar13, local_78, iVar4, iVar3, 0, CONCAT44(uStack_64, local_68), local_50[0] + local_60);
                  LAB_0010e978:iVar4 = iVar4 >> 1;
                  iVar16 = iVar16 + local_68;
                  if (iVar4 < 1) {
                     iVar4 = 1;
                  }

                  iVar3 = iVar3 >> 1;
                  if (iVar3 < 1) {
                     iVar3 = 1;
                  }

                  uVar13 = uVar13 + 1;
               }
 while ( local_ac != uVar13 );
            }

            if (( *(int*)( lVar14 + 0x5c ) == 0x8513 ) || ( *(int*)( lVar14 + 0x5c ) == 0x8c1a )) {
               iVar16 = iVar16 * *(int*)( lVar14 + 0x40 );
            }

            local_9c = (byte)param_4;
            *(int*)( lVar14 + 0x6c ) = iVar16;
            *(ushort*)( lVar14 + 0x78 ) = *(ushort*)( lVar14 + 0x78 ) | ( ushort )(1 << ( local_9c & 0x1f ));
            *(uint*)( lVar14 + 0x3c ) = local_ac;
            CowData<unsigned_char>::_unref((CowData<unsigned_char>*)local_50);
            Ref<Image>::unref((Ref<Image>*)&local_70);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010f0dc;
      }

      if (*(int*)( lVar14 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar11 = 0x604;
      pcVar9 = "Parameter \"texture\" is null.";
      LAB_0010eb6e:_err_print_error("_texture_set_data", "drivers/gles3/storage/texture_storage.cpp", uVar11, pcVar9, 0, 0);
      return;
   }

   LAB_0010f0dc:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GLES3::TextureStorage::texture_set_data(RID, Ref<Image> const&, int) */void GLES3::TextureStorage::texture_set_data(void) {
   _texture_set_data();
   return;
}
/* GLES3::TextureStorage::texture_2d_update(RID, Ref<Image> const&, int) */void GLES3::TextureStorage::texture_2d_update(long param_1, ulong param_2) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this;
   uint uVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   long lVar11;
   char cVar12;
   uint uVar13;
   uint *puVar14;
   int iVar15;
   ulong uVar16;
   long lVar17;
   long lVar18;
   uint uVar19;
   ulong uVar20;
   uint uVar21;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _texture_set_data();
   lVar11 = Utilities::singleton;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0xf4 ) )) {
      lVar18 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_1 + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0xf0 ) ) * 8 );
      if (*(int*)( lVar18 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = *(uint*)( lVar18 + 0x6c );
         local_44 = *(uint*)( lVar18 + 0x74 );
         this(HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> * )(Utilities::singleton + 200);
         if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
            uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
            uVar13 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
            uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
            uVar19 = uVar13 ^ uVar13 >> 0x10;
            if (uVar13 == uVar13 >> 0x10) {
               uVar19 = 1;
               uVar16 = uVar2;
            }
 else {
               uVar16 = uVar19 * uVar2;
            }

            uVar20 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar20;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar16;
            lVar17 = SUB168(auVar3 * auVar7, 8);
            uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar17 * 4 );
            iVar15 = SUB164(auVar3 * auVar7, 8);
            if (uVar13 != 0) {
               uVar21 = 0;
               do {
                  if (( uVar13 == uVar19 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar17 * 8 ) + 0x10 ) )) {
                     puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this, &local_44);
                     *(long*)( lVar11 + 0x108 ) = *(long*)( lVar11 + 0x108 ) + ( (ulong)uVar1 - ( ulong ) * puVar14 );
                     puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this, &local_44);
                     *puVar14 = uVar1;
                     goto LAB_0010f2e7;
                  }

                  uVar21 = uVar21 + 1;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = ( iVar15 + 1 ) * uVar2;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar20;
                  lVar17 = SUB168(auVar4 * auVar8, 8);
                  uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar17 * 4 );
                  iVar15 = SUB164(auVar4 * auVar8, 8);
               }
 while ( ( uVar13 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar13 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar20,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar15 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar20,uVar21 <= SUB164(auVar6 * auVar10, 8) );
            }

         }

         _err_print_error("texture_resize_data", "drivers/gles3/storage/../storage/utilities.h", 0x97, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
         LAB_0010f2e7:if (*(long*)( lVar18 + 0x88 ) != 0) {
            cVar12 = RefCounted::unreference();
            if (cVar12 != '\0') {
               memdelete<Image>(*(Image**)( lVar18 + 0x88 ));
            }

         }

         *(undefined8*)( lVar18 + 0x88 ) = 0;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010f403;
      }

      if (*(int*)( lVar18 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("texture_2d_update", "drivers/gles3/storage/texture_storage.cpp", 1000, "Parameter \"tex\" is null.", 0, 0);
      return;
   }

   LAB_0010f403:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* CowData<Ref<Image> >::_ref(CowData<Ref<Image> > const&) [clone .part.0] */void CowData<Ref<Image>>::_ref(CowData<Ref<Image>> *this, CowData *param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_2d_layered_initialize(RID, Vector<Ref<Image> > const&,
   RenderingServer::TextureLayeredType) */void GLES3::TextureStorage::texture_2d_layered_initialize(TextureStorage *this, undefined8 param_2, long param_3, int param_4) {
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   uint uVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   undefined4 uVar8;
   uint *puVar9;
   char *pcVar10;
   ulong uVar11;
   undefined8 uVar12;
   long lVar13;
   ulong uVar14;
   long lVar15;
   long in_FS_OFFSET;
   int local_164;
   int local_160;
   char local_159;
   undefined8 local_140;
   char *local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined2 local_120;
   undefined1 local_11e;
   undefined8 local_118;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 uStack_f0;
   int local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined4 local_d8;
   undefined8 local_d4;
   undefined8 uStack_cc;
   undefined8 local_c4;
   uint local_bc;
   undefined2 local_b8;
   undefined1 local_b6;
   undefined4 local_b4;
   undefined2 local_b0;
   undefined1 local_a8[24];
   undefined8 local_90;
   undefined1 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   lVar15 = *(long*)( param_3 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar15 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar12 = 0x35d;
         pcVar10 = "Condition \"p_layers.is_empty()\" is true.";
         LAB_0010f811:_err_print_error("texture_2d_layered_initialize", "drivers/gles3/storage/texture_storage.cpp", uVar12, pcVar10, 0, 0);
         return;
      }

      goto LAB_0010fd83;
   }

   if (param_4 == 1) {
      lVar15 = *(long*)( lVar15 + -8 );
      if (lVar15 != 6) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar12 = 0x35f;
            pcVar10 = "Condition \"p_layered_type == RenderingServer::TEXTURE_LAYERED_CUBEMAP && p_layers.size() != 6\" is true.";
            goto LAB_0010f811;
         }

         goto LAB_0010fd83;
      }

      LAB_0010f5c4:local_160 = 0x27;
      lVar13 = 0;
      iVar6 = 0;
      local_159 = '\0';
      local_164 = 0;
      while (lVar13 < lVar15) {
         cVar5 = Image::is_empty();
         if (cVar5 != '\0') {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010fd83;
            uVar12 = 0x36a;
            pcVar10 = "Condition \"p_layers[i]->is_empty()\" is true.";
            goto LAB_0010f811;
         }

         lVar15 = *(long*)( param_3 + 8 );
         if (lVar13 != 0) {
            if (lVar15 != 0) {
               lVar15 = *(long*)( lVar15 + -8 );
               if (lVar15 <= lVar13) goto LAB_0010f7c0;
               iVar7 = Image::get_width();
               if (iVar7 != iVar6) {
                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010fd83;
                  uVar12 = 0x372;
                  pcVar10 = "Condition \"p_layers[i]->get_width() != valid_width\" is true.";
                  goto LAB_0010f811;
               }

               if (*(long*)( param_3 + 8 ) != 0) {
                  lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
                  if (lVar15 <= lVar13) goto LAB_0010f7c0;
                  iVar7 = Image::get_height();
                  if (iVar7 != local_164) {
                     if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010fd83;
                     uVar12 = 0x373;
                     pcVar10 = "Condition \"p_layers[i]->get_height() != valid_height\" is true.";
                     goto LAB_0010f811;
                  }

                  if (*(long*)( param_3 + 8 ) != 0) {
                     lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
                     if (lVar15 <= lVar13) goto LAB_0010f7c0;
                     iVar7 = Image::get_format();
                     if (iVar7 != local_160) {
                        if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010fd83;
                        uVar12 = 0x374;
                        pcVar10 = "Condition \"p_layers[i]->get_format() != valid_format\" is true.";
                        goto LAB_0010f811;
                     }

                     if (*(long*)( param_3 + 8 ) != 0) {
                        lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
                        if (lVar15 <= lVar13) goto LAB_0010f7c0;
                        cVar5 = Image::has_mipmaps();
                        if (cVar5 == local_159) goto LAB_0010f6a3;
                        if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010fd83;
                        uVar12 = 0x375;
                        pcVar10 = "Condition \"p_layers[i]->has_mipmaps() != valid_mipmaps\" is true.";
                        goto LAB_0010f811;
                     }

                  }

               }

            }

            lVar15 = 0;
            goto LAB_0010f7c0;
         }

         if (lVar15 == 0) goto LAB_0010f7a0;
         lVar15 = *(long*)( lVar15 + -8 );
         if (lVar15 < 1) goto LAB_0010f7a3;
         iVar6 = Image::get_width();
         if (*(long*)( param_3 + 8 ) == 0) goto LAB_0010f7a0;
         lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         if (lVar15 < 1) goto LAB_0010f7a3;
         local_164 = Image::get_height();
         if (*(long*)( param_3 + 8 ) == 0) goto LAB_0010f7a0;
         lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         if (lVar15 < 1) goto LAB_0010f7a3;
         local_160 = Image::get_format();
         if (*(long*)( param_3 + 8 ) == 0) goto LAB_0010f7a0;
         lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         if (lVar15 < 1) goto LAB_0010f7a3;
         local_159 = Image::has_mipmaps();
         LAB_0010f6a3:lVar13 = lVar13 + 1;
         if (*(long*)( param_3 + 8 ) == 0) break;
         lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
      }
;
      local_108 = (undefined1[16])0x0;
      local_f8 = __LC226;
      uStack_f0 = _LC240;
      local_a8._0_16_ = (undefined1[16])0x0;
      local_e8 = (int)__LC227;
      uStack_e4 = ( undefined4 )((ulong)__LC227 >> 0x20);
      uStack_e0 = (undefined4)_UNK_001240e8;
      uStack_dc = ( undefined4 )((ulong)_UNK_001240e8 >> 0x20);
      local_58 = (undefined1[16])0x0;
      local_d4 = __LC228;
      uStack_cc = _UNK_001240f8;
      local_48 = _LC229;
      local_120 = 0;
      local_b8 = 0;
      local_b0 = 0;
      local_128 = 0;
      local_11e = 0;
      local_118 = 0;
      local_d8 = 2;
      local_c4 = 0;
      local_bc = 0;
      local_b6 = 0;
      local_b4 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      uVar8 = Image::get_width();
      local_f8 = CONCAT44(local_f8._4_4_, uVar8);
      uStack_e0 = Image::get_height();
      local_f8 = CONCAT44(uStack_e0, (undefined4)local_f8);
      uStack_e4 = (undefined4)local_f8;
      iVar6 = Image::get_mipmap_count();
      uStack_f0 = CONCAT44(iVar6 + 1, (undefined4)uStack_f0);
      uStack_dc = Image::get_format();
      uVar8 = 0x8c1a;
      if (param_4 == 1) {
         uVar8 = 0x8513;
      }

      local_d4 = CONCAT44(param_4, 1);
      uStack_cc = CONCAT44(uStack_cc._4_4_, uVar8);
      if (*(long*)( param_3 + 8 ) == 0) {
         local_e8 = 0;
      }
 else {
         local_e8 = *(int*)( *(long*)( param_3 + 8 ) + -8 );
      }

      local_140 = 0;
      _get_gl_image_and_format((Ref<Image>*)&local_138, this, (StrRange*)&local_140, uStack_dc, &local_d8, (long)&uStack_cc + 4, &local_c4, (long)&local_c4 + 4, &local_b8, 0);
      Ref<Image>::unref((Ref<Image>*)&local_138);
      if (*(long*)( param_3 + 8 ) == 0) {
         LAB_0010f7a0:lVar15 = 0;
         LAB_0010f7a3:lVar13 = 0;
         LAB_0010f7c0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar15, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar15 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
      if (lVar15 < 1) goto LAB_0010f7a3;
      iVar6 = Image::get_image_data_size(local_f8 & 0xffffffff, local_f8._4_4_, uStack_dc, uStack_f0._4_4_ != 0);
      local_bc = iVar6 * local_e8;
      local_b6 = 1;
      ( *_glad_glGenTextures )(1, &local_b4);
      lVar15 = Utilities::singleton;
      local_138 = "Texture Layered";
      local_140 = 0;
      local_130 = 0xf;
      String::parse_latin1((StrRange*)&local_140);
      uVar4 = local_bc;
      uVar14 = 0;
      local_138 = (char*)CONCAT44(local_138._4_4_, local_b4);
      plVar1 = (long*)( lVar15 + 0x108 );
      *plVar1 = *plVar1 + (ulong)local_bc;
      puVar9 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar15 + 200 ), (uint*)&local_138);
      *puVar9 = uVar4;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
      RID_Alloc<GLES3::Texture,true>::initialize_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ), param_2, &local_128);
      lVar15 = *(long*)( param_3 + 8 );
      while (lVar15 != 0) {
         iVar6 = (int)uVar14;
         uVar11 = uVar14 & 0xffffffff;
         if (*(long*)( lVar15 + -8 ) <= (long)uVar14) break;
         lVar13 = uVar14 * 8;
         uVar14 = uVar14 + 1;
         _texture_set_data(this, param_2, lVar15 + lVar13, uVar11, iVar6 == 0);
         lVar15 = *(long*)( param_3 + 8 );
      }
;
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_90);
      if (( local_a8._8_8_ != 0 ) && ( cVar5 = cVar5 != '\0' )) {
         memdelete<Image>((Image*)local_a8._8_8_);
      }

      uVar12 = local_108._8_8_;
      if (local_108._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_108._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108._8_8_ = 0;
            Memory::free_static((void*)( uVar12 + -0x10 ), false);
         }

      }

      uVar12 = local_108._0_8_;
      if (local_108._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_108._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_108._8_8_;
            local_108 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar12 + -0x10 ), false);
         }

      }

   }
 else {
      if (param_4 != 2) {
         lVar15 = *(long*)( lVar15 + -8 );
         if (lVar15 < 1) goto LAB_0010f7a3;
         goto LAB_0010f5c4;
      }

      _err_print_error("texture_2d_layered_initialize", "drivers/gles3/storage/texture_storage.cpp", 0x360, "Condition \"p_layered_type == RenderingServer::TEXTURE_LAYERED_CUBEMAP_ARRAY\" is true.", "Cubemap Arrays are not supported in the Compatibility renderer.", 0, 0);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010fd83:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GLES3::TextureStorage::texture_proxy_update(RID, RID) */void GLES3::TextureStorage::texture_proxy_update(TextureStorage *this, ulong param_2, ulong param_3) {
   ulong uVar1;
   long lVar2;
   Image *pIVar3;
   Image *pIVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   char cVar7;
   char *pcVar8;
   long lVar9;
   undefined1 uVar10;
   long lVar11;
   undefined8 uVar12;
   undefined8 *puVar13;
   undefined8 *puVar14;
   long lVar15;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      puVar13 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 ) );
      if (*(int*)( puVar13 + 0x1d ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( puVar13 + 1 ) == '\0') {
            uVar12 = 0x410;
            pcVar8 = "Condition \"!tex->is_proxy\" is true.";
         }
 else {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0xf4 ) )) {
               puVar14 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 ) );
               if (*(int*)( puVar14 + 0x1d ) == (int)( param_3 >> 0x20 )) {
                  if (*(char*)( puVar14 + 1 ) != '\0') {
                     uVar12 = 0x413;
                     pcVar8 = "Condition \"proxy_to->is_proxy\" is true.";
                     goto LAB_00110162;
                  }

                  uVar10 = 0;
                  if (puVar13[2] == 0) {
                     LAB_0010ff60:*puVar13 = *puVar14;
                     *(ushort*)( puVar13 + 1 ) = CONCAT11(*(undefined1*)( (long)puVar14 + 9 ), uVar10);
                     *(undefined1*)( (long)puVar13 + 10 ) = *(undefined1*)( (long)puVar14 + 10 );
                     puVar13[2] = puVar14[2];
                     if (puVar13[4] != puVar14[4]) {
                        CowData<RID>::_ref((CowData<RID>*)( puVar13 + 4 ), (CowData*)( puVar14 + 4 ));
                     }

                     if (puVar13[5] != puVar14[5]) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar13 + 5 ), (CowData*)( puVar14 + 5 ));
                     }

                     uVar12 = puVar14[8];
                     uVar5 = puVar14[9];
                     uVar6 = puVar14[7];
                     pIVar3 = (Image*)puVar13[0x11];
                     puVar13[6] = puVar14[6];
                     puVar13[7] = uVar6;
                     puVar13[8] = uVar12;
                     puVar13[9] = uVar5;
                     *(undefined4*)( puVar13 + 10 ) = *(undefined4*)( puVar14 + 10 );
                     uVar12 = *(undefined8*)( (long)puVar14 + 0x5c );
                     *(undefined8*)( (long)puVar13 + 0x54 ) = *(undefined8*)( (long)puVar14 + 0x54 );
                     *(undefined8*)( (long)puVar13 + 0x5c ) = uVar12;
                     pIVar4 = (Image*)puVar14[0x11];
                     *(undefined8*)( (long)puVar13 + 100 ) = *(undefined8*)( (long)puVar14 + 100 );
                     *(undefined4*)( (long)puVar13 + 0x6c ) = *(undefined4*)( (long)puVar14 + 0x6c );
                     *(undefined2*)( puVar13 + 0xe ) = *(undefined2*)( puVar14 + 0xe );
                     *(undefined1*)( (long)puVar13 + 0x72 ) = *(undefined1*)( (long)puVar14 + 0x72 );
                     *(undefined4*)( (long)puVar13 + 0x74 ) = *(undefined4*)( (long)puVar14 + 0x74 );
                     *(undefined2*)( puVar13 + 0xf ) = *(undefined2*)( puVar14 + 0xf );
                     puVar13[0x10] = puVar14[0x10];
                     if (pIVar4 != pIVar3) {
                        puVar13[0x11] = pIVar4;
                        if (pIVar4 != (Image*)0x0) {
                           cVar7 = RefCounted::reference();
                           if (cVar7 == '\0') {
                              puVar13[0x11] = 0;
                           }

                        }

                        if (pIVar3 != (Image*)0x0) {
                           cVar7 = RefCounted::unreference();
                           if (cVar7 != '\0') {
                              memdelete<Image>(pIVar3);
                           }

                        }

                     }

                     if (puVar13[0x13] != puVar14[0x13]) {
                        CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)( puVar13 + 0x13 ), (CowData*)( puVar14 + 0x13 ));
                     }

                     *(undefined1*)( puVar13 + 0x14 ) = *(undefined1*)( puVar14 + 0x14 );
                     for (int i = 0; i < 5; i++) {
                        puVar13[( i + 21 )] = puVar14[( i + 21 )];
                     }

                     uVar12 = puVar14[0x1b];
                     puVar13[0x1a] = puVar14[0x1a];
                     puVar13[0x1b] = uVar12;
                     uVar12 = puVar14[0x1c];
                     puVar13[2] = param_3;
                     puVar13[0x1c] = uVar12;
                     *(undefined1*)( (long)puVar13 + 10 ) = 0;
                     *(undefined1*)( puVar13 + 1 ) = 1;
                     CowData<RID>::resize<false>((CowData<RID>*)( puVar13 + 4 ), 0);
                     *(undefined4*)( (long)puVar13 + 0x74 ) = 0;
                     puVar13[0x1b] = 0;
                     Vector<RID>::push_back((Vector<RID>*)( puVar14 + 3 ), param_2);
                     return;
                  }

                  uVar1 = puVar13[2];
                  if ((uint)uVar1 < *(uint*)( this + 0xf4 )) {
                     lVar11 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                     if (*(int*)( lVar11 + 0xe8 ) == (int)( uVar1 >> 0x20 )) {
                        lVar2 = *(long*)( lVar11 + 0x20 );
                        if (( ( lVar2 != 0 ) && ( lVar9 = *(long*)( lVar2 + -8 ) ),lVar9 != 0 )) {
                           lVar15 = 0;
                           do {
                              if (param_2 == *(ulong*)( lVar2 + lVar15 * 8 )) {
                                 if (lVar9 <= lVar15) {
                                    _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar15, lVar9, "p_index", "size()", "", false, false);
                                    uVar10 = *(undefined1*)( puVar14 + 1 );
                                    goto LAB_0010ff60;
                                 }

                                 CowData<RID>::_copy_on_write((CowData<RID>*)( lVar11 + 0x20 ));
                                 lVar2 = *(long*)( lVar11 + 0x20 );
                                 if (lVar2 == 0) {
                                    lVar9 = -1;
                                 }
 else {
                                    lVar9 = *(long*)( lVar2 + -8 ) + -1;
                                    if (lVar15 < lVar9) {
                                       memmove((void*)( lVar2 + lVar15 * 8 ), (void*)( lVar2 + 8 + lVar15 * 8 ), ( lVar9 - lVar15 ) * 8);
                                    }

                                 }

                                 CowData<RID>::resize<false>((CowData<RID>*)( lVar11 + 0x20 ), lVar9);
                                 break;
                              }

                              lVar15 = lVar15 + 1;
                           }
 while ( lVar9 != lVar15 );
                        }

                        uVar10 = *(undefined1*)( puVar14 + 1 );
                        goto LAB_0010ff60;
                     }

                     if (*(int*)( lVar11 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }

                  }

                  uVar12 = 0x417;
                  pcVar8 = "Parameter \"prev_tex\" is null.";
                  goto LAB_00110162;
               }

               if (*(int*)( puVar14 + 0x1d ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar12 = 0x412;
            pcVar8 = "Parameter \"proxy_to\" is null.";
         }

         goto LAB_00110162;
      }

      if (*(int*)( puVar13 + 0x1d ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar12 = 0x40f;
   pcVar8 = "Parameter \"tex\" is null.";
   LAB_00110162:_err_print_error("texture_proxy_update", "drivers/gles3/storage/texture_storage.cpp", uVar12, pcVar8, 0, 0);
   return;
}
/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<Image>>::_copy_on_write(CowData<Ref<Image>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_create_from_native_handle(RenderingServer::TextureType,
   Image::Format, unsigned long, int, int, int, int, RenderingServer::TextureLayeredType) */undefined8 GLES3::TextureStorage::texture_create_from_native_handle(TextureStorage *this, int param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8, undefined4 param_9) {
   long *plVar1;
   undefined8 uVar2;
   char cVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   undefined8 local_108;
   undefined2 local_100;
   undefined1 local_fe;
   undefined8 local_f8;
   undefined1 local_e8[16];
   undefined4 local_d8;
   undefined4 uStack_d4;
   undefined4 uStack_d0;
   undefined4 uStack_cc;
   undefined8 local_c8;
   undefined8 uStack_c0;
   undefined4 local_b8;
   undefined4 local_b4;
   undefined4 uStack_b0;
   undefined8 uStack_ac;
   undefined8 local_a4;
   undefined4 local_9c;
   undefined2 local_98;
   undefined1 local_96;
   undefined4 local_94;
   undefined2 local_90;
   undefined1 local_88[24];
   undefined8 local_70;
   undefined1 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 local_40;
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20;
   uStack_c0 = CONCAT44(param_3, param_6);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_90 = 0;
   local_c8 = CONCAT44(param_5, param_8);
   local_108 = 0;
   local_fe = 0;
   local_f8 = 0;
   local_a4 = 0;
   local_9c = 0;
   local_98 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   local_48 = 0;
   local_40 = 0;
   local_28 = _LC229;
   local_e8 = (undefined1[16])0x0;
   local_b4 = (undefined4)__LC228;
   uStack_ac = _UNK_001240f8;
   uVar2 = uStack_ac;
   local_88._0_16_ = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   local_96 = 1;
   local_100 = 0x100;
   uStack_ac._4_4_ = ( undefined4 )((ulong)_UNK_001240f8 >> 0x20);
   if (param_2 == 1) {
      local_b4 = 1;
      uStack_ac = CONCAT44(uStack_ac._4_4_, 0x8c1a);
      uVar2 = uStack_ac;
   }
 else if (param_2 == 2) {
      local_b4 = 2;
      uStack_ac = CONCAT44(uStack_ac._4_4_, 0x806f);
      uVar2 = uStack_ac;
   }

   uStack_ac = uVar2;
   _uStack_d0 = CONCAT44((int)( (ulong)_LC240 >> 0x20 ), param_7);
   _local_d8 = CONCAT44(param_6, param_5);
   _local_b4 = CONCAT44(param_9, local_b4);
   local_b8 = param_3;
   local_94 = param_4;
   uVar4 = RID_Alloc<GLES3::Texture,true>::make_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ), (Texture*)&local_108);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_70);
   uVar2 = local_88._8_8_;
   if ((Image*)local_88._8_8_ != (Image*)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         memdelete<Image>((Image*)uVar2);
      }

   }

   if (local_e8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_e8._8_8_ + -0x10 ), false);
      }

   }

   if (local_e8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_e8._0_8_ + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::texture_proxy_initialize(RID, RID) */void GLES3::TextureStorage::texture_proxy_initialize(TextureStorage *this, undefined8 param_2, ulong param_3) {
   long *plVar1;
   Image *pIVar2;
   char cVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_118;
   undefined1 local_110;
   undefined1 local_10f;
   undefined1 local_10e;
   ulong local_108;
   undefined1 local_f8[16];
   undefined8 local_e8;
   undefined4 local_e0;
   undefined4 local_dc;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined8 local_d0;
   undefined4 local_c8;
   undefined8 local_c4;
   undefined4 local_bc;
   undefined8 local_b8;
   undefined4 local_b0;
   undefined4 local_ac;
   undefined2 local_a8;
   undefined1 local_a6;
   undefined4 local_a4;
   undefined2 local_a0;
   undefined8 local_98;
   Image *local_90;
   undefined8 local_80;
   undefined1 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0xf4 ) )) {
      lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar4 + 0xe8 ) == (int)( param_3 >> 0x20 )) {
         local_dc = *(undefined4*)( lVar4 + 0x3c );
         local_f8 = (undefined1[16])0x0;
         local_38 = _LC229;
         local_10f = *(undefined1*)( lVar4 + 9 );
         local_e8 = *(undefined8*)( lVar4 + 0x30 );
         local_118 = 0;
         local_d4 = *(undefined4*)( lVar4 + 0x44 );
         local_e0 = 0;
         local_d0 = *(undefined8*)( lVar4 + 0x48 );
         local_d8 = 1;
         local_c4 = *(undefined8*)( lVar4 + 0x54 );
         local_c8 = 2;
         local_bc = *(undefined4*)( lVar4 + 0x5c );
         local_b8 = 0;
         local_ac = *(undefined4*)( lVar4 + 0x6c );
         local_b0 = 0;
         local_a8 = *(undefined2*)( lVar4 + 0x70 );
         local_90 = (Image*)0x0;
         local_a6 = *(undefined1*)( lVar4 + 0x72 );
         local_80 = 0;
         local_40 = 0;
         local_a4 = *(undefined4*)( lVar4 + 0x74 );
         local_a0 = *(undefined2*)( lVar4 + 0x78 );
         local_10e = 0;
         local_98 = *(undefined8*)( lVar4 + 0x80 );
         local_110 = 1;
         local_78 = *(undefined1*)( lVar4 + 0xa0 );
         local_70 = *(undefined8*)( lVar4 + 0xa8 );
         local_68 = *(undefined8*)( lVar4 + 0xb0 );
         local_60 = *(undefined8*)( lVar4 + 0xb8 );
         local_58 = *(undefined8*)( lVar4 + 0xc0 );
         local_50 = *(undefined8*)( lVar4 + 200 );
         local_48 = *(undefined8*)( lVar4 + 0xd0 );
         local_108 = param_3;
         CowData<RID>::resize<false>((CowData<RID>*)local_f8, 0);
         Vector<RID>::push_back((Vector<RID>*)( lVar4 + 0x18 ), param_2);
         RID_Alloc<GLES3::Texture,true>::initialize_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ), param_2, &local_118);
         CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_80);
         pIVar2 = local_90;
         if (local_90 != (Image*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               memdelete<Image>(pIVar2);
            }

         }

         if (local_f8._8_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_f8._8_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_f8._8_8_ + -0x10 ), false);
            }

         }

         if (local_f8._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_f8._0_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static((void*)( local_f8._0_8_ + -0x10 ), false);
                  return;
               }

               goto LAB_00110a03;
            }

         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00110a03;
      }

      if (*(int*)( lVar4 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("texture_proxy_initialize", "drivers/gles3/storage/texture_storage.cpp", 0x3ba, "Parameter \"texture\" is null.", 0, 0);
      return;
   }

   LAB_00110a03:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_external_initialize(RID, int, int, unsigned long) */void GLES3::TextureStorage::texture_external_initialize(long param_1, undefined8 param_2, undefined4 param_3, undefined4 param_4) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   undefined8 uVar4;
   uint uVar5;
   char cVar6;
   uint *puVar7;
   long in_FS_OFFSET;
   long local_130;
   char *local_128;
   undefined8 local_120;
   undefined8 local_118;
   undefined2 local_110;
   undefined1 local_10e;
   undefined8 local_108;
   undefined1 local_f8[16];
   undefined4 local_e8;
   undefined4 local_e4;
   undefined8 local_e0;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined4 local_d0;
   undefined8 local_cc;
   undefined8 local_c4;
   int local_bc;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined2 local_a8;
   undefined1 local_a6;
   undefined4 local_a4;
   undefined2 local_a0;
   undefined1 local_98[24];
   undefined8 local_80;
   undefined1 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_f8 = (undefined1[16])0x0;
   local_110 = 0;
   local_98._0_16_ = (undefined1[16])0x0;
   local_e0 = _LC240;
   local_a0 = 0;
   local_118 = 0;
   local_10e = 0;
   local_108 = 0;
   local_d8 = 1;
   local_c4 = 0;
   local_a4 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0;
   local_48 = (undefined1[16])0x0;
   local_38 = _LC229;
   local_cc = _LC241;
   local_a8 = 0;
   local_bc = ( -(uint)(*(char *)(Config::singleton + 0x89) == '\0') & 0xffff807c ) + 0x8d65;
   local_a6 = 1;
   local_b8 = 0;
   local_b0 = 0;
   local_e8 = param_3;
   local_e4 = param_4;
   local_d4 = param_3;
   local_d0 = param_4;
   ( *_glad_glGenTextures )(1, &local_a4);
   ( *_glad_glBindTexture )(local_bc, local_a4);
   ( *_glad_glTexImage2D )(0xde1, 0, 0x1907, 1, 1, 0, 0x1907, 0x1401, 0);
   local_b0._4_4_ = 3;
   ( *_glad_glTexParameteri )(local_bc, 0x2801, 0x2601);
   ( *_glad_glTexParameteri )(local_bc, 0x2800, 0x2601);
   ( *_glad_glTexParameteri )(local_bc, 0x2802, 0x812f);
   ( *_glad_glTexParameteri )(local_bc, 0x2803, 0x812f);
   lVar3 = Utilities::singleton;
   local_128 = "Texture External";
   local_130 = 0;
   local_120 = 0x10;
   String::parse_latin1((StrRange*)&local_130);
   uVar5 = local_b0._4_4_;
   local_128 = (char*)CONCAT44(local_128._4_4_, local_a4);
   plVar1 = (long*)( lVar3 + 0x108 );
   *plVar1 = *plVar1 + (ulong)local_b0._4_4_;
   puVar7 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 200 ), (uint*)&local_128);
   lVar3 = local_130;
   *puVar7 = uVar5;
   if (local_130 != 0) {
      LOCK();
      plVar1 = (long*)( local_130 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_130 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   RID_Alloc<GLES3::Texture,true>::initialize_rid((RID_Alloc<GLES3::Texture,true>*)( param_1 + 0xd8 ), param_2, &local_118);
   ( *_glad_glBindTexture )(local_bc);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_80);
   if (local_98._8_8_ != 0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         memdelete<Image>((Image*)local_98._8_8_);
      }

   }

   uVar4 = local_f8._8_8_;
   if (local_f8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_f8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8._8_8_ = 0;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }

   }

   uVar4 = local_f8._0_8_;
   if (local_f8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_f8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar2._8_8_ = 0;
         auVar2._0_8_ = local_f8._8_8_;
         local_f8 = auVar2 << 0x40;
         Memory::free_static((void*)( uVar4 + -0x10 ), false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_2d_initialize(RID, Ref<Image> const&) */void GLES3::TextureStorage::texture_2d_initialize(TextureStorage *this, undefined8 param_2, long *param_3) {
   long *plVar1;
   undefined1 auVar2[16];
   long lVar3;
   undefined8 uVar4;
   uint uVar5;
   char cVar6;
   undefined4 uVar7;
   int iVar8;
   uint *puVar9;
   long in_FS_OFFSET;
   long local_140;
   Image *local_138;
   undefined8 local_130;
   undefined8 local_128;
   undefined2 local_120;
   undefined1 local_11e;
   undefined8 local_118;
   undefined1 local_108[16];
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined4 local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   undefined4 uStack_dc;
   undefined4 local_d8;
   ulong local_d4;
   undefined8 uStack_cc;
   undefined8 local_c4;
   uint local_bc;
   undefined2 local_b8;
   undefined1 local_b6;
   undefined4 local_b4;
   undefined2 local_b0;
   undefined1 local_a8[24];
   undefined8 local_90;
   undefined1 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*param_3 == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("texture_2d_initialize", "drivers/gles3/storage/texture_storage.cpp", 0x31e, "Condition \"p_image.is_null()\" is true.", 0, 0);
         return;
      }

   }
 else {
      local_f8 = __LC226;
      uStack_f0 = _LC240;
      local_120 = 0;
      local_e8 = (undefined4)__LC227;
      uStack_e4 = ( undefined4 )((ulong)__LC227 >> 0x20);
      uStack_e0 = (undefined4)_UNK_001240e8;
      uStack_dc = ( undefined4 )((ulong)_UNK_001240e8 >> 0x20);
      local_b8 = 0;
      local_b0 = 0;
      local_108 = (undefined1[16])0x0;
      local_d4 = __LC228;
      uStack_cc = _UNK_001240f8;
      local_a8._0_16_ = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_128 = 0;
      local_11e = 0;
      local_118 = 0;
      local_d8 = 2;
      local_c4 = 0;
      local_bc = 0;
      local_b6 = 0;
      local_b4 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 0;
      local_48 = _LC229;
      uVar7 = Image::get_width();
      local_f8 = CONCAT44(local_f8._4_4_, uVar7);
      uStack_e0 = Image::get_height();
      local_f8 = CONCAT44(uStack_e0, (undefined4)local_f8);
      uStack_e4 = (undefined4)local_f8;
      iVar8 = Image::get_mipmap_count();
      uStack_f0 = CONCAT44(iVar8 + 1, (undefined4)uStack_f0);
      uStack_dc = Image::get_format();
      local_d4 = local_d4 & 0xffffffff00000000;
      uStack_cc = CONCAT44(uStack_cc._4_4_, 0xde1);
      local_140 = 0;
      _get_gl_image_and_format(&local_138, this, (StrRange*)&local_140, uStack_dc, &local_d8, (long)&uStack_cc + 4, &local_c4, (long)&local_c4 + 4, &local_b8, 0);
      if (local_138 != (Image*)0x0) {
         cVar6 = RefCounted::unreference();
         if (cVar6 != '\0') {
            memdelete<Image>(local_138);
         }

      }

      local_bc = Image::get_image_data_size(local_f8 & 0xffffffff, local_f8._4_4_, uStack_dc, uStack_f0._4_4_ != 0);
      local_b6 = 1;
      ( *_glad_glGenTextures )(1, &local_b4);
      lVar3 = Utilities::singleton;
      local_138 = (Image*)0x11b495;
      local_140 = 0;
      local_130 = 10;
      String::parse_latin1((StrRange*)&local_140);
      uVar5 = local_bc;
      local_138 = (Image*)CONCAT44(local_138._4_4_, local_b4);
      plVar1 = (long*)( lVar3 + 0x108 );
      *plVar1 = *plVar1 + (ulong)local_bc;
      puVar9 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 200 ), (uint*)&local_138);
      lVar3 = local_140;
      *puVar9 = uVar5;
      if (local_140 != 0) {
         LOCK();
         plVar1 = (long*)( local_140 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_140 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      RID_Alloc<GLES3::Texture,true>::initialize_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ), param_2, &local_128);
      _texture_set_data(this, param_2, param_3, 0, 0);
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_90);
      if (local_a8._8_8_ != 0) {
         cVar6 = RefCounted::unreference();
         if (cVar6 != '\0') {
            memdelete<Image>((Image*)local_a8._8_8_);
         }

      }

      uVar4 = local_108._8_8_;
      if (local_108._8_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_108._8_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108._8_8_ = 0;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      uVar4 = local_108._0_8_;
      if (local_108._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_108._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_108._8_8_;
            local_108 = auVar2 << 0x40;
            Memory::free_static((void*)( uVar4 + -0x10 ), false);
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_free(RID) */void GLES3::TextureStorage::texture_free(TextureStorage *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   ulong *puVar2;
   int iVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   char cVar12;
   int iVar13;
   uint uVar14;
   ulong uVar15;
   uint *puVar16;
   char *pcVar17;
   long lVar18;
   undefined8 uVar19;
   long lVar20;
   uint uVar21;
   char *pcVar22;
   char *pcVar23;
   ulong uVar24;
   uint uVar25;
   ulong uVar26;
   long lVar27;
   long lVar28;
   long lVar29;
   long in_FS_OFFSET;
   uint local_4c;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      uVar21 = (uint)param_2;
      if (uVar21 < *(uint*)( this + 0xf4 )) {
         lVar20 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
         iVar3 = *(int*)( lVar20 + 0xe8 );
         if (iVar3 == (int)( param_2 >> 0x20 )) {
            if (*(char*)( lVar20 + 10 ) == '\0') {
               if (*(void**)( lVar20 + 0xd8 ) != (void*)0x0) {
                  Memory::free_static(*(void**)( lVar20 + 0xd8 ), false);
               }

               lVar28 = Utilities::singleton;
               if (*(char*)( lVar20 + 8 ) == '\0') {
                  uVar14 = *(uint*)( lVar20 + 0x74 );
                  if (( uVar14 != 0 ) && ( *(char*)( lVar20 + 9 ) == '\0' )) {
                     this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
                     local_4c = uVar14;
                     cVar12 = HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::_lookup_pos(this_00, (uint*)(ulong)uVar14, (uint*)&local_48);
                     if (cVar12 == '\0') {
                        _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
                     }
 else {
                        ( *_glad_glDeleteTextures )(1, &local_4c);
                        puVar16 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, &local_4c);
                        *(long*)( lVar28 + 0x108 ) = *(long*)( lVar28 + 0x108 ) - ( ulong ) * puVar16;
                        HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, &local_4c);
                     }

                     *(undefined4*)( lVar20 + 0x74 ) = 0;
                  }

               }
 else if (*(long*)( lVar20 + 0x10 ) != 0) {
                  uVar15 = *(ulong*)( lVar20 + 0x10 );
                  if ((uint)uVar15 < *(uint*)( this + 0xf4 )) {
                     lVar28 = ( ( uVar15 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar15 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                     if (*(int*)( lVar28 + 0xe8 ) == (int)( uVar15 >> 0x20 )) {
                        lVar18 = *(long*)( lVar28 + 0x20 );
                        if (( lVar18 != 0 ) && ( lVar29= *(long *)(lVar18 + -8),0 < lVar29 )) {
                           lVar27 = 0;
                           do {
                              if (param_2 == *(ulong*)( lVar18 + lVar27 * 8 )) {
                                 if (lVar27 < lVar29) {
                                    CowData<RID>::_copy_on_write((CowData<RID>*)( lVar28 + 0x20 ));
                                    lVar18 = *(long*)( lVar28 + 0x20 );
                                    if (lVar18 == 0) {
                                       lVar29 = -1;
                                    }
 else {
                                       lVar29 = *(long*)( lVar18 + -8 ) + -1;
                                       if (lVar27 < lVar29) {
                                          memmove((void*)( lVar18 + lVar27 * 8 ), (void*)( lVar18 + 8 + lVar27 * 8 ), ( lVar29 - lVar27 ) * 8);
                                       }

                                    }

                                    CowData<RID>::resize<false>((CowData<RID>*)( lVar28 + 0x20 ), lVar29);
                                 }
 else {
                                    _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar27, lVar29, "p_index", "size()", "", false, false);
                                 }

                                 break;
                              }

                              lVar27 = lVar27 + 1;
                           }
 while ( lVar29 != lVar27 );
                        }

                     }
 else if (*(int*)( lVar28 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }

                  }

               }

               local_48 = param_2;
               if (( *(long*)( this + 0x138 ) != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
                  uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
                  lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
                  uVar15 = param_2 * 0x3ffff - 1;
                  uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
                  uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
                  uVar15 = uVar15 >> 0x16 ^ uVar15;
                  uVar26 = uVar15 & 0xffffffff;
                  if ((int)uVar15 == 0) {
                     uVar26 = 1;
                  }

                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar26 * lVar28;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar24;
                  lVar18 = SUB168(auVar4 * auVar8, 8);
                  uVar14 = *(uint*)( *(long*)( this + 0x140 ) + lVar18 * 4 );
                  iVar13 = SUB164(auVar4 * auVar8, 8);
                  if (uVar14 != 0) {
                     uVar25 = 0;
                     while (( uVar14 != (uint)uVar26 || ( param_2 != *(ulong*)( *(long*)( *(long*)( this + 0x138 ) + lVar18 * 8 ) + 0x10 ) ) )) {
                        uVar25 = uVar25 + 1;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = ( ulong )(iVar13 + 1) * lVar28;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar24;
                        lVar18 = SUB168(auVar5 * auVar9, 8);
                        uVar14 = *(uint*)( *(long*)( this + 0x140 ) + lVar18 * 4 );
                        iVar13 = SUB164(auVar5 * auVar9, 8);
                        if (( uVar14 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar14 * lVar28,auVar10._8_8_ = 0,auVar10._0_8_ = uVar24,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + iVar13 ) - SUB164(auVar6 * auVar10, 8)) * lVar28,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,SUB164(auVar7 * auVar11, 8) < uVar25) goto LAB_001113de;
                     }
;
                     HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>::erase((HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>*)( this + 0x130 ), (RID*)&local_48);
                  }

               }

               LAB_001113de:lVar28 = *(long*)( lVar20 + 0x20 );
               lVar18 = 0;
               joined_r0x001113ed:if (lVar28 != 0) {
                  do {
                     if (*(long*)( lVar28 + -8 ) <= lVar18) break;
                     puVar2 = (ulong*)( lVar28 + lVar18 * 8 );
                     if (*puVar2 != 0) {
                        uVar15 = *puVar2;
                        if ((uint)uVar15 < *(uint*)( this + 0xf4 )) {
                           lVar28 = ( ( uVar15 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar15 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                           if (*(int*)( lVar28 + 0xe8 ) == (int)( uVar15 >> 0x20 )) goto code_r0x0011143c;
                           if (*(int*)( lVar28 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                           }

                        }

                     }

                     lVar18 = lVar18 + 1;
                     _err_print_error("texture_free", "drivers/gles3/storage/texture_storage.cpp", 0x315, "Condition \"!p\" is true. Continuing.", 0);
                     lVar28 = *(long*)( lVar20 + 0x20 );
                     if (lVar28 == 0) break;
                  }
 while ( true );
               }

               __mutex = (pthread_mutex_t*)( this + 0x108 );
               iVar13 = pthread_mutex_lock(__mutex);
               if (iVar13 != 0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_system_error(iVar13);
               }

               if (uVar21 < *(uint*)( this + 0xf4 )) {
                  uVar15 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 );
                  lVar20 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0;
                  lVar28 = *(long*)( *(long*)( this + 0xe0 ) + uVar15 * 8 ) + lVar20;
                  if (*(int*)( lVar28 + 0xe8 ) < 0) {
                     pthread_mutex_unlock(__mutex);
                     _err_print_error(&_LC65, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                  }
 else if (iVar3 == *(int*)( lVar28 + 0xe8 )) {
                     CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)( lVar28 + 0x98 ));
                     if (( *(long*)( lVar28 + 0x88 ) != 0 ) && ( cVar12 = cVar12 != '\0' )) {
                        memdelete<Image>(*(Image**)( lVar28 + 0x88 ));
                     }

                     if (*(long*)( lVar28 + 0x28 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( lVar28 + 0x28 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar18 = *(long*)( lVar28 + 0x28 );
                           *(undefined8*)( lVar28 + 0x28 ) = 0;
                           Memory::free_static((void*)( lVar18 + -0x10 ), false);
                        }

                     }

                     if (*(long*)( lVar28 + 0x20 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( lVar28 + 0x20 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar18 = *(long*)( lVar28 + 0x20 );
                           *(undefined8*)( lVar28 + 0x20 ) = 0;
                           Memory::free_static((void*)( lVar18 + -0x10 ), false);
                        }

                     }

                     lVar28 = *(long*)( this + 0xe8 );
                     *(undefined4*)( *(long*)( *(long*)( this + 0xe0 ) + uVar15 * 8 ) + 0xe8 + lVar20 ) = 0xffffffff;
                     uVar14 = *(int*)( this + 0xf8 ) - 1;
                     *(uint*)( this + 0xf8 ) = uVar14;
                     *(uint*)( *(long*)( lVar28 + ( (ulong)uVar14 / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 ) + ( (ulong)uVar14 % ( ulong ) * (uint*)( this + 0xf0 ) ) * 4 ) = uVar21;
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        pthread_mutex_unlock(__mutex);
                        return;
                     }

                  }
 else {
                     pthread_mutex_unlock(__mutex);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        pcVar17 = "Method/function failed.";
                        uVar19 = 0x171;
                        pcVar22 = "./core/templates/rid_owner.h";
                        pcVar23 = "free";
                        goto LAB_00111814;
                     }

                  }

                  goto LAB_00111a33;
               }

               pthread_mutex_unlock(__mutex);
               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00111a33;
               pcVar17 = "Method/function failed.";
               uVar19 = 0x161;
               pcVar22 = "./core/templates/rid_owner.h";
               pcVar23 = "free";
               goto LAB_00111814;
            }

            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00111a33;
            uVar19 = 0x2fb;
            pcVar17 = "Condition \"t->is_render_target\" is true.";
            goto LAB_00111806;
         }

         if (iVar3 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      LAB_00111a33:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   uVar19 = 0x2fa;
   pcVar17 = "Parameter \"t\" is null.";
   LAB_00111806:pcVar22 = "drivers/gles3/storage/texture_storage.cpp";
   pcVar23 = "texture_free";
   LAB_00111814:_err_print_error(pcVar23, pcVar22, uVar19, pcVar17, 0, 0);
   return;
   code_r0x0011143c:*(undefined8*)( lVar28 + 0x10 ) = 0;
   lVar18 = lVar18 + 1;
   *(undefined4*)( lVar28 + 0x74 ) = 0;
   lVar28 = *(long*)( lVar20 + 0x20 );
   goto joined_r0x001113ed;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::~TextureStorage() */void GLES3::TextureStorage::~TextureStorage(TextureStorage *this) {
   long *plVar1;
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   uint uVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   char *pcVar12;
   char cVar13;
   uint uVar14;
   long lVar15;
   uint *puVar16;
   ulong uVar17;
   long lVar18;
   int iVar19;
   void *pvVar20;
   ulong uVar21;
   uint uVar22;
   uint uVar23;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   iVar19 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_canvas_texture_allocate_00122c10;
   singleton = 0;
   do {
      lVar15 = (long)iVar19;
      iVar19 = iVar19 + 1;
      texture_free(this, *(undefined8*)( this + lVar15 * 8 + 0x18 ));
      lVar15 = Utilities::singleton;
   }
 while ( iVar19 != 0xd );
   uVar2 = *(uint*)( this + 0x164 );
   if (uVar2 != 0) {
      local_58 = (char*)CONCAT44(local_58._4_4_, uVar2);
      this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
      if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
         uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
         uVar14 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
         uVar14 = ( uVar14 ^ uVar14 >> 0xd ) * -0x3d4d51cb;
         uVar23 = uVar14 ^ uVar14 >> 0x10;
         if (uVar14 == uVar14 >> 0x10) {
            uVar23 = 1;
            uVar17 = uVar3;
         }
 else {
            uVar17 = uVar23 * uVar3;
         }

         uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar21;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar17;
         lVar18 = SUB168(auVar4 * auVar8, 8);
         uVar14 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar18 * 4 );
         iVar19 = SUB164(auVar4 * auVar8, 8);
         if (uVar14 != 0) {
            uVar22 = 0;
            do {
               if (( uVar14 == uVar23 ) && ( uVar2 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar18 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteTextures )(1, &local_58);
                  puVar16 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, (uint*)&local_58);
                  *(long*)( lVar15 + 0x108 ) = *(long*)( lVar15 + 0x108 ) - ( ulong ) * puVar16;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, (uint*)&local_58);
                  goto LAB_00111aa6;
               }

               uVar22 = uVar22 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( iVar19 + 1 ) * uVar3;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar21;
               lVar18 = SUB168(auVar5 * auVar9, 8);
               uVar14 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar18 * 4 );
               iVar19 = SUB164(auVar5 * auVar9, 8);
            }
 while ( ( uVar14 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar14 * uVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar21,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar19 ) - SUB164(auVar6 * auVar10, 8) ) * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar21,uVar22 <= SUB164(auVar7 * auVar11, 8) );
         }

      }

      _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
   }

   LAB_00111aa6:*(undefined4*)( this + 0x164 ) = 0;
   ( *_glad_glDeleteFramebuffers )(1, this + 0x168);
   *(undefined4*)( this + 0x168 ) = 0;
   ShaderGLES3::version_free((ShaderGLES3*)( this + 0x1d0 ));
   for (int i = 0; i < 3; i++) {
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)( this + ( -16*i + 824 ) ));
   }

   if (( *(long*)( this + 0x308 ) != 0 ) && ( cVar13 = cVar13 != '\0' )) {
      memdelete<Image>(*(Image**)( this + 0x308 ));
   }

   *(undefined***)( this + 0x1d0 ) = &PTR__init_00122b88;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)( this + 0x1d0 ));
   RID_Alloc<GLES3::RenderTarget,false>::~RID_Alloc((RID_Alloc<GLES3::RenderTarget,false>*)( this + 0x178 ));
   pvVar20 = *(void**)( this + 0x138 );
   if (pvVar20 != (void*)0x0) {
      if (*(int*)( this + 0x15c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x15c ) = 0;
            *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
         }
 else {
            lVar15 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x140 ) + lVar15 ) != 0) {
                  *(int*)( *(long*)( this + 0x140 ) + lVar15 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar20 + lVar15 * 2 ), false);
                  pvVar20 = *(void**)( this + 0x138 );
                  *(undefined8*)( (long)pvVar20 + lVar15 * 2 ) = 0;
               }

               lVar15 = lVar15 + 4;
            }
 while ( lVar15 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x15c ) = 0;
            *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
            if (pvVar20 == (void*)0x0) goto LAB_00111bd7;
         }

      }

      Memory::free_static(pvVar20, false);
      Memory::free_static(*(void**)( this + 0x140 ), false);
   }

   LAB_00111bd7:RID_Alloc<GLES3::Texture,true>::~RID_Alloc((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ));
   *(undefined***)( this + 0x80 ) = &PTR__RID_Alloc_00122bb0;
   uVar2 = *(uint*)( this + 0xa0 );
   if (uVar2 != 0) {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar2);
      print_error((String*)&local_58);
      pcVar12 = local_58;
      lVar15 = local_60;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar12 + -0x10, false);
            lVar15 = local_60;
         }

      }

      local_60 = lVar15;
      if (lVar15 != 0) {
         LOCK();
         plVar1 = (long*)( lVar15 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar15 + -0x10 ), false);
         }

      }

   }

   uVar2 = *(uint*)( this + 0x9c );
   uVar14 = *(uint*)( this + 0x98 );
   lVar15 = 0;
   if (uVar14 <= uVar2) {
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x88 ) + lVar15 * 8 ), false);
         lVar18 = lVar15 * 8;
         lVar15 = lVar15 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x90 ) + lVar18 ), false);
      }
 while ( (uint)lVar15 < uVar2 / uVar14 );
   }

   if (*(void**)( this + 0x88 ) == (void*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(*(void**)( this + 0x88 ), false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x90 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::TextureStorage::~TextureStorage() */void GLES3::TextureStorage::~TextureStorage(TextureStorage *this) {
   ~TextureStorage(this)
   ;;
   operator_delete(this, 0x340);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_replace(RID, RID) */void GLES3::TextureStorage::texture_replace(TextureStorage *this, ulong param_2, ulong param_3) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   long lVar2;
   Image *pIVar3;
   Image *pIVar4;
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
   undefined8 uVar21;
   undefined8 uVar22;
   char cVar23;
   int iVar24;
   uint uVar25;
   uint uVar26;
   ulong *puVar27;
   ulong uVar28;
   uint *puVar29;
   char *pcVar30;
   int iVar31;
   ulong uVar32;
   undefined8 uVar33;
   long lVar34;
   uint uVar35;
   undefined8 *puVar36;
   long lVar37;
   long lVar38;
   ulong uVar39;
   undefined8 *puVar40;
   uint uVar41;
   long in_FS_OFFSET;
   bool bVar42;
   uint local_68;
   uint local_58[2];
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      puVar36 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 ) );
      if (*(int*)( puVar36 + 0x1d ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( puVar36 + 1 ) != '\0') {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00112ab9;
            uVar33 = 0x55b;
            pcVar30 = "Condition \"tex_to->is_proxy\" is true.";
            goto LAB_001128be;
         }

         if (( param_3 != 0 ) && ( uVar41 = (uint)param_3 ),uVar41 < *(uint*)( this + 0xf4 )) {
            puVar40 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 ) );
            iVar31 = *(int*)( puVar40 + 0x1d );
            if (iVar31 == (int)( param_3 >> 0x20 )) {
               if (*(char*)( puVar40 + 1 ) == '\0') {
                  if (puVar40 != puVar36) {
                     if ((void*)puVar36[0x1b] != (void*)0x0) {
                        Memory::free_static((void*)puVar36[0x1b], false);
                        puVar36[0x1b] = 0;
                     }

                     lVar34 = Utilities::singleton;
                     uVar25 = *(uint*)( (long)puVar36 + 0x74 );
                     if (uVar25 != 0) {
                        this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
                        local_58[0] = uVar25;
                        if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
                           uVar28 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
                           uVar26 = ( uVar25 >> 0x10 ^ uVar25 ) * -0x7a143595;
                           uVar26 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
                           local_68 = uVar26 ^ uVar26 >> 0x10;
                           if (uVar26 == uVar26 >> 0x10) {
                              local_68 = 1;
                              uVar32 = uVar28;
                           }
 else {
                              uVar32 = local_68 * uVar28;
                           }

                           uVar39 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
                           auVar9._8_8_ = 0;
                           auVar9._0_8_ = uVar39;
                           auVar17._8_8_ = 0;
                           auVar17._0_8_ = uVar32;
                           lVar38 = SUB168(auVar9 * auVar17, 8);
                           iVar24 = SUB164(auVar9 * auVar17, 8);
                           uVar26 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar38 * 4 );
                           if (uVar26 != 0) {
                              uVar35 = 0;
                              do {
                                 if (( local_68 == uVar26 ) && ( uVar25 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar38 * 8 ) + 0x10 ) )) {
                                    ( *_glad_glDeleteTextures )(1, local_58);
                                    puVar29 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, local_58);
                                    *(long*)( lVar34 + 0x108 ) = *(long*)( lVar34 + 0x108 ) - ( ulong ) * puVar29;
                                    HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, local_58);
                                    goto LAB_001127d3;
                                 }

                                 uVar35 = uVar35 + 1;
                                 auVar10._8_8_ = 0;
                                 auVar10._0_8_ = ( iVar24 + 1 ) * uVar28;
                                 auVar18._8_8_ = 0;
                                 auVar18._0_8_ = uVar39;
                                 lVar38 = SUB168(auVar10 * auVar18, 8);
                                 uVar26 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar38 * 4 );
                                 iVar24 = SUB164(auVar10 * auVar18, 8);
                              }
 while ( ( uVar26 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar26 * uVar28,auVar19._8_8_ = 0,auVar19._0_8_ = uVar39,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar24 ) - SUB164(auVar11 * auVar19, 8) ) * uVar28,auVar20._8_8_ = 0,auVar20._0_8_ = uVar39,uVar35 <= SUB164(auVar12 * auVar20, 8) );
                           }

                        }

                        _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
                        LAB_001127d3:*(undefined4*)( (long)puVar36 + 0x74 ) = 0;
                     }

                     local_50[0] = 0;
                     plVar1 = (long*)( puVar36[4] + -0x10 );
                     if (puVar36[4] != 0) {
                        do {
                           lVar34 = *plVar1;
                           if (lVar34 == 0) goto LAB_0011211c;
                           LOCK();
                           lVar38 = *plVar1;
                           bVar42 = lVar34 == lVar38;
                           if (bVar42) {
                              *plVar1 = lVar34 + 1;
                              lVar38 = lVar34;
                           }

                           UNLOCK();
                        }
 while ( !bVar42 );
                        if (lVar38 != -1) {
                           local_50[0] = puVar36[4];
                        }

                     }

                     LAB_0011211c:lVar34 = puVar40[4];
                     lVar38 = 0;
                     if (lVar34 != 0) {
                        plVar1 = (long*)( lVar34 + -0x10 );
                        do {
                           lVar34 = *plVar1;
                           if (lVar34 == 0) {
                              lVar38 = puVar40[4];
                              lVar34 = 0;
                              goto LAB_00112150;
                           }

                           LOCK();
                           lVar37 = *plVar1;
                           bVar42 = lVar34 == lVar37;
                           if (bVar42) {
                              *plVar1 = lVar34 + 1;
                              lVar37 = lVar34;
                           }

                           UNLOCK();
                        }
 while ( !bVar42 );
                        lVar38 = puVar40[4];
                        lVar34 = 0;
                        if (lVar37 != -1) {
                           lVar34 = lVar38;
                        }

                     }

                     LAB_00112150:*puVar36 = *puVar40;
                     *(undefined2*)( puVar36 + 1 ) = *(undefined2*)( puVar40 + 1 );
                     *(undefined1*)( (long)puVar36 + 10 ) = *(undefined1*)( (long)puVar40 + 10 );
                     puVar36[2] = puVar40[2];
                     if (lVar38 != puVar36[4]) {
                        CowData<RID>::_ref((CowData<RID>*)( puVar36 + 4 ), (CowData*)( puVar40 + 4 ));
                     }

                     if (puVar36[5] != puVar40[5]) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( puVar36 + 5 ), (CowData*)( puVar40 + 5 ));
                     }

                     uVar33 = puVar40[8];
                     uVar21 = puVar40[9];
                     uVar22 = puVar40[7];
                     pIVar3 = (Image*)puVar36[0x11];
                     puVar36[6] = puVar40[6];
                     puVar36[7] = uVar22;
                     puVar36[8] = uVar33;
                     puVar36[9] = uVar21;
                     *(undefined4*)( puVar36 + 10 ) = *(undefined4*)( puVar40 + 10 );
                     uVar33 = *(undefined8*)( (long)puVar40 + 0x5c );
                     *(undefined8*)( (long)puVar36 + 0x54 ) = *(undefined8*)( (long)puVar40 + 0x54 );
                     *(undefined8*)( (long)puVar36 + 0x5c ) = uVar33;
                     pIVar4 = (Image*)puVar40[0x11];
                     *(undefined8*)( (long)puVar36 + 100 ) = *(undefined8*)( (long)puVar40 + 100 );
                     *(undefined4*)( (long)puVar36 + 0x6c ) = *(undefined4*)( (long)puVar40 + 0x6c );
                     *(undefined2*)( puVar36 + 0xe ) = *(undefined2*)( puVar40 + 0xe );
                     *(undefined1*)( (long)puVar36 + 0x72 ) = *(undefined1*)( (long)puVar40 + 0x72 );
                     *(undefined4*)( (long)puVar36 + 0x74 ) = *(undefined4*)( (long)puVar40 + 0x74 );
                     *(undefined2*)( puVar36 + 0xf ) = *(undefined2*)( puVar40 + 0xf );
                     puVar36[0x10] = puVar40[0x10];
                     if (pIVar4 != pIVar3) {
                        puVar36[0x11] = pIVar4;
                        if (( pIVar4 != (Image*)0x0 ) && ( cVar23 = cVar23 == '\0' )) {
                           puVar36[0x11] = 0;
                        }

                        if (( pIVar3 != (Image*)0x0 ) && ( cVar23 = cVar23 != '\0' )) {
                           memdelete<Image>(pIVar3);
                        }

                     }

                     if (puVar36[0x13] != puVar40[0x13]) {
                        CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)( puVar36 + 0x13 ), (CowData*)( puVar40 + 0x13 ));
                     }

                     lVar38 = local_50[0];
                     *(undefined1*)( puVar36 + 0x14 ) = *(undefined1*)( puVar40 + 0x14 );
                     for (int i = 0; i < 5; i++) {
                        puVar36[( i + 21 )] = puVar40[( i + 21 )];
                     }

                     puVar27 = (ulong*)puVar40[0x1b];
                     puVar36[0x1a] = puVar40[0x1a];
                     puVar36[0x1b] = puVar27;
                     puVar36[0x1c] = puVar40[0x1c];
                     if (puVar36[4] != local_50[0]) {
                        CowData<RID>::_ref((CowData<RID>*)( puVar36 + 4 ), (CowData*)local_50);
                        puVar27 = (ulong*)puVar36[0x1b];
                     }

                     if (puVar27 != (ulong*)0x0) {
                        *puVar27 = param_2;
                     }

                     if (( lVar38 != 0 ) && ( lVar37 = 0 ),0 < *(long*)( lVar38 + -8 )) {
                        do {
                           lVar2 = lVar37 * 8;
                           lVar37 = lVar37 + 1;
                           ( **(code**)( *(long*)this + 0xa0 ) )(this, *(undefined8*)( lVar38 + lVar2 ), param_2);
                        }
 while ( lVar37 < *(long*)( lVar38 + -8 ) );
                     }

                     if (( lVar34 != 0 ) && ( lVar38 = 0 ),0 < *(long*)( lVar34 + -8 )) {
                        do {
                           lVar37 = lVar38 * 8;
                           lVar38 = lVar38 + 1;
                           ( **(code**)( *(long*)this + 0xa0 ) )(this, *(undefined8*)( lVar34 + lVar37 ), param_2);
                        }
 while ( lVar38 < *(long*)( lVar34 + -8 ) );
                     }

                     __mutex = (pthread_mutex_t*)( this + 0x108 );
                     iVar24 = pthread_mutex_lock(__mutex);
                     if (iVar24 != 0) {
                        /* WARNING: Subroutine does not return */
                        std::__throw_system_error(iVar24);
                     }

                     if (uVar41 < *(uint*)( this + 0xf4 )) {
                        uVar28 = ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 );
                        lVar38 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0;
                        lVar37 = *(long*)( *(long*)( this + 0xe0 ) + uVar28 * 8 ) + lVar38;
                        if (*(int*)( lVar37 + 0xe8 ) < 0) {
                           pthread_mutex_unlock(__mutex);
                           _err_print_error(&_LC65, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                        }
 else if (iVar31 == *(int*)( lVar37 + 0xe8 )) {
                           CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)( lVar37 + 0x98 ));
                           if (( *(long*)( lVar37 + 0x88 ) != 0 ) && ( cVar23 = cVar23 != '\0' )) {
                              memdelete<Image>(*(Image**)( lVar37 + 0x88 ));
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)( lVar37 + 0x28 ));
                           if (*(long*)( lVar37 + 0x20 ) != 0) {
                              LOCK();
                              plVar1 = (long*)( *(long*)( lVar37 + 0x20 ) + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar2 = *(long*)( lVar37 + 0x20 );
                                 *(undefined8*)( lVar37 + 0x20 ) = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                           }

                           lVar37 = *(long*)( this + 0xe8 );
                           *(undefined4*)( *(long*)( *(long*)( this + 0xe0 ) + uVar28 * 8 ) + 0xe8 + lVar38 ) = 0xffffffff;
                           uVar25 = *(int*)( this + 0xf8 ) - 1;
                           *(uint*)( this + 0xf8 ) = uVar25;
                           *(uint*)( *(long*)( lVar37 + ( (ulong)uVar25 / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 ) + ( (ulong)uVar25 % ( ulong ) * (uint*)( this + 0xf0 ) ) * 4 ) = uVar41;
                           pthread_mutex_unlock(__mutex);
                        }
 else {
                           pthread_mutex_unlock(__mutex);
                           _err_print_error(&_LC65, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
                        }

                     }
 else {
                        pthread_mutex_unlock(__mutex);
                        _err_print_error(&_LC65, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
                     }

                     if (( *(long*)( this + 0x138 ) != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
                        uVar32 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
                        lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
                        uVar28 = param_2 * 0x3ffff - 1;
                        uVar28 = ( uVar28 ^ uVar28 >> 0x1f ) * 0x15;
                        uVar28 = ( uVar28 ^ uVar28 >> 0xb ) * 0x41;
                        uVar28 = uVar28 >> 0x16 ^ uVar28;
                        uVar39 = uVar28 & 0xffffffff;
                        if ((int)uVar28 == 0) {
                           uVar39 = 1;
                        }

                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = uVar39 * lVar38;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = uVar32;
                        lVar37 = SUB168(auVar5 * auVar13, 8);
                        uVar41 = *(uint*)( *(long*)( this + 0x140 ) + lVar37 * 4 );
                        iVar31 = SUB164(auVar5 * auVar13, 8);
                        if (uVar41 != 0) {
                           uVar25 = 0;
                           while (( uVar41 != (uint)uVar39 || ( param_2 != *(ulong*)( *(long*)( *(long*)( this + 0x138 ) + lVar37 * 8 ) + 0x10 ) ) )) {
                              uVar25 = uVar25 + 1;
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = ( ulong )(iVar31 + 1) * lVar38;
                              auVar14._8_8_ = 0;
                              auVar14._0_8_ = uVar32;
                              lVar37 = SUB168(auVar6 * auVar14, 8);
                              uVar41 = *(uint*)( *(long*)( this + 0x140 ) + lVar37 * 4 );
                              iVar31 = SUB164(auVar6 * auVar14, 8);
                              if (( uVar41 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar41 * lVar38,auVar15._8_8_ = 0,auVar15._0_8_ = uVar32,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + iVar31 ) - SUB164(auVar7 * auVar15, 8)) * lVar38,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,SUB164(auVar8 * auVar16, 8) < uVar25) goto LAB_001125bb;
                           }
;
                           this[0x160] = (TextureStorage)0x1;
                        }

                     }

                     LAB_001125bb:if (lVar34 != 0) {
                        plVar1 = (long*)( lVar34 + -0x10 );
                        LOCK();
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           Memory::free_static(plVar1, false);
                        }

                     }

                     if (local_50[0] != 0) {
                        LOCK();
                        plVar1 = (long*)( local_50[0] + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              Memory::free_static((void*)( local_50[0] + -0x10 ), false);
                              return;
                           }

                           goto LAB_00112ab9;
                        }

                     }

                  }

                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar33 = 0x55e;
                  pcVar30 = "Condition \"tex_from->is_proxy\" is true.";
                  goto LAB_001128be;
               }

               goto LAB_00112ab9;
            }

            if (iVar31 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar33 = 0x55d;
            pcVar30 = "Parameter \"tex_from\" is null.";
            goto LAB_001128be;
         }

         goto LAB_00112ab9;
      }

      if (*(int*)( puVar36 + 0x1d ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar33 = 0x55a;
      pcVar30 = "Parameter \"tex_to\" is null.";
      LAB_001128be:_err_print_error("texture_replace", "drivers/gles3/storage/texture_storage.cpp", uVar33, pcVar30, 0, 0);
      return;
   }

   LAB_00112ab9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      LAB_00112c86:lVar10 = 0;
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
      if (lVar10 == 0) goto LAB_00112c86;
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

      FUN_0011b852();
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
         goto LAB_00112bdc;
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

   LAB_00112bdc:puVar8[-1] = param_1;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_2d_layer_get(RID, int) const */undefined8 *GLES3::TextureStorage::texture_2d_layer_get(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   long *plVar1;
   char *pcVar2;
   char cVar3;
   long lVar4;
   Rect2 *pRVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   bool bVar8;
   undefined4 local_b0;
   undefined4 local_ac;
   Image *local_a8;
   long local_a0;
   long local_98;
   long local_90;
   undefined1 local_88[8];
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xf4 ) )) {
      lVar7 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_2 + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 8 );
      if (*(int*)( lVar7 + 0xe8 ) == (int)( param_3 >> 0x20 )) {
         local_80 = 0;
         lVar4 = Image::get_image_data_size(*(undefined4*)( lVar7 + 0x44 ), *(undefined4*)( lVar7 + 0x48 ), 5, 0);
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, lVar4 * 2);
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_80);
         lVar6 = local_80;
         ( *_glad_glGenFramebuffers )(1, &local_b0);
         ( *_glad_glGenTextures )(1, &local_ac);
         ( *_glad_glBindFramebuffer )(0x8d40, local_b0);
         ( *_glad_glBindTexture )(0xde1, local_ac);
         ( *_glad_glTexImage2D )(0xde1, 0, 0x1908, *(undefined4*)( lVar7 + 0x44 ), *(undefined4*)( lVar7 + 0x48 ), 0, 0x1908, 0x1401, 0);
         ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2601);
         ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
         ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, local_ac, 0);
         ( *_glad_glDepthMask )(0);
         ( *_glad_glDisable )(0xb71);
         ( *_glad_glDisable )(0xb44);
         ( *_glad_glDisable )(0xbe2);
         ( *_glad_glDepthFunc )(0x203);
         ( *_glad_glColorMask )(1, 1, 1, 1);
         ( *_glad_glActiveTexture )(0x84c0);
         ( *_glad_glBindTexture )(0x8c1a, *(undefined4*)( lVar7 + 0x74 ));
         ( *_glad_glViewport )(0, 0, *(undefined4*)( lVar7 + 0x44 ), *(undefined4*)( lVar7 + 0x48 ));
         ( *_glad_glClearColor )();
         ( *_glad_glClear )(0x4000);
         pRVar5 = (Rect2*)GLES3::CopyEffects::get_singleton();
         local_68 = __LC254;
         uStack_60 = _LC298;
         local_58 = Rect2i::operator_cast_to_Rect2((Rect2i*)&local_68);
         GLES3::CopyEffects::copy_to_rect_3d(pRVar5, (float)param_4, (int)local_58, 0.0);
         ( *_glad_glReadPixels )(0, 0, *(undefined4*)( lVar7 + 0x44 ), *(undefined4*)( lVar7 + 0x48 ), 0x1908, 0x1401, lVar6);
         ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
         ( *_glad_glDeleteTextures )(1, &local_ac);
         ( *_glad_glDeleteFramebuffers )(1, &local_b0);
         CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, lVar4);
         if (local_80 == 0) {
            _err_print_error("texture_2d_layer_get", "drivers/gles3/storage/texture_storage.cpp", 0x4e7, "Condition \"data.is_empty()\" is true. Returning: Ref<Image>()", 0, 0);
            *param_1 = 0;
         }
 else {
            Image::create_from_data(&local_a8, *(undefined4*)( lVar7 + 0x30 ), *(undefined4*)( lVar7 + 0x34 ), 0, 5, local_88);
            cVar3 = Image::is_empty();
            if (cVar3 == '\0') {
               if (*(int*)( lVar7 + 0x4c ) != 5) {
                  cVar3 = Image::is_format_compressed();
                  if (cVar3 == '\0') {
                     Image::convert(local_a8);
                  }

               }

               if (1 < *(int*)( lVar7 + 0x3c )) {
                  Image::generate_mipmaps(SUB81(local_a8, 0));
               }

               *param_1 = 0;
               if (local_a8 == (Image*)0x0) goto LAB_0011315a;
               *param_1 = local_a8;
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *param_1 = 0;
               }

            }
 else {
               if (( *(long*)( lVar7 + 0x28 ) == 0 ) || ( *(uint*)( *(long*)( lVar7 + 0x28 ) + -8 ) < 2 )) {
                  local_a0 = 0;
                  local_78 = "with no path";
                  local_70 = 0xc;
                  String::parse_latin1((StrRange*)&local_a0);
               }
 else {
                  local_90 = 0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar7 + 0x28 ));
                  local_78 = "with path \'%s\'";
                  local_98 = 0;
                  local_70 = 0xe;
                  String::parse_latin1((StrRange*)&local_98);
                  vformat<String>(&local_a0, (StrRange*)&local_98, (CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               }

               local_90 = 0;
               plVar1 = (long*)( local_a0 + -0x10 );
               if (local_a0 != 0) {
                  do {
                     lVar7 = *plVar1;
                     if (lVar7 == 0) goto LAB_0011307f;
                     LOCK();
                     lVar6 = *plVar1;
                     bVar8 = lVar7 == lVar6;
                     if (bVar8) {
                        *plVar1 = lVar7 + 1;
                        lVar6 = lVar7;
                     }

                     UNLOCK();
                  }
 while ( !bVar8 );
                  if (lVar6 != -1) {
                     local_90 = local_a0;
                  }

               }

               LAB_0011307f:local_98 = 0;
               local_78 = "Texture %s has no data.";
               local_70 = 0x17;
               String::parse_latin1((StrRange*)&local_98);
               vformat<String>(&local_78, (StrRange*)&local_98, &local_90);
               _err_print_error("texture_2d_layer_get", "drivers/gles3/storage/texture_storage.cpp", 0x4eb, "Method/function failed. Returning: Ref<Image>()", &local_78, 0, 0);
               pcVar2 = local_78;
               if (local_78 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_78 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_78 = (char*)0x0;
                     Memory::free_static(pcVar2 + -0x10, false);
                  }

               }

               lVar7 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

               lVar7 = local_90;
               if (local_90 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_90 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

               lVar7 = local_a0;
               *param_1 = 0;
               if (local_a0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_a0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a0 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

            }

            if (local_a8 != (Image*)0x0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  memdelete<Image>(local_a8);
               }

            }

         }

         LAB_0011315a:lVar7 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar1 = (long*)( local_80 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

         goto LAB_00113185;
      }

      if (*(int*)( lVar7 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_2d_layer_get", "drivers/gles3/storage/texture_storage.cpp", 0x4b8, "Parameter \"texture\" is null.", 0, 0);
   *param_1 = 0;
   LAB_00113185:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_2d_get(RID) const */long *GLES3::TextureStorage::texture_2d_get(long *param_1, long param_2, ulong param_3) {
   long *plVar1;
   char cVar2;
   long lVar3;
   Rect2 *pRVar4;
   long lVar5;
   long lVar6;
   int iVar7;
   int iVar8;
   Image *pIVar9;
   Image *pIVar10;
   long lVar11;
   long in_FS_OFFSET;
   undefined4 uVar12;
   undefined4 uVar13;
   undefined4 local_a8;
   undefined4 local_a4;
   long local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined1 local_88[8];
   long local_80;
   Image *local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xf4 ) )) {
      lVar11 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_2 + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 8 );
      if (*(int*)( lVar11 + 0xe8 ) == (int)( param_3 >> 0x20 )) {
         if (( *(long*)( lVar11 + 0x88 ) != 0 ) && ( *(char*)( lVar11 + 10 ) == '\0' )) {
            *param_1 = 0;
            if (*(long*)( lVar11 + 0x88 ) != 0) {
               *param_1 = *(long*)( lVar11 + 0x88 );
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *param_1 = 0;
               }

            }

            goto LAB_001138b8;
         }

         uVar12 = *(undefined4*)( lVar11 + 0x48 );
         uVar13 = *(undefined4*)( lVar11 + 0x44 );
         if ((char)RasterizerGLES3::gles_over_gl == '\0') {
            pIVar9 = (Image*)0x0;
            LAB_001134b6:local_80 = 0;
            lVar3 = Image::get_image_data_size(uVar13, uVar12, 5, 0);
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, lVar3 * 2);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_80);
            lVar6 = local_80;
            ( *_glad_glGenFramebuffers )(1, &local_a8);
            ( *_glad_glGenTextures )(1, &local_a4);
            ( *_glad_glBindFramebuffer )(0x8d40, local_a8);
            ( *_glad_glBindTexture )(0xde1, local_a4);
            ( *_glad_glTexImage2D )(0xde1, 0, 0x1908, *(undefined4*)( lVar11 + 0x44 ), *(undefined4*)( lVar11 + 0x48 ), 0, 0x1908, 0x1401, 0);
            ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2601);
            ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
            ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, local_a4, 0);
            ( *_glad_glDepthMask )(0);
            ( *_glad_glDisable )(0xb71);
            ( *_glad_glDisable )(0xb44);
            ( *_glad_glDisable )(0xbe2);
            ( *_glad_glDepthFunc )(0x206);
            ( *_glad_glColorMask )(1, 1, 1, 1);
            ( *_glad_glActiveTexture )(0x84c0);
            ( *_glad_glBindTexture )(0xde1, *(undefined4*)( lVar11 + 0x74 ));
            ( *_glad_glViewport )(0, 0, *(undefined4*)( lVar11 + 0x44 ), *(undefined4*)( lVar11 + 0x48 ));
            uVar12 = 0;
            uVar13 = 0;
            ( *_glad_glClearColor )();
            ( *_glad_glClear )(0x4000);
            pRVar4 = (Rect2*)GLES3::CopyEffects::get_singleton();
            local_68 = __LC254;
            uStack_60 = _LC298;
            local_58 = Rect2i::operator_cast_to_Rect2((Rect2i*)&local_68);
            local_50 = CONCAT44(uVar13, uVar12);
            GLES3::CopyEffects::copy_to_rect(pRVar4);
            ( *_glad_glReadPixels )(0, 0, *(undefined4*)( lVar11 + 0x44 ), *(undefined4*)( lVar11 + 0x48 ), 0x1908, 0x1401, lVar6);
            ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
            ( *_glad_glDeleteTextures )(1, &local_a4);
            ( *_glad_glDeleteFramebuffers )(1, &local_a8);
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, lVar3);
            if (local_80 == 0) {
               _err_print_error("texture_2d_get", "drivers/gles3/storage/texture_storage.cpp", 0x49c, "Condition \"data.is_empty()\" is true. Returning: Ref<Image>()", 0, 0);
               *param_1 = 0;
            }
 else {
               Image::create_from_data((CowData<char32_t>*)&local_78, *(undefined4*)( lVar11 + 0x44 ), *(undefined4*)( lVar11 + 0x48 ), 0, 5, local_88);
               pIVar10 = local_78;
               if (pIVar9 == local_78) {
                  LAB_00113757:pIVar9 = pIVar10;
                  if (( local_78 != (Image*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
                     memdelete<Image>(local_78);
                  }

               }
 else {
                  if (local_78 != (Image*)0x0) {
                     cVar2 = RefCounted::reference();
                     if (cVar2 == '\0') {
                        pIVar10 = (Image*)0x0;
                     }

                     if (pIVar9 != (Image*)0x0) goto LAB_00113742;
                     goto LAB_00113757;
                  }

                  if (pIVar9 != (Image*)0x0) {
                     LAB_00113742:cVar2 = RefCounted::unreference();
                     if (cVar2 != '\0') {
                        memdelete<Image>(pIVar9);
                     }

                     goto LAB_00113757;
                  }

               }

               cVar2 = Image::is_empty();
               if (cVar2 == '\0') {
                  if (( *(int*)( lVar11 + 0x4c ) != 5 ) && ( cVar2 = cVar2 == '\0' )) {
                     Image::convert(pIVar9);
                  }

                  if (1 < *(int*)( lVar11 + 0x3c )) {
                     Image::generate_mipmaps(SUB81(pIVar9, 0));
                  }

                  lVar6 = local_80;
                  if (local_80 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_80 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_80 = 0;
                        Memory::free_static((void*)( lVar6 + -0x10 ), false);
                     }

                  }

                  goto LAB_00113bd4;
               }

               if (( *(long*)( lVar11 + 0x28 ) == 0 ) || ( *(uint*)( *(long*)( lVar11 + 0x28 ) + -8 ) < 2 )) {
                  local_a0 = 0;
                  local_78 = (Image*)0x11b50c;
                  local_70 = 0xc;
                  String::parse_latin1((StrRange*)&local_a0);
               }
 else {
                  local_78 = (Image*)0x0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar11 + 0x28 ));
                  local_90 = 0;
                  String::parse_latin1((String*)&local_90, "with path \'%s\'");
                  vformat<String>(&local_a0, (String*)&local_90, (CowData<char32_t>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               }

               local_90 = 0;
               if (local_a0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_a0);
               }

               local_98 = 0;
               local_78 = (Image*)0x11b528;
               local_70 = 0x17;
               String::parse_latin1((StrRange*)&local_98);
               vformat<String>((CowData<char32_t>*)&local_78, (StrRange*)&local_98, (CowData<char32_t>*)&local_90);
               _err_print_error("texture_2d_get", "drivers/gles3/storage/texture_storage.cpp", 0x4a0, "Method/function failed. Returning: Ref<Image>()", (CowData<char32_t>*)&local_78, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               *param_1 = 0;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
            }

            joined_r0x00113b5c:if (local_80 != 0) {
               LAB_00113879:lVar11 = local_80;
               LOCK();
               plVar1 = (long*)( local_80 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_80 = 0;
                  Memory::free_static((void*)( lVar11 + -0x10 ), false);
               }

            }

            if (pIVar9 == (Image*)0x0) goto LAB_001138b8;
         }
 else {
            local_80 = 0;
            lVar3 = Image::get_image_data_size(uVar13, uVar12, *(undefined4*)( lVar11 + 0x50 ), 1 < *(int*)( lVar11 + 0x3c ));
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, lVar3 * 2);
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_80);
            lVar6 = local_80;
            ( *_glad_glActiveTexture )(0x84c0);
            ( *_glad_glBindTexture )(*(undefined4*)( lVar11 + 0x5c ), *(undefined4*)( lVar11 + 0x74 ));
            ( *_glad_glBindBuffer )(0x88eb, 0);
            iVar7 = 0;
            if (0 < *(int*)( lVar11 + 0x3c )) {
               do {
                  while (lVar5 = Image::get_image_mipmap_offset(*(undefined4*)( lVar11 + 0x44 ), *(undefined4*)( lVar11 + 0x48 ), *(undefined4*)( lVar11 + 0x50 ), iVar7),*(char*)( lVar11 + 0x70 ) == '\0') {
                     ( *_glad_glPixelStorei )(0xd05, 1);
                     iVar8 = iVar7 + 1;
                     ( *_glad_glGetTexImage )(*(undefined4*)( lVar11 + 0x5c ), iVar7, *(undefined4*)( lVar11 + 0x60 ), *(undefined4*)( lVar11 + 0x68 ), lVar6 + lVar5);
                     iVar7 = iVar8;
                     if (*(int*)( lVar11 + 0x3c ) <= iVar8) goto LAB_001139d7;
                  }
;
                  ( *_glad_glPixelStorei )(0xd05, 4);
                  ( *_glad_glGetCompressedTexImage )(*(undefined4*)( lVar11 + 0x5c ), iVar7, lVar6 + lVar5);
                  iVar7 = iVar7 + 1;
               }
 while ( iVar7 < *(int*)( lVar11 + 0x3c ) );
            }

            LAB_001139d7:CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_80, lVar3);
            if (local_80 == 0) {
               _err_print_error("texture_2d_get", "drivers/gles3/storage/texture_storage.cpp", 0x460, "Condition \"data.is_empty()\" is true. Returning: Ref<Image>()", 0, 0);
               *param_1 = 0;
               pIVar9 = (Image*)0x0;
               if (local_80 == 0) goto LAB_001138b8;
               goto LAB_00113879;
            }

            Image::create_from_data((CowData<char32_t>*)&local_78, *(undefined4*)( lVar11 + 0x44 ), *(undefined4*)( lVar11 + 0x48 ), 1 < *(int*)( lVar11 + 0x3c ), *(undefined4*)( lVar11 + 0x50 ), local_88);
            pIVar9 = local_78;
            if (local_78 != (Image*)0x0) {
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  pIVar9 = (Image*)0x0;
               }

               if (( local_78 != (Image*)0x0 ) && ( cVar2 = cVar2 != '\0' )) {
                  memdelete<Image>(local_78);
               }

            }

            cVar2 = Image::is_empty();
            if (cVar2 != '\0') {
               if (( *(long*)( lVar11 + 0x28 ) == 0 ) || ( *(uint*)( *(long*)( lVar11 + 0x28 ) + -8 ) < 2 )) {
                  local_a0 = 0;
                  local_78 = (Image*)0x11b50c;
                  local_70 = 0xc;
                  String::parse_latin1((StrRange*)&local_a0);
               }
 else {
                  local_78 = (Image*)0x0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar11 + 0x28 ));
                  local_90 = 0;
                  String::parse_latin1((String*)&local_90, "with path \'%s\'");
                  vformat<String>(&local_a0, (String*)&local_90, (CowData<char32_t>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               }

               local_90 = 0;
               if (local_a0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)&local_a0);
               }

               local_98 = 0;
               local_78 = (Image*)0x11b528;
               local_70 = 0x17;
               String::parse_latin1((StrRange*)&local_98);
               vformat<String>((CowData<char32_t>*)&local_78, (StrRange*)&local_98, (CowData<char32_t>*)&local_90);
               _err_print_error("texture_2d_get", "drivers/gles3/storage/texture_storage.cpp", 0x464, "Method/function failed. Returning: Ref<Image>()", (CowData<char32_t>*)&local_78, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               *param_1 = 0;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
               goto joined_r0x00113b5c;
            }

            if (( *(int*)( lVar11 + 0x4c ) != *(int*)( lVar11 + 0x50 ) ) && ( cVar2 = cVar2 == '\0' )) {
               Image::convert(pIVar9, *(undefined4*)( lVar11 + 0x4c ));
            }

            CowData<unsigned_char>::_unref((CowData<unsigned_char>*)&local_80);
            if ((char)RasterizerGLES3::gles_over_gl == '\0') {
               uVar12 = *(undefined4*)( lVar11 + 0x48 );
               uVar13 = *(undefined4*)( lVar11 + 0x44 );
               goto LAB_001134b6;
            }

            LAB_00113bd4:lVar6 = Engine::get_singleton();
            if (( *(char*)( lVar6 + 0xc0 ) != '\0' ) && ( *(char*)( lVar11 + 10 ) == '\0' )) {
               Ref<Image>::operator =((Ref<Image>*)( lVar11 + 0x88 ), (Ref*)pIVar9);
            }

            *param_1 = (long)pIVar9;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *param_1 = 0;
            }

         }

         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            memdelete<Image>(pIVar9);
         }

         goto LAB_001138b8;
      }

      if (*(int*)( lVar11 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_2d_get", "drivers/gles3/storage/texture_storage.cpp", 0x438, "Parameter \"texture\" is null.", 0, 0);
   *param_1 = 0;
   LAB_001138b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00114948) *//* WARNING: Removing unreachable block (ram,0x00114989) *//* WARNING: Removing unreachable block (ram,0x0011499c) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_texture_set_3d_data(RID, Vector<Ref<Image> > const&, bool) */void GLES3::TextureStorage::_texture_set_3d_data(TextureStorage *this, ulong param_2, long param_3, byte param_4) {
   long *plVar1;
   int iVar2;
   int iVar3;
   code *pcVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   Image *pIVar10;
   char *pcVar11;
   undefined8 uVar12;
   Image *pIVar13;
   undefined8 *puVar14;
   long lVar15;
   byte bVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   long in_FS_OFFSET;
   int local_b8;
   int local_a8;
   int local_a4;
   undefined4 local_90;
   undefined4 local_8c;
   undefined4 local_88;
   Image *local_80[2];
   long local_70;
   Object *local_68;
   long local_60;
   undefined8 local_50;
   undefined4 local_48;
   undefined4 uStack_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar15 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar15 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( lVar15 + 0x72 ) == '\0') {
            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001149ef;
            uVar12 = 0x673;
            pcVar11 = "Condition \"!texture->active\" is true.";
            goto LAB_00114819;
         }

         if (*(char*)( lVar15 + 10 ) != '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar12 = 0x674;
               pcVar11 = "Condition \"texture->is_render_target\" is true.";
               goto LAB_00114819;
            }

            goto LAB_001149ef;
         }

         if (*(int*)( lVar15 + 0x5c ) != 0x806f) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar12 = 0x675;
               pcVar11 = "Condition \"texture->target != 0x806F\" is true.";
               goto LAB_00114819;
            }

            goto LAB_001149ef;
         }

         if (*(long*)( param_3 + 8 ) == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar12 = 0x676;
               pcVar11 = "Condition \"p_data.is_empty()\" is true.";
               goto LAB_00114819;
            }

            goto LAB_001149ef;
         }

         lVar19 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         if (lVar19 < 1) goto LAB_00114663;
         Image::get_format();
         if (*(long*)( param_3 + 8 ) != 0) {
            lVar19 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
            if (lVar19 < 1) goto LAB_00114663;
            _get_gl_image_and_format(local_80, this);
            if (local_80[0] == (Image*)0x0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  uVar12 = 0x67f;
                  pcVar11 = "Condition \"img.is_null()\" is true.";
                  goto LAB_00114819;
               }

               goto LAB_001149ef;
            }

            ( *_glad_glActiveTexture )(0x84c0);
            ( *_glad_glBindTexture )(*(undefined4*)( lVar15 + 0x5c ), *(undefined4*)( lVar15 + 0x74 ));
            _texture_set_swizzle(this, lVar15, *(undefined4*)( lVar15 + 0x50 ));
            pcVar11 = Config::singleton;
            if (*(int*)( lVar15 + 0x3c ) < 2) {
               if (*(int*)( lVar15 + 0xe0 ) != 1) {
                  *(undefined4*)( lVar15 + 0xe0 ) = 1;
                  pcVar11 = Config::singleton;
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2801, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2800, 0x2600);
                  ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x813c, 0);
                  uVar12 = 0;
                  uVar8 = *(undefined4*)( lVar15 + 0x5c );
                  goto LAB_001140de;
               }

            }
 else if (*(int*)( lVar15 + 0xe0 ) != 3) {
               *(undefined4*)( lVar15 + 0xe0 ) = 3;
               ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2801, ( -(uint)(*pcVar11 == '\0') & 2 ) + 0x2700);
               ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2800, 0x2600);
               ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x813c, 0);
               uVar12 = 1000;
               uVar8 = *(undefined4*)( lVar15 + 0x5c );
               LAB_001140de:( *_glad_glTexParameteri )(uVar8, 0x813d, uVar12);
               if (pcVar11[0x7b] != '\0') {
                  ( *_glad_glTexParameterf )(_LC55, *(undefined4*)( lVar15 + 0x5c ));
               }

            }

            if (*(int*)( lVar15 + 0xe4 ) != 2) {
               *(undefined4*)( lVar15 + 0xe4 ) = 2;
               ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2803, 0x2901);
               ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x8072, 0x2901);
               ( *_glad_glTexParameteri )(*(undefined4*)( lVar15 + 0x5c ), 0x2802, 0x2901);
            }

            local_70 = 0;
            if (*(long*)( param_3 + 8 ) == 0) {
               lVar19 = 0;
            }
 else {
               lVar19 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
            }

            CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)&local_70, lVar19);
            lVar19 = *(long*)( param_3 + 8 );
            lVar17 = local_70;
            if (lVar19 != 0) {
               lVar18 = 0;
               do {
                  if (*(long*)( lVar19 + -8 ) <= lVar18) break;
                  pIVar13 = *(Image**)( lVar19 + lVar18 * 8 );
                  if (( pIVar13 != (Image*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                     pIVar13 = (Image*)0x0;
                  }

                  iVar7 = Image::get_format();
                  if (iVar7 != *(int*)( lVar15 + 0x4c )) {
                     ( **(code**)( *(long*)pIVar13 + 0x198 ) )(&local_68, pIVar13, 0);
                     if (local_68 == (Object*)0x0) {
                        LAB_00114309:pIVar10 = (Image*)0x0;
                        LAB_0011430c:cVar6 = RefCounted::unreference();
                        if (cVar6 != '\0') {
                           memdelete<Image>(pIVar13);
                        }

                        pIVar13 = pIVar10;
                        if (local_68 != (Object*)0x0) goto LAB_0011432d;
                     }
 else {
                        pIVar10 = (Image*)__dynamic_cast(local_68, &Object::typeinfo, &Image::typeinfo);
                        if (pIVar13 != pIVar10) {
                           if (( pIVar10 != (Image*)0x0 ) && ( cVar6 = cVar6 == '\0' )) goto LAB_00114309;
                           goto LAB_0011430c;
                        }

                        LAB_0011432d:cVar6 = RefCounted::unreference();
                        pOVar5 = local_68;
                        pIVar13 = pIVar10;
                        if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                           ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                           Memory::free_static(pOVar5, false);
                        }

                     }

                     Image::convert(pIVar13, *(undefined4*)( lVar15 + 0x4c ));
                  }

                  if (lVar17 == 0) {
                     lVar19 = 0;
                     LAB_00114383:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar18, lVar19, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar4 = (code*)invalidInstructionException();
                     ( *pcVar4 )();
                  }

                  lVar19 = *(long*)( lVar17 + -8 );
                  if (lVar19 <= lVar18) goto LAB_00114383;
                  CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)&local_70);
                  lVar17 = local_70;
                  puVar14 = (undefined8*)( lVar18 * 8 + local_70 );
                  pIVar10 = (Image*)*puVar14;
                  if (pIVar13 != pIVar10) {
                     *puVar14 = pIVar13;
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        *puVar14 = 0;
                     }

                     if (( pIVar10 != (Image*)0x0 ) && ( cVar6 = cVar6 != '\0' )) {
                        memdelete<Image>(pIVar10);
                     }

                  }

                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     memdelete<Image>(pIVar13);
                  }

                  lVar18 = lVar18 + 1;
                  lVar19 = *(long*)( param_3 + 8 );
               }
 while ( lVar19 != 0 );
            }

            ( *_glad_glPixelStorei )(0xcf5, 1);
            iVar7 = *(int*)( lVar15 + 0x38 );
            if (lVar17 != 0) {
               lVar19 = *(long*)( lVar17 + -8 );
               if (lVar19 < 1) goto LAB_00114663;
               uVar8 = Image::get_height();
               lVar19 = *(long*)( lVar17 + -8 );
               if (lVar19 < 1) goto LAB_00114663;
               lVar19 = 0;
               uVar9 = Image::get_width();
               local_50 = CONCAT44(uVar8, uVar9);
               local_a8 = 0;
               iVar2 = 0;
               local_a4 = 0;
               do {
                  if (*(long*)( lVar17 + -8 ) <= lVar19) break;
                  pIVar13 = *(Image**)( lVar17 + lVar19 * 8 );
                  if (( pIVar13 != (Image*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                     pIVar13 = (Image*)0x0;
                  }

                  uVar8 = Image::get_height();
                  local_48 = Image::get_width();
                  uStack_44 = uVar8;
                  cVar6 = Vector2i::operator !=((Vector2i*)&local_48, (Vector2i*)&local_50);
                  if (cVar6 == '\0') {
                     bVar16 = local_a8 == 0 & param_4;
                     iVar3 = local_a8 + 1;
                     local_b8 = local_a8;
                  }
 else {
                     iVar3 = iVar7 >> 1;
                     iVar2 = iVar2 + 1;
                     local_a8 = 1;
                     iVar7 = 1;
                     if (0 < iVar3) {
                        iVar7 = iVar3;
                     }

                     local_b8 = 0;
                     bVar16 = param_4;
                     iVar3 = local_a8;
                  }

                  local_a8 = iVar3;
                  local_50 = CONCAT44(uStack_44, local_48);
                  Image::get_data();
                  lVar17 = local_60;
                  if (local_60 != 0) {
                     uVar12 = *(undefined8*)( local_60 + -8 );
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_60 = 0;
                        Memory::free_static((void*)( lVar17 + -0x10 ), false);
                     }

                     local_a4 = local_a4 + (int)uVar12;
                  }

                  if (bVar16 != 0) {
                     ( *_glad_glTexImage3D )(0x806f, iVar2, local_88, local_48, uStack_44, iVar7, 0, local_8c, local_90, 0);
                  }

                  pcVar4 = _glad_glTexSubImage3D;
                  Image::get_data();
                  ( *pcVar4 )(0x806f, iVar2, 0, 0, local_b8, local_48, uStack_44, 1, local_8c, local_90, local_60);
                  lVar17 = local_60;
                  if (local_60 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_60 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_60 = 0;
                        Memory::free_static((void*)( lVar17 + -0x10 ), false);
                     }

                  }

                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     memdelete<Image>(pIVar13);
                  }

                  lVar19 = lVar19 + 1;
                  lVar17 = local_70;
               }
 while ( local_70 != 0 );
               *(int*)( lVar15 + 0x6c ) = local_a4;
               *(int*)( lVar15 + 0x3c ) = iVar2 + 1;
               lVar19 = Engine::get_singleton();
               if (( ( *(char*)( lVar19 + 0xc0 ) != '\0' ) && ( *(char*)( lVar15 + 10 ) == '\0' ) ) && ( *(long*)( lVar15 + 0x98 ) != lVar17 )) {
                  CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)( lVar15 + 0x98 ), (CowData*)&local_70);
               }

               CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_70);
               if (( local_80[0] != (Image*)0x0 ) && ( cVar6 = cVar6 != '\0' )) {
                  memdelete<Image>(local_80[0]);
               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_001149ef;
            }

         }

         lVar19 = 0;
         LAB_00114663:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar19, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      if (*(int*)( lVar15 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar12 = 0x672;
      pcVar11 = "Parameter \"texture\" is null.";
      LAB_00114819:_err_print_error("_texture_set_3d_data", "drivers/gles3/storage/texture_storage.cpp", uVar12, pcVar11, 0, 0);
      return;
   }

   LAB_001149ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_3d_initialize(RID, Image::Format, int, int, int, bool,
   Vector<Ref<Image> > const&) */void GLES3::TextureStorage::texture_3d_initialize(TextureStorage *this, undefined8 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined1 param_7, long param_8) {
   Image *pIVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined8 uVar4;
   uint uVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   uint *puVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   Image *local_180;
   long local_150;
   Image *local_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined2 local_130;
   undefined1 local_12e;
   undefined8 local_128;
   undefined1 local_118[16];
   undefined8 local_108;
   undefined8 uStack_100;
   undefined4 local_f8;
   undefined4 local_f4;
   undefined4 local_f0;
   undefined8 local_ec;
   undefined8 local_e4;
   undefined8 uStack_dc;
   undefined8 local_d4;
   uint local_cc;
   undefined2 local_c8;
   undefined1 local_c6;
   undefined4 local_c4;
   undefined2 local_c0;
   undefined1 local_b8[24];
   undefined8 local_a0;
   undefined1 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 local_50;
   undefined4 local_48;
   undefined4 uStack_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_8 + 8 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("texture_3d_initialize", "drivers/gles3/storage/texture_storage.cpp", 0x391, "Condition \"p_data.is_empty()\" is true.", 0, 0);
         return;
      }

      goto LAB_00115097;
   }

   iVar7 = Image::validate_3d_image(param_3, param_4, param_5, param_6, param_7, param_8);
   if (iVar7 != 0) {
      Image::get_3d_image_validation_error_text((CowData<char32_t>*)&local_138, iVar7);
      _err_print_error("texture_3d_initialize", "drivers/gles3/storage/texture_storage.cpp", 0x394, "Condition \"verr != Image::VALIDATE_3D_OK\" is true.", (CowData<char32_t>*)&local_138, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      LAB_00114f42:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_00115097:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   plVar9 = *(long**)( param_8 + 8 );
   if (plVar9 != (long*)0x0) {
      lVar11 = plVar9[-1];
      if (lVar11 < 1) goto LAB_00114f8b;
      pIVar1 = (Image*)*plVar9;
      local_180 = pIVar1;
      if (pIVar1 == (Image*)0x0) {
         LAB_00114ade:local_50 = 0;
         lVar12 = 0;
         iVar7 = 0;
         do {
            if (plVar9[-1] <= lVar12) break;
            uVar8 = Image::get_height();
            if (*(long*)( param_8 + 8 ) == 0) {
               lVar11 = 0;
               goto LAB_00114b87;
            }

            lVar11 = *(long*)( *(long*)( param_8 + 8 ) + -8 );
            if (lVar11 <= lVar12) goto LAB_00114b87;
            local_48 = Image::get_width();
            uStack_44 = uVar8;
            cVar6 = Vector2i::operator !=((Vector2i*)&local_48, (Vector2i*)&local_50);
            local_50 = CONCAT44(uStack_44, local_48);
            iVar7 = ( iVar7 + 1 ) - ( uint )(cVar6 == '\0');
            lVar12 = lVar12 + 1;
            plVar9 = *(long**)( param_8 + 8 );
         }
 while ( plVar9 != (long*)0x0 );
      }
 else {
         cVar6 = RefCounted::reference();
         local_50 = 0;
         local_180 = (Image*)0x0;
         if (cVar6 != '\0') {
            local_180 = pIVar1;
         }

         plVar9 = *(long**)( param_8 + 8 );
         if (plVar9 != (long*)0x0) goto LAB_00114ade;
         iVar7 = 0;
      }

      local_ec = 0x200000002;
      local_118 = (undefined1[16])0x0;
      local_c8 = 0;
      local_58 = _LC229;
      local_e4 = __LC228;
      uStack_dc = _UNK_001240f8;
      local_b8._0_16_ = (undefined1[16])0x0;
      local_68 = (undefined1[16])0x0;
      uStack_100 = CONCAT44(iVar7, param_6);
      local_108 = CONCAT44(param_5, param_4);
      local_130 = 0;
      local_c0 = 0;
      local_138 = 0;
      local_12e = 0;
      local_128 = 0;
      local_f8 = 1;
      local_d4 = 0;
      local_cc = 0;
      local_c6 = 0;
      local_c4 = 0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_f4 = param_4;
      local_f0 = param_5;
      uVar8 = Image::get_format();
      local_e4 = CONCAT44(local_e4._4_4_, 2);
      local_ec = CONCAT44(local_ec._4_4_, uVar8);
      uStack_dc = CONCAT44(uStack_dc._4_4_, 0x806f);
      local_150 = 0;
      _get_gl_image_and_format(&local_148, this, (StrRange*)&local_150, uVar8, (long)&local_ec + 4, (long)&uStack_dc + 4, &local_d4, (long)&local_d4 + 4, &local_c8, 0);
      if (( local_148 != (Image*)0x0 ) && ( cVar6 = cVar6 != '\0' )) {
         memdelete<Image>(local_148);
      }

      if (*(long*)( param_8 + 8 ) != 0) {
         lVar11 = *(long*)( *(long*)( param_8 + 8 ) + -8 );
         if (lVar11 < 1) goto LAB_00114f8b;
         iVar7 = Image::get_image_data_size(local_108 & 0xffffffff, local_108._4_4_, local_ec & 0xffffffff, uStack_100._4_4_ != 0);
         local_cc = iVar7 * (int)uStack_100;
         local_c6 = 1;
         ( *_glad_glGenTextures )(1, &local_c4);
         lVar11 = Utilities::singleton;
         local_148 = (Image*)0x11b57a;
         local_150 = 0;
         local_140 = 10;
         String::parse_latin1((StrRange*)&local_150);
         uVar5 = local_cc;
         local_148 = (Image*)CONCAT44(local_148._4_4_, local_c4);
         plVar9 = (long*)( lVar11 + 0x108 );
         *plVar9 = *plVar9 + (ulong)local_cc;
         puVar10 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar11 + 200 ), (uint*)&local_148);
         lVar11 = local_150;
         *puVar10 = uVar5;
         if (local_150 != 0) {
            LOCK();
            plVar9 = (long*)( local_150 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_150 = 0;
               Memory::free_static((void*)( lVar11 + -0x10 ), false);
            }

         }

         RID_Alloc<GLES3::Texture,true>::initialize_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ), param_2, &local_138);
         _texture_set_3d_data(this, param_2, param_8, 1);
         CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_a0);
         if (( local_b8._8_8_ != 0 ) && ( cVar6 = cVar6 != '\0' )) {
            memdelete<Image>((Image*)local_b8._8_8_);
         }

         uVar4 = local_118._8_8_;
         if (local_118._8_8_ != 0) {
            LOCK();
            plVar9 = (long*)( local_118._8_8_ + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_118._8_8_ = 0;
               Memory::free_static((void*)( uVar4 + -0x10 ), false);
            }

         }

         uVar4 = local_118._0_8_;
         if (local_118._0_8_ != 0) {
            LOCK();
            plVar9 = (long*)( local_118._0_8_ + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               auVar3._8_8_ = 0;
               auVar3._0_8_ = local_118._8_8_;
               local_118 = auVar3 << 0x40;
               Memory::free_static((void*)( uVar4 + -0x10 ), false);
            }

         }

         cVar6 = RefCounted::unreference();
         if (cVar6 != '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               memdelete<Image>(local_180);
               return;
            }

            goto LAB_00115097;
         }

         goto LAB_00114f42;
      }

   }

   lVar11 = 0;
   LAB_00114f8b:lVar12 = 0;
   LAB_00114b87:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar11, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* GLES3::TextureStorage::texture_3d_update(RID, Vector<Ref<Image> > const&) */void GLES3::TextureStorage::texture_3d_update(TextureStorage *this, ulong param_2, undefined8 param_3) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   uint uVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   long lVar11;
   int iVar12;
   uint uVar13;
   uint *puVar14;
   char *pcVar15;
   ulong uVar16;
   undefined8 uVar17;
   uint uVar18;
   long lVar19;
   char *pcVar20;
   char *pcVar21;
   ulong uVar22;
   uint uVar23;
   long in_FS_OFFSET;
   uint local_48[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar19 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      if (*(int*)( lVar19 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar19 + 0x54 ) == 2) {
            iVar12 = Image::validate_3d_image(*(undefined4*)( lVar19 + 0x4c ), *(undefined4*)( lVar19 + 0x30 ), *(undefined4*)( lVar19 + 0x34 ), *(undefined4*)( lVar19 + 0x38 ), 1 < *(int*)( lVar19 + 0x3c ), param_3);
            if (iVar12 == 0) {
               _texture_set_3d_data(this, param_2, param_3, 0);
               lVar11 = Utilities::singleton;
               uVar1 = *(uint*)( lVar19 + 0x6c );
               local_48[0] = *(uint*)( lVar19 + 0x74 );
               this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
               if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
                  uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
                  uVar13 = ( local_48[0] >> 0x10 ^ local_48[0] ) * -0x7a143595;
                  uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
                  uVar23 = uVar13 ^ uVar13 >> 0x10;
                  if (uVar13 == uVar13 >> 0x10) {
                     uVar23 = 1;
                     uVar16 = uVar2;
                  }
 else {
                     uVar16 = uVar23 * uVar2;
                  }

                  uVar22 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar22;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar16;
                  lVar19 = SUB168(auVar3 * auVar7, 8);
                  uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar19 * 4 );
                  iVar12 = SUB164(auVar3 * auVar7, 8);
                  uVar18 = 0;
                  if (uVar13 != 0) {
                     do {
                        if (( uVar23 == uVar13 ) && ( local_48[0] == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar19 * 8 ) + 0x10 ) )) {
                           puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, local_48);
                           *(long*)( lVar11 + 0x108 ) = *(long*)( lVar11 + 0x108 ) + ( (ulong)uVar1 - ( ulong ) * puVar14 );
                           puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, local_48);
                           *puVar14 = uVar1;
                           goto LAB_001152ad;
                        }

                        uVar18 = uVar18 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( iVar12 + 1 ) * uVar2;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar22;
                        lVar19 = SUB168(auVar4 * auVar8, 8);
                        uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar19 * 4 );
                        iVar12 = SUB164(auVar4 * auVar8, 8);
                     }
 while ( ( uVar13 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar13 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar22,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar12 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar22,uVar18 <= SUB164(auVar6 * auVar10, 8) );
                  }

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  pcVar15 = "Condition \"!texture_allocs_cache.has(p_id)\" is true.";
                  uVar17 = 0x97;
                  pcVar20 = "drivers/gles3/storage/../storage/utilities.h";
                  pcVar21 = "texture_resize_data";
                  goto LAB_00115304;
               }

            }
 else {
               Image::get_3d_image_validation_error_text((CowData<char32_t>*)local_48, iVar12);
               _err_print_error("texture_3d_update", "drivers/gles3/storage/texture_storage.cpp", 0x3f6, "Condition \"verr != Image::VALIDATE_3D_OK\" is true.", (CowData<char32_t>*)local_48, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
               LAB_001152ad:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

            }

            goto LAB_0011543d;
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0011543d;
         pcVar15 = "Condition \"tex->type != Texture::TYPE_3D\" is true.";
         uVar17 = 0x3f3;
         pcVar20 = "drivers/gles3/storage/texture_storage.cpp";
         pcVar21 = "texture_3d_update";
         goto LAB_00115304;
      }

      if (*(int*)( lVar19 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      LAB_0011543d:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   pcVar15 = "Parameter \"tex\" is null.";
   uVar17 = 0x3f2;
   pcVar20 = "drivers/gles3/storage/texture_storage.cpp";
   pcVar21 = "texture_3d_update";
   LAB_00115304:_err_print_error(pcVar21, pcVar20, uVar17, pcVar15, 0, 0);
   return;
}
/* Vector<Ref<Image> >::push_back(Ref<Image>) [clone .isra.0] */void Vector<Ref<Image>>::push_back(Vector<Ref<Image>> *this, long *param_2) {
   long *plVar1;
   Image *pIVar2;
   Image *pIVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar6 = 1;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar5 = CowData<Ref<Image>>::resize<false>((CowData<Ref<Image>>*)( this + 8 ), lVar6);
   if (iVar5 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar7 = -1;
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
         CowData<Ref<Image>>::_copy_on_write((CowData<Ref<Image>>*)( this + 8 ));
         pIVar2 = (Image*)*param_2;
         plVar1 = (long*)( *(long*)( this + 8 ) + lVar7 * 8 );
         pIVar3 = (Image*)*plVar1;
         if (pIVar2 == pIVar3) {
            return;
         }

         *plVar1 = (long)pIVar2;
         if (( pIVar2 != (Image*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
            *plVar1 = 0;
         }

         if (pIVar3 == (Image*)0x0) {
            return;
         }

         cVar4 = RefCounted::unreference();
         if (cVar4 == '\0') {
            return;
         }

         memdelete<Image>(pIVar3);
         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar6, "p_index", "size()", "", false, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::TextureStorage() */void GLES3::TextureStorage::TextureStorage(TextureStorage *this) {
   RID_Alloc<GLES3::Texture,true> *this_00;
   long *plVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   Color *pCVar8;
   char cVar9;
   undefined4 uVar10;
   undefined8 uVar11;
   undefined4 *puVar12;
   Resource *this_01;
   Object *pOVar13;
   ulong uVar14;
   long lVar15;
   uint uVar16;
   uint uVar17;
   undefined8 *puVar18;
   Image *pIVar19;
   Resource *pRVar20;
   uint uVar21;
   Image *pIVar22;
   int iVar23;
   long in_FS_OFFSET;
   byte bVar24;
   Color *local_1b0;
   Image *local_1a8;
   undefined8 local_1a0;
   Image *local_198;
   ulong local_190;
   undefined8 local_188;
   undefined1 local_178[16];
   undefined8 local_168;
   undefined8 uStack_160;
   undefined8 local_158;
   undefined8 uStack_150;
   undefined4 local_148;
   undefined8 local_144;
   ulong uStack_13c;
   undefined8 local_134;
   undefined4 local_12c;
   undefined2 local_128;
   undefined1 local_126;
   undefined4 local_124;
   undefined2 local_120;
   undefined1 local_118[24];
   undefined8 local_100;
   undefined1 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined1 local_c8[16];
   undefined8 local_b8;
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined8 uStack_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   uVar7 = _UNK_00124128;
   uVar6 = __LC273;
   uVar5 = _UNK_00124118;
   uVar11 = __LC272;
   bVar24 = 0;
   this_00 = (RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 8 ) = uVar11;
   *(undefined8*)( this + 0x10 ) = uVar5;
   *(undefined***)this = &PTR_canvas_texture_allocate_00122c10;
   *(undefined8*)( this + 0x78 ) = 0;
   puVar18 = (undefined8*)( ( ulong )(this + 0x20) & 0xfffffffffffffff8 );
   for (uVar14 = ( ulong )(( (int)this - (int)(undefined8*)( ( ulong )(this + 0x20) & 0xfffffffffffffff8 ) ) + 0x80U >> 3); uVar14 != 0; uVar14 = uVar14 - 1) {
      *puVar18 = 0;
      puVar18 = puVar18 + 1;
   }

   *(undefined1(*) [16])( this + 0xc0 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x80 ) = &PTR__RID_Alloc_00122bb0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 136 ) ) = 0;
   }

   *(undefined4*)( this + 0xc0 ) = 1;
   *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x98 ) = uVar6;
   *(undefined8*)( this + 0xa0 ) = uVar7;
   uVar11 = Memory::alloc_static(0x708, false);
   *(undefined8*)( this + 0x88 ) = uVar11;
   uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0xa4 ) << 3, false);
   *(undefined8*)( this + 0x90 ) = uVar11;
   *(undefined1(*) [16])( this + 0x118 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0xd8 ) = &PTR__RID_Alloc_00122bd0;
   uVar5 = _UNK_00124138;
   uVar11 = __LC274;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 224 ) ) = 0;
   }

   *(undefined4*)( this + 0x118 ) = 1;
   *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xf0 ) = uVar11;
   *(undefined8*)( this + 0xf8 ) = uVar5;
   uVar11 = Memory::alloc_static(0x1d10, false);
   *(undefined8*)( this + 0xe0 ) = uVar11;
   uVar11 = Memory::alloc_static(( ulong ) * (uint*)( this + 0xfc ) << 3, false);
   *(undefined8*)( this + 0xe8 ) = uVar11;
   *(undefined1(*) [16])( this + 0x1b8 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x178 ) = &PTR__RID_Alloc_00122bf0;
   *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
   uVar5 = _UNK_00124148;
   uVar11 = __LC276;
   *(undefined8*)( this + 0x158 ) = 2;
   this[0x160] = (TextureStorage)0x1;
   *(undefined8*)( this + 0x164 ) = 0;
   *(undefined8*)( this + 0x16c ) = 0;
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined8*)( this + 0x188 ) = 0;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   *(undefined4*)( this + 0x1b8 ) = 1;
   *(undefined1(*) [16])( this + 0x138 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 400 ) = uVar11;
   *(undefined8*)( this + 0x198 ) = uVar5;
   ShaderGLES3::ShaderGLES3((ShaderGLES3*)( this + 0x1d0 ));
   *(undefined***)( this + 0x1d0 ) = &PTR__init_00122b88;
   *(undefined8*)( this + 0x300 ) = 0;
   *(undefined8*)( this + 0x308 ) = 0;
   *(undefined8*)( this + 0x318 ) = 0;
   *(undefined8*)( this + 0x328 ) = 0;
   *(undefined8*)( this + 0x338 ) = 0;
   singleton = this;
   Image::create_empty((StrRange*)&local_1b0, 4, 4, 1, 5);
   local_a8._8_8_ = _UNK_001240c8;
   local_a8._0_8_ = __LC55;
   Image::fill(local_1b0);
   Image::generate_mipmaps(SUB81(local_1b0, 0));
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x18 ) = uVar11;
   texture_2d_initialize(this, uVar11, (StrRange*)&local_1b0);
   pCVar8 = local_1b0;
   local_190 = 0;
   if (local_1b0 == (Color*)0x0) {
      LAB_001169c9:local_1a8 = (Image*)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, &local_1a8);
   }
 else {
      local_1a8 = (Image*)local_1b0;
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') goto LAB_001169c9;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, &local_1a8);
      cVar9 = RefCounted::unreference();
      if (cVar9 != '\0') {
         memdelete<Image>((Image*)pCVar8);
      }

   }

   iVar23 = 5;
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x68 ) = uVar11;
   texture_2d_layered_initialize(this, uVar11, (Vector<Ref<Image>>*)&local_198, 0);
   LAB_00115962:do {
      pCVar8 = local_1b0;
      if (local_1b0 == (Color*)0x0) {
         LAB_00115951:local_1a8 = (Image*)0x0;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
      }
 else {
         local_1a8 = (Image*)local_1b0;
         cVar9 = RefCounted::reference();
         if (cVar9 == '\0') goto LAB_00115951;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
         cVar9 = RefCounted::unreference();
         if (cVar9 != '\0') {
            memdelete<Image>((Image*)pCVar8);
            iVar23 = iVar23 + -1;
            if (iVar23 == 0) break;
            goto LAB_00115962;
         }

      }

      iVar23 = iVar23 + -1;
   }
 while ( iVar23 != 0 );
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x50 ) = uVar11;
   texture_2d_layered_initialize(this, uVar11, (Vector<Ref<Image>>*)&local_198, 1);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_190);
   if (( local_1b0 != (Color*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>((Image*)local_1b0);
   }

   iVar23 = 4;
   Image::create_empty((StrRange*)&local_1b0, 4, 4, 0, 5);
   local_a8._8_8_ = _UNK_001240c8;
   local_a8._0_8_ = __LC55;
   Image::fill(local_1b0);
   local_190 = 0;
   do {
      pCVar8 = local_1b0;
      if (local_1b0 == (Color*)0x0) {
         LAB_00115a7a:local_1a8 = (Image*)0x0;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
      }
 else {
         local_1a8 = (Image*)local_1b0;
         cVar9 = RefCounted::reference();
         if (cVar9 == '\0') goto LAB_00115a7a;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
         cVar9 = RefCounted::unreference();
         if (cVar9 != '\0') {
            memdelete<Image>((Image*)pCVar8);
         }

      }

      iVar23 = iVar23 + -1;
   }
 while ( iVar23 != 0 );
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x58 ) = uVar11;
   uVar10 = Image::get_format();
   texture_3d_initialize(this, *(undefined8*)( this + 0x58 ), uVar10, 4, 4, 4, 0, (Vector<Ref<Image>>*)&local_198);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_190);
   if (( local_1b0 != (Color*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>((Image*)local_1b0);
   }

   Image::create_empty((StrRange*)&local_1b0, 4, 4, 1, 5);
   local_a8._8_8_ = _UNK_00124118;
   local_a8._0_8_ = __LC272;
   Image::fill(local_1b0);
   Image::generate_mipmaps(SUB81(local_1b0, 0));
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   iVar23 = 6;
   *(undefined8*)( this + 0x20 ) = uVar11;
   texture_2d_initialize(this, uVar11, (StrRange*)&local_1b0);
   local_190 = 0;
   LAB_00115b8a:do {
      pCVar8 = local_1b0;
      if (local_1b0 == (Color*)0x0) {
         LAB_00115b79:local_1a8 = (Image*)0x0;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
      }
 else {
         local_1a8 = (Image*)local_1b0;
         cVar9 = RefCounted::reference();
         if (cVar9 == '\0') goto LAB_00115b79;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
         cVar9 = RefCounted::unreference();
         if (cVar9 != '\0') {
            memdelete<Image>((Image*)pCVar8);
            iVar23 = iVar23 + -1;
            if (iVar23 == 0) break;
            goto LAB_00115b8a;
         }

      }

      iVar23 = iVar23 + -1;
   }
 while ( iVar23 != 0 );
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x48 ) = uVar11;
   texture_2d_layered_initialize(this, uVar11, (Vector<Ref<Image>>*)&local_198, 1);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_190);
   if (( local_1b0 != (Color*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>((Image*)local_1b0);
   }

   iVar23 = 4;
   Image::create_empty((StrRange*)&local_1b0, 4, 4, 0, 5);
   local_a8._8_8_ = _UNK_00124118;
   local_a8._0_8_ = __LC272;
   Image::fill(local_1b0);
   local_190 = 0;
   do {
      pCVar8 = local_1b0;
      if (local_1b0 == (Color*)0x0) {
         LAB_00115c9a:local_1a8 = (Image*)0x0;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
      }
 else {
         local_1a8 = (Image*)local_1b0;
         cVar9 = RefCounted::reference();
         if (cVar9 == '\0') goto LAB_00115c9a;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)&local_198, (StrRange*)&local_1a8);
         cVar9 = RefCounted::unreference();
         if (cVar9 != '\0') {
            memdelete<Image>((Image*)pCVar8);
         }

      }

      iVar23 = iVar23 + -1;
   }
 while ( iVar23 != 0 );
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x60 ) = uVar11;
   uVar10 = Image::get_format();
   texture_3d_initialize(this, *(undefined8*)( this + 0x60 ), uVar10, 4, 4, 4, 0, (Vector<Ref<Image>>*)&local_198);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_190);
   if (( local_1b0 != (Color*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>((Image*)local_1b0);
   }

   Image::create_empty((Vector<Ref<Image>>*)&local_198, 4, 4, 1, 5);
   local_a8 = (undefined1[16])0x0;
   Image::fill((Color*)local_198);
   Image::generate_mipmaps(SUB81(local_198, 0));
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x28 ) = uVar11;
   texture_2d_initialize(this, uVar11, (Vector<Ref<Image>>*)&local_198);
   if (( local_198 != (Image*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>(local_198);
   }

   Image::create_empty((Vector<Ref<Image>>*)&local_198, 4, 4, 1, 5);
   local_a8._8_8_ = _UNK_00124158;
   local_a8._0_8_ = __LC277;
   Image::fill((Color*)local_198);
   Image::generate_mipmaps(SUB81(local_198, 0));
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x30 ) = uVar11;
   texture_2d_initialize(this, uVar11, (Vector<Ref<Image>>*)&local_198);
   if (( local_198 != (Image*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>(local_198);
   }

   Image::create_empty((Vector<Ref<Image>>*)&local_198, 4, 4, 1);
   local_a8._8_8_ = _UNK_00124168;
   local_a8._0_8_ = __LC278;
   Image::fill((Color*)local_198);
   Image::generate_mipmaps(SUB81(local_198, 0));
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x38 ) = uVar11;
   texture_2d_initialize(this, uVar11, (Vector<Ref<Image>>*)&local_198);
   if (( local_198 != (Image*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>(local_198);
   }

   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x78 ) = uVar11;
   texture_external_initialize(this, uVar11, 1, 1);
   local_88 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x70 ) = uVar11;
   local_178 = (undefined1[16])0x0;
   local_b8 = _LC229;
   local_144 = __LC228;
   uStack_13c = _UNK_001240f8;
   local_118._0_16_ = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_168 = _LC241;
   uStack_160 = _UNK_00124178;
   local_158 = __LC280;
   uStack_150 = _UNK_00124188;
   local_120 = 0;
   local_128 = 0;
   local_198 = (Image*)0x0;
   local_190 = local_190 & 0xffffffffff000000;
   local_188 = 0;
   local_148 = 2;
   local_134 = 0;
   local_12c = 0;
   local_124 = 0;
   local_100 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 0;
   local_e0 = 0;
   local_d8 = 0;
   local_d0 = 0;
   local_126 = 1;
   ( *_glad_glGenTextures )(1, &local_124);
   RID_Alloc<GLES3::Texture,true>::initialize_rid(this_00, *(undefined8*)( this + 0x70 ), (Vector<Ref<Image>>*)&local_198);
   ( *_glad_glBindTexture )(0xde1, local_124);
   ( *_glad_glTexImage2D )(0xde1, 0, 0x8d7c, 4, 4, 0, 0x8d99, 0x1401, local_88);
   lVar15 = Utilities::singleton;
   local_1b0 = (Color*)0x0;
   local_1a8 = (Image*)0x11b597;
   local_1a0 = 0x14;
   String::parse_latin1((StrRange*)&local_1b0);
   local_1a8 = (Image*)CONCAT44(local_1a8._4_4_, local_124);
   plVar1 = (long*)( lVar15 + 0x108 );
   *plVar1 = *plVar1 + 0x40;
   puVar12 = (undefined4*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar15 + 200 ), (uint*)&local_1a8);
   *puVar12 = 0x40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   lVar15 = Config::singleton;
   if ((int)local_b8 != 1) {
      local_b8 = CONCAT44(local_b8._4_4_, 1);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x2801, 0x2600);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x2800, 0x2600);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x813c, 0);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x813d, 0);
      if (*(char*)( lVar15 + 0x7b ) != '\0') {
         ( *_glad_glTexParameterf )(uStack_13c & 0xffffffff);
      }

   }

   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_100);
   if (( local_118._8_8_ != 0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>((Image*)local_118._8_8_);
   }

   uVar11 = local_178._8_8_;
   if (local_178._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_178._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_178._8_8_ = 0;
         Memory::free_static((void*)( uVar11 + -0x10 ), false);
      }

   }

   uVar11 = local_178._0_8_;
   if (local_178._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_178._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_178._8_8_;
         local_178 = auVar3 << 0x40;
         Memory::free_static((void*)( uVar11 + -0x10 ), false);
      }

   }

   local_a8._8_8_ = _UNK_00124198;
   local_a8._0_8_ = __LC282;
   local_98 = __LC282;
   uStack_90 = _UNK_00124198;
   uVar11 = RID_Alloc<GLES3::Texture,true>::allocate_rid(this_00);
   *(undefined8*)( this + 0x40 ) = uVar11;
   local_178 = (undefined1[16])0x0;
   local_144 = __LC228;
   uStack_13c = _UNK_001240f8;
   local_118._0_16_ = (undefined1[16])0x0;
   local_c8 = (undefined1[16])0x0;
   local_168 = _LC241;
   uStack_160 = _UNK_00124178;
   local_158 = __LC280;
   uStack_150 = _UNK_00124188;
   local_120 = 0;
   local_b8 = _LC229;
   local_128 = 0;
   local_198 = (Image*)0x0;
   local_190 = local_190 & 0xffffffffff000000;
   local_188 = 0;
   local_148 = 2;
   local_134 = 0;
   local_12c = 0;
   local_124 = 0;
   local_100 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 0;
   local_e0 = 0;
   local_d8 = 0;
   local_d0 = 0;
   local_126 = 1;
   ( *_glad_glGenTextures )(1, &local_124);
   RID_Alloc<GLES3::Texture,true>::initialize_rid(this_00, *(undefined8*)( this + 0x40 ), (Vector<Ref<Image>>*)&local_198);
   ( *_glad_glBindTexture )(0xde1, local_124);
   ( *_glad_glTexImage2D )(0xde1, 0, 0x81a5, 4, 4, 0, 0x1902, 0x1403, local_a8);
   lVar15 = Utilities::singleton;
   local_1b0 = (Color*)0x0;
   local_1a8 = (Image*)0x11b5ac;
   local_1a0 = 0x15;
   String::parse_latin1((StrRange*)&local_1b0);
   local_1a8 = (Image*)CONCAT44(local_1a8._4_4_, local_124);
   plVar1 = (long*)( lVar15 + 0x108 );
   *plVar1 = *plVar1 + 0x20;
   puVar12 = (undefined4*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar15 + 200 ), (uint*)&local_1a8);
   pCVar8 = local_1b0;
   *puVar12 = 0x20;
   if (local_1b0 != (Color*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_1b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_1b0 = (Color*)0x0;
         Memory::free_static((void*)( (long)pCVar8 + -0x10 ), false);
      }

   }

   lVar15 = Config::singleton;
   if ((int)local_b8 != 1) {
      local_b8 = CONCAT44(local_b8._4_4_, 1);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x2801, 0x2600);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x2800, 0x2600);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x813c, 0);
      ( *_glad_glTexParameteri )(uStack_13c & 0xffffffff, 0x813d, 0);
      if (*(char*)( lVar15 + 0x7b ) != '\0') {
         ( *_glad_glTexParameterf )(uStack_13c & 0xffffffff);
      }

   }

   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_100);
   if (( local_118._8_8_ != 0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>((Image*)local_118._8_8_);
   }

   uVar11 = local_178._8_8_;
   if (local_178._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_178._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_178._8_8_ = 0;
         Memory::free_static((void*)( uVar11 + -0x10 ), false);
      }

   }

   uVar11 = local_178._0_8_;
   if (local_178._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_178._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_178._8_8_;
         local_178 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar11 + -0x10 ), false);
      }

   }

   ( *_glad_glBindTexture )(0xde1, 0);
   local_88._8_8_ = _UNK_001241a8;
   local_88._0_8_ = __LC284;
   local_78._8_8_ = _UNK_001241a8;
   local_78._0_8_ = __LC284;
   local_68._8_8_ = _UNK_001241a8;
   local_68._0_8_ = __LC284;
   local_58._8_8_ = _UNK_001241a8;
   local_58._0_8_ = __LC284;
   ( *_glad_glGenTextures )(1, this + 0x164);
   ( *_glad_glBindTexture )(0xde1, *(undefined4*)( this + 0x164 ));
   ( *_glad_glTexImage2D )(0xde1, 0, 0x8058, 4, 4, 0, 0x1908, 0x1401, local_88);
   lVar15 = Utilities::singleton;
   local_198 = (Image*)0x11b5c2;
   local_1a8 = (Image*)0x0;
   local_190 = 0x17;
   String::parse_latin1((StrRange*)&local_1a8);
   local_198 = (Image*)CONCAT44(local_198._4_4_, *(undefined4*)( this + 0x164 ));
   plVar1 = (long*)( lVar15 + 0x108 );
   *plVar1 = *plVar1 + 0x40;
   puVar12 = (undefined4*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar15 + 200 ), (uint*)&local_198);
   pIVar19 = local_1a8;
   *puVar12 = 0x40;
   if (local_1a8 != (Image*)0x0) {
      LOCK();
      pIVar22 = local_1a8 + -0x10;
      *(long*)pIVar22 = *(long*)pIVar22 + -1;
      UNLOCK();
      if (*(long*)pIVar22 == 0) {
         local_1a8 = (Image*)0x0;
         Memory::free_static(pIVar19 + -0x10, false);
      }

   }

   ( *_glad_glBindTexture )(0xde1, 0);
   local_198 = (Image*)&_LC73;
   local_1a8 = (Image*)0x0;
   local_190 = 0;
   String::parse_latin1((StrRange*)&local_1a8);
   ShaderGLES3::initialize((String*)( this + 0x1d0 ), (int)(StrRange*)&local_1a8);
   pIVar19 = local_1a8;
   if (local_1a8 != (Image*)0x0) {
      LOCK();
      pRVar20 = (Resource*)( local_1a8 + -0x10 );
      *(long*)pRVar20 = *(long*)pRVar20 + -1;
      UNLOCK();
      if (*(long*)pRVar20 == 0) {
         local_1a8 = (Image*)0x0;
         Memory::free_static((Resource*)( pIVar19 + -0x10 ), false);
      }

   }

   uVar11 = ShaderGLES3::version_create();
   *(undefined8*)( this + 0x300 ) = uVar11;
   Image::create_empty((Vector<Ref<Image>>*)&local_198, 4, 4, 0, 5);
   pIVar19 = *(Image**)( this + 0x308 );
   pIVar22 = pIVar19;
   if (local_198 != pIVar19) {
      *(Image**)( this + 0x308 ) = local_198;
      if (local_198 == (Image*)0x0) {
         if (pIVar19 == (Image*)0x0) goto LAB_00116644;
         cVar9 = RefCounted::unreference();
      }
 else {
         cVar9 = RefCounted::reference();
         if (cVar9 == '\0') {
            *(undefined8*)( this + 0x308 ) = 0;
         }

         pIVar22 = local_198;
         if (pIVar19 == (Image*)0x0) goto LAB_00116628;
         cVar9 = RefCounted::unreference();
      }

      pIVar22 = local_198;
      if (cVar9 != '\0') {
         memdelete<Image>(pIVar19);
         pIVar22 = local_198;
      }

   }

   LAB_00116628:if (( pIVar22 != (Image*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
      memdelete<Image>(local_198);
   }

   pIVar19 = *(Image**)( this + 0x308 );
   LAB_00116644:uVar21 = 0;
   while (true) {
      uVar17 = uVar21 & 3;
      uVar16 = (int)uVar21 >> 2;
      if (( uVar17 + uVar16 & 1 ) == 0) {
         local_a8._8_8_ = _UNK_001241b8;
         local_a8._0_8_ = __LC286;
      }
 else {
         local_a8._8_8_ = _UNK_00124118;
         local_a8._0_8_ = __LC272;
      }

      uVar21 = uVar21 + 1;
      Image::set_pixel((int)pIVar19, uVar17, (Color*)(ulong)uVar16);
      if (uVar21 == 0x10) break;
      pIVar19 = *(Image**)( this + 0x308 );
   }
;
   pIVar19 = *(Image**)( this + 0x308 );
   if (( pIVar19 == (Image*)0x0 ) || ( local_198 = pIVar19 ),cVar9 = RefCounted::reference(),cVar9 == '\0') {
      local_198 = (Image*)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)( this + 0x310 ), (Vector<Ref<Image>>*)&local_198);
   }
 else {
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)( this + 0x310 ), (Vector<Ref<Image>>*)&local_198);
      cVar9 = RefCounted::unreference();
      if (cVar9 != '\0') {
         memdelete<Image>(pIVar19);
      }

   }

   iVar23 = 6;
   do {
      pIVar19 = *(Image**)( this + 0x308 );
      if (( pIVar19 == (Image*)0x0 ) || ( local_198 = pIVar19 ),cVar9 = RefCounted::reference(),cVar9 == '\0') {
         local_198 = (Image*)0x0;
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)( this + 800 ), (Vector<Ref<Image>>*)&local_198);
      }
 else {
         Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)( this + 800 ), (Vector<Ref<Image>>*)&local_198);
         cVar9 = RefCounted::unreference();
         if (cVar9 != '\0') {
            memdelete<Image>(pIVar19);
         }

      }

      iVar23 = iVar23 + -1;
   }
 while ( iVar23 != 0 );
   this_01 = (Resource*)operator_new(0x268, "");
   pRVar20 = this_01;
   for (lVar15 = 0x4d; lVar15 != 0; lVar15 = lVar15 + -1) {
      *(undefined8*)pRVar20 = 0;
      pRVar20 = pRVar20 + (ulong)bVar24 * -0x10 + 8;
   }

   Resource::Resource(this_01);
   *(undefined4*)( this_01 + 0x240 ) = 0;
   *(code**)this_01 = String::parse_latin1;
   *(undefined8*)( this_01 + 0x250 ) = 0;
   *(undefined8*)( this_01 + 600 ) = 0;
   this_01[0x260] = (Resource)0x0;
   postinitialize_handler((Object*)this_01);
   cVar9 = RefCounted::init_ref();
   pIVar19 = (Image*)0x0;
   if (cVar9 != '\0') {
      local_1a8 = (Image*)this_01;
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
         local_1a8 = (Image*)0x0;
         cVar9 = RefCounted::unreference();
      }
 else {
         cVar9 = RefCounted::unreference();
      }

      pIVar19 = local_1a8;
      if (cVar9 != '\0') {
         memdelete<Image>((Image*)this_01);
         pIVar19 = local_1a8;
      }

   }

   pcVar2 = *(code**)( *(long*)pIVar19 + 0x178 );
   local_198 = (Image*)0x0;
   if (( ( *(long*)( this + 0x308 ) != 0 ) && ( pOVar13 = (Object*)__dynamic_cast(*(long*)( this + 0x308 ), &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar13 != (Object*)0x0 )) {
      local_198 = (Image*)0x0;
   }

   ( *pcVar2 )(pIVar19);
   if (( ( local_198 != (Image*)0x0 ) && ( cVar9 = RefCounted::unreference() ),pIVar22 = local_198,cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pIVar22 + 0x140 ))(pIVar22);
   Memory::free_static(pIVar22, false);
}
Image::rotate_90(pIVar19, 0);uVar21 = 0;LAB_001168e7:pIVar22 = *(Image**)( this + 0x308 );uVar16 = uVar21;if (*(Image**)( this + 0x308 ) == (Image*)0x0) goto LAB_00116907;do {
   local_198 = pIVar22;
   cVar9 = RefCounted::reference();
   if (cVar9 == '\0') goto LAB_00116907;
   Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)( this + 0x330 ), (Vector<Ref<Image>>*)&local_198);
   cVar9 = RefCounted::unreference();
   if (cVar9 != '\0') {
      memdelete<Image>(pIVar22);
   }

   while (true) {
      uVar16 = uVar16 + 1;
      if (uVar16 == 4) {
         if ((char)RasterizerGLES3::gles_over_gl != '\0') {
            ( *_glad_glEnable )(0x8642);
         }

         cVar9 = RefCounted::unreference();
         if (cVar9 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            memdelete<Image>(pIVar19);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      uVar21 = 2;
      if (( uVar16 & 1 ) == 0) goto LAB_001168e7;
      pIVar22 = pIVar19;
      if (pIVar19 != (Image*)0x0) break;
      LAB_00116907:local_198 = (Image*)0x0;
      Vector<Ref<Image>>::push_back((Vector<Ref<Image>>*)( this + 0x330 ), (Vector<Ref<Image>>*)&local_198);
   }
;
}
 while ( true );}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_texture_3d_read_framebuffer(GLES3::Texture*) const */Texture *GLES3::TextureStorage::_texture_3d_read_framebuffer(Texture *param_1) {
   long *plVar1;
   Image *pIVar2;
   undefined8 uVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   Rect2 *pRVar7;
   long in_RDX;
   int iVar8;
   int iVar9;
   int iVar10;
   int iVar11;
   int iVar12;
   long in_FS_OFFSET;
   float fVar13;
   undefined4 uVar14;
   Image *local_98;
   Image *local_90;
   Vector<Ref<Image>> local_88[8];
   undefined8 local_80;
   undefined1 local_78[8];
   long local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_RDX == 0) {
      _err_print_error("_texture_3d_read_framebuffer", "drivers/gles3/storage/texture_storage.cpp", 0x4fa, "Parameter \"p_texture\" is null.", 0, 0);
      *(undefined8*)( param_1 + 8 ) = 0;
   }
 else {
      iVar11 = *(int*)( in_RDX + 0x30 );
      iVar10 = 0;
      local_80 = 0;
      local_70 = 0;
      iVar12 = *(int*)( in_RDX + 0x34 );
      iVar9 = *(int*)( in_RDX + 0x38 );
      if (*(int*)( in_RDX + 0x3c ) < 1) {
         *(undefined8*)( param_1 + 8 ) = 0;
      }
 else {
         do {
            lVar6 = Image::get_image_data_size(iVar11, iVar12, 5, 0);
            ( *_glad_glViewport )(0, 0, iVar11);
            fVar13 = 0.0;
            uVar14 = 0;
            ( *_glad_glClearColor )();
            ( *_glad_glClear )(0x4000);
            if (0 < iVar9) {
               iVar8 = 0;
               do {
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_70, lVar6 * 2);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_70);
                  lVar4 = local_70;
                  pRVar7 = (Rect2*)GLES3::CopyEffects::get_singleton();
                  local_68 = __LC254;
                  uStack_60 = _LC298;
                  local_58 = Rect2i::operator_cast_to_Rect2((Rect2i*)&local_68);
                  local_50 = CONCAT44(uVar14, fVar13);
                  uVar14 = 0;
                  fVar13 = (float)iVar10;
                  GLES3::CopyEffects::copy_to_rect_3d(pRVar7, (float)iVar8 / (float)iVar9, (int)&local_58, (float)iVar10);
                  ( *_glad_glReadPixels )(0, 0, iVar11, iVar12, 0x1908, 0x1401, lVar4);
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_70, lVar6);
                  if (local_70 == 0) {
                     _err_print_error("_texture_3d_read_framebuffer", "drivers/gles3/storage/texture_storage.cpp", 0x512, "Condition \"data.is_empty()\" is true. Returning: Vector<Ref<Image>>()", 0, 0);
                     *(undefined8*)( param_1 + 8 ) = 0;
                     goto LAB_0011709a;
                  }

                  Image::create_from_data(&local_98, iVar11, iVar12, 0, 5, local_78);
                  cVar5 = Image::is_empty();
                  if (cVar5 != '\0') {
                     _err_print_error("_texture_3d_read_framebuffer", "drivers/gles3/storage/texture_storage.cpp", 0x515, "Condition \"img->is_empty()\" is true. Returning: Vector<Ref<Image>>()", 0, 0);
                     *(undefined8*)( param_1 + 8 ) = 0;
                     if (( local_98 != (Image*)0x0 ) && ( cVar5 = cVar5 != '\0' )) {
                        memdelete<Image>(local_98);
                     }

                     goto LAB_0011709a;
                  }

                  if (( *(int*)( in_RDX + 0x4c ) != 5 ) && ( cVar5 = cVar5 == '\0' )) {
                     Image::convert(local_98, *(undefined4*)( in_RDX + 0x4c ));
                  }

                  pIVar2 = local_98;
                  if (local_98 == (Image*)0x0) {
                     LAB_00116f64:local_90 = (Image*)0x0;
                     Vector<Ref<Image>>::push_back(local_88);
                  }
 else {
                     local_90 = local_98;
                     cVar5 = RefCounted::reference();
                     if (cVar5 == '\0') goto LAB_00116f64;
                     Vector<Ref<Image>>::push_back(local_88);
                     cVar5 = RefCounted::unreference();
                     if (cVar5 != '\0') {
                        memdelete<Image>(pIVar2);
                     }

                  }

                  if (( local_98 != (Image*)0x0 ) && ( cVar5 = cVar5 != '\0' )) {
                     memdelete<Image>(local_98);
                  }

                  iVar8 = iVar8 + 1;
               }
 while ( iVar9 != iVar8 );
            }

            uVar3 = local_80;
            iVar11 = iVar11 >> 1;
            if (iVar11 < 1) {
               iVar11 = 1;
            }

            iVar12 = iVar12 >> 1;
            if (iVar12 < 1) {
               iVar12 = 1;
            }

            iVar9 = iVar9 >> 1;
            if (iVar9 < 1) {
               iVar9 = 1;
            }

            iVar10 = iVar10 + 1;
         }
 while ( iVar10 < *(int*)( in_RDX + 0x3c ) );
         local_80 = 0;
         *(undefined8*)( param_1 + 8 ) = uVar3;
         LAB_0011709a:lVar6 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_80);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::texture_3d_get(RID) const */long GLES3::TextureStorage::texture_3d_get(long param_1, long param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined4 local_50;
   undefined4 local_4c;
   Texture local_48[8];
   long local_40[2];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0xf4 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( param_2 + 0xe0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0xf0 ) ) * 8 );
      if (*(int*)( lVar2 + 0xe8 ) == (int)( param_3 >> 0x20 )) {
         if (*(int*)( lVar2 + 0x54 ) == 2) {
            if (( *(long*)( lVar2 + 0x98 ) == 0 ) || ( *(char*)( lVar2 + 10 ) != '\0' )) {
               ( *_glad_glGenFramebuffers )(1, &local_50);
               ( *_glad_glGenTextures )(1, &local_4c);
               ( *_glad_glBindFramebuffer )(0x8d40, local_50);
               ( *_glad_glBindTexture )(0xde1, local_4c);
               ( *_glad_glTexImage2D )(0xde1, 0, 0x1908, *(undefined4*)( lVar2 + 0x44 ), *(undefined4*)( lVar2 + 0x48 ), 0, 0x1908, 0x1401, 0);
               ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2601);
               ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
               ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, local_4c, 0);
               ( *_glad_glDepthMask )(0);
               ( *_glad_glDisable )(0xb71);
               ( *_glad_glDisable )(0xb44);
               ( *_glad_glDisable )(0xbe2);
               ( *_glad_glDepthFunc )(0x203);
               ( *_glad_glColorMask )(1, 1, 1, 1);
               ( *_glad_glActiveTexture )(0x84c0);
               ( *_glad_glBindTexture )(0x806f, *(undefined4*)( lVar2 + 0x74 ));
               _texture_3d_read_framebuffer(local_48);
               ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
               ( *_glad_glDeleteTextures )(1, &local_4c);
               ( *_glad_glDeleteFramebuffers )(1, &local_50);
               lVar1 = Engine::get_singleton();
               if (( *(char*)( lVar1 + 0xc0 ) != '\0' ) && ( ( *(char*)( lVar2 + 10 ) == '\0' && ( local_40[0] != *(long*)( lVar2 + 0x98 ) ) ) )) {
                  CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)( lVar2 + 0x98 ), (CowData*)local_40);
               }

               *(long*)( param_1 + 8 ) = local_40[0];
            }
 else {
               *(undefined8*)( param_1 + 8 ) = 0;
               if (*(long*)( lVar2 + 0x98 ) != 0) {
                  CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)( param_1 + 8 ), (CowData*)( lVar2 + 0x98 ));
               }

            }

         }
 else {
            _err_print_error("texture_3d_get", "drivers/gles3/storage/texture_storage.cpp", 0x529, "Condition \"texture->type != Texture::TYPE_3D\" is true. Returning: Vector<Ref<Image>>()", 0, 0);
            *(undefined8*)( param_1 + 8 ) = 0;
         }

         goto LAB_001173e5;
      }

      if (*(int*)( lVar2 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("texture_3d_get", "drivers/gles3/storage/texture_storage.cpp", 0x528, "Parameter \"texture\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_001173e5:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::update_texture_atlas() */void GLES3::TextureStorage::update_texture_atlas(TextureStorage *this) {
   ulong *__src;
   Vector2i *this_00;
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_01;
   size_t __n;
   int iVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
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
   code *pcVar33;
   int iVar34;
   uint uVar35;
   Rect2 *pRVar36;
   uint *puVar37;
   ulong uVar38;
   ulong uVar39;
   undefined8 *puVar40;
   long *plVar41;
   long *plVar42;
   ulong *puVar43;
   long *plVar44;
   uint uVar45;
   int iVar46;
   long lVar47;
   long lVar48;
   long lVar49;
   ulong uVar50;
   uint uVar51;
   size_t __n_00;
   uint uVar52;
   uint uVar53;
   ulong uVar54;
   uint uVar55;
   uint uVar56;
   ulong *puVar57;
   long in_FS_OFFSET;
   undefined8 uVar58;
   undefined8 uVar59;
   undefined1 auVar60[16];
   undefined1 auVar61[16];
   undefined1 auVar62[16];
   undefined1 auVar63[16];
   undefined1 auVar64[16];
   long *local_b8;
   uint local_b0;
   undefined8 local_70;
   char *local_68;
   long *local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar36 = (Rect2*)GLES3::CopyEffects::get_singleton();
   if (pRVar36 == (Rect2*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("update_texture_atlas", "drivers/gles3/storage/texture_storage.cpp", 0x759, "Parameter \"copy_effects\" is null.", 0, 0);
         return;
      }

      goto LAB_001187b0;
   }

   if (this[0x160] != (TextureStorage)0x0) {
      uVar56 = *(uint*)( this + 0x164 );
      this[0x160] = (TextureStorage)0x0;
      lVar48 = Utilities::singleton;
      if (uVar56 == 0) {
         uVar56 = *(uint*)( this + 0x15c );
         if (uVar56 == 0) goto LAB_0011756d;
         LAB_00117d97:uVar38 = (ulong)uVar56;
         local_60 = (long*)0x0;
         CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write((CowData<GLES3::TextureStorage::TextureAtlas::SortItem>*)&local_60);
         uVar39 = uVar38 * 0x20 - 1;
         uVar39 = uVar39 | uVar39 >> 1;
         uVar39 = uVar39 | uVar39 >> 2;
         uVar39 = uVar39 | uVar39 >> 4;
         uVar39 = uVar39 | uVar39 >> 8;
         uVar39 = uVar39 | uVar39 >> 0x10;
         puVar40 = (undefined8*)Memory::alloc_static(( uVar39 | uVar39 >> 0x20 ) + 0x11, false);
         if (puVar40 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.");
         }
 else {
            local_60 = puVar40 + 2;
            *puVar40 = 1;
            plVar41 = local_60;
            do {
               *plVar41 = 0;
               plVar42 = plVar41 + 4;
               for (int i = 0; i < 3; i++) {
                  plVar41[( i + 1 )] = 0;
               }

               plVar41 = plVar42;
            }
 while ( puVar40 + uVar38 * 4 + 2 != plVar42 );
            puVar40[1] = uVar38;
         }

         plVar41 = *(long**)( this + 0x148 );
         if (plVar41 == (long*)0x0) {
            uVar56 = 8;
         }
 else {
            lVar48 = 0;
            uVar56 = 8;
            do {
               if (local_60 == (long*)0x0) {
                  lVar47 = 0;
                  LAB_00117fd8:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar48, lVar47, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar33 = (code*)invalidInstructionException();
                  ( *pcVar33 )();
               }

               lVar47 = local_60[-1];
               if (lVar47 <= lVar48) goto LAB_00117fd8;
               CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write((CowData<GLES3::TextureStorage::TextureAtlas::SortItem>*)&local_60);
               uVar39 = plVar41[2];
               if (( uVar39 == 0 ) || ( *(uint*)( this + 0xf4 ) <= (uint)uVar39 )) goto LAB_001181d1;
               lVar47 = ( ( uVar39 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar39 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               iVar34 = *(int*)( lVar47 + 0xe8 );
               if (iVar34 != (int)( uVar39 >> 0x20 )) {
                  joined_r0x0011819d:if (iVar34 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

                  LAB_001181d1:/* WARNING: Does not return */pcVar33 = (code*)invalidInstructionException();
                  ( *pcVar33 )();
               }

               if (*(char*)( lVar47 + 8 ) != '\0') {
                  if (( *(long*)( lVar47 + 0x10 ) == 0 ) || ( uVar39 = *(ulong*)( lVar47 + 0x10 ) * (uint*)( this + 0xf4 ) <= (uint)uVar39 )) goto LAB_001181d1;
                  lVar47 = ( ( uVar39 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar39 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                  iVar34 = *(int*)( lVar47 + 0xe8 );
                  if (iVar34 != (int)( uVar39 >> 0x20 )) goto joined_r0x0011819d;
               }

               iVar34 = *(int*)( lVar47 + 0x30 );
               iVar46 = *(int*)( lVar47 + 0x34 );
               plVar42 = local_60 + lVar48 * 4;
               uVar35 = iVar34 / 2 + 1;
               plVar42[1] = *(long*)( lVar47 + 0x30 );
               plVar42[2] = CONCAT44(iVar46 / 2 + 1, uVar35);
               if (uVar56 < uVar35) {
                  uVar56 = iVar34 - ( iVar34 >> 0x1f ) >> 2 | iVar34 / 2;
                  uVar56 = uVar56 | (int)uVar56 >> 2;
                  uVar56 = (int)uVar56 >> 4 | uVar56;
                  uVar56 = (int)uVar56 >> 8 | uVar56;
                  uVar56 = ( (int)uVar56 >> 0x10 | uVar56 ) + 1;
               }

               plVar44 = plVar41 + 2;
               plVar41 = (long*)*plVar41;
               lVar48 = lVar48 + 1;
               *plVar42 = *plVar44;
            }
 while ( plVar41 != (long*)0x0 );
         }

         Vector<GLES3::TextureStorage::TextureAtlas::SortItem>::sort_custom<_DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>,true>((Vector<GLES3::TextureStorage::TextureAtlas::SortItem>*)&local_68);
         if (local_60 == (long*)0x0) {
            local_b0 = 0;
         }
 else {
            local_b0 = (uint)local_60[-1];
         }

         CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write((CowData<GLES3::TextureStorage::TextureAtlas::SortItem>*)&local_60);
         plVar41 = local_60;
         local_b8 = local_60;
         plVar42 = local_60 + (long)(int)local_b0 * 4;
         LAB_00118236:__n = (ulong)uVar56 * 4;
         if (uVar56 == 0) {
            LAB_001183d4:puVar57 = (ulong*)0x0;
         }
 else {
            uVar39 = __n - 1;
            uVar39 = uVar39 | uVar39 >> 1;
            uVar39 = uVar39 | uVar39 >> 2;
            uVar39 = uVar39 | uVar39 >> 4;
            uVar39 = uVar39 | uVar39 >> 8;
            uVar39 = uVar39 | uVar39 >> 0x10;
            puVar43 = (ulong*)Memory::alloc_static(( uVar39 | uVar39 >> 0x20 ) + 0x11, false);
            if (puVar43 == (ulong*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0);
               goto LAB_001183d4;
            }

            __src = puVar43 + 2;
            *puVar43 = 1;
            puVar43[1] = (ulong)uVar56;
            puVar57 = __src;
            if (1 < *puVar43) {
               uVar38 = puVar43[1];
               uVar39 = 0x10;
               __n_00 = uVar38 * 4;
               if (__n_00 != 0) {
                  uVar39 = __n_00 - 1 | __n_00 - 1 >> 1;
                  uVar39 = uVar39 | uVar39 >> 2;
                  uVar39 = uVar39 | uVar39 >> 4;
                  uVar39 = uVar39 | uVar39 >> 8;
                  uVar39 = uVar39 | uVar39 >> 0x10;
                  uVar39 = ( uVar39 | uVar39 >> 0x20 ) + 0x11;
               }

               puVar40 = (undefined8*)Memory::alloc_static(uVar39, false);
               if (puVar40 == (undefined8*)0x0) {
                  _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0);
               }
 else {
                  puVar57 = puVar40 + 2;
                  *puVar40 = 1;
                  puVar40[1] = uVar38;
                  memcpy(puVar57, __src, __n_00);
                  LOCK();
                  *puVar43 = *puVar43 - 1;
                  UNLOCK();
                  if (*puVar43 == 0) {
                     Memory::free_static(puVar43, false);
                  }

               }

            }

         }

         memset(puVar57, 0, __n);
         if ((int)local_b0 < 1) {
            puVar43 = puVar57 + -2;
            LOCK();
            *puVar43 = *puVar43 - 1;
            UNLOCK();
            if (*puVar43 == 0) {
               iVar34 = 0;
               goto LAB_001183fb;
            }

            *(uint*)( this + 0x16c ) = uVar56 * 2;
            *(undefined4*)( this + 0x170 ) = 0;
            goto LAB_00118621;
         }

         uVar35 = 0;
         plVar44 = plVar41;
         do {
            uVar52 = *(uint*)( plVar44 + 2 );
            uVar53 = 0;
            iVar34 = 0x7fffffff;
            uVar55 = 0xffffffff;
            uVar51 = uVar52;
            do {
               iVar46 = 0;
               uVar45 = uVar53;
               if (0 < (int)uVar52) {
                  do {
                     iVar1 = *(int*)( (long)puVar57 + (ulong)uVar45 * 4 );
                     if (( iVar46 < iVar1 ) && ( iVar46 = iVar34 < iVar1 )) goto LAB_00118335;
                     uVar45 = uVar45 + 1;
                  }
 while ( uVar45 != uVar51 );
               }

               if (iVar46 < iVar34) {
                  iVar34 = iVar46;
                  uVar55 = uVar53;
               }

               LAB_00118335:uVar53 = uVar53 + 1;
               uVar51 = uVar51 + 1;
            }
 while ( uVar53 <= uVar56 - uVar52 );
            if (0 < (int)uVar52) {
               lVar48 = 0;
               do {
                  *(int*)( (long)puVar57 + lVar48 * 4 + (long)(int)uVar55 * 4 ) = *(int*)( (long)plVar44 + 0x14 ) + iVar34;
                  lVar48 = lVar48 + 1;
               }
 while ( (int)lVar48 < (int)plVar44[2] );
            }

            *(int*)( (long)plVar44 + 0x1c ) = iVar34;
            uVar52 = iVar34 + *(int*)( (long)plVar44 + 0x14 );
            *(uint*)( plVar44 + 3 ) = uVar55;
            if ((int)uVar35 < (int)uVar52) {
               uVar35 = uVar52;
            }

            plVar44 = plVar44 + 4;
         }
 while ( plVar44 != plVar42 );
         uVar52 = uVar56 * 2;
         if (uVar52 < uVar35) {
            puVar57 = puVar57 + -2;
            LOCK();
            *puVar57 = *puVar57 - 1;
            UNLOCK();
            uVar56 = uVar52;
            if (*puVar57 == 0) {
               Memory::free_static(puVar57, false);
            }

            goto LAB_00118236;
         }

         uVar35 = uVar35 * 2 - 1;
         puVar43 = puVar57 + -2;
         uVar35 = (int)uVar35 >> 1 | uVar35;
         uVar35 = (int)uVar35 >> 2 | uVar35;
         uVar35 = (int)uVar35 >> 4 | uVar35;
         uVar35 = (int)uVar35 >> 8 | uVar35;
         iVar34 = ( (int)uVar35 >> 0x10 | uVar35 ) + 1;
         LOCK();
         *puVar43 = *puVar43 - 1;
         UNLOCK();
         if (*puVar43 == 0) {
            LAB_001183fb:Memory::free_static(puVar57 + -2, false);
            *(uint*)( this + 0x16c ) = uVar56 * 2;
            *(int*)( this + 0x170 ) = iVar34;
            if (0 < (int)local_b0) goto LAB_00118420;
         }
 else {
            *(uint*)( this + 0x16c ) = uVar52;
            *(int*)( this + 0x170 ) = iVar34;
            LAB_00118420:uVar58 = _LC298;
            do {
               lVar48 = *(long*)( this + 0x138 );
               local_58 = uVar58;
               if (( lVar48 == 0 ) || ( *(int*)( this + 0x15c ) == 0 )) {
                  LAB_00118837:local_50 = Vector2i::operator *((Vector2i*)( local_b8 + 3 ), 2);
                  local_48 = Vector2i::operator +((Vector2i*)&local_50, (Vector2i*)&local_58);
                  _DAT_00000004 = Vector2i::operator_cast_to_Vector2((Vector2i*)&local_48);
                  /* WARNING: Does not return */
                  pcVar33 = (code*)invalidInstructionException();
                  ( *pcVar33 )();
               }

               uVar50 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
               lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
               uVar39 = *local_b8 * 0x3ffff - 1;
               uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
               uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
               uVar39 = uVar39 >> 0x16 ^ uVar39;
               uVar38 = uVar39 & 0xffffffff;
               if ((int)uVar39 == 0) {
                  uVar38 = 1;
               }

               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar38 * lVar47;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar50;
               lVar49 = SUB168(auVar13 * auVar29, 8);
               uVar56 = *(uint*)( *(long*)( this + 0x140 ) + lVar49 * 4 );
               uVar35 = SUB164(auVar13 * auVar29, 8);
               if (uVar56 == 0) goto LAB_00118837;
               uVar52 = 0;
               while (( (uint)uVar38 != uVar56 || ( *local_b8 != *(long*)( *(long*)( lVar48 + lVar49 * 8 ) + 0x10 ) ) )) {
                  uVar52 = uVar52 + 1;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = ( ulong )(uVar35 + 1) * lVar47;
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = uVar50;
                  lVar49 = SUB168(auVar14 * auVar30, 8);
                  uVar56 = *(uint*)( *(long*)( this + 0x140 ) + lVar49 * 4 );
                  uVar35 = SUB164(auVar14 * auVar30, 8);
                  if (( uVar56 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar56 * lVar47,auVar31._8_8_ = 0,auVar31._0_8_ = uVar50,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + uVar35 ) - SUB164(auVar15 * auVar31, 8)) * lVar47,auVar32._8_8_ = 0,auVar32._0_8_ = uVar50,SUB164(auVar16 * auVar32, 8) < uVar52) goto LAB_00118837;
               }
;
               lVar48 = *(long*)( lVar48 + (ulong)uVar35 * 8 );
               local_50 = Vector2i::operator *((Vector2i*)( local_b8 + 3 ), 2);
               local_48 = Vector2i::operator +((Vector2i*)&local_50, (Vector2i*)&local_58);
               uVar58 = Vector2i::operator_cast_to_Vector2((Vector2i*)&local_48);
               this_00 = (Vector2i*)( local_b8 + 1 );
               local_b8 = local_b8 + 4;
               *(undefined8*)( lVar48 + 0x1c ) = uVar58;
               uVar58 = Vector2i::operator_cast_to_Vector2(this_00);
               *(undefined8*)( lVar48 + 0x24 ) = uVar58;
               uVar58 = Vector2i::operator_cast_to_Vector2((Vector2i*)( this + 0x16c ));
               auVar60._8_8_ = 0;
               auVar60._0_8_ = *(ulong*)( lVar48 + 0x1c );
               auVar63._8_8_ = __LC55;
               auVar63._0_8_ = uVar58;
               auVar61 = divps(auVar60, auVar63);
               *(long*)( lVar48 + 0x1c ) = auVar61._0_8_;
               uVar59 = Vector2i::operator_cast_to_Vector2((Vector2i*)( this + 0x16c ));
               uVar58 = _LC298;
               auVar62._8_8_ = 0;
               auVar62._0_8_ = *(ulong*)( lVar48 + 0x24 );
               auVar64._8_8_ = __LC55;
               auVar64._0_8_ = uVar59;
               auVar61 = divps(auVar62, auVar64);
               *(long*)( lVar48 + 0x24 ) = auVar61._0_8_;
            }
 while ( local_b8 != plVar42 );
         }

         LAB_00118621:if (local_60 != (long*)0x0) {
            LOCK();
            plVar41 = local_60 + -2;
            *plVar41 = *plVar41 + -1;
            UNLOCK();
            if (*plVar41 == 0) {
               Memory::free_static(local_60 + -2, false);
            }

         }

      }
 else {
         local_68 = (char*)CONCAT44(local_68._4_4_, uVar56);
         this_01 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
         if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
            uVar38 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
            uVar39 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
            uVar35 = ( uVar56 >> 0x10 ^ uVar56 ) * -0x7a143595;
            uVar35 = ( uVar35 ^ uVar35 >> 0xd ) * -0x3d4d51cb;
            uVar52 = uVar35 ^ uVar35 >> 0x10;
            if (uVar35 == uVar35 >> 0x10) {
               uVar52 = 1;
               uVar50 = uVar39;
            }
 else {
               uVar50 = uVar52 * uVar39;
            }

            auVar61._8_8_ = 0;
            auVar61._0_8_ = uVar38;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar50;
            lVar47 = SUB168(auVar61 * auVar25, 8);
            uVar35 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar47 * 4 );
            iVar34 = SUB164(auVar61 * auVar25, 8);
            if (uVar35 != 0) {
               uVar51 = 0;
               do {
                  if (( uVar52 == uVar35 ) && ( uVar56 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar47 * 8 ) + 0x10 ) )) {
                     ( *_glad_glDeleteTextures )(1, &local_68);
                     puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_01, (uint*)&local_68);
                     *(long*)( lVar48 + 0x108 ) = *(long*)( lVar48 + 0x108 ) - ( ulong ) * puVar37;
                     HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_01, (uint*)&local_68);
                     goto LAB_00117d63;
                  }

                  uVar51 = uVar51 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( iVar34 + 1 ) * uVar39;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar38;
                  lVar47 = SUB168(auVar10 * auVar26, 8);
                  uVar35 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar47 * 4 );
                  iVar34 = SUB164(auVar10 * auVar26, 8);
               }
 while ( ( uVar35 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar35 * uVar39,auVar27._8_8_ = 0,auVar27._0_8_ = uVar38,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar34 ) - SUB164(auVar11 * auVar27, 8) ) * uVar39,auVar28._8_8_ = 0,auVar28._0_8_ = uVar38,uVar51 <= SUB164(auVar12 * auVar28, 8) );
            }

         }

         _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.");
         LAB_00117d63:*(undefined4*)( this + 0x164 ) = 0;
         ( *_glad_glDeleteFramebuffers )(1);
         uVar56 = *(uint*)( this + 0x15c );
         *(undefined4*)( this + 0x168 ) = 0;
         if (uVar56 != 0) goto LAB_00117d97;
         LAB_0011756d:*(undefined8*)( this + 0x16c ) = _LC241;
      }

      ( *_glad_glGenTextures )(1, this + 0x164);
      ( *_glad_glActiveTexture )(0x84c0);
      ( *_glad_glBindTexture )(0xde1, *(undefined4*)( this + 0x164 ));
      ( *_glad_glTexImage2D )(0xde1, 0, 0x8058, *(undefined4*)( this + 0x16c ), *(undefined4*)( this + 0x170 ), 0, 0x1908, 0x1401, 0);
      lVar48 = Utilities::singleton;
      local_68 = "Texture atlas";
      local_70 = 0;
      local_60 = (long*)0xd;
      String::parse_latin1((StrRange*)&local_70);
      uVar56 = *(int*)( this + 0x16c ) * *(int*)( this + 0x170 ) * 4;
      local_68 = (char*)CONCAT44(local_68._4_4_, *(undefined4*)( this + 0x164 ));
      plVar41 = (long*)( lVar48 + 0x108 );
      *plVar41 = *plVar41 + (ulong)uVar56;
      puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar48 + 200 ), (uint*)&local_68);
      *puVar37 = uVar56;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
      ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2601);
      ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
      ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
      ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
      ( *_glad_glTexParameteri )(0xde1, 0x813d, 1);
      ( *_glad_glGenFramebuffers )(1, this + 0x168);
      ( *_glad_glBindFramebuffer )(0x8d40, *(undefined4*)( this + 0x168 ));
      ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8ce0, 0xde1, *(undefined4*)( this + 0x164 ), 0);
      iVar34 = ( *_glad_glCheckFramebufferStatus )(0x8d40);
      if (iVar34 == 0x8cd5) {
         ( *_glad_glViewport )(0, 0, *(undefined4*)( this + 0x16c ), *(undefined4*)( this + 0x170 ));
         ( *_glad_glClearColor )();
         ( *_glad_glClear )(0x4000);
         ( *_glad_glBindTexture )(0xde1, 0);
         ( *_glad_glDisable )(0xbe2);
         if (*(int*)( this + 0x15c ) != 0) {
            for (puVar40 = *(undefined8**)( this + 0x148 ); puVar40 != (undefined8*)0x0; puVar40 = (undefined8*)*puVar40) {
               uVar39 = puVar40[2];
               if (( *(long*)( this + 0x138 ) != 0 ) && ( *(int*)( this + 0x15c ) != 0 )) {
                  uVar54 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ));
                  lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x158 ) * 8 );
                  uVar38 = uVar39 * 0x3ffff - 1;
                  uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
                  uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
                  uVar38 = uVar38 >> 0x16 ^ uVar38;
                  uVar50 = uVar38 & 0xffffffff;
                  if ((int)uVar38 == 0) {
                     uVar50 = 1;
                  }

                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar50 * lVar48;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar54;
                  lVar47 = SUB168(auVar6 * auVar21, 8);
                  uVar56 = *(uint*)( *(long*)( this + 0x140 ) + lVar47 * 4 );
                  iVar34 = SUB164(auVar6 * auVar21, 8);
                  if (uVar56 != 0) {
                     uVar35 = 0;
                     while (( uVar56 != (uint)uVar50 || ( uVar39 != *(ulong*)( *(long*)( *(long*)( this + 0x138 ) + lVar47 * 8 ) + 0x10 ) ) )) {
                        uVar35 = uVar35 + 1;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = ( ulong )(iVar34 + 1) * lVar48;
                        auVar22._8_8_ = 0;
                        auVar22._0_8_ = uVar54;
                        lVar47 = SUB168(auVar7 * auVar22, 8);
                        uVar56 = *(uint*)( *(long*)( this + 0x140 ) + lVar47 * 4 );
                        iVar34 = SUB164(auVar7 * auVar22, 8);
                        if (( uVar56 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar56 * lVar48,auVar23._8_8_ = 0,auVar23._0_8_ = uVar54,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x158 ) * 4 ) + iVar34 ) - SUB164(auVar8 * auVar23, 8)) * lVar48,auVar24._8_8_ = 0,auVar24._0_8_ = uVar54,SUB164(auVar9 * auVar24, 8) < uVar35) break;
                     }
;
                  }

               }

               if (( uVar39 == 0 ) || ( *(uint*)( this + 0xf4 ) <= (uint)uVar39 )) goto LAB_001180aa;
               lVar48 = ( ( uVar39 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar39 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
               iVar34 = *(int*)( lVar48 + 0xe8 );
               if (iVar34 != (int)( uVar39 >> 0x20 )) {
                  LAB_0011806b:if (iVar34 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

                  LAB_001180aa:( *_glad_glActiveTexture )(0x84c0);
                  /* WARNING: Does not return */
                  pcVar33 = (code*)invalidInstructionException();
                  ( *pcVar33 )();
               }

               if (*(char*)( lVar48 + 8 ) != '\0') {
                  if (*(long*)( lVar48 + 0x10 ) == 0) goto LAB_001180aa;
                  uVar39 = *(ulong*)( lVar48 + 0x10 );
                  if (*(uint*)( this + 0xf4 ) <= (uint)uVar39) goto LAB_001180aa;
                  lVar48 = ( ( uVar39 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar39 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
                  iVar34 = *(int*)( lVar48 + 0xe8 );
                  if (iVar34 != (int)( uVar39 >> 0x20 )) goto LAB_0011806b;
               }

               ( *_glad_glActiveTexture )(0x84c0);
               ( *_glad_glBindTexture )(0xde1, *(undefined4*)( lVar48 + 0x74 ));
               GLES3::CopyEffects::copy_to_rect(pRVar36);
            }

         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00117c0f. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *_glad_glBindFramebuffer )(0x8d40, system_fbo);
            return;
         }

         goto LAB_001187b0;
      }

      ( *_glad_glDeleteFramebuffers )(1, this + 0x168);
      lVar48 = Utilities::singleton;
      uVar56 = *(uint*)( this + 0x164 );
      *(undefined4*)( this + 0x168 ) = 0;
      local_68 = (char*)CONCAT44(local_68._4_4_, uVar56);
      if (( *(long*)( lVar48 + 0xd0 ) != 0 ) && ( *(int*)( lVar48 + 0xf4 ) != 0 )) {
         uVar39 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar48 + 0xf0 ) * 8 );
         uVar35 = ( uVar56 >> 0x10 ^ uVar56 ) * -0x7a143595;
         uVar35 = ( uVar35 ^ uVar35 >> 0xd ) * -0x3d4d51cb;
         local_b0 = uVar35 ^ uVar35 >> 0x10;
         if (uVar35 == uVar35 >> 0x10) {
            local_b0 = 1;
            uVar38 = uVar39;
         }
 else {
            uVar38 = local_b0 * uVar39;
         }

         uVar50 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar48 + 0xf0 ) * 4 ));
         auVar2._8_8_ = 0;
         auVar2._0_8_ = uVar50;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar38;
         lVar47 = SUB168(auVar2 * auVar17, 8);
         uVar35 = *(uint*)( *(long*)( lVar48 + 0xd8 ) + lVar47 * 4 );
         iVar46 = SUB164(auVar2 * auVar17, 8);
         if (uVar35 != 0) {
            uVar52 = 0;
            do {
               if (( uVar35 == local_b0 ) && ( uVar56 == *(uint*)( *(long*)( *(long*)( lVar48 + 0xd0 ) + lVar47 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteTextures )(1, (CowData<char32_t>*)&local_68);
                  puVar37 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar48 + 200 ), (uint*)&local_68);
                  *(long*)( lVar48 + 0x108 ) = *(long*)( lVar48 + 0x108 ) - ( ulong ) * puVar37;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar48 + 200 ), (uint*)&local_68);
                  goto LAB_001178b5;
               }

               uVar52 = uVar52 + 1;
               auVar3._8_8_ = 0;
               auVar3._0_8_ = ( iVar46 + 1 ) * uVar39;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar50;
               lVar47 = SUB168(auVar3 * auVar18, 8);
               uVar35 = *(uint*)( *(long*)( lVar48 + 0xd8 ) + lVar47 * 4 );
               iVar46 = SUB164(auVar3 * auVar18, 8);
            }
 while ( ( uVar35 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar35 * uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = uVar50,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar48 + 0xf0 ) * 4 ) + iVar46 ) - SUB164(auVar4 * auVar19, 8) ) * uVar39,auVar20._8_8_ = 0,auVar20._0_8_ = uVar50,uVar52 <= SUB164(auVar5 * auVar20, 8) );
         }

      }

      _err_print_error("texture_free_data", "drivers/gles3/storage/../storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_001178b5:*(undefined4*)( this + 0x164 ) = 0;
      if (iVar34 == 0x8cd6) {
         local_70 = 0;
         local_68 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
         local_60 = (long*)0x24;
         String::parse_latin1((StrRange*)&local_70);
      }
 else if (iVar34 == 0x8cd7) {
         local_70 = 0;
         local_68 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
         local_60 = (long*)0x2c;
         String::parse_latin1((StrRange*)&local_70);
      }
 else if (iVar34 == 0x8cdb) {
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER");
      }
 else if (iVar34 == 0x8cdc) {
         local_70 = 0;
         local_68 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
         local_60 = (long*)0x25;
         String::parse_latin1((StrRange*)&local_70);
      }
 else {
         itos((long)&local_70);
      }

      operator+((char *)&
      local_68,(String*)"Could not create texture atlas, status: ";
      _err_print_error("update_texture_atlas", "drivers/gles3/storage/texture_storage.cpp", 0x7eb, (CowData<char32_t>*)&local_68, 0, 1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001187b0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Vector<unsigned int>::push_back(unsigned int) [clone .isra.0] */void Vector<unsigned_int>::push_back(Vector<unsigned_int> *this, uint param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<unsigned_int>::resize<false>((CowData<unsigned_int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<unsigned_int>::_copy_on_write((CowData<unsigned_int>*)( this + 8 ));
            *(uint*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* GLES3::TextureStorage::render_target_set_override(RID, RID, RID, RID, RID) */void GLES3::TextureStorage::render_target_set_override(TextureStorage *param_1, ulong param_2, long param_3, long param_4, undefined8 param_5) {
   long *plVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   long lVar4;
   uint uVar5;
   long lVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   char *pcVar12;
   int iVar13;
   Element *pEVar14;
   undefined8 uVar15;
   Element *pEVar16;
   RenderTarget *pRVar17;
   Element *pEVar18;
   long in_FS_OFFSET;
   bool bVar19;
   undefined4 uVar20;
   undefined8 uVar21;
   Vector<unsigned_int> local_90[8];
   long local_88[2];
   uint local_78;
   undefined8 local_70;
   undefined4 local_68;
   undefined8 local_64;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x194 ) )) {
      pRVar17 = (RenderTarget*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 400 ) ) * 0xf0 + *(long*)( *(long*)( param_1 + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 400 ) ) * 8 ) );
      if (*(int*)( pRVar17 + 0xe8 ) == (int)( param_2 >> 0x20 )) {
         if (pRVar17[0x76] != (RenderTarget)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar15 = 0x9de;
               pcVar12 = "Condition \"rt->direct_to_screen\" is true.";
               goto LAB_00118fb6;
            }

            goto LAB_00119157;
         }

         *(undefined8*)( pRVar17 + 0xa8 ) = param_5;
         if (( *(long*)( pRVar17 + 0x98 ) != param_3 ) || ( param_4 != *(long*)( pRVar17 + 0xa0 ) )) {
            if (param_4 == 0 && param_3 == 0) {
               _clear_render_target(param_1, pRVar17);
               if (( 0 < *(int*)( pRVar17 + 8 ) ) && ( 0 < *(int*)( pRVar17 + 0xc ) )) {
                  if (pRVar17[0x76] == (RenderTarget)0x0) {
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        _update_render_target(param_1, pRVar17);
                        return;
                     }

                     goto LAB_00119157;
                  }

                  *(undefined4*)( pRVar17 + 0x20 ) = system_fbo;
               }

            }
 else {
               if (pRVar17[0x90] == (RenderTarget)0x0) {
                  _clear_render_target(param_1, pRVar17);
               }

               pRVar17[0x90] = (RenderTarget)0x1;
               iVar13 = (int)( (ulong)param_3 >> 0x20 );
               *(long*)( pRVar17 + 0x98 ) = param_3;
               *(long*)( pRVar17 + 0xa0 ) = param_4;
               uVar20 = system_fbo;
               uVar5 = ( (int)param_3 * 0x16a88000 | ( uint )((int)param_3 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ 0x7f07c65;
               uVar5 = ( uVar5 << 0xd | uVar5 >> 0x13 ) * 5 + 0xe6546b64 ^ ( iVar13 * 0x16a88000 | ( uint )(iVar13 * -0x3361d2af) >> 0x11 ) * 0x1b873593;
               uVar5 = ( (int)param_4 * 0x16a88000 | ( uint )((int)param_4 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar5 << 0xd | uVar5 >> 0x13 ) * 5 + 0xe6546b64;
               iVar13 = (int)( (ulong)param_4 >> 0x20 );
               uVar5 = ( iVar13 * 0x16a88000 | ( uint )(iVar13 * -0x3361d2af) >> 0x11 ) * 0x1b873593 ^ ( uVar5 << 0xd | uVar5 >> 0x13 ) * 5 + 0xe6546b64;
               uVar5 = ( uVar5 << 0xd | uVar5 >> 0x13 ) * 5 + 0xe6546b64;
               uVar5 = ( uVar5 >> 0x10 ^ uVar5 ) * -0x7a143595;
               uVar5 = ( uVar5 ^ uVar5 >> 0xd ) * -0x3d4d51cb;
               uVar5 = uVar5 ^ uVar5 >> 0x10;
               lVar6 = *(long*)( pRVar17 + 0xb0 );
               if (lVar6 != 0) {
                  while (lVar6 = *(long*)( lVar6 + 0x10 ),*(long*)( pRVar17 + 0xb8 ) != lVar6) {
                     while (*(uint*)( lVar6 + 0x30 ) <= uVar5) {
                        if (uVar5 <= *(uint*)( lVar6 + 0x30 )) {
                           *(undefined8*)( pRVar17 + 0x20 ) = *(undefined8*)( lVar6 + 0x38 );
                           uVar20 = *(undefined4*)( lVar6 + 0x40 );
                           uVar15 = *(undefined8*)( lVar6 + 0x44 );
                           *(long*)( pRVar17 + 200 ) = param_3;
                           *(undefined4*)( pRVar17 + 0x28 ) = uVar20;
                           *(undefined8*)( pRVar17 + 8 ) = uVar15;
                           goto LAB_00118d62;
                        }

                        lVar6 = *(long*)( lVar6 + 8 );
                        if (*(long*)( pRVar17 + 0xb8 ) == lVar6) goto LAB_00118b31;
                     }
;
                  }
;
               }

               LAB_00118b31:if (( *(int*)( pRVar17 + 8 ) < 1 ) || ( *(int*)( pRVar17 + 0xc ) < 1 )) {
                  LAB_00118b5a:uVar20 = *(undefined4*)( pRVar17 + 0x20 );
               }
 else {
                  if (pRVar17[0x76] == (RenderTarget)0x0) {
                     _update_render_target(param_1, pRVar17);
                     goto LAB_00118b5a;
                  }

                  *(undefined4*)( pRVar17 + 0x20 ) = system_fbo;
               }

               uVar3 = *(undefined4*)( pRVar17 + 0x28 );
               local_88[0] = 0;
               uVar15 = *(undefined8*)( pRVar17 + 8 );
               uVar21 = CONCAT44(*(uint*)( pRVar17 + 0x24 ), uVar20);
               if (param_3 == 0) {
                  Vector<unsigned_int>::push_back(local_90, *(uint*)( pRVar17 + 0x24 ));
               }

               if (param_4 == 0) {
                  Vector<unsigned_int>::push_back(local_90, *(uint*)( pRVar17 + 0x28 ));
               }

               lVar6 = local_88[0];
               pEVar10 = *(Element**)( pRVar17 + 0xb0 );
               if (pEVar10 == (Element*)0x0) {
                  pEVar10 = (Element*)operator_new(0x60, DefaultAllocator::alloc);
                  local_64 = 0;
                  *(undefined1(*) [16])( pEVar10 + 0x20 ) = (undefined1[16])0x0;
                  uVar2 = *(undefined8*)( pRVar17 + 0xb8 );
                  *(undefined4*)( pEVar10 + 0x30 ) = 0;
                  *(undefined8*)( pEVar10 + 0x38 ) = 0;
                  *(undefined4*)( pEVar10 + 0x40 ) = 0;
                  *(undefined8*)( pEVar10 + 0x44 ) = 0;
                  *(undefined8*)( pEVar10 + 0x58 ) = 0;
                  *(Element**)( pRVar17 + 0xb0 ) = pEVar10;
                  *(undefined4*)pEVar10 = 1;
                  for (int i = 0; i < 3; i++) {
                     *(undefined8*)( pEVar10 + ( 8*i + 8 ) ) = uVar2;
                  }

               }
 else {
                  pEVar7 = *(Element**)( pEVar10 + 0x10 );
                  while (pEVar7 != *(Element**)( pRVar17 + 0xb8 )) {
                     pEVar10 = pEVar7;
                     if (uVar5 < *(uint*)( pEVar7 + 0x30 )) {
                        pEVar7 = *(Element**)( pEVar7 + 0x10 );
                     }
 else {
                        if (uVar5 <= *(uint*)( pEVar7 + 0x30 )) {
                           *(undefined8*)( pEVar7 + 0x38 ) = uVar21;
                           *(undefined4*)( pEVar7 + 0x40 ) = uVar3;
                           *(undefined8*)( pEVar7 + 0x44 ) = uVar15;
                           if (*(long*)( pEVar7 + 0x58 ) != local_88[0]) {
                              CowData<unsigned_int>::_ref((CowData<unsigned_int>*)( pEVar7 + 0x58 ), (CowData*)local_88);
                           }

                           goto LAB_00118e37;
                        }

                        pEVar7 = *(Element**)( pEVar7 + 8 );
                     }

                  }
;
               }

               pEVar7 = (Element*)operator_new(0x60, DefaultAllocator::alloc);
               lVar6 = local_88[0];
               local_50[0] = 0;
               local_78 = uVar5;
               local_70 = uVar21;
               local_68 = uVar3;
               local_64 = uVar15;
               if (local_88[0] != 0) {
                  CowData<unsigned_int>::_ref((CowData<unsigned_int>*)local_50, (CowData*)local_88);
               }

               lVar4 = local_50[0];
               *(undefined4*)( pEVar7 + 0x40 ) = local_68;
               *(undefined4*)pEVar7 = 0;
               *(undefined8*)( pEVar7 + 0x28 ) = 0;
               *(uint*)( pEVar7 + 0x30 ) = local_78;
               *(undefined8*)( pEVar7 + 0x38 ) = local_70;
               *(undefined8*)( pEVar7 + 0x44 ) = local_64;
               *(undefined8*)( pEVar7 + 0x58 ) = 0;
               *(undefined1(*) [16])( pEVar7 + 8 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( pEVar7 + 0x18 ) = (undefined1[16])0x0;
               if (local_50[0] != 0) {
                  CowData<unsigned_int>::_ref((CowData<unsigned_int>*)( pEVar7 + 0x58 ), (CowData*)local_50);
                  LOCK();
                  plVar1 = (long*)( lVar4 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  lVar6 = local_88[0];
                  if (*plVar1 == 0) {
                     Memory::free_static((void*)( local_50[0] + -0x10 ), false);
                     lVar6 = local_88[0];
                  }

               }

               *(Element**)( pEVar7 + 0x18 ) = pEVar10;
               pEVar14 = *(Element**)( pRVar17 + 0xb8 );
               *(Element**)( pEVar7 + 8 ) = pEVar14;
               *(Element**)( pEVar7 + 0x10 ) = pEVar14;
               if (( *(Element**)( pRVar17 + 0xb0 ) == pEVar10 ) || ( uVar5 < *(uint*)( pEVar10 + 0x30 ) )) {
                  *(Element**)( pEVar10 + 0x10 ) = pEVar7;
                  pEVar16 = *(Element**)( pRVar17 + 0xb8 );
                  pEVar11 = *(Element**)( pEVar7 + 0x10 );
                  pEVar18 = *(Element**)( pRVar17 + 0xb0 );
                  if (pEVar14 == pEVar16) {
                     pEVar9 = pEVar10;
                     pEVar8 = pEVar10;
                     if (pEVar7 == *(Element**)( pEVar10 + 8 )) goto LAB_00118dc0;
                     goto LAB_00118dcd;
                  }

                  LAB_00118eb0:do {
                     pEVar9 = pEVar14;
                     pEVar14 = *(Element**)( pEVar9 + 0x10 );
                  }
 while ( *(Element**)( pEVar9 + 0x10 ) != pEVar16 );
               }
 else {
                  *(Element**)( pEVar10 + 8 ) = pEVar7;
                  pEVar16 = *(Element**)( pRVar17 + 0xb8 );
                  pEVar18 = *(Element**)( pRVar17 + 0xb0 );
                  pEVar8 = pEVar10;
                  pEVar11 = pEVar14;
                  pEVar14 = *(Element**)( pEVar7 + 8 );
                  if (*(Element**)( pEVar7 + 8 ) != pEVar16) goto LAB_00118eb0;
                  LAB_00118dc0:do {
                     pEVar9 = *(Element**)( pEVar8 + 0x18 );
                     bVar19 = pEVar8 == *(Element**)( pEVar9 + 8 );
                     pEVar8 = pEVar9;
                  }
 while ( bVar19 );
                  LAB_00118dcd:if (pEVar9 == pEVar18) {
                     pEVar9 = (Element*)0x0;
                  }

               }

               *(Element**)( pEVar7 + 0x20 ) = pEVar9;
               if (*(Element**)( pRVar17 + 0xb8 ) == pEVar11) {
                  pEVar14 = pEVar7;
                  pEVar16 = pEVar10;
                  if (*(Element**)( pEVar10 + 0x10 ) == pEVar7) {
                     do {
                        pEVar10 = *(Element**)( pEVar16 + 0x18 );
                        bVar19 = pEVar16 == *(Element**)( pEVar10 + 0x10 );
                        pEVar14 = pEVar16;
                        pEVar16 = pEVar10;
                     }
 while ( bVar19 );
                  }

                  if (*(Element**)( pRVar17 + 0xb0 ) != pEVar14) goto LAB_00118e04;
                  *(undefined8*)( pEVar7 + 0x28 ) = 0;
                  if (pEVar9 != (Element*)0x0) goto LAB_00118e0d;
               }
 else {
                  do {
                     pEVar10 = pEVar11;
                     pEVar11 = *(Element**)( pEVar10 + 8 );
                  }
 while ( *(Element**)( pRVar17 + 0xb8 ) != *(Element**)( pEVar10 + 8 ) );
                  LAB_00118e04:*(Element**)( pEVar7 + 0x28 ) = pEVar10;
                  if (pEVar9 != (Element*)0x0) {
                     LAB_00118e0d:*(Element**)( pEVar9 + 0x28 ) = pEVar7;
                     pEVar10 = *(Element**)( pEVar7 + 0x28 );
                     if (pEVar10 == (Element*)0x0) goto LAB_00118e1e;
                  }

                  *(Element**)( pEVar10 + 0x20 ) = pEVar7;
               }

               LAB_00118e1e:*(int*)( pRVar17 + 0xc0 ) = *(int*)( pRVar17 + 0xc0 ) + 1;
               RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)( pRVar17 + 0xb0 ), pEVar7);
               LAB_00118e37:if (lVar6 != 0) {
                  LOCK();
                  plVar1 = (long*)( lVar6 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        Memory::free_static((void*)( local_88[0] + -0x10 ), false);
                        return;
                     }

                     goto LAB_00119157;
                  }

               }

            }

         }

         LAB_00118d62:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00119157;
      }

      if (*(int*)( pRVar17 + 0xe8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar15 = 0x9dd;
      pcVar12 = "Parameter \"rt\" is null.";
      LAB_00118fb6:_err_print_error("render_target_set_override", "drivers/gles3/storage/texture_storage.cpp", uVar15, pcVar12, 0, 0);
      return;
   }

   LAB_00119157:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::render_target_create() */undefined8 GLES3::TextureStorage::render_target_create(TextureStorage *this) {
   long *plVar1;
   long lVar2;
   Image *pIVar3;
   void *pvVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
   undefined8 local_1f8;
   undefined2 local_1f0;
   undefined1 local_1ee;
   undefined8 local_1e8;
   undefined1 local_1d8[16];
   undefined8 local_1c8;
   undefined8 uStack_1c0;
   undefined8 local_1b8;
   undefined8 uStack_1b0;
   undefined4 local_1a8;
   undefined8 local_1a4;
   undefined8 uStack_19c;
   undefined8 local_194;
   undefined4 local_18c;
   undefined2 local_188;
   undefined1 local_186;
   undefined4 local_184;
   undefined2 local_180;
   RenderTarget *local_178;
   Image *local_170;
   undefined8 local_160;
   undefined1 local_158;
   undefined8 local_150;
   undefined8 local_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined8 local_130;
   undefined1 local_128[16];
   undefined8 local_118;
   RenderTarget local_108[8];
   int iStack_100;
   int iStack_fc;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined1 local_e8[16];
   undefined8 local_d8;
   undefined8 local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   void *local_58;
   undefined8 *local_50;
   undefined8 local_48;
   undefined8 local_40;
   undefined4 local_38;
   undefined4 uStack_34;
   undefined4 uStack_30;
   undefined4 uStack_2c;
   undefined1 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   _local_108 = (undefined1[16])0x0;
   local_f8 = 0x100000001;
   local_d0 = 0x805800000000;
   local_c8 = 0x140100001908;
   local_c0 = 0x500000004;
   local_e8 = (undefined1[16])0x0;
   local_a8 = _LC240;
   local_b8 = (undefined1[16])0x0;
   local_50 = &_GlobalNilClass::_nil;
   local_70 = (undefined1[16])0x0;
   local_f0 = 0;
   local_d8 = 0;
   local_a0 = 1;
   local_98 = 0;
   local_90 = 0;
   local_88 = 0;
   local_80 = 0;
   local_78 = 0;
   local_60 = 0;
   local_58 = (void*)0x0;
   local_48 = 0;
   local_40 = 0;
   local_38 = _LC55;
   uStack_34 = _LC55;
   uStack_30 = _LC55;
   uStack_2c = _LC55;
   local_180 = 0;
   local_1c8 = __LC226;
   uStack_1c0 = _LC240;
   local_28 = 0;
   local_1b8 = __LC227;
   uStack_1b0 = _UNK_001240e8;
   local_1f8 = 0;
   local_1f0 = 0;
   local_1e8 = 0;
   local_1a8 = 2;
   local_194 = 0;
   local_18c = 0;
   local_188 = 0;
   local_184 = 0;
   local_170 = (Image*)0x0;
   local_160 = 0;
   local_158 = 0;
   local_150 = 0;
   local_148 = 0;
   local_140 = 0;
   local_138 = 0;
   local_130 = 0;
   local_118 = _LC229;
   local_186 = 1;
   local_1ee = 1;
   local_1d8 = (undefined1[16])0x0;
   local_1a4 = __LC228;
   uStack_19c = _UNK_001240f8;
   local_128 = (undefined1[16])0x0;
   local_178 = local_108;
   local_40 = RID_Alloc<GLES3::Texture,true>::make_rid((RID_Alloc<GLES3::Texture,true>*)( this + 0xd8 ), (Texture*)&local_1f8);
   if (( 0 < iStack_100 ) && ( 0 < iStack_fc )) {
      if (local_98._6_1_ == '\0') {
         _update_render_target(this, local_108);
      }
 else {
         local_e8._0_4_ = system_fbo;
      }

   }

   uVar6 = RID_Alloc<GLES3::RenderTarget,false>::make_rid((RID_Alloc<GLES3::RenderTarget,false>*)( this + 0x178 ), local_108);
   CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_160);
   pIVar3 = local_170;
   if (local_170 != (Image*)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
         memdelete<Image>(pIVar3);
      }

   }

   if (local_1d8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_1d8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_1d8._8_8_ + -0x10 ), false);
      }

   }

   if (local_1d8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_1d8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_1d8._0_8_ + -0x10 ), false);
      }

   }

   RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)&local_58);
   pvVar4 = local_58;
   if (local_58 != (void*)0x0) {
      if (*(long*)( (long)local_58 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( (long)local_58 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( (long)local_58 + 0x58 );
            *(undefined8*)( (long)local_58 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Memory::free_static(pvVar4, false);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* GLES3::TextureStorage::decal_free(RID) */void GLES3::TextureStorage::decal_free(void) {
   return;
}
/* GLES3::TextureStorage::decal_get_cull_mask(RID) const */undefined8 GLES3::TextureStorage::decal_get_cull_mask(void) {
   return 0;
}
/* GLES3::TextureStorage::texture_add_to_decal_atlas(RID, bool) */void GLES3::TextureStorage::texture_add_to_decal_atlas(void) {
   return;
}
/* GLES3::TextureStorage::texture_remove_from_decal_atlas(RID, bool) */void GLES3::TextureStorage::texture_remove_from_decal_atlas(void) {
   return;
}
/* GLES3::TextureStorage::decal_instance_create(RID) */undefined8 GLES3::TextureStorage::decal_instance_create(void) {
   return 0;
}
/* GLES3::TextureStorage::decal_instance_free(RID) */void GLES3::TextureStorage::decal_instance_free(void) {
   return;
}
/* GLES3::TextureStorage::decal_instance_set_transform(RID, Transform3D const&) */void GLES3::TextureStorage::decal_instance_set_transform(void) {
   return;
}
/* GLES3::TextureStorage::decal_instance_set_sorting_offset(RID, float) */void GLES3::TextureStorage::decal_instance_set_sorting_offset(void) {
   return;
}
/* GLES3::TextureStorage::render_target_set_msaa_needs_resolve(RID, bool) */void GLES3::TextureStorage::render_target_set_msaa_needs_resolve(void) {
   return;
}
/* GLES3::TextureStorage::render_target_get_msaa_needs_resolve(RID) const */undefined8 GLES3::TextureStorage::render_target_get_msaa_needs_resolve(void) {
   return 0;
}
/* GLES3::TextureStorage::render_target_do_msaa_resolve(RID) */void GLES3::TextureStorage::render_target_do_msaa_resolve(void) {
   return;
}
/* GLES3::TextureStorage::render_target_set_vrs_mode(RID, RenderingServer::ViewportVRSMode) */void GLES3::TextureStorage::render_target_set_vrs_mode(void) {
   return;
}
/* GLES3::TextureStorage::render_target_get_vrs_mode(RID) const */undefined8 GLES3::TextureStorage::render_target_get_vrs_mode(void) {
   return 0;
}
/* GLES3::TextureStorage::render_target_set_vrs_update_mode(RID,
   RenderingServer::ViewportVRSUpdateMode) */void GLES3::TextureStorage::render_target_set_vrs_update_mode(void) {
   return;
}
/* GLES3::TextureStorage::render_target_get_vrs_update_mode(RID) const */undefined8 GLES3::TextureStorage::render_target_get_vrs_update_mode(void) {
   return 0;
}
/* GLES3::TextureStorage::render_target_set_vrs_texture(RID, RID) */void GLES3::TextureStorage::render_target_set_vrs_texture(void) {
   return;
}
/* GLES3::TextureStorage::render_target_get_vrs_texture(RID) const */undefined8 GLES3::TextureStorage::render_target_get_vrs_texture(void) {
   return 0;
}
/* GLES3::TextureStorage::render_target_get_override_velocity_depth(RID) const */undefined8 GLES3::TextureStorage::render_target_get_override_velocity_depth(void) {
   return 0;
}
/* GLES3::TextureStorage::render_target_set_velocity_target_size(RID, Vector2i const&) */void GLES3::TextureStorage::render_target_set_velocity_target_size(void) {
   return;
}
/* GLES3::TextureStorage::render_target_get_velocity_target_size(RID) const */undefined8 GLES3::TextureStorage::render_target_get_velocity_target_size(void) {
   return 0;
}
/* CanvasSdfShaderGLES3::~CanvasSdfShaderGLES3() */void CanvasSdfShaderGLES3::~CanvasSdfShaderGLES3(CanvasSdfShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_00122b88;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   return;
}
/* CanvasSdfShaderGLES3::~CanvasSdfShaderGLES3() */void CanvasSdfShaderGLES3::~CanvasSdfShaderGLES3(CanvasSdfShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_00122b88;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   operator_delete(this, 0x130);
   return;
}
/* CanvasSdfShaderGLES3::_init() */void CanvasSdfShaderGLES3::_init(CanvasSdfShaderGLES3 *this) {
   ShaderGLES3::_setup((char*)this, "\nlayout(location = 0) in vec2 vertex_attrib;\n\n/* clang-format on */\n\nuniform ivec2 size;\nuniform int stride;\nuniform int shift;\nuniform ivec2 base_size;\n\nvoid main() {\n\tgl_Position = vec4(vertex_attrib, 1.0, 1.0);\n}\n\n/* clang-format off */\n", "\n#define SDF_MAX_LENGTH 16384.0\n\n#if defined(MODE_LOAD) || defined(MODE_LOAD_SHRINK)\nuniform lowp sampler2D src_pixels;//texunit:0\n#else\nuniform highp isampler2D src_process;//texunit:0\n#endif\n\nuniform\tivec2 size;\nuniform\tint stride;\nuniform\tint shift;\nuniform\tivec2 base_size;\n\n#if defined(MODE_LOAD) || defined(MODE_LOAD_SHRINK) || defined(MODE_PROCESS)\nlayout(location = 0) out ivec4 distance_field;\n#else\nlayout(location = 0) out vec4 distance_field;\n#endif\n\nvec4 float_to_vec4(float p_float) {\n    highp vec4 comp = fract(p_float * vec4(255.0 * 255.0 * 255.0, 255.0 * 255.0, 255.0, 1.0));\n\tcomp -= comp.xxyz * vec4(0.0, 1.0 / 255.0, 1.0 / 255.0, 1.0 / 255.0);\n\treturn comp;\n}\n\nvoid main() {\n\tivec2 pos = ivec2(gl_FragCoord.xy);\n\n#ifdef MODE_LOAD\n\n\tbool solid = texelFetch(src_pixels, pos, 0).r > 0.5;\n\tdistance_field = solid ? ivec4(ivec2(-32767), 0, 0) : ivec4(ivec2(32767), 0, 0);\n#endif\n\n#ifdef MODE_LOAD_SHRINK\n\n\tint s = 1 << shift;\n\tivec2 base = pos << shift;\n\tivec2 center = base + ivec2(shift);\n\n\tivec2 rel = ivec2(32767);\n\tfloat d = 1e20;\n\tint found = 0;\n\tint solid_found = 0;\n\tfor (int i = 0; i < s; i++) {\n\t\tfor (int j = 0; j < s; j++) {\n\t\t\tivec2 src_pos = base + ivec2(i, j);\n\t\t\tif (any(greaterThanEqual(src_pos, base_size))) {\n\t\t\t\tcontinue;\n\t\t\t}\n\t\t\tbool solid = texelFetch(src_pixels, src_pos, 0).r > 0.5;\n\t\t\tif (solid) {\n\t\t\t\tfloat dist = length(vec2(src_pos - center));\n\t\t\t\tif (dist < d) {\n\t\t\t\t\td = dist;\n\t\t\t\t\trel = src_pos;\n\t\t\t\t}\n\t\t\t\tsolid_found++;\n\t\t\t}\n\t\t\tfound++;\n\t\t}\n\t}\n\n\tif (solid_found == found) {\n\t\t//mark solid only if all are solid\n\t\trel = ivec2(-32767);\n\t}\n\n\tdistance_field = ivec4(rel, 0, 0);\n#endif\n\n#ifdef MODE_PROCESS\n\n\tivec2 base = pos << shift;\n\tivec2 center = base + ivec2(shift);\n\n\tivec2 rel = texelFetch(src_process, pos, 0).xy;\n\n\tbool solid = rel.x < 0;\n\n\tif (solid) {\n\t\trel = -rel - ivec2(1);\n\t}\n\n\tif (center != rel) {\n\t\t//only process if it does not point to itself\n\t\tconst int ofs_table_size = 8;\n\t\tconst ivec2 ofs_table[ofs_table_size] = ivec2[](\n\t\t\t\tivec2(-1, -1),\n\t\t\t\tivec2(0, -1),\n\t\t\t\tivec2(+1, -1),\n\n\t\t...", /* TRUNCATED STRING LITERAL */, 0x1196f5, (char**)&DAT_00000004, 0x123ec0, (UBOPair*)0x0, (int)_init(), ::_ubo_pairs, (Feedback*)0x0, (int)_init(), ::_feedbacks, (TexUnitPair*)0x2, 0x123e60, (Specialization*)0x0, (int)_init(), ::_spec_pairs, (char**)0x5);
   return;
}
/* GLES3::TextureStorage::texture_size_with_proxy(RID) [clone .cold] */void GLES3::TextureStorage::texture_size_with_proxy(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

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
/* CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write() [clone .isra.0] [clone
   .cold] */void CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<unsigned int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_int>::_copy_on_write(void) {
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
/* GLES3::TextureStorage::render_target_get_sdf_texture(RID) [clone .cold] */void GLES3::TextureStorage::render_target_get_sdf_texture(undefined8 param_1, undefined8 param_2, int param_3) {
   code *pcVar1;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::TextureStorage::_clear_render_target(GLES3::RenderTarget*) [clone .part.0] [clone .cold]
    */void GLES3::TextureStorage::_clear_render_target(RenderTarget *param_1) {
   code *pcVar1;
   int in_EDX;
   if (in_EDX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   _DAT_00000080 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GLES3::TextureStorage::render_target_free(RID) [clone .cold] */void GLES3::TextureStorage::render_target_free(undefined8 param_1) {
   code *pcVar1;
   int unaff_R13D;
   if (unaff_R13D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_1);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<Image> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<Image>>::_copy_on_write(void) {
   code *pcVar1;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011b852(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SortArray<GLES3::TextureStorage::TextureAtlas::SortItem,
   _DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>, true>::introsort(long, long,
   GLES3::TextureStorage::TextureAtlas::SortItem*, long) const [clone .isra.0] */void SortArray<GLES3::TextureStorage::TextureAtlas::SortItem,_DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>,true>::introsort(long param_1, long param_2, SortItem *param_3, long param_4) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   SortItem *pSVar11;
   long lVar12;
   long lVar13;
   SortItem *pSVar14;
   SortItem *pSVar15;
   long lVar16;
   int iVar17;
   long lVar18;
   SortItem *pSVar19;
   long in_FS_OFFSET;
   bool bVar20;
   int iVar21;
   long local_e0;
   long local_c0;
   lVar10 = param_2 - param_1;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar10) {
      if (param_4 != 0) {
         pSVar19 = param_3 + param_1 * 0x20;
         lVar18 = param_2;
         local_c0 = param_4;
         LAB_0011b9de:iVar21 = *(int*)( pSVar19 + 0x14 );
         local_c0 = local_c0 + -1;
         pSVar11 = param_3 + ( ( lVar10 >> 1 ) + param_1 ) * 0x20;
         iVar1 = *(int*)( pSVar11 + 0x14 );
         bVar20 = iVar1 < iVar21;
         if (iVar21 == iVar1) {
            bVar20 = *(int*)( pSVar11 + 0x10 ) < *(int*)( pSVar19 + 0x10 );
         }

         pSVar14 = param_3 + lVar18 * 0x20 + -0x20;
         iVar2 = *(int*)( pSVar14 + 0x14 );
         if (bVar20) {
            bVar20 = iVar2 < iVar1;
            if (iVar1 == iVar2) {
               bVar20 = *(int*)( pSVar14 + 0x10 ) < *(int*)( pSVar11 + 0x10 );
            }

            pSVar15 = pSVar11;
            iVar17 = iVar1;
            if (!bVar20) {
               bVar20 = iVar2 < iVar21;
               if (iVar21 == iVar2) {
                  bVar20 = *(int*)( pSVar14 + 0x10 ) < *(int*)( pSVar19 + 0x10 );
               }

               pSVar15 = pSVar14;
               iVar17 = iVar2;
               if (!bVar20) {
                  pSVar15 = pSVar19;
                  iVar17 = iVar21;
               }

            }

         }
 else {
            bVar20 = iVar2 < iVar21;
            if (iVar21 == iVar2) {
               bVar20 = *(int*)( pSVar14 + 0x10 ) < *(int*)( pSVar19 + 0x10 );
            }

            pSVar15 = pSVar19;
            iVar17 = iVar21;
            if (!bVar20) {
               bVar20 = iVar2 < iVar1;
               if (iVar1 == iVar2) {
                  bVar20 = *(int*)( pSVar14 + 0x10 ) < *(int*)( pSVar11 + 0x10 );
               }

               pSVar15 = pSVar14;
               iVar17 = iVar2;
               if (!bVar20) {
                  pSVar15 = pSVar11;
                  iVar17 = iVar1;
               }

            }

         }

         iVar21 = *(int*)( pSVar15 + 0x10 );
         pSVar11 = pSVar19;
         param_2 = param_1;
         lVar10 = lVar18;
         do {
            if (*(int*)( pSVar11 + 0x14 ) == iVar17) {
               if (*(int*)( pSVar11 + 0x10 ) <= iVar21) goto LAB_0011bab4;
               LAB_0011ba92:if (lVar18 + -1 == param_2) {
                  _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
                  goto LAB_0011bab4;
               }

            }
 else {
               if (iVar17 < *(int*)( pSVar11 + 0x14 )) goto LAB_0011ba92;
               LAB_0011bab4:lVar10 = lVar10 + -1;
               pSVar14 = param_3 + lVar10 * 0x20;
               while (true) {
                  bVar20 = *(int*)( pSVar14 + 0x14 ) < iVar17;
                  if (*(int*)( pSVar14 + 0x14 ) == iVar17) {
                     bVar20 = *(int*)( pSVar14 + 0x10 ) < iVar21;
                  }

                  if (!bVar20) goto joined_r0x0011baf5;
                  if (param_1 == lVar10) break;
                  lVar10 = lVar10 + -1;
                  pSVar14 = pSVar14 + -0x20;
               }
;
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
               joined_r0x0011baf5:if (lVar10 <= param_2) goto LAB_0011bb8a;
               uVar4 = *(undefined8*)( pSVar14 + 8 );
               uVar6 = *(undefined8*)pSVar11;
               uVar7 = *(undefined8*)( pSVar11 + 8 );
               uVar8 = *(undefined8*)( pSVar11 + 0x10 );
               uVar5 = *(undefined8*)( pSVar11 + 0x18 );
               *(undefined8*)pSVar11 = *(undefined8*)pSVar14;
               *(undefined8*)( pSVar11 + 8 ) = uVar4;
               uVar4 = *(undefined8*)( pSVar14 + 0x18 );
               *(undefined8*)( pSVar11 + 0x10 ) = *(undefined8*)( pSVar14 + 0x10 );
               *(undefined8*)( pSVar11 + 0x18 ) = uVar4;
               *(undefined8*)pSVar14 = uVar6;
               *(undefined8*)( pSVar14 + 8 ) = uVar7;
               *(undefined8*)( pSVar14 + 0x10 ) = uVar8;
               *(undefined8*)( pSVar14 + 0x18 ) = uVar5;
            }

            pSVar11 = pSVar11 + 0x20;
            param_2 = param_2 + 1;
         }
 while ( true );
      }

      LAB_0011bcce:local_e0 = lVar10 + -2 >> 1;
      lVar18 = local_e0 * 2 + 2;
      pSVar19 = param_3 + ( param_1 + lVar10 + -1 ) * 0x20;
      pSVar11 = param_3 + ( param_1 + local_e0 ) * 0x20;
      do {
         uVar4 = *(undefined8*)pSVar11;
         uVar6 = *(undefined8*)( pSVar11 + 8 );
         uVar7 = *(undefined8*)( pSVar11 + 0x10 );
         uVar8 = *(undefined8*)( pSVar11 + 0x18 );
         pSVar14 = pSVar11;
         lVar16 = lVar18;
         lVar9 = local_e0;
         while (lVar16 < lVar10) {
            pSVar15 = param_3 + ( param_1 + lVar16 ) * 0x20;
            pSVar14 = param_3 + ( param_1 + lVar16 + -1 ) * 0x20;
            bVar20 = *(int*)( pSVar14 + 0x14 ) < *(int*)( pSVar15 + 0x14 );
            if (*(int*)( pSVar14 + 0x14 ) == *(int*)( pSVar15 + 0x14 )) {
               bVar20 = *(int*)( pSVar14 + 0x10 ) < *(int*)( pSVar15 + 0x10 );
            }

            lVar13 = lVar16 + -1;
            lVar12 = lVar16;
            if (!bVar20) {
               lVar12 = lVar16 + 1;
               lVar13 = lVar16;
               pSVar14 = pSVar15;
            }

            uVar5 = *(undefined8*)( pSVar14 + 8 );
            pSVar15 = param_3 + ( lVar9 + param_1 ) * 0x20;
            *(undefined8*)pSVar15 = *(undefined8*)pSVar14;
            *(undefined8*)( pSVar15 + 8 ) = uVar5;
            uVar5 = *(undefined8*)( pSVar14 + 0x18 );
            *(undefined8*)( pSVar15 + 0x10 ) = *(undefined8*)( pSVar14 + 0x10 );
            *(undefined8*)( pSVar15 + 0x18 ) = uVar5;
            lVar9 = lVar13;
            lVar16 = lVar12 * 2;
         }
;
         if (lVar16 == lVar10) {
            uVar5 = *(undefined8*)( pSVar19 + 8 );
            *(undefined8*)pSVar14 = *(undefined8*)pSVar19;
            *(undefined8*)( pSVar14 + 8 ) = uVar5;
            uVar5 = *(undefined8*)( pSVar19 + 0x18 );
            *(undefined8*)( pSVar14 + 0x10 ) = *(undefined8*)( pSVar19 + 0x10 );
            *(undefined8*)( pSVar14 + 0x18 ) = uVar5;
            lVar9 = lVar10 + -1;
            pSVar14 = pSVar19;
         }

         iVar21 = (int)( (ulong)uVar7 >> 0x20 );
         lVar16 = lVar9 + -1 >> 1;
         if (local_e0 < lVar9) {
            do {
               pSVar14 = param_3 + ( param_1 + lVar16 ) * 0x20;
               bVar20 = iVar21 < *(int*)( pSVar14 + 0x14 );
               if (*(int*)( pSVar14 + 0x14 ) == iVar21) {
                  bVar20 = (int)uVar7 < *(int*)( pSVar14 + 0x10 );
               }

               pSVar15 = param_3 + ( lVar9 + param_1 ) * 0x20;
               if (!bVar20) break;
               uVar5 = *(undefined8*)( pSVar14 + 8 );
               *(undefined8*)pSVar15 = *(undefined8*)pSVar14;
               *(undefined8*)( pSVar15 + 8 ) = uVar5;
               uVar5 = *(undefined8*)( pSVar14 + 0x18 );
               *(undefined8*)( pSVar15 + 0x10 ) = *(undefined8*)( pSVar14 + 0x10 );
               *(undefined8*)( pSVar15 + 0x18 ) = uVar5;
               bVar20 = local_e0 < lVar16;
               pSVar15 = pSVar14;
               lVar9 = lVar16;
               lVar16 = ( lVar16 + -1 ) / 2;
            }
 while ( bVar20 );
            *(undefined8*)pSVar15 = uVar4;
            *(undefined8*)( pSVar15 + 8 ) = uVar6;
            *(undefined8*)( pSVar15 + 0x10 ) = uVar7;
            *(undefined8*)( pSVar15 + 0x18 ) = uVar8;
            if (local_e0 == 0) goto LAB_0011beb1;
         }
 else {
            *(undefined8*)pSVar14 = uVar4;
            *(undefined8*)( pSVar14 + 8 ) = uVar6;
            *(undefined8*)( pSVar14 + 0x10 ) = uVar7;
            *(undefined8*)( pSVar14 + 0x18 ) = uVar8;
         }

         local_e0 = local_e0 + -1;
         pSVar11 = pSVar11 + -0x20;
         lVar18 = lVar18 + -2;
      }
 while ( true );
   }

   goto LAB_0011bc9c;
   LAB_0011bb8a:introsort(param_2, lVar18, param_3, local_c0);
   lVar10 = param_2 - param_1;
   if (lVar10 < 0x11) goto LAB_0011bc9c;
   lVar18 = param_2;
   if (local_c0 == 0) goto LAB_0011bcce;
   goto LAB_0011b9de;
   LAB_0011beb1:pSVar11 = param_3 + param_1 * 0x20;
   pSVar19 = param_3 + ( param_2 + -2 ) * 0x20;
   lVar10 = ( param_2 + -1 ) - param_1;
   do {
      uVar4 = *(undefined8*)( pSVar11 + 8 );
      uVar6 = *(undefined8*)( pSVar19 + 0x20 );
      uVar7 = *(undefined8*)( pSVar19 + 0x28 );
      uVar8 = *(undefined8*)( pSVar19 + 0x30 );
      uVar5 = *(undefined8*)( pSVar19 + 0x38 );
      *(undefined8*)( pSVar19 + 0x20 ) = *(undefined8*)pSVar11;
      *(undefined8*)( pSVar19 + 0x28 ) = uVar4;
      uVar4 = *(undefined8*)( pSVar11 + 0x18 );
      *(undefined8*)( pSVar19 + 0x30 ) = *(undefined8*)( pSVar11 + 0x10 );
      *(undefined8*)( pSVar19 + 0x38 ) = uVar4;
      iVar21 = (int)( (ulong)uVar8 >> 0x20 );
      if (lVar10 < 3) {
         pSVar14 = pSVar11;
         if (lVar10 == 2) goto LAB_0011c05f;
      }
 else {
         lVar18 = 2;
         lVar16 = 0;
         do {
            pSVar15 = param_3 + ( param_1 + lVar18 ) * 0x20;
            pSVar14 = param_3 + ( param_1 + lVar18 + -1 ) * 0x20;
            bVar20 = *(int*)( pSVar14 + 0x14 ) < *(int*)( pSVar15 + 0x14 );
            if (*(int*)( pSVar14 + 0x14 ) == *(int*)( pSVar15 + 0x14 )) {
               bVar20 = *(int*)( pSVar14 + 0x10 ) < *(int*)( pSVar15 + 0x10 );
            }

            lVar9 = lVar18 + -1;
            lVar13 = lVar18;
            if (!bVar20) {
               lVar13 = lVar18 + 1;
               lVar9 = lVar18;
               pSVar14 = pSVar15;
            }

            uVar4 = *(undefined8*)( pSVar14 + 8 );
            lVar18 = lVar13 * 2;
            pSVar15 = param_3 + ( param_1 + lVar16 ) * 0x20;
            *(undefined8*)pSVar15 = *(undefined8*)pSVar14;
            *(undefined8*)( pSVar15 + 8 ) = uVar4;
            uVar4 = *(undefined8*)( pSVar14 + 0x18 );
            *(undefined8*)( pSVar15 + 0x10 ) = *(undefined8*)( pSVar14 + 0x10 );
            *(undefined8*)( pSVar15 + 0x18 ) = uVar4;
            lVar16 = lVar9;
         }
 while ( lVar10 != lVar18 && SBORROW8(lVar10, lVar18) == lVar10 + lVar13 * -2 < 0 );
         if (lVar10 == lVar18) {
            LAB_0011c05f:uVar4 = *(undefined8*)( pSVar19 + 8 );
            *(undefined8*)pSVar14 = *(undefined8*)pSVar19;
            *(undefined8*)( pSVar14 + 8 ) = uVar4;
            uVar4 = *(undefined8*)( pSVar19 + 0x18 );
            *(undefined8*)( pSVar14 + 0x10 ) = *(undefined8*)( pSVar19 + 0x10 );
            *(undefined8*)( pSVar14 + 0x18 ) = uVar4;
            lVar9 = lVar10 + -1;
            lVar18 = lVar10 + -2 >> 1;
         }
 else {
            lVar18 = ( lVar9 + -1 ) / 2;
            if (lVar9 == 0) goto LAB_0011bc69;
         }

         do {
            pSVar15 = param_3 + ( param_1 + lVar18 ) * 0x20;
            bVar20 = iVar21 < *(int*)( pSVar15 + 0x14 );
            if (*(int*)( pSVar15 + 0x14 ) == iVar21) {
               bVar20 = (int)uVar8 < *(int*)( pSVar15 + 0x10 );
            }

            pSVar14 = param_3 + ( lVar9 + param_1 ) * 0x20;
            if (!bVar20) break;
            uVar4 = *(undefined8*)( pSVar15 + 8 );
            *(undefined8*)pSVar14 = *(undefined8*)pSVar15;
            *(undefined8*)( pSVar14 + 8 ) = uVar4;
            uVar4 = *(undefined8*)( pSVar15 + 0x18 );
            *(undefined8*)( pSVar14 + 0x10 ) = *(undefined8*)( pSVar15 + 0x10 );
            *(undefined8*)( pSVar14 + 0x18 ) = uVar4;
            bVar20 = lVar18 != 0;
            lVar9 = lVar18;
            pSVar14 = pSVar15;
            lVar18 = ( lVar18 + -1 ) / 2;
         }
 while ( bVar20 );
      }

      LAB_0011bc69:pSVar19 = pSVar19 + -0x20;
      *(undefined8*)pSVar14 = uVar6;
      *(undefined8*)( pSVar14 + 8 ) = uVar7;
      *(undefined8*)( pSVar14 + 0x10 ) = uVar8;
      *(undefined8*)( pSVar14 + 0x18 ) = uVar5;
      bVar20 = 1 < lVar10;
      lVar10 = lVar10 + -1;
   }
 while ( bVar20 );
   LAB_0011bc9c:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = String::parse_latin1;
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
/* RBMap<unsigned int, GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>,
   DefaultAllocator>::_cleanup_tree(RBMap<unsigned int,
   GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>,
   DefaultAllocator>::Element*) [clone .part.0] */void RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::_cleanup_tree(RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator> *this, Element *param_1) {
   long *plVar1;
   Element *pEVar2;
   long lVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   pEVar2 = *(Element**)( param_1 + 0x10 );
   pEVar4 = *(Element**)( this + 8 );
   if (pEVar2 != pEVar4) {
      pEVar5 = *(Element**)( pEVar2 + 0x10 );
      if (pEVar4 != pEVar5) {
         pEVar7 = *(Element**)( pEVar5 + 0x10 );
         if (pEVar4 != pEVar7) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar4 != pEVar8) {
               pEVar6 = *(Element**)( pEVar8 + 0x10 );
               if (pEVar4 != pEVar6) {
                  _cleanup_tree(this, pEVar6);
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar8 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar7 + 8 );
            if (pEVar4 != pEVar8) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar8) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar8 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar8) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               if (*(long*)( pEVar4 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar4 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar4 + 0x58 );
                     *(undefined8*)( pEVar4 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar4, false);
            }

            if (*(long*)( pEVar7 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x58 );
                  *(undefined8*)( pEVar7 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
            pEVar7 = *(Element**)( this + 8 );
         }

         pEVar4 = *(Element**)( pEVar5 + 8 );
         if (pEVar4 != pEVar7) {
            pEVar8 = *(Element**)( pEVar4 + 0x10 );
            if (pEVar8 != pEVar7) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar4 + 8 );
            if (pEVar8 != pEVar7) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar4 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar4 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar4 + 0x58 );
                  *(undefined8*)( pEVar4 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar4, false);
         }

         if (*(long*)( pEVar5 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar5 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar5 + 0x58 );
               *(undefined8*)( pEVar5 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               Memory::free_static(pEVar5, false);
               pEVar5 = *(Element**)( this + 8 );
               goto LAB_0011c3f7;
            }

         }

         Memory::free_static(pEVar5, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      LAB_0011c3f7:pEVar4 = *(Element**)( pEVar2 + 8 );
      if (pEVar4 != pEVar5) {
         pEVar7 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar7 != pEVar5) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar7 + 8 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x58 );
                  *(undefined8*)( pEVar7 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar7 = *(Element**)( pEVar4 + 8 );
         if (pEVar7 != pEVar5) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar7 + 8 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x58 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x58 );
                     *(undefined8*)( pEVar8 + 0x58 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x58 );
                  *(undefined8*)( pEVar7 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
         }

         if (*(long*)( pEVar4 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar4 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar4 + 0x58 );
               *(undefined8*)( pEVar4 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               Memory::free_static(pEVar4, false);
               goto LAB_0011c683;
            }

         }

         Memory::free_static(pEVar4, false);
      }

      LAB_0011c683:if (*(long*)( pEVar2 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar2 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar2 + 0x58 );
            *(undefined8*)( pEVar2 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Memory::free_static(pEVar2, false);
      pEVar4 = *(Element**)( this + 8 );
   }

   pEVar2 = *(Element**)( param_1 + 8 );
   if (pEVar2 == pEVar4) goto LAB_0011cb25;
   pEVar5 = *(Element**)( pEVar2 + 0x10 );
   if (pEVar5 != pEVar4) {
      pEVar7 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x58 );
               *(undefined8*)( pEVar7 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar7 = *(Element**)( pEVar5 + 8 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x58 );
               *(undefined8*)( pEVar7 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
      }

      if (*(long*)( pEVar5 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x58 );
            *(undefined8*)( pEVar5 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            pEVar4 = *(Element**)( this + 8 );
            goto LAB_0011c8df;
         }

      }

      Memory::free_static(pEVar5, false);
      pEVar4 = *(Element**)( this + 8 );
   }

   LAB_0011c8df:pEVar5 = *(Element**)( pEVar2 + 8 );
   if (pEVar5 != pEVar4) {
      pEVar7 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x58 );
               *(undefined8*)( pEVar7 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar7 = *(Element**)( pEVar5 + 8 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x58 );
                  *(undefined8*)( pEVar8 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x58 );
               *(undefined8*)( pEVar7 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
      }

      if (*(long*)( pEVar5 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x58 );
            *(undefined8*)( pEVar5 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            goto LAB_0011caf3;
         }

      }

      Memory::free_static(pEVar5, false);
   }

   LAB_0011caf3:if (*(long*)( pEVar2 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( pEVar2 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( pEVar2 + 0x58 );
         *(undefined8*)( pEVar2 + 0x58 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pEVar2, false);
   LAB_0011cb25:if (*(long*)( param_1 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x58 );
         *(undefined8*)( param_1 + 0x58 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(param_1, false);
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
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = String::parse_latin1;
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
/* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
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
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::_insert_with_hash(unsigned int, unsigned long const&,
   ShaderGLES3::Version::Specialization const&) [clone .isra.0] */void OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::_insert_with_hash(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, uint param_1, ulong *param_2, Specialization *param_3) {
   undefined8 *puVar1;
   undefined2 uVar2;
   int iVar3;
   undefined4 uVar4;
   undefined8 uVar5;
   code *pcVar6;
   uint uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   uint uVar10;
   long lVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   uint *puVar15;
   ulong *puVar16;
   long lVar17;
   undefined4 uVar18;
   long in_FS_OFFSET;
   uint uVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   undefined8 local_b8;
   undefined4 local_b0;
   undefined8 local_a8;
   long local_a0;
   ulong local_98;
   long local_90;
   undefined2 local_88;
   undefined8 local_78;
   undefined4 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined2 local_48;
   long local_40;
   uVar20 = *(undefined8*)param_3;
   uVar18 = *(undefined4*)( param_3 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = *(int*)( param_3 + 0x10 );
   local_a8 = 0;
   local_a0 = 0;
   uVar13 = (ulong)param_1 % ( ulong ) * (uint*)( this + 0x18 );
   local_b8 = uVar20;
   local_b0 = uVar18;
   if (iVar3 != 0) {
      uVar7 = iVar3 - 1U | iVar3 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
      local_a8 = (ulong)uVar7 << 0x20;
      local_a0 = Memory::realloc_static((void*)0x0, (ulong)uVar7 * 4, false);
      if (local_a0 == 0) goto LAB_0011d37e;
      local_a8 = CONCAT44(local_a8._4_4_, iVar3);
      if (*(int*)( param_3 + 0x10 ) != 0) {
         lVar17 = *(long*)( param_3 + 0x18 );
         lVar11 = 0;
         do {
            *(undefined4*)( local_a0 + lVar11 * 4 ) = *(undefined4*)( lVar17 + lVar11 * 4 );
            lVar11 = lVar11 + 1;
         }
 while ( (uint)lVar11 < *(uint*)( param_3 + 0x10 ) );
      }

   }

   local_98 = 0;
   iVar3 = *(int*)( param_3 + 0x20 );
   local_90 = 0;
   if (iVar3 != 0) {
      uVar7 = iVar3 - 1U | iVar3 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
      local_98 = (ulong)uVar7 << 0x20;
      local_90 = Memory::realloc_static((void*)0x0, (ulong)uVar7 * 4, false);
      if (local_90 == 0) goto LAB_0011d37e;
      local_98 = CONCAT44(local_98._4_4_, iVar3);
      if (*(int*)( param_3 + 0x20 ) != 0) {
         lVar17 = *(long*)( param_3 + 0x28 );
         lVar11 = 0;
         do {
            *(undefined4*)( local_90 + lVar11 * 4 ) = *(undefined4*)( lVar17 + lVar11 * 4 );
            lVar11 = lVar11 + 1;
         }
 while ( (uint)lVar11 < *(uint*)( param_3 + 0x20 ) );
      }

   }

   lVar11 = *(long*)( this + 0x10 );
   local_88 = *(undefined2*)( param_3 + 0x30 );
   lVar17 = uVar13 * 4;
   puVar15 = (uint*)( lVar11 + lVar17 );
   uVar7 = *puVar15;
   uVar19 = (uint)local_a8;
   if (uVar7 != 0) {
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      uVar14 = 0;
      puVar16 = param_2;
      do {
         uVar10 = ( uint )(( ulong )(uint)(( (int)uVar8 + (int)uVar13 ) - (int)( (ulong)uVar7 % uVar8 )) % uVar8);
         param_2 = puVar16;
         if (uVar10 < uVar14) {
            lVar17 = *(long*)( this + 8 );
            lVar11 = *(long*)this;
            *puVar15 = param_1;
            puVar9 = (undefined8*)( lVar17 + uVar13 * 8 );
            puVar1 = (undefined8*)( lVar11 + uVar13 * 0x38 );
            param_2 = (ulong*)*puVar9;
            *puVar9 = puVar16;
            lVar17 = puVar1[3];
            uVar5 = *puVar1;
            uVar21 = CONCAT44(local_a8._4_4_, uVar19);
            uVar4 = *(undefined4*)( puVar1 + 1 );
            local_a8 = puVar1[2];
            uVar19 = *(uint*)( puVar1 + 2 );
            local_48 = local_88;
            lVar11 = puVar1[5];
            uVar8 = puVar1[4];
            *puVar1 = uVar20;
            uVar2 = *(undefined2*)( puVar1 + 6 );
            *(undefined4*)( puVar1 + 1 ) = uVar18;
            puVar1[5] = local_90;
            puVar1[4] = local_98;
            *(undefined2*)( puVar1 + 6 ) = local_88;
            puVar1[3] = local_a0;
            puVar1[2] = uVar21;
            local_60 = 0;
            local_68 = 0;
            local_50 = 0;
            local_58 = 0;
            local_b8 = uVar5;
            local_b0 = uVar4;
            local_a0 = lVar17;
            local_98 = uVar8;
            local_90 = lVar11;
            local_88 = uVar2;
            local_78 = uVar20;
            local_70 = uVar18;
            ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_78);
            uVar8 = ( ulong ) * (uint*)( this + 0x18 );
            lVar11 = *(long*)( this + 0x10 );
            param_1 = uVar7;
            uVar18 = uVar4;
            uVar14 = uVar10;
            uVar20 = uVar5;
         }

         uVar14 = uVar14 + 1;
         uVar13 = ( ulong )((int)uVar13 + 1) % uVar8;
         lVar17 = uVar13 * 4;
         puVar15 = (uint*)( lVar11 + lVar17 );
         uVar7 = *puVar15;
         puVar16 = param_2;
      }
 while ( uVar7 != 0 );
   }

   lVar11 = *(long*)this;
   *(ulong**)( *(long*)( this + 8 ) + uVar13 * 8 ) = param_2;
   puVar1 = (undefined8*)( lVar11 + uVar13 * 0x38 );
   *(undefined4*)( puVar1 + 1 ) = uVar18;
   puVar1[2] = 0;
   puVar1[3] = 0;
   *puVar1 = uVar20;
   if (uVar19 != 0) {
      uVar7 = uVar19 - 1 | uVar19 - 1 >> 1;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 >> 4 | uVar7;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = ( uVar7 >> 0x10 | uVar7 ) + 1;
      *(uint*)( (long)puVar1 + 0x14 ) = uVar7;
      lVar11 = Memory::realloc_static((void*)0x0, (ulong)uVar7 * 4, false);
      puVar1[3] = lVar11;
      if (lVar11 == 0) goto LAB_0011d37e;
      lVar12 = 0;
      *(uint*)( puVar1 + 2 ) = uVar19;
      do {
         *(undefined4*)( lVar11 + lVar12 ) = *(undefined4*)( local_a0 + lVar12 );
         lVar12 = lVar12 + 4;
      }
 while ( lVar12 != (ulong)uVar19 << 2 );
   }

   uVar13 = local_98;
   iVar3 = (int)local_98;
   puVar1[4] = 0;
   puVar1[5] = 0;
   if ((int)local_98 != 0) {
      uVar7 = (int)local_98 - 1U >> 1 | (int)local_98 - 1U;
      uVar7 = uVar7 >> 2 | uVar7;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 >> 8 | uVar7;
      uVar7 = ( uVar7 >> 0x10 | uVar7 ) + 1;
      *(uint*)( (long)puVar1 + 0x24 ) = uVar7;
      lVar11 = Memory::realloc_static((void*)0x0, (ulong)uVar7 * 4, false);
      puVar1[5] = lVar11;
      if (lVar11 == 0) {
         LAB_0011d37e:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

      *(int*)( puVar1 + 4 ) = iVar3;
      lVar12 = 0;
      do {
         *(undefined4*)( lVar11 + lVar12 ) = *(undefined4*)( local_90 + lVar12 );
         lVar12 = lVar12 + 4;
      }
 while ( lVar12 != ( uVar13 & 0xffffffff ) << 2 );
   }

   *(undefined2*)( puVar1 + 6 ) = local_88;
   *(uint*)( *(long*)( this + 0x10 ) + lVar17 ) = param_1;
   *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
   ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_b8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GLES3::TextureStorage::get_texture(RID) const */long GLES3::TextureStorage::get_texture(TextureStorage *this, ulong param_2) {
   ulong uVar1;
   int iVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0xf4 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
      iVar2 = *(int*)( lVar3 + 0xe8 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         if (*(char*)( lVar3 + 8 ) == '\0') {
            return lVar3;
         }

         if (*(long*)( lVar3 + 0x10 ) == 0) {
            return 0;
         }

         uVar1 = *(ulong*)( lVar3 + 0x10 );
         if (*(uint*)( this + 0xf4 ) <= (uint)uVar1) {
            return 0;
         }

         lVar3 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( this + 0xe0 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0xf0 ) ) * 8 );
         iVar2 = *(int*)( lVar3 + 0xe8 );
         if (iVar2 == (int)( uVar1 >> 0x20 )) {
            return lVar3;
         }

      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         return 0;
      }

   }

   return 0;
}
/* GLES3::TextureStorage::render_target_set_as_unused(RID) */void GLES3::TextureStorage::render_target_set_as_unused(void) {
   render_target_clear_used();
   return;
}
/* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
   HashMapComparatorDefault<unsigned long> >::lookup_ptr(unsigned long const&) */long OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::lookup_ptr(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>> *this, ulong *param_1) {
   uint uVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   ulong uVar5;
   uVar1 = *(uint*)( this + 0x18 );
   uVar2 = *param_1 * 0x3ffff - 1;
   uVar2 = ( uVar2 ^ uVar2 >> 0x1f ) * 0x15;
   uVar2 = ( uVar2 ^ uVar2 >> 0xb ) * 0x41;
   uVar2 = uVar2 >> 0x16 ^ uVar2;
   uVar5 = uVar2 & 0xffffffff;
   if ((int)uVar2 == 0) {
      uVar5 = 1;
   }

   uVar2 = uVar5 % (ulong)uVar1;
   uVar3 = *(uint*)( *(long*)( this + 0x10 ) + uVar2 * 4 );
   if (uVar3 != 0) {
      uVar4 = 0;
      do {
         if (( (uint)uVar5 == uVar3 ) && ( *param_1 == *(ulong*)( *(long*)( this + 8 ) + uVar2 * 8 ) )) {
            return *(long*)this + uVar2 * 0x38;
         }

         uVar4 = uVar4 + 1;
         uVar2 = ( ulong )((int)uVar2 + 1) % (ulong)uVar1;
         uVar3 = *(uint*)( *(long*)( this + 0x10 ) + uVar2 * 4 );
      }
 while ( ( uVar3 != 0 ) && ( uVar4 <= ( ( uVar1 + (int)uVar2 ) - uVar3 % uVar1 ) % uVar1 ) );
   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* OAHashMap<unsigned long, ShaderGLES3::Version::Specialization, HashMapHasherDefault,
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
   undefined8 *puVar10;
   Specialization *this_00;
   uVar9 = *(uint*)( this + 0x18 );
   if ((double)uVar9 * __LC109 < (double)( *(int*)( this + 0x1c ) + 1 )) {
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
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x18 ) );
      }

      if (uVar9 != 0) {
         puVar8 = puVar3;
         puVar10 = puVar1;
         this_00 = pSVar2;
         do {
            if (*puVar8 != 0) {
               _insert_with_hash(this, *puVar8, (ulong*)*puVar10, this_00);
               ShaderGLES3::Version::Specialization::~Specialization(this_00);
            }

            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
            this_00 = this_00 + 0x38;
         }
 while ( puVar10 != puVar1 + uVar9 );
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
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned int, GLES3::Utilities::ResourceAllocation, HashMapHasherDefault,
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
      lStack_90 = 0x11de0b;
      local_70 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( this + 8 ) = local_70;
      if (uVar39 == 0) {
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
         if (local_70 == (void*)0x0) goto LAB_0011d973;
      }
 else {
         pvVar3 = *(void**)( this + 0x10 );
         if (( pvVar3 < (void*)( (long)local_70 + uVar48 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar40 ) )) {
            uVar40 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
               *(undefined8*)( (long)local_70 + uVar40 * 8 ) = 0;
               uVar40 = uVar40 + 1;
            }
 while ( uVar51 != uVar40 );
            iVar44 = *(int*)( this + 0x2c );
            uVar38 = *param_1;
         }
 else {
            memset(pvVar3, 0, uVar40);
            lStack_90 = 0x11de54;
            memset(local_70, 0, uVar48);
            iVar44 = *(int*)( this + 0x2c );
            uVar38 = *param_1;
         }

      }

      if (iVar44 != 0) {
         uVar40 = ( ulong ) * (uint*)( this + 0x28 );
         lVar52 = *(long*)( this + 0x10 );
         goto LAB_0011dcf3;
      }

   }
 else {
      iVar44 = *(int*)( this + 0x2c );
      if (iVar44 != 0) {
         uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar37 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar37 = ( uVar37 ^ uVar37 >> 0xd ) * -0x3d4d51cb;
         uVar53 = uVar37 ^ uVar37 >> 0x10;
         if (uVar37 == uVar37 >> 0x10) {
            uVar53 = 1;
            uVar45 = uVar48;
         }
 else {
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
            }
 while ( ( uVar37 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar37 * uVar48,auVar22._8_8_ = 0,auVar22._0_8_ = uVar51,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar54 + uVar39 ) - SUB164(auVar6 * auVar22, 8) ) * uVar48,auVar23._8_8_ = 0,auVar23._0_8_ = uVar51,lVar47 = SUB168(auVar7 * auVar23, 8),uVar50 <= SUB164(auVar7 * auVar23, 8) );
         }

         LAB_0011dcf3:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
         uVar48 = *(ulong*)( hash_table_size_primes_inv + uVar40 * 8 );
         uVar39 = ( uVar38 >> 0x10 ^ uVar38 ) * -0x7a143595;
         uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
         uVar37 = uVar39 ^ uVar39 >> 0x10;
         if (uVar39 == uVar39 >> 0x10) {
            uVar37 = 1;
            uVar43 = uVar48;
         }
 else {
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
                  goto LAB_0011dcd4;
               }

               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( uVar53 + 1 ) * uVar48;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar39 = *(uint*)( lVar52 + lVar46 * 4 );
               uVar53 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar39 * uVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar53 ) - SUB164(auVar18 * auVar34, 8) ) * uVar48,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,lVar47 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }

      }

   }

   LAB_0011d973:if ((float)uVar51 * __LC127 < (float)( iVar44 + 1 )) {
      uVar38 = *(uint*)( this + 0x28 );
      if (uVar38 == 0x1c) {
         pauVar42 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011dcd4;
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
            }
 while ( uVar40 != uVar48 );
         }
 else {
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
               }
;
               *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
               *puVar1 = uVar38;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
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
   }
 else {
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
   }
 else {
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
   }
;
   *(undefined1(**) [16])( lVar47 + lStack_90 * 8 ) = pauVar36;
   *puVar1 = uVar38;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_0011dcd4:auVar57._8_8_ = lStack_90;
   auVar57._0_8_ = pauVar42[1] + 4;
   return auVar57;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<RID, GLES3::TextureStorage::TextureAtlas::Texture, HashMapHasherDefault,
   HashMapComparatorDefault<RID>, DefaultTypedAllocator<HashMapElement<RID,
   GLES3::TextureStorage::TextureAtlas::Texture> > >::operator[](RID const&) */undefined1 * __thiscallHashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>>::operator [](HashMap<RID,GLES3::TextureStorage::TextureAtlas::Texture,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,GLES3::TextureStorage::TextureAtlas::Texture>>> * this, RID * param_1) * puVar1 ;undefined8 *puVar2long lVar3void *pvVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1(*pauVar37)[16];uint uVar38ulong uVar39ulong uVar40undefined8 uVar41void *__s_00undefined1(*pauVar42)[16];int iVar43uint uVar44long lVar45long lVar46uint uVar47undefined8 uVar48uint uVar49uint uVar50ulong uVar51long lVar52uint uVar53ulong uVar54ulong uVar55long lVar56undefined1(*pauVar57)[16];long in_FS_OFFSETvoid *local_b0local_b0 = *(void**)( this + 8 );lVar56 = *(long*)param_1;lVar3 = *(long*)( in_FS_OFFSET + 0x28 );uVar40 = ( ulong ) * (uint*)( this + 0x28 );uVar47 = *(uint*)( hash_table_size_primes + uVar40 * 4 );uVar55 = CONCAT44(0, uVar47);if (local_b0 == (void*)0x0) {
   uVar40 = uVar55 * 4;
   uVar39 = uVar55 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   local_b0 = (void*)Memory::alloc_static(uVar39, false);
   *(void**)( this + 8 ) = local_b0;
   if (uVar47 == 0) {
      iVar43 = *(int*)( this + 0x2c );
      lVar56 = *(long*)param_1;
      if (local_b0 == (void*)0x0) goto LAB_0011e0fb;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_b0 + uVar39 ) ) && ( local_b0 < (void*)( (long)pvVar4 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)local_b0 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar55 != uVar40 );
         iVar43 = *(int*)( this + 0x2c );
         lVar56 = *(long*)param_1;
      }
 else {
         memset(pvVar4, 0, uVar40);
         memset(local_b0, 0, uVar39);
         iVar43 = *(int*)( this + 0x2c );
         lVar56 = *(long*)param_1;
      }

   }

   if (iVar43 != 0) {
      uVar40 = ( ulong ) * (uint*)( this + 0x28 );
      lVar52 = *(long*)( this + 0x10 );
      goto LAB_0011e4a3;
   }

}
 else {
   iVar43 = *(int*)( this + 0x2c );
   if (iVar43 != 0) {
      lVar52 = *(long*)( this + 0x10 );
      lVar46 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
      uVar39 = lVar56 * 0x3ffff - 1;
      uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
      uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
         uVar54 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar54 * lVar46;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar55;
      lVar45 = SUB168(auVar5 * auVar21, 8);
      uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar44 != 0) {
         uVar50 = 0;
         do {
            if (( (uint)uVar54 == uVar44 ) && ( lVar56 == *(long*)( *(long*)( (long)local_b0 + lVar45 * 8 ) + 0x10 ) )) {
               pauVar42 = *(undefined1(**) [16])( (long)local_b0 + (ulong)uVar53 * 8 );
               goto LAB_0011e0cb;
            }

            uVar50 = uVar50 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar46;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar55;
            lVar45 = SUB168(auVar6 * auVar22, 8);
            uVar44 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar46,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar7 * auVar23, 8)) * lVar46,auVar24._8_8_ = 0,auVar24._0_8_ = uVar55,uVar50 <= SUB164(auVar8 * auVar24, 8) );
      }

      LAB_0011e4a3:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
      lVar46 = *(long*)( hash_table_size_primes_inv + uVar40 * 8 );
      uVar39 = lVar56 * 0x3ffff - 1;
      uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
      uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
      uVar39 = uVar39 >> 0x16 ^ uVar39;
      uVar54 = uVar39 & 0xffffffff;
      if ((int)uVar39 == 0) {
         uVar54 = 1;
      }

      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar54 * lVar46;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar51;
      lVar45 = SUB168(auVar17 * auVar33, 8);
      uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
      uVar44 = SUB164(auVar17 * auVar33, 8);
      if (uVar47 != 0) {
         uVar53 = 0;
         do {
            if (( (uint)uVar54 == uVar47 ) && ( *(long*)( *(long*)( (long)local_b0 + lVar45 * 8 ) + 0x10 ) == lVar56 )) {
               pauVar42 = *(undefined1(**) [16])( (long)local_b0 + (ulong)uVar44 * 8 );
               *(undefined4*)( pauVar42[1] + 8 ) = 0;
               *(undefined1(*) [16])( pauVar42[1] + 0xc ) = (undefined1[16])0x0;
               goto LAB_0011e0cb;
            }

            uVar53 = uVar53 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = ( ulong )(uVar44 + 1) * lVar46;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar51;
            lVar45 = SUB168(auVar18 * auVar34, 8);
            uVar47 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar44 = SUB164(auVar18 * auVar34, 8);
         }
 while ( ( uVar47 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar47 * lVar46,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar40 * 4 ) + uVar44 ) - SUB164(auVar19 * auVar35, 8)) * lVar46,auVar36._8_8_ = 0,auVar36._0_8_ = uVar51,uVar53 <= SUB164(auVar20 * auVar36, 8) );
      }

   }

}
LAB_0011e0fb:if ((float)uVar55 * __LC127 < (float)( iVar43 + 1 )) {
   uVar47 = *(uint*)( this + 0x28 );
   if (uVar47 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011e0cb;
   }

   uVar40 = ( ulong )(uVar47 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar44 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
   if (uVar47 + 1 < 2) {
      uVar40 = 2;
   }

   uVar47 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar39 = (ulong)uVar47;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar4 = *(void**)( this + 0x10 );
   uVar40 = uVar39 * 4;
   uVar55 = uVar39 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar55, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar47 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar39 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar55);
      }

   }

   if (uVar44 != 0) {
      uVar40 = 0;
      do {
         uVar47 = *(uint*)( (long)pvVar4 + uVar40 * 4 );
         if (uVar47 != 0) {
            lVar56 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar55 = CONCAT44(0, uVar53);
            lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar47 * lVar52;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar55;
            lVar46 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar56 + lVar46 * 4 );
            iVar43 = SUB164(auVar9 * auVar25, 8);
            uVar50 = *puVar1;
            uVar41 = *(undefined8*)( (long)local_b0 + uVar40 * 8 );
            while (uVar50 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar50 * lVar52;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar55;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar53 + iVar43 ) - SUB164(auVar10 * auVar26, 8)) * lVar52;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar55;
               uVar38 = SUB164(auVar11 * auVar27, 8);
               uVar48 = uVar41;
               if (uVar38 < uVar49) {
                  *puVar1 = uVar47;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar48 = *puVar2;
                  *puVar2 = uVar41;
                  uVar47 = uVar50;
                  uVar49 = uVar38;
               }

               uVar49 = uVar49 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar43 + 1) * lVar52;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar55;
               lVar46 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar56 + lVar46 * 4 );
               iVar43 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar41;
            *puVar1 = uVar47;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar40 != uVar44 );
      Memory::free_static(local_b0, false);
      Memory::free_static(pvVar4, false);
   }

}
uVar41 = *(undefined8*)param_1;pauVar42 = (undefined1(*) [16])operator_new(0x30, "");*pauVar42 = (undefined1[16])0x0;*(undefined4*)( pauVar42[1] + 8 ) = 0;*(undefined8*)pauVar42[1] = uVar41;puVar2 = *(undefined8**)( this + 0x20 );*(undefined1(*) [16])( pauVar42[1] + 0xc ) = (undefined1[16])0x0;if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar2 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar2;
}
lVar56 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar40 = *(long*)param_1 * 0x3ffff - 1;uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;uVar40 = uVar40 >> 0x16 ^ uVar40;uVar55 = uVar40 & 0xffffffff;if ((int)uVar40 == 0) {
   uVar55 = 1;
}
uVar50 = 0;lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar53 = (uint)uVar55;uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar47);auVar13._8_8_ = 0;auVar13._0_8_ = uVar55 * lVar52;auVar29._8_8_ = 0;auVar29._0_8_ = uVar40;lVar45 = SUB168(auVar13 * auVar29, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar56 + lVar45 * 4 );iVar43 = SUB164(auVar13 * auVar29, 8);uVar44 = *puVar1;pauVar37 = pauVar42;while (uVar44 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar44 * lVar52;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar47 + iVar43 ) - SUB164(auVar14 * auVar30, 8)) * lVar52;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar40;
   uVar53 = SUB164(auVar15 * auVar31, 8);
   pauVar57 = pauVar37;
   if (uVar53 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar44;
      puVar2 = (undefined8*)( lVar46 + lVar45 * 8 );
      pauVar57 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar50 = uVar53;
   }

   uVar53 = (uint)uVar55;
   uVar50 = uVar50 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar43 + 1) * lVar52;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar40;
   lVar45 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar56 + lVar45 * 4 );
   iVar43 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar57;
   uVar44 = *puVar1;
}
;*(undefined1(**) [16])( lVar46 + lVar45 * 8 ) = pauVar37;*puVar1 = uVar53;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011e0cb:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar42[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RBMap<unsigned int, GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>,
   DefaultAllocator>::clear() */void RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::clear(RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator> *this) {
   long *plVar1;
   Element *pEVar2;
   long lVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   pvVar6 = *(void**)this;
   if (pvVar6 == (void*)0x0) {
      return;
   }

   pEVar2 = *(Element**)( (long)pvVar6 + 0x10 );
   pEVar4 = *(Element**)( this + 8 );
   if (pEVar2 == pEVar4) goto LAB_0011ea5d;
   pEVar5 = *(Element**)( pEVar2 + 0x10 );
   if (pEVar4 != pEVar5) {
      pEVar9 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar4 != pEVar9) {
         pEVar7 = *(Element**)( pEVar9 + 0x10 );
         if (pEVar4 != pEVar7) {
            _cleanup_tree(this, pEVar7);
            pEVar7 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar9 + 8 ) != pEVar7) {
            _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
         }

         if (*(long*)( pEVar9 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar9 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar9 + 0x58 );
               *(undefined8*)( pEVar9 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar9, false);
         pEVar9 = *(Element**)( this + 8 );
      }

      pEVar4 = *(Element**)( pEVar5 + 8 );
      if (pEVar4 != pEVar9) {
         pEVar7 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar7 != pEVar9) {
            if (*(Element**)( pEVar7 + 0x10 ) != pEVar9) {
               _cleanup_tree(this, *(Element**)( pEVar7 + 0x10 ));
               pEVar9 = *(Element**)( this + 8 );
            }

            if (pEVar9 != *(Element**)( pEVar7 + 8 )) {
               _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
            }

            if (*(long*)( pEVar7 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x58 );
                  *(undefined8*)( pEVar7 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
            pEVar9 = *(Element**)( this + 8 );
         }

         pEVar7 = *(Element**)( pEVar4 + 8 );
         if (pEVar9 != pEVar7) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar9 != pEVar8) {
               _cleanup_tree(this, pEVar8);
               pEVar8 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar7 + 8 ) != pEVar8) {
               _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
            }

            if (*(long*)( pEVar7 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x58 );
                  *(undefined8*)( pEVar7 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
         }

         if (*(long*)( pEVar4 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar4 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar4 + 0x58 );
               *(undefined8*)( pEVar4 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar4, false);
      }

      if (*(long*)( pEVar5 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x58 );
            *(undefined8*)( pEVar5 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
            goto LAB_0011e8f0;
         }

      }

      Memory::free_static(pEVar5, false);
      pEVar5 = *(Element**)( this + 8 );
   }

   LAB_0011e8f0:pEVar4 = *(Element**)( pEVar2 + 8 );
   if (pEVar4 != pEVar5) {
      pEVar9 = *(Element**)( pEVar4 + 0x10 );
      if (pEVar9 != pEVar5) {
         if (*(Element**)( pEVar9 + 0x10 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar9 + 0x10 ));
            pEVar5 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar9 + 8 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
         }

         if (*(long*)( pEVar9 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar9 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar9 + 0x58 );
               *(undefined8*)( pEVar9 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar9, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      pEVar9 = *(Element**)( pEVar4 + 8 );
      if (pEVar9 != pEVar5) {
         pEVar7 = *(Element**)( pEVar9 + 0x10 );
         if (pEVar5 != pEVar7) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar5 != pEVar8) {
               _cleanup_tree(this, pEVar8);
               pEVar8 = *(Element**)( this + 8 );
            }

            if (pEVar8 != *(Element**)( pEVar7 + 8 )) {
               _cleanup_tree(this, *(Element**)( pEVar7 + 8 ));
            }

            if (*(long*)( pEVar7 + 0x58 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x58 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x58 );
                  *(undefined8*)( pEVar7 + 0x58 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
            pEVar7 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar9 + 8 ) != pEVar7) {
            _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
         }

         if (*(long*)( pEVar9 + 0x58 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar9 + 0x58 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar9 + 0x58 );
               *(undefined8*)( pEVar9 + 0x58 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar9, false);
      }

      if (*(long*)( pEVar4 + 0x58 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar4 + 0x58 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar4 + 0x58 );
            *(undefined8*)( pEVar4 + 0x58 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar4, false);
            goto LAB_0011ea3a;
         }

      }

      Memory::free_static(pEVar4, false);
   }

   LAB_0011ea3a:if (*(long*)( pEVar2 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( pEVar2 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( pEVar2 + 0x58 );
         *(undefined8*)( pEVar2 + 0x58 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pEVar2, false);
   pvVar6 = *(void**)this;
   pEVar4 = *(Element**)( this + 8 );
   LAB_0011ea5d:*(Element**)( (long)pvVar6 + 0x10 ) = pEVar4;
   lVar3 = *(long*)( (long)pvVar6 + 0x58 );
   *(undefined4*)( this + 0x10 ) = 0;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( (long)pvVar6 + 0x58 );
         *(undefined8*)( (long)pvVar6 + 0x58 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pvVar6, false);
   *(undefined8*)this = 0;
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
/* WARNING: Removing unreachable block (ram,0x0011ed18) *//* WARNING: Removing unreachable block (ram,0x0011ee9a) *//* WARNING: Removing unreachable block (ram,0x0011ef20) *//* WARNING: Removing unreachable block (ram,0x0011eea2) *//* WARNING: Removing unreachable block (ram,0x0011eeb8) *//* WARNING: Removing unreachable block (ram,0x0011eec4) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0011f068) *//* WARNING: Removing unreachable block (ram,0x0011f1cd) *//* WARNING: Removing unreachable block (ram,0x0011f260) *//* WARNING: Removing unreachable block (ram,0x0011f1d9) *//* WARNING: Removing unreachable block (ram,0x0011f1ff) *//* WARNING: Removing unreachable block (ram,0x0011f20b) *//* String vformat<Image::Format>(String const&, Image::Format const) */undefined8 *vformat<Image::Format>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0011f3d0) *//* WARNING: Removing unreachable block (ram,0x0011f565) *//* WARNING: Removing unreachable block (ram,0x0011f571) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<GLES3::CanvasTexture, true>::~RID_Alloc() */void RID_Alloc<GLES3::CanvasTexture,true>::~RID_Alloc(RID_Alloc<GLES3::CanvasTexture,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   uint uVar4;
   char *pcVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122bb0;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar5 = local_48;
      lVar6 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar6 = local_50;
         }

      }

      local_50 = lVar6;
      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }

   uVar3 = *(uint*)( this + 0x1c );
   uVar4 = *(uint*)( this + 0x18 );
   if (uVar4 <= uVar3) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
      }
 while ( (uint)lVar6 < uVar3 / uVar4 );
   }

   if (*(void**)( this + 8 ) == (void*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(*(void**)( this + 8 ), false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<GLES3::RenderTarget, false>::~RID_Alloc() */void RID_Alloc<GLES3::RenderTarget,false>::~RID_Alloc(RID_Alloc<GLES3::RenderTarget,false> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   void *pvVar4;
   char *pcVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122bf0;
   if (uVar3 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011f922:if ((uint)uVar6 < (uint)uVar8) goto LAB_0011f963;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar6 / uVar8) <= (uint)lVar7) break;
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
      pcVar5 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
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
         uVar10 = 0;
         do {
            lVar7 = ( uVar10 % uVar8 ) * 0xf0 + puVar9[uVar10 / uVar8];
            if (-1 < *(int*)( lVar7 + 0xe8 )) {
               RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)( lVar7 + 0xb0 ));
               pvVar4 = *(void**)( lVar7 + 0xb0 );
               if (pvVar4 != (void*)0x0) {
                  if (*(long*)( (long)pvVar4 + 0x58 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar4 + 0x58 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar7 = *(long*)( (long)pvVar4 + 0x58 );
                        *(undefined8*)( (long)pvVar4 + 0x58 ) = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar4, false);
               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar10 = uVar10 + 1;
         }
 while ( uVar10 < uVar6 );
         goto LAB_0011f922;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011f963;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011f963:if (puVar9 == (undefined8*)0x0) {
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
/* RID_Alloc<GLES3::CanvasTexture, true>::~RID_Alloc() */void RID_Alloc<GLES3::CanvasTexture,true>::~RID_Alloc(RID_Alloc<GLES3::CanvasTexture,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   uint uVar4;
   char *pcVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122bb0;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String*)&local_48);
      pcVar5 = local_48;
      lVar6 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar6 = local_50;
         }

      }

      local_50 = lVar6;
      if (lVar6 != 0) {
         LOCK();
         plVar1 = (long*)( lVar6 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

   }

   uVar3 = *(uint*)( this + 0x1c );
   uVar4 = *(uint*)( this + 0x18 );
   if (uVar4 <= uVar3) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
      }
 while ( (uint)lVar6 < uVar3 / uVar4 );
   }

   if (*(void**)( this + 8 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<GLES3::RenderTarget, false>::~RID_Alloc() */void RID_Alloc<GLES3::RenderTarget,false>::~RID_Alloc(RID_Alloc<GLES3::RenderTarget,false> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   void *pvVar4;
   char *pcVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122bf0;
   if (uVar3 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011fd42:if ((uint)uVar6 < (uint)uVar8) goto LAB_0011fd83;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar6 / uVar8) <= (uint)lVar7) break;
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
      pcVar5 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
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
         uVar10 = 0;
         do {
            lVar7 = ( uVar10 % uVar8 ) * 0xf0 + puVar9[uVar10 / uVar8];
            if (-1 < *(int*)( lVar7 + 0xe8 )) {
               RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::clear((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)( lVar7 + 0xb0 ));
               pvVar4 = *(void**)( lVar7 + 0xb0 );
               if (pvVar4 != (void*)0x0) {
                  if (*(long*)( (long)pvVar4 + 0x58 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar4 + 0x58 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar7 = *(long*)( (long)pvVar4 + 0x58 );
                        *(undefined8*)( (long)pvVar4 + 0x58 ) = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar4, false);
               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar10 = uVar10 + 1;
         }
 while ( uVar10 < uVar6 );
         goto LAB_0011fd42;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011fd83;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011fd83:if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x58);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<GLES3::CanvasTexture, true>::allocate_rid() */ulong RID_Alloc<GLES3::CanvasTexture,true>::allocate_rid(RID_Alloc<GLES3::CanvasTexture,true> *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   code *pcVar6;
   int iVar7;
   uint uVar8;
   undefined8 uVar9;
   long lVar10;
   uint uVar11;
   uint uVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar7 = pthread_mutex_lock(__mutex);
   if (iVar7 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
   }

   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == *(uint*)( this + 0x1c )) {
      if (uVar8 != 0) {
         uVar8 = uVar8 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) == uVar8) {
         pthread_mutex_unlock(__mutex);
         pcVar5 = *(char**)( this + 0x28 );
         if (pcVar5 == (char*)0x0) {
            uVar13 = 0;
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_50 = 0;
            local_40 = strlen(pcVar5);
            local_48 = pcVar5;
            String::parse_latin1((StrRange*)&local_50);
            local_40 = 0x2b;
            local_48 = "Element limit for RID of type \'%s\' reached.";
            local_58 = 0;
            String::parse_latin1((StrRange*)&local_58);
            vformat<String>(&local_48, &local_58, (StrRange*)&local_50);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_48, 0, 0);
            pcVar5 = local_48;
            if (local_48 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = (char*)0x0;
                  Memory::free_static(pcVar5 + -0x10, false);
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            uVar13 = 0;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         }

         goto LAB_00120058;
      }

      lVar3 = *(long*)( this + 8 );
      uVar13 = (ulong)uVar8;
      uVar9 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 6, false);
      uVar8 = *(uint*)( this + 0x18 );
      lVar4 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar9;
      uVar9 = Memory::alloc_static((ulong)uVar8 << 2, false);
      uVar8 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar4 ) = uVar9;
      if (uVar8 != 0) {
         lVar3 = *(long*)( *(long*)( this + 8 ) + uVar13 * 8 );
         lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar10 = 0;
         do {
            *(undefined4*)( lVar3 + 0x38 + lVar10 * 0x40 ) = 0xffffffff;
            *(int*)( lVar4 + lVar10 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar10;
            uVar8 = *(uint*)( this + 0x18 );
            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < uVar8 );
      }

      *(uint*)( this + 0x1c ) = uVar8 + *(int*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x20 );
   }

   uVar2 = *(uint*)( this + 0x18 );
   uVar8 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar8 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar8 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar11 = (int)RID_AllocBase::base_id + 1;
   uVar12 = uVar11 & 0x7fffffff;
   if (uVar12 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   uVar13 = CONCAT44(uVar11, uVar8) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( ( (ulong)uVar8 % (ulong)uVar2 ) * 0x40 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar8 / (ulong)uVar2 ) * 8 ) + 0x38 ) = uVar12 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00120058:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<GLES3::Texture, true>::allocate_rid() */ulong RID_Alloc<GLES3::Texture,true>::allocate_rid(RID_Alloc<GLES3::Texture,true> *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *__s;
   code *pcVar4;
   int iVar5;
   uint uVar6;
   undefined8 uVar7;
   long lVar8;
   uint uVar9;
   uint uVar10;
   undefined4 *puVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   undefined8 local_58;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = pthread_mutex_lock(__mutex);
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   uVar6 = *(uint*)( this + 0x20 );
   if (uVar6 == *(uint*)( this + 0x1c )) {
      if (uVar6 != 0) {
         uVar6 = uVar6 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) == uVar6) {
         pthread_mutex_unlock(__mutex);
         __s = *(char**)( this + 0x28 );
         if (__s == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_50 = 0;
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
            local_40 = 0x2b;
            local_48 = "Element limit for RID of type \'%s\' reached.";
            local_58 = 0;
            String::parse_latin1((StrRange*)&local_58);
            vformat<String>((CowData<char32_t>*)&local_48, &local_58, (StrRange*)&local_50);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", (CowData<char32_t>*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

         uVar12 = 0;
         goto LAB_00120377;
      }

      uVar12 = (ulong)uVar6;
      lVar3 = *(long*)( this + 8 );
      uVar7 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xf0, false);
      uVar6 = *(uint*)( this + 0x18 );
      lVar8 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar12 * 8 ) = uVar7;
      uVar7 = Memory::alloc_static((ulong)uVar6 << 2, false);
      uVar6 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar12 * 8 + lVar8 ) = uVar7;
      if (uVar6 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar12 * 8 );
         lVar8 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar12 * 8 ) + 0xe8 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x3c;
            *(int*)( lVar3 + lVar8 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar8;
            uVar6 = *(uint*)( this + 0x18 );
            lVar8 = lVar8 + 1;
         }
 while ( (uint)lVar8 < uVar6 );
      }

      *(uint*)( this + 0x1c ) = uVar6 + *(int*)( this + 0x1c );
      uVar6 = *(uint*)( this + 0x20 );
   }

   uVar2 = *(uint*)( this + 0x18 );
   uVar6 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar6 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar6 % (ulong)uVar2 ) * 4 );
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   uVar12 = CONCAT44(uVar9, uVar6) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( ( (ulong)uVar6 % (ulong)uVar2 ) * 0xf0 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar6 / (ulong)uVar2 ) * 8 ) + 0xe8 ) = uVar10 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00120377:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar12;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = String::parse_latin1;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* Ref<Image>::unref() */void Ref<Image>::unref(Ref<Image> *this) {
   char cVar1;
   if (*(long*)this != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)this);
         *(undefined8*)this = 0;
         return;
      }

   }

   *(undefined8*)this = 0;
   return;
}
/* void 
   Vector<GLES3::TextureStorage::TextureAtlas::SortItem>::sort_custom<_DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>,
   true>() */void Vector<GLES3::TextureStorage::TextureAtlas::SortItem>::sort_custom<_DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>,true>(Vector<GLES3::TextureStorage::TextureAtlas::SortItem> *this) {
   int iVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   SortItem *__src;
   bool bVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   long lVar10;
   SortItem *pSVar11;
   SortItem *pSVar12;
   long lVar13;
   SortItem *pSVar14;
   SortItem *pSVar15;
   long in_FS_OFFSET;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 8 ) != 0 ) && ( lVar4 = lVar4 != 0 )) {
      CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_copy_on_write((CowData<GLES3::TextureStorage::TextureAtlas::SortItem>*)( this + 8 ));
      __src = *(SortItem**)( this + 8 );
      if (lVar4 == 1) {
         if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
            SortArray<GLES3::TextureStorage::TextureAtlas::SortItem,_DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>,true>::introsort(0, 1, __src, 0);
            return;
         }

         goto LAB_001209de;
      }

      lVar10 = 0;
      lVar13 = lVar4;
      do {
         lVar13 = lVar13 >> 1;
         lVar10 = lVar10 + 1;
      }
 while ( lVar13 != 1 );
      SortArray<GLES3::TextureStorage::TextureAtlas::SortItem,_DefaultComparator<GLES3::TextureStorage::TextureAtlas::SortItem>,true>::introsort(0, lVar4, __src, lVar10 * 2);
      pSVar15 = __src + 0x20;
      lVar13 = 1;
      pSVar14 = pSVar15;
      if (lVar4 < 0x11) {
         lVar13 = 1;
         do {
            uVar6 = *(undefined8*)pSVar14;
            uVar7 = *(undefined8*)( pSVar14 + 8 );
            uVar8 = *(undefined8*)( pSVar14 + 0x10 );
            uVar9 = *(undefined8*)( pSVar14 + 0x18 );
            iVar1 = *(int*)( pSVar14 + 0x10 );
            iVar2 = *(int*)( pSVar14 + 0x14 );
            pSVar12 = pSVar14;
            lVar10 = lVar13;
            if (iVar2 == *(int*)( __src + 0x14 )) {
               if (*(int*)( __src + 0x10 ) < iVar1) goto LAB_0012085a;
               LAB_001208f6:while (true) {
                  bVar5 = *(int*)( pSVar12 + -0xc ) < iVar2;
                  if (iVar2 == *(int*)( pSVar12 + -0xc )) {
                     bVar5 = *(int*)( pSVar12 + -0x10 ) < iVar1;
                  }

                  if (!bVar5) goto LAB_0012090e;
                  if (lVar10 + -1 == 0) break;
                  *(undefined8*)pSVar12 = *(undefined8*)( pSVar12 + -0x20 );
                  for (int i = 0; i < 3; i++) {
                     *(undefined8*)( pSVar12 + ( 8*i + 8 ) ) = *(undefined8*)( pSVar12 + ( 8*i + -24 ) );
                  }

                  pSVar12 = pSVar12 + -0x20;
                  lVar10 = lVar10 + -1;
               }
;
               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               LAB_0012090e:*(undefined8*)pSVar12 = uVar6;
               *(undefined8*)( pSVar12 + 8 ) = uVar7;
               *(undefined8*)( pSVar12 + 0x10 ) = uVar8;
               *(undefined8*)( pSVar12 + 0x18 ) = uVar9;
            }
 else {
               if (iVar2 <= *(int*)( __src + 0x14 )) goto LAB_001208f6;
               LAB_0012085a:memmove(pSVar15, __src, lVar13 << 5);
               *(undefined8*)__src = uVar6;
               *(undefined8*)( __src + 8 ) = uVar7;
               *(undefined8*)( __src + 0x10 ) = uVar8;
               *(undefined8*)( __src + 0x18 ) = uVar9;
            }

            lVar13 = lVar13 + 1;
            pSVar14 = pSVar14 + 0x20;
         }
 while ( lVar4 != lVar13 );
      }
 else {
         do {
            while (true) {
               lVar10 = lVar13;
               uVar6 = *(undefined8*)pSVar14;
               uVar7 = *(undefined8*)( pSVar14 + 8 );
               uVar8 = *(undefined8*)( pSVar14 + 0x10 );
               uVar9 = *(undefined8*)( pSVar14 + 0x18 );
               iVar1 = *(int*)( pSVar14 + 0x10 );
               iVar2 = *(int*)( pSVar14 + 0x14 );
               pSVar12 = pSVar14;
               if (iVar2 != *(int*)( __src + 0x14 )) break;
               if (*(int*)( __src + 0x10 ) < iVar1) goto LAB_001206e2;
               LAB_0012077b:while (true) {
                  bVar5 = *(int*)( pSVar12 + -0xc ) < iVar2;
                  if (iVar2 == *(int*)( pSVar12 + -0xc )) {
                     bVar5 = *(int*)( pSVar12 + -0x10 ) < iVar1;
                  }

                  if (!bVar5) goto LAB_00120793;
                  pSVar11 = pSVar12 + -0x20;
                  if (__src == pSVar11) break;
                  *(undefined8*)pSVar12 = *(undefined8*)pSVar11;
                  for (int i = 0; i < 3; i++) {
                     *(undefined8*)( pSVar12 + ( 8*i + 8 ) ) = *(undefined8*)( pSVar12 + ( 8*i + -24 ) );
                  }

                  pSVar12 = pSVar11;
               }
;
               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               LAB_00120793:pSVar14 = pSVar14 + 0x20;
               *(undefined8*)pSVar12 = uVar6;
               *(undefined8*)( pSVar12 + 8 ) = uVar7;
               *(undefined8*)( pSVar12 + 0x10 ) = uVar8;
               *(undefined8*)( pSVar12 + 0x18 ) = uVar9;
               lVar13 = lVar10 + 1;
               if (lVar10 + 1 == 0x10) goto LAB_001207ba;
            }
;
            if (iVar2 <= *(int*)( __src + 0x14 )) goto LAB_0012077b;
            LAB_001206e2:pSVar14 = pSVar14 + 0x20;
            memmove(pSVar15, __src, lVar10 << 5);
            *(undefined8*)__src = uVar6;
            *(undefined8*)( __src + 8 ) = uVar7;
            *(undefined8*)( __src + 0x10 ) = uVar8;
            *(undefined8*)( __src + 0x18 ) = uVar9;
            lVar13 = lVar10 + 1;
         }
 while ( lVar10 + 1 != 0x10 );
         LAB_001207ba:lVar10 = lVar10 + 1;
         pSVar15 = __src + 0x200;
         do {
            uVar6 = *(undefined8*)pSVar15;
            uVar7 = *(undefined8*)( pSVar15 + 8 );
            iVar1 = *(int*)( pSVar15 + 0x10 );
            uVar8 = *(undefined8*)( pSVar15 + 0x10 );
            uVar9 = *(undefined8*)( pSVar15 + 0x18 );
            iVar2 = *(int*)( pSVar15 + 0x14 );
            pSVar14 = pSVar15;
            lVar13 = lVar10;
            while (true) {
               if (*(int*)( pSVar14 + -0xc ) == iVar2) {
                  if (iVar1 <= *(int*)( pSVar14 + -0x10 )) goto LAB_00120828;
               }
 else if (iVar2 <= *(int*)( pSVar14 + -0xc )) goto LAB_00120828;
               lVar13 = lVar13 + -1;
               if (lVar13 == 0) break;
               *(undefined8*)pSVar14 = *(undefined8*)( pSVar14 + -0x20 );
               for (int i = 0; i < 3; i++) {
                  *(undefined8*)( pSVar14 + ( 8*i + 8 ) ) = *(undefined8*)( pSVar14 + ( 8*i + -24 ) );
               }

               pSVar14 = pSVar14 + -0x20;
            }
;
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            lVar13 = 1;
            LAB_00120828:lVar10 = lVar10 + 1;
            pSVar15 = pSVar15 + 0x20;
            pSVar14 = __src + lVar13 * 0x20;
            *(undefined8*)pSVar14 = uVar6;
            *(undefined8*)( pSVar14 + 8 ) = uVar7;
            *(undefined8*)( pSVar14 + 0x10 ) = uVar8;
            *(undefined8*)( pSVar14 + 0x18 ) = uVar9;
         }
 while ( lVar4 != lVar10 );
      }

   }

   if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001209de:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
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
/* CowData<RID>::_realloc(long) */undefined8 CowData<RID>::_realloc(CowData<RID> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<RID>::resize<false>(long) */undefined8 CowData<RID>::resize<false>(CowData<RID> *this, long param_1) {
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
      lVar3 = lVar8 * 8;
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
      LAB_00120d90:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_00120d90;
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
      LAB_00120cfc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00120c91;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00120cfc;
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

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_00120c91:puVar9[-1] = param_1;
   return 0;
}
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* CowData<Ref<Image> >::_unref() */void CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this) {
   long *plVar1;
   long lVar2;
   Image *pIVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
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

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_00120ec5:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pIVar3 = (Image*)*plVar6;
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
               memdelete<Image>(pIVar3);
               if (lVar2 == lVar7) break;
               goto LAB_00120ec5;
            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* RID_Alloc<GLES3::Texture, true>::initialize_rid(RID, GLES3::Texture const&) */void RID_Alloc<GLES3::Texture,true>::initialize_rid(RID_Alloc<GLES3::Texture,true> *this, ulong param_2, undefined8 *param_3) {
   undefined2 uVar1;
   undefined4 uVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   char cVar10;
   uint uVar11;
   undefined8 uVar12;
   undefined8 *puVar13;
   char *pcVar14;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar13 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xf0 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
      if ((int)*(uint*)( puVar13 + 0x1d ) < 0) {
         uVar11 = *(uint*)( puVar13 + 0x1d ) & 0x7fffffff;
         if (uVar11 == ( uint )(param_2 >> 0x20)) {
            *(uint*)( puVar13 + 0x1d ) = uVar11;
            *puVar13 = *param_3;
            *(undefined2*)( puVar13 + 1 ) = *(undefined2*)( param_3 + 1 );
            *(undefined1*)( (long)puVar13 + 10 ) = *(undefined1*)( (long)param_3 + 10 );
            uVar12 = param_3[2];
            puVar13[4] = 0;
            lVar3 = param_3[4];
            puVar13[2] = uVar12;
            if (lVar3 != 0) {
               CowData<RID>::_ref((CowData<RID>*)( puVar13 + 4 ), (CowData*)( param_3 + 4 ));
            }

            puVar13[5] = 0;
            if (param_3[5] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar13 + 5 ), (CowData*)( param_3 + 5 ));
            }

            uVar4 = param_3[6];
            uVar5 = param_3[7];
            uVar6 = param_3[8];
            uVar7 = param_3[9];
            uVar8 = *(undefined8*)( (long)param_3 + 0x54 );
            uVar9 = *(undefined8*)( (long)param_3 + 0x5c );
            *(undefined4*)( puVar13 + 10 ) = *(undefined4*)( param_3 + 10 );
            uVar12 = *(undefined8*)( (long)param_3 + 100 );
            puVar13[6] = uVar4;
            puVar13[7] = uVar5;
            *(undefined8*)( (long)puVar13 + 100 ) = uVar12;
            uVar2 = *(undefined4*)( (long)param_3 + 0x6c );
            puVar13[8] = uVar6;
            puVar13[9] = uVar7;
            *(undefined4*)( (long)puVar13 + 0x6c ) = uVar2;
            uVar1 = *(undefined2*)( param_3 + 0xe );
            *(undefined8*)( (long)puVar13 + 0x54 ) = uVar8;
            *(undefined8*)( (long)puVar13 + 0x5c ) = uVar9;
            *(undefined2*)( puVar13 + 0xe ) = uVar1;
            *(undefined1*)( (long)puVar13 + 0x72 ) = *(undefined1*)( (long)param_3 + 0x72 );
            *(undefined4*)( (long)puVar13 + 0x74 ) = *(undefined4*)( (long)param_3 + 0x74 );
            *(undefined2*)( puVar13 + 0xf ) = *(undefined2*)( param_3 + 0xf );
            uVar12 = param_3[0x10];
            puVar13[0x11] = 0;
            lVar3 = param_3[0x11];
            puVar13[0x10] = uVar12;
            if (lVar3 != 0) {
               puVar13[0x11] = lVar3;
               cVar10 = RefCounted::reference();
               if (cVar10 == '\0') {
                  puVar13[0x11] = 0;
               }

            }

            puVar13[0x13] = 0;
            if (param_3[0x13] != 0) {
               CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)( puVar13 + 0x13 ), (CowData*)( param_3 + 0x13 ));
            }

            uVar4 = param_3[0x1a];
            uVar5 = param_3[0x1b];
            *(undefined1*)( puVar13 + 0x14 ) = *(undefined1*)( param_3 + 0x14 );
            uVar12 = param_3[0x15];
            puVar13[0x1a] = uVar4;
            puVar13[0x1b] = uVar5;
            puVar13[0x15] = uVar12;
            puVar13[0x16] = param_3[0x16];
            puVar13[0x17] = param_3[0x17];
            puVar13[0x18] = param_3[0x18];
            puVar13[0x19] = param_3[0x19];
            puVar13[0x1c] = param_3[0x1c];
            return;
         }

         pcVar14 = "Attempting to initialize the wrong RID";
         uVar12 = 0xfc;
      }
 else {
         pcVar14 = "Initializing already initialized RID";
         uVar12 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar12, "Method/function failed. Returning: nullptr", pcVar14, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return;
}
/* RID_Alloc<GLES3::Texture, true>::make_rid(GLES3::Texture const&) */ulong RID_Alloc<GLES3::Texture,true>::make_rid(RID_Alloc<GLES3::Texture,true> *this, Texture *param_1) {
   pthread_mutex_t *__mutex;
   uint uVar1;
   long lVar2;
   char *__s;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   undefined8 uVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   undefined4 *puVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = pthread_mutex_lock(__mutex);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   uVar5 = *(uint*)( this + 0x20 );
   if (uVar5 == *(uint*)( this + 0x1c )) {
      if (uVar5 != 0) {
         uVar5 = uVar5 / *(uint*)( this + 0x18 );
      }

      if (*(uint*)( this + 0x24 ) == uVar5) {
         pthread_mutex_unlock(__mutex);
         __s = *(char**)( this + 0x28 );
         if (__s == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>((CowData<char32_t>*)&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", (CowData<char32_t>*)&local_58, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }

         uVar11 = 0;
         goto LAB_00121307;
      }

      uVar11 = (ulong)uVar5;
      lVar2 = *(long*)( this + 8 );
      uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xf0, false);
      uVar5 = *(uint*)( this + 0x18 );
      lVar7 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar2 + uVar11 * 8 ) = uVar6;
      uVar6 = Memory::alloc_static((ulong)uVar5 << 2, false);
      uVar5 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar11 * 8 + lVar7 ) = uVar6;
      if (uVar5 != 0) {
         lVar2 = *(long*)( *(long*)( this + 0x10 ) + uVar11 * 8 );
         lVar7 = 0;
         puVar10 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar11 * 8 ) + 0xe8 );
         do {
            *puVar10 = 0xffffffff;
            puVar10 = puVar10 + 0x3c;
            *(int*)( lVar2 + lVar7 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar7;
            uVar5 = *(uint*)( this + 0x18 );
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < uVar5 );
      }

      *(uint*)( this + 0x1c ) = uVar5 + *(int*)( this + 0x1c );
      uVar5 = *(uint*)( this + 0x20 );
   }

   uVar1 = *(uint*)( this + 0x18 );
   uVar5 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar5 / (ulong)uVar1 ) * 8 ) + ( (ulong)uVar5 % (ulong)uVar1 ) * 4 );
   LOCK();
   UNLOCK();
   uVar8 = (int)RID_AllocBase::base_id + 1;
   uVar9 = uVar8 & 0x7fffffff;
   if (uVar9 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   uVar11 = CONCAT44(uVar8, uVar5) & 0x7fffffffffffffff;
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( ( (ulong)uVar5 % (ulong)uVar1 ) * 0xf0 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar5 / (ulong)uVar1 ) * 8 ) + 0xe8 ) = uVar9 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00121307:initialize_rid(this, uVar11, param_1);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<GLES3::Texture, true>::~RID_Alloc() */void RID_Alloc<GLES3::Texture,true>::~RID_Alloc(RID_Alloc<GLES3::Texture,true> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   char cVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   ulong uVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00122bd0;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0012164a:if ((uint)uVar6 < (uint)uVar8) goto LAB_0012168b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar3 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
         if (( uint )(uVar6 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 8 );
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
         uVar10 = 0;
         do {
            lVar7 = ( uVar10 % uVar8 ) * 0xf0 + puVar9[uVar10 / uVar8];
            if (-1 < *(int*)( lVar7 + 0xe8 )) {
               CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)( lVar7 + 0x98 ));
               if (( *(long*)( lVar7 + 0x88 ) != 0 ) && ( cVar5 = cVar5 != '\0' )) {
                  memdelete<Image>(*(Image**)( lVar7 + 0x88 ));
               }

               if (*(long*)( lVar7 + 0x28 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar7 + 0x28 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar7 + 0x28 );
                     *(undefined8*)( lVar7 + 0x28 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar7 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar7 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( lVar7 + 0x20 );
                     *(undefined8*)( lVar7 + 0x20 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar10 = uVar10 + 1;
         }
 while ( uVar10 < uVar6 );
         goto LAB_0012164a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0012168b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_0012168b:if (puVar9 == (undefined8*)0x0) {
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
/* RID_Alloc<GLES3::Texture, true>::~RID_Alloc() */void RID_Alloc<GLES3::Texture,true>::~RID_Alloc(RID_Alloc<GLES3::Texture,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* CowData<Ref<Image> >::_realloc(long) */undefined8 CowData<Ref<Image>>::_realloc(CowData<Ref<Image>> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Ref<Image> >::resize<false>(long) */undefined8 CowData<Ref<Image>>::resize<false>(CowData<Ref<Image>> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
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
      LAB_00121b00:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00121b00;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_001219ca:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (plVar1 = (long*)( lVar6 + uVar8 * 8 ),*plVar1 == 0) {
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_001219ca;
         }
;
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            memdelete<Image>((Image*)*plVar1);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_00121990;
   }

   if (lVar10 == lVar7) {
      LAB_00121a7b:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00121990:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_00121a5b;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00121a7b;
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
   LAB_00121a5b:puVar9[-1] = param_1;
   return 0;
}
/* CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_realloc(long) */undefined8 CowData<GLES3::TextureStorage::TextureAtlas::SortItem>::_realloc(CowData<GLES3::TextureStorage::TextureAtlas::SortItem> *this, long param_1) {
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
/* RBMap<unsigned int, GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>,
   DefaultAllocator>::_insert_rb_fix(RBMap<unsigned int,
   GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>,
   DefaultAllocator>::Element*) */void RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::_insert_rb_fix(RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_00121ccd;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00121df0;
            LAB_00121c76:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00121c76;
            LAB_00121df0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00121cb3:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00121ee2:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00121ee2;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00121eb0;
            LAB_00121d40:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00121d40;
            LAB_00121eb0:_err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00121cb3;
      }

      LAB_00121ccd:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_map.h", 0xed, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* CowData<unsigned int>::_realloc(long) */undefined8 CowData<unsigned_int>::_realloc(CowData<unsigned_int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned int>::resize<false>(long) */undefined8 CowData<unsigned_int>::resize<false>(CowData<unsigned_int> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00122180:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00122180;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_00122091;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00122091:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RBMap<unsigned int, GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>,
   DefaultAllocator>::_copy_from(RBMap<unsigned int,
   GLES3::RenderTarget::RTOverridden::FBOCacheEntry, Comparator<unsigned int>, DefaultAllocator>
   const&) */void RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::_copy_from(RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator> *this, RBMap *param_1) {
   long *plVar1;
   undefined4 uVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element *pEVar12;
   Element *pEVar13;
   long lVar14;
   long lVar15;
   long in_FS_OFFSET;
   bool bVar16;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   clear(this);
   if (*(long*)param_1 != 0) {
      lVar15 = *(long*)( *(long*)param_1 + 0x10 );
      if (lVar15 != *(long*)( param_1 + 8 )) {
         do {
            lVar14 = lVar15;
            lVar15 = *(long*)( lVar14 + 0x10 );
         }
 while ( *(long*)( param_1 + 8 ) != *(long*)( lVar14 + 0x10 ) );
         do {
            pEVar9 = *(Element**)this;
            if (pEVar9 == (Element*)0x0) {
               pEVar9 = (Element*)operator_new(0x60, DefaultAllocator::alloc);
               *(undefined1(*) [16])( pEVar9 + 0x20 ) = (undefined1[16])0x0;
               uVar4 = *(undefined8*)( this + 8 );
               *(undefined4*)( pEVar9 + 0x30 ) = 0;
               *(undefined8*)( pEVar9 + 0x38 ) = 0;
               *(undefined4*)( pEVar9 + 0x40 ) = 0;
               *(undefined8*)( pEVar9 + 0x44 ) = 0;
               *(undefined8*)( pEVar9 + 0x58 ) = 0;
               *(Element**)this = pEVar9;
               *(undefined4*)pEVar9 = 1;
               for (int i = 0; i < 3; i++) {
                  *(undefined8*)( pEVar9 + ( 8*i + 8 ) ) = uVar4;
               }

            }
 else if (*(Element**)( pEVar9 + 0x10 ) != *(Element**)( this + 8 )) {
               pEVar6 = *(Element**)( pEVar9 + 0x10 );
               do {
                  pEVar9 = pEVar6;
                  if (*(uint*)( lVar14 + 0x30 ) < *(uint*)( pEVar9 + 0x30 )) {
                     pEVar6 = *(Element**)( pEVar9 + 0x10 );
                  }
 else {
                     if (*(uint*)( lVar14 + 0x30 ) <= *(uint*)( pEVar9 + 0x30 )) {
                        *(undefined8*)( pEVar9 + 0x38 ) = *(undefined8*)( lVar14 + 0x38 );
                        *(undefined4*)( pEVar9 + 0x40 ) = *(undefined4*)( lVar14 + 0x40 );
                        *(undefined8*)( pEVar9 + 0x44 ) = *(undefined8*)( lVar14 + 0x44 );
                        if (*(long*)( pEVar9 + 0x58 ) != *(long*)( lVar14 + 0x58 )) {
                           CowData<unsigned_int>::_ref((CowData<unsigned_int>*)( pEVar9 + 0x58 ), (CowData*)( lVar14 + 0x58 ));
                        }

                        goto LAB_00122420;
                     }

                     pEVar6 = *(Element**)( pEVar9 + 8 );
                  }

               }
 while ( *(Element**)( this + 8 ) != pEVar6 );
            }

            pEVar6 = (Element*)operator_new(0x60, DefaultAllocator::alloc);
            uVar2 = *(undefined4*)( lVar14 + 0x30 );
            uVar4 = *(undefined8*)( lVar14 + 0x38 );
            local_50[0] = 0;
            uVar5 = *(undefined8*)( lVar14 + 0x44 );
            uVar3 = *(undefined4*)( lVar14 + 0x40 );
            lVar15 = *(long*)( lVar14 + 0x58 );
            if (*(long*)( lVar14 + 0x58 ) != 0) {
               CowData<unsigned_int>::_ref((CowData<unsigned_int>*)local_50, (CowData*)( lVar14 + 0x58 ));
               lVar15 = local_50[0];
            }

            *(undefined4*)( pEVar6 + 0x40 ) = uVar3;
            *(undefined4*)pEVar6 = 0;
            *(undefined8*)( pEVar6 + 0x28 ) = 0;
            *(undefined4*)( pEVar6 + 0x30 ) = uVar2;
            *(undefined8*)( pEVar6 + 0x38 ) = uVar4;
            *(undefined8*)( pEVar6 + 0x44 ) = uVar5;
            *(undefined8*)( pEVar6 + 0x58 ) = 0;
            *(undefined1(*) [16])( pEVar6 + 8 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( pEVar6 + 0x18 ) = (undefined1[16])0x0;
            if (lVar15 != 0) {
               CowData<unsigned_int>::_ref((CowData<unsigned_int>*)( pEVar6 + 0x58 ), (CowData*)local_50);
               LOCK();
               plVar1 = (long*)( lVar15 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_50[0] + -0x10 ), false);
               }

            }

            *(Element**)( pEVar6 + 0x18 ) = pEVar9;
            pEVar7 = *(Element**)( this + 8 );
            *(Element**)( pEVar6 + 8 ) = pEVar7;
            *(Element**)( pEVar6 + 0x10 ) = pEVar7;
            if (( *(Element**)this == pEVar9 ) || ( *(uint*)( lVar14 + 0x30 ) < *(uint*)( pEVar9 + 0x30 ) )) {
               *(Element**)( pEVar9 + 0x10 ) = pEVar6;
               pEVar12 = *(Element**)( this + 8 );
               pEVar10 = *(Element**)( pEVar6 + 0x10 );
               pEVar13 = *(Element**)this;
               pEVar11 = pEVar7;
               if (pEVar7 != pEVar12) goto LAB_001223c0;
               pEVar8 = pEVar9;
               if (pEVar6 == *(Element**)( pEVar9 + 8 )) goto LAB_00122480;
               pEVar7 = pEVar9;
               if (pEVar9 == pEVar13) {
                  pEVar7 = (Element*)0x0;
               }

            }
 else {
               *(Element**)( pEVar9 + 8 ) = pEVar6;
               pEVar11 = *(Element**)( pEVar6 + 8 );
               pEVar12 = *(Element**)( this + 8 );
               pEVar13 = *(Element**)this;
               pEVar8 = pEVar9;
               pEVar10 = pEVar7;
               if (pEVar12 == pEVar11) {
                  LAB_00122480:do {
                     pEVar7 = *(Element**)( pEVar8 + 0x18 );
                     bVar16 = pEVar8 == *(Element**)( pEVar7 + 8 );
                     pEVar8 = pEVar7;
                  }
 while ( bVar16 );
                  if (pEVar7 == pEVar13) {
                     pEVar7 = (Element*)0x0;
                  }

               }
 else {
                  LAB_001223c0:do {
                     pEVar13 = pEVar11 + 0x10;
                     pEVar7 = pEVar11;
                     pEVar11 = *(Element**)pEVar13;
                  }
 while ( *(Element**)pEVar13 != pEVar12 );
               }

            }

            *(Element**)( pEVar6 + 0x20 ) = pEVar7;
            if (*(Element**)( this + 8 ) == pEVar10) {
               if (pEVar6 != *(Element**)( pEVar9 + 0x10 )) {
                  if (pEVar6 == *(Element**)this) goto LAB_00122506;
                  goto LAB_001223f4;
               }

               do {
                  pEVar11 = pEVar9;
                  pEVar9 = *(Element**)( pEVar11 + 0x18 );
               }
 while ( pEVar11 == *(Element**)( pEVar9 + 0x10 ) );
               if (pEVar11 != *(Element**)this) goto LAB_001223f4;
               LAB_00122506:*(undefined8*)( pEVar6 + 0x28 ) = 0;
               if (pEVar7 != (Element*)0x0) goto LAB_001223fe;
            }
 else {
               do {
                  pEVar9 = pEVar10;
                  pEVar10 = *(Element**)( pEVar9 + 8 );
               }
 while ( *(Element**)( this + 8 ) != *(Element**)( pEVar9 + 8 ) );
               LAB_001223f4:*(Element**)( pEVar6 + 0x28 ) = pEVar9;
               if (pEVar7 != (Element*)0x0) {
                  LAB_001223fe:*(Element**)( pEVar7 + 0x28 ) = pEVar6;
                  pEVar9 = *(Element**)( pEVar6 + 0x28 );
                  if (pEVar9 == (Element*)0x0) goto LAB_00122410;
               }

               *(Element**)( pEVar9 + 0x20 ) = pEVar6;
            }

            LAB_00122410:*(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
            _insert_rb_fix(this, pEVar6);
            LAB_00122420:lVar14 = *(long*)( lVar14 + 0x20 );
         }
 while ( lVar14 != 0 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<GLES3::RenderTarget, false>::make_rid(GLES3::RenderTarget const&) */ulong RID_Alloc<GLES3::RenderTarget,false>::make_rid(RID_Alloc<GLES3::RenderTarget,false> *this, RenderTarget *param_1) {
   RenderTarget RVar1;
   undefined8 uVar2;
   void *pvVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   undefined4 *puVar16;
   undefined8 uVar17;
   undefined8 *puVar18;
   char *pcVar19;
   ulong uVar20;
   long lVar21;
   ulong uVar22;
   uVar15 = *(uint*)( this + 0x20 );
   if (uVar15 == *(uint*)( this + 0x1c )) {
      if (uVar15 == 0) {
         lVar21 = 0;
         uVar22 = 8;
      }
 else {
         uVar22 = ( ulong )((int)( (ulong)uVar15 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar21 = ( (ulong)uVar15 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar9 = Memory::realloc_static(*(void**)( this + 8 ), uVar22, false);
      *(long*)( this + 8 ) = lVar9;
      uVar17 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xf0, false);
      pvVar3 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar9 + lVar21 ) = uVar17;
      lVar10 = Memory::realloc_static(pvVar3, uVar22, false);
      *(long*)( this + 0x10 ) = lVar10;
      uVar17 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar12 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar10 + lVar21 ) = uVar17;
      if (uVar12 != 0) {
         lVar10 = *(long*)( lVar9 + lVar21 );
         lVar11 = 0;
         puVar16 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar21 ) + 0xe8 );
         do {
            *puVar16 = 0xffffffff;
            puVar16 = puVar16 + 0x3c;
            *(int*)( lVar10 + lVar11 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar11;
            uVar12 = *(uint*)( this + 0x18 );
            lVar11 = lVar11 + 1;
         }
 while ( (uint)lVar11 < uVar12 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar12;
      uVar15 = *(uint*)( this + 0x20 );
   }
 else {
      lVar9 = *(long*)( this + 0x10 );
      uVar12 = *(uint*)( this + 0x18 );
   }

   uVar15 = *(uint*)( *(long*)( lVar9 + ( (ulong)uVar15 / (ulong)uVar12 ) * 8 ) + ( (ulong)uVar15 % (ulong)uVar12 ) * 4 );
   uVar22 = (ulong)uVar15;
   LOCK();
   UNLOCK();
   uVar13 = (int)RID_AllocBase::base_id + 1;
   uVar14 = uVar13 & 0x7fffffff;
   if (uVar14 != 0x7fffffff) {
      lVar21 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar22 % (ulong)uVar12 ) * 0xf0 + *(long*)( lVar21 + ( uVar22 / uVar12 ) * 8 ) + 0xe8 ) = uVar14 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar20 = CONCAT44(uVar13, uVar15) & 0x7fffffffffffffff;
      if (( uVar20 != 0 ) && ( (uint)uVar20 < *(uint*)( this + 0x1c ) )) {
         puVar18 = (undefined8*)( ( uVar22 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xf0 + *(long*)( lVar21 + ( uVar22 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar18 + 0x1d ) < 0) {
            uVar15 = ( uint )(uVar20 >> 0x20);
            if (uVar15 == ( *(uint*)( puVar18 + 0x1d ) & 0x7fffffff )) {
               uVar17 = *(undefined8*)param_1;
               *(uint*)( puVar18 + 0x1d ) = uVar15;
               uVar5 = *(undefined8*)( param_1 + 0x20 );
               uVar6 = *(undefined8*)( param_1 + 0x28 );
               uVar7 = *(undefined8*)( param_1 + 0x3c );
               uVar8 = *(undefined8*)( param_1 + 0x44 );
               *puVar18 = uVar17;
               uVar17 = *(undefined8*)( param_1 + 8 );
               uVar2 = *(undefined8*)( param_1 + 0x74 );
               puVar18[4] = uVar5;
               puVar18[5] = uVar6;
               puVar18[1] = uVar17;
               uVar17 = *(undefined8*)( param_1 + 0x10 );
               *(undefined8*)( (long)puVar18 + 0x74 ) = uVar2;
               puVar18[2] = uVar17;
               uVar17 = *(undefined8*)( param_1 + 0x18 );
               *(undefined8*)( (long)puVar18 + 0x3c ) = uVar7;
               *(undefined8*)( (long)puVar18 + 0x44 ) = uVar8;
               puVar18[3] = uVar17;
               puVar18[6] = *(undefined8*)( param_1 + 0x30 );
               *(RenderTarget*)( puVar18 + 7 ) = param_1[0x38];
               *(undefined4*)( (long)puVar18 + 0x4c ) = *(undefined4*)( param_1 + 0x4c );
               for (int i = 0; i < 3; i++) {
                  puVar18[( i + 10 )] = *(undefined8*)( param_1 + ( 8*i + 80 ) );
               }

               *(undefined4*)( puVar18 + 0xd ) = *(undefined4*)( param_1 + 0x68 );
               *(undefined8*)( (long)puVar18 + 0x6c ) = *(undefined8*)( param_1 + 0x6c );
               *(RenderTarget*)( (long)puVar18 + 0x7c ) = param_1[0x7c];
               uVar2 = *(undefined8*)( param_1 + 0x80 );
               uVar5 = *(undefined8*)( param_1 + 0x88 );
               *(RenderTarget*)( puVar18 + 0x12 ) = param_1[0x90];
               uVar17 = *(undefined8*)( param_1 + 0x98 );
               puVar18[0x10] = uVar2;
               puVar18[0x11] = uVar5;
               puVar18[0x13] = uVar17;
               puVar18[0x14] = *(undefined8*)( param_1 + 0xa0 );
               uVar17 = *(undefined8*)( param_1 + 0xa8 );
               puVar18[0x16] = 0;
               puVar18[0x15] = uVar17;
               puVar18[0x17] = &_GlobalNilClass::_nil;
               *(undefined4*)( puVar18 + 0x18 ) = 0;
               RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>::_copy_from((RBMap<unsigned_int,GLES3::RenderTarget::RTOverridden::FBOCacheEntry,Comparator<unsigned_int>,DefaultAllocator>*)( puVar18 + 0x16 ), (RBMap*)( param_1 + 0xb0 ));
               uVar17 = *(undefined8*)( param_1 + 0xd0 );
               uVar2 = *(undefined8*)( param_1 + 0xd8 );
               puVar18[0x19] = *(undefined8*)( param_1 + 200 );
               RVar1 = param_1[0xe0];
               puVar18[0x1a] = uVar17;
               puVar18[0x1b] = uVar2;
               *(RenderTarget*)( puVar18 + 0x1c ) = RVar1;
               return uVar20;
            }

            pcVar19 = "Attempting to initialize the wrong RID";
            uVar17 = 0xfc;
         }
 else {
            pcVar19 = "Initializing already initialized RID";
            uVar17 = 0xf8;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar17, "Method/function failed. Returning: nullptr", pcVar19, 0, 0);
      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return uVar20;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::Texture, true>::~RID_Alloc() */void RID_Alloc<GLES3::Texture,true>::~RID_Alloc(RID_Alloc<GLES3::Texture,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::RenderTarget, false>::~RID_Alloc() */void RID_Alloc<GLES3::RenderTarget,false>::~RID_Alloc(RID_Alloc<GLES3::RenderTarget,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::CanvasTexture, true>::~RID_Alloc() */void RID_Alloc<GLES3::CanvasTexture,true>::~RID_Alloc(RID_Alloc<GLES3::CanvasTexture,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CanvasSdfShaderGLES3::~CanvasSdfShaderGLES3() */void CanvasSdfShaderGLES3::~CanvasSdfShaderGLES3(CanvasSdfShaderGLES3 *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


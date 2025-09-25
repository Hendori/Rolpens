/* RendererRD::LightStorage::lightmap_set_probe_capture_update_speed(float) */void RendererRD::LightStorage::lightmap_set_probe_capture_update_speed(LightStorage *this, float param_1) {
   *(float*)( this + 0x260 ) = param_1;
   return;
}
/* RendererRD::LightStorage::set_directional_shadow_count(int) */void RendererRD::LightStorage::set_directional_shadow_count(LightStorage *this, int param_1) {
   *(int*)( this + 0x398 ) = param_1;
   *(undefined4*)( this + 0x3a4 ) = 0;
   return;
}
/* RendererRD::LightStorage::light_instance_set_transform(RID, Transform3D const&) */void RendererRD::LightStorage::light_instance_set_transform(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x84 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      if (*(int*)( lVar2 + 0x490 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x3d8 ) = *param_3;
         *(undefined8*)( lVar2 + 0x3e0 ) = uVar1;
         uVar1 = param_3[3];
         *(undefined8*)( lVar2 + 1000 ) = param_3[2];
         *(undefined8*)( lVar2 + 0x3f0 ) = uVar1;
         uVar1 = param_3[5];
         *(undefined8*)( lVar2 + 0x3f8 ) = param_3[4];
         *(undefined8*)( lVar2 + 0x400 ) = uVar1;
         return;
      }

      if (*(int*)( lVar2 + 0x490 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_instance_set_transform", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x1f7, "Parameter \"light_instance\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_instance_set_aabb(RID, AABB const&) */void RendererRD::LightStorage::light_instance_set_aabb(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x84 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      if (*(int*)( lVar2 + 0x490 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x3ac ) = *param_3;
         *(undefined8*)( lVar2 + 0x3b4 ) = uVar1;
         *(undefined8*)( lVar2 + 0x3bc ) = param_3[2];
         return;
      }

      if (*(int*)( lVar2 + 0x490 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_instance_set_aabb", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x1fe, "Parameter \"light_instance\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_instance_mark_visible(RID) */void RendererRD::LightStorage::light_instance_mark_visible(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x84 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x490 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar2 + 0x430 ) = *(undefined8*)( RendererSceneRenderRD::singleton + 0x2498 );
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_instance_mark_visible", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x215, "Parameter \"light_instance\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_atlas_get_size(RID) const */undefined4 RendererRD::LightStorage::reflection_atlas_get_size(LightStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x18c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x178 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
      iVar2 = *(int*)( lVar1 + 0x40 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar1 + 4 );
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_atlas_get_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x56f, "Parameter \"ra\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_instance_set_transform(RID, Transform3D const&) */void RendererRD::LightStorage::reflection_probe_instance_set_transform(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
      if (*(int*)( lVar3 + 0x68 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar3 + 0x38 ) = *param_3;
         *(undefined8*)( lVar3 + 0x40 ) = uVar1;
         uVar1 = param_3[3];
         *(undefined8*)( lVar3 + 0x48 ) = param_3[2];
         *(undefined8*)( lVar3 + 0x50 ) = uVar1;
         uVar1 = param_3[4];
         uVar2 = param_3[5];
         *(undefined1*)( lVar3 + 0x18 ) = 1;
         *(undefined8*)( lVar3 + 0x58 ) = uVar1;
         *(undefined8*)( lVar3 + 0x60 ) = uVar2;
         return;
      }

      if (*(int*)( lVar3 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_instance_set_transform", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x587, "Parameter \"rpi\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_has_atlas_index(RID) */uint RendererRD::LightStorage::reflection_probe_has_atlas_index(LightStorage *this, ulong param_2) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
      if (*(int*)( lVar1 + 0x68 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar1 + 0x10 ) == 0) {
            return 0;
         }

         return ~*(uint *)(lVar1 + 8) >> 0x1f;
      }

      if (*(int*)( lVar1 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_has_atlas_index", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x58f, "Parameter \"rpi\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_instance_needs_redraw(RID) */bool RendererRD::LightStorage::reflection_probe_instance_needs_redraw(LightStorage *this, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 ) );
      if (*(int*)( puVar2 + 0xd ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( (long)puVar2 + 0x19 ) != '\0') {
            return false;
         }

         if (( *(char*)( puVar2 + 3 ) == '\0' ) && ( iVar1 = iVar1 != 1 )) {
            return *(int*)( puVar2 + 1 ) == -1;
         }

         return true;
      }

      if (*(int*)( puVar2 + 0xd ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_instance_needs_redraw", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x5b4, "Parameter \"rpi\" is null.", 0, 0);
   return false;
}
/* RendererRD::LightStorage::reflection_probe_instance_has_reflection(RID) */undefined8 RendererRD::LightStorage::reflection_probe_instance_has_reflection(LightStorage *this, ulong param_2) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
      if (*(int*)( lVar1 + 0x68 ) == (int)( param_2 >> 0x20 )) {
         return CONCAT71(( int7 )((ulong)lVar1 >> 8), *(long*)( lVar1 + 0x10 ) != 0);
      }

      if (*(int*)( lVar1 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_instance_has_reflection", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x5c7, "Parameter \"rpi\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::lightmap_instance_set_transform(RID, Transform3D const&) */void RendererRD::LightStorage::lightmap_instance_set_transform(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2ec ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2e8 ) ) * 0x40 + *(long*)( *(long*)( this + 0x2d8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2e8 ) ) * 8 );
      if (*(int*)( lVar2 + 0x38 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 8 ) = *param_3;
         *(undefined8*)( lVar2 + 0x10 ) = uVar1;
         uVar1 = param_3[3];
         *(undefined8*)( lVar2 + 0x18 ) = param_3[2];
         *(undefined8*)( lVar2 + 0x20 ) = uVar1;
         uVar1 = param_3[5];
         *(undefined8*)( lVar2 + 0x28 ) = param_3[4];
         *(undefined8*)( lVar2 + 0x30 ) = uVar1;
         return;
      }

      if (*(int*)( lVar2 + 0x38 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_instance_set_transform", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x834, "Parameter \"li\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::lightmap_instance_free(RID) */void RendererRD::LightStorage::lightmap_instance_free(LightStorage *this, ulong param_2) {
   int iVar1;
   uint uVar2;
   long lVar3;
   if (*(uint*)( this + 0x2ec ) <= (uint)param_2) {
      _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      return;
   }

   lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2e8 ) ) * 0x40 + *(long*)( *(long*)( this + 0x2d8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2e8 ) ) * 8 );
   iVar1 = *(int*)( lVar3 + 0x38 );
   if (-1 < iVar1) {
      if ((int)( param_2 >> 0x20 ) == iVar1) {
         *(undefined4*)( lVar3 + 0x38 ) = 0xffffffff;
         uVar2 = *(int*)( this + 0x2f0 ) - 1;
         *(uint*)( this + 0x2f0 ) = uVar2;
         *(uint*)( *(long*)( *(long*)( this + 0x2e0 ) + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x2e8 ) ) * 8 ) + ( (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x2e8 ) ) * 4 ) = (uint)param_2;
         return;
      }

      _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      return;
   }

   _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_color(RID, Color const&) */void RendererRD::LightStorage::light_set_color(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar2 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x58 ) = *param_3;
         *(undefined8*)( lVar2 + 0x60 ) = uVar1;
         return;
      }

      if (*(int*)( lVar2 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_set_color", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0xb7, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_negative(RID, bool) */void RendererRD::LightStorage::light_set_negative(LightStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0xe0 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            *(undefined1*)( lVar2 + 0x71 ) = param_3;
            return;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_negative", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x103, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_distance_fade(RID, bool, float, float, float) */void RendererRD::LightStorage::light_set_distance_fade(undefined4 param_1, undefined4 param_2, undefined4 param_3, LightStorage *this, ulong param_5, undefined1 param_6) {
   long lVar1;
   if (( param_5 != 0 ) && ( (uint)param_5 < *(uint*)( this + 0x2c ) )) {
      lVar1 = ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe0 ) == (int)( param_5 >> 0x20 )) {
         *(undefined1*)( lVar1 + 0x84 ) = param_6;
         *(ulong*)( lVar1 + 0x88 ) = CONCAT44(param_2, param_1);
         *(undefined4*)( lVar1 + 0x90 ) = param_3;
         return;
      }

      if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_set_distance_fade", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x114, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_get_shadow_caster_mask(RID) const */undefined4 RendererRD::LightStorage::light_get_shadow_caster_mask(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x80 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_shadow_caster_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x132, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_omni_get_shadow_mode(RID) */undefined4 RendererRD::LightStorage::light_omni_get_shadow_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x94 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_omni_get_shadow_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x15d, "Parameter \"light\" is null.", 0, 0);
   return 1;
}
/* RendererRD::LightStorage::light_directional_get_blend_splits(RID) const */undefined1 RendererRD::LightStorage::light_directional_get_blend_splits(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x9c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_directional_get_blend_splits", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x176, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_directional_set_sky_mode(RID,
   RenderingServer::LightDirectionalSkyMode) */void RendererRD::LightStorage::light_directional_set_sky_mode(LightStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0xe0 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            *(undefined4*)( lVar2 + 0xa0 ) = param_3;
            return;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_directional_set_sky_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x17d, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_directional_get_sky_mode(RID) const */undefined4 RendererRD::LightStorage::light_directional_get_sky_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0xa0 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_directional_get_sky_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x184, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_directional_get_shadow_mode(RID) */undefined4 RendererRD::LightStorage::light_directional_get_shadow_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x98 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_directional_get_shadow_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x18b, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_get_max_sdfgi_cascade(RID) */undefined4 RendererRD::LightStorage::light_get_max_sdfgi_cascade(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x78 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_max_sdfgi_cascade", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x192, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_get_bake_mode(RID) */undefined4 RendererRD::LightStorage::light_get_bake_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x74 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_bake_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x199, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_get_version(RID) const */undefined8 RendererRD::LightStorage::light_get_version(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0xa8 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_version", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x1a0, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_get_cull_mask(RID) const */undefined4 RendererRD::LightStorage::light_get_cull_mask(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x7c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_cull_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x1a7, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::lightmap_set_probe_bounds(RID, AABB const&) */void RendererRD::LightStorage::lightmap_set_probe_bounds(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      if (*(int*)( lVar2 + 0xb0 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x18 ) = *param_3;
         *(undefined8*)( lVar2 + 0x20 ) = uVar1;
         *(undefined8*)( lVar2 + 0x28 ) = param_3[2];
         return;
      }

      if (*(int*)( lVar2 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_set_probe_bounds", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x769, "Parameter \"lm\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::lightmap_set_probe_interior(RID, bool) */void RendererRD::LightStorage::lightmap_set_probe_interior(LightStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0xb0 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            *(undefined1*)( lVar2 + 0x15 ) = param_3;
            return;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("lightmap_set_probe_interior", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x76f, "Parameter \"lm\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::lightmap_set_baked_exposure_normalization(RID, float) */void RendererRD::LightStorage::lightmap_set_baked_exposure_normalization(undefined4 param_1, LightStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x284 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xb0 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x30 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_set_baked_exposure_normalization", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x785, "Parameter \"lm\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::lightmap_is_interior(RID) const */undefined1 RendererRD::LightStorage::lightmap_is_interior(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xb0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x15 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_is_interior", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x7e2, "Parameter \"lm\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::lightmap_get_aabb(RID) const */undefined8 *RendererRD::LightStorage::lightmap_get_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 );
      if (*(int*)( lVar3 + 0xb0 ) == (int)( param_3 >> 0x20 )) {
         uVar1 = *(undefined8*)( lVar3 + 0x18 );
         uVar2 = *(undefined8*)( lVar3 + 0x20 );
         param_1[2] = *(undefined8*)( lVar3 + 0x28 );
         *param_1 = uVar1;
         param_1[1] = uVar2;
         return param_1;
      }

      if (*(int*)( lVar3 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_aabb", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x7e8, "Parameter \"lm\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* RendererRD::LightStorage::lightmap_get_shadowmask_mode(RID) */undefined4 RendererRD::LightStorage::lightmap_get_shadowmask_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xb0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x10 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_shadowmask_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x81a, "Parameter \"lm\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::lightmap_set_shadowmask_mode(RID, RenderingServer::ShadowmaskMode) */void RendererRD::LightStorage::lightmap_set_shadowmask_mode(LightStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0xb0 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            *(undefined4*)( lVar2 + 0x10 ) = param_3;
            return;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("lightmap_set_shadowmask_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x821, "Parameter \"lm\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_intensity(RID, float) */void RendererRD::LightStorage::reflection_probe_set_intensity(undefined4 param_1, LightStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 8 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_intensity", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x42f, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_blend_distance(RID, float) */void RendererRD::LightStorage::reflection_probe_set_blend_distance(undefined4 param_1, LightStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0xc ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_blend_distance", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x436, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_ambient_mode(RID,
   RenderingServer::ReflectionProbeAmbientMode) */void RendererRD::LightStorage::reflection_probe_set_ambient_mode(LightStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x10 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_ambient_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x43d, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_ambient_color(RID, Color const&) */void RendererRD::LightStorage::reflection_probe_set_ambient_color(LightStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar2 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x14 ) = *param_3;
         *(undefined8*)( lVar2 + 0x1c ) = uVar1;
         return;
      }

      if (*(int*)( lVar2 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_ambient_color", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x444, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_ambient_energy(RID, float) */void RendererRD::LightStorage::reflection_probe_set_ambient_energy(undefined4 param_1, LightStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x24 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_ambient_energy", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 1099, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_enable_box_projection(RID, bool) */void RendererRD::LightStorage::reflection_probe_set_enable_box_projection(LightStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x45 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_enable_box_projection", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x476, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_resolution(RID, int) */void RendererRD::LightStorage::reflection_probe_set_resolution(LightStorage *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (0x1f < param_3) {
            *(int*)( lVar2 + 4 ) = param_3;
            return;
         }

         _err_print_error("reflection_probe_set_resolution", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x496, "Condition \"p_resolution < 32\" is true.", 0, 0);
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_resolution", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x495, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::reflection_probe_get_aabb(RID) const */undefined8 *RendererRD::LightStorage::reflection_probe_get_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   float fVar5;
   undefined4 uStack_1c;
   undefined4 uStack_18;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x134 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x130 ) ) * 0x90 + *(long*)( *(long*)( param_2 + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x130 ) ) * 8 );
      if (*(int*)( lVar2 + 0x88 ) == (int)( param_3 >> 0x20 )) {
         uStack_1c = ( undefined4 ) * (undefined8*)( lVar2 + 0x2c );
         uStack_18 = ( undefined4 )(( ulong ) * (undefined8*)( lVar2 + 0x2c ) >> 0x20);
         fVar4 = _LC56 * (float)*(undefined8*)( lVar2 + 0x2c );
         fVar5 = _UNK_0011debc * (float)( ( ulong ) * (undefined8*)( lVar2 + 0x2c ) >> 0x20 );
         fVar3 = _LC56 * *(float*)( lVar2 + 0x34 );
         param_1[2] = CONCAT44(*(undefined4*)( lVar2 + 0x34 ), uStack_18);
         *param_1 = CONCAT44(fVar5, fVar4);
         param_1[1] = CONCAT44(uStack_1c, fVar3);
         goto LAB_00101f3e;
      }

      if (*(int*)( lVar2 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_aabb", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4ad, "Parameter \"reflection_probe\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   LAB_00101f3e:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::reflection_probe_get_update_mode(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_update_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   undefined4 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      puVar2 = (undefined4*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 ) );
      iVar1 = puVar2[0x22];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_update_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4b8, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 1;
}
/* RendererRD::LightStorage::reflection_probe_get_cull_mask(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_cull_mask(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x48 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_cull_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4bf, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_reflection_mask(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_reflection_mask(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x4c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_reflection_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4c6, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_size(RID) const */undefined1  [16] __thiscallRendererRD::LightStorage::reflection_probe_get_size(LightStorage *this, ulong param_2) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   undefined8 local_1c;
   undefined4 local_14;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar2 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         local_1c = *(undefined8*)( lVar2 + 0x2c );
         local_14 = *(undefined4*)( lVar2 + 0x34 );
         goto LAB_001022cb;
      }

      if (*(int*)( lVar2 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4cd, "Parameter \"reflection_probe\" is null.", 0, 0);
   local_14 = 0;
   local_1c = 0;
   LAB_001022cb:auVar3._8_4_ = local_14;
   auVar3._0_8_ = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar3._12_4_ = 0;
      return auVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::reflection_probe_get_origin_offset(RID) const */undefined1  [16] __thiscallRendererRD::LightStorage::reflection_probe_get_origin_offset(LightStorage *this, ulong param_2) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   undefined8 local_1c;
   undefined4 local_14;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar2 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         local_1c = *(undefined8*)( lVar2 + 0x38 );
         local_14 = *(undefined4*)( lVar2 + 0x40 );
         goto LAB_001023eb;
      }

      if (*(int*)( lVar2 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_origin_offset", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4d4, "Parameter \"reflection_probe\" is null.", 0, 0);
   local_14 = 0;
   local_1c = 0;
   LAB_001023eb:auVar3._8_4_ = local_14;
   auVar3._0_8_ = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar3._12_4_ = 0;
      return auVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::reflection_probe_renders_shadows(RID) const */undefined1 RendererRD::LightStorage::reflection_probe_renders_shadows(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x46 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_renders_shadows", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4db, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_origin_max_distance(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_origin_max_distance(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x28 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_origin_max_distance", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4e2, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_mesh_lod_threshold(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_mesh_lod_threshold(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x50 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_mesh_lod_threshold", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4e9, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_instance_set_shadow_transform(RID, Projection const&, Transform3D
   const&, float, float, int, float, float, float, Vector2 const&) */void RendererRD::LightStorage::light_instance_set_shadow_transform(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, LightStorage *this, ulong param_7, undefined8 *param_8, undefined8 *param_9, uint param_10, undefined8 *param_11) {
   long lVar1;
   undefined4 *puVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   if (( param_7 != 0 ) && ( (uint)param_7 < *(uint*)( this + 0x84 ) )) {
      lVar7 = ( ( param_7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      if (*(int*)( lVar7 + 0x490 ) == (int)( param_7 >> 0x20 )) {
         if (param_10 < 6) {
            uVar3 = param_8[1];
            lVar1 = lVar7 + (long)(int)param_10 * 0x9c;
            *(undefined8*)( lVar1 + 4 ) = *param_8;
            *(undefined8*)( lVar1 + 0xc ) = uVar3;
            uVar3 = param_8[3];
            *(undefined8*)( lVar1 + 0x14 ) = param_8[2];
            *(undefined8*)( lVar1 + 0x1c ) = uVar3;
            uVar3 = *param_9;
            uVar4 = param_9[1];
            uVar5 = param_8[5];
            *(undefined8*)( lVar1 + 0x24 ) = param_8[4];
            *(undefined8*)( lVar1 + 0x2c ) = uVar5;
            uVar5 = param_8[6];
            uVar6 = param_8[7];
            *(undefined8*)( lVar1 + 0x44 ) = uVar3;
            *(undefined8*)( lVar1 + 0x4c ) = uVar4;
            uVar3 = param_9[2];
            uVar4 = param_9[3];
            *(undefined8*)( lVar1 + 0x34 ) = uVar5;
            *(undefined8*)( lVar1 + 0x3c ) = uVar6;
            *(undefined8*)( lVar1 + 0x54 ) = uVar3;
            *(undefined8*)( lVar1 + 0x5c ) = uVar4;
            uVar3 = param_9[4];
            uVar4 = param_9[5];
            *(undefined4*)( lVar1 + 0x84 ) = param_5;
            *(undefined8*)( lVar1 + 100 ) = uVar3;
            *(undefined8*)( lVar1 + 0x6c ) = uVar4;
            puVar2 = (undefined4*)( lVar7 + 0x74 + (long)(int)param_10 * 0x9c );
            *puVar2 = param_1;
            puVar2[1] = param_2;
            puVar2[2] = param_4;
            puVar2[3] = param_3;
            *(undefined8*)( lVar1 + 0x98 ) = *param_11;
         }
 else {
            _err_print_index_error("light_instance_set_shadow_transform", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x207, (long)(int)param_10, 6, "p_pass", "6", "", false, false);
         }

         return;
      }

      if (*(int*)( lVar7 + 0x490 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_instance_set_shadow_transform", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x205, "Parameter \"light_instance\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::light_set_param(RID, RenderingServer::LightParam, float) */void RendererRD::LightStorage::light_set_param(float param_1, LightStorage *this, ulong param_3, uint param_4) {
   float fVar1;
   long lVar2;
   if (param_3 != 0) {
      if ((uint)param_3 < *(uint*)( this + 0x2c )) {
         lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar2 + 0xe0 ) == (int)( param_3 >> 0x20 )) {
            if (param_4 < 0x15) {
               fVar1 = *(float*)( lVar2 + 4 + (long)(int)param_4 * 4 );
               if (fVar1 != param_1) {
                  if (param_4 < 0x11) {
                     if (( 1L << ( (byte)param_4 & 0x3f ) & 0x1de90U ) == 0) {
                        if (( param_4 == 5 ) && ( __LC73 < (double)fVar1 != __LC73 < (double)param_1 )) {
                           Dependency::changed_notify(lVar2 + 0xb0, 0xb);
                        }

                     }
 else {
                        *(long*)( lVar2 + 0xa8 ) = *(long*)( lVar2 + 0xa8 ) + 1;
                        Dependency::changed_notify(lVar2 + 0xb0, 10);
                     }

                  }

                  *(float*)( lVar2 + 4 + (long)(int)param_4 * 4 ) = param_1;
               }

            }
 else {
               _err_print_index_error("light_set_param", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0xbf, (ulong)param_4, 0x15, "p_param", "RenderingServer::LIGHT_PARAM_MAX", "", false, false);
            }

            return;
         }

         if (*(int*)( lVar2 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_param", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0xbe, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_shadow(RID, bool) */void RendererRD::LightStorage::light_set_shadow(LightStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined1*)( lVar1 + 0x70 ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_shadow", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0xe1, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_cull_mask(RID, unsigned int) */void RendererRD::LightStorage::light_set_cull_mask(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined4*)( lVar1 + 0x7c ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_cull_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x10a, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_reverse_cull_face_mode(RID, bool) */void RendererRD::LightStorage::light_set_reverse_cull_face_mode(LightStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined1*)( lVar1 + 0x72 ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_reverse_cull_face_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x11e, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_shadow_caster_mask(RID, unsigned int) */void RendererRD::LightStorage::light_set_shadow_caster_mask(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined4*)( lVar1 + 0x80 ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_shadow_caster_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x128, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_bake_mode(RID, RenderingServer::LightBakeMode) */void RendererRD::LightStorage::light_set_bake_mode(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined4*)( lVar1 + 0x74 ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_bake_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x139, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_set_max_sdfgi_cascade(RID, unsigned int) */void RendererRD::LightStorage::light_set_max_sdfgi_cascade(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined4*)( lVar1 + 0x78 ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_set_max_sdfgi_cascade", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x143, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_omni_set_shadow_mode(RID, RenderingServer::LightOmniShadowMode)
    */void RendererRD::LightStorage::light_omni_set_shadow_mode(LightStorage *this, ulong param_2, int param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
         *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
         *(int*)( lVar1 + 0x94 ) = param_3;
         Dependency::changed_notify(lVar1 + 0xb0, 10);
         if (param_3 == 0) {
            this[0x3d9] = (LightStorage)0x1;
         }
 else if (param_3 == 1) {
            this[0x3d8] = (LightStorage)0x1;
            return;
         }

         return;
      }

      if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_omni_set_shadow_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x14d, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_directional_set_shadow_mode(RID,
   RenderingServer::LightDirectionalShadowMode) */void RendererRD::LightStorage::light_directional_set_shadow_mode(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined4*)( lVar1 + 0x98 ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_directional_set_shadow_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x164, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_directional_set_blend_splits(RID, bool) */void RendererRD::LightStorage::light_directional_set_blend_splits(LightStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar1 + 0xe0 ) == (int)( param_2 >> 0x20 )) {
            *(long*)( lVar1 + 0xa8 ) = *(long*)( lVar1 + 0xa8 ) + 1;
            *(undefined1*)( lVar1 + 0x9c ) = param_3;
            Dependency::changed_notify(lVar1 + 0xb0, 10);
            return;
         }

         if (*(int*)( lVar1 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_directional_set_blend_splits", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x16d, "Parameter \"light\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_update_mode(RID,
   RenderingServer::ReflectionProbeUpdateMode) */void RendererRD::LightStorage::reflection_probe_set_update_mode(LightStorage *this, ulong param_2, undefined4 param_3) {
   undefined4 *puVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      puVar1 = (undefined4*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 ) );
      if (puVar1[0x22] == (int)( param_2 >> 0x20 )) {
         *puVar1 = param_3;
         Dependency::changed_notify(puVar1 + 0x16, 0xc);
         return;
      }

      if (puVar1[0x22] + 0x80000000 < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_update_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x427, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_max_distance(RID, float) */void RendererRD::LightStorage::reflection_probe_set_max_distance(undefined4 param_1, LightStorage *this, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x28 ) = param_1;
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_max_distance", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x452, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_size(RID, Vector3 const&) */void RendererRD::LightStorage::reflection_probe_set_size(LightStorage *this, ulong param_2, float *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         if (( ( *(float*)( lVar1 + 0x2c ) == *param_3 ) && ( *(float*)( lVar1 + 0x30 ) == param_3[1] ) ) && ( *(float*)( lVar1 + 0x34 ) == param_3[2] )) {
            return;
         }

         *(undefined8*)( lVar1 + 0x2c ) = *(undefined8*)param_3;
         *(float*)( lVar1 + 0x34 ) = param_3[2];
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x45b, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_origin_offset(RID, Vector3 const&) */void RendererRD::LightStorage::reflection_probe_set_origin_offset(LightStorage *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 0x38 ) = *param_3;
         *(undefined4*)( lVar1 + 0x40 ) = *(undefined4*)( param_3 + 1 );
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_origin_offset", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x466, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_as_interior(RID, bool) */void RendererRD::LightStorage::reflection_probe_set_as_interior(LightStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar1 + 0x44 ) = param_3;
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_as_interior", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x46e, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_enable_shadows(RID, bool) */void RendererRD::LightStorage::reflection_probe_set_enable_shadows(LightStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar1 + 0x46 ) = param_3;
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_enable_shadows", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x47d, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_cull_mask(RID, unsigned int) */void RendererRD::LightStorage::reflection_probe_set_cull_mask(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x48 ) = param_3;
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_cull_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x485, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_reflection_mask(RID, unsigned int) */void RendererRD::LightStorage::reflection_probe_set_reflection_mask(LightStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x4c ) = param_3;
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_reflection_mask", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x48d, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_set_mesh_lod_threshold(RID, float) */void RendererRD::LightStorage::reflection_probe_set_mesh_lod_threshold(undefined4 param_1, LightStorage *this, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x134 ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      if (*(int*)( lVar1 + 0x88 ) == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x50 ) = param_1;
         Dependency::changed_notify(lVar1 + 0x58, 0xc);
         return;
      }

      if (*(int*)( lVar1 + 0x88 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_mesh_lod_threshold", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x49d, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::light_get_aabb(RID) const */uint *RendererRD::LightStorage::light_get_aabb(uint *param_1, long param_2, ulong param_3) {
   float fVar1;
   int iVar2;
   char *pcVar3;
   int *piVar4;
   undefined8 uVar5;
   float fVar6;
   uint uVar7;
   uint uVar8;
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x2c ) <= (uint)param_3 )) {
      LAB_00103ae8:uVar5 = 0x1ae;
      pcVar3 = "Parameter \"light\" is null.";
   }
 else {
      piVar4 = (int*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( param_2 + 0x18 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x28 ) ) * 8 ) );
      if (piVar4[0x38] != (int)( param_3 >> 0x20 )) {
         if (piVar4[0x38] + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00103ae8;
      }

      iVar2 = *piVar4;
      if (iVar2 == 1) {
         fVar1 = (float)piVar4[5];
         fVar6 = fVar1 + fVar1;
         uVar7 = (uint)fVar1 ^ _LC53;
         *(ulong*)( param_1 + 4 ) = CONCAT44(fVar6, fVar6);
         *param_1 = uVar7;
         param_1[1] = uVar7;
         param_1[2] = uVar7;
         param_1[3] = (uint)fVar6;
         return param_1;
      }

      if (iVar2 == 2) {
         fVar1 = (float)piVar4[5];
         fVar6 = tanf(_LC93 * (float)piVar4[8]);
         fVar6 = fVar6 * fVar1;
         uVar7 = (uint)fVar6 ^ _LC53;
         uVar8 = _LC53 ^ (uint)fVar1;
         *(ulong*)( param_1 + 4 ) = CONCAT44(fVar1, fVar6 + fVar6);
         *param_1 = uVar7;
         param_1[1] = uVar7;
         param_1[2] = uVar8;
         param_1[3] = ( uint )(fVar6 + fVar6);
         return param_1;
      }

      if (iVar2 == 0) goto LAB_00103a16;
      uVar5 = 0x1bf;
      pcVar3 = "Method/function failed. Returning: AABB()";
   }

   _err_print_error("light_get_aabb", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", uVar5, pcVar3, 0, 0);
   LAB_00103a16:param_1[0] = 0;
   for (int i = 0; i < 5; i++) {
      param_1[( i + 1 )] = 0;
   }

   return param_1;
}
/* RendererRD::LightStorage::get_directional_light_shadow_size(RID) */int RendererRD::LightStorage::get_directional_light_shadow_size(LightStorage *this, ulong param_2) {
   int iVar1;
   int iVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 uVar4;
   int local_20;
   int local_1c;
   long local_10;
   iVar2 = *(int*)( this + 0x398 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (iVar2 == 0) {
      _err_print_error("get_directional_light_shadow_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0xa13, "Condition \"directional_shadow.light_count == 0\" is true. Returning: 0", 0, 0);
      iVar2 = 0;
   }
 else {
      local_20 = *(int*)( this + 0x39c );
      local_1c = local_20;
      if (1 < iVar2) {
         local_1c = 1;
         iVar1 = 1;
         do {
            while (local_1c != iVar1) {
               local_1c = local_1c * 2;
               if (iVar2 <= iVar1 * local_1c) goto LAB_00103ba3;
            }
;
            iVar1 = local_1c * 2;
         }
 while ( iVar1 * local_1c < iVar2 );
         LAB_00103ba3:local_1c = local_20 / local_1c;
         local_20 = local_20 / iVar1;
      }

      uVar4 = 0;
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x84 ) )) {
         lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
         iVar2 = *(int*)( lVar3 + 0x490 );
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            iVar1 = ( **(code**)( *(long*)this + 0xd8 ) )(this, *(undefined8*)( lVar3 + 0x3d0 ));
            if (iVar1 == 1) {
               iVar2 = local_1c / 2;
            }
 else {
               iVar2 = local_1c;
               if (iVar1 == 2) {
                  Vector2i::operator /=((Vector2i*)&local_20, 2);
                  iVar2 = local_1c;
               }

            }

            if (iVar2 < local_20) {
               iVar2 = local_20;
            }

            goto LAB_00103c31;
         }

         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("get_directional_light_shadow_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0xa18, "Parameter \"light_instance\" is null.", 0, 0, uVar4);
      iVar2 = 0;
   }

   LAB_00103c31:if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar2;
}
/* RendererRD::LightStorage::directional_shadow_atlas_set_size(int, bool) */void RendererRD::LightStorage::directional_shadow_atlas_set_size(LightStorage *this, int param_1, bool param_2) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   undefined8 uVar4;
   uVar2 = param_1 - 1U | (int)( param_1 - 1U ) >> 1;
   uVar2 = uVar2 | (int)uVar2 >> 2;
   uVar2 = uVar2 | (int)uVar2 >> 4;
   uVar2 = uVar2 | (int)uVar2 >> 8;
   iVar3 = ( uVar2 | (int)uVar2 >> 0x10 ) + 1;
   if (( *(int*)( this + 0x39c ) == iVar3 ) && ( this[0x3a0] == (LightStorage)param_2 )) {
      return;
   }

   *(int*)( this + 0x39c ) = iVar3;
   this[0x3a0] = (LightStorage)param_2;
   if (*(long*)( this + 0x388 ) == 0) {
      return;
   }

   uVar4 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar4, *(undefined8*)( this + 0x388 ));
   plVar1 = RendererSceneRenderRD::singleton;
   *(undefined8*)( this + 0x388 ) = 0;
   /* WARNING: Could not recover jumptable at 0x00103db1. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *plVar1 + 0x260 ) )();
   return;
}
/* CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write() [clone
   .isra.0] */void CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *this) {
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
/* RendererRD::LightStorage::lightmap_tap_sh_light(RID, Vector3 const&, Color*) */void RendererRD::LightStorage::lightmap_tap_sh_light(LightStorage *this, ulong param_2, float *param_3, undefined1 (*param_4)[16]) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   Color *this_00;
   uint *puVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   code *pcVar15;
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1(*pauVar21)[16];
   undefined1(*pauVar22)[16];
   char *pcVar23;
   ulong uVar24;
   long lVar25;
   float fVar26;
   float fVar27;
   undefined8 uVar28;
   ulong uVar29;
   long *plVar30;
   long lVar31;
   long lVar32;
   float *pfVar33;
   long in_FS_OFFSET;
   bool bVar34;
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   float fVar53;
   float fVar54;
   undefined1 auVar55[16];
   float local_b8;
   float local_88;
   undefined8 local_84;
   float local_7c;
   undefined1 local_78[16];
   long local_68[4];
   long local_48;
   long local_40;
   auVar20._8_8_ = local_78._8_8_;
   auVar20._0_8_ = local_78._0_8_;
   auVar19._8_8_ = local_78._8_8_;
   auVar19._0_8_ = local_78._0_8_;
   auVar18._8_8_ = local_78._8_8_;
   auVar18._0_8_ = local_78._0_8_;
   auVar17._8_8_ = local_78._8_8_;
   auVar17._0_8_ = local_78._0_8_;
   auVar16._8_8_ = local_78._8_8_;
   auVar16._0_8_ = local_78._0_8_;
   auVar55._8_8_ = local_78._8_8_;
   auVar55._0_8_ = local_78._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      lVar31 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      pauVar21 = param_4;
      if (*(int*)( lVar31 + 0xb0 ) == (int)( param_2 >> 0x20 )) {
         do {
            *pauVar21 = (undefined1[16])0x0;
            pauVar22 = pauVar21 + 3;
            pauVar21[1] = (undefined1[16])0x0;
            pauVar21[2] = (undefined1[16])0x0;
            pauVar21 = pauVar22;
         }
 while ( pauVar22 != param_4 + 9 );
         lVar25 = *(long*)( lVar31 + 0x48 );
         if (( ( ( lVar25 != 0 ) && ( lVar12 = *(long*)( lVar25 + -8 ) ),local_78 = auVar55,lVar12 != 0 ) ) && ( lVar13 = *(long*)( lVar31 + 0x78 ) ),local_78 = auVar16,lVar13 != 0) {
            fVar4 = *param_3;
            fVar5 = param_3[1];
            fVar26 = 0.0;
            fVar6 = param_3[2];
            do {
               pfVar33 = (float*)( lVar13 + (long)(int)fVar26 * 0x18 );
               fVar35 = *pfVar33 * fVar4 + pfVar33[1] * fVar5 + pfVar33[2] * fVar6;
               if (pfVar33[3] <= fVar35 && fVar35 != pfVar33[3]) {
                  bVar34 = (uint)pfVar33[4] < (uint)fVar26;
                  fVar26 = pfVar33[4];
                  if (bVar34) {
                     if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001046b4;
                     uVar28 = 0x7c1;
                     pcVar23 = "Condition \"bsp[node].over >= 0 && bsp[node].over < node\" is true.";
                     goto LAB_001040b6;
                  }

               }
 else {
                  bVar34 = (uint)pfVar33[5] < (uint)fVar26;
                  fVar26 = pfVar33[5];
                  if (bVar34) {
                     if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_001046b4;
                     uVar28 = 0x7c7;
                     pcVar23 = "Condition \"bsp[node].under >= 0 && bsp[node].under < node\" is true.";
                     goto LAB_001040b6;
                  }

               }

            }
 while ( -1 < (int)fVar26 );
            local_78 = auVar20;
            if (fVar26 != -0.0) {
               uVar24 = (ulong)(int)( ~(uint)fVar26 * 4 );
               if (lVar32 <= (long)uVar24) {
                  LAB_001045f8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar24, lVar32, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar15 = (code*)invalidInstructionException();
                  ( *pcVar15 )();
               }

               puVar3 = (uint*)( lVar14 + uVar24 * 4 );
               uVar24 = ( ulong ) * puVar3;
               lVar32 = lVar12;
               if (lVar12 <= (long)uVar24) goto LAB_001045f8;
               puVar1 = (undefined8*)( lVar25 + uVar24 * 0xc );
               fVar26 = *(float*)( puVar1 + 1 );
               uVar24 = (ulong)puVar3[1];
               if (lVar12 <= (long)uVar24) goto LAB_001045f8;
               uVar29 = (ulong)puVar3[2];
               pfVar33 = (float*)( lVar25 + uVar24 * 0xc );
               fVar35 = pfVar33[2];
               fVar7 = *pfVar33;
               fVar8 = pfVar33[1];
               uVar24 = uVar29;
               if (lVar12 <= (long)uVar29) goto LAB_001045f8;
               uVar24 = (ulong)puVar3[3];
               pfVar33 = (float*)( lVar25 + uVar29 * 0xc );
               fVar9 = *pfVar33;
               fVar11 = pfVar33[1];
               fVar10 = pfVar33[2];
               if (lVar12 <= (long)uVar24) goto LAB_001045f8;
               puVar2 = (undefined8*)( lVar25 + uVar24 * 0xc );
               uVar24 = ( ulong )(*puVar3 * 9);
               lVar31 = *(long*)( lVar31 + 0x58 );
               if (lVar31 == 0) {
                  lVar32 = 0;
                  goto LAB_001045f8;
               }

               lVar32 = *(long*)( lVar31 + -8 );
               if (lVar32 <= (long)uVar24) goto LAB_001045f8;
               local_68[0] = uVar24 * 0x10 + lVar31;
               uVar24 = ( ulong )(puVar3[1] * 9);
               if (lVar32 <= (long)uVar24) goto LAB_001045f8;
               local_68[1] = uVar24 * 0x10 + lVar31;
               uVar24 = ( ulong )(puVar3[2] * 9);
               if (lVar32 <= (long)uVar24) goto LAB_001045f8;
               lVar25 = uVar24 * 0x10;
               uVar24 = ( ulong )(puVar3[3] * 9);
               local_68[2] = lVar31 + lVar25;
               if (lVar32 <= (long)uVar24) goto LAB_001045f8;
               fVar36 = (float)*puVar1;
               fVar37 = (float)( ( ulong ) * puVar1 >> 0x20 );
               fVar27 = (float)*puVar2;
               pfVar33 = &local_88;
               local_68[3] = lVar31 + uVar24 * 0x10;
               plVar30 = local_68;
               fVar48 = (float)( ( ulong ) * puVar2 >> 0x20 ) - fVar37;
               fVar45 = ( fVar9 - fVar36 ) * fVar48 - ( fVar11 - fVar37 ) * ( fVar27 - fVar36 );
               fVar39 = fVar9 - fVar36;
               fVar38 = fVar7 - fVar36;
               fVar50 = (float)*(undefined8*)( (long)puVar2 + 4 );
               fVar52 = (float)( ( ulong ) * (undefined8*)( (long)puVar2 + 4 ) >> 0x20 );
               fVar43 = fVar10 - fVar26;
               fVar44 = fVar8 - fVar37;
               fVar47 = ( fVar27 - fVar36 ) * ( fVar10 - fVar26 ) - fVar39 * ( *(float*)( puVar2 + 1 ) - fVar26 );
               fVar41 = (float)*(undefined8*)( (long)puVar1 + 4 );
               fVar40 = fVar11 - fVar41;
               fVar54 = (float)( ( ulong ) * (undefined8*)( (long)puVar1 + 4 ) >> 0x20 );
               fVar42 = fVar35 - fVar54;
               fVar49 = ( fVar52 - fVar26 ) * fVar40 - fVar43 * ( fVar50 - fVar41 );
               fVar46 = fVar6 - fVar54;
               fVar41 = fVar5 - fVar41;
               fVar53 = fVar4 - fVar36;
               fVar51 = _LC108 / ( fVar45 * fVar42 + fVar44 * fVar47 + fVar49 * fVar38 );
               local_b8 = ( ( fVar4 - fVar7 ) * ( ( fVar50 - fVar8 ) * ( fVar10 - fVar35 ) - ( fVar11 - fVar8 ) * ( fVar52 - fVar35 ) ) + ( ( fVar52 - fVar35 ) * ( fVar9 - fVar7 ) - ( fVar10 - fVar35 ) * ( fVar27 - fVar7 ) ) * ( fVar5 - fVar8 ) + ( ( fVar11 - fVar8 ) * ( fVar27 - fVar7 ) - ( fVar9 - fVar7 ) * ( fVar50 - fVar8 ) ) * ( fVar6 - fVar35 ) ) * fVar51;
               local_84 = CONCAT44(( fVar53 * ( ( fVar50 - fVar37 ) * fVar42 - fVar44 * ( fVar52 - fVar54 ) ) + fVar41 * ( ( *(float*)( puVar2 + 1 ) - fVar26 ) * fVar38 - ( fVar35 - fVar26 ) * ( fVar27 - fVar36 ) ) + fVar46 * ( ( fVar8 - fVar37 ) * ( fVar27 - fVar36 ) - ( fVar7 - fVar36 ) * fVar48 ) ) * fVar51, ( fVar53 * fVar49 + fVar41 * fVar47 + fVar46 * fVar45 ) * fVar51);
               local_7c = ( ( fVar44 * fVar43 - fVar40 * fVar42 ) * fVar53 + ( fVar42 * fVar39 - fVar43 * fVar38 ) * fVar41 + ( fVar38 * fVar40 - fVar39 * fVar44 ) * fVar46 ) * fVar51;
               while (true) {
                  if (local_b8 < 0.0) {
                     local_b8 = 0.0;
                     fVar4 = local_b8;
                  }
 else {
                     fVar4 = _LC108;
                     if (local_b8 <= _LC108) {
                        fVar4 = local_b8;
                     }

                  }

                  local_b8 = fVar4;
                  lVar31 = 0;
                  do {
                     auVar55 = Color::operator *((Color*)( *plVar30 + lVar31 ), local_b8);
                     this_00 = (Color*)( *param_4 + lVar31 );
                     lVar31 = lVar31 + 0x10;
                     local_78 = auVar55;
                     Color::operator +=(this_00, (Color*)local_78);
                  }
 while ( lVar31 != 0x90 );
                  plVar30 = plVar30 + 1;
                  pfVar33 = pfVar33 + 1;
                  if (&local_48 == plVar30) break;
                  local_b8 = *pfVar33;
               }
;
            }

         }

         auVar20 = local_78;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001046b4;
      }

      if (*(int*)( lVar31 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   auVar20._8_8_ = local_78._8_8_;
   auVar20._0_8_ = local_78._0_8_;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar28 = 0x7b0;
      pcVar23 = "Parameter \"lm\" is null.";
      LAB_001040b6:_err_print_error("lightmap_tap_sh_light", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", uVar28, pcVar23, 0, 0);
      return;
   }

   LAB_001046b4:local_78 = auVar20;
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::reflection_probe_instance_free(RID) */undefined1  [16] __thiscallRendererRD::LightStorage::reflection_probe_instance_free(LightStorage *this, ulong param_2) {
   int iVar1;
   int iVar2;
   code *pcVar3;
   uint uVar4;
   long lVar5;
   undefined8 uVar6;
   uint uVar7;
   undefined1 auVar8[16];
   ulong uVar9;
   if (param_2 != 0) {
      uVar7 = (uint)param_2;
      if (uVar7 < *(uint*)( this + 0x1e4 )) {
         uVar9 = ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 );
         lVar5 = uVar9 * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
         iVar1 = *(int*)( lVar5 + 0x68 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            if (*(code**)( *ForwardIDStorage::singleton + 0x18 ) != ForwardIDStorage::free_forward_id) {
               ( **(code**)( *ForwardIDStorage::singleton + 0x18 ) )(ForwardIDStorage::singleton, 2, *(undefined4*)( lVar5 + 0x34 ));
            }

            uVar9 = 0x104753;
            ( **(code**)( *(long*)this + 0x2a0 ) )(this, param_2);
            if (uVar7 < *(uint*)( this + 0x1e4 )) {
               lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
               iVar2 = *(int*)( lVar5 + 0x68 );
               if (iVar2 < 0) {
                  lVar5 = 0;
                  _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
               }
 else {
                  if (iVar2 != iVar1) {
                     uVar6 = 0x171;
                     goto LAB_00104802;
                  }

                  *(undefined4*)( lVar5 + 0x68 ) = 0xffffffff;
                  uVar4 = *(int*)( this + 0x1e8 ) - 1;
                  *(uint*)( this + 0x1e8 ) = uVar4;
                  uVar9 = (ulong)uVar4 % ( ulong ) * (uint*)( this + 0x1e0 );
                  lVar5 = *(long*)( *(long*)( this + 0x1d8 ) + ( (ulong)uVar4 / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
                  *(uint*)( lVar5 + uVar9 * 4 ) = uVar7;
               }

               auVar8._8_8_ = uVar9;
               auVar8._0_8_ = lVar5;
               return auVar8;
            }

            uVar6 = 0x161;
            LAB_00104802:auVar8 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", uVar6, "Method/function failed.", 0, 0);
            return auVar8;
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar9);
         }

      }

   }

   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* RendererRD::LightStorage::reflection_probe_atlas_get_render_buffers(RID) */long *RendererRD::LightStorage::reflection_probe_atlas_get_render_buffers(long *param_1, long param_2, ulong param_3) {
   int iVar1;
   char cVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x18c ) )) {
      lVar3 = *(long*)( *(long*)( param_2 + 0x178 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x188 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x188 ) ) * 0x48;
      iVar1 = *(int*)( lVar3 + 0x40 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *param_1 = 0;
         lVar3 = *(long*)( lVar3 + 0x30 );
         if (lVar3 != 0) {
            lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &RenderSceneBuffers::typeinfo, 0);
            if (lVar3 != 0) {
               *param_1 = lVar3;
               cVar2 = RefCounted::reference();
               if (cVar2 == '\0') {
                  *param_1 = 0;
               }

            }

         }

         return param_1;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_atlas_get_render_buffers", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x63b, "Parameter \"atlas\" is null.", 0, 0);
   *param_1 = 0;
   return param_1;
}
/* CowData<Color>::_ref(CowData<Color> const&) [clone .part.0] */void CowData<Color>::_ref(CowData<Color> *this, CowData *param_1) {
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
/* RendererRD::LightStorage::lightmap_get_probe_capture_sh(RID) const */long RendererRD::LightStorage::lightmap_get_probe_capture_sh(long param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 );
      if (*(int*)( lVar1 + 0xb0 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( param_1 + 8 ) = 0;
         if (*(long*)( lVar1 + 0x58 ) != 0) {
            CowData<Color>::_ref((CowData<Color>*)( param_1 + 8 ), (CowData*)( lVar1 + 0x58 ));
         }

         return param_1;
      }

      if (*(int*)( lVar1 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_probe_capture_sh", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x793, "Parameter \"lm\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* CowData<Vector3>::_ref(CowData<Vector3> const&) [clone .part.0] */void CowData<Vector3>::_ref(CowData<Vector3> *this, CowData *param_1) {
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
/* RendererRD::LightStorage::lightmap_get_probe_capture_points(RID) const */long RendererRD::LightStorage::lightmap_get_probe_capture_points(long param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 );
      if (*(int*)( lVar1 + 0xb0 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( param_1 + 8 ) = 0;
         if (*(long*)( lVar1 + 0x48 ) != 0) {
            CowData<Vector3>::_ref((CowData<Vector3>*)( param_1 + 8 ), (CowData*)( lVar1 + 0x48 ));
         }

         return param_1;
      }

      if (*(int*)( lVar1 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_probe_capture_points", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x78c, "Parameter \"lm\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* RendererRD::LightStorage::light_set_projector(RID, RID) */void RendererRD::LightStorage::light_set_projector(LightStorage *this, ulong param_2, ulong param_3) {
   pthread_mutex_t *__mutex;
   int iVar1;
   long *plVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 uVar5;
   int *piVar6;
   plVar2 = (long*)RendererRD::TextureStorage::get_singleton();
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      piVar6 = (int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      if (piVar6[0x38] == (int)( param_2 >> 0x20 )) {
         uVar4 = *(ulong*)( piVar6 + 0x1a );
         if (param_3 != uVar4) {
            if (param_3 == 0) {
               iVar1 = *piVar6;
               if (iVar1 == 0) {
                  piVar6[0x1a] = 0;
                  piVar6[0x1b] = 0;
                  return;
               }

            }
 else {
               __mutex = (pthread_mutex_t*)( plVar2 + 0x27 );
               iVar1 = pthread_mutex_lock(__mutex);
               if (iVar1 != 0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_system_error(iVar1);
               }

               if (( ( *(uint*)( (long)plVar2 + 0x124 ) <= (uint)param_3 ) || ( param_3 >> 0x20 == 0x7fffffff ) ) || ( ( *(uint*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( plVar2 + 0x24 ) ) * 0x118 + *(long*)( plVar2[0x22] + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( plVar2 + 0x24 ) ) * 8 ) + 0x110 ) & 0x7fffffff ) != ( uint )(param_3 >> 0x20) )) {
                  pthread_mutex_unlock(__mutex);
                  uVar5 = 0xf1;
                  pcVar3 = "Condition \"p_texture.is_valid() && !texture_storage->owns_texture(p_texture)\" is true.";
                  goto LAB_00104d92;
               }

               pthread_mutex_unlock(__mutex);
               iVar1 = *piVar6;
               if (iVar1 == 0) {
                  *(ulong*)( piVar6 + 0x1a ) = param_3;
                  return;
               }

               uVar4 = *(ulong*)( piVar6 + 0x1a );
            }

            if (uVar4 != 0) {
               ( **(code**)( *plVar2 + 0x1c0 ) )(plVar2, *(undefined8*)( piVar6 + 0x1a ), iVar1 == 1);
               iVar1 = *piVar6;
            }

            *(ulong*)( piVar6 + 0x1a ) = param_3;
            if (iVar1 != 0) {
               if (param_3 != 0) {
                  ( **(code**)( *plVar2 + 0x1b8 ) )(plVar2, param_3, iVar1 == 1);
               }

               Dependency::changed_notify(piVar6 + 0x2c, 0xb);
               return;
            }

         }

         return;
      }

      if (piVar6[0x38] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar5 = 0xeb;
   pcVar3 = "Parameter \"light\" is null.";
   LAB_00104d92:_err_print_error("light_set_projector", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", uVar5, pcVar3, 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_free(RID) */ulong RendererRD::LightStorage::reflection_probe_free(LightStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   uVar3 = (uint)param_2;
   iVar5 = (int)( param_2 >> 0x20 );
   if (param_2 != 0) {
      if (uVar3 < *(uint*)( this + 0x134 )) {
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
         if (*(int*)( lVar6 + 0x88 ) == iVar5) goto LAB_00104f05;
         if (*(int*)( lVar6 + 0x88 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            lVar6 = 0;
            goto LAB_00104f05;
         }

      }

   }

   lVar6 = 0;
   LAB_00104f05:__mutex = (pthread_mutex_t*)( this + 0x148 );
   Dependency::deleted_notify((RID*)( lVar6 + 0x58 ));
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if (uVar3 < *(uint*)( this + 0x134 )) {
         uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 );
         lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90;
         lVar6 = *(long*)( *(long*)( this + 0x120 ) + uVar4 * 8 ) + lVar7;
         iVar1 = *(int*)( lVar6 + 0x88 );
         if (iVar1 < 0) {
            pthread_mutex_unlock(__mutex);
            uVar4 = 0;
            _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         }
 else if (iVar5 == iVar1) {
            Dependency::~Dependency((Dependency*)( lVar6 + 0x58 ));
            lVar6 = *(long*)( this + 0x128 );
            *(undefined4*)( *(long*)( *(long*)( this + 0x120 ) + uVar4 * 8 ) + 0x88 + lVar7 ) = 0xffffffff;
            uVar2 = *(int*)( this + 0x138 ) - 1;
            *(uint*)( this + 0x138 ) = uVar2;
            *(uint*)( *(long*)( lVar6 + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 ) + ( (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x130 ) ) * 4 ) = uVar3;
            uVar3 = pthread_mutex_unlock(__mutex);
            uVar4 = (ulong)uVar3;
         }
 else {
            pthread_mutex_unlock(__mutex);
            uVar4 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
         }

      }
 else {
         pthread_mutex_unlock(__mutex);
         uVar4 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      }

      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* RendererRD::LightStorage::light_free(RID) */ulong RendererRD::LightStorage::light_free(LightStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   ( **(code**)( *(long*)this + 0x60 ) )(this, param_2, 0);
   uVar3 = (uint)param_2;
   iVar5 = (int)( param_2 >> 0x20 );
   if (param_2 != 0) {
      if (uVar3 < *(uint*)( this + 0x2c )) {
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         if (*(int*)( lVar6 + 0xe0 ) == iVar5) goto LAB_00105156;
         if (*(int*)( lVar6 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            lVar6 = 0;
            goto LAB_00105156;
         }

      }

   }

   lVar6 = 0;
   LAB_00105156:__mutex = (pthread_mutex_t*)( this + 0x40 );
   Dependency::deleted_notify((RID*)( lVar6 + 0xb0 ));
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if (uVar3 < *(uint*)( this + 0x2c )) {
         uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 );
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8;
         lVar7 = *(long*)( *(long*)( this + 0x18 ) + uVar4 * 8 ) + lVar6;
         iVar1 = *(int*)( lVar7 + 0xe0 );
         if (iVar1 < 0) {
            pthread_mutex_unlock(__mutex);
            uVar4 = 0;
            _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         }
 else if (iVar5 == iVar1) {
            Dependency::~Dependency((Dependency*)( lVar7 + 0xb0 ));
            lVar7 = *(long*)( this + 0x20 );
            *(undefined4*)( *(long*)( *(long*)( this + 0x18 ) + uVar4 * 8 ) + 0xe0 + lVar6 ) = 0xffffffff;
            uVar2 = *(int*)( this + 0x30 ) - 1;
            *(uint*)( this + 0x30 ) = uVar2;
            *(uint*)( *(long*)( lVar7 + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x28 ) ) * 4 ) = uVar3;
            uVar3 = pthread_mutex_unlock(__mutex);
            uVar4 = (ulong)uVar3;
         }
 else {
            pthread_mutex_unlock(__mutex);
            uVar4 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
         }

      }
 else {
         pthread_mutex_unlock(__mutex);
         uVar4 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      }

      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
}
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
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
/* RendererRD::LightStorage::lightmap_get_probe_capture_bsp_tree(RID) const */long RendererRD::LightStorage::lightmap_get_probe_capture_bsp_tree(long param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 );
      if (*(int*)( lVar1 + 0xb0 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( param_1 + 8 ) = 0;
         if (*(long*)( lVar1 + 0x78 ) != 0) {
            CowData<int>::_ref((CowData<int>*)( param_1 + 8 ), (CowData*)( lVar1 + 0x78 ));
         }

         return param_1;
      }

      if (*(int*)( lVar1 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_probe_capture_bsp_tree", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x79f, "Parameter \"lm\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* RendererRD::LightStorage::lightmap_set_probe_capture_data(RID, Vector<Vector3> const&,
   Vector<Color> const&, Vector<int> const&, Vector<int> const&) */void RendererRD::LightStorage::lightmap_set_probe_capture_data(LightStorage *this, ulong param_2, long param_3, long param_4, long param_5, long param_6) {
   long lVar1;
   char *pcVar2;
   ulong uVar3;
   undefined8 uVar4;
   long lVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      if (*(int*)( lVar5 + 0xb0 ) == (int)( param_2 >> 0x20 )) {
         lVar1 = *(long*)( param_3 + 8 );
         if (( lVar1 == 0 ) || ( *(long*)( lVar1 + -8 ) == 0 )) {
            LAB_00105516:if (lVar1 != *(long*)( lVar5 + 0x48 )) {
               CowData<Vector3>::_ref((CowData<Vector3>*)( lVar5 + 0x48 ), (CowData*)( param_3 + 8 ));
            }

            if (*(long*)( lVar5 + 0x78 ) != *(long*)( param_6 + 8 )) {
               CowData<int>::_ref((CowData<int>*)( lVar5 + 0x78 ), (CowData*)( param_6 + 8 ));
            }

            if (*(long*)( lVar5 + 0x58 ) != *(long*)( param_4 + 8 )) {
               CowData<Color>::_ref((CowData<Color>*)( lVar5 + 0x58 ), (CowData*)( param_4 + 8 ));
            }

            if (*(long*)( lVar5 + 0x68 ) != *(long*)( param_5 + 8 )) {
               CowData<int>::_ref((CowData<int>*)( lVar5 + 0x68 ), (CowData*)( param_5 + 8 ));
               return;
            }

            return;
         }

         if (( *(long*)( param_4 + 8 ) == 0 ) || ( *(long*)( lVar1 + -8 ) * 9 != *(long*)( *(long*)( param_4 + 8 ) + -8 ) )) {
            uVar4 = 0x778;
            pcVar2 = "Condition \"p_points.size() * 9 != p_point_sh.size()\" is true.";
         }
 else if (( *(long*)( param_5 + 8 ) == 0 ) || ( ( *(byte*)( *(long*)( param_5 + 8 ) + -8 ) & 3 ) == 0 )) {
            if (( *(long*)( param_6 + 8 ) == 0 ) || ( uVar3 = *(long*)( *(long*)( param_6 + 8 ) + -8 ) * -0x5555555555555555 + 0x2aaaaaaaaaaaaaaa(uVar3 >> 1 | ( ulong )(( uVar3 & 1 ) != 0) << 0x3f) < 0x2aaaaaaaaaaaaaab )) goto LAB_00105516;
            uVar4 = 0x77a;
            pcVar2 = "Condition \"(p_bsp_tree.size() % 6) != 0\" is true.";
         }
 else {
            uVar4 = 0x779;
            pcVar2 = "Condition \"(p_tetrahedra.size() % 4) != 0\" is true.";
         }

         goto LAB_00105632;
      }

      if (*(int*)( lVar5 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x775;
   pcVar2 = "Parameter \"lm\" is null.";
   LAB_00105632:_err_print_error("lightmap_set_probe_capture_data", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* RendererRD::LightStorage::lightmap_get_probe_capture_tetrahedra(RID) const */long RendererRD::LightStorage::lightmap_get_probe_capture_tetrahedra(long param_1, long param_2, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      lVar1 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 );
      if (*(int*)( lVar1 + 0xb0 ) == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( param_1 + 8 ) = 0;
         if (*(long*)( lVar1 + 0x68 ) != 0) {
            CowData<int>::_ref((CowData<int>*)( param_1 + 8 ), (CowData*)( lVar1 + 0x68 ));
         }

         return param_1;
      }

      if (*(int*)( lVar1 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_probe_capture_tetrahedra", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x799, "Parameter \"lm\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* SortArray<RendererRD::LightStorage::ReflectionProbeInstanceSort,
   _DefaultComparator<RendererRD::LightStorage::ReflectionProbeInstanceSort>, true>::introsort(long,
   long, RendererRD::LightStorage::ReflectionProbeInstanceSort*, long) const [clone .isra.0] */void SortArray<RendererRD::LightStorage::ReflectionProbeInstanceSort,_DefaultComparator<RendererRD::LightStorage::ReflectionProbeInstanceSort>,true>::introsort(long param_1, long param_2, ReflectionProbeInstanceSort *param_3, long param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   ReflectionProbeInstanceSort *pRVar8;
   long lVar9;
   ReflectionProbeInstanceSort *pRVar10;
   ReflectionProbeInstanceSort *pRVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   ReflectionProbeInstanceSort *pRVar16;
   float fVar17;
   long local_50;
   lVar9 = param_2 - param_1;
   if (lVar9 < 0x11) {
      return;
   }

   if (param_4 != 0) {
      lVar15 = param_2;
      local_50 = param_4;
      LAB_00105800:local_50 = local_50 + -1;
      fVar1 = *(float*)( param_3 + param_1 * 0x10 );
      fVar2 = *(float*)( param_3 + ( ( lVar9 >> 1 ) + param_1 ) * 0x10 );
      fVar3 = *(float*)( param_3 + lVar15 * 0x10 + -0x10 );
      if (fVar2 <= fVar1) {
         fVar17 = fVar1;
         if (( fVar3 <= fVar1 ) && ( fVar17 = fVar3 <= fVar2 )) {
            fVar17 = fVar2;
         }

      }
 else {
         fVar17 = fVar2;
         if (( fVar3 <= fVar2 ) && ( fVar17 = fVar3 <= fVar1 )) {
            fVar17 = fVar1;
         }

      }

      lVar9 = lVar15;
      pRVar11 = param_3 + param_1 * 0x10;
      param_2 = param_1;
      do {
         if (*(float*)pRVar11 <= fVar17 && fVar17 != *(float*)pRVar11) {
            if (lVar15 + -1 == param_2) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_00105884;
            }

         }
 else {
            LAB_00105884:lVar9 = lVar9 + -1;
            pRVar8 = param_3 + lVar9 * 0x10;
            if (fVar17 < *(float*)pRVar8) {
               pRVar16 = param_3 + lVar9 * 0x10 + -0x10;
               while (param_1 != lVar9) {
                  lVar9 = lVar9 + -1;
                  pRVar8 = pRVar16;
                  if (*(float*)pRVar16 <= fVar17) goto LAB_00105904;
                  pRVar16 = pRVar16 + -0x10;
               }
;
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
            }

            LAB_00105904:if (lVar9 <= param_2) goto LAB_00105930;
            fVar1 = *(float*)pRVar11;
            uVar4 = *(undefined8*)( pRVar11 + 8 );
            uVar5 = *(undefined8*)( pRVar8 + 8 );
            *(undefined8*)pRVar11 = *(undefined8*)pRVar8;
            *(undefined8*)( pRVar11 + 8 ) = uVar5;
            *(undefined8*)( pRVar8 + 8 ) = uVar4;
            *(float*)pRVar8 = fVar1;
         }

         pRVar11 = pRVar11 + 0x10;
         param_2 = param_2 + 1;
      }
 while ( true );
   }

   LAB_001059f7:lVar12 = lVar9 + -2 >> 1;
   lVar15 = lVar12 * 2 + 2;
   pRVar11 = param_3 + ( param_1 + lVar12 ) * 0x10;
   do {
      fVar1 = *(float*)pRVar11;
      uVar4 = *(undefined8*)( pRVar11 + 8 );
      lVar14 = lVar12;
      lVar6 = lVar15;
      if (lVar15 < lVar9) {
         do {
            pRVar16 = param_3 + ( param_1 + lVar6 ) * 0x10;
            fVar2 = *(float*)( param_3 + ( param_1 + lVar6 + -1 ) * 0x10 );
            lVar7 = lVar6 + -1;
            pRVar8 = param_3 + ( param_1 + lVar6 + -1 ) * 0x10;
            lVar13 = lVar6;
            if (fVar2 < *(float*)pRVar16 || fVar2 == *(float*)pRVar16) {
               lVar13 = lVar6 + 1;
               lVar7 = lVar6;
               pRVar8 = pRVar16;
            }

            uVar5 = *(undefined8*)( pRVar8 + 8 );
            lVar6 = lVar13 * 2;
            *(undefined8*)( param_3 + ( param_1 + lVar14 ) * 0x10 ) = *(undefined8*)pRVar8;
            *(undefined8*)( param_3 + ( param_1 + lVar14 ) * 0x10 + 8 ) = uVar5;
            lVar14 = lVar7;
         }
 while ( lVar9 != lVar6 && SBORROW8(lVar9, lVar6) == lVar9 + lVar13 * -2 < 0 );
         pRVar16 = pRVar8;
         if (lVar9 == lVar6) {
            LAB_00105c1f:lVar7 = lVar6 + -1;
            pRVar8 = param_3 + ( param_1 + lVar7 ) * 0x10;
            uVar5 = *(undefined8*)( pRVar8 + 8 );
            *(undefined8*)pRVar16 = *(undefined8*)pRVar8;
            *(undefined8*)( pRVar16 + 8 ) = uVar5;
         }

         lVar6 = lVar7 + -1;
         if (lVar7 <= lVar12) goto LAB_00105c7f;
         do {
            lVar14 = lVar6 >> 1;
            pRVar16 = param_3 + ( param_1 + lVar14 ) * 0x10;
            pRVar8 = param_3 + ( lVar7 + param_1 ) * 0x10;
            if (fVar1 < *(float*)pRVar16 || fVar1 == *(float*)pRVar16) {
               *(undefined8*)( pRVar8 + 8 ) = uVar4;
               *(float*)pRVar8 = fVar1;
               goto joined_r0x00105b04;
            }

            uVar5 = *(undefined8*)( pRVar16 + 8 );
            *(undefined8*)pRVar8 = *(undefined8*)pRVar16;
            *(undefined8*)( pRVar8 + 8 ) = uVar5;
            lVar6 = ( lVar14 + -1 ) - ( lVar14 + -1 >> 0x3f );
            lVar7 = lVar14;
         }
 while ( lVar12 < lVar14 );
         *(undefined8*)( pRVar16 + 8 ) = uVar4;
         *(float*)pRVar16 = fVar1;
         joined_r0x00105b04:if (lVar12 == 0) goto LAB_00105b06;
      }
 else {
         pRVar16 = pRVar11;
         pRVar8 = pRVar11;
         if (lVar15 == lVar9) goto LAB_00105c1f;
         LAB_00105c7f:*(undefined8*)( pRVar8 + 8 ) = uVar4;
         *(float*)pRVar8 = fVar1;
      }

      lVar12 = lVar12 + -1;
      pRVar11 = pRVar11 + -0x10;
      lVar15 = lVar15 + -2;
   }
 while ( true );
   LAB_00105930:introsort(param_2, lVar15, param_3, local_50);
   lVar9 = param_2 - param_1;
   if (lVar9 < 0x11) {
      return;
   }

   lVar15 = param_2;
   if (local_50 == 0) goto LAB_001059f7;
   goto LAB_00105800;
   LAB_00105b06:pRVar8 = param_3 + param_1 * 0x10;
   pRVar11 = param_3 + param_2 * 0x10;
   lVar9 = ( param_2 + -1 ) - param_1;
   LAB_00105b28:do {
      uVar5 = *(undefined8*)( pRVar8 + 8 );
      fVar1 = *(float*)( pRVar11 + -0x10 );
      uVar4 = *(undefined8*)( pRVar11 + -8 );
      *(undefined8*)( pRVar11 + -0x10 ) = *(undefined8*)pRVar8;
      *(undefined8*)( pRVar11 + -8 ) = uVar5;
      if (lVar9 < 3) {
         if (lVar9 != 2) {
            *(undefined8*)( pRVar8 + 8 ) = uVar4;
            *(float*)pRVar8 = fVar1;
            return;
         }

         lVar15 = param_1 + 1;
         lVar9 = 0;
         lVar12 = 1;
         uVar5 = *(undefined8*)( param_3 + lVar15 * 0x10 + 8 );
         *(undefined8*)pRVar8 = *(undefined8*)( param_3 + lVar15 * 0x10 );
         *(undefined8*)( pRVar8 + 8 ) = uVar5;
         LAB_00105bf0:while (true) {
            pRVar16 = param_3 + lVar15 * 0x10;
            pRVar10 = param_3 + ( param_1 + lVar9 ) * 0x10;
            if (fVar1 < *(float*)pRVar10 || fVar1 == *(float*)pRVar10) break;
            uVar5 = *(undefined8*)( pRVar10 + 8 );
            *(undefined8*)pRVar16 = *(undefined8*)pRVar10;
            *(undefined8*)( pRVar16 + 8 ) = uVar5;
            if (lVar9 == 0) {
               pRVar11 = pRVar11 + -0x10;
               *(undefined8*)( pRVar10 + 8 ) = uVar4;
               *(float*)pRVar10 = fVar1;
               lVar9 = lVar12;
               goto LAB_00105b28;
            }

            lVar15 = param_1 + lVar9;
            lVar9 = ( lVar9 + -1 ) / 2;
         }
;
      }
 else {
         lVar15 = 2;
         lVar12 = 0;
         do {
            pRVar10 = param_3 + ( param_1 + lVar15 ) * 0x10;
            fVar2 = *(float*)( param_3 + ( param_1 + lVar15 + -1 ) * 0x10 );
            lVar6 = lVar15 + -1;
            lVar14 = lVar15;
            pRVar16 = param_3 + ( param_1 + lVar15 + -1 ) * 0x10;
            if (fVar2 < *(float*)pRVar10 || fVar2 == *(float*)pRVar10) {
               lVar14 = lVar15 + 1;
               lVar6 = lVar15;
               pRVar16 = pRVar10;
            }

            uVar5 = *(undefined8*)( pRVar16 + 8 );
            lVar15 = lVar14 * 2;
            *(undefined8*)( param_3 + ( param_1 + lVar12 ) * 0x10 ) = *(undefined8*)pRVar16;
            *(undefined8*)( param_3 + ( param_1 + lVar12 ) * 0x10 + 8 ) = uVar5;
            lVar12 = lVar6;
         }
 while ( lVar9 != lVar15 && SBORROW8(lVar9, lVar15) == lVar9 + lVar14 * -2 < 0 );
         if (lVar9 == lVar15) {
            lVar12 = lVar9 + -1;
            lVar15 = param_1 + lVar12;
            lVar9 = lVar9 + -2 >> 1;
            uVar5 = *(undefined8*)( param_3 + lVar15 * 0x10 + 8 );
            *(undefined8*)pRVar16 = *(undefined8*)( param_3 + lVar15 * 0x10 );
            *(undefined8*)( pRVar16 + 8 ) = uVar5;
            goto LAB_00105bf0;
         }

         lVar12 = lVar9 + -1;
         lVar15 = param_1 + lVar6;
         lVar9 = ( lVar6 + -1 ) / 2;
         if (0 < lVar6) goto LAB_00105bf0;
      }

      *(undefined8*)( pRVar16 + 8 ) = uVar4;
      pRVar11 = pRVar11 + -0x10;
      *(float*)pRVar16 = fVar1;
      lVar9 = lVar12;
   }
 while ( true );
}
/* SortArray<RendererRD::LightStorage::LightInstanceDepthSort,
   _DefaultComparator<RendererRD::LightStorage::LightInstanceDepthSort>, true>::introsort(long,
   long, RendererRD::LightStorage::LightInstanceDepthSort*, long) const [clone .isra.0] */void SortArray<RendererRD::LightStorage::LightInstanceDepthSort,_DefaultComparator<RendererRD::LightStorage::LightInstanceDepthSort>,true>::introsort(long param_1, long param_2, LightInstanceDepthSort *param_3, long param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined1 auVar4[16];
   bool bVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   LightInstanceDepthSort *pLVar11;
   long lVar12;
   long lVar13;
   LightInstanceDepthSort *pLVar14;
   long lVar15;
   LightInstanceDepthSort *pLVar16;
   LightInstanceDepthSort *pLVar17;
   long lVar18;
   long lVar19;
   float fVar20;
   long local_58;
   lVar13 = param_2 - param_1;
   if (lVar13 < 0x11) {
      return;
   }

   if (param_4 != 0) {
      lVar19 = param_2;
      local_58 = param_4;
      LAB_00105d17:local_58 = local_58 + -1;
      fVar1 = *(float*)( param_3 + param_1 * 0x18 );
      fVar2 = *(float*)( param_3 + ( ( lVar13 >> 1 ) + param_1 ) * 0x18 );
      fVar3 = *(float*)( param_3 + lVar19 * 0x18 + -0x18 );
      if (fVar2 <= fVar1) {
         fVar20 = fVar1;
         if (( fVar3 <= fVar1 ) && ( fVar20 = fVar3 <= fVar2 )) {
            fVar20 = fVar2;
         }

      }
 else {
         fVar20 = fVar2;
         if (( fVar3 <= fVar2 ) && ( fVar20 = fVar3 <= fVar1 )) {
            fVar20 = fVar1;
         }

      }

      lVar13 = lVar19;
      pLVar14 = param_3 + param_1 * 0x18;
      param_2 = param_1;
      do {
         if (*(float*)pLVar14 <= fVar20 && fVar20 != *(float*)pLVar14) {
            if (lVar19 + -1 == param_2) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0);
               goto LAB_00105d9c;
            }

         }
 else {
            LAB_00105d9c:lVar13 = lVar13 + -1;
            pLVar16 = param_3 + lVar13 * 0x18;
            if (fVar20 < *(float*)pLVar16) {
               pLVar17 = param_3 + lVar13 * 0x18 + -0x18;
               while (param_1 != lVar13) {
                  lVar13 = lVar13 + -1;
                  pLVar16 = pLVar17;
                  if (*(float*)pLVar17 <= fVar20) goto LAB_00105e1c;
                  pLVar17 = pLVar17 + -0x18;
               }
;
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0);
            }

            LAB_00105e1c:if (lVar13 <= param_2) goto LAB_00105e50;
            uVar6 = *(undefined8*)( pLVar16 + 8 );
            auVar4 = *(undefined1(*) [16])( pLVar14 + 8 );
            fVar1 = *(float*)pLVar14;
            *(undefined8*)pLVar14 = *(undefined8*)pLVar16;
            *(undefined8*)( pLVar14 + 8 ) = uVar6;
            *(undefined8*)( pLVar14 + 0x10 ) = *(undefined8*)( pLVar16 + 0x10 );
            *(float*)pLVar16 = fVar1;
            *(undefined1(*) [16])( pLVar16 + 8 ) = auVar4;
         }

         pLVar14 = pLVar14 + 0x18;
         param_2 = param_2 + 1;
      }
 while ( true );
   }

   LAB_00105f1c:lVar18 = lVar13 + -2 >> 1;
   lVar19 = lVar18 * 2 + 2;
   pLVar14 = param_3 + ( param_1 + lVar18 ) * 0x18;
   do {
      fVar1 = *(float*)pLVar14;
      uVar6 = *(undefined8*)( pLVar14 + 8 );
      uVar7 = *(undefined8*)( pLVar14 + 0x10 );
      lVar9 = lVar19;
      lVar15 = lVar18;
      if (lVar19 < lVar13) {
         do {
            pLVar17 = param_3 + ( param_1 + lVar9 ) * 0x18;
            fVar2 = *(float*)( param_3 + ( param_1 + lVar9 + -1 ) * 0x18 );
            lVar10 = lVar9 + -1;
            lVar12 = lVar9;
            pLVar16 = param_3 + ( param_1 + lVar9 + -1 ) * 0x18;
            if (fVar2 < *(float*)pLVar17 || fVar2 == *(float*)pLVar17) {
               lVar12 = lVar9 + 1;
               lVar10 = lVar9;
               pLVar16 = pLVar17;
            }

            uVar8 = *(undefined8*)( pLVar16 + 8 );
            lVar9 = lVar12 * 2;
            pLVar17 = param_3 + ( lVar15 + param_1 ) * 0x18;
            *(undefined8*)pLVar17 = *(undefined8*)pLVar16;
            *(undefined8*)( pLVar17 + 8 ) = uVar8;
            *(undefined8*)( pLVar17 + 0x10 ) = *(undefined8*)( pLVar16 + 0x10 );
            lVar15 = lVar10;
         }
 while ( lVar13 != lVar9 && SBORROW8(lVar13, lVar9) == lVar13 + lVar12 * -2 < 0 );
         pLVar17 = pLVar16;
         if (lVar13 == lVar9) {
            LAB_00106197:lVar10 = lVar9 + -1;
            pLVar16 = param_3 + ( param_1 + lVar10 ) * 0x18;
            uVar8 = *(undefined8*)( pLVar16 + 8 );
            *(undefined8*)pLVar17 = *(undefined8*)pLVar16;
            *(undefined8*)( pLVar17 + 8 ) = uVar8;
            *(undefined8*)( pLVar17 + 0x10 ) = *(undefined8*)( pLVar16 + 0x10 );
         }

         lVar9 = lVar10 + -1;
         if (lVar10 <= lVar18) goto LAB_001061f5;
         do {
            lVar15 = lVar9 >> 1;
            pLVar16 = param_3 + ( param_1 + lVar15 ) * 0x18;
            pLVar17 = param_3 + ( lVar10 + param_1 ) * 0x18;
            if (fVar1 < *(float*)pLVar16 || fVar1 == *(float*)pLVar16) {
               *(float*)pLVar17 = fVar1;
               *(undefined8*)( pLVar17 + 8 ) = uVar6;
               *(undefined8*)( pLVar17 + 0x10 ) = uVar7;
               goto joined_r0x00106025;
            }

            uVar8 = *(undefined8*)( pLVar16 + 8 );
            *(undefined8*)pLVar17 = *(undefined8*)pLVar16;
            *(undefined8*)( pLVar17 + 8 ) = uVar8;
            *(undefined8*)( pLVar17 + 0x10 ) = *(undefined8*)( pLVar16 + 0x10 );
            lVar9 = ( lVar15 + -1 ) - ( lVar15 + -1 >> 0x3f );
            lVar10 = lVar15;
         }
 while ( lVar18 < lVar15 );
         *(float*)pLVar16 = fVar1;
         *(undefined8*)( pLVar16 + 8 ) = uVar6;
         *(undefined8*)( pLVar16 + 0x10 ) = uVar7;
         joined_r0x00106025:if (lVar18 == 0) goto LAB_00106048;
      }
 else {
         pLVar17 = pLVar14;
         pLVar16 = pLVar14;
         if (lVar19 == lVar13) goto LAB_00106197;
         LAB_001061f5:*(float*)pLVar16 = fVar1;
         *(undefined8*)( pLVar16 + 8 ) = uVar6;
         *(undefined8*)( pLVar16 + 0x10 ) = uVar7;
      }

      lVar18 = lVar18 + -1;
      pLVar14 = pLVar14 + -0x18;
      lVar19 = lVar19 + -2;
   }
 while ( true );
   LAB_00105e50:introsort(param_2, lVar19, param_3, local_58);
   lVar13 = param_2 - param_1;
   if (lVar13 < 0x11) {
      return;
   }

   lVar19 = param_2;
   if (local_58 == 0) goto LAB_00105f1c;
   goto LAB_00105d17;
   LAB_00106048:pLVar14 = param_3 + param_1 * 0x18;
   pLVar16 = param_3 + param_2 * 0x18 + -0x18;
   lVar13 = ( param_2 + -1 ) - param_1;
   LAB_00106068:do {
      uVar6 = *(undefined8*)( pLVar14 + 8 );
      uVar7 = *(undefined8*)( pLVar16 + 8 );
      uVar8 = *(undefined8*)( pLVar16 + 0x10 );
      fVar1 = *(float*)pLVar16;
      *(undefined8*)pLVar16 = *(undefined8*)pLVar14;
      *(undefined8*)( pLVar16 + 8 ) = uVar6;
      *(undefined8*)( pLVar16 + 0x10 ) = *(undefined8*)( pLVar14 + 0x10 );
      if (lVar13 < 3) {
         if (lVar13 != 2) {
            *(float*)pLVar14 = fVar1;
            *(undefined8*)( pLVar14 + 8 ) = uVar7;
            *(undefined8*)( pLVar14 + 0x10 ) = uVar8;
            return;
         }

         lVar18 = 0;
         lVar19 = 1;
         pLVar17 = pLVar14;
         LAB_001061d4:lVar15 = param_1 + lVar19;
         pLVar11 = param_3 + lVar15 * 0x18;
         uVar6 = *(undefined8*)( pLVar11 + 8 );
         *(undefined8*)pLVar17 = *(undefined8*)pLVar11;
         *(undefined8*)( pLVar17 + 8 ) = uVar6;
         *(undefined8*)( pLVar17 + 0x10 ) = *(undefined8*)( pLVar11 + 0x10 );
      }
 else {
         lVar19 = 2;
         lVar18 = 0;
         do {
            fVar2 = *(float*)( param_3 + ( param_1 + lVar19 + -1 ) * 0x18 );
            pLVar11 = param_3 + ( param_1 + lVar19 ) * 0x18;
            lVar9 = lVar19 + -1;
            lVar15 = lVar19;
            pLVar17 = param_3 + ( param_1 + lVar19 + -1 ) * 0x18;
            if (fVar2 < *(float*)pLVar11 || fVar2 == *(float*)pLVar11) {
               lVar15 = lVar19 + 1;
               lVar9 = lVar19;
               pLVar17 = pLVar11;
            }

            uVar6 = *(undefined8*)( pLVar17 + 8 );
            lVar19 = lVar15 * 2;
            pLVar11 = param_3 + ( param_1 + lVar18 ) * 0x18;
            *(undefined8*)pLVar11 = *(undefined8*)pLVar17;
            *(undefined8*)( pLVar11 + 8 ) = uVar6;
            *(undefined8*)( pLVar11 + 0x10 ) = *(undefined8*)( pLVar17 + 0x10 );
            lVar18 = lVar9;
         }
 while ( lVar13 != lVar19 && SBORROW8(lVar13, lVar19) == lVar13 + lVar15 * -2 < 0 );
         if (lVar13 == lVar19) {
            lVar19 = lVar13 + -1;
            lVar18 = lVar13 + -2 >> 1;
            goto LAB_001061d4;
         }

         lVar15 = param_1 + lVar9;
         lVar19 = lVar13 + -1;
         lVar18 = ( lVar9 + -1 ) / 2;
         if (lVar9 < 1) {
            *(float*)pLVar17 = fVar1;
            pLVar16 = pLVar16 + -0x18;
            *(undefined8*)( pLVar17 + 8 ) = uVar7;
            *(undefined8*)( pLVar17 + 0x10 ) = uVar8;
            lVar13 = lVar19;
            goto LAB_00106068;
         }

      }

      while (true) {
         pLVar17 = param_3 + ( param_1 + lVar18 ) * 0x18;
         pLVar11 = param_3 + lVar15 * 0x18;
         if (fVar1 < *(float*)pLVar17 || fVar1 == *(float*)pLVar17) break;
         uVar6 = *(undefined8*)( pLVar17 + 8 );
         *(undefined8*)pLVar11 = *(undefined8*)pLVar17;
         *(undefined8*)( pLVar11 + 8 ) = uVar6;
         *(undefined8*)( pLVar11 + 0x10 ) = *(undefined8*)( pLVar17 + 0x10 );
         pLVar11 = pLVar17;
         if (lVar18 == 0) break;
         lVar15 = param_1 + lVar18;
         lVar18 = ( lVar18 + -1 ) / 2;
      }
;
      *(float*)pLVar11 = fVar1;
      pLVar16 = pLVar16 + -0x18;
      *(undefined8*)( pLVar11 + 8 ) = uVar7;
      *(undefined8*)( pLVar11 + 0x10 ) = uVar8;
      bVar5 = lVar13 < 2;
      lVar13 = lVar19;
      if (bVar5) {
         return;
      }

   }
 while ( true );
}
/* SortArray<RendererRD::LightStorage::LightInstanceDepthSort,
   _DefaultComparator<RendererRD::LightStorage::LightInstanceDepthSort>,
   true>::sort(RendererRD::LightStorage::LightInstanceDepthSort*, long) const [clone .part.0] [clone
   .isra.0] */void SortArray<RendererRD::LightStorage::LightInstanceDepthSort,_DefaultComparator<RendererRD::LightStorage::LightInstanceDepthSort>,true>::sort(LightInstanceDepthSort *param_1, long param_2) {
   float fVar1;
   float fVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   size_t sVar6;
   long lVar7;
   LightInstanceDepthSort *pLVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   LightInstanceDepthSort *pLVar13;
   size_t sVar14;
   if (param_2 == 1) {
      introsort(0, 1, param_1, 0);
      return;
   }

   lVar9 = 0;
   lVar7 = param_2;
   do {
      lVar7 = lVar7 >> 1;
      lVar9 = lVar9 + 1;
   }
 while ( lVar7 != 1 );
   introsort(0, param_2, param_1, lVar9 * 2);
   if (param_2 < 0x11) {
      sVar14 = 0x18;
      pLVar13 = param_1;
      lVar7 = 0;
      do {
         fVar1 = *(float*)( pLVar13 + 0x18 );
         lVar9 = lVar7 + 1;
         uVar3 = *(undefined8*)( pLVar13 + 0x20 );
         uVar4 = *(undefined8*)( pLVar13 + 0x28 );
         if (fVar1 < *(float*)param_1) {
            memmove(param_1 + 0x18, param_1, sVar14);
            *(float*)param_1 = fVar1;
            *(undefined8*)( param_1 + 8 ) = uVar3;
            *(undefined8*)( param_1 + 0x10 ) = uVar4;
         }
 else {
            pLVar8 = param_1 + sVar14;
            sVar6 = sVar14;
            if (fVar1 < *(float*)pLVar13) {
               while (lVar7 != 0) {
                  uVar5 = *(undefined8*)( pLVar13 + ( sVar6 - sVar14 ) + 8 );
                  fVar2 = *(float*)( param_1 + ( sVar6 - 0x30 ) );
                  *(undefined8*)( param_1 + sVar6 ) = *(undefined8*)( pLVar13 + ( sVar6 - sVar14 ) );
                  *(undefined8*)( param_1 + sVar6 + 8 ) = uVar5;
                  *(undefined8*)( param_1 + sVar6 + 0x10 ) = *(undefined8*)( pLVar13 + sVar6 + ( 0x10 - sVar14 ) );
                  if (fVar2 <= fVar1) {
                     pLVar8 = param_1 + lVar7 * 0x18;
                     goto LAB_0010658b;
                  }

                  lVar7 = lVar7 + -1;
                  sVar6 = sVar6 - 0x18;
               }
;
               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               pLVar8 = param_1 + 0x18;
            }

            LAB_0010658b:*(float*)pLVar8 = fVar1;
            *(undefined8*)( pLVar8 + 8 ) = uVar3;
            *(undefined8*)( pLVar8 + 0x10 ) = uVar4;
         }

         pLVar13 = pLVar13 + 0x18;
         sVar14 = sVar14 + 0x18;
         lVar7 = lVar9;
      }
 while ( param_2 + -1 != lVar9 );
   }
 else {
      pLVar13 = param_1;
      lVar7 = 0;
      sVar14 = 0x18;
      do {
         while (true) {
            fVar1 = *(float*)( pLVar13 + 0x18 );
            lVar9 = lVar7 + 1;
            uVar3 = *(undefined8*)( pLVar13 + 0x20 );
            uVar4 = *(undefined8*)( pLVar13 + 0x28 );
            if (fVar1 < *(float*)param_1) break;
            pLVar8 = param_1 + sVar14;
            sVar6 = sVar14;
            if (fVar1 < *(float*)pLVar13) {
               while (lVar7 != 0) {
                  uVar5 = *(undefined8*)( pLVar13 + ( sVar6 - sVar14 ) + 8 );
                  fVar2 = *(float*)( param_1 + ( sVar6 - 0x30 ) );
                  *(undefined8*)( param_1 + sVar6 ) = *(undefined8*)( pLVar13 + ( sVar6 - sVar14 ) );
                  *(undefined8*)( param_1 + sVar6 + 8 ) = uVar5;
                  *(undefined8*)( param_1 + sVar6 + 0x10 ) = *(undefined8*)( pLVar13 + sVar6 + ( 0x10 - sVar14 ) );
                  if (fVar2 <= fVar1) {
                     pLVar8 = param_1 + lVar7 * 0x18;
                     goto LAB_0010638f;
                  }

                  lVar7 = lVar7 + -1;
                  sVar6 = sVar6 - 0x18;
               }
;
               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               pLVar8 = param_1 + 0x18;
            }

            LAB_0010638f:*(float*)pLVar8 = fVar1;
            pLVar13 = pLVar13 + 0x18;
            *(undefined8*)( pLVar8 + 8 ) = uVar3;
            *(undefined8*)( pLVar8 + 0x10 ) = uVar4;
            lVar7 = lVar9;
            sVar14 = sVar14 + 0x18;
            if (lVar9 == 0xf) goto LAB_001063a9;
         }
;
         pLVar13 = pLVar13 + 0x18;
         memmove(param_1 + 0x18, param_1, sVar14);
         *(float*)param_1 = fVar1;
         *(undefined8*)( param_1 + 8 ) = uVar3;
         *(undefined8*)( param_1 + 0x10 ) = uVar4;
         lVar7 = lVar9;
         sVar14 = sVar14 + 0x18;
      }
 while ( lVar9 != 0xf );
      LAB_001063a9:pLVar13 = param_1 + 0x180;
      lVar9 = -0x180;
      lVar7 = 0x10;
      do {
         fVar1 = *(float*)pLVar13;
         lVar12 = -lVar9;
         uVar3 = *(undefined8*)( pLVar13 + 8 );
         uVar4 = *(undefined8*)( pLVar13 + 0x10 );
         lVar10 = lVar7 + -1;
         pLVar8 = pLVar13;
         if (fVar1 < *(float*)( pLVar13 + -0x18 )) {
            do {
               uVar5 = *(undefined8*)( pLVar13 + lVar12 + lVar9 + -0x18 + 8 );
               fVar2 = *(float*)( param_1 + lVar12 + -0x30 );
               *(undefined8*)( param_1 + lVar12 ) = *(undefined8*)( pLVar13 + lVar12 + lVar9 + -0x18 );
               *(undefined8*)( param_1 + lVar12 + 8 ) = uVar5;
               *(undefined8*)( param_1 + lVar12 + 0x10 ) = *(undefined8*)( pLVar13 + lVar12 + lVar9 + -8 );
               lVar11 = lVar10 + -1;
               if (fVar2 <= fVar1) {
                  pLVar8 = param_1 + lVar10 * 0x18;
                  goto LAB_0010645f;
               }

               lVar12 = lVar12 + -0x18;
               lVar10 = lVar11;
            }
 while ( lVar11 != 0 );
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            pLVar8 = param_1 + 0x18;
         }

         LAB_0010645f:lVar7 = lVar7 + 1;
         *(float*)pLVar8 = fVar1;
         pLVar13 = pLVar13 + 0x18;
         lVar9 = lVar9 + -0x18;
         *(undefined8*)( pLVar8 + 8 ) = uVar3;
         *(undefined8*)( pLVar8 + 0x10 ) = uVar4;
      }
 while ( param_2 != lVar7 );
   }

   return;
}
/* RendererRD::LightStorage::shadow_atlas_free(RID) */void RendererRD::LightStorage::shadow_atlas_free(LightStorage *this, ulong param_2) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   uint uVar4;
   int *piVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   void *pvVar10;
   long lVar11;
   ( **(code**)( *(long*)this + 0x398 ) )(this, param_2, 0, 1);
   if ((uint)param_2 < *(uint*)( this + 0x34c )) {
      uVar3 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 );
      lVar11 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200;
      lVar9 = *(long*)( *(long*)( this + 0x338 ) + uVar3 * 8 ) + lVar11;
      if (*(int*)( lVar9 + 0xc0 ) < 0) {
         _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
         return;
      }

      if ((int)( param_2 >> 0x20 ) == *(int*)( lVar9 + 0xc0 )) {
         pvVar10 = *(void**)( lVar9 + 0x98 );
         if (pvVar10 != (void*)0x0) {
            if (*(int*)( lVar9 + 0xbc ) != 0) {
               uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar9 + 0xb8 ) * 4 );
               if (uVar4 == 0) {
                  *(undefined4*)( lVar9 + 0xbc ) = 0;
                  *(undefined1(*) [16])( lVar9 + 0xa8 ) = (undefined1[16])0x0;
               }
 else {
                  lVar7 = 0;
                  do {
                     piVar5 = (int*)( *(long*)( lVar9 + 0xa0 ) + lVar7 );
                     if (*piVar5 != 0) {
                        *piVar5 = 0;
                        Memory::free_static(*(void**)( (long)pvVar10 + lVar7 * 2 ), false);
                        pvVar10 = *(void**)( lVar9 + 0x98 );
                        *(undefined8*)( (long)pvVar10 + lVar7 * 2 ) = 0;
                     }

                     lVar7 = lVar7 + 4;
                  }
 while ( lVar7 != (ulong)uVar4 * 4 );
                  *(undefined4*)( lVar9 + 0xbc ) = 0;
                  *(undefined1(*) [16])( lVar9 + 0xa8 ) = (undefined1[16])0x0;
                  if (pvVar10 == (void*)0x0) goto LAB_0010670f;
               }

            }

            Memory::free_static(pvVar10, false);
            Memory::free_static(*(void**)( lVar9 + 0xa0 ), false);
         }

         LAB_0010670f:lVar7 = lVar9 + 0x60;
         do {
            lVar8 = lVar7 + -0x18;
            if (*(long*)( lVar7 + -8 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar7 + -8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar7 + -8 );
                  *(undefined8*)( lVar7 + -8 ) = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            lVar7 = lVar8;
         }
 while ( lVar9 != lVar8 );
         lVar9 = *(long*)( this + 0x340 );
         *(undefined4*)( *(long*)( *(long*)( this + 0x338 ) + uVar3 * 8 ) + 0xc0 + lVar11 ) = 0xffffffff;
         uVar4 = *(int*)( this + 0x350 ) - 1;
         *(uint*)( this + 0x350 ) = uVar4;
         *(uint*)( *(long*)( lVar9 + ( (ulong)uVar4 / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( (ulong)uVar4 % ( ulong ) * (uint*)( this + 0x348 ) ) * 4 ) = (uint)param_2;
         return;
      }

      uVar6 = 0x171;
   }
 else {
      uVar6 = 0x161;
   }

   _err_print_error(&_LC19, "./core/templates/rid_owner.h", uVar6, "Method/function failed.", 0, 0);
   return;
}
/* RendererRD::LightStorage::lightmap_free(RID) */ulong RendererRD::LightStorage::lightmap_free(LightStorage *this, ulong param_2) {
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
   ( **(code**)( *(long*)this + 0x2e8 ) )(this, param_2, 0, 0);
   uVar5 = (uint)param_2;
   iVar7 = (int)( param_2 >> 0x20 );
   if (( param_2 != 0 ) && ( uVar5 < *(uint*)( this + 0x284 ) )) {
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      if (*(int*)( lVar8 + 0xb0 ) == iVar7) goto LAB_001068e7;
      if (*(int*)( lVar8 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         lVar8 = 0;
         goto LAB_001068e7;
      }

   }

   lVar8 = 0;
   LAB_001068e7:__mutex = (pthread_mutex_t*)( this + 0x298 );
   Dependency::deleted_notify((RID*)( lVar8 + 0x80 ));
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   if (uVar5 < *(uint*)( this + 0x284 )) {
      uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 );
      lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8;
      lVar8 = *(long*)( *(long*)( this + 0x270 ) + uVar6 * 8 ) + lVar9;
      if (*(int*)( lVar8 + 0xb0 ) < 0) {
         pthread_mutex_unlock(__mutex);
         uVar6 = 0;
         _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
      }
 else if (iVar7 == *(int*)( lVar8 + 0xb0 )) {
         Dependency::~Dependency((Dependency*)( lVar8 + 0x80 ));
         for (int i = 0; i < 4; i++) {
            if (*(long*)( lVar8 + ( -16*i + 120 ) ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar8 + ( -16*i + 120 ) ) + -16 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *(long*)( lVar8 + ( -16*i + 120 ) );
                  *(undefined8*)( lVar8 + ( -16*i + 120 ) ) = 0;
                  Memory::free_static((void*)( lVar2 + -16 ), false);
               }

            }

         }

         lVar8 = *(long*)( this + 0x278 );
         *(undefined4*)( *(long*)( *(long*)( this + 0x270 ) + uVar6 * 8 ) + 0xb0 + lVar9 ) = 0xffffffff;
         uVar4 = *(int*)( this + 0x288 ) - 1;
         *(uint*)( this + 0x288 ) = uVar4;
         *(uint*)( *(long*)( lVar8 + ( (ulong)uVar4 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) + ( (ulong)uVar4 % ( ulong ) * (uint*)( this + 0x280 ) ) * 4 ) = uVar5;
         uVar5 = pthread_mutex_unlock(__mutex);
         uVar6 = (ulong)uVar5;
      }
 else {
         pthread_mutex_unlock(__mutex);
         uVar6 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      }

   }
 else {
      pthread_mutex_unlock(__mutex);
      uVar6 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
   }

   return uVar6;
}
/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::erase(RID const&) [clone
   .isra.0] */void HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase(HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>> *this, RID *param_1) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint *puVar4;
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
   uint uVar33;
   uint *puVar34;
   int iVar35;
   uint uVar36;
   long lVar37;
   ulong uVar38;
   uint *puVar39;
   ulong uVar40;
   uint *puVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   lVar6 = *(long*)this;
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      lVar7 = *(long*)( this + 0x18 );
      uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar42 = CONCAT44(0, uVar31);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar32 = *(long*)param_1 * 0x3ffff - 1;
      uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
      uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar40 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
         uVar40 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar40 * lVar8;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar42;
      lVar37 = SUB168(auVar11 * auVar21, 8);
      uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
      iVar35 = SUB164(auVar11 * auVar21, 8);
      if (uVar44 != 0) {
         uVar33 = 0;
         do {
            if ((uint)uVar40 == uVar44) {
               lVar9 = *(long*)( this + 8 );
               uVar44 = *(uint*)( lVar9 + lVar37 * 4 );
               uVar32 = (ulong)uVar44;
               if (*(long*)param_1 == *(long*)( lVar6 + uVar32 * 8 )) {
                  lVar10 = *(long*)( this + 0x10 );
                  puVar1 = (uint*)( lVar10 + uVar32 * 4 );
                  uVar33 = *puVar1;
                  uVar40 = (ulong)uVar33;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = ( ulong )(uVar33 + 1) * lVar8;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar42;
                  lVar37 = SUB168(auVar15 * auVar25, 8) * 4;
                  uVar36 = SUB164(auVar15 * auVar25, 8);
                  uVar43 = (ulong)uVar36;
                  puVar39 = (uint*)( lVar7 + lVar37 );
                  if (( *puVar39 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar39 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar36 + uVar31 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,SUB164(auVar17 * auVar27, 8) == 0) {
                     uVar43 = (ulong)uVar33;
                  }
 else {
                     while (true) {
                        puVar34 = (uint*)( lVar37 + lVar9 );
                        puVar4 = (uint*)( lVar9 + uVar40 * 4 );
                        puVar41 = (uint*)( uVar40 * 4 + lVar7 );
                        puVar2 = (undefined4*)( lVar10 + ( ulong ) * puVar34 * 4 );
                        puVar3 = (undefined4*)( lVar10 + ( ulong ) * puVar4 * 4 );
                        uVar5 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar5;
                        uVar33 = *puVar39;
                        *puVar39 = *puVar41;
                        *puVar41 = uVar33;
                        uVar33 = *puVar34;
                        *puVar34 = *puVar4;
                        *puVar4 = uVar33;
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ = ( ulong )((int)uVar43 + 1) * lVar8;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar42;
                        uVar38 = SUB168(auVar20 * auVar30, 8);
                        lVar37 = uVar38 * 4;
                        puVar39 = (uint*)( lVar7 + lVar37 );
                        if (( *puVar39 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar39 * lVar8,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar30, 8) + uVar31 ) - SUB164(auVar18 * auVar28, 8)) * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,SUB164(auVar19 * auVar29, 8) == 0) break;
                        uVar40 = uVar43;
                        uVar43 = uVar38 & 0xffffffff;
                     }
;
                  }

                  *(undefined4*)( lVar7 + uVar43 * 4 ) = 0;
                  uVar31 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar31;
                  if (uVar31 <= uVar44) {
                     return;
                  }

                  uVar33 = *(uint*)( lVar10 + (ulong)uVar31 * 4 );
                  *(undefined8*)( lVar6 + uVar32 * 8 ) = *(undefined8*)( lVar6 + (ulong)uVar31 * 8 );
                  *puVar1 = uVar33;
                  *(uint*)( lVar9 + ( ulong ) * (uint*)( lVar10 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar44;
                  return;
               }

            }

            uVar33 = uVar33 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar8;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar37 = SUB168(auVar12 * auVar22, 8);
            uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
            iVar35 = SUB164(auVar12 * auVar22, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar44 * lVar8,auVar23._8_8_ = 0,auVar23._0_8_ = uVar42,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar13 * auVar23, 8)) * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,uVar33 <= SUB164(auVar14 * auVar24, 8) );
      }

   }

   return;
}
/* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::erase(RID const&) [clone .isra.0] */void HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::erase(HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>> *this, RID *param_1) {
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
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00107029;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00107029:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00107030;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00107030:if (plVar10 != (long*)0x0) {
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
/* RendererRD::LightStorage::get_singleton() */undefined8 RendererRD::LightStorage::get_singleton(void) {
   return singleton;
}
/* RendererRD::LightStorage::free(RID) */undefined8 RendererRD::LightStorage::free(LightStorage *this, ulong param_2) {
   pthread_mutex_t *ppVar1;
   int iVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   ulong uVar6;
   uint uVar7;
   ppVar1 = (pthread_mutex_t*)( this + 0x148 );
   iVar2 = pthread_mutex_lock(ppVar1);
   if (iVar2 != 0) goto LAB_00107672;
   uVar5 = (uint)param_2;
   uVar7 = ( uint )(param_2 >> 0x20);
   if (uVar5 < *(uint*)( this + 0x134 )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(ppVar1);
      }
 else {
         if (( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 ) + 0x88 ) & 0x7fffffff ) == uVar7) {
            pthread_mutex_unlock(ppVar1);
            ( **(code**)( *(long*)this + 400 ) )(this, param_2);
            return 1;
         }

         pthread_mutex_unlock(ppVar1);
         if (uVar5 < *(uint*)( this + 0x18c )) goto LAB_00107295;
         if (uVar5 < *(uint*)( this + 0x1e4 )) {
            uVar3 = ( uint )(( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ));
            uVar4 = ( uint )(( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ));
            goto LAB_001072dc;
         }

      }

   }
 else {
      pthread_mutex_unlock(ppVar1);
      if (uVar5 < *(uint*)( this + 0x18c )) {
         if (param_2 >> 0x20 != 0x7fffffff) {
            LAB_00107295:if (uVar7 == ( *(uint*)( *(long*)( *(long*)( this + 0x178 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48 + 0x40 ) & 0x7fffffff )) {
               ( **(code**)( *(long*)this + 0x268 ) )(this, param_2);
               return 1;
            }

            if (uVar5 < *(uint*)( this + 0x1e4 )) {
               uVar3 = ( uint )(( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ));
               uVar4 = ( uint )(( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ));
               LAB_001072dc:if (( *(uint*)( (ulong)uVar4 * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + (ulong)uVar3 * 8 ) + 0x68 ) & 0x7fffffff ) == uVar7) {
                  ( **(code**)( *(long*)this + 0x288 ) )(this, param_2);
                  return 1;
               }

            }

         }

      }
 else if (uVar5 < *(uint*)( this + 0x1e4 )) {
         uVar3 = ( uint )(( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ));
         uVar4 = ( uint )(( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ));
         if (param_2 >> 0x20 != 0x7fffffff) goto LAB_001072dc;
      }

   }

   ppVar1 = (pthread_mutex_t*)( this + 0x40 );
   iVar2 = pthread_mutex_lock(ppVar1);
   if (iVar2 != 0) goto LAB_00107672;
   if (uVar5 < *(uint*)( this + 0x2c )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(ppVar1);
      }
 else {
         if (( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + 0xe0 ) & 0x7fffffff ) == uVar7) {
            pthread_mutex_unlock(ppVar1);
            ( **(code**)( *(long*)this + 0x40 ) )(this, param_2);
            return 1;
         }

         pthread_mutex_unlock(ppVar1);
         if (uVar5 < *(uint*)( this + 0x84 )) goto LAB_0010737a;
      }

   }
 else {
      pthread_mutex_unlock(ppVar1);
      if (( uVar5 < *(uint*)( this + 0x84 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
         LAB_0010737a:if (( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + 0x490 ) & 0x7fffffff ) == uVar7) {
            ( **(code**)( *(long*)this + 0x148 ) )(this, param_2);
            return 1;
         }

      }

   }

   ppVar1 = (pthread_mutex_t*)( this + 0x298 );
   iVar2 = pthread_mutex_lock(ppVar1);
   if (iVar2 != 0) {
      LAB_00107672:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar2);
   }

   if (uVar5 < *(uint*)( this + 0x284 )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(ppVar1);
         return 0;
      }

      if (( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) + 0xb0 ) & 0x7fffffff ) == uVar7) {
         pthread_mutex_unlock(ppVar1);
         ( **(code**)( *(long*)this + 0x2e0 ) )(this, param_2);
         return 1;
      }

      pthread_mutex_unlock(ppVar1);
      if (*(uint*)( this + 0x2ec ) <= uVar5) {
         if (*(uint*)( this + 0x34c ) <= uVar5) {
            return 0;
         }

         uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 );
         uVar5 = ( uint )(( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ));
         goto LAB_00107470;
      }

   }
 else {
      pthread_mutex_unlock(ppVar1);
      if (*(uint*)( this + 0x2ec ) <= uVar5) {
         if (*(uint*)( this + 0x34c ) <= uVar5) {
            return 0;
         }

         uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 );
         uVar5 = ( uint )(( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ));
         if (param_2 >> 0x20 == 0x7fffffff) {
            return 0;
         }

         goto LAB_00107470;
      }

      if (param_2 >> 0x20 == 0x7fffffff) {
         return 0;
      }

   }

   if (uVar7 == ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2e8 ) ) * 0x40 + *(long*)( *(long*)( this + 0x2d8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2e8 ) ) * 8 ) + 0x38 ) & 0x7fffffff )) {
      ( **(code**)( *(long*)this + 0x378 ) )(this, param_2);
      return 1;
   }

   if (*(uint*)( this + 0x34c ) <= uVar5) {
      return 0;
   }

   uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 );
   uVar5 = ( uint )(( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ));
   LAB_00107470:if (uVar7 == ( *(uint*)( *(long*)( *(long*)( this + 0x338 ) + uVar6 * 8 ) + (ulong)uVar5 * 200 + 0xc0 ) & 0x7fffffff )) {
      ( **(code**)( *(long*)this + 0x390 ) )(this, param_2);
      return 1;
   }

   return 0;
}
/* RendererRD::LightStorage::light_get_dependency(RID) const */long RendererRD::LightStorage::light_get_dependency(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0xb0;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_dependency", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x1c4, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::free_light_data() */void RendererRD::LightStorage::free_light_data(LightStorage *this) {
   long lVar1;
   undefined8 uVar2;
   if (*(long*)( this + 0x110 ) == 0) {
      lVar1 = *(long*)( this + 0xf0 );
   }
 else {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0x110 ));
      lVar1 = *(long*)( this + 0xf0 );
      *(undefined8*)( this + 0x110 ) = 0;
   }

   if (lVar1 == 0) {
      lVar1 = *(long*)( this + 0xf8 );
   }
 else {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0xf0 ));
      lVar1 = *(long*)( this + 0xf8 );
      *(undefined8*)( this + 0xf0 ) = 0;
   }

   if (lVar1 != 0) {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0xf8 ));
      *(undefined8*)( this + 0xf8 ) = 0;
   }

   if (*(void**)( this + 0x108 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x108 ), true);
      *(undefined8*)( this + 0x108 ) = 0;
   }

   if (*(void**)( this + 0xd0 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0xd0 ), true);
      *(undefined8*)( this + 0xd0 ) = 0;
   }

   if (*(void**)( this + 0xd8 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0xd8 ), true);
      *(undefined8*)( this + 0xd8 ) = 0;
   }

   if (*(void**)( this + 0xe0 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0xe0 ), true);
      *(undefined8*)( this + 0xe0 ) = 0;
   }

   if (*(void**)( this + 0xe8 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0xe8 ), true);
      *(undefined8*)( this + 0xe8 ) = 0;
   }

   return;
}
/* RendererRD::LightStorage::set_max_lights(unsigned int) */void RendererRD::LightStorage::set_max_lights(LightStorage *this, uint param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined1 local_48[8];
   long local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(uint*)( this + 0xc0 ) = param_1;
   if (param_1 == 0) {
      LAB_00107cd0:lVar3 = 0;
   }
 else {
      lVar3 = Memory::alloc_static((ulong)param_1 * 0xc0, true);
      if (lVar3 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         goto LAB_00107cd0;
      }

      *(ulong*)( lVar3 + -8 ) = (ulong)param_1;
   }

   *(long*)( this + 0xd0 ) = lVar3;
   uVar4 = RenderingDevice::get_singleton();
   local_40 = 0;
   uVar4 = RenderingDevice::storage_buffer_create(uVar4, param_1 * 0xc0, local_48, 0, 0);
   lVar3 = local_40;
   *(undefined8*)( this + 0xf0 ) = uVar4;
   if (local_40 == 0) {
      LAB_001079c6:uVar5 = ( ulong ) * (uint*)( this + 0xc0 );
      if (uVar5 != 0) goto LAB_001079d6;
      LAB_00107bb9:*(undefined8*)( this + 0xe0 ) = 0;
      LAB_00107bc4:lVar3 = 0;
   }
 else {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001079c6;
      local_40 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
      uVar5 = ( ulong ) * (uint*)( this + 0xc0 );
      if (uVar5 == 0) goto LAB_00107bb9;
      LAB_001079d6:lVar3 = Memory::alloc_static(uVar5 * 0x18, true);
      if (lVar3 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         uVar2 = *(uint*)( this + 0xc0 );
      }
 else {
         *(ulong*)( lVar3 + -8 ) = uVar5;
         uVar2 = *(uint*)( this + 0xc0 );
      }

      uVar5 = (ulong)uVar2;
      *(long*)( this + 0xe0 ) = lVar3;
      if (uVar5 == 0) goto LAB_00107bc4;
      lVar3 = Memory::alloc_static(uVar5 * 0xc0, true);
      if (lVar3 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         lVar3 = 0;
      }
 else {
         *(ulong*)( lVar3 + -8 ) = uVar5;
      }

   }

   *(long*)( this + 0xd8 ) = lVar3;
   uVar4 = RenderingDevice::get_singleton();
   local_40 = 0;
   uVar4 = RenderingDevice::storage_buffer_create(uVar4, param_1 * 0xc0, local_48, 0, 0);
   lVar3 = local_40;
   *(undefined8*)( this + 0xf8 ) = uVar4;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         uVar2 = *(uint*)( this + 0xc0 );
         goto joined_r0x00107b7a;
      }

   }

   uVar2 = *(uint*)( this + 0xc0 );
   joined_r0x00107b7a:uVar5 = (ulong)uVar2;
   if (uVar5 == 0) {
      lVar3 = 0;
   }
 else {
      lVar3 = Memory::alloc_static(uVar5 * 0x18, true);
      if (lVar3 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         lVar3 = 0;
      }
 else {
         *(ulong*)( lVar3 + -8 ) = uVar5;
      }

   }

   *(long*)( this + 0xe8 ) = lVar3;
   *(undefined4*)( this + 0x100 ) = 8;
   lVar3 = Memory::alloc_static(0xe80, true);
   if (lVar3 == 0) {
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
   }
 else {
      *(undefined8*)( lVar3 + -8 ) = 8;
   }

   *(long*)( this + 0x108 ) = lVar3;
   uVar4 = RenderingDevice::get_singleton();
   local_40 = 0;
   uVar4 = RenderingDevice::uniform_buffer_create(uVar4, 0xe80, local_48, 0);
   lVar3 = local_40;
   *(undefined8*)( this + 0x110 ) = uVar4;
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

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::LightStorage::reflection_probe_set_baked_exposure(RID, float) */void RendererRD::LightStorage::reflection_probe_set_baked_exposure(undefined4 param_1, LightStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x54 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_set_baked_exposure", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4a6, "Parameter \"reflection_probe\" is null.", 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_probe_get_resolution(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_resolution(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 4 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_resolution", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4f0, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_baked_exposure(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_baked_exposure(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x54 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_baked_exposure", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4f7, "Parameter \"reflection_probe\" is null.", 0, 0);
   return _LC108;
}
/* RendererRD::LightStorage::reflection_probe_get_intensity(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_intensity(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 8 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_intensity", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x4fe, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_blend_distance(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_blend_distance(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0xc );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_blend_distance", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x505, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_is_interior(RID) const */undefined1 RendererRD::LightStorage::reflection_probe_is_interior(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x44 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_is_interior", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x50c, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_is_box_projection(RID) const */undefined1 RendererRD::LightStorage::reflection_probe_is_box_projection(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x45 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_is_box_projection", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x513, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_ambient_mode(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_ambient_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x10 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_ambient_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x51a, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_ambient_color(RID) const */undefined1  [16] __thiscallRendererRD::LightStorage::reflection_probe_get_ambient_color(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1(*) [16])( lVar2 + 0x14 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_ambient_color", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x520, "Parameter \"reflection_probe\" is null.", 0, 0);
   return ZEXT816(0x3f80000000000000) << 0x40;
}
/* RendererRD::LightStorage::reflection_probe_get_ambient_color_energy(RID) const */undefined4 RendererRD::LightStorage::reflection_probe_get_ambient_color_energy(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x24 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_ambient_color_energy", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x526, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_get_dependency(RID) const */long RendererRD::LightStorage::reflection_probe_get_dependency(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x88 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0x58;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_get_dependency", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x52d, "Parameter \"reflection_probe\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_instance_get_resolution(RID) */undefined4 RendererRD::LightStorage::reflection_probe_instance_get_resolution(LightStorage *this, ulong param_2) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
      iVar1 = *(int*)( lVar3 + 0x68 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         uVar2 = *(ulong*)( lVar3 + 0x10 );
         if (( uVar2 != 0 ) && ( (uint)uVar2 < *(uint*)( this + 0x18c ) )) {
            lVar3 = *(long*)( *(long*)( this + 0x178 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
            iVar1 = *(int*)( lVar3 + 0x40 );
            if (iVar1 == (int)( uVar2 >> 0x20 )) {
               return *(undefined4*)( lVar3 + 4 );
            }

            if (iVar1 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("reflection_probe_instance_get_resolution", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x677, "Parameter \"atlas\" is null.", 0, 0);
         return 0;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_instance_get_resolution", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x674, "Parameter \"rpi\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_instance_get_framebuffer(RID, int) */undefined8 RendererRD::LightStorage::reflection_probe_instance_get_framebuffer(LightStorage *this, ulong param_2, uint param_3) {
   int iVar1;
   ulong uVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x1e4 ) <= (uint)param_2 )) {
      LAB_001088e0:_err_print_error("reflection_probe_instance_get_framebuffer", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x67d, "Parameter \"rpi\" is null.", 0, 0);
      return 0;
   }

   lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
   if (*(int*)( lVar5 + 0x68 ) != (int)( param_2 >> 0x20 )) {
      if (*(int*)( lVar5 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001088e0;
   }

   if (param_3 < 6) {
      uVar2 = *(ulong*)( lVar5 + 0x10 );
      if (( uVar2 != 0 ) && ( (uint)uVar2 < *(uint*)( this + 0x18c ) )) {
         lVar6 = *(long*)( *(long*)( this + 0x178 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
         iVar1 = *(int*)( lVar6 + 0x40 );
         if (iVar1 == (int)( uVar2 >> 0x20 )) {
            lVar4 = (long)*(int*)( lVar5 + 8 );
            lVar5 = *(long*)( lVar6 + 0x28 );
            if (lVar4 < 0) {
               if (lVar5 != 0) {
                  lVar6 = *(long*)( lVar5 + -8 );
                  goto LAB_0010888d;
               }

            }
 else if (lVar5 != 0) {
               lVar6 = *(long*)( lVar5 + -8 );
               if (lVar4 < lVar6) {
                  return *(undefined8*)( lVar5 + lVar4 * 0x78 + 0x48 + (long)(int)param_3 * 8 );
               }

               goto LAB_0010888d;
            }

            lVar6 = 0;
            LAB_0010888d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar6, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("reflection_probe_instance_get_framebuffer", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x681, "Parameter \"atlas\" is null.", 0, 0);
   }
 else {
      _err_print_index_error("reflection_probe_instance_get_framebuffer", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x67e, (long)(int)param_3, 6, "p_index", "6", "", false, false);
   }

   return 0;
}
/* RendererRD::LightStorage::reflection_probe_instance_get_depth_framebuffer(RID, int) */undefined8 RendererRD::LightStorage::reflection_probe_instance_get_depth_framebuffer(LightStorage *this, ulong param_2, uint param_3) {
   int iVar1;
   ulong uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
      iVar1 = *(int*)( lVar3 + 0x68 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (param_3 < 6) {
            uVar2 = *(ulong*)( lVar3 + 0x10 );
            if (( uVar2 != 0 ) && ( (uint)uVar2 < *(uint*)( this + 0x18c ) )) {
               lVar3 = *(long*)( *(long*)( this + 0x178 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
               iVar1 = *(int*)( lVar3 + 0x40 );
               if (iVar1 == (int)( uVar2 >> 0x20 )) {
                  return *(undefined8*)( lVar3 + 0x18 );
               }

               if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("reflection_probe_instance_get_depth_framebuffer", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x68b, "Parameter \"atlas\" is null.", 0, 0);
         }
 else {
            _err_print_index_error("reflection_probe_instance_get_depth_framebuffer", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x688, (long)(int)param_3, 6, "p_index", "6", "", false, false);
         }

         return 0;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_instance_get_depth_framebuffer", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x687, "Parameter \"rpi\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::reflection_probe_instance_get_cluster_builder(RID,
   ClusterBuilderSharedDataRD*) */long RendererRD::LightStorage::reflection_probe_instance_get_cluster_builder(long param_1, ulong param_2) {
   int iVar1;
   ulong uVar2;
   code *pcVar3;
   ClusterBuilderRD *this;
   long lVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x1e4 ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( param_1 + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x1e0 ) ) * 8 );
      iVar1 = *(int*)( lVar4 + 0x68 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         uVar2 = *(ulong*)( lVar4 + 0x10 );
         if (( uVar2 != 0 ) && ( (uint)uVar2 < *(uint*)( param_1 + 0x18c ) )) {
            lVar4 = *(long*)( *(long*)( param_1 + 0x178 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x188 ) ) * 8 ) + ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x188 ) ) * 0x48;
            if (*(int*)( lVar4 + 0x40 ) == (int)( uVar2 >> 0x20 )) {
               if (*(long*)( lVar4 + 0x38 ) != 0) {
                  return *(long*)( lVar4 + 0x38 );
               }

               this(ClusterBuilderRD * operator_new(0x150, ""));
               ClusterBuilderRD::ClusterBuilderRD(this);
               *(ClusterBuilderRD**)( lVar4 + 0x38 ) = this;
               ClusterBuilderRD::set_shared((ClusterBuilderSharedDataRD*)this);
               ClusterBuilderRD::setup(*(undefined8*)( lVar4 + 0x38 ), CONCAT44(*(undefined4*)( lVar4 + 4 ), *(undefined4*)( lVar4 + 4 )), *(undefined4*)( param_1 + 8 ), 0, 0, 0);
               return *(long*)( lVar4 + 0x38 );
            }

            if (*(int*)( lVar4 + 0x40 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("reflection_probe_instance_get_cluster_builder", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x693, "reflection probe has no reflection atlas! Bug?", 0, 0);
         return 0;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2 >> 0x20);
      }

   }

   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* RendererRD::LightStorage::free_reflection_data() */void RendererRD::LightStorage::free_reflection_data(LightStorage *this) {
   undefined8 uVar1;
   if (*(long*)( this + 0x238 ) != 0) {
      uVar1 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar1, *(undefined8*)( this + 0x238 ));
      *(undefined8*)( this + 0x238 ) = 0;
   }

   if (*(void**)( this + 0x228 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x228 ), true);
      *(undefined8*)( this + 0x228 ) = 0;
   }

   if (*(void**)( this + 0x230 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x230 ), true);
      *(undefined8*)( this + 0x230 ) = 0;
   }

   return;
}
/* RendererRD::LightStorage::set_max_reflection_probes(unsigned int) */void RendererRD::LightStorage::set_max_reflection_probes(LightStorage *this, uint param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   undefined1 local_38[8];
   long local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(uint*)( this + 0x220 ) = param_1;
   if (param_1 == 0) {
      *(undefined8*)( this + 0x228 ) = 0;
   }
 else {
      lVar3 = Memory::alloc_static((ulong)param_1 * 0x90, true);
      if (lVar3 == 0) {
         _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
         uVar2 = *(uint*)( this + 0x220 );
      }
 else {
         *(ulong*)( lVar3 + -8 ) = (ulong)param_1;
         uVar2 = *(uint*)( this + 0x220 );
      }

      uVar5 = (ulong)uVar2;
      *(long*)( this + 0x228 ) = lVar3;
      if (uVar5 != 0) {
         lVar3 = Memory::alloc_static(uVar5 << 4, true);
         if (lVar3 == 0) {
            _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
            lVar3 = 0;
         }
 else {
            *(ulong*)( lVar3 + -8 ) = uVar5;
         }

         goto LAB_00108ef1;
      }

   }

   lVar3 = 0;
   LAB_00108ef1:*(long*)( this + 0x230 ) = lVar3;
   uVar4 = RenderingDevice::get_singleton();
   local_30 = 0;
   uVar4 = RenderingDevice::storage_buffer_create(uVar4, *(int*)( this + 0x220 ) * 0x90, local_38, 0, 0);
   lVar3 = local_30;
   *(undefined8*)( this + 0x238 ) = uVar4;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::update_reflection_probe_buffer(RenderDataRD*, PagedArray<RID> const&,
   Transform3D const&, RID) */void RendererRD::LightStorage::update_reflection_probe_buffer(long param_1, long param_2, long param_3, Transform3D *param_4) {
   ReflectionProbeInstanceSort *__dest;
   undefined4 uVar1;
   byte bVar2;
   undefined4 uVar3;
   ulong uVar4;
   ReflectionProbeInstanceSort *__src;
   undefined8 uVar5;
   size_t sVar6;
   long *plVar7;
   long *plVar8;
   char cVar9;
   uint *puVar10;
   code *pcVar11;
   undefined8 *puVar12;
   undefined8 uVar13;
   ulong *puVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   size_t __n;
   ulong uVar18;
   ulong uVar19;
   ReflectionProbeInstanceSort *pRVar20;
   uint uVar21;
   ReflectionProbeInstanceSort *pRVar22;
   long lVar23;
   long in_FS_OFFSET;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   uint uVar28;
   float local_e4;
   float local_e0;
   float local_dc;
   ulong local_d8;
   ulong uStack_d0;
   ulong local_c8;
   ulong uStack_c0;
   ulong local_b8;
   ulong uStack_b0;
   undefined4 local_a8;
   undefined4 uStack_a4;
   undefined4 local_a0;
   undefined4 uStack_9c;
   undefined4 local_98;
   undefined4 local_94;
   undefined4 local_90;
   undefined4 local_8c;
   undefined4 local_88;
   undefined8 local_84;
   undefined4 local_7c;
   Transform3D local_78[56];
   long local_40;
   plVar8 = ForwardIDStorage::singleton;
   uVar19 = *(ulong*)( param_3 + 0x28 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)( param_1 + 0x224 ) = 0;
   if ((int)uVar19 == 0) {
      LAB_00109200:pcVar11 = *(code**)( *plVar8 + 0x28 );
      if (pcVar11 != ForwardIDStorage::uses_forward_ids) {
         LAB_00109218:cVar9 = ( *pcVar11 )(plVar8);
         goto LAB_00109221;
      }

   }
 else {
      uVar18 = 0;
      uVar21 = 0;
      fVar25 = _LC54;
      uVar28 = _LC53;
      do {
         if (*(uint*)( param_1 + 0x220 ) == uVar21) break;
         if (uVar19 <= uVar18) {
            _err_print_index_error("operator[]", "./core/templates/paged_array.h", 0xa9, uVar18 & 0xffffffff, uVar19, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar11 = (code*)invalidInstructionException();
            ( *pcVar11 )();
         }

         uVar4 = *(ulong*)( *(long*)( *(long*)( param_3 + 8 ) + ( uVar18 >> ( ( byte ) * (undefined4*)( param_3 + 0x1c ) & 0x3f ) ) * 8 ) + ( ulong )((uint)uVar18 & *(uint*)( param_3 + 0x20 )) * 8 );
         if (( uVar4 != 0 ) && ( (uint)uVar4 < *(uint*)( param_1 + 0x1e4 ) )) {
            puVar14 = (ulong*)( ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( param_1 + 0x1d0 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x1e0 ) ) * 8 ) );
            if ((int)puVar14[0xd] == (int)( uVar4 >> 0x20 )) {
               if (*puVar14 == 0) goto LAB_00115ca6;
               uVar19 = *puVar14;
               if (*(uint*)( param_1 + 0x134 ) <= (uint)uVar19) goto LAB_00115ca6;
               lVar16 = ( ( uVar19 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x130 ) ) * 0x90 + *(long*)( *(long*)( param_1 + 0x120 ) + ( ( uVar19 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x130 ) ) * 8 );
               if (*(int*)( lVar16 + 0x88 ) != (int)( uVar19 >> 0x20 )) {
                  if (*(int*)( lVar16 + 0x88 ) + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( param_1 + 0x120 ));
                  }

                  goto LAB_00115ca6;
               }

               fVar27 = *(float*)( lVar16 + 0x30 ) * fVar25;
               uVar19 = *(ulong*)( param_3 + 0x28 );
               fVar24 = *(float*)( lVar16 + 0x2c ) * fVar25;
               puVar10 = (uint*)( ( ulong ) * (uint*)( param_1 + 0x224 ) * 0x10 + *(long*)( param_1 + 0x230 ) );
               fVar26 = *(float*)( lVar16 + 0x34 ) * fVar25;
               uVar21 = *(uint*)( param_1 + 0x224 ) + 1;
               *(ulong**)( puVar10 + 2 ) = puVar14;
               *puVar10 = (uint)SQRT(fVar24 * fVar24 + fVar27 * fVar27 + fVar26 * fVar26) ^ uVar28;
               *(uint*)( param_1 + 0x224 ) = uVar21;
            }
 else if ((int)puVar14[0xd] + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               uVar21 = *(uint*)( param_1 + 0x224 );
               uVar19 = *(ulong*)( param_3 + 0x28 );
               fVar25 = _LC54;
               uVar28 = _LC53;
            }

         }

         uVar18 = uVar18 + 1;
      }
 while ( (uint)uVar18 < (uint)uVar19 );
      if (uVar21 == 0) goto LAB_00109200;
      uVar19 = (ulong)uVar21;
      __src = *(ReflectionProbeInstanceSort**)( param_1 + 0x230 );
      if (uVar21 == 1) {
         SortArray<RendererRD::LightStorage::ReflectionProbeInstanceSort,_DefaultComparator<RendererRD::LightStorage::ReflectionProbeInstanceSort>,true>::introsort(0, 1, __src, 0);
      }
 else {
         lVar16 = 0;
         uVar18 = uVar19;
         do {
            uVar18 = (long)uVar18 >> 1;
            lVar16 = lVar16 + 1;
         }
 while ( uVar18 != 1 );
         SortArray<RendererRD::LightStorage::ReflectionProbeInstanceSort,_DefaultComparator<RendererRD::LightStorage::ReflectionProbeInstanceSort>,true>::introsort(0, uVar19, __src, lVar16 * 2);
         __dest = __src + 0x10;
         if (uVar19 < 0x11) {
            uVar18 = 1;
            pRVar20 = __dest;
            do {
               fVar25 = *(float*)pRVar20;
               uVar13 = *(undefined8*)( pRVar20 + 8 );
               if (fVar25 < *(float*)__src) {
                  memmove(__dest, __src, uVar18 << 4);
                  *(undefined8*)( __src + 8 ) = uVar13;
                  *(float*)__src = fVar25;
               }
 else {
                  pRVar22 = pRVar20;
                  if (fVar25 < *(float*)( pRVar20 + -0x10 )) {
                     if (uVar18 - 1 != 0) {
                        lVar23 = uVar18 << 4;
                        lVar16 = uVar18 - 1;
                        do {
                           fVar24 = *(float*)( __src + lVar23 + -0x20 );
                           lVar17 = lVar16 + -1;
                           uVar5 = *(undefined8*)( __src + lVar23 + -0x10 + 8 );
                           *(undefined8*)( __src + lVar23 ) = *(undefined8*)( __src + lVar23 + -0x10 );
                           *(undefined8*)( __src + lVar23 + 8 ) = uVar5;
                           if (fVar24 <= fVar25) {
                              pRVar22 = __src + lVar16 * 0x10;
                              goto LAB_001099e2;
                           }

                           lVar23 = lVar23 + -0x10;
                           lVar16 = lVar17;
                        }
 while ( lVar17 != 0 );
                     }

                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     pRVar22 = __dest;
                  }

                  LAB_001099e2:*(undefined8*)( pRVar22 + 8 ) = uVar13;
                  *(float*)pRVar22 = fVar25;
               }

               uVar18 = uVar18 + 1;
               pRVar20 = pRVar20 + 0x10;
            }
 while ( uVar19 != uVar18 );
         }
 else {
            __n = 0x10;
            pRVar20 = __dest;
            lVar16 = 0;
            do {
               fVar25 = *(float*)pRVar20;
               lVar23 = lVar16 + 1;
               uVar13 = *(undefined8*)( pRVar20 + 8 );
               if (fVar25 < *(float*)__src) {
                  memmove(__dest, __src, __n);
                  *(undefined8*)( __src + 8 ) = uVar13;
                  *(float*)__src = fVar25;
               }
 else {
                  pRVar22 = pRVar20;
                  sVar6 = __n;
                  if (fVar25 < *(float*)( pRVar20 + -0x10 )) {
                     while (lVar16 != 0) {
                        fVar24 = *(float*)( __src + ( sVar6 - 0x20 ) );
                        uVar5 = *(undefined8*)( __src + ( sVar6 - 0x10 ) + 8 );
                        *(undefined8*)( __src + sVar6 ) = *(undefined8*)( __src + ( sVar6 - 0x10 ) );
                        *(undefined8*)( __src + sVar6 + 8 ) = uVar5;
                        if (fVar24 <= fVar25) {
                           pRVar22 = __src + lVar16 * 0x10;
                           goto LAB_001098d6;
                        }

                        sVar6 = sVar6 - 0x10;
                        lVar16 = lVar16 + -1;
                     }
;
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     pRVar22 = __dest;
                  }

                  LAB_001098d6:*(undefined8*)( pRVar22 + 8 ) = uVar13;
                  *(float*)pRVar22 = fVar25;
               }

               __n = __n + 0x10;
               pRVar20 = pRVar20 + 0x10;
               lVar16 = lVar23;
            }
 while ( lVar23 != 0xf );
            pRVar20 = __src + 0x100;
            uVar18 = 0x10;
            lVar16 = -0x100;
            do {
               fVar25 = *(float*)pRVar20;
               lVar17 = uVar18 << 4;
               uVar13 = *(undefined8*)( pRVar20 + 8 );
               lVar23 = uVar18 - 1;
               pRVar22 = pRVar20;
               if (fVar25 < *(float*)( pRVar20 + -0x10 )) {
                  do {
                     fVar24 = *(float*)( __src + lVar17 + -0x20 );
                     lVar15 = lVar23 + -1;
                     uVar5 = *(undefined8*)( pRVar20 + lVar17 + lVar16 + -0x10 + 8 );
                     *(undefined8*)( __src + lVar17 ) = *(undefined8*)( pRVar20 + lVar17 + lVar16 + -0x10 );
                     *(undefined8*)( __src + lVar17 + 8 ) = uVar5;
                     if (fVar24 <= fVar25) {
                        pRVar22 = __src + lVar23 * 0x10;
                        goto LAB_00109ab0;
                     }

                     lVar17 = lVar17 + -0x10;
                     lVar23 = lVar15;
                  }
 while ( lVar15 != 0 );
                  _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                  pRVar22 = __dest;
               }

               LAB_00109ab0:uVar18 = uVar18 + 1;
               *(undefined8*)( pRVar22 + 8 ) = uVar13;
               pRVar20 = pRVar20 + 0x10;
               lVar16 = lVar16 + -0x10;
               *(float*)pRVar22 = fVar25;
            }
 while ( uVar19 != uVar18 );
         }

      }

      pcVar11 = *(code**)( *plVar8 + 0x28 );
      if (pcVar11 != ForwardIDStorage::uses_forward_ids) goto LAB_00109218;
      cVar9 = '\0';
      LAB_00109221:if (*(int*)( param_1 + 0x224 ) != 0) {
         uVar19 = 0;
         LAB_001093f8:do {
            puVar14 = *(ulong**)( uVar19 * 0x10 + *(long*)( param_1 + 0x230 ) + 8 );
            uVar18 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
            puVar14[5] = uVar18;
            if (( cVar9 != '\0' ) && ( *(code**)( *plVar8 + 0x20 ) != ForwardIDStorage::map_forward_id )) {
               ( **(code**)( *plVar8 + 0x20 ) )(plVar8, 2, *(undefined4*)( (long)puVar14 + 0x34 ), uVar19 & 0xffffffff, uVar18);
            }

            if (*puVar14 == 0) goto LAB_00115ca6;
            uVar18 = *puVar14;
            if (*(uint*)( param_1 + 0x134 ) <= (uint)uVar18) goto LAB_00115ca6;
            lVar16 = ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x130 ) ) * 0x90 + *(long*)( *(long*)( param_1 + 0x120 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x130 ) ) * 8 );
            if (*(int*)( lVar16 + 0x88 ) != (int)( uVar18 >> 0x20 )) {
               uVar21 = *(int*)( lVar16 + 0x88 ) + 0x80000000;
               if (uVar21 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar21);
               }

               LAB_00115ca6:/* WARNING: Does not return */pcVar11 = (code*)invalidInstructionException();
               ( *pcVar11 )();
            }

            uVar3 = *(undefined4*)( lVar16 + 0x4c );
            uVar18 = puVar14[1];
            local_dc = _LC54 * *(float*)( lVar16 + 0x34 );
            puVar12 = (undefined8*)( uVar19 * 0x90 + *(long*)( param_1 + 0x228 ) );
            local_e0 = _LC54 * *(float*)( lVar16 + 0x30 );
            local_e4 = _LC54 * *(float*)( lVar16 + 0x2c );
            *(undefined4*)( puVar14 + 6 ) = uVar3;
            *puVar12 = CONCAT44(local_e0, local_e4);
            puVar12[1] = CONCAT44((float)(int)uVar18, local_dc);
            uVar13 = *(undefined8*)( lVar16 + 0x38 );
            uVar1 = *(undefined4*)( lVar16 + 0x40 );
            *(undefined4*)( (long)puVar12 + 0x1c ) = uVar3;
            puVar12[2] = uVar13;
            *(undefined4*)( puVar12 + 3 ) = uVar1;
            *(undefined8*)( (long)puVar12 + 0x2c ) = *(undefined8*)( lVar16 + 8 );
            *(undefined4*)( (long)puVar12 + 0x3c ) = *(undefined4*)( lVar16 + 0x10 );
            *(uint*)( (long)puVar12 + 0x34 ) = ( uint )(*(byte*)( lVar16 + 0x44 ) ^ 1);
            bVar2 = *(byte*)( lVar16 + 0x45 );
            *(undefined4*)( puVar12 + 8 ) = 0x3f800000;
            *(uint*)( puVar12 + 7 ) = (uint)bVar2;
            if (*(long*)( param_2 + 0x1c8 ) != 0) {
               fVar25 = (float)RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor(RenderingServerGlobals::camera_attributes, *(undefined8*)( param_2 + 0x1c8 ));
               *(float*)( puVar12 + 8 ) = fVar25 / *(float*)( lVar16 + 0x54 );
            }

            fVar25 = *(float*)( lVar16 + 0x1c );
            if (fVar25 < _LC159) {
               fVar25 = fVar25 * _LC160;
            }
 else {
               fVar25 = powf((float)( ( (double)fVar25 + __LC161 ) * __LC162 ), _LC163);
            }

            fVar24 = *(float*)( lVar16 + 0x18 );
            if (_LC159 <= fVar24) {
               fVar24 = powf((float)( ( (double)fVar24 + __LC161 ) * __LC162 ), _LC163);
            }
 else {
               fVar24 = _LC160 * fVar24;
            }

            fVar26 = *(float*)( lVar16 + 0x14 );
            if (_LC159 <= fVar26) {
               fVar26 = powf((float)( ( (double)fVar26 + __LC161 ) * __LC162 ), _LC163);
            }
 else {
               fVar26 = fVar26 * _LC160;
            }

            fVar27 = *(float*)( lVar16 + 0x24 );
            puVar12[4] = CONCAT44(fVar24 * fVar27, fVar26 * fVar27);
            local_d8 = puVar14[7];
            uStack_d0 = puVar14[8];
            local_c8 = puVar14[9];
            uStack_c0 = puVar14[10];
            local_b8 = puVar14[0xb];
            uStack_b0 = puVar14[0xc];
            *(float*)( puVar12 + 5 ) = fVar27 * fVar25;
            Transform3D::operator *(local_78, param_4);
            Transform3D::inverse();
            plVar7 = RendererSceneRenderRD::singleton;
            *(undefined4*)( (long)puVar12 + 0x5c ) = 0;
            *(undefined4*)( (long)puVar12 + 0x6c ) = 0;
            lVar16 = *plVar7;
            *(undefined4*)( (long)puVar12 + 0x7c ) = 0;
            puVar12[0x10] = local_84;
            pcVar11 = *(code**)( lVar16 + 0x228 );
            *(undefined4*)( (long)puVar12 + 0x8c ) = 0x3f800000;
            puVar12[10] = CONCAT44(uStack_9c, local_a8);
            *(undefined4*)( puVar12 + 0xb ) = local_90;
            *(undefined4*)( puVar12 + 0xc ) = uStack_a4;
            *(undefined4*)( (long)puVar12 + 100 ) = local_98;
            *(undefined4*)( puVar12 + 0xd ) = local_8c;
            *(undefined4*)( puVar12 + 0xe ) = local_a0;
            *(undefined4*)( (long)puVar12 + 0x74 ) = local_94;
            *(undefined4*)( puVar12 + 0xf ) = local_88;
            *(undefined4*)( puVar12 + 0x11 ) = local_7c;
            if (pcVar11 != RendererSceneRenderRD::setup_added_reflection_probe) {
               uVar19 = uVar19 + 1;
               ( *pcVar11 )(plVar7, &local_d8, &local_e4);
               uVar21 = *(uint*)( param_1 + 0x224 );
               if (uVar21 <= (uint)uVar19) break;
               goto LAB_001093f8;
            }

            uVar21 = *(uint*)( param_1 + 0x224 );
            uVar19 = uVar19 + 1;
         }
 while ( (uint)uVar19 < uVar21 );
         if (uVar21 != 0) {
            uVar13 = RenderingDevice::get_singleton();
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               RenderingDevice::buffer_update(uVar13, *(undefined8*)( param_1 + 0x238 ), 0, *(int*)( param_1 + 0x224 ) * 0x90, *(undefined8*)( param_1 + 0x228 ));
               return;
            }

            goto LAB_00109b42;
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109b42:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererRD::LightStorage::get_reflection_probe_color_format() */void RendererRD::LightStorage::get_reflection_probe_color_format(void) {
   /* WARNING: Could not recover jumptable at 0x00109b5e. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *RendererSceneRenderRD::singleton + 0x250 ) )();
   return;
}
/* RendererRD::LightStorage::get_reflection_probe_color_usage_bits() */int RendererRD::LightStorage::get_reflection_probe_color_usage_bits(void) {
   char cVar1;
   cVar1 = ( **(code**)( *RendererSceneRenderRD::singleton + 600 ) )();
   return ( -(uint)(cVar1 == '\0') & 0xfffffff8 ) + 0xb;
}
/* RendererRD::LightStorage::get_reflection_probe_depth_format() */int RendererRD::LightStorage::get_reflection_probe_depth_format(void) {
   byte bVar1;
   undefined8 uVar2;
   uVar2 = RenderingDevice::get_singleton();
   bVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar2, 0x7d, 4);
   return bVar1 + 0x7c;
}
/* RendererRD::LightStorage::get_reflection_probe_depth_usage_bits() */undefined8 RendererRD::LightStorage::get_reflection_probe_depth_usage_bits(void) {
   return 5;
}
/* RendererRD::LightStorage::lightmap_get_dependency(RID) const */long RendererRD::LightStorage::lightmap_get_dependency(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xb0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0x80;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_get_dependency", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x7a9, "Parameter \"lm\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::_shadow_atlas_find_shadow(RendererRD::LightStorage::ShadowAtlas*, int*,
   int, int, unsigned long, int&, int&) */undefined8 RendererRD::LightStorage::_shadow_atlas_find_shadow(LightStorage *this, ShadowAtlas *param_1, int *param_2, int param_3, int param_4, ulong param_5, int *param_6, int *param_7) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   int iVar4;
   long lVar5;
   ulong *puVar6;
   long lVar7;
   int iVar8;
   int iVar9;
   ulong uVar10;
   if (param_3 + -1 < 0) {
      return 0;
   }

   lVar7 = (long)( param_3 + -1 );
   do {
      iVar1 = param_2[lVar7];
      if (*(int*)( param_1 + (long)iVar1 * 0x18 ) == param_4) {
         return 0;
      }

      puVar6 = *(ulong**)( param_1 + (long)iVar1 * 0x18 + 0x10 );
      if (( puVar6 != (ulong*)0x0 ) && ( iVar4= (int)puVar6[-1],0 < iVar4 )) {
         iVar8 = 0;
         uVar10 = 0;
         iVar9 = -1;
         do {
            while (true) {
               uVar3 = *puVar6;
               if (uVar3 == 0) goto LAB_00109e94;
               if ((uint)uVar3 < *(uint*)( this + 0x84 )) break;
               LAB_00109dcb:iVar8 = iVar8 + 1;
               puVar6 = puVar6 + 4;
               _err_print_error("_shadow_atlas_find_shadow", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x8ca, "Condition \"!sli\" is true. Continuing.", 0);
               if (iVar4 == iVar8) goto LAB_00109e10;
            }
;
            lVar5 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
            iVar2 = *(int*)( lVar5 + 0x490 );
            if (iVar2 != (int)( uVar3 >> 0x20 )) {
               if (iVar2 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00109dcb;
            }

            uVar3 = *(ulong*)( lVar5 + 0x430 );
            if (( ( uVar3 != *(ulong*)( RendererSceneRenderRD::singleton + 0x2498 ) ) && ( *(ulong*)( this + 0x328 ) <= param_5 - puVar6[3] ) ) && ( ( uVar3 < uVar10 || ( iVar9 == -1 ) ) )) {
               uVar10 = uVar3;
               iVar9 = iVar8;
            }

            iVar8 = iVar8 + 1;
            puVar6 = puVar6 + 4;
         }
 while ( iVar4 != iVar8 );
         LAB_00109e10:iVar8 = iVar9;
         if (iVar9 != -1) {
            LAB_00109e94:*param_6 = iVar1;
            *param_7 = iVar8;
            return 1;
         }

      }

      lVar7 = lVar7 + -1;
      if ((int)lVar7 < 0) {
         return 0;
      }

   }
 while ( true );
}
/* RendererRD::LightStorage::_shadow_atlas_find_omni_shadows(RendererRD::LightStorage::ShadowAtlas*,
   int*, int, int, unsigned long, int&, int&) */undefined8 RendererRD::LightStorage::_shadow_atlas_find_omni_shadows(LightStorage *this, ShadowAtlas *param_1, int *param_2, int param_3, int param_4, ulong param_5, int *param_6, int *param_7) {
   int iVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   long lVar5;
   ulong *puVar6;
   ulong uVar7;
   int iVar8;
   int iVar9;
   int iVar10;
   long local_60;
   if (param_3 + -1 < 0) {
      return 0;
   }

   local_60 = (long)( param_3 + -1 );
   do {
      iVar1 = param_2[local_60];
      if (*(int*)( param_1 + (long)iVar1 * 0x18 ) == param_4) {
         return 0;
      }

      puVar6 = *(ulong**)( param_1 + (long)iVar1 * 0x18 + 0x10 );
      if (( puVar6 != (ulong*)0x0 ) && ( 1 < (int)puVar6[-1] )) {
         iVar10 = (int)puVar6[-1] + -1;
         uVar7 = 0;
         iVar9 = -1;
         iVar8 = 0;
         LAB_00109f70:do {
            uVar4 = *puVar6;
            if (uVar4 == 0) {
               LAB_00109fdc:uVar3 = puVar6[4];
               if (uVar3 == 0) {
                  LAB_0010a048:if (( iVar9 == -1 ) || ( uVar4 < uVar7 )) {
                     iVar9 = iVar8;
                     if (uVar4 == 0) goto LAB_0010a071;
                     iVar8 = iVar8 + 1;
                     puVar6 = puVar6 + 4;
                     uVar7 = uVar4;
                     if (iVar8 == iVar10) goto LAB_0010a071;
                     goto LAB_00109f70;
                  }

               }
 else {
                  if ((uint)uVar3 < *(uint*)( this + 0x84 )) {
                     lVar5 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
                     iVar2 = *(int*)( lVar5 + 0x490 );
                     if (iVar2 == (int)( uVar3 >> 0x20 )) {
                        lVar5 = *(long*)( lVar5 + 0x430 );
                        if (( lVar5 == *(long*)( RendererSceneRenderRD::singleton + 0x2498 ) ) || ( param_5 - puVar6[7] < *(ulong*)( this + 0x328 ) )) goto LAB_0010a053;
                        uVar4 = uVar4 + lVar5;
                        goto LAB_0010a048;
                     }

                     if (iVar2 + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }

                  }

                  _err_print_error("_shadow_atlas_find_omni_shadows", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x90d, "Condition \"!sli\" is true. Continuing.", 0);
               }

            }
 else {
               if ((uint)uVar4 < *(uint*)( this + 0x84 )) {
                  lVar5 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
                  iVar2 = *(int*)( lVar5 + 0x490 );
                  if (iVar2 == (int)( uVar4 >> 0x20 )) {
                     uVar4 = *(ulong*)( lVar5 + 0x430 );
                     if (( uVar4 != *(ulong*)( RendererSceneRenderRD::singleton + 0x2498 ) ) && ( *(ulong*)( this + 0x328 ) <= param_5 - puVar6[3] )) goto LAB_00109fdc;
                     goto LAB_0010a053;
                  }

                  if (iVar2 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               _err_print_error("_shadow_atlas_find_omni_shadows", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x8fe, "Condition \"!sli\" is true. Continuing.", 0);
            }

            LAB_0010a053:iVar8 = iVar8 + 1;
            puVar6 = puVar6 + 4;
         }
 while ( iVar10 != iVar8 );
         if (iVar9 != -1) {
            LAB_0010a071:*param_6 = iVar1;
            *param_7 = iVar9;
            return 1;
         }

      }

      local_60 = local_60 + -1;
      if ((int)local_60 < 0) {
         return 0;
      }

   }
 while ( true );
}
/* RendererRD::LightStorage::get_shadow_atlas_depth_format(bool) */char RendererRD::LightStorage::get_shadow_atlas_depth_format(bool param_1) {
   return ( -!param_1 & 2U ) + 0x7b;
}
/* RendererRD::LightStorage::get_shadow_atlas_depth_usage_bits() */undefined8 RendererRD::LightStorage::get_shadow_atlas_depth_usage_bits(void) {
   return 5;
}
/* RendererRD::LightStorage::get_directional_shadow_rect() */undefined1  [16] __thiscallRendererRD::LightStorage::get_directional_shadow_rect(LightStorage *this) {
   uint uVar1;
   int iVar2;
   int iVar3;
   int iVar4;
   ulong uVar5;
   int iVar6;
   ulong uVar7;
   undefined1 auVar8[16];
   iVar3 = *(int*)( this + 0x398 );
   iVar6 = *(int*)( this + 0x3a4 );
   uVar1 = *(uint*)( this + 0x39c );
   uVar5 = (ulong)uVar1;
   if (iVar3 < 2) {
      iVar3 = 0;
      uVar7 = uVar5;
   }
 else {
      iVar2 = 1;
      iVar4 = 1;
      do {
         while (iVar2 == iVar4) {
            iVar4 = iVar2 * 2;
            if (iVar3 <= iVar2 * iVar4) goto LAB_0010a28d;
         }
;
         iVar2 = iVar2 * 2;
      }
 while ( iVar2 * iVar4 < iVar3 );
      LAB_0010a28d:uVar5 = (long)(int)uVar1 / (long)iVar2 & 0xffffffff;
      iVar3 = ( iVar6 % iVar4 ) * (int)( (long)(int)uVar1 / (long)iVar4 );
      uVar7 = (long)(int)uVar1 / (long)iVar4 & 0xffffffff;
      iVar6 = iVar6 / iVar4;
   }

   auVar8._8_8_ = uVar7 | uVar5 << 0x20;
   auVar8._4_4_ = iVar6 * (int)uVar5;
   auVar8._0_4_ = iVar3;
   return auVar8;
}
/* RendererRD::LightStorage::get_cubemap_depth_format() */int RendererRD::LightStorage::get_cubemap_depth_format(void) {
   byte bVar1;
   undefined8 uVar2;
   uVar2 = RenderingDevice::get_singleton();
   bVar1 = RenderingDevice::texture_is_format_supported_for_usage(uVar2, 0x7d, 4);
   return bVar1 + 0x7c;
}
/* RendererRD::LightStorage::get_cubemap_depth_usage_bits() */undefined8 RendererRD::LightStorage::get_cubemap_depth_usage_bits(void) {
   return 5;
}
/* RendererRD::LightStorage::get_shadow_cubemaps_used() const */LightStorage RendererRD::LightStorage::get_shadow_cubemaps_used(LightStorage *this) {
   return this[0x3d8];
}
/* RendererRD::LightStorage::get_shadow_dual_paraboloid_used() const */LightStorage RendererRD::LightStorage::get_shadow_dual_paraboloid_used(LightStorage *this) {
   return this[0x3d9];
}
/* RendererRD::LightStorage::lightmap_set_textures(RID, RID, bool) */void RendererRD::LightStorage::lightmap_set_textures(LightStorage *this, ulong param_2, ulong param_3, undefined1 param_4) {
   long *plVar1;
   LightStorage LVar2;
   ulong uVar3;
   long lVar4;
   code *pcVar5;
   char *pcVar6;
   long lVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   ulong *puVar11;
   long lVar12;
   undefined8 uVar13;
   long lVar14;
   long in_FS_OFFSET;
   ulong local_80[2];
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80[0] = param_2;
   lVar8 = RendererRD::TextureStorage::get_singleton();
   if (( local_80[0] != 0 ) && ( (uint)local_80[0] < *(uint*)( this + 0x284 ) )) {
      puVar11 = (ulong*)( ( ( local_80[0] & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( local_80[0] & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      if ((int)puVar11[0x16] == (int)( local_80[0] >> 0x20 )) {
         *(long*)( this + 600 ) = *(long*)( this + 600 ) + 1;
         uVar3 = *puVar11;
         if (( uVar3 == 0 ) || ( *(uint*)( lVar8 + 0x124 ) <= (uint)uVar3 )) {
            LAB_0010a3cc:if (param_3 == 0) goto LAB_0010a530;
            LAB_0010a3d5:if ((uint)param_3 < *(uint*)( lVar8 + 0x124 )) {
               lVar14 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( lVar8 + 0x120 ) ) * 0x118 + *(long*)( *(long*)( lVar8 + 0x110 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( lVar8 + 0x120 ) ) * 8 );
               if (*(int*)( lVar14 + 0x110 ) == (int)( param_3 >> 0x20 )) {
                  *puVar11 = param_3;
                  lVar8 = *(long*)( lVar8 + 0x80 );
                  *(undefined1*)( (long)puVar11 + 0x14 ) = param_4;
                  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert((String_conflict*)&local_58);
                  LVar2 = this[0x240];
                  *(undefined8*)( (long)puVar11 + 0x34 ) = *(undefined8*)( lVar14 + 0x44 );
                  if (LVar2 != (LightStorage)0x0) {
                     iVar9 = *(int*)( (long)puVar11 + 0x3c );
                     lVar4 = *(long*)( this + 0x250 );
                     if (iVar9 < 0) {
                        if (lVar4 == 0) {
                           LAB_0010a768:local_60 = 0;
                           local_58 = ") has been exceeded, lightmap will nod display properly.";
                           local_50 = 0x38;
                           String::parse_latin1((StrRange*)&local_60);
                           itos((long)&local_70);
                           operator+((char *)&
                           local_68,(String_conflict*)"Maximum amount of lightmaps in use (";
                           String::operator +((String_conflict*)&local_58, (String_conflict*)&local_68);
                           _err_print_error("lightmap_set_textures", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x761, "Condition \"lm->array_index < 0\" is true.", (String_conflict*)&local_58, 0);
                           pcVar6 = local_58;
                           if (local_58 != (char*)0x0) {
                              LOCK();
                              plVar1 = (long*)( local_58 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_58 = (char*)0x0;
                                 Memory::free_static(pcVar6 + -0x10, false);
                              }

                           }

                           lVar8 = local_68;
                           if (local_68 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_68 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_68 = 0;
                                 Memory::free_static((void*)( lVar8 + -0x10 ), false);
                              }

                           }

                           lVar8 = local_70;
                           if (local_70 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_70 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_70 = 0;
                                 Memory::free_static((void*)( lVar8 + -0x10 ), false);
                              }

                           }

                           lVar8 = local_60;
                           if (local_60 != 0) {
                              LOCK();
                              plVar1 = (long*)( local_60 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_60 = 0;
                                 Memory::free_static((void*)( lVar8 + -0x10 ), false);
                              }

                           }

                           goto LAB_0010a459;
                        }

                        lVar12 = *(long*)( lVar4 + -8 );
                        lVar7 = 0;
                        do {
                           lVar10 = lVar7;
                           if (lVar12 <= lVar10) goto LAB_0010a768;
                           lVar7 = lVar10 + 1;
                        }
 while ( *(long*)( lVar4 + lVar10 * 8 ) != lVar8 );
                        iVar9 = (int)lVar10;
                        *(int*)( (long)puVar11 + 0x3c ) = iVar9;
                        lVar8 = (long)iVar9;
                     }
 else {
                        lVar8 = (long)iVar9;
                        if (lVar4 == 0) {
                           lVar12 = 0;
                           goto LAB_0010a741;
                        }

                        lVar12 = *(long*)( lVar4 + -8 );
                     }

                     if (lVar8 < lVar12) {
                        CowData<RID>::_copy_on_write((CowData<RID>*)( this + 0x250 ));
                        *(undefined8*)( *(long*)( this + 0x250 ) + (long)iVar9 * 8 ) = *(undefined8*)( lVar14 + 0x10 );
                        goto LAB_0010a459;
                     }

                     goto LAB_0010a741;
                  }

                  goto LAB_0010a459;
               }

               if (0x7ffffffe < *(int*)( lVar14 + 0x110 ) + 0x80000000U) goto LAB_0010a5f0;
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               *puVar11 = param_3;
               uVar13 = *(undefined8*)( lVar8 + 0x80 );
               *(undefined1*)( (long)puVar11 + 0x14 ) = param_4;
            }
 else {
               LAB_0010a5f0:*puVar11 = param_3;
               uVar13 = *(undefined8*)( lVar8 + 0x80 );
               *(undefined1*)( (long)puVar11 + 0x14 ) = param_4;
            }

         }
 else {
            lVar14 = ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( lVar8 + 0x120 ) ) * 0x118 + *(long*)( *(long*)( lVar8 + 0x110 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( lVar8 + 0x120 ) ) * 8 );
            iVar9 = *(int*)( lVar14 + 0x110 );
            if (iVar9 != (int)( uVar3 >> 0x20 )) {
               if (iVar9 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_0010a3cc;
            }

            HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>*)( lVar14 + 0xb0 ), (RID*)local_80);
            if (param_3 != 0) goto LAB_0010a3d5;
            LAB_0010a530:*(undefined1*)( (long)puVar11 + 0x14 ) = param_4;
            *puVar11 = 0;
            uVar13 = *(undefined8*)( lVar8 + 0x80 );
         }

         if (( this[0x240] != (LightStorage)0x0 ) && ( -1 < *(int*)( (long)puVar11 + 0x3c ) )) {
            lVar8 = (long)*(int*)( (long)puVar11 + 0x3c );
            if (*(long*)( this + 0x250 ) == 0) {
               lVar12 = 0;
            }
 else {
               lVar12 = *(long*)( *(long*)( this + 0x250 ) + -8 );
               if (lVar8 < lVar12) {
                  CowData<RID>::_copy_on_write((CowData<RID>*)( this + 0x250 ));
                  *(undefined8*)( *(long*)( this + 0x250 ) + lVar8 * 8 ) = uVar13;
                  *(undefined4*)( (long)puVar11 + 0x3c ) = 0xffffffff;
                  goto LAB_0010a459;
               }

            }

            LAB_0010a741:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar12, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         goto LAB_0010a459;
      }

      if ((int)puVar11[0x16] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_set_textures", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x738, "Parameter \"lm\" is null.", 0, 0);
   LAB_0010a459:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::lightmap_set_shadowmask_textures(RID, RID) */void RendererRD::LightStorage::lightmap_set_shadowmask_textures(LightStorage *this, ulong param_2, ulong param_3) {
   long *plVar1;
   ulong uVar2;
   code *pcVar3;
   char *pcVar4;
   long lVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   undefined8 uVar12;
   long in_FS_OFFSET;
   ulong local_70[2];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70[0] = param_2;
   lVar6 = RendererRD::TextureStorage::get_singleton();
   if (( local_70[0] != 0 ) && ( (uint)local_70[0] < *(uint*)( this + 0x284 ) )) {
      lVar9 = ( ( local_70[0] & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0xb8 + *(long*)( *(long*)( this + 0x270 ) + ( ( local_70[0] & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 );
      if (*(int*)( lVar9 + 0xb0 ) == (int)( local_70[0] >> 0x20 )) {
         uVar2 = *(ulong*)( lVar9 + 8 );
         if (( uVar2 == 0 ) || ( *(uint*)( lVar6 + 0x124 ) <= (uint)uVar2 )) {
            LAB_0010a996:if (param_3 == 0) goto LAB_0010ab18;
            LAB_0010a99f:if ((uint)param_3 < *(uint*)( lVar6 + 0x124 )) {
               lVar10 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( lVar6 + 0x120 ) ) * 0x118 + *(long*)( *(long*)( lVar6 + 0x110 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( lVar6 + 0x120 ) ) * 8 );
               iVar7 = *(int*)( lVar10 + 0x110 );
               if (iVar7 == (int)( param_3 >> 0x20 )) {
                  *(ulong*)( lVar9 + 8 ) = param_3;
                  lVar6 = *(long*)( lVar6 + 0x80 );
                  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert((String_conflict*)&local_58);
                  iVar7 = *(int*)( lVar9 + 0x3c );
                  lVar11 = *(long*)( this + 0x2c8 );
                  if (iVar7 < 0) {
                     if (lVar11 == 0) {
                        LAB_0010aca4:local_60 = 0;
                        local_58 = "Maximum amount of shadowmasks in use (%d) has been exceeded, shadowmask will not display properly.";
                        local_50 = 0x62;
                        String::parse_latin1((StrRange*)&local_60);
                        vformat<long>((String_conflict*)&local_58, (long)&local_60);
                        _err_print_error("lightmap_set_shadowmask_textures", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x813, "Condition \"lm->array_index < 0\" is true.", (String_conflict*)&local_58, 0);
                        pcVar4 = local_58;
                        if (local_58 != (char*)0x0) {
                           LOCK();
                           plVar1 = (long*)( local_58 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_58 = (char*)0x0;
                              Memory::free_static(pcVar4 + -0x10, false);
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

                        goto LAB_0010aa4f;
                     }

                     lVar5 = 0;
                     do {
                        lVar8 = lVar5;
                        if (*(long*)( lVar11 + -8 ) <= lVar8) goto LAB_0010aca4;
                        lVar5 = lVar8 + 1;
                     }
 while ( *(long*)( lVar11 + lVar8 * 8 ) != lVar6 );
                     iVar7 = (int)lVar8;
                     *(int*)( lVar9 + 0x3c ) = iVar7;
                     lVar6 = (long)iVar7;
                  }
 else {
                     lVar6 = (long)iVar7;
                     if (lVar11 == 0) {
                        lVar11 = 0;
                        goto LAB_0010ad8e;
                     }

                  }

                  lVar11 = *(long*)( lVar11 + -8 );
                  if (lVar11 <= lVar6) goto LAB_0010ad8e;
                  CowData<RID>::_copy_on_write((CowData<RID>*)( this + 0x2c8 ));
                  *(undefined8*)( *(long*)( this + 0x2c8 ) + (long)iVar7 * 8 ) = *(undefined8*)( lVar10 + 0x10 );
                  goto LAB_0010aa4f;
               }

               if (0x7ffffffe < iVar7 + 0x80000000U) goto LAB_0010ab90;
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               *(ulong*)( lVar9 + 8 ) = param_3;
               uVar12 = *(undefined8*)( lVar6 + 0x80 );
            }
 else {
               LAB_0010ab90:*(ulong*)( lVar9 + 8 ) = param_3;
               uVar12 = *(undefined8*)( lVar6 + 0x80 );
            }

         }
 else {
            lVar10 = ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar6 + 0x120 ) ) * 0x118 + *(long*)( *(long*)( lVar6 + 0x110 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar6 + 0x120 ) ) * 8 );
            iVar7 = *(int*)( lVar10 + 0x110 );
            if (iVar7 != (int)( uVar2 >> 0x20 )) {
               if (iVar7 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_0010a996;
            }

            HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>*)( lVar10 + 0xb0 ), (RID*)local_70);
            if (param_3 != 0) goto LAB_0010a99f;
            LAB_0010ab18:*(undefined8*)( lVar9 + 8 ) = 0;
            uVar12 = *(undefined8*)( lVar6 + 0x80 );
         }

         if (-1 < *(int*)( lVar9 + 0x3c )) {
            lVar6 = (long)*(int*)( lVar9 + 0x3c );
            if (*(long*)( this + 0x2c8 ) == 0) {
               lVar11 = 0;
            }
 else {
               lVar11 = *(long*)( *(long*)( this + 0x2c8 ) + -8 );
               if (lVar6 < lVar11) {
                  CowData<RID>::_copy_on_write((CowData<RID>*)( this + 0x2c8 ));
                  *(undefined8*)( *(long*)( this + 0x2c8 ) + lVar6 * 8 ) = uVar12;
                  *(undefined4*)( lVar9 + 0x3c ) = 0xffffffff;
                  goto LAB_0010aa4f;
               }

            }

            LAB_0010ad8e:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar6, lVar11, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         goto LAB_0010aa4f;
      }

      if (*(int*)( lVar9 + 0xb0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("lightmap_set_shadowmask_textures", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x7f0, "Parameter \"lm\" is null.", 0, 0);
   LAB_0010aa4f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::LightStorage::omni_light_allocate() */void RendererRD::LightStorage::omni_light_allocate(LightStorage *this) {
   RID_Alloc<RendererRD::LightStorage::Light,true>::allocate_rid((RID_Alloc<RendererRD::LightStorage::Light,true>*)( this + 0x10 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::light_instance_create(RID) */ulong RendererRD::LightStorage::light_instance_create(LightStorage *this, ulong param_2) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   int iVar4;
   int iVar5;
   ulong uVar6;
   int *piVar7;
   Projection *pPVar8;
   Projection *pPVar9;
   int *piVar10;
   undefined4 *puVar11;
   long in_FS_OFFSET;
   Projection aPStack_560[128];
   undefined8 uStack_4e0;
   undefined8 uStack_4d8;
   code *pcStack_4d0;
   undefined4 local_4c8;
   Projection local_4c4[780];
   Projection local_1b8[156];
   undefined8 local_11c;
   undefined4 local_114;
   undefined8 local_110;
   undefined4 local_108;
   undefined1 local_100[16];
   undefined1 local_f0[16];
   undefined1 local_e0[16];
   undefined4 local_d0;
   undefined8 local_cc;
   undefined4 local_c4;
   undefined8 local_c0;
   undefined4 local_b8;
   undefined8 local_b4;
   undefined4 local_ac;
   undefined4 local_a8;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar11 = &local_4c8;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_4c8 = 0;
   pPVar9 = local_4c4;
   do {
      pPVar8 = pPVar9 + 0x9c;
      pcStack_4d0 = (code*)0x10ae47;
      Projection::Projection(pPVar9);
      *(undefined4*)( pPVar9 + 0x60 ) = 0x3f800000;
      *(undefined1(*) [16])( pPVar9 + 0x40 ) = ZEXT416(_LC108);
      *(undefined1(*) [16])( pPVar9 + 0x50 ) = ZEXT416(_LC108);
      *(undefined8*)( pPVar9 + 100 ) = 0;
      *(undefined4*)( pPVar9 + 0x6c ) = 0;
      *(undefined1(*) [16])( pPVar9 + 0x70 ) = (undefined1[16])0x0;
      *(undefined4*)( pPVar9 + 0x80 ) = 0;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pPVar9 + ( 8*i + 132 ) ) = 0;
      }

      pPVar9 = pPVar8;
   }
 while ( pPVar8 != (Projection*)&local_11c );
   local_11c = 0;
   local_114 = 0;
   local_110 = 0;
   local_108 = 0;
   local_d0 = 0x3f800000;
   local_cc = 0;
   local_c4 = 0;
   local_c0 = 0;
   local_b8 = 0;
   local_b4 = 0;
   local_ac = 0;
   local_a8 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 0;
   local_48 = 2;
   local_40 = 0xffffffff;
   local_100 = (undefined1[16])0x0;
   local_f0 = ZEXT416(_LC108);
   local_e0 = ZEXT416(_LC108);
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
   pcStack_4d0 = (code*)0x10afa6;
   uVar6 = RID_Alloc<RendererRD::LightStorage::LightInstance,false>::make_rid((RID_Alloc<RendererRD::LightStorage::LightInstance,false>*)( this + 0x68 ), (LightInstance*)&local_4c8);
   uVar3 = local_68._0_8_;
   if ((void*)local_68._0_8_ != (void*)0x0) {
      if (local_48._4_4_ != 0) {
         if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
            pcStack_4d0 = (code*)0x10afeb;
            memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) << 2);
         }

         local_48 = local_48 & 0xffffffff;
      }

      pcStack_4d0 = (code*)0x10b000;
      Memory::free_static((void*)uVar3, false);
      pcStack_4d0 = (code*)0x10b00f;
      Memory::free_static((void*)local_58._0_8_, false);
      pcStack_4d0 = (code*)0x10b01e;
      Memory::free_static((void*)local_68._8_8_, false);
      puVar11 = (undefined4*)0x0;
      pcStack_4d0 = (code*)0x10b02d;
      Memory::free_static((void*)local_58._8_8_, false);
   }

   pPVar9 = local_1b8;
   do {
      pPVar8 = pPVar9 + -0x9c;
      pcStack_4d0 = (code*)0x10b04f;
      Projection::~Projection(pPVar9);
      pPVar9 = pPVar8;
   }
 while ( pPVar8 != aPStack_560 );
   if (( uVar6 == 0 ) || ( *(uint*)( this + 0x84 ) <= (uint)uVar6 )) {
      LAB_00115d2e:_DAT_000003c8 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   piVar10 = (int*)( ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) );
   if (piVar10[0x124] != (int)( uVar6 >> 0x20 )) {
      if (piVar10[0x124] + 0x80000000U < 0x7fffffff) {
         uStack_4d8 = 0;
         uStack_4e0 = 0x115d66;
         pcStack_4d0 = (code*)puVar11;
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

      goto LAB_00115d2e;
   }

   lVar1 = *(long*)this;
   *(ulong*)( piVar10 + 0xf2 ) = uVar6;
   *(ulong*)( piVar10 + 0xf4 ) = param_2;
   if (*(code**)( lVar1 + 0xf8 ) == light_get_type) {
      if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
         piVar7 = (int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
         iVar4 = piVar7[0x38];
         if (iVar4 == (int)( param_2 >> 0x20 )) {
            iVar4 = *piVar7;
            goto LAB_0010b10c;
         }

         if (iVar4 + 0x80000000U < 0x7fffffff) {
            uStack_4d8 = 0;
            uStack_4e0 = 0x10b1f7;
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
         }

      }

      pcStack_4d0 = (code*)0x10b1bd;
      _err_print_error("light_get_type", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x1ff, "Parameter \"light\" is null.", 0, 0);
      *piVar10 = 0;
   }
 else {
      pcStack_4d0 = (code*)0x10b170;
      iVar4 = ( **(code**)( lVar1 + 0xf8 ) )(this, param_2);
      LAB_0010b10c:*piVar10 = iVar4;
      if (iVar4 != 0) {
         iVar5 = -1;
         if (*(code**)( *ForwardIDStorage::singleton + 0x10 ) != ForwardIDStorage::allocate_forward_id) {
            pcStack_4d0 = (code*)0x10b183;
            iVar5 = ( **(code**)( *ForwardIDStorage::singleton + 0x10 ) )(ForwardIDStorage::singleton, iVar4 != 1);
         }

         piVar10[0x122] = iVar5;
      }

   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      pcStack_4d0 = reflection_probe_allocate;
      __stack_chk_fail();
   }

   return uVar6;
}
/* RendererRD::LightStorage::reflection_probe_allocate() */void RendererRD::LightStorage::reflection_probe_allocate(LightStorage *this) {
   RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true>::allocate_rid((RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true>*)( this + 0x118 ));
   return;
}
/* RendererRD::LightStorage::reflection_probe_instance_create(RID) */void RendererRD::LightStorage::reflection_probe_instance_create(LightStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_78;
   undefined4 local_70;
   undefined8 local_68;
   undefined2 local_60;
   undefined8 local_5c;
   undefined8 local_50;
   undefined4 local_48;
   undefined4 local_44;
   undefined1 local_40[16];
   undefined1 local_30[16];
   undefined4 local_20;
   undefined8 local_1c;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 1;
   local_70 = 0xffffffff;
   local_40 = ZEXT416(_LC108);
   local_44 = 0xffffffff;
   local_68 = 0;
   local_5c = 1;
   local_50 = 0;
   local_48 = 0;
   local_20 = 0x3f800000;
   local_1c = 0;
   local_14 = 0;
   local_30 = ZEXT416(_LC108);
   local_78 = param_2;
   if (*(code**)( *ForwardIDStorage::singleton + 0x10 ) != ForwardIDStorage::allocate_forward_id) {
      local_44 = ( **(code**)( *ForwardIDStorage::singleton + 0x10 ) )(ForwardIDStorage::singleton, 2);
   }

   RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false>::make_rid((RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false>*)( this + 0x1c8 ), (ReflectionProbeInstance*)&local_78);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::lightmap_allocate() */void RendererRD::LightStorage::lightmap_allocate(LightStorage *this) {
   RID_Alloc<RendererRD::LightStorage::Lightmap,true>::allocate_rid((RID_Alloc<RendererRD::LightStorage::Lightmap,true>*)( this + 0x268 ));
   return;
}
/* RendererRD::LightStorage::lightmap_instance_create(RID) */void RendererRD::LightStorage::lightmap_instance_create(LightStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined1 local_40[16];
   undefined1 local_30[16];
   undefined4 local_20;
   undefined8 local_1c;
   undefined4 local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_20 = 0x3f800000;
   local_1c = 0;
   local_14 = 0;
   local_40 = ZEXT416(_LC108);
   local_30 = ZEXT416(_LC108);
   local_48 = param_2;
   RID_Alloc<RendererRD::LightStorage::LightmapInstance,false>::make_rid((RID_Alloc<RendererRD::LightStorage::LightmapInstance,false>*)( this + 0x2d0 ), (LightmapInstance*)&local_48);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::LightStorage() */void RendererRD::LightStorage::LightStorage(LightStorage *this) {
   CowData<RID> *this_00;
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   LightStorage LVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   float fVar11;
   CowData<RID> *local_78;
   long local_60;
   int local_58[6];
   long local_40;
   uVar1 = _UNK_0011df58;
   uVar6 = __LC211;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 8 ) = 0x200;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 24 ) ) = 0;
   }

   *(undefined***)this = &PTR__LightStorage_0011d920;
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_0011d820;
   *(undefined4*)( this + 0x50 ) = 1;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x28 ) = uVar6;
   *(undefined8*)( this + 0x30 ) = uVar1;
   uVar6 = Memory::alloc_static(0x1c10, false);
   *(undefined8*)( this + 0x18 ) = uVar6;
   uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x34 ) << 3, false);
   *(undefined8*)( this + 0x20 ) = uVar6;
   *(undefined***)( this + 0x68 ) = &PTR__RID_Alloc_0011d840;
   *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
   uVar3 = _UNK_0011df78;
   uVar2 = __LC213;
   uVar1 = _UNK_0011df68;
   uVar6 = __LC212;
   *(undefined1(*) [16])( this + 0x158 ) = (undefined1[16])0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 112 ) ) = 0;
   }

   *(undefined4*)( this + 0xa8 ) = 1;
   *(undefined8*)( this + 0xc4 ) = 0;
   *(undefined8*)( this + 0x108 ) = 0;
   *(undefined8*)( this + 0x110 ) = 0;
   *(undefined***)( this + 0x118 ) = &PTR__RID_Alloc_0011d860;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 288 ) ) = 0;
   }

   *(undefined4*)( this + 0x158 ) = 1;
   *(undefined8*)( this + 0x80 ) = uVar6;
   *(undefined8*)( this + 0x88 ) = uVar1;
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x148 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x130 ) = uVar2;
   *(undefined8*)( this + 0x138 ) = uVar3;
   uVar6 = Memory::alloc_static(0x1108, false);
   *(undefined8*)( this + 0x120 ) = uVar6;
   uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x13c ) << 3, false);
   *(undefined8*)( this + 0x128 ) = uVar6;
   *(undefined***)( this + 0x170 ) = &PTR__RID_Alloc_0011d880;
   *(undefined***)( this + 0x1c8 ) = &PTR__RID_Alloc_0011d8a0;
   uVar1 = _UNK_0011df88;
   uVar6 = __LC214;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x208 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x188 ) = uVar6;
   *(undefined8*)( this + 400 ) = uVar1;
   uVar1 = _UNK_0011df98;
   uVar6 = __LC215;
   *(undefined1(*) [16])( this + 0x1a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1f8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x228 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_0011d8c0;
   *(undefined8*)( this + 0x1e0 ) = uVar6;
   *(undefined8*)( this + 0x1e8 ) = uVar1;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 376 ) ) = 0;
   }

   *(undefined4*)( this + 0x1b0 ) = 1;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 464 ) ) = 0;
   }

   *(undefined4*)( this + 0x208 ) = 1;
   *(undefined4*)( this + 0x224 ) = 0;
   *(undefined8*)( this + 0x238 ) = 0;
   *(undefined8*)( this + 0x250 ) = 0;
   *(undefined8*)( this + 600 ) = 0;
   *(undefined4*)( this + 0x260 ) = 0x40800000;
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined8*)( this + 0x278 ) = 0;
   *(undefined8*)( this + 0x290 ) = 0;
   uVar1 = _UNK_0011dfa8;
   uVar6 = __LC217;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x2b8 ) = 0;
   *(undefined4*)( this + 0x2a8 ) = 1;
   *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x280 ) = uVar6;
   *(undefined8*)( this + 0x288 ) = uVar1;
   uVar6 = Memory::alloc_static(0x1608, false);
   *(undefined8*)( this + 0x270 ) = uVar6;
   uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x28c ) << 3, false);
   *(undefined8*)( this + 0x278 ) = uVar6;
   *(undefined1(*) [16])( this + 0x310 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x370 ) = (undefined1[16])0x0;
   uVar1 = _UNK_0011dfb8;
   uVar6 = __LC218;
   *(undefined***)( this + 0x2d0 ) = &PTR__RID_Alloc_0011d8e0;
   *(undefined1(*) [16])( this + 0x300 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x360 ) = (undefined1[16])0x0;
   uVar3 = _UNK_0011dfc8;
   uVar2 = __LC219;
   *(undefined***)( this + 0x330 ) = &PTR__RID_Alloc_0011d900;
   *(undefined8*)( this + 0x2e8 ) = uVar6;
   *(undefined8*)( this + 0x2f0 ) = uVar1;
   *(undefined8*)( this + 0x348 ) = uVar2;
   *(undefined8*)( this + 0x350 ) = uVar3;
   *(undefined1(*) [16])( this + 0x388 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3c0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   *(undefined8*)( this + 0x2d8 ) = 0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   *(undefined8*)( this + 800 ) = 0;
   *(undefined4*)( this + 0x310 ) = 1;
   *(undefined8*)( this + 0x328 ) = 500;
   *(undefined8*)( this + 0x338 ) = 0;
   *(undefined8*)( this + 0x340 ) = 0;
   *(undefined8*)( this + 0x358 ) = 0;
   *(undefined8*)( this + 0x380 ) = 0;
   *(undefined4*)( this + 0x370 ) = 1;
   *(undefined8*)( this + 0x398 ) = 0;
   this[0x3a0] = (LightStorage)0x1;
   *(undefined4*)( this + 0x3a4 ) = 0;
   *(undefined8*)( this + 0x3d0 ) = 2;
   *(undefined2*)( this + 0x3d8 ) = 0;
   singleton = this;
   lVar7 = RendererRD::TextureStorage::get_singleton();
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "rendering/lights_and_shadows/directional_shadow/size", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   iVar5 = Variant::operator_cast_to_int((Variant*)local_58);
   *(int*)( this + 0x39c ) = iVar5;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "rendering/lights_and_shadows/directional_shadow/16_bits", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   LVar4 = (LightStorage)Variant::operator_cast_to_bool((Variant*)local_58);
   this[0x3a0] = LVar4;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   this[0x240] = (LightStorage)0x1;
   this_00 = (CowData<RID>*)( this + 0x250 );
   uVar6 = RenderingDevice::get_singleton();
   uVar8 = RenderingDevice::limit_get(uVar6, 0xf);
   if (uVar8 < 0x101) {
      CowData<RID>::resize<false>(this_00, 0x20);
      CowData<RID>::resize<false>((CowData<RID>*)( this + 0x2c8 ), 0x20);
   }
 else {
      CowData<RID>::resize<false>(this_00, 0x400);
      CowData<RID>::resize<false>((CowData<RID>*)( this + 0x2c8 ), 0x400);
   }

   local_78 = (CowData<RID>*)( this + 0x2c8 );
   CowData<RID>::_copy_on_write(this_00);
   puVar10 = *(undefined8**)( this + 0x250 );
   CowData<RID>::_copy_on_write(this_00);
   puVar9 = *(undefined8**)( this + 0x250 );
   if (puVar9 != (undefined8*)0x0) {
      puVar9 = puVar9 + puVar9[-1];
   }

   for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
      *puVar10 = *(undefined8*)( lVar7 + 0x80 );
   }

   CowData<RID>::_copy_on_write(local_78);
   puVar10 = *(undefined8**)( this + 0x2c8 );
   CowData<RID>::_copy_on_write(local_78);
   puVar9 = *(undefined8**)( this + 0x2c8 );
   if (puVar9 != (undefined8*)0x0) {
      puVar9 = puVar9 + puVar9[-1];
   }

   for (; puVar10 != puVar9; puVar10 = puVar10 + 1) {
      *puVar10 = *(undefined8*)( lVar7 + 0x80 );
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_60, "rendering/lightmapping/probe_capture/update_speed", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   fVar11 = Variant::operator_cast_to_float((Variant*)local_58);
   *(float*)( this + 0x260 ) = fVar11;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::_update_shadow_atlas(RendererRD::LightStorage::ShadowAtlas*) */void RendererRD::LightStorage::_update_shadow_atlas(LightStorage *this, ShadowAtlas *param_1) {
   long *plVar1;
   int iVar2;
   long lVar3;
   TextureFormat *pTVar4;
   undefined8 uVar5;
   Vector *pVVar6;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long lStack_80;
   undefined4 local_78;
   undefined8 local_68;
   int local_60;
   undefined8 local_5c;
   undefined8 uStack_54;
   undefined4 local_4c;
   undefined4 local_48;
   long local_38;
   undefined2 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *(int*)( param_1 + 0x74 );
   if (( 0 < iVar2 ) && ( *(long*)( param_1 + 0x80 ) == 0 )) {
      local_30 = 0;
      local_4c = 0;
      local_5c = __LC226;
      uStack_54 = _UNK_0011dfd8;
      local_48 = 5;
      local_38 = 0;
      local_68 = CONCAT44(iVar2, ( -(uint)(param_1[0x78] == (ShadowAtlas)0x0) & 2 ) + 0x7b);
      local_60 = iVar2;
      pTVar4 = (TextureFormat*)RenderingDevice::get_singleton();
      local_90 = 0;
      local_78 = 6;
      local_88 = __LC227;
      lStack_80 = _UNK_0011dfe8;
      uVar5 = RenderingDevice::texture_create(pTVar4, (TextureView*)&local_68, (Vector*)&local_88);
      *(undefined8*)( param_1 + 0x80 ) = uVar5;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_90);
      lStack_80 = 0;
      Vector<RID>::push_back((Vector<RID>*)&local_88, *(undefined8*)( param_1 + 0x80 ));
      pVVar6 = (Vector*)RenderingDevice::get_singleton();
      uVar5 = RenderingDevice::framebuffer_create(pVVar6, (long)&local_88, 0xffffffff);
      lVar3 = lStack_80;
      *(undefined8*)( param_1 + 0x88 ) = uVar5;
      if (lStack_80 != 0) {
         LOCK();
         plVar1 = (long*)( lStack_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lStack_80 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::shadow_atlas_update(RID) */void RendererRD::LightStorage::shadow_atlas_update(LightStorage *this, ulong param_2) {
   ShadowAtlas *pSVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x34c ) )) {
      pSVar1 = (ShadowAtlas*)( *(long*)( *(long*)( this + 0x338 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200 );
      iVar2 = *(int*)( pSVar1 + 0xc0 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         _update_shadow_atlas(this, pSVar1);
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shadow_atlas_update", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x9c5, "Parameter \"shadow_atlas\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::update_directional_shadow_atlas() */void RendererRD::LightStorage::update_directional_shadow_atlas(LightStorage *this) {
   long *plVar1;
   int iVar2;
   long lVar3;
   TextureFormat *pTVar4;
   undefined8 uVar5;
   Vector *pVVar6;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long lStack_80;
   undefined4 local_78;
   undefined8 local_68;
   int local_60;
   undefined8 local_5c;
   undefined8 uStack_54;
   undefined4 local_4c;
   undefined4 local_48;
   long local_38;
   undefined2 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x388 ) == 0 ) && ( iVar2= *(int *)(this + 0x39c),0 < iVar2 )) {
      local_30 = 0;
      local_4c = 0;
      local_48 = 5;
      local_5c = __LC226;
      uStack_54 = _UNK_0011dfd8;
      local_38 = 0;
      local_68 = CONCAT44(iVar2, ( -(uint)(this[0x3a0] == (LightStorage)0x0) & 2 ) + 0x7b);
      local_60 = iVar2;
      pTVar4 = (TextureFormat*)RenderingDevice::get_singleton();
      local_90 = 0;
      local_78 = 6;
      local_88 = __LC227;
      lStack_80 = _UNK_0011dfe8;
      uVar5 = RenderingDevice::texture_create(pTVar4, (TextureView*)&local_68, (Vector*)&local_88);
      *(undefined8*)( this + 0x388 ) = uVar5;
      CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_90);
      lStack_80 = 0;
      Vector<RID>::push_back((Vector<RID>*)&local_88, *(undefined8*)( this + 0x388 ));
      pVVar6 = (Vector*)RenderingDevice::get_singleton();
      uVar5 = RenderingDevice::framebuffer_create(pVVar6, (long)&local_88, 0xffffffff);
      lVar3 = lStack_80;
      *(undefined8*)( this + 0x390 ) = uVar5;
      if (lStack_80 != 0) {
         LOCK();
         plVar1 = (long*)( lStack_80 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lStack_80 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      lVar3 = local_38;
      if (local_38 != 0) {
         LOCK();
         plVar1 = (long*)( local_38 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_38 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::_get_shadow_cubemap(int) */void RendererRD::LightStorage::_get_shadow_cubemap(LightStorage *this, int param_1) {
   long *plVar1;
   ulong uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   byte bVar11;
   uint uVar12;
   undefined8 uVar13;
   TextureFormat *pTVar14;
   Vector *pVVar15;
   undefined8 *puVar16;
   ulong uVar17;
   long lVar18;
   int iVar19;
   ulong uVar20;
   uint uVar21;
   uint uVar22;
   long in_FS_OFFSET;
   int local_ec[3];
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 uStack_d0;
   undefined4 local_c8;
   undefined8 local_b8;
   long lStack_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined4 local_98;
   long local_88;
   undefined2 local_80;
   undefined8 local_78;
   undefined1 auStack_70[16];
   undefined1 auStack_60[16];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ec[0] = param_1;
   if (( *(long*)( this + 0x3b0 ) != 0 ) && ( *(int*)( this + 0x3d4 ) != 0 )) {
      uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x3d0 ) * 8 );
      uVar12 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar12 = ( uVar12 ^ uVar12 >> 0xd ) * -0x3d4d51cb;
      uVar22 = uVar12 ^ uVar12 >> 0x10;
      if (uVar12 == uVar12 >> 0x10) {
         uVar22 = 1;
         uVar17 = uVar2;
      }
 else {
         uVar17 = uVar22 * uVar2;
      }

      uVar20 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3d0 ) * 4 ));
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar20;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar18 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( *(long*)( this + 0x3b8 ) + lVar18 * 4 );
      iVar19 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar21 = 0;
         do {
            if (( uVar22 == uVar12 ) && ( param_1 == *(int*)( *(long*)( *(long*)( this + 0x3b0 ) + lVar18 * 8 ) + 0x10 ) )) goto LAB_0010c302;
            uVar21 = uVar21 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( iVar19 + 1 ) * uVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar20;
            lVar18 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( *(long*)( this + 0x3b8 ) + lVar18 * 4 );
            iVar19 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar12 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar12 * uVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar20,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3d0 ) * 4 ) + iVar19 ) - SUB164(auVar5 * auVar9, 8) ) * uVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar20,uVar21 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   local_98 = 0;
   auStack_70 = (undefined1[16])0x0;
   auStack_60 = (undefined1[16])0x0;
   local_50 = (undefined1[16])0x0;
   local_80 = 0;
   local_b8 = __LC230;
   lStack_b0 = _UNK_0011dff8;
   local_88 = 0;
   local_a8 = __LC231;
   uStack_a0 = _UNK_0011e008;
   uVar13 = RenderingDevice::get_singleton();
   bVar11 = RenderingDevice::texture_is_format_supported_for_usage(uVar13, 0x7d, 4);
   lStack_b0 = CONCAT44(lStack_b0._4_4_, param_1);
   uStack_a0 = CONCAT44(uStack_a0._4_4_, 3);
   local_a8 = CONCAT44(local_a8._4_4_, 6);
   local_98 = 5;
   local_b8 = CONCAT44(param_1, bVar11 + 0x7c);
   pTVar14 = (TextureFormat*)RenderingDevice::get_singleton();
   local_e0 = 0;
   local_d8 = __LC227;
   uStack_d0 = _UNK_0011dfe8;
   local_c8 = 6;
   local_78 = RenderingDevice::texture_create(pTVar14, (TextureView*)&local_b8, (Vector*)&local_d8);
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_e0);
   lVar18 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_88 = 0;
         Memory::free_static((void*)( lVar18 + -0x10 ), false);
      }

   }

   iVar19 = 0;
   do {
      uVar13 = RenderingDevice::get_singleton();
      local_a8 = CONCAT44(local_a8._4_4_, 6);
      local_b8 = __LC227;
      lStack_b0 = _UNK_0011dfe8;
      uVar13 = RenderingDevice::texture_create_shared_from_slice(uVar13, (TextureView*)&local_b8, local_78, iVar19, 0, 1, 0, 0);
      lStack_b0 = 0;
      Vector<RID>::push_back((Vector<RID>*)&local_b8, uVar13);
      pVVar15 = (Vector*)RenderingDevice::get_singleton();
      uVar13 = RenderingDevice::framebuffer_create(pVVar15, (long)&local_b8, 0xffffffff);
      lVar18 = lStack_b0;
      *(undefined8*)( auStack_70 + (long)iVar19 * 8 ) = uVar13;
      if (lStack_b0 != 0) {
         LOCK();
         plVar1 = (long*)( lStack_b0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lStack_b0 = 0;
            Memory::free_static((void*)( lVar18 + -0x10 ), false);
         }

      }

      iVar19 = iVar19 + 1;
   }
 while ( iVar19 != 6 );
   puVar16 = (undefined8*)HashMap<int,RendererRD::LightStorage::ShadowCubemap,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RendererRD::LightStorage::ShadowCubemap>>>::operator []((HashMap<int,RendererRD::LightStorage::ShadowCubemap,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RendererRD::LightStorage::ShadowCubemap>>>*)( this + 0x3a8 ), local_ec);
   puVar16[6] = local_50._8_8_;
   *puVar16 = local_78;
   puVar16[1] = auStack_70._0_8_;
   puVar16[2] = auStack_70._8_8_;
   puVar16[3] = auStack_60._0_8_;
   puVar16[4] = auStack_60._8_8_;
   puVar16[5] = local_50._0_8_;
   LAB_0010c302:HashMap<int,RendererRD::LightStorage::ShadowCubemap,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RendererRD::LightStorage::ShadowCubemap>>>::operator []((HashMap<int,RendererRD::LightStorage::ShadowCubemap,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RendererRD::LightStorage::ShadowCubemap>>>*)( this + 0x3a8 ), local_ec);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::LightStorage::get_cubemap(int) */undefined8 RendererRD::LightStorage::get_cubemap(LightStorage *this, int param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)_get_shadow_cubemap(this, param_1);
   return *puVar1;
}
/* RendererRD::LightStorage::get_cubemap_fb(int, int) */undefined8 RendererRD::LightStorage::get_cubemap_fb(LightStorage *this, int param_1, int param_2) {
   long lVar1;
   lVar1 = _get_shadow_cubemap(this, param_1);
   return *(undefined8*)( lVar1 + 8 + (long)param_2 * 8 );
}
/* RendererRD::LightStorage::light_instance_free(RID) */void RendererRD::LightStorage::light_instance_free(LightStorage *this, HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>> *param_2) {
   int iVar1;
   void *pvVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   int iVar12;
   uint uVar13;
   ulong uVar14;
   uint *puVar15;
   int iVar16;
   long lVar17;
   int *piVar18;
   Projection *this_00;
   ulong uVar19;
   long lVar20;
   uint uVar21;
   char *this_01;
   long lVar22;
   uint uVar23;
   long lVar24;
   long local_98;
   HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>> *local_40[2];
   local_40[0] = param_2;
   if (param_2 != (HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)0x0) {
      uVar21 = (uint)param_2;
      if (uVar21 < *(uint*)( this + 0x84 )) {
         lVar24 = *(long*)( this + 0x70 );
         piVar18 = (int*)( *(long*)( lVar24 + ( ( (ulong)param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + ( ( (ulong)param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 );
         iVar1 = piVar18[0x124];
         if (iVar1 == (int)( (ulong)param_2 >> 0x20 )) {
            iVar12 = piVar18[0x121];
            if (iVar12 == 0) {
               iVar12 = *piVar18;
               if (iVar12 != 0) {
                  LAB_0010c6e5:if (*(code**)( *ForwardIDStorage::singleton + 0x18 ) != ForwardIDStorage::free_forward_id) {
                     ( **(code**)( *ForwardIDStorage::singleton + 0x18 ) )(ForwardIDStorage::singleton, iVar12 != 1, piVar18[0x122]);
                  }

                  LAB_0010c708:if (*(uint*)( this + 0x84 ) <= uVar21) {
                     _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
                     return;
                  }

                  lVar24 = *(long*)( this + 0x70 );
               }

               uVar14 = ( (ulong)param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 );
               lVar20 = ( ( (ulong)param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498;
               lVar24 = *(long*)( lVar24 + uVar14 * 8 ) + lVar20;
               if (*(int*)( lVar24 + 0x490 ) < 0) {
                  _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
               }
 else if (iVar1 == *(int*)( lVar24 + 0x490 )) {
                  pvVar2 = *(void**)( lVar24 + 0x460 );
                  if (pvVar2 != (void*)0x0) {
                     if (*(int*)( lVar24 + 0x484 ) != 0) {
                        if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar24 + 0x480 ) * 4 ) != 0) {
                           memset(*(void**)( lVar24 + 0x478 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar24 + 0x480 ) * 4 ) * 4);
                        }

                        *(undefined4*)( lVar24 + 0x484 ) = 0;
                     }

                     Memory::free_static(pvVar2, false);
                     Memory::free_static(*(void**)( lVar24 + 0x470 ), false);
                     Memory::free_static(*(void**)( lVar24 + 0x468 ), false);
                     Memory::free_static(*(void**)( lVar24 + 0x478 ), false);
                  }

                  this_00 = (Projection*)( lVar24 + 0x3ac );
                  do {
                     this_00 = this_00 + -0x9c;
                     Projection::~Projection(this_00);
                  }
 while ( (Projection*)( lVar24 + 4 ) != this_00 );
                  lVar24 = *(long*)( this + 0x78 );
                  *(undefined4*)( *(long*)( *(long*)( this + 0x70 ) + uVar14 * 8 ) + 0x490 + lVar20 ) = 0xffffffff;
                  uVar13 = *(int*)( this + 0x88 ) - 1;
                  *(uint*)( this + 0x88 ) = uVar13;
                  *(uint*)( *(long*)( lVar24 + ( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + ( (ulong)uVar13 % ( ulong ) * (uint*)( this + 0x80 ) ) * 4 ) = uVar21;
               }
 else {
                  _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
               }

               return;
            }

            lVar24 = *(long*)( piVar18 + 0x118 );
            local_98 = 0;
            uVar14 = (long)param_2 * 0x3ffff - 1;
            uVar14 = ( uVar14 ^ uVar14 >> 0x1f ) * 0x15;
            uVar14 = ( uVar14 ^ uVar14 >> 0xb ) * 0x41;
            uVar14 = uVar14 >> 0x16 ^ uVar14;
            uVar19 = uVar14 & 0xffffffff;
            if ((int)uVar14 == 0) {
               uVar19 = 1;
            }

            this_01 = (char*)param_2;
            while (true) {
               uVar14 = *(ulong*)( lVar24 + local_98 * 8 );
               if (( uVar14 == 0 ) || ( *(uint*)( this + 0x34c ) <= (uint)uVar14 )) goto LAB_00115d8f;
               lVar20 = *(long*)( *(long*)( this + 0x338 ) + ( ( uVar14 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( uVar14 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200;
               if (*(int*)( lVar20 + 0xc0 ) != (int)( uVar14 >> 0x20 )) break;
               this_01 = (char*)( lVar20 + 0x90 );
               if (( *(long*)( lVar20 + 0x98 ) != 0 ) && ( *(int*)( lVar20 + 0xbc ) != 0 )) {
                  uVar14 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar20 + 0xb8 ) * 4 ));
                  lVar22 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar20 + 0xb8 ) * 8 );
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar19 * lVar22;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar14;
                  lVar17 = SUB168(auVar3 * auVar7, 8);
                  uVar13 = *(uint*)( *(long*)( lVar20 + 0xa0 ) + lVar17 * 4 );
                  iVar16 = SUB164(auVar3 * auVar7, 8);
                  if (uVar13 != 0) {
                     uVar23 = 0;
                     do {
                        if (( uVar13 == (uint)uVar19 ) && ( param_2 == *(HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>**)( *(long*)( *(long*)( lVar20 + 0x98 ) + lVar17 * 8 ) + 0x10 ) )) {
                           puVar15 = (uint*)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator []((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)this_01, (RID*)local_40);
                           uVar13 = *puVar15;
                           lVar20 = lVar20 + 8 + ( ulong )(uVar13 >> 0x1b & 3) * 0x18;
                           uVar14 = ( ulong )(uVar13 & 0x3ffffff);
                           if (*(long*)( lVar20 + 8 ) == 0) {
                              lVar22 = 0;
                           }
 else {
                              lVar22 = *(long*)( *(long*)( lVar20 + 8 ) + -8 );
                              if ((long)uVar14 < lVar22) {
                                 CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( lVar20 + 8 ));
                                 lVar22 = *(long*)( lVar20 + 8 );
                                 *(undefined8*)( lVar22 + uVar14 * 0x20 ) = 0;
                                 if (( uVar13 & 0x4000000 ) != 0) {
                                    uVar14 = ( ulong )(( uVar13 & 0x3ffffff ) + 1);
                                    if (lVar22 == 0) {
                                       lVar22 = 0;
                                       goto LAB_0010c8c1;
                                    }

                                    lVar22 = *(long*)( lVar22 + -8 );
                                    if (lVar22 <= (long)uVar14) goto LAB_0010c8c1;
                                    CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( lVar20 + 8 ));
                                    *(undefined8*)( uVar14 * 0x20 + *(long*)( lVar20 + 8 ) ) = 0;
                                 }

                                 HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::erase((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)this_01, (RID*)local_40);
                                 goto LAB_0010c6b2;
                              }

                           }

                           LAB_0010c8c1:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar14, lVar22, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar11 = (code*)invalidInstructionException();
                           ( *pcVar11 )();
                        }

                        uVar23 = uVar23 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar16 + 1) * lVar22;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar14;
                        lVar17 = SUB168(auVar4 * auVar8, 8);
                        uVar13 = *(uint*)( *(long*)( lVar20 + 0xa0 ) + lVar17 * 4 );
                        iVar16 = SUB164(auVar4 * auVar8, 8);
                     }
 while ( ( uVar13 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar13 * lVar22,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar20 + 0xb8 ) * 4 ) + iVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar22,auVar10._8_8_ = 0,auVar10._0_8_ = uVar14,uVar23 <= SUB164(auVar6 * auVar10, 8) );
                  }

               }

               this_01 = "light_instance_free";
               _err_print_error("light_instance_free", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x1e0, "Condition \"!shadow_atlas->shadow_owners.has(p_light)\" is true. Continuing.", 0);
               LAB_0010c6b2:if (iVar12 <= (int)local_98 + 1) {
                  iVar12 = *piVar18;
                  if (iVar12 != 0) goto LAB_0010c6e5;
                  goto LAB_0010c708;
               }

               local_98 = local_98 + 1;
            }
;
            if (*(int*)( lVar20 + 0xc0 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, this_01);
            }

            LAB_00115d8f:/* WARNING: Does not return */pcVar11 = (code*)invalidInstructionException();
            ( *pcVar11 )();
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}
/* RendererRD::LightStorage::_shadow_atlas_invalidate_shadow(RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow*,
   RID, RendererRD::LightStorage::ShadowAtlas*, unsigned int, unsigned int) */void RendererRD::LightStorage::_shadow_atlas_invalidate_shadow(LightStorage *this, undefined1 (*param_1)[16], undefined8 param_3, long param_4, ulong param_5, uint param_6) {
   long lVar1;
   code *pcVar2;
   uint *puVar3;
   long lVar4;
   ulong uVar5;
   long lVar6;
   undefined8 local_40[2];
   uVar5 = *(ulong*)*param_1;
   if (uVar5 == 0) {
      return;
   }

   local_40[0] = param_3;
   if ((uint)uVar5 < *(uint*)( this + 0x84 )) {
      lVar4 = ( ( uVar5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      if (*(int*)( lVar4 + 0x490 ) != (int)( uVar5 >> 0x20 )) {
         if (*(int*)( lVar4 + 0x490 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_0010cb00;
      }

   }
 else {
      LAB_0010cb00:lVar4 = 0;
   }

   puVar3 = (uint*)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator []((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( param_4 + 0x90 ), *param_1);
   if (( *puVar3 & 0x4000000 ) == 0) {
      LAB_0010ca8a:HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::erase((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( param_4 + 0x90 ), *param_1);
      *param_1 = (undefined1[16])0x0;
      HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>*)( lVar4 + 0x460 ), (RID*)local_40);
      return;
   }

   lVar1 = param_4 + 8 + ( param_5 & 0xffffffff ) * 0x18;
   uVar5 = ( ulong )(( param_6 - 1 ) + ( uint )(( *puVar3 & 0x3ffffff ) == param_6) * 2);
   if (*(long*)( lVar1 + 8 ) == 0) {
      lVar6 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)( lVar1 + 8 ) + -8 );
      if ((long)uVar5 < lVar6) {
         CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( lVar1 + 8 ));
         *(undefined1(*) [16])( uVar5 * 0x20 + *(long*)( lVar1 + 8 ) ) = (undefined1[16])0x0;
         goto LAB_0010ca8a;
      }

   }

   _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar5, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RendererRD::LightStorage::shadow_atlas_update_light(RID, RID, float, unsigned long) */ulong RendererRD::LightStorage::shadow_atlas_update_light(float param_1, LightStorage *this, ulong param_3, ulong param_4, ulong param_5) {
   CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *this_00;
   ShadowAtlas *pSVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   code *pcVar10;
   uint uVar11;
   ulong uVar12;
   uint *puVar13;
   uint uVar14;
   ShadowAtlas *pSVar15;
   long lVar16;
   int *piVar17;
   long lVar18;
   long lVar19;
   ulong *puVar20;
   uint uVar21;
   int iVar22;
   ulong uVar23;
   ulong uVar24;
   uint uVar25;
   int iVar26;
   undefined7 uVar27;
   ulong uVar28;
   uint uVar29;
   long in_FS_OFFSET;
   ulong local_88;
   ulong local_80;
   int local_70;
   uint local_6c;
   RID local_68[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = param_4;
   local_80 = param_3;
   if (( param_3 == 0 ) || ( *(uint*)( this + 0x34c ) <= (uint)param_3 )) {
      LAB_0010d1b0:_err_print_error("shadow_atlas_update_light", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x934, "Parameter \"shadow_atlas\" is null.", 0, 0);
   }
 else {
      pSVar1 = (ShadowAtlas*)( *(long*)( *(long*)( this + 0x338 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200 );
      if (*(int*)( pSVar1 + 0xc0 ) != (int)( param_3 >> 0x20 )) {
         if (*(int*)( pSVar1 + 0xc0 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_0010d1b0;
      }

      if (( param_4 == 0 ) || ( *(uint*)( this + 0x84 ) <= (uint)param_4 )) {
         LAB_0010d250:_err_print_error("shadow_atlas_update_light", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x937, "Parameter \"li\" is null.", 0, 0);
      }
 else {
         piVar17 = (int*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) );
         iVar26 = piVar17[0x124];
         if (iVar26 != (int)( param_4 >> 0x20 )) {
            if (iVar26 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_0010d250;
         }

         if (( *(int*)( pSVar1 + 0x74 ) != 0 ) && ( *(uint*)( pSVar1 + 0x70 ) != 0 )) {
            uVar21 = *(int*)( pSVar1 + 0x74 ) >> 1;
            iVar26 = (int)(long)( (float)uVar21 * param_1 );
            uVar11 = 0;
            if (iVar26 != 0) {
               uVar14 = iVar26 - 1;
               uVar14 = uVar14 | uVar14 >> 1;
               uVar14 = uVar14 | uVar14 >> 2;
               uVar14 = uVar14 | uVar14 >> 4;
               uVar14 = uVar14 | uVar14 >> 8;
               uVar11 = uVar21 / *(uint*)( pSVar1 + 0x70 );
               uVar14 = ( uVar14 | uVar14 >> 0x10 ) + 1;
               if (uVar14 <= uVar11) {
                  uVar11 = uVar14;
               }

            }

            pSVar15 = pSVar1 + 0x60;
            uVar14 = 0xffffffff;
            iVar26 = 0;
            uVar23 = 0xffffffff;
            do {
               uVar25 = *(uint*)( pSVar1 + (long)*(int*)pSVar15 * 0x18 );
               if (uVar25 != 0) {
                  iVar22 = (int)( (ulong)uVar21 / (ulong)uVar25 );
                  if (( (int)uVar23 != -1 ) && ( (int)uVar23 < iVar22 )) break;
                  lVar18 = (long)iVar26;
                  iVar26 = iVar26 + 1;
                  local_58[lVar18] = *(int*)pSVar15;
                  uVar14 = uVar25;
                  if ((int)uVar11 <= iVar22) {
                     uVar23 = (ulong)uVar21 / (ulong)uVar25;
                  }

               }

               pSVar15 = pSVar15 + 4;
            }
 while ( pSVar1 + 0x70 != pSVar15 );
            if (iVar26 != 0) {
               OS::get_singleton();
               uVar23 = OS::get_ticks_msec();
               if (( *(long*)( pSVar1 + 0x98 ) != 0 ) && ( *(int*)( pSVar1 + 0xbc ) != 0 )) {
                  uVar24 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pSVar1 + 0xb8 ) * 4 ));
                  lVar18 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pSVar1 + 0xb8 ) * 8 );
                  uVar12 = param_4 * 0x3ffff - 1;
                  uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
                  uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
                  uVar12 = uVar12 >> 0x16 ^ uVar12;
                  uVar28 = uVar12 & 0xffffffff;
                  if ((int)uVar12 == 0) {
                     uVar28 = 1;
                  }

                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar28 * lVar18;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar24;
                  lVar19 = SUB168(auVar2 * auVar6, 8);
                  uVar11 = *(uint*)( *(long*)( pSVar1 + 0xa0 ) + lVar19 * 4 );
                  iVar22 = SUB164(auVar2 * auVar6, 8);
                  if (uVar11 != 0) {
                     uVar21 = 0;
                     do {
                        if (( uVar11 == (uint)uVar28 ) && ( param_4 == *(ulong*)( *(long*)( *(long*)( pSVar1 + 0x98 ) + lVar19 * 8 ) + 0x10 ) )) {
                           puVar13 = (uint*)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator []((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( pSVar1 + 0x90 ), (RID*)&local_88);
                           uVar11 = *puVar13;
                           uVar29 = uVar11 & 0x3ffffff;
                           uVar25 = uVar11 >> 0x1b & 3;
                           lVar18 = (ulong)uVar25 * 0x18;
                           uVar21 = *(uint*)( pSVar1 + lVar18 );
                           uVar27 = ( undefined7 )(param_4 >> 8);
                           if (uVar21 == uVar14) {
                              pSVar15 = pSVar1 + lVar18 + 8;
                              lVar18 = *(long*)( pSVar15 + 8 );
                              if (lVar18 == 0) {
                                 lVar19 = 0;
                                 goto LAB_0010d449;
                              }

                              lVar19 = *(long*)( lVar18 + -8 );
                              if (lVar19 <= (long)(ulong)uVar29) goto LAB_0010d449;
                              lVar19 = (ulong)uVar29 * 0x20;
                              uVar12 = CONCAT71(uVar27, *(ulong*)( lVar18 + 8 + lVar19 ) != param_5);
                           }
 else {
                              pSVar15 = pSVar1 + lVar18 + 8;
                              lVar18 = *(long*)( pSVar15 + 8 );
                              if (lVar18 == 0) {
                                 lVar19 = 0;
                                 LAB_0010d449:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (ulong)uVar29, lVar19, "p_index", "size()", "", false, true);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar10 = (code*)invalidInstructionException();
                                 ( *pcVar10 )();
                              }

                              lVar19 = *(long*)( lVar18 + -8 );
                              if (lVar19 <= (long)(ulong)uVar29) goto LAB_0010d449;
                              lVar19 = (ulong)uVar29 * 0x20;
                              uVar12 = CONCAT71(uVar27, *(ulong*)( lVar18 + 8 + lVar19 ) != param_5);
                              if (*(ulong*)( this + 0x328 ) < uVar23 - *(long*)( lVar18 + 0x18 + lVar19 )) goto LAB_0010cf35;
                           }

                           CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( pSVar15 + 8 ));
                           *(ulong*)( *(long*)( pSVar15 + 8 ) + 8 + lVar19 ) = param_5;
                           goto LAB_0010d1db;
                        }

                        uVar21 = uVar21 + 1;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = ( ulong )(iVar22 + 1) * lVar18;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar24;
                        lVar19 = SUB168(auVar3 * auVar7, 8);
                        uVar11 = *(uint*)( *(long*)( pSVar1 + 0xa0 ) + lVar19 * 4 );
                        iVar22 = SUB164(auVar3 * auVar7, 8);
                     }
 while ( ( uVar11 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar11 * lVar18,auVar8._8_8_ = 0,auVar8._0_8_ = uVar24,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pSVar1 + 0xb8 ) * 4 ) + iVar22 ) - SUB164(auVar4 * auVar8, 8)) * lVar18,auVar9._8_8_ = 0,auVar9._0_8_ = uVar24,uVar21 <= SUB164(auVar5 * auVar9, 8) );
                  }

               }

               uVar12 = 0;
               uVar21 = 0xffffffff;
               uVar29 = 0xffffffff;
               uVar25 = 0xffffffff;
               uVar11 = 0xffffffff;
               LAB_0010cf35:local_70 = -1;
               local_6c = 0xffffffff;
               iVar22 = *piVar17;
               if (iVar22 == 1) {
                  uVar21 = _shadow_atlas_find_omni_shadows(this, pSVar1, local_58, iVar26, uVar21, uVar23, &local_70, (int*)&local_6c);
               }
 else {
                  uVar21 = _shadow_atlas_find_shadow(this, pSVar1, local_58, iVar26, uVar21, uVar23, &local_70, (int*)&local_6c);
               }

               if ((char)uVar21 == '\0') goto LAB_0010d1db;
               if (uVar25 == 0xffffffff) goto LAB_0010d03a;
               uVar12 = (ulong)uVar29;
               lVar18 = (ulong)uVar25 * 0x18;
               if (*(long*)( pSVar1 + lVar18 + 0x10 ) != 0) {
                  lVar19 = *(long*)( *(long*)( pSVar1 + lVar18 + 0x10 ) + -8 );
                  if (lVar19 <= (long)uVar12) goto LAB_0010d396;
                  this_00 = (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( pSVar1 + lVar18 + 0x10 );
                  CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(this_00);
                  lVar19 = *(long*)( pSVar1 + lVar18 + 0x10 );
                  *(undefined8*)( lVar19 + 8 + uVar12 * 0x20 ) = 0;
                  if (lVar19 != 0) {
                     lVar19 = *(long*)( lVar19 + -8 );
                     if (lVar19 <= (long)uVar12) goto LAB_0010d396;
                     CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(this_00);
                     lVar19 = *(long*)( pSVar1 + lVar18 + 0x10 );
                     *(undefined8*)( lVar19 + uVar12 * 0x20 ) = 0;
                     if (( uVar11 & 0x4000000 ) != 0) {
                        uVar12 = ( ulong )(uVar29 + 1);
                        if (lVar19 != 0) {
                           lVar19 = *(long*)( lVar19 + -8 );
                           if (lVar19 <= (long)uVar12) goto LAB_0010d396;
                           CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(this_00);
                           lVar19 = *(long*)( pSVar1 + lVar18 + 0x10 );
                           *(undefined8*)( lVar19 + 8 + uVar12 * 0x20 ) = 0;
                           if (lVar19 != 0) {
                              lVar19 = *(long*)( lVar19 + -8 );
                              if (lVar19 <= (long)uVar12) goto LAB_0010d396;
                              CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(this_00);
                              *(undefined8*)( *(long*)( pSVar1 + lVar18 + 0x10 ) + uVar12 * 0x20 ) = 0;
                              goto LAB_0010d03a;
                           }

                        }

                        lVar19 = 0;
                        goto LAB_0010d396;
                     }

                     LAB_0010d03a:uVar14 = local_6c;
                     iVar26 = local_70;
                     uVar12 = (ulong)(int)local_6c;
                     uVar11 = local_70 << 0x1b | local_6c;
                     lVar18 = (long)local_70 * 0x18;
                     lVar19 = *(long*)( pSVar1 + lVar18 + 0x10 );
                     if ((long)uVar12 < 0) {
                        if (lVar19 != 0) goto LAB_0010d422;
                     }
 else if (lVar19 != 0) {
                        if ((long)uVar12 < *(long*)( lVar19 + -8 )) {
                           CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( pSVar1 + lVar18 + 0x10 ));
                           lVar16 = uVar12 * 0x20;
                           puVar20 = (ulong*)( lVar16 + *(long*)( pSVar1 + lVar18 + 0x10 ) );
                           _shadow_atlas_invalidate_shadow(this, puVar20, local_80, pSVar1, iVar26, uVar14);
                           puVar20[3] = uVar23;
                           *puVar20 = local_88;
                           puVar20[1] = param_5;
                           if (iVar22 == 1) {
                              iVar22 = uVar14 + 1;
                              uVar11 = uVar11 | 0x4000000;
                              uVar12 = (ulong)iVar22;
                              if (*(long*)( pSVar1 + lVar18 + 0x10 ) == 0) goto LAB_0010d378;
                              lVar19 = *(long*)( *(long*)( pSVar1 + lVar18 + 0x10 ) + -8 );
                              if (lVar19 <= (long)uVar12) goto LAB_0010d396;
                              CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( pSVar1 + lVar18 + 0x10 ));
                              puVar20 = (ulong*)( *(long*)( pSVar1 + lVar18 + 0x10 ) + 0x20 + lVar16 );
                              _shadow_atlas_invalidate_shadow(this, puVar20, local_80, pSVar1, iVar26, iVar22);
                              *puVar20 = local_88;
                              puVar20[3] = uVar23;
                              puVar20[1] = param_5;
                           }

                           uVar12 = (ulong)uVar21;
                           HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_68);
                           puVar13 = (uint*)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator []((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( pSVar1 + 0x90 ), (RID*)&local_88);
                           *puVar13 = uVar11;
                           goto LAB_0010d1db;
                        }

                        LAB_0010d422:lVar19 = *(long*)( lVar19 + -8 );
                        goto LAB_0010d396;
                     }

                  }

               }

               LAB_0010d378:lVar19 = 0;
               LAB_0010d396:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar12, lVar19, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar10 = (code*)invalidInstructionException();
               ( *pcVar10 )();
            }

            _err_print_error("shadow_atlas_update_light", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x95b, "Condition \"valid_quadrant_count == 0\" is true. Returning: false", 0, 0);
         }

      }

   }

   uVar12 = 0;
   LAB_0010d1db:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12 & 0xffffffff;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::update_light_buffers(RenderDataRD*, PagedArray<RID> const&, Transform3D
   const&, RID, bool, unsigned int&, unsigned int&, bool&) */void RendererRD::LightStorage::update_light_buffers(LightStorage *this, long param_1, long param_2, long param_3, ulong param_5, char param_6, uint *param_7, int *param_8, undefined1 *param_9) {
   float *pfVar1;
   undefined4 uVar2;
   char cVar3;
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
   code *pcVar36;
   float fVar37;
   long *plVar38;
   uint uVar39;
   long lVar40;
   undefined8 *puVar41;
   long lVar42;
   ulong uVar43;
   ulong uVar44;
   uint *puVar45;
   uint uVar46;
   Projection *pPVar47;
   uint uVar48;
   int iVar49;
   undefined8 uVar50;
   long lVar51;
   long lVar52;
   long lVar53;
   long lVar54;
   undefined8 *puVar55;
   long lVar56;
   long lVar57;
   int iVar58;
   uint uVar59;
   long *plVar60;
   uint uVar61;
   int *piVar62;
   ulong uVar63;
   int iVar64;
   uint uVar65;
   long lVar66;
   ulong uVar67;
   long in_FS_OFFSET;
   bool bVar68;
   float fVar69;
   float fVar70;
   float fVar71;
   float fVar72;
   undefined4 uVar73;
   undefined1 auVar74[16];
   undefined4 uVar75;
   double dVar76;
   double dVar77;
   undefined1 auVar78[16];
   undefined1 auVar79[16];
   float fVar80;
   float fVar81;
   undefined1 auVar82[16];
   undefined1 auVar83[16];
   float fVar84;
   float fVar85;
   float fVar86;
   float fVar87;
   ulong local_3f8;
   float fStack_3b0;
   undefined8 *local_3a0;
   char local_364;
   undefined8 local_2c0;
   undefined1 local_2b8[16];
   float local_2a8;
   float fStack_2a4;
   float local_2a0;
   float fStack_29c;
   float local_298;
   float fStack_294;
   float local_290;
   float local_28c;
   float local_288;
   float local_284;
   float local_280;
   float local_27c;
   Transform3D local_278[48];
   undefined8 local_248;
   undefined8 uStack_240;
   undefined8 local_238;
   undefined8 uStack_230;
   undefined8 local_228;
   undefined8 uStack_220;
   Projection local_208[64];
   Projection local_1c8[64];
   Projection local_188[64];
   Projection local_148[64];
   Projection local_108[64];
   undefined4 local_c8;
   undefined4 uStack_c4;
   undefined4 local_c0;
   undefined4 uStack_bc;
   undefined4 local_b8;
   undefined4 local_b4;
   undefined4 local_b0;
   undefined4 local_ac;
   undefined4 local_a8;
   undefined8 local_a4;
   undefined4 local_9c;
   Transform3D local_88[72];
   long local_40;
   plVar38 = ForwardIDStorage::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar40 = RendererRD::TextureStorage::get_singleton();
   Transform3D::affine_inverse();
   uVar43 = *(ulong*)( param_2 + 0x28 );
   *param_7 = 0;
   *param_8 = 0;
   *(undefined8*)( this + 0xc4 ) = 0;
   *param_9 = 0;
   if (0 < (int)uVar43) {
      uVar67 = 0;
      LAB_0010d5a0:if (uVar43 <= uVar67) {
         _err_print_index_error("operator[]", "./core/templates/paged_array.h", 0xa9, (long)(int)(uint)uVar67, uVar43, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar36 = (code*)invalidInstructionException();
         ( *pcVar36 )();
      }

      uVar44 = *(ulong*)( *(long*)( *(long*)( param_2 + 8 ) + ( uVar67 >> ( ( byte ) * (undefined4*)( param_2 + 0x1c ) & 0x3f ) ) * 8 ) + ( ulong )((uint)uVar67 & *(uint*)( param_2 + 0x20 )) * 8 );
      if (( uVar44 != 0 ) && ( (uint)uVar44 < *(uint*)( this + 0x84 ) )) {
         lVar56 = ( ( uVar44 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar44 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
         if (*(int*)( lVar56 + 0x490 ) != (int)( uVar44 >> 0x20 )) {
            if (*(int*)( lVar56 + 0x490 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               uVar43 = *(ulong*)( param_2 + 0x28 );
            }

            goto LAB_0010dd5b;
         }

         if (*(long*)( lVar56 + 0x3d0 ) == 0) {
            LAB_0010f380:_err_print_error("update_light_buffers", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x26d, "Condition \"light == nullptr\" is true. Continuing.", 0);
            uVar43 = *(ulong*)( param_2 + 0x28 );
            goto LAB_0010dd5b;
         }

         uVar43 = *(ulong*)( lVar56 + 0x3d0 );
         if (*(uint*)( this + 0x2c ) <= (uint)uVar43) goto LAB_0010f380;
         piVar62 = (int*)( ( ( uVar43 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( uVar43 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
         if (piVar62[0x38] != (int)( uVar43 >> 0x20 )) {
            if (piVar62[0x38] + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_0010f380;
         }

         iVar64 = *piVar62;
         if (iVar64 != 1) {
            if (iVar64 != 2) {
               if (iVar64 != 0) goto LAB_0010dd40;
               if (( *(uint*)( this + 0x100 ) <= *param_7 ) || ( piVar62[0x28] == 2 )) goto LAB_0010dd57;
               puVar41 = (undefined8*)( ( ulong ) * param_7 * 0x1d0 + *(long*)( this + 0x108 ) );
               fVar69 = *(float*)( lVar56 + 0x3f0 ) * 0.0 + *(float*)( lVar56 + 0x3f4 ) * 0.0 + *(float*)( lVar56 + 0x3f8 );
               fVar84 = *(float*)( lVar56 + 0x3e4 ) * 0.0 + *(float*)( lVar56 + 1000 ) * 0.0 + *(float*)( lVar56 + 0x3ec );
               fVar80 = *(float*)( lVar56 + 0x3d8 ) * 0.0 + *(float*)( lVar56 + 0x3dc ) * 0.0 + *(float*)( lVar56 + 0x3e0 );
               fVar86 = local_290 * fVar80 + local_28c * fVar84 + local_288 * fVar69;
               auVar79._0_4_ = fStack_2a4 * fVar84 + fVar80 * local_2a8 + local_2a0 * fVar69;
               auVar79._4_4_ = local_298 * fVar84 + fVar80 * fStack_29c + fStack_294 * fVar69;
               auVar79._8_8_ = 0;
               fVar69 = auVar79._0_4_ * auVar79._0_4_ + auVar79._4_4_ * auVar79._4_4_ + fVar86 * fVar86;
               uVar50 = 0;
               fVar80 = 0.0;
               if (fVar69 != 0.0) {
                  fVar69 = SQRT(fVar69);
                  fVar80 = fVar86 / fVar69;
                  auVar83._4_4_ = fVar69;
                  auVar83._0_4_ = fVar69;
                  auVar83._8_8_ = _LC274;
                  auVar79 = divps(auVar79, auVar83);
                  uVar50 = auVar79._0_8_;
               }

               cVar3 = *(char*)( (long)piVar62 + 0x71 );
               *puVar41 = uVar50;
               *(float*)( puVar41 + 1 ) = fVar80;
               fVar80 = _LC108;
               fVar69 = _LC108;
               if (cVar3 != '\0') {
                  fVar69 = _LC237;
               }

               if (*(char*)( (long)RendererSceneRenderRD::singleton + 0x179 ) == '\0') {
                  fVar69 = (float)( (double)( fVar69 * (float)piVar62[1] ) * __LC244 );
               }
 else {
                  fVar69 = fVar69 * (float)piVar62[1] * (float)piVar62[0x15];
               }

               *(float*)( (long)puVar41 + 0xc ) = fVar69;
               if (*(long*)( param_1 + 0x1c8 ) != 0) {
                  fVar69 = (float)RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor(RenderingServerGlobals::camera_attributes);
                  *(float*)( (long)puVar41 + 0xc ) = fVar69 * *(float*)( (long)puVar41 + 0xc );
               }

               fVar84 = _LC159;
               fVar69 = (float)piVar62[0x18];
               if (_LC159 <= fVar69) {
                  fVar69 = powf((float)( ( (double)fVar69 + __LC161 ) * __LC162 ), _LC163);
               }
 else {
                  fVar69 = fVar69 * _LC160;
               }

               fVar86 = (float)piVar62[0x17];
               if (fVar84 <= fVar86) {
                  fVar86 = powf((float)( ( (double)fVar86 + __LC161 ) * __LC162 ), _LC163);
               }
 else {
                  fVar86 = fVar86 * _LC160;
               }

               fVar85 = (float)piVar62[0x16];
               if (fVar84 <= fVar85) {
                  fVar85 = powf((float)( ( (double)fVar85 + __LC161 ) * __LC162 ), _LC163);
               }
 else {
                  fVar85 = _LC160 * fVar85;
               }

               fVar84 = (float)piVar62[6];
               iVar58 = piVar62[0x1f];
               *(int*)( puVar41 + 4 ) = piVar62[4];
               iVar64 = piVar62[3];
               *(int*)( (long)puVar41 + 0x24 ) = iVar58;
               *(int*)( (long)puVar41 + 0x4c ) = iVar64;
               fVar70 = _LC93 * fVar84;
               fVar71 = cosf(fVar70);
               puVar41[2] = CONCAT44(fVar86, fVar85);
               puVar41[3] = CONCAT44(fVar80 - fVar71, fVar69);
               if (param_6 == '\0') {
                  *(undefined4*)( (long)puVar41 + 0x34 ) = 0;
                  if (( ( 0.0 < fVar84 ) && ( (char)piVar62[0x1c] != '\0' ) ) && ( 0.0 < (float)piVar62[0x13] )) {
                     *param_9 = 1;
                  }

                  LAB_0010dd2c:*(int*)( puVar41 + 9 ) = piVar62[0x1d];
               }
 else {
                  if ((char)piVar62[0x1c] == '\0') {
                     *(undefined4*)( (long)puVar41 + 0x34 ) = 0;
                     goto LAB_0010dd2c;
                  }

                  fVar69 = (float)piVar62[0x12];
                  *(float*)( (long)puVar41 + 0x34 ) = fVar69;
                  dVar77 = _LC245;
                  dVar76 = (double)fVar69;
                  if (fVar84 <= 0.0) {
                     *(int*)( puVar41 + 9 ) = piVar62[0x1d];
                     if (dVar77 < dVar76) {
                        uVar48 = piVar62[0x26];
                        fVar69 = (float)piVar62[0x13];
                        *(undefined4*)( puVar41 + 5 ) = 0;
                        *(float*)( (long)puVar41 + 0x2c ) = fVar69;
                        goto LAB_0010fc21;
                     }

                  }
 else {
                     fVar80 = tanf(fVar70);
                     fVar69 = (float)piVar62[0x13];
                     if (0.0 < fVar69) {
                        *param_9 = 1;
                     }

                     dVar77 = _LC245;
                     *(int*)( puVar41 + 9 ) = piVar62[0x1d];
                     if (dVar77 < dVar76) {
                        uVar48 = piVar62[0x26];
                        puVar41[5] = CONCAT44(fVar69, fVar80);
                        if (0.0 < fVar80) goto LAB_0010d9d4;
                        LAB_0010fc21:*(float*)( (long)puVar41 + 0x2c ) = fVar69 * *(float*)( RendererSceneRenderRD::singleton + 0x489 );
                        LAB_0010d9d4:iVar64 = 0;
                        if (uVar48 != 0) {
                           bVar68 = uVar48 != 1;
                           uVar48 = ( uint ) * (byte*)( piVar62 + 0x27 );
                           iVar64 = bVar68 + 1 + (uint)bVar68;
                        }

                        local_3a0 = puVar41 + 0x16;
                        *(uint*)( puVar41 + 6 ) = uVar48;
                        lVar66 = lVar56 + 4;
                        lVar57 = 0;
                        do {
                           local_2b8 = *(undefined1(*) [16])( lVar66 + 0x84 );
                           Projection::Projection((Projection*)&local_248);
                           Projection::set_depth_correction(SUB81((Projection*)&local_248, 0), false, true);
                           Projection::operator *(local_208, (Projection*)&local_248);
                           iVar58 = (int)lVar57;
                           if (iVar64 <= (int)lVar57) {
                              iVar58 = iVar64;
                           }

                           uVar2 = *(undefined4*)( lVar56 + 0x78 + (long)iVar58 * 0x9c );
                           Projection::Projection(local_1c8);
                           Projection::set_light_bias();
                           Projection::Projection(local_188);
                           Projection::set_light_atlas_rect((Rect2*)local_188);
                           Transform3D::operator *(local_88, (Transform3D*)&local_2a8);
                           Transform3D::inverse();
                           Projection::Projection((Projection*)local_88, local_278);
                           Projection::operator *(local_108, local_188);
                           Projection::operator *((Projection*)&local_c8, local_108);
                           Projection::operator *(local_148, (Projection*)&local_c8);
                           Projection::~Projection((Projection*)&local_c8);
                           Projection::~Projection(local_108);
                           Projection::~Projection((Projection*)local_88);
                           iVar58 = 0;
                           *(undefined4*)( (long)puVar41 + lVar57 * 4 + 0xa0 ) = uVar2;
                           dVar77 = (double)( *(float*)( lVar66 + 0x78 ) * *(float*)( (long)puVar41 + 0x2c ) );
                           *(float*)( (long)puVar41 + lVar57 * 4 + 0x50 ) = (float)( ( (double)(float)piVar62[0x10] / __LC246 ) * dVar77 );
                           *(float*)( (long)puVar41 + lVar57 * 4 + 0x60 ) = (float)piVar62[0xf] * *(float*)( lVar66 + 0x7c );
                           *(float*)( (long)puVar41 + lVar57 * 4 + 0x70 ) = (float)( ( (double)(float)piVar62[0x14] / __LC246 ) * dVar77 );
                           *(undefined4*)( (long)puVar41 + lVar57 * 4 + 0x80 ) = *(undefined4*)( lVar66 + 0x70 );
                           *(undefined4*)( (long)puVar41 + lVar57 * 4 + 0x90 ) = *(undefined4*)( lVar66 + 0x80 );
                           pPVar47 = local_148;
                           puVar55 = local_3a0;
                           do {
                              lVar42 = 0;
                              do {
                                 *(undefined4*)( (long)puVar55 + lVar42 ) = *(undefined4*)( pPVar47 + lVar42 );
                                 lVar42 = lVar42 + 4;
                              }
 while ( lVar42 != 0x10 );
                              iVar58 = iVar58 + 4;
                              pPVar47 = pPVar47 + 0x10;
                              puVar55 = puVar55 + 2;
                           }
 while ( iVar58 != 0x10 );
                           uVar50 = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar66 + 0x94 ) >> 0x20 ) * local_2b8._12_4_, (float)*(undefined8*)( lVar66 + 0x94 ) * local_2b8._8_4_);
                           if (lVar57 == 2) {
                              puVar41[0x38] = uVar50;
                           }
 else {
                              if (lVar57 == 3) goto LAB_0010f9f4;
                              if (lVar57 == 1) {
                                 puVar41[0x37] = uVar50;
                              }
 else {
                                 puVar41[0x36] = uVar50;
                              }

                           }

                           lVar57 = lVar57 + 1;
                           lVar66 = lVar66 + 0x9c;
                           Projection::~Projection(local_148);
                           Projection::~Projection(local_188);
                           Projection::~Projection(local_1c8);
                           Projection::~Projection(local_208);
                           Projection::~Projection((Projection*)&local_248);
                           local_3a0 = local_3a0 + 8;
                        }
 while ( true );
                     }

                  }

               }

               goto LAB_0010dd35;
            }

            uVar48 = *(uint*)( this + 200 );
            if (( *(uint*)( this + 0xc0 ) <= uVar48 ) || ( ( ( fVar84 = *(float*)( lVar56 + 0x400 ) - *(float*)( param_3 + 0x28 ) ),fVar69 = *(float*)( lVar56 + 0x3fc ) - *(float*)( param_3 + 0x24 ),fVar80 = *(float*)( lVar56 + 0x404 ) - *(float*)( param_3 + 0x2c ),fVar69 = SQRT(fVar69 * fVar69 + fVar84 * fVar84 + fVar80 * fVar80),(char)piVar62[0x21] != '\0' && ( (float)piVar62[0x22] < fVar69 ) ) && ( (float)piVar62[0x22] + (float)piVar62[0x24] < fVar69 ) )) goto LAB_0010dd57;
            pfVar1 = (float*)( *(long*)( this + 0xe8 ) + (ulong)uVar48 * 0x18 );
            *(long*)( pfVar1 + 2 ) = lVar56;
            *(int**)( pfVar1 + 4 ) = piVar62;
            *pfVar1 = fVar69;
            *(uint*)( this + 200 ) = uVar48 + 1;
            goto LAB_0010dd40;
         }

         uVar48 = *(uint*)( this + 0xc4 );
         if (( uVar48 < *(uint*)( this + 0xc0 ) ) && ( ( ( fVar84 = *(float*)( lVar56 + 0x400 ) - *(float*)( param_3 + 0x28 ) ),fVar69 = *(float*)( lVar56 + 0x3fc ) - *(float*)( param_3 + 0x24 ),fVar80 = *(float*)( lVar56 + 0x404 ) - *(float*)( param_3 + 0x2c ),fVar69 = SQRT(fVar69 * fVar69 + fVar84 * fVar84 + fVar80 * fVar80),(char)piVar62[0x21] == '\0' || ( fVar69 <= (float)piVar62[0x22] ) ) || ( fVar69 <= (float)piVar62[0x22] + (float)piVar62[0x24] ) )) {
            pfVar1 = (float*)( *(long*)( this + 0xe0 ) + (ulong)uVar48 * 0x18 );
            *(long*)( pfVar1 + 2 ) = lVar56;
            *(int**)( pfVar1 + 4 ) = piVar62;
            *pfVar1 = fVar69;
            *(uint*)( this + 0xc4 ) = uVar48 + 1;
            goto LAB_0010dd40;
         }

         goto LAB_0010dd57;
      }

      goto LAB_0010dd5b;
   }

   LAB_0010dd86:local_364 = '\0';
   if (*(code**)( *plVar38 + 0x28 ) != ForwardIDStorage::uses_forward_ids) {
      local_364 = ( **(code**)( *plVar38 + 0x28 ) )(plVar38);
   }

   fVar84 = _LC159;
   fVar80 = _LC93;
   fVar69 = _LC108;
   dVar77 = _LC245;
   uVar48 = *(uint*)( this + 0xc4 );
   if (uVar48 + *(int*)( this + 200 ) == 0) {
      LAB_0010e4c6:if (uVar48 != 0) {
         uVar50 = RenderingDevice::get_singleton();
         RenderingDevice::buffer_update(uVar50, *(undefined8*)( this + 0xf0 ), 0, *(int*)( this + 0xc4 ) * 0xc0, *(undefined8*)( this + 0xd0 ));
      }

      if (*(int*)( this + 200 ) != 0) {
         uVar50 = RenderingDevice::get_singleton();
         RenderingDevice::buffer_update(uVar50, *(undefined8*)( this + 0xf8 ), 0, *(int*)( this + 200 ) * 0xc0, *(undefined8*)( this + 0xd8 ));
      }

      if (*param_7 != 0) {
         uVar50 = RenderingDevice::get_singleton();
         RenderingDevice::buffer_update(uVar50, *(undefined8*)( this + 0x110 ), 0, *param_7 * 0x1d0, *(undefined8*)( this + 0x108 ));
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   local_3f8 = 0;
   uVar43 = param_5 * 0x3ffff - 1;
   uVar43 = ( uVar43 ^ uVar43 >> 0x1f ) * 0x15;
   uVar43 = ( uVar43 ^ uVar43 >> 0xb ) * 0x41;
   uVar43 = uVar43 >> 0x16 ^ uVar43;
   uVar67 = 1;
   if ((int)uVar43 != 0) {
      uVar67 = uVar43 & 0xffffffff;
   }

   LAB_0010de88:uVar43 = local_3f8 & 0xffffffff;
   if ((uint)local_3f8 < uVar48) {
      iVar64 = 1;
      puVar41 = (undefined8*)( local_3f8 * 0xc0 + *(long*)( this + 0xd0 ) );
      pfVar1 = (float*)( *(long*)( this + 0xe0 ) + local_3f8 * 0x18 );
      fVar86 = *pfVar1;
      lVar56 = *(long*)( pfVar1 + 2 );
      lVar66 = *(long*)( pfVar1 + 4 );
   }
 else {
      iVar64 = 2;
      uVar43 = ( ulong )((uint)local_3f8 - uVar48);
      puVar41 = (undefined8*)( uVar43 * 0xc0 + *(long*)( this + 0xd8 ) );
      pfVar1 = (float*)( *(long*)( this + 0xe8 ) + uVar43 * 0x18 );
      fVar86 = *pfVar1;
      lVar56 = *(long*)( pfVar1 + 2 );
      lVar66 = *(long*)( pfVar1 + 4 );
   }

   if (( local_364 != '\0' ) && ( *(code**)( *plVar38 + 0x20 ) != ForwardIDStorage::map_forward_id )) {
      ( **(code**)( *plVar38 + 0x20 ) )(plVar38, iVar64 != 1, *(undefined4*)( lVar56 + 0x488 ), uVar43, *(undefined8*)( lVar56 + 0x440 ));
   }

   local_248 = *(undefined8*)( lVar56 + 0x3d8 );
   uStack_240 = *(undefined8*)( lVar56 + 0x3e0 );
   local_238 = *(undefined8*)( lVar56 + 1000 );
   uStack_230 = *(undefined8*)( lVar56 + 0x3f0 );
   local_228 = *(undefined8*)( lVar56 + 0x3f8 );
   uStack_220 = *(undefined8*)( lVar56 + 0x400 );
   fVar85 = fVar69;
   if (*(char*)( lVar66 + 0x71 ) != '\0') {
      fVar85 = _LC237;
   }

   fVar70 = *(float*)( lVar66 + 0x60 );
   if (fVar84 <= fVar70) {
      fVar70 = powf((float)( ( (double)fVar70 + __LC161 ) * __LC162 ), _LC163);
   }
 else {
      fVar70 = fVar70 * _LC160;
   }

   fVar71 = *(float*)( lVar66 + 0x5c );
   if (fVar84 <= fVar71) {
      fVar71 = powf((float)( ( (double)fVar71 + __LC161 ) * __LC162 ), _LC163);
   }
 else {
      fVar71 = _LC160 * fVar71;
   }

   fVar72 = *(float*)( lVar66 + 0x58 );
   if (fVar84 <= fVar72) {
      fVar72 = powf((float)( ( (double)fVar72 + __LC161 ) * __LC162 ), _LC163);
   }
 else {
      fVar72 = fVar72 * _LC160;
   }

   cVar3 = *(char*)( lVar66 + 0x84 );
   *(undefined4*)( (long)puVar41 + 0x2c ) = *(undefined4*)( lVar66 + 0x1c );
   fVar81 = fVar69;
   fVar37 = fVar69;
   if (cVar3 != '\0') {
      if (*(float*)( lVar66 + 0x88 ) < fVar86) {
         fVar87 = fVar69 - ( fVar86 - *(float*)( lVar66 + 0x88 ) ) / *(float*)( lVar66 + 0x90 );
         fVar81 = 0.0;
         if (( 0.0 <= fVar87 ) && ( fVar81 = fVar87 <= fVar69 )) {
            fVar81 = ( _LC247 - ( fVar87 + fVar87 ) ) * fVar87 * fVar87;
         }

      }

      if (*(float*)( lVar66 + 0x8c ) < fVar86) {
         fVar87 = fVar69 - ( fVar86 - *(float*)( lVar66 + 0x8c ) ) / *(float*)( lVar66 + 0x90 );
         fVar37 = 0.0;
         if (( 0.0 <= fVar87 ) && ( fVar37 = fVar87 <= fVar69 )) {
            fVar37 = ( _LC247 - ( fVar87 + fVar87 ) ) * fVar87 * fVar87;
         }

      }

   }

   fVar81 = fVar85 * *(float*)( lVar66 + 4 ) * fVar81;
   if (*(char*)( (long)RendererSceneRenderRD::singleton + 0x179 ) == '\0') {
      dVar76 = (double)fVar81 * __LC244;
      lVar57 = *(long*)( param_1 + 0x1c8 );
   }
 else {
      dVar76 = __LC248;
      if (iVar64 != 1) {
         dVar76 = __LC249;
      }

      dVar76 = (double)( fVar81 * *(float*)( lVar66 + 0x54 ) ) * dVar76;
      lVar57 = *(long*)( param_1 + 0x1c8 );
   }

   fVar85 = (float)dVar76;
   if (lVar57 != 0) {
      fVar81 = (float)RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor(RenderingServerGlobals::camera_attributes, *(undefined8*)( param_1 + 0x1c8 ));
      fVar85 = fVar85 * fVar81;
   }

   uVar73 = *(undefined4*)( lVar66 + 0x74 );
   puVar41[4] = CONCAT44(fVar85 * fVar71, fVar85 * fVar72);
   fVar71 = *(float*)( lVar66 + 0x10 );
   fVar72 = *(float*)( lVar66 + 0x14 );
   *(float*)( puVar41 + 5 ) = fVar85 * fVar70;
   *(float*)( puVar41 + 7 ) = fVar71 + fVar71;
   uVar2 = *(undefined4*)( lVar66 + 0xc );
   *(undefined4*)( (long)puVar41 + 0xac ) = uVar73;
   *(undefined4*)( puVar41 + 0x15 ) = uVar2;
   fVar70 = _LC239;
   fVar85 = _LC240;
   if (dVar77 <= (double)fVar72) {
      fVar70 = fVar69 / fVar72;
      fVar85 = fVar72;
   }

   *puVar41 = CONCAT44(local_228._4_4_ * fStack_29c + (float)uStack_220 * local_298 + uStack_220._4_4_ * fStack_294 + local_280, local_228._4_4_ * local_2a8 + (float)uStack_220 * fStack_2a4 + uStack_220._4_4_ * local_2a0 + local_284);
   puVar41[1] = CONCAT44(fVar70, local_228._4_4_ * local_290 + (float)uStack_220 * local_28c + uStack_220._4_4_ * local_288 + local_27c);
   fVar81 = ( (float)uStack_230 * 0.0 + uStack_230._4_4_ * 0.0 ) - (float)local_228;
   fVar87 = ( uStack_240._4_4_ * 0.0 + (float)local_238 * 0.0 ) - local_238._4_4_;
   fVar71 = ( (float)local_248 * 0.0 + local_248._4_4_ * 0.0 ) - (float)uStack_240;
   fVar72 = local_290 * fVar71 + local_28c * fVar87 + local_288 * fVar81;
   fVar70 = fStack_29c * fVar71 + local_298 * fVar87 + fStack_294 * fVar81;
   fVar71 = fVar71 * local_2a8 + fStack_2a4 * fVar87 + fVar81 * local_2a0;
   fVar81 = fVar71 * fVar71 + fVar70 * fVar70 + fVar72 * fVar72;
   if (fVar81 == 0.0) {
      fVar72 = 0.0;
      fVar70 = 0.0;
      fVar71 = 0.0;
   }
 else {
      fVar81 = SQRT(fVar81);
      fVar71 = fVar71 / fVar81;
      fVar70 = fVar70 / fVar81;
      fVar72 = fVar72 / fVar81;
   }

   fVar81 = *(float*)( lVar66 + 0x18 );
   puVar41[2] = CONCAT44(fVar70, fVar71);
   puVar41[3] = CONCAT44(fVar81, fVar72);
   fVar71 = *(float*)( lVar66 + 0x20 ) * fVar80;
   fVar70 = cosf(fVar71);
   uVar2 = *(undefined4*)( lVar66 + 0x7c );
   lVar57 = *(long*)( lVar66 + 0x68 );
   puVar41[6] = CONCAT44(fVar70, fVar69 / *(float*)( lVar66 + 0x24 ));
   *(undefined4*)( (long)puVar41 + 0xa4 ) = uVar2;
   *(undefined1(*) [16])( puVar41 + 8 ) = (undefined1[16])0x0;
   if (lVar57 == 0) {
      uVar73 = 0;
      fVar70 = 0.0;
      uVar75 = 0;
      fVar72 = 0.0;
   }
 else {
      lVar42 = *(long*)( lVar40 + 0x168 );
      if (( lVar42 != 0 ) && ( *(int*)( lVar40 + 0x18c ) != 0 )) {
         uVar63 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar40 + 0x188 ) * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar40 + 0x188 ) * 8 );
         uVar43 = lVar57 * 0x3ffff - 1;
         uVar43 = ( uVar43 ^ uVar43 >> 0x1f ) * 0x15;
         uVar43 = ( uVar43 ^ uVar43 >> 0xb ) * 0x41;
         uVar43 = uVar43 >> 0x16 ^ uVar43;
         uVar44 = uVar43 & 0xffffffff;
         if ((int)uVar43 == 0) {
            uVar44 = 1;
         }

         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar44 * lVar4;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar63;
         lVar51 = SUB168(auVar6 * auVar21, 8);
         uVar48 = *(uint*)( *(long*)( lVar40 + 0x170 ) + lVar51 * 4 );
         uVar46 = SUB164(auVar6 * auVar21, 8);
         if (uVar48 != 0) {
            uVar61 = 0;
            do {
               if (( uVar48 == (uint)uVar44 ) && ( lVar57 == *(long*)( *(long*)( lVar42 + lVar51 * 8 ) + 0x10 ) )) {
                  lVar57 = *(long*)( lVar42 + (ulong)uVar46 * 8 );
                  uVar73 = *(undefined4*)( lVar57 + 0x20 );
                  fVar70 = *(float*)( lVar57 + 0x24 );
                  uVar75 = *(undefined4*)( lVar57 + 0x28 );
                  fVar72 = *(float*)( lVar57 + 0x2c );
                  goto joined_r0x0010e937;
               }

               uVar61 = uVar61 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar46 + 1) * lVar4;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar63;
               lVar51 = SUB168(auVar7 * auVar22, 8);
               uVar48 = *(uint*)( *(long*)( lVar40 + 0x170 ) + lVar51 * 4 );
               uVar46 = SUB164(auVar7 * auVar22, 8);
            }
 while ( ( uVar48 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar48 * lVar4,auVar23._8_8_ = 0,auVar23._0_8_ = uVar63,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar40 + 0x188 ) * 4 ) + uVar46 ) - SUB164(auVar8 * auVar23, 8)) * lVar4,auVar24._8_8_ = 0,auVar24._0_8_ = uVar63,uVar61 <= SUB164(auVar9 * auVar24, 8) );
         }

      }

      fVar72 = 0.0;
      uVar75 = 0;
      fVar70 = 0.0;
      uVar73 = 0;
      joined_r0x0010e937:if (iVar64 == 2) {
         fVar70 = fVar70 + fVar72;
         fVar72 = (float)( (uint)fVar72 ^ _LC53 );
      }
 else {
         fVar72 = fVar72 * _LC54;
      }

   }

   auVar74._12_4_ = fVar72;
   auVar74._8_4_ = uVar75;
   auVar74._4_4_ = fVar70;
   auVar74._0_4_ = uVar73;
   *(undefined1(*) [16])( puVar41 + 0x16 ) = auVar74;
   if (( ( param_6 != '\0' ) && ( (uint)param_5 < *(uint*)( this + 0x34c ) ) ) && ( param_5 >> 0x20 != 0x7fffffff )) {
      lVar57 = *(long*)( *(long*)( this + 0x338 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200;
      uVar48 = *(uint*)( lVar57 + 0xc0 ) & 0x7fffffff;
      if (( uint )(param_5 >> 0x20) == uVar48) {
         uVar43 = *(ulong*)( lVar56 + 0x3c8 );
         if (param_5 != 0) {
            if (-1 < (int)*(uint*)( lVar57 + 0xc0 )) {
               lVar42 = *(long*)( lVar57 + 0x98 );
               if (( lVar42 != 0 ) && ( *(int*)( lVar57 + 0xbc ) != 0 )) {
                  lVar4 = *(long*)( lVar57 + 0xa0 );
                  uVar46 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar57 + 0xb8 ) * 4 );
                  uVar63 = CONCAT44(0, uVar46);
                  lVar51 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar57 + 0xb8 ) * 8 );
                  uVar44 = uVar43 * 0x3ffff - 1;
                  uVar44 = ( uVar44 ^ uVar44 >> 0x1f ) * 0x15;
                  uVar44 = ( uVar44 ^ uVar44 >> 0xb ) * 0x41;
                  uVar39 = ( uint )(uVar44 >> 0x16) ^ (uint)uVar44;
                  uVar61 = 1;
                  if (uVar39 != 0) {
                     uVar61 = uVar39;
                  }

                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar61 * lVar51;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar63;
                  lVar52 = SUB168(auVar10 * auVar25, 8);
                  uVar39 = *(uint*)( lVar4 + lVar52 * 4 );
                  if (uVar39 != 0) {
                     uVar44 = (ulong)uVar39;
                     iVar49 = SUB164(auVar10 * auVar25, 8);
                     uVar65 = 0;
                     lVar53 = lVar52;
                     iVar58 = iVar49;
                     while (( (uint)uVar44 != uVar61 || ( uVar43 != *(ulong*)( *(long*)( lVar42 + lVar53 * 8 ) + 0x10 ) ) )) {
                        uVar65 = uVar65 + 1;
                        auVar11._8_8_ = 0;
                        auVar11._0_8_ = ( ulong )(iVar58 + 1) * lVar51;
                        auVar26._8_8_ = 0;
                        auVar26._0_8_ = uVar63;
                        lVar53 = SUB168(auVar11 * auVar26, 8);
                        uVar59 = *(uint*)( lVar4 + lVar53 * 4 );
                        uVar44 = (ulong)uVar59;
                        iVar58 = SUB164(auVar11 * auVar26, 8);
                        if (( uVar59 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar44 * lVar51,auVar27._8_8_ = 0,auVar27._0_8_ = uVar63,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar46 + iVar58 ) - SUB164(auVar12 * auVar27, 8)) * lVar51,auVar28._8_8_ = 0,auVar28._0_8_ = uVar63,SUB164(auVar13 * auVar28, 8) < uVar65) goto LAB_0010e460;
                     }
;
                     if (( *(char*)( lVar66 + 0x70 ) != '\0' ) && ( ( *(char*)( lVar66 + 0x84 ) == '\0' || ( fVar86 <= *(float*)( lVar66 + 0x8c ) + *(float*)( lVar66 + 0x90 ) ) ) )) {
                        local_2c0 = *(undefined8*)( lVar56 + 0x3c8 );
                        *(float*)( (long)puVar41 + 0x3c ) = fVar37 * *(float*)( lVar66 + 0x48 );
                        if (( uVar43 != 0 ) && ( (uint)uVar43 < *(uint*)( this + 0x84 ) )) {
                           lVar53 = ( ( uVar43 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar43 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
                           if (*(int*)( lVar53 + 0x490 ) == (int)( uVar43 >> 0x20 )) {
                              if (( *(long*)( lVar53 + 0x460 ) == 0 ) || ( *(int*)( lVar53 + 0x484 ) == 0 )) goto LAB_0010f54f;
                              lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar53 + 0x480 ) * 8 );
                              uVar44 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar53 + 0x480 ) * 4 ));
                              auVar14._8_8_ = 0;
                              auVar14._0_8_ = uVar67 * lVar5;
                              auVar29._8_8_ = 0;
                              auVar29._0_8_ = uVar44;
                              lVar54 = SUB168(auVar14 * auVar29, 8);
                              uVar65 = *(uint*)( *(long*)( lVar53 + 0x478 ) + lVar54 * 4 );
                              iVar58 = SUB164(auVar14 * auVar29, 8);
                              if (uVar65 == 0) goto LAB_0010f54f;
                              uVar59 = 0;
                              goto LAB_0010ede3;
                           }

                           if (*(int*)( lVar53 + 0x490 ) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar44);
                           }

                        }

                        /* WARNING: Does not return */
                        pcVar36 = (code*)invalidInstructionException();
                        ( *pcVar36 )();
                     }

                  }

               }

               goto LAB_0010e460;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         _err_print_error("shadow_atlas_owns_light_instance", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x43b, "Parameter \"atlas\" is null.", 0);
         uVar2 = *(undefined4*)( lVar66 + 0x7c );
      }

   }

   LAB_0010e460:*(undefined4*)( (long)puVar41 + 0x3c ) = 0;
   plVar60 = RendererSceneRenderRD::singleton;
   goto LAB_0010e470;
   LAB_0010f9f4:puVar41[0x39] = uVar50;
   Projection::~Projection(local_148);
   Projection::~Projection(local_188);
   Projection::~Projection(local_1c8);
   Projection::~Projection(local_208);
   Projection::~Projection((Projection*)&local_248);
   fVar69 = (float)( *(uint*)( (long)puVar41 + 0xac ) ^ _LC53 );
   dVar77 = (double)(float)piVar62[0xe];
   if (_LC238 <= (double)(float)piVar62[0xe]) {
      dVar77 = _LC238;
   }

   puVar41[7] = CONCAT44(fVar69, (float)( (double)fVar69 * dVar77 ));
   LAB_0010dd35:*param_7 = *param_7 + 1;
   LAB_0010dd40:uVar50 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
   *(undefined8*)( lVar56 + 0x440 ) = uVar50;
   LAB_0010dd57:uVar43 = *(ulong*)( param_2 + 0x28 );
   LAB_0010dd5b:uVar67 = uVar67 + 1;
   if ((int)uVar43 <= (int)uVar67) goto code_r0x0010dd68;
   goto LAB_0010d5a0;
   code_r0x0010dd68:if (*(uint*)( this + 0xc4 ) == 0) {
      uVar48 = *(uint*)( this + 200 );
   }
 else {
      SortArray<RendererRD::LightStorage::LightInstanceDepthSort,_DefaultComparator<RendererRD::LightStorage::LightInstanceDepthSort>,true>::sort(*(LightInstanceDepthSort**)( this + 0xe0 ), ( ulong ) * (uint*)( this + 0xc4 ));
      uVar48 = *(uint*)( this + 200 );
   }

   if (uVar48 != 0) {
      SortArray<RendererRD::LightStorage::LightInstanceDepthSort,_DefaultComparator<RendererRD::LightStorage::LightInstanceDepthSort>,true>::sort(*(LightInstanceDepthSort**)( this + 0xe8 ), (ulong)uVar48);
   }

   goto LAB_0010dd86;
   while (true) {
      uVar59 = uVar59 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar58 + 1) * lVar5;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar44;
      lVar54 = SUB168(auVar15 * auVar30, 8);
      uVar65 = *(uint*)( *(long*)( lVar53 + 0x478 ) + lVar54 * 4 );
      iVar58 = SUB164(auVar15 * auVar30, 8);
      if (( uVar65 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar65 * lVar5,auVar31._8_8_ = 0,auVar31._0_8_ = uVar44,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar53 + 0x480 ) * 4 ) + iVar58 ) - SUB164(auVar16 * auVar31, 8)) * lVar5,auVar32._8_8_ = 0,auVar32._0_8_ = uVar44,SUB164(auVar17 * auVar32, 8) < uVar59) break;
      LAB_0010ede3:if (( uVar65 == (uint)uVar67 ) && ( param_5 == *(ulong*)( *(long*)( lVar53 + 0x460 ) + ( ulong ) * (uint*)( *(long*)( lVar53 + 0x468 ) + lVar54 * 4 ) * 8 ) )) {
         uVar65 = 0;
         goto LAB_0010eeac;
      }

   }
;
   LAB_0010f54f:_err_print_error("light_instance_get_shadow_texel_size", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x2ba, "Condition \"!li->shadow_atlases.has(p_shadow_atlas)\" is true. Returning: 0", 0);
   goto LAB_0010f574;
   while (true) {
      uVar65 = uVar65 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar49 + 1) * lVar51;
      auVar33._8_8_ = 0;
      auVar33._0_8_ = uVar63;
      lVar52 = SUB168(auVar18 * auVar33, 8);
      uVar39 = *(uint*)( lVar4 + lVar52 * 4 );
      iVar49 = SUB164(auVar18 * auVar33, 8);
      if (( uVar39 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar39 * lVar51,auVar34._8_8_ = 0,auVar34._0_8_ = uVar63,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar46 + iVar49 ) - SUB164(auVar19 * auVar34, 8)) * lVar51,auVar35._8_8_ = 0,auVar35._0_8_ = uVar63,SUB164(auVar20 * auVar35, 8) < uVar65) break;
      LAB_0010eeac:if (( uVar39 == uVar61 ) && ( uVar43 == *(ulong*)( *(long*)( lVar42 + lVar52 * 8 ) + 0x10 ) )) {
         puVar45 = (uint*)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator []((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( lVar57 + 0x90 ), (RID*)&local_2c0);
         fVar86 = fVar69 / (float)( ( ulong )(uint)(*(int*)( lVar57 + 0x74 ) >> 1) / ( ulong ) * (uint*)( lVar57 + ( ulong )(*puVar45 >> 0x1b & 3) * 0x18 ) );
         goto LAB_0010ef17;
      }

   }
;
   _err_print_error("light_instance_get_shadow_texel_size", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x2bf, "Condition \"!shadow_atlas->shadow_owners.has(p_light_instance)\" is true. Returning: 0", 0);
   LAB_0010f574:fVar86 = 0.0;
   LAB_0010ef17:*(float*)( (long)puVar41 + 0x94 ) = fVar86 * *(float*)( lVar66 + 0x3c ) * __LC253;
   fVar86 = *(float*)( lVar66 + 0x40 );
   if (iVar64 == 2) {
      fVar86 = fVar86 / __LC254;
   }

   *(float*)( puVar41 + 0x12 ) = fVar86;
   uVar43 = *(ulong*)( lVar56 + 0x3c8 );
   *(undefined4*)( puVar41 + 0x13 ) = *(undefined4*)( lVar66 + 0x50 );
   if ((uint)param_5 < *(uint*)( this + 0x34c )) {
      lVar57 = *(long*)( *(long*)( this + 0x338 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200;
      if (*(uint*)( lVar57 + 0xc0 ) != uVar48) {
         if (0x7ffffffe < *(uint*)( lVar57 + 0xc0 ) + 0x80000000) goto LAB_0010fb65;
         lVar57 = 0;
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }
 else {
      LAB_0010fb65:lVar57 = 0;
   }

   if (( uVar43 != 0 ) && ( (uint)uVar43 < *(uint*)( this + 0x84 ) )) {
      lVar42 = ( ( uVar43 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar43 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      if (*(int*)( lVar42 + 0x490 ) == (int)( uVar43 >> 0x20 )) goto LAB_0010eff8;
      if (*(int*)( lVar42 + 0x490 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         lVar42 = 0;
         goto LAB_0010eff8;
      }

   }

   lVar42 = 0;
   LAB_0010eff8:puVar45 = (uint*)HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator []((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( lVar57 + 0x90 ), (RID*)( lVar42 + 0x3c8 ));
   uVar48 = *puVar45;
   uVar61 = uVar48 & 0x3ffffff;
   uVar46 = uVar48 >> 0x1b & 3;
   puVar45 = (uint*)( lVar57 + (ulong)uVar46 * 0x18 );
   lVar42 = *(long*)( puVar45 + 4 );
   if (( lVar42 == 0 ) || ( *(uint*)( lVar42 + -8 ) <= uVar61 )) {
      iVar49 = 0;
      iVar58 = 0;
      _err_print_error("light_instance_get_shadow_atlas_rect", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x29b, "Condition \"shadow >= (uint32_t)shadow_atlas->quadrants[quadrant].shadows.size()\" is true. Returning: Rect2()", 0);
      auVar79 = (undefined1[16])0x0;
      fVar86 = 0.0;
   }
 else {
      uVar39 = *puVar45;
      uVar65 = *(uint*)( lVar57 + 0x74 ) >> 1;
      uVar59 = uVar65 / uVar39;
      if (( uVar48 & 0x4000000 ) == 0) {
         iVar49 = 0;
         iVar58 = 0;
      }
 else if (( uVar61 + 1 ) % uVar39 == 0) {
         iVar49 = 1;
         iVar58 = 1 - uVar39;
      }
 else {
         iVar49 = 0;
         iVar58 = 1;
      }

      fVar86 = (float)uVar59;
      auVar78._0_4_ = (float)( ( -(uVar48 >> 0x1b & 1) & uVar65 ) + ( uVar61 % uVar39 ) * uVar59 );
      auVar82._0_4_ = (float)(int)*(uint*)( lVar57 + 0x74 );
      auVar78._12_4_ = fVar86;
      auVar78._8_4_ = fVar86;
      auVar78._4_4_ = (float)( ( -(uVar46 >> 1) & uVar65 ) + ( uVar61 / uVar39 ) * uVar59 );
      fVar86 = fVar86 / auVar82._0_4_;
      auVar82._4_4_ = auVar82._0_4_;
      auVar82._8_4_ = auVar82._0_4_;
      auVar82._12_4_ = auVar82._0_4_;
      auVar79 = divps(auVar78, auVar82);
   }

   *(undefined1(*) [16])( puVar41 + 8 ) = auVar79;
   *(undefined4*)( puVar41 + 0x14 ) = *(undefined4*)( lVar66 + 0x4c );
   if (iVar64 == 1) {
      Transform3D::operator *(local_88, (Transform3D*)&local_2a8);
      Transform3D::inverse();
      puVar41[10] = CONCAT44(uStack_bc, local_c8);
      *(undefined4*)( (long)puVar41 + 0x5c ) = 0;
      *(undefined4*)( puVar41 + 0xb ) = local_b0;
      *(undefined4*)( puVar41 + 0xc ) = uStack_c4;
      *(undefined4*)( (long)puVar41 + 100 ) = local_b8;
      *(undefined4*)( (long)puVar41 + 0x6c ) = 0;
      *(undefined4*)( puVar41 + 0xd ) = local_ac;
      *(undefined4*)( puVar41 + 0xe ) = local_c0;
      *(undefined4*)( (long)puVar41 + 0x74 ) = local_b4;
      *(undefined4*)( (long)puVar41 + 0x7c ) = 0;
      *(undefined4*)( puVar41 + 0xf ) = local_a8;
      *(float*)( (long)puVar41 + 0x8c ) = fVar69;
      puVar41[0x10] = local_a4;
      *(undefined4*)( puVar41 + 0x11 ) = local_9c;
      plVar60 = RendererSceneRenderRD::singleton;
      if (( fVar81 <= 0.0 ) || ( *(float*)( puVar41 + 0x14 ) <= 0.0 )) {
         *(undefined4*)( (long)puVar41 + 0x9c ) = 0;
         *(float*)( puVar41 + 0x14 ) = *(float*)( puVar41 + 0x14 ) * *(float*)( (long)plVar60 + 0x2444 );
      }
 else {
         *(float*)( (long)puVar41 + 0x9c ) = fVar81;
      }

      uVar2 = *(undefined4*)( lVar66 + 0x7c );
      *(float*)( puVar41 + 2 ) = (float)iVar58 * fVar86;
      *(float*)( (long)puVar41 + 0x14 ) = (float)iVar49 * fVar86;
   }
 else {
      Transform3D::operator *(local_88, (Transform3D*)&local_2a8);
      Transform3D::inverse();
      Projection::Projection(local_1c8);
      Projection::set_light_bias();
      Projection::Projection(local_188);
      Projection::set_depth_correction(SUB81(local_188, 0), false, true);
      Projection::operator *(local_148, local_188);
      Projection::Projection((Projection*)local_88, (Transform3D*)local_208);
      Projection::operator *((Projection*)&local_c8, local_1c8);
      Projection::operator *(local_108, (Projection*)&local_c8);
      Projection::~Projection((Projection*)&local_c8);
      Projection::~Projection((Projection*)local_88);
      iVar58 = 0;
      pPVar47 = local_108;
      puVar55 = puVar41;
      do {
         lVar57 = 0;
         do {
            *(undefined4*)( (long)puVar55 + lVar57 + 0x50 ) = *(undefined4*)( pPVar47 + lVar57 );
            plVar60 = RendererSceneRenderRD::singleton;
            lVar57 = lVar57 + 4;
         }
 while ( lVar57 != 0x10 );
         iVar58 = iVar58 + 4;
         pPVar47 = pPVar47 + 0x10;
         puVar55 = puVar55 + 2;
      }
 while ( iVar58 != 0x10 );
      if (( fVar81 <= 0.0 ) || ( *(float*)( puVar41 + 0x14 ) <= 0.0 )) {
         *(undefined4*)( (long)puVar41 + 0x9c ) = 0;
         fVar86 = *(float*)( puVar41 + 0x14 ) * *(float*)( (long)plVar60 + 0x2444 );
         *(float*)( puVar41 + 0x14 ) = fVar86;
      }
 else {
         fVar70 = (float)Projection::get_z_near();
         fVar71 = tanf(fVar71);
         dVar76 = (double)fVar81 * __LC257;
         fVar72 = (float)Projection::get_z_near();
         fStack_3b0 = auVar79._8_4_;
         fVar86 = *(float*)( puVar41 + 0x14 );
         *(float*)( (long)puVar41 + 0x9c ) = (float)( ( ( dVar76 / (double)fVar85 ) / (double)( ( fVar70 * fVar71 ) / fVar72 ) ) * (double)fStack_3b0 );
      }

      *(float*)( puVar41 + 0x12 ) = fVar86 * *(float*)( puVar41 + 0x12 );
      Projection::~Projection(local_108);
      Projection::~Projection(local_148);
      Projection::~Projection(local_188);
      Projection::~Projection(local_1c8);
      uVar2 = *(undefined4*)( lVar66 + 0x7c );
      plVar60 = RendererSceneRenderRD::singleton;
   }

   LAB_0010e470:*(undefined4*)( lVar56 + 0x448 ) = uVar2;
   if (*(code**)( *plVar60 + 0x230 ) != RendererSceneRenderRD::setup_added_light) {
      ( **(code**)( *plVar60 + 0x230 ) )(plVar60, iVar64, &local_248);
   }

   local_3f8 = local_3f8 + 1;
   *param_8 = *param_8 + 1;
   uVar48 = *(uint*)( this + 0xc4 );
   if (*(int*)( this + 200 ) + uVar48 <= (uint)local_3f8) goto LAB_0010e4c6;
   goto LAB_0010de88;
}
/* Error CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(long)
   [clone .isra.0] */void CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *this, long param_1) {
   long *plVar1;
   int iVar2;
   CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined1(*pauVar6)[16];
   undefined1(*pauVar7)[16];
   undefined8 *puVar8;
   char *pcVar9;
   undefined8 uVar10;
   long lVar11;
   long lVar12;
   CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar13;
   CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar14;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar11 = *(long*)this;
   if (lVar11 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar12 = 0;
      pCVar3 = (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)0x0;
   }
 else {
      lVar12 = *(long*)( lVar11 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar11 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar11 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar11 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      pCVar3 = (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( lVar12 * 0x20 );
      if (pCVar3 != (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)0x0) {
         uVar4 = ( ulong )(pCVar3 + -1) | ( ulong )(pCVar3 + -1) >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         pCVar3 = (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( ( uVar4 | uVar4 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 0x20 != 0) {
      uVar4 = param_1 * 0x20 - 1;
      uVar4 = uVar4 | uVar4 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar14 = (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( uVar4 | uVar4 >> 0x20 );
      pCVar13 = pCVar14 + 1;
      if (pCVar13 != (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar13 != pCVar3 ) && ( iVar2 = iVar2 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_00115e52();
            return;
         }

         if (pCVar13 == pCVar3) {
            LAB_0010fe7c:puVar8 = *(undefined8**)this;
            if (puVar8 == (undefined8*)0x0) {
               resize<false>((long)pCVar14);
               return;
            }

            lVar11 = puVar8[-1];
            if (param_1 <= lVar11) goto LAB_0010fe10;
         }
 else {
            if (lVar12 != 0) {
               pCVar14 = this;
               iVar2 = _realloc(this, (long)pCVar13);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_0010fe7c;
            }

            puVar5 = (undefined8*)Memory::alloc_static(( ulong )(pCVar14 + 0x11), false);
            if (puVar5 == (undefined8*)0x0) {
               uVar10 = 0x171;
               pcVar9 = "Parameter \"mem_new\" is null.";
               goto LAB_0010ff12;
            }

            puVar8 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar8;
            lVar11 = 0;
         }

         pauVar6 = (undefined1(*) [16])( puVar8 + lVar11 * 4 );
         do {
            *pauVar6 = (undefined1[16])0x0;
            pauVar7 = pauVar6 + 2;
            pauVar6[1] = (undefined1[16])0x0;
            pauVar6 = pauVar7;
         }
 while ( (undefined1(*) [16])( puVar8 + lVar11 * 4 ) + ( param_1 - lVar11 ) * 2 != pauVar7 );
         LAB_0010fe10:puVar8[-1] = param_1;
         return;
      }

   }

   uVar10 = 0x16a;
   pcVar9 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010ff12:_err_print_error("resize", "./core/templates/cowdata.h", uVar10, pcVar9, 0, 0);
   return;
}
/* RendererRD::LightStorage::shadow_atlas_set_quadrant_subdivision(RID, int, int) */void RendererRD::LightStorage::shadow_atlas_set_quadrant_subdivision(LightStorage *this, ulong param_2, uint param_3, uint param_4) {
   uint *puVar1;
   long *plVar2;
   uint uVar3;
   ulong uVar4;
   code *pcVar5;
   uint uVar6;
   uint *puVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   float fVar13;
   ulong local_40[2];
   local_40[0] = param_2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x34c ) )) {
      lVar8 = (long)(int)param_3;
      puVar1 = (uint*)( *(long*)( *(long*)( this + 0x338 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200 );
      if (puVar1[0x30] == ( uint )(param_2 >> 0x20)) {
         if (param_3 < 4) {
            if (param_4 < 0x4000) {
               if (param_4 != 0) {
                  uVar6 = param_4 - 1 | param_4 - 1 >> 1;
                  uVar6 = uVar6 | uVar6 >> 2;
                  uVar6 = uVar6 | uVar6 >> 4;
                  uVar6 = ( uVar6 | uVar6 >> 8 ) + 1;
                  if (( uVar6 & 0xaaaaaaaa ) != 0) {
                     uVar6 = uVar6 * 2;
                  }

                  fVar13 = (float)(int)uVar6;
                  if (fVar13 < 0.0) {
                     fVar13 = sqrtf(fVar13);
                     param_4 = (uint)fVar13;
                  }
 else {
                     param_4 = (uint)SQRT(fVar13);
                  }

               }

               if (puVar1[lVar8 * 6] != param_4) {
                  lVar9 = 0;
                  lVar12 = *(long*)( puVar1 + lVar8 * 6 + 4 );
                  joined_r0x0011005a:if (lVar12 != 0) {
                     for (; lVar9 < *(long*)( lVar12 + -8 ); lVar9 = lVar9 + 1) {
                        plVar2 = (long*)( lVar12 + lVar9 * 0x20 );
                        if (*plVar2 == 0) goto LAB_0011007b;
                        HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::erase((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)( puVar1 + 0x24 ), (RID*)plVar2);
                        lVar12 = *(long*)( puVar1 + lVar8 * 6 + 4 );
                        if (lVar12 == 0) {
                           lVar10 = 0;
                           LAB_001101d3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar10, "p_index", "size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar5 = (code*)invalidInstructionException();
                           ( *pcVar5 )();
                        }

                        lVar10 = *(long*)( lVar12 + -8 );
                        if (lVar10 <= lVar9) goto LAB_001101d3;
                        uVar4 = *(ulong*)( lVar12 + lVar9 * 0x20 );
                        if (( uVar4 == 0 ) || ( *(uint*)( this + 0x84 ) <= (uint)uVar4 )) goto LAB_00110230;
                        lVar10 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
                        iVar11 = *(int*)( lVar10 + 0x490 );
                        if (iVar11 != (int)( uVar4 >> 0x20 )) goto LAB_00110218;
                        HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>*)( lVar10 + 0x460 ), (RID*)local_40);
                     }

                  }

                  CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( puVar1 + lVar8 * 6 + 4 ), 0);
                  CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>((CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( puVar1 + lVar8 * 6 + 4 ), ( ulong )(param_4 * param_4));
                  uVar6 = 0x40000000;
                  puVar1[lVar8 * 6] = param_4;
                  puVar1[0x1c] = 0x40000000;
                  puVar7 = puVar1;
                  do {
                     uVar3 = *puVar7;
                     if (uVar3 != 0) {
                        if (uVar3 < uVar6) {
                           uVar6 = uVar3;
                        }

                        puVar1[0x1c] = uVar6;
                     }

                     puVar7 = puVar7 + 6;
                  }
 while ( puVar7 != puVar1 + 0x18 );
                  if (uVar6 == 0x40000000) {
                     puVar1[0x1c] = 0;
                  }

                  do {
                     iVar11 = 0;
                     puVar7 = puVar1 + 0x18;
                     do {
                        uVar6 = *puVar7;
                        if (puVar1[(long)(int)uVar6 * 6] < puVar1[(long)(int)puVar7[1] * 6]) {
                           *puVar7 = puVar7[1];
                           iVar11 = iVar11 + 1;
                           puVar7[1] = uVar6;
                        }

                        puVar7 = puVar7 + 1;
                     }
 while ( puVar7 != puVar1 + 0x1b );
                  }
 while ( 0 < iVar11 );
               }

            }
 else {
               _err_print_index_error("shadow_atlas_set_quadrant_subdivision", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x879, (long)(int)param_4, 0x4000, "p_subdivision", "16384", "", false, false);
            }

         }
 else {
            _err_print_index_error("shadow_atlas_set_quadrant_subdivision", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x878, (long)(int)param_3, 4, "p_quadrant", "4", "", false, false);
         }

         return;
      }

      if (puVar1[0x30] + 0x80000000 < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shadow_atlas_set_quadrant_subdivision", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x877, "Parameter \"shadow_atlas\" is null.", 0, 0);
   return;
   LAB_00110218:if (iVar11 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   LAB_00110230:_err_print_error("shadow_atlas_set_quadrant_subdivision", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x88d, "Condition \"!li\" is true. Continuing.");
   LAB_0011007b:lVar12 = *(long*)( puVar1 + lVar8 * 6 + 4 );
   lVar9 = lVar9 + 1;
   goto joined_r0x0011005a;
}
/* RendererRD::LightStorage::shadow_atlas_set_size(RID, int, bool) */void RendererRD::LightStorage::shadow_atlas_set_size(LightStorage *this, ulong param_2, int param_3, char param_4) {
   long lVar1;
   int iVar2;
   undefined8 *puVar3;
   ulong uVar4;
   uint uVar5;
   int *piVar6;
   undefined8 uVar7;
   CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *this_00;
   CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *pCVar8;
   long lVar9;
   int iVar10;
   ulong local_40[2];
   local_40[0] = param_2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x34c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x338 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x348 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x348 ) ) * 200;
      if (*(int*)( lVar1 + 0xc0 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < 0) {
            _err_print_error("shadow_atlas_set_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x855, "Condition \"p_size < 0\" is true.", 0, 0);
            return;
         }

         iVar10 = 0;
         if (param_3 != 0) {
            uVar5 = param_3 - 1U | param_3 - 1U >> 1;
            uVar5 = uVar5 | uVar5 >> 2;
            uVar5 = uVar5 | uVar5 >> 4;
            uVar5 = uVar5 | uVar5 >> 8;
            iVar10 = ( uVar5 | uVar5 >> 0x10 ) + 1;
         }

         if (*(int*)( lVar1 + 0x74 ) == iVar10) {
            if (*(char*)( lVar1 + 0x78 ) == param_4) {
               return;
            }

            lVar9 = *(long*)( lVar1 + 0x80 );
         }
 else {
            lVar9 = *(long*)( lVar1 + 0x80 );
         }

         if (lVar9 != 0) {
            uVar7 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar7);
            *(undefined8*)( lVar1 + 0x80 ) = 0;
         }

         this_00 = (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( lVar1 + 0x10 );
         do {
            CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(this_00, 0);
            pCVar8 = this_00 + 0x18;
            CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(this_00, ( ulong )(uint)(*(int*)( this_00 + -0x10 ) * *(int*)( this_00 + -0x10 )));
            this_00 = pCVar8;
         }
 while ( pCVar8 != (CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>*)( lVar1 + 0x70 ) );
         puVar3 = *(undefined8**)( lVar1 + 0xa8 );
         do {
            while (true) {
               if (puVar3 == (undefined8*)0x0) {
                  if (( *(long*)( lVar1 + 0x98 ) != 0 ) && ( *(int*)( lVar1 + 0xbc ) != 0 )) {
                     lVar9 = 0;
                     uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0xb8 ) * 4 );
                     if (uVar5 != 0) {
                        do {
                           piVar6 = (int*)( *(long*)( lVar1 + 0xa0 ) + lVar9 );
                           if (*piVar6 != 0) {
                              *piVar6 = 0;
                              Memory::free_static(*(void**)( *(long*)( lVar1 + 0x98 ) + lVar9 * 2 ), false);
                              *(undefined8*)( *(long*)( lVar1 + 0x98 ) + lVar9 * 2 ) = 0;
                           }

                           lVar9 = lVar9 + 4;
                        }
 while ( lVar9 != (ulong)uVar5 << 2 );
                     }

                     *(undefined4*)( lVar1 + 0xbc ) = 0;
                     *(undefined1(*) [16])( lVar1 + 0xa8 ) = (undefined1[16])0x0;
                  }

                  *(int*)( lVar1 + 0x74 ) = iVar10;
                  *(char*)( lVar1 + 0x78 ) = param_4;
                  return;
               }

               uVar4 = puVar3[2];
               if (( uVar4 != 0 ) && ( (uint)uVar4 < *(uint*)( this + 0x84 ) )) break;
               LAB_00110507:_err_print_error("shadow_atlas_set_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x86a, "Condition \"!li\" is true. Continuing.", 0);
               puVar3 = (undefined8*)*puVar3;
            }
;
            lVar9 = ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
            iVar2 = *(int*)( lVar9 + 0x490 );
            if (iVar2 != (int)( uVar4 >> 0x20 )) {
               if (iVar2 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00110507;
            }

            HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::erase((HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>*)( lVar9 + 0x460 ), (RID*)local_40);
            puVar3 = (undefined8*)*puVar3;
         }
 while ( true );
      }

      if (*(int*)( lVar1 + 0xc0 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shadow_atlas_set_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x854, "Parameter \"shadow_atlas\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::_light_initialize(RID, RenderingServer::LightType) */void RendererRD::LightStorage::_light_initialize(LightStorage *this, ulong param_2, int param_3) {
   undefined4 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   long lVar14;
   undefined8 uVar15;
   int *piVar16;
   long *plVar17;
   uint uVar18;
   char *pcVar19;
   long in_FS_OFFSET;
   DependencyTracker *local_110;
   int local_108;
   undefined8 local_104;
   undefined8 uStack_fc;
   undefined8 local_f4;
   undefined8 uStack_ec;
   undefined8 local_e4;
   undefined8 uStack_dc;
   undefined8 local_d4;
   undefined8 uStack_cc;
   undefined8 local_c4;
   undefined8 uStack_bc;
   int local_b4;
   undefined4 local_b0;
   undefined4 uStack_ac;
   undefined4 uStack_a8;
   undefined4 uStack_a4;
   undefined8 local_a0;
   undefined2 local_98;
   undefined1 local_96;
   undefined8 local_94;
   undefined8 uStack_8c;
   undefined1 local_84;
   undefined8 local_80;
   undefined4 local_78;
   undefined8 local_74;
   undefined1 local_6c;
   undefined4 local_68;
   undefined8 local_60;
   Dependency local_58[8];
   undefined1 local_50[16];
   undefined1 local_40[16];
   undefined8 local_30;
   long local_20;
   uVar13 = _UNK_0011e068;
   uVar12 = __LC278;
   uVar11 = _UNK_0011e058;
   uVar10 = __LC277;
   uVar9 = _UNK_0011e048;
   uVar8 = __LC276;
   uVar7 = _UNK_0011e038;
   uVar6 = __LC275;
   uVar5 = _UNK_0011e028;
   uVar4 = _LC274;
   uVar3 = _UNK_0011e018;
   uVar2 = __LC272;
   uVar1 = _LC108;
   uVar15 = _LC273;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = _LC108;
   uStack_ac = _LC108;
   uStack_a8 = _LC108;
   uStack_a4 = _LC108;
   local_a0 = 0;
   local_94 = __LC272;
   uStack_8c = _UNK_0011e018;
   local_50 = (undefined1[16])0x0;
   local_40 = (undefined1[16])0x0;
   local_98 = 0;
   local_104 = _LC274;
   uStack_fc = _UNK_0011e028;
   local_96 = 0;
   local_84 = 0;
   local_80 = _LC273;
   local_78 = 0x41200000;
   local_74 = 0;
   local_6c = 0;
   local_68 = 0;
   local_60 = 0;
   local_30 = 2;
   local_f4 = __LC275;
   uStack_ec = _UNK_0011e038;
   local_e4 = __LC276;
   uStack_dc = _UNK_0011e048;
   local_d4 = __LC277;
   uStack_cc = _UNK_0011e058;
   local_c4 = __LC278;
   uStack_bc = _UNK_0011e068;
   local_b4 = _LC270;
   if (param_3 == 0) {
      local_b4 = _LC269;
   }

   local_108 = param_3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      piVar16 = (int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      if (piVar16[0x38] < 0) {
         uVar18 = ( uint )(param_2 >> 0x20);
         if (uVar18 == ( piVar16[0x38] & 0x7fffffffU )) {
            piVar16[0x38] = uVar18;
            *piVar16 = param_3;
            piVar16[0x24] = 0x41200000;
            *(undefined8*)( piVar16 + 1 ) = uVar4;
            *(undefined8*)( piVar16 + 3 ) = uVar5;
            piVar16[0x15] = local_b4;
            *(undefined8*)( piVar16 + 5 ) = uVar6;
            *(undefined8*)( piVar16 + 7 ) = uVar7;
            piVar16[0x1a] = 0;
            piVar16[0x1b] = 0;
            *(undefined8*)( piVar16 + 9 ) = uVar8;
            *(undefined8*)( piVar16 + 0xb ) = uVar9;
            *(undefined2*)( piVar16 + 0x1c ) = 0;
            *(undefined8*)( piVar16 + 0xd ) = uVar10;
            *(undefined8*)( piVar16 + 0xf ) = uVar11;
            *(undefined1*)( (long)piVar16 + 0x72 ) = 0;
            *(undefined8*)( piVar16 + 0x11 ) = uVar12;
            *(undefined8*)( piVar16 + 0x13 ) = uVar13;
            *(undefined1*)( piVar16 + 0x21 ) = 0;
            *(ulong*)( piVar16 + 0x16 ) = CONCAT44(uVar1, uVar1);
            *(ulong*)( piVar16 + 0x18 ) = CONCAT44(uVar1, uVar1);
            *(undefined8*)( piVar16 + 0x22 ) = uVar15;
            *(undefined8*)( piVar16 + 0x1d ) = uVar2;
            *(undefined8*)( piVar16 + 0x1f ) = uVar3;
            piVar16[0x25] = 0;
            piVar16[0x26] = 0;
            piVar16[0x36] = 0;
            piVar16[0x37] = 0;
            *(undefined1*)( piVar16 + 0x27 ) = 0;
            *(undefined1(*) [16])( piVar16 + 0x2e ) = (undefined1[16])0x0;
            piVar16[0x28] = 0;
            *(undefined1(*) [16])( piVar16 + 0x32 ) = (undefined1[16])0x0;
            piVar16[0x2a] = 0;
            piVar16[0x2b] = 0;
            lVar14 = 1;
            if (5 < (uint)hash_table_size_primes._8_4_) {
               do {
                  if ((uint)hash_table_size_primes._8_4_ <= *(uint*)( hash_table_size_primes + lVar14 * 4 )) {
                     piVar16[0x36] = (int)lVar14;
                     goto LAB_001109f0;
                  }

                  lVar14 = lVar14 + 1;
               }
 while ( lVar14 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            }

            LAB_001109f0:if (( local_30._4_4_ != 0 ) && ( (long*)local_40._0_8_ != (long*)0x0 )) {
               plVar17 = (long*)local_40._0_8_;
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&local_110, (uint*)( piVar16 + 0x2c ), (bool)( (char)plVar17 + '\x10' ));
                  plVar17 = (long*)*plVar17;
               }
 while ( plVar17 != (long*)0x0 );
            }

            goto LAB_00110a37;
         }

         pcVar19 = "Attempting to initialize the wrong RID";
         uVar15 = 0xfc;
      }
 else {
         pcVar19 = "Initializing already initialized RID";
         uVar15 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar15, "Method/function failed. Returning: nullptr", pcVar19, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_00110a37:Dependency::~Dependency(local_58);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::LightStorage::directional_light_initialize(RID) */void RendererRD::LightStorage::directional_light_initialize(LightStorage *this, undefined8 param_2) {
   _light_initialize(this, param_2, 0);
   return;
}
/* RendererRD::LightStorage::omni_light_initialize(RID) */void RendererRD::LightStorage::omni_light_initialize(LightStorage *this, undefined8 param_2) {
   _light_initialize(this, param_2, 1);
   return;
}
/* RendererRD::LightStorage::spot_light_initialize(RID) */void RendererRD::LightStorage::spot_light_initialize(LightStorage *this, undefined8 param_2) {
   _light_initialize(this, param_2, 2);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::lightmap_initialize(RID) */void RendererRD::LightStorage::lightmap_initialize(LightStorage *this, undefined8 param_2) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 local_c8[16];
   undefined8 local_b8;
   undefined4 local_b0;
   undefined4 uStack_ac;
   undefined4 uStack_a8;
   undefined4 uStack_a4;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   long local_80;
   long local_70;
   long local_60;
   long local_50;
   Dependency local_48[8];
   undefined1 local_40[16];
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c8 = (undefined1[16])0x0;
   local_b0 = __LC281;
   uStack_ac = _UNK_0011e074;
   uStack_a8 = _UNK_0011e078;
   uStack_a4 = _UNK_0011e07c;
   local_a0 = _LC274;
   local_90 = 0xffffffff00000000;
   local_40 = (undefined1[16])0x0;
   local_30 = (undefined1[16])0x0;
   local_b8 = 0;
   local_98 = 0x3f800000;
   local_80 = 0;
   local_70 = 0;
   local_60 = 0;
   local_50 = 0;
   local_20 = 2;
   RID_Alloc<RendererRD::LightStorage::Lightmap,true>::initialize_rid((RID_Alloc<RendererRD::LightStorage::Lightmap,true>*)( this + 0x268 ), param_2, local_c8);
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

   lVar2 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar1 = (long*)( local_80 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::reflection_probe_initialize(RID) */void RendererRD::LightStorage::reflection_probe_initialize(LightStorage *this, ulong param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 uVar7;
   long *plVar8;
   undefined8 *puVar9;
   uint uVar10;
   char *pcVar11;
   long in_FS_OFFSET;
   DependencyTracker *local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined4 local_98;
   undefined8 local_94;
   undefined4 uStack_8c;
   undefined4 uStack_88;
   undefined4 uStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   undefined4 uStack_78;
   undefined4 local_74;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   Dependency local_50[8];
   undefined1 local_48[16];
   undefined1 local_38[16];
   undefined8 local_28;
   long local_20;
   uVar5 = _UNK_0011e078;
   uVar4 = __LC281;
   uVar3 = _LC274;
   uVar2 = _LC285;
   uVar1 = _LC284;
   uVar7 = _LC282;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_80 = 0;
   local_94 = __LC281;
   uStack_8c = (undefined4)_UNK_0011e078;
   uStack_88 = ( undefined4 )((ulong)_UNK_0011e078 >> 0x20);
   uStack_7c = (undefined4)_LC282;
   uStack_78 = ( undefined4 )((ulong)_LC282 >> 0x20);
   local_68 = 0;
   local_60 = _LC284;
   uStack_a0 = _LC274;
   local_a8 = 0x10000000000;
   local_98 = 1;
   uStack_84 = 0x3f800000;
   local_74 = 0x41a00000;
   local_70 = 0;
   local_58 = _LC285;
   local_28 = 2;
   local_48 = (undefined1[16])0x0;
   local_38 = (undefined1[16])0x0;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x134 ) )) {
      puVar9 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x130 ) ) * 0x90 + *(long*)( *(long*)( this + 0x120 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x130 ) ) * 8 ) );
      if ((int)*(uint*)( puVar9 + 0x11 ) < 0) {
         uVar10 = ( uint )(param_2 >> 0x20);
         if (uVar10 == ( *(uint*)( puVar9 + 0x11 ) & 0x7fffffff )) {
            *(uint*)( puVar9 + 0x11 ) = uVar10;
            puVar9[0x10] = 0;
            *puVar9 = 0x10000000000;
            *(undefined8*)( (long)puVar9 + 0x14 ) = uVar4;
            *(undefined8*)( (long)puVar9 + 0x1c ) = uVar5;
            puVar9[1] = uVar3;
            *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
            *(undefined4*)( puVar9 + 2 ) = 1;
            *(undefined1(*) [16])( puVar9 + 0xe ) = (undefined1[16])0x0;
            *(undefined8*)( (long)puVar9 + 0x24 ) = 0x3f800000;
            *(undefined8*)( (long)puVar9 + 0x2c ) = uVar7;
            *(undefined4*)( (long)puVar9 + 0x34 ) = 0x41a00000;
            puVar9[7] = 0;
            *(undefined4*)( puVar9 + 8 ) = 0;
            *(undefined2*)( (long)puVar9 + 0x44 ) = 0;
            *(undefined1*)( (long)puVar9 + 0x46 ) = 0;
            puVar9[9] = uVar1;
            puVar9[10] = uVar2;
            lVar6 = 1;
            if (5 < (uint)hash_table_size_primes._8_4_) {
               do {
                  if ((uint)hash_table_size_primes._8_4_ <= *(uint*)( hash_table_size_primes + lVar6 * 4 )) {
                     *(int*)( puVar9 + 0x10 ) = (int)lVar6;
                     goto LAB_00110ef8;
                  }

                  lVar6 = lVar6 + 1;
               }
 while ( lVar6 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            }

            LAB_00110ef8:if (( local_28._4_4_ != 0 ) && ( (long*)local_38._0_8_ != (long*)0x0 )) {
               plVar8 = (long*)local_38._0_8_;
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&local_b0, (uint*)( puVar9 + 0xb ), (bool)( (char)plVar8 + '\x10' ));
                  plVar8 = (long*)*plVar8;
               }
 while ( plVar8 != (long*)0x0 );
            }

            goto LAB_00110f3e;
         }

         pcVar11 = "Attempting to initialize the wrong RID";
         uVar7 = 0xfc;
      }
 else {
         pcVar11 = "Initializing already initialized RID";
         uVar7 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar7, "Method/function failed. Returning: nullptr", pcVar11, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_00110f3e:Dependency::~Dependency(local_50);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::LightStorage::reflection_atlas_free(RID) */undefined1  [16] __thiscallRendererRD::LightStorage::reflection_atlas_free(LightStorage *this, ulong param_2) {
   int iVar1;
   ClusterBuilderRD *this_00;
   Object *pOVar2;
   code *pcVar3;
   char cVar4;
   uint uVar5;
   ulong uVar6;
   undefined8 uVar7;
   uint uVar8;
   long lVar9;
   long lVar10;
   undefined1 auVar11[16];
   ulong uStack_50;
   uStack_50 = 0x111035;
   ( **(code**)( *(long*)this + 0x270 ) )(this, param_2, 0, 0);
   if (( param_2 == 0 ) || ( uVar8 = (uint)param_2 * (uint*)( this + 0x18c ) <= uVar8 )) {
      LAB_001111e0:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 );
   lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
   lVar10 = *(long*)( *(long*)( this + 0x178 ) + uVar6 * 8 ) + lVar9;
   iVar1 = *(int*)( lVar10 + 0x40 );
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001111e0;
   }

   this_00 = *(ClusterBuilderRD**)( lVar10 + 0x38 );
   if (this_00 == (ClusterBuilderRD*)0x0) {
      if (iVar1 < 0) {
         LAB_00111164:lVar9 = 0;
         _err_print_error(&_LC19, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         goto LAB_00111150;
      }

   }
 else {
      ClusterBuilderRD::~ClusterBuilderRD(this_00);
      uStack_50 = 0x1110ac;
      Memory::free_static(this_00, false);
      if (*(uint*)( this + 0x18c ) <= uVar8) {
         uVar7 = 0x161;
         LAB_00111232:auVar11 = _err_print_error(&_LC19, "./core/templates/rid_owner.h", uVar7, "Method/function failed.", 0, 0);
         return auVar11;
      }

      uVar6 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 );
      lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
      lVar10 = *(long*)( *(long*)( this + 0x178 ) + uVar6 * 8 ) + lVar9;
      if (*(int*)( lVar10 + 0x40 ) < 0) goto LAB_00111164;
      if (iVar1 != *(int*)( lVar10 + 0x40 )) {
         uVar7 = 0x171;
         goto LAB_00111232;
      }

   }

   if (*(long*)( lVar10 + 0x30 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar2 = *(Object**)( lVar10 + 0x30 );
         cVar4 = predelete_handler(pOVar2);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( lVar10 + 0x28 ));
   lVar10 = *(long*)( this + 0x180 );
   *(undefined4*)( *(long*)( *(long*)( this + 0x178 ) + uVar6 * 8 ) + 0x40 + lVar9 ) = 0xffffffff;
   uVar5 = *(int*)( this + 400 ) - 1;
   *(uint*)( this + 400 ) = uVar5;
   uStack_50 = (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x188 );
   lVar9 = *(long*)( lVar10 + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 );
   *(uint*)( lVar9 + uStack_50 * 4 ) = uVar8;
   LAB_00111150:auVar11._8_8_ = uStack_50;
   auVar11._0_8_ = lVar9;
   return auVar11;
}
/* RendererRD::LightStorage::~LightStorage() */void RendererRD::LightStorage::~LightStorage(LightStorage *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   int iVar4;
   char *pcVar5;
   undefined8 uVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   void *pvVar12;
   uint uVar13;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__LightStorage_0011d920;
   free_reflection_data(this);
   free_light_data(this);
   for (puVar8 = *(undefined8**)( this + 0x3c0 ); puVar8 != (undefined8*)0x0; puVar8 = (undefined8*)*puVar8) {
      uVar6 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar6);
   }

   pvVar12 = *(void**)( this + 0x3b0 );
   singleton = 0;
   if (pvVar12 != (void*)0x0) {
      if (*(int*)( this + 0x3d4 ) != 0) {
         uVar13 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x3d0 ) * 4 );
         if (uVar13 == 0) {
            *(undefined4*)( this + 0x3d4 ) = 0;
            *(undefined1(*) [16])( this + 0x3c0 ) = (undefined1[16])0x0;
         }
 else {
            lVar9 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x3b8 ) + lVar9 ) != 0) {
                  *(int*)( *(long*)( this + 0x3b8 ) + lVar9 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar12 + lVar9 * 2 ), false);
                  pvVar12 = *(void**)( this + 0x3b0 );
                  *(undefined8*)( (long)pvVar12 + lVar9 * 2 ) = 0;
               }

               lVar9 = lVar9 + 4;
            }
 while ( (ulong)uVar13 << 2 != lVar9 );
            *(undefined4*)( this + 0x3d4 ) = 0;
            *(undefined1(*) [16])( this + 0x3c0 ) = (undefined1[16])0x0;
            if (pvVar12 == (void*)0x0) goto LAB_00111379;
         }

      }

      Memory::free_static(pvVar12, false);
      Memory::free_static(*(void**)( this + 0x3b8 ), false);
   }

   LAB_00111379:RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>::~RID_Alloc((RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>*)( this + 0x330 ));
   uVar13 = *(uint*)( this + 0x2f0 );
   *(undefined***)( this + 0x2d0 ) = &PTR__RID_Alloc_0011d8e0;
   if (uVar13 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar13);
      print_error((String_conflict*)&local_48);
      pcVar5 = local_48;
      lVar9 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar9 = local_50;
         }

      }

      local_50 = lVar9;
      if (lVar9 != 0) {
         LOCK();
         plVar1 = (long*)( lVar9 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

   }

   uVar13 = *(uint*)( this + 0x2ec );
   uVar3 = *(uint*)( this + 0x2e8 );
   lVar9 = 0;
   if (uVar3 <= uVar13) {
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x2d8 ) + lVar9 * 8 ), false);
         lVar2 = lVar9 * 8;
         lVar9 = lVar9 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x2e0 ) + lVar2 ), false);
      }
 while ( (uint)lVar9 < uVar13 / uVar3 );
   }

   if (*(void**)( this + 0x2d8 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x2d8 ), false);
      Memory::free_static(*(void**)( this + 0x2e0 ), false);
   }

   if (*(long*)( this + 0x2c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar9 = *(long*)( this + 0x2c8 );
         *(undefined8*)( this + 0x2c8 ) = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   RID_Alloc<RendererRD::LightStorage::Lightmap,true>::~RID_Alloc((RID_Alloc<RendererRD::LightStorage::Lightmap,true>*)( this + 0x268 ));
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar9 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   uVar13 = *(uint*)( this + 0x1e8 );
   *(undefined***)( this + 0x1c8 ) = &PTR__RID_Alloc_0011d8a0;
   if (uVar13 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar13);
      print_error((String_conflict*)&local_48);
      pcVar5 = local_48;
      lVar9 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar9 = local_50;
         }

      }

      local_50 = lVar9;
      if (lVar9 != 0) {
         LOCK();
         plVar1 = (long*)( lVar9 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

   }

   uVar13 = *(uint*)( this + 0x1e4 );
   uVar3 = *(uint*)( this + 0x1e0 );
   lVar9 = 0;
   if (uVar3 <= uVar13) {
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x1d0 ) + lVar9 * 8 ), false);
         lVar2 = lVar9 * 8;
         lVar9 = lVar9 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x1d8 ) + lVar2 ), false);
      }
 while ( (uint)lVar9 < uVar13 / uVar3 );
   }

   if (*(void**)( this + 0x1d0 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x1d0 ), false);
      Memory::free_static(*(void**)( this + 0x1d8 ), false);
   }

   RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>::~RID_Alloc((RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>*)( this + 0x170 ));
   *(undefined***)( this + 0x118 ) = &PTR__RID_Alloc_0011d860;
   uVar13 = *(uint*)( this + 0x138 );
   if (uVar13 == 0) {
      uVar7 = ( ulong ) * (uint*)( this + 0x134 );
      uVar13 = *(uint*)( this + 0x130 );
      puVar8 = *(undefined8**)( this + 0x120 );
      LAB_0011176c:if (uVar13 <= (uint)uVar7) {
         lVar9 = 0;
         while (true) {
            Memory::free_static((void*)puVar8[lVar9], false);
            lVar2 = lVar9 * 8;
            lVar9 = lVar9 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x128 ) + lVar2 ), false);
            if (( uint )(uVar7 / uVar13) <= (uint)lVar9) break;
            puVar8 = *(undefined8**)( this + 0x120 );
         }
;
         LAB_001117ad:puVar8 = *(undefined8**)( this + 0x120 );
      }

   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar13);
      print_error((String_conflict*)&local_48);
      pcVar5 = local_48;
      lVar9 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar9 = local_50;
         }

      }

      local_50 = lVar9;
      if (lVar9 != 0) {
         LOCK();
         plVar1 = (long*)( lVar9 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      uVar13 = *(uint*)( this + 0x130 );
      puVar8 = *(undefined8**)( this + 0x120 );
      if (*(int*)( this + 0x134 ) != 0) {
         uVar10 = 0;
         do {
            lVar9 = ( uVar10 % (ulong)uVar13 ) * 0x90 + puVar8[uVar10 / uVar13];
            if (-1 < *(int*)( lVar9 + 0x88 )) {
               Dependency::~Dependency((Dependency*)( lVar9 + 0x58 ));
               uVar13 = *(uint*)( this + 0x130 );
               puVar8 = *(undefined8**)( this + 0x120 );
            }

            uVar7 = ( ulong ) * (uint*)( this + 0x134 );
            uVar10 = uVar10 + 1;
         }
 while ( uVar10 < uVar7 );
         goto LAB_0011176c;
      }

      if (uVar13 == 0) {
         Memory::free_static((void*)*puVar8, false);
         Memory::free_static((void*)**(undefined8**)( this + 0x128 ), false);
         goto LAB_001117ad;
      }

   }

   if (puVar8 != (undefined8*)0x0) {
      Memory::free_static(puVar8, false);
      Memory::free_static(*(void**)( this + 0x128 ), false);
   }

   RID_Alloc<RendererRD::LightStorage::LightInstance,false>::~RID_Alloc((RID_Alloc<RendererRD::LightStorage::LightInstance,false>*)( this + 0x68 ));
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_0011d820;
   uVar13 = *(uint*)( this + 0x30 );
   if (uVar13 == 0) {
      uVar7 = ( ulong ) * (uint*)( this + 0x2c );
      uVar10 = ( ulong ) * (uint*)( this + 0x28 );
      puVar8 = *(undefined8**)( this + 0x18 );
      LAB_001118e2:if ((uint)uVar7 < (uint)uVar10) goto LAB_00111923;
      lVar9 = 0;
      while (true) {
         Memory::free_static((void*)puVar8[lVar9], false);
         lVar2 = lVar9 * 8;
         lVar9 = lVar9 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x20 ) + lVar2 ), false);
         if (( uint )(uVar7 / uVar10) <= (uint)lVar9) break;
         puVar8 = *(undefined8**)( this + 0x18 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar13);
      print_error((String_conflict*)&local_48);
      pcVar5 = local_48;
      if (local_48 == (char*)0x0) {
         LAB_00111863:if (local_50 == 0) goto LAB_00111879;
         LAB_0011186d:lVar9 = local_50;
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00111879;
         local_50 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
         iVar4 = *(int*)( this + 0x2c );
         uVar13 = *(uint*)( this + 0x28 );
         puVar8 = *(undefined8**)( this + 0x18 );
      }
 else {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00111863;
         local_48 = (char*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
         if (local_50 != 0) goto LAB_0011186d;
         LAB_00111879:iVar4 = *(int*)( this + 0x2c );
         uVar13 = *(uint*)( this + 0x28 );
         puVar8 = *(undefined8**)( this + 0x18 );
      }

      if (iVar4 != 0) {
         uVar10 = (ulong)uVar13;
         uVar11 = 0;
         do {
            lVar9 = ( uVar11 % uVar10 ) * 0xe8 + puVar8[uVar11 / uVar10];
            if (-1 < *(int*)( lVar9 + 0xe0 )) {
               Dependency::~Dependency((Dependency*)( lVar9 + 0xb0 ));
               uVar10 = ( ulong ) * (uint*)( this + 0x28 );
               puVar8 = *(undefined8**)( this + 0x18 );
            }

            uVar7 = ( ulong ) * (uint*)( this + 0x2c );
            uVar11 = uVar11 + 1;
         }
 while ( uVar11 < uVar7 );
         goto LAB_001118e2;
      }

      if (uVar13 != 0) goto LAB_00111923;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x20 ), false);
   }

   puVar8 = *(undefined8**)( this + 0x18 );
   LAB_00111923:if (puVar8 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar8, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x20 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::LightStorage::~LightStorage() */void RendererRD::LightStorage::~LightStorage(LightStorage *this) {
   ~LightStorage(this)
   ;;
   operator_delete(this, 0x3e0);
   return;
}
/* RendererRD::LightStorage::reflection_atlas_create() */undefined8 RendererRD::LightStorage::reflection_atlas_create(LightStorage *this) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   long local_90;
   int local_88;
   int local_84;
   undefined1 local_80[16];
   undefined8 local_70;
   CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection> local_60[16];
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_60[i] = (CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>)0;
   }

   local_70 = 0;
   local_50 = 0;
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_90, "rendering/reflections/reflection_atlas/reflection_count", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   local_88 = Variant::operator_cast_to_int((Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
      StringName::unref();
   }

   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_90, "rendering/reflections/reflection_atlas/reflection_size", false);
   ProjectSettings::get_setting_with_override((StringName*)local_48);
   local_84 = Variant::operator_cast_to_int((Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
      StringName::unref();
   }

   uVar1 = RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>::make_rid((RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>*)( this + 0x170 ), (ReflectionAtlas*)&local_88);
   CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref(local_60);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write() [clone .isra.0]
    */void CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection> *this) {
   long *plVar1;
   CowData<RendererRD::SkyRD::ReflectionData::Layer> *__dest;
   CowData<RendererRD::SkyRD::ReflectionData::Layer> CVar2;
   long lVar3;
   undefined8 uVar4;
   long lVar5;
   code *pcVar6;
   undefined8 *puVar7;
   long lVar8;
   CowData<RendererRD::SkyRD::ReflectionData::Layer> *pCVar9;
   long lVar10;
   ulong uVar11;
   CowData<RendererRD::SkyRD::ReflectionData::Layer> *this_00;
   bool bVar12;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   lVar3 = *(long*)( *(long*)this + -8 );
   uVar11 = 0x10;
   if (lVar3 * 0x78 != 0) {
      uVar11 = lVar3 * 0x78 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = ( uVar11 | uVar11 >> 0x20 ) + 0x11;
   }

   puVar7 = (undefined8*)Memory::alloc_static(uVar11, false);
   if (puVar7 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<RendererRD::SkyRD::ReflectionData::Layer>*)( puVar7 + 10 );
   lVar10 = 0;
   *puVar7 = 1;
   puVar7[1] = lVar3;
   if (lVar3 != 0) {
      do {
         pCVar9 = this_00 + *(long*)this + ( -0x50 - (long)puVar7 );
         *(undefined8*)( this_00 + -0x40 ) = *(undefined8*)pCVar9;
         *(undefined8*)( this_00 + -0x38 ) = *(undefined8*)( pCVar9 + 8 );
         uVar4 = *(undefined8*)( pCVar9 + 0x10 );
         *(undefined8*)( this_00 + -0x20 ) = 0;
         *(undefined8*)( this_00 + -0x30 ) = uVar4;
         plVar1 = (long*)( *(long*)( pCVar9 + 0x20 ) + -0x10 );
         if (*(long*)( pCVar9 + 0x20 ) != 0) {
            do {
               lVar5 = *plVar1;
               if (lVar5 == 0) goto LAB_00111e55;
               LOCK();
               lVar8 = *plVar1;
               bVar12 = lVar5 == lVar8;
               if (bVar12) {
                  *plVar1 = lVar5 + 1;
                  lVar8 = lVar5;
               }

               UNLOCK();
            }
 while ( !bVar12 );
            if (lVar8 != -1) {
               *(undefined8*)( this_00 + -0x20 ) = *(undefined8*)( pCVar9 + 0x20 );
            }

         }

         LAB_00111e55:*(undefined8*)( this_00 + -0x18 ) = *(undefined8*)( pCVar9 + 0x28 );
         CVar2 = pCVar9[0x30];
         *(undefined8*)this_00 = 0;
         lVar5 = *(long*)( pCVar9 + 0x40 );
         this_00[-0x10] = CVar2;
         if (lVar5 != 0) {
            CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref(this_00);
            if (*(long*)( pCVar9 + 0x40 ) != 0) {
               plVar1 = (long*)( *(long*)( pCVar9 + 0x40 ) + -0x10 );
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00111ea8;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar12 = lVar5 == lVar8;
                  if (bVar12) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar12 );
               if (lVar8 != -1) {
                  *(undefined8*)this_00 = *(undefined8*)( pCVar9 + 0x40 );
               }

            }

         }

         LAB_00111ea8:__dest = this_00 + 8;
         lVar10 = lVar10 + 1;
         this_00 = this_00 + 0x78;
         memmove(__dest, pCVar9 + 0x48, 0x30);
      }
 while ( lVar3 != lVar10 );
   }

   _unref(this);
   *(undefined8**)this = puVar7 + 2;
   return;
}
/* RendererRD::LightStorage::reflection_probe_instance_postprocess_step(RID) */char RendererRD::LightStorage::reflection_probe_instance_postprocess_step(LightStorage *this, ulong param_2) {
   char cVar1;
   ulong uVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x1e4 ) <= (uint)param_2 )) {
      LAB_00112200:_err_print_error("reflection_probe_instance_postprocess_step", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x642, "Parameter \"rpi\" is null.", 0, 0);
      return '\0';
   }

   lVar9 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
   if (*(int*)( lVar9 + 0x68 ) != (int)( param_2 >> 0x20 )) {
      if (*(int*)( lVar9 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00112200;
   }

   cVar1 = *(char*)( lVar9 + 0x19 );
   if (cVar1 == '\0') {
      _err_print_error("reflection_probe_instance_postprocess_step", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x643, "Condition \"!rpi->rendering\" is true. Returning: false", 0, 0);
      return '\0';
   }

   uVar2 = *(ulong*)( lVar9 + 0x10 );
   if (( uVar2 == 0 ) || ( *(uint*)( this + 0x18c ) <= (uint)uVar2 )) {
      LAB_00112100:*(undefined1*)( lVar9 + 0x19 ) = 0;
      return '\0';
   }

   lVar8 = *(long*)( *(long*)( this + 0x178 ) + ( ( uVar2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( uVar2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
   if (*(int*)( lVar8 + 0x40 ) != (int)( uVar2 >> 0x20 )) {
      if (*(int*)( lVar8 + 0x40 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00112100;
   }

   if (*(int*)( lVar9 + 8 ) == -1) goto LAB_00112100;
   iVar5 = ( **(code**)( *singleton + 0x220 ) )();
   iVar6 = *(int*)( lVar9 + 8 );
   lVar10 = (long)iVar6;
   cVar4 = (char)iVar6;
   if (iVar5 == 1) {
      lVar7 = *(long*)( lVar8 + 0x28 );
      if (lVar10 < 0) goto LAB_00112260;
      if (lVar7 != 0) {
         lVar7 = *(long*)( lVar7 + -8 );
         if (lVar10 < lVar7) {
            CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( lVar8 + 0x28 ));
            RendererRD::SkyRD::ReflectionData::create_reflection_fast_filter((bool)( (char)*(undefined8*)( lVar8 + 0x28 ) + '\b' + ( (char)( lVar10 << 4 ) - cVar4 ) * '\b' ));
            *(undefined1*)( lVar9 + 0x19 ) = 0;
            *(undefined8*)( lVar9 + 0x1c ) = 1;
            return cVar1;
         }

         goto LAB_0011226d;
      }

   }
 else {
      lVar7 = *(long*)( lVar8 + 0x28 );
      if (*(int*)( lVar9 + 0x1c ) < 2) {
         if (-1 < iVar6) {
            if (lVar7 == 0) goto LAB_001123d0;
            lVar7 = *(long*)( lVar7 + -8 );
            if (lVar7 <= lVar10) goto LAB_0011226d;
            CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( lVar8 + 0x28 ));
            RendererRD::SkyRD::ReflectionData::create_reflection_importance_sample((bool)( (char)*(undefined8*)( lVar8 + 0x28 ) + '\b' + ( (char)( lVar10 << 4 ) - cVar4 ) * '\b' ), 0, *(int*)( lVar9 + 0x20 ), *(uint*)( lVar9 + 0x1c ));
            if (*(int*)( lVar9 + 0x20 ) != 5) {
               *(int*)( lVar9 + 0x20 ) = *(int*)( lVar9 + 0x20 ) + 1;
               return '\0';
            }

            lVar10 = (long)*(int*)( lVar9 + 8 );
            *(undefined4*)( lVar9 + 0x20 ) = 0;
            lVar8 = *(long*)( lVar8 + 0x28 );
            iVar6 = *(int*)( lVar9 + 0x1c ) + 1;
            *(int*)( lVar9 + 0x1c ) = iVar6;
            if (lVar10 < 0) {
               if (lVar8 != 0) goto LAB_0011246c;
            }
 else if (lVar8 != 0) {
               if (lVar10 < *(long*)( lVar8 + -8 )) {
                  lVar10 = *(long*)( lVar8 + 0x40 + lVar10 * 0x78 );
                  if (lVar10 == 0) {
                     LAB_00112430:lVar8 = 0;
                  }
 else {
                     lVar8 = *(long*)( lVar10 + -8 );
                     if (0 < lVar8) {
                        if (*(long*)( lVar10 + 8 ) == 0) {
                           lVar8 = 0;
                        }
 else {
                           lVar8 = *(long*)( *(long*)( lVar10 + 8 ) + -8 );
                        }

                        if (iVar6 != lVar8) {
                           return '\0';
                        }

                        *(undefined1*)( lVar9 + 0x19 ) = 0;
                        *(undefined4*)( lVar9 + 0x1c ) = 1;
                        return cVar1;
                     }

                  }

                  goto LAB_00112433;
               }

               LAB_0011246c:lVar8 = *(long*)( lVar8 + -8 );
               goto LAB_00112409;
            }

            LAB_00112460:lVar8 = 0;
            LAB_00112409:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar8, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

      }
 else if (-1 < lVar10) {
         if (lVar7 != 0) {
            lVar7 = *(long*)( lVar7 + -8 );
            if (lVar7 <= lVar10) goto LAB_0011226d;
            CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( lVar8 + 0x28 ));
            RendererRD::SkyRD::ReflectionData::create_reflection_importance_sample((bool)( (char)*(undefined8*)( lVar8 + 0x28 ) + '\b' + ( (char)( lVar10 << 4 ) - cVar4 ) * '\b' ), 0, 10, *(uint*)( lVar9 + 0x1c ));
            lVar10 = (long)*(int*)( lVar9 + 8 );
            iVar6 = *(int*)( lVar9 + 0x1c ) + 1;
            *(int*)( lVar9 + 0x1c ) = iVar6;
            if (lVar10 < 0) {
               if (*(long*)( lVar8 + 0x28 ) != 0) {
                  lVar8 = *(long*)( *(long*)( lVar8 + 0x28 ) + -8 );
                  goto LAB_00112409;
               }

            }
 else {
               lVar7 = *(long*)( lVar8 + 0x28 );
               if (lVar7 != 0) {
                  lVar8 = *(long*)( lVar7 + -8 );
                  if (lVar8 <= lVar10) goto LAB_00112409;
                  lVar10 = *(long*)( lVar7 + 0x40 + lVar10 * 0x78 );
                  if (lVar10 == 0) goto LAB_00112430;
                  lVar8 = *(long*)( lVar10 + -8 );
                  if (0 < lVar8) {
                     if (*(long*)( lVar10 + 8 ) == 0) {
                        lVar8 = 0;
                     }
 else {
                        lVar8 = *(long*)( *(long*)( lVar10 + 8 ) + -8 );
                     }

                     if (iVar6 != lVar8) {
                        return '\0';
                     }

                     *(undefined1*)( lVar9 + 0x19 ) = 0;
                     *(undefined8*)( lVar9 + 0x1c ) = 1;
                     return cVar1;
                  }

                  LAB_00112433:lVar10 = 0;
                  goto LAB_00112409;
               }

            }

            goto LAB_00112460;
         }

         goto LAB_001123d0;
      }

      LAB_00112260:if (lVar7 != 0) {
         lVar7 = *(long*)( lVar7 + -8 );
         goto LAB_0011226d;
      }

   }

   LAB_001123d0:lVar7 = 0;
   LAB_0011226d:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar7, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* RendererRD::LightStorage::reflection_probe_release_atlas_index(RID) */void RendererRD::LightStorage::reflection_probe_release_atlas_index(LightStorage *this, ulong param_2) {
   long lVar1;
   char cVar2;
   ulong uVar3;
   char *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
      lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 );
      if (*(int*)( lVar6 + 0x68 ) == (int)( param_2 >> 0x20 )) {
         uVar3 = *(ulong*)( lVar6 + 0x10 );
         if (uVar3 == 0) {
            return;
         }

         if ((uint)uVar3 < *(uint*)( this + 0x18c )) {
            lVar1 = *(long*)( *(long*)( this + 0x178 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48;
            if (*(int*)( lVar1 + 0x40 ) == (int)( uVar3 >> 0x20 )) {
               lVar8 = (long)*(int*)( lVar6 + 8 );
               lVar7 = *(long*)( lVar1 + 0x28 );
               if (*(int*)( lVar6 + 8 ) < 0) {
                  if (lVar7 != 0) {
                     lVar7 = *(long*)( lVar7 + -8 );
                     goto LAB_00112595;
                  }

               }
 else if (lVar7 != 0) {
                  lVar7 = *(long*)( lVar7 + -8 );
                  if (lVar8 < lVar7) {
                     CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( lVar1 + 0x28 ));
                     cVar2 = *(char*)( lVar6 + 0x19 );
                     *(undefined8*)( *(long*)( lVar1 + 0x28 ) + lVar8 * 0x78 ) = 0;
                     if (cVar2 != '\0') {
                        *(undefined8*)( lVar6 + 0x1c ) = 1;
                        *(undefined2*)( lVar6 + 0x18 ) = 1;
                     }

                     *(undefined4*)( lVar6 + 8 ) = 0xffffffff;
                     *(undefined8*)( lVar6 + 0x10 ) = 0;
                     return;
                  }

                  goto LAB_00112595;
               }

               lVar7 = 0;
               LAB_00112595:_err_print_index_error("reflection_probe_release_atlas_index", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x5a1, lVar8, lVar7, "rpi->atlas_index", "atlas->reflections.size()", "", false, false);
               return;
            }

            if (*(int*)( lVar1 + 0x40 ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         uVar5 = 0x5a0;
         pcVar4 = "Parameter \"atlas\" is null.";
         goto LAB_001125fa;
      }

      if (*(int*)( lVar6 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar5 = 0x59a;
   pcVar4 = "Parameter \"rpi\" is null.";
   LAB_001125fa:_err_print_error("reflection_probe_release_atlas_index", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", uVar5, pcVar4, 0, 0);
   return;
}
/* RendererRD::LightStorage::reflection_atlas_set_size(RID, int, int) */void RendererRD::LightStorage::reflection_atlas_set_size(LightStorage *this, ulong param_2, int param_3, int param_4) {
   int *piVar1;
   long *plVar2;
   int iVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x18c ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( this + 0x178 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48 );
      if (piVar1[0x10] == (int)( param_2 >> 0x20 )) {
         iVar3 = piVar1[1];
         if (( iVar3 != param_3 ) || ( *piVar1 != param_4 )) {
            if (*(long*)( piVar1 + 0xe ) != 0) {
               ClusterBuilderRD::setup(*(long*)( piVar1 + 0xe ), CONCAT44(iVar3, iVar3), *(undefined4*)( this + 8 ), 0, 0, 0);
            }

            piVar1[1] = param_3;
            *piVar1 = param_4;
            if (*(long*)( piVar1 + 2 ) != 0) {
               uVar5 = RenderingDevice::get_singleton();
               RenderingDevice::free(uVar5, *(undefined8*)( piVar1 + 2 ));
               piVar1[2] = 0;
               piVar1[3] = 0;
               uVar5 = RenderingDevice::get_singleton();
               RenderingDevice::free(uVar5, *(undefined8*)( piVar1 + 4 ));
               lVar6 = *(long*)( piVar1 + 10 );
               piVar1[4] = 0;
               piVar1[5] = 0;
               if (lVar6 != 0) {
                  lVar8 = 0;
                  lVar9 = 0;
                  LAB_001127c8:do {
                     if (*(long*)( lVar6 + -8 ) <= lVar9) {
                        if (*(long*)( lVar6 + -8 ) != 0) {
                           CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( piVar1 + 10 ));
                        }

                        break;
                     }

                     CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( piVar1 + 10 ));
                     RendererRD::SkyRD::ReflectionData::clear_reflection_data();
                     lVar6 = *(long*)( piVar1 + 10 );
                     if (lVar6 == 0) {
                        lVar7 = 0;
                        LAB_00112843:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar4 = (code*)invalidInstructionException();
                        ( *pcVar4 )();
                     }

                     lVar7 = *(long*)( lVar6 + -8 );
                     if (lVar7 <= lVar9) goto LAB_00112843;
                     plVar2 = (long*)( lVar6 + lVar8 );
                     if (*plVar2 == 0) {
                        lVar9 = lVar9 + 1;
                        lVar8 = lVar8 + 0x78;
                        goto LAB_001127c8;
                     }

                     lVar9 = lVar9 + 1;
                     lVar8 = lVar8 + 0x78;
                     ( **(code**)( *(long*)this + 0x2a0 ) )(this, *plVar2);
                     lVar6 = *(long*)( piVar1 + 10 );
                  }
 while ( lVar6 != 0 );
               }

            }

            if (*(long*)( piVar1 + 0xc ) != 0) {
               RenderSceneBuffersRD::cleanup();
               return;
            }

         }

         return;
      }

      if (piVar1[0x10] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_atlas_set_size", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x548, "Parameter \"ra\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::reflection_probe_instance_begin_render(RID, RID) */undefined8 RendererRD::LightStorage::reflection_probe_instance_begin_render(LightStorage *this, ulong param_2, ulong param_3) {
   CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection> *this_00;
   int *piVar1;
   code *pcVar2;
   undefined1(*pauVar3)[16];
   char cVar4;
   byte bVar5;
   int iVar6;
   int iVar7;
   undefined4 uVar8;
   undefined8 uVar9;
   TextureFormat *pTVar10;
   undefined1(*pauVar11)[16];
   Vector *pVVar12;
   long *plVar13;
   RenderSceneBuffersRD *this_01;
   undefined8 *puVar14;
   long lVar15;
   ulong uVar16;
   undefined8 *puVar17;
   long lVar18;
   ulong uVar19;
   undefined8 *puVar20;
   long *plVar21;
   ulong uVar22;
   long lVar23;
   ulong uVar24;
   RenderSceneBuffersRD *pRVar25;
   long lVar26;
   long lVar27;
   Object *pOVar28;
   ulong uVar29;
   long in_FS_OFFSET;
   undefined8 uVar30;
   int local_dc;
   undefined8 local_c0;
   long local_b8;
   undefined8 uStack_b0;
   undefined4 local_a8;
   char *local_98;
   long lStack_90;
   int local_88;
   int iStack_84;
   undefined4 uStack_80;
   undefined4 uStack_7c;
   int iStack_78;
   long local_68;
   undefined2 local_60;
   undefined4 local_58;
   undefined4 uStack_54;
   undefined4 uStack_50;
   undefined4 uStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x18c ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( this + 0x178 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x188 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x188 ) ) * 0x48 );
      if (piVar1[0x10] == (int)( param_3 >> 0x20 )) {
         if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1e4 ) )) {
            puVar17 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 ) );
            if (*(int*)( puVar17 + 0xd ) == (int)( param_2 >> 0x20 )) {
               if (*(long*)( piVar1 + 0xc ) == 0) {
                  this_01 = (RenderSceneBuffersRD*)operator_new(0x368, "");
                  RenderSceneBuffersRD::RenderSceneBuffersRD(this_01);
                  postinitialize_handler((Object*)this_01);
                  cVar4 = RefCounted::init_ref();
                  if (cVar4 == '\0') {
                     pOVar28 = *(Object**)( piVar1 + 0xc );
                     if (pOVar28 != (Object*)0x0) {
                        piVar1[0xc] = 0;
                        piVar1[0xd] = 0;
                        cVar4 = RefCounted::unreference();
                        if (cVar4 != '\0') {
                           cVar4 = predelete_handler(pOVar28);
                           this_01 = (RenderSceneBuffersRD*)0x0;
                           if (cVar4 != '\0') goto LAB_00113421;
                        }

                     }

                  }
 else {
                     pOVar28 = *(Object**)( piVar1 + 0xc );
                     pRVar25 = (RenderSceneBuffersRD*)pOVar28;
                     if (this_01 != (RenderSceneBuffersRD*)pOVar28) {
                        *(RenderSceneBuffersRD**)( piVar1 + 0xc ) = this_01;
                        cVar4 = RefCounted::reference();
                        if (cVar4 == '\0') {
                           piVar1[0xc] = 0;
                           piVar1[0xd] = 0;
                        }

                        pRVar25 = this_01;
                        if (( ( pOVar28 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) {
                           LAB_00113421:( **(code**)( *(long*)pOVar28 + 0x140 ) )(pOVar28);
                           Memory::free_static(pOVar28, false);
                           pRVar25 = this_01;
                           if (this_01 == (RenderSceneBuffersRD*)0x0) goto LAB_001129fd;
                        }

                     }

                     cVar4 = RefCounted::unreference();
                     if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)pRVar25) ),cVar4 != '\0') {
                        ( **(code**)( *(long*)pRVar25 + 0x140 ) )(pRVar25);
                        Memory::free_static(pRVar25, false);
                     }

                  }

               }

               LAB_001129fd:uVar9 = RenderingDevice::get_singleton();
               local_b8 = 0;
               lStack_90 = 0x17;
               local_98 = "Reflection probe render";
               local_58 = _LC108;
               uStack_54 = _LC108;
               uStack_50 = _LC108;
               uStack_4c = _LC108;
               String::parse_latin1((StrRange*)&local_b8);
               RenderingDevice::draw_command_begin_label(uVar9, (StrRange*)&local_b8, &local_58);
               lVar23 = local_b8;
               if (local_b8 != 0) {
                  LOCK();
                  plVar21 = (long*)( local_b8 + -0x10 );
                  *plVar21 = *plVar21 + -1;
                  UNLOCK();
                  if (*plVar21 == 0) {
                     local_b8 = 0;
                     Memory::free_static((void*)( lVar23 + -0x10 ), false);
                  }

               }

               iVar6 = ( **(code**)( *singleton + 0x220 ) )(singleton, *puVar17);
               if (( ( iVar6 == 1 ) && ( *(long*)( piVar1 + 2 ) != 0 ) ) && ( piVar1[1] != 0x100 )) {
                  _err_print_error("reflection_probe_instance_begin_render", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x5db, "ReflectionProbes set to UPDATE_ALWAYS must have an atlas size of 256. Please update the atlas size in the ProjectSettings.");
                  ( **(code**)( *(long*)this + 0x270 ) )(this, param_3, 0x100);
               }

               iVar6 = ( **(code**)( *singleton + 0x220 ) )(singleton, *puVar17);
               if (iVar6 != 1) {
                  LAB_00112ab2:if (*(long*)( piVar1 + 2 ) == 0) {
                     LAB_00112b9b:iVar6 = Image::get_image_required_mipmaps(piVar1[1], piVar1[1], 0xf);
                     lVar23 = RendererSceneRenderRD::singleton[0x169];
                     iVar7 = ( **(code**)( *singleton + 0x220 ) )(singleton, *puVar17);
                     if (iVar7 == 1) {
                        local_dc = 8;
                     }
 else {
                        local_dc = (int)lVar23;
                        if (iVar6 + 1 <= (int)lVar23) {
                           local_dc = iVar6 + 1;
                        }

                     }

                     uStack_7c = 0;
                     iStack_78 = 0;
                     iStack_84 = 1;
                     uStack_80 = 1;
                     local_98 = (char*)__LC230;
                     lStack_90 = _UNK_0011dff8;
                     local_60 = 0;
                     local_68 = 0;
                     local_88 = *piVar1 * 6;
                     uVar8 = ( **(code**)( *RendererSceneRenderRD::singleton + 0x250 ) )();
                     uStack_80 = 6;
                     local_98 = (char*)CONCAT44(piVar1[1], uVar8);
                     lStack_90 = CONCAT44(lStack_90._4_4_, piVar1[1]);
                     iStack_84 = local_dc;
                     cVar4 = ( **(code**)( *RendererSceneRenderRD::singleton + 600 ) )();
                     iStack_78 = ( -(uint)(cVar4 == '\0') & 0xfffffff8 ) + 0xb;
                     pTVar10 = (TextureFormat*)RenderingDevice::get_singleton();
                     local_c0 = 0;
                     local_a8 = 6;
                     local_b8 = __LC227;
                     uStack_b0 = _UNK_0011dfe8;
                     uVar9 = RenderingDevice::texture_create(pTVar10, (TextureView*)&local_98, (Vector*)&local_b8);
                     *(undefined8*)( piVar1 + 2 ) = uVar9;
                     CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_c0);
                     lVar23 = local_68;
                     uVar30 = _UNK_0011dff8;
                     uVar9 = __LC230;
                     if (local_68 != 0) {
                        LOCK();
                        plVar21 = (long*)( local_68 + -0x10 );
                        *plVar21 = *plVar21 + -1;
                        UNLOCK();
                        if (*plVar21 == 0) {
                           local_68 = 0;
                           Memory::free_static((void*)( lVar23 + -0x10 ), false);
                           uVar9 = __LC230;
                           uVar30 = _UNK_0011dff8;
                        }

                     }

                     local_60 = 0;
                     local_88 = (int)__LC231;
                     iStack_84 = (int)( (ulong)__LC231 >> 0x20 );
                     uStack_80 = (undefined4)_UNK_0011e008;
                     uStack_7c = ( undefined4 )((ulong)_UNK_0011e008 >> 0x20);
                     iStack_78 = 0;
                     local_68 = 0;
                     local_98 = (char*)uVar9;
                     lStack_90 = uVar30;
                     uVar9 = RenderingDevice::get_singleton();
                     bVar5 = RenderingDevice::texture_is_format_supported_for_usage(uVar9, 0x7d, 4);
                     iStack_78 = 5;
                     lStack_90 = CONCAT44(lStack_90._4_4_, piVar1[1]);
                     local_98 = (char*)CONCAT44(piVar1[1], bVar5 + 0x7c);
                     pTVar10 = (TextureFormat*)RenderingDevice::get_singleton();
                     local_c0 = 0;
                     local_a8 = 6;
                     local_b8 = __LC227;
                     uStack_b0 = _UNK_0011dfe8;
                     uVar9 = RenderingDevice::texture_create(pTVar10, (TextureView*)&local_98, (Vector*)&local_b8);
                     *(undefined8*)( piVar1 + 4 ) = uVar9;
                     CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_c0);
                     lVar23 = local_68;
                     if (local_68 != 0) {
                        LOCK();
                        plVar21 = (long*)( local_68 + -0x10 );
                        *plVar21 = *plVar21 + -1;
                        UNLOCK();
                        if (*plVar21 == 0) {
                           local_68 = 0;
                           Memory::free_static((void*)( lVar23 + -0x10 ), false);
                        }

                     }

                     iVar6 = *piVar1;
                     uVar24 = (ulong)iVar6;
                     this_00 = (CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( piVar1 + 10 );
                     if ((long)uVar24 < 0) {
                        _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
                        iVar6 = *piVar1;
                        LAB_00112f93:if (0 < iVar6) {
                           lVar23 = *(long*)( piVar1 + 10 );
                           lVar15 = 0;
                           do {
                              if (lVar23 == 0) {
                                 LAB_00113370:lVar23 = 0;
                                 goto LAB_00113391;
                              }

                              lVar23 = *(long*)( lVar23 + -8 );
                              if (lVar23 <= lVar15) goto LAB_00113391;
                              CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                              lVar23 = *(long*)( piVar1 + 10 );
                              lVar18 = lVar15 * 0x78;
                              uVar8 = ( **(code**)( *RendererSceneRenderRD::singleton + 0x250 ) )();
                              lVar27 = RendererSceneRenderRD::singleton[0x169];
                              iVar6 = ( **(code**)( *singleton + 0x220 ) )(singleton, *puVar17);
                              iVar7 = 0;
                              RendererRD::SkyRD::ReflectionData::update_reflection_data(lVar23 + lVar18 + 8, piVar1[1], local_dc, 0, *(undefined8*)( piVar1 + 2 ), (int)lVar15 * 6, iVar6 == 1, (int)lVar27, uVar8);
                              lVar23 = *(long*)( piVar1 + 10 );
                              do {
                                 plVar21 = RendererSceneRenderRD::singleton;
                                 pcVar2 = *(code**)( *RendererSceneRenderRD::singleton + 0x240 );
                                 if (lVar23 == 0) goto LAB_00113370;
                                 lVar23 = *(long*)( lVar23 + -8 );
                                 if (lVar23 <= lVar15) goto LAB_00113391;
                                 CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                                 lVar27 = *(long*)( *(long*)( piVar1 + 10 ) + 0x40 + lVar18 );
                                 if (lVar27 == 0) goto LAB_00113480;
                                 lVar23 = *(long*)( lVar27 + -8 );
                                 if (lVar23 < 1) goto LAB_00113483;
                                 lVar27 = *(long*)( lVar27 + 8 );
                                 if (lVar27 == 0) goto LAB_00113480;
                                 lVar23 = *(long*)( lVar27 + -8 );
                                 if (lVar23 < 1) goto LAB_00113483;
                                 lVar26 = (long)iVar7;
                                 uVar9 = ( *pcVar2 )(plVar21, *(undefined8*)( lVar27 + 0x30 + lVar26 * 8 ), *(undefined8*)( piVar1 + 4 ));
                                 if (*(long*)( piVar1 + 10 ) == 0) goto LAB_00113370;
                                 lVar23 = *(long*)( *(long*)( piVar1 + 10 ) + -8 );
                                 if (lVar23 <= lVar15) goto LAB_00113391;
                                 iVar7 = iVar7 + 1;
                                 CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                                 lVar23 = *(long*)( piVar1 + 10 );
                                 *(undefined8*)( lVar18 + lVar23 + 0x48 + lVar26 * 8 ) = uVar9;
                              }
 while ( iVar7 != 6 );
                              lVar15 = lVar15 + 1;
                           }
 while ( (int)lVar15 < *piVar1 );
                        }

                     }
 else {
                        uVar19 = uVar24;
                        if (*(long*)( piVar1 + 10 ) != 0) {
                           uVar29 = *(ulong*)( *(long*)( piVar1 + 10 ) + -8 );
                           if (uVar24 != uVar29) {
                              if (uVar24 != 0) {
                                 CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                                 uVar16 = uVar24 * 0x78 - 1;
                                 uVar16 = uVar16 >> 1 | uVar16;
                                 uVar16 = uVar16 >> 2 | uVar16;
                                 uVar16 = uVar16 >> 4 | uVar16;
                                 uVar16 = uVar16 >> 8 | uVar16;
                                 uVar16 = uVar16 >> 0x10 | uVar16;
                                 uVar16 = uVar16 >> 0x20 | uVar16;
                                 lVar23 = uVar16 + 1;
                                 if (uVar29 * 0x78 == 0) goto LAB_0011370a;
                                 uVar22 = uVar29 * 0x78 - 1;
                                 uVar22 = uVar22 | uVar22 >> 1;
                                 uVar22 = uVar22 | uVar22 >> 2;
                                 uVar22 = uVar22 | uVar22 >> 4;
                                 uVar22 = uVar22 | uVar22 >> 8;
                                 uVar22 = uVar22 | uVar22 >> 0x10;
                                 uVar22 = uVar22 | uVar22 >> 0x20;
                                 if ((long)uVar29 < (long)uVar24) {
                                    if (uVar16 != uVar22) goto LAB_00113770;
                                    goto LAB_00112f12;
                                 }

                                 lVar15 = uVar22 + 1;
                                 goto LAB_00113637;
                              }

                              CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref(this_00);
                              iVar6 = *piVar1;
                           }

                           goto LAB_00112f93;
                        }

                        if (uVar24 != 0) {
                           uVar29 = 0;
                           CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(this_00);
                           LAB_0011370a:uVar16 = uVar24 * 0x78 - 1;
                           uVar16 = uVar16 | uVar16 >> 1;
                           uVar16 = uVar16 | uVar16 >> 2;
                           uVar16 = uVar16 | uVar16 >> 4;
                           uVar16 = uVar16 >> 8 | uVar16;
                           uVar16 = uVar16 | uVar16 >> 0x10;
                           lVar23 = ( uVar16 | uVar16 >> 0x20 ) + 1;
                           if ((long)uVar24 <= (long)uVar29) {
                              lVar15 = 0;
                              LAB_00113637:while (lVar27 = *(long*)( piVar1 + 10 ),lVar27 != 0) {
                                 if (*(ulong*)( lVar27 + -8 ) <= uVar19) {
                                    if (lVar15 != lVar23) {
                                       iVar6 = CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_realloc(this_00, lVar23);
                                       if (iVar6 != 0) goto LAB_00112f91;
                                       lVar27 = *(long*)( piVar1 + 10 );
                                       if (lVar27 == 0) {
                                          _DAT_00000000 = 0;
                                          /* WARNING: Does not return */
                                          pcVar2 = (code*)invalidInstructionException();
                                          ( *pcVar2 )();
                                       }

                                    }

                                    *(ulong*)( lVar27 + -8 ) = uVar24;
                                    iVar6 = *piVar1;
                                    goto LAB_00112f93;
                                 }

                                 lVar27 = lVar27 + uVar19 * 0x78;
                                 CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref((CowData<RendererRD::SkyRD::ReflectionData::Layer>*)( lVar27 + 0x40 ));
                                 if (*(long*)( lVar27 + 0x20 ) != 0) {
                                    LOCK();
                                    plVar21 = (long*)( *(long*)( lVar27 + 0x20 ) + -0x10 );
                                    *plVar21 = *plVar21 + -1;
                                    UNLOCK();
                                    if (*plVar21 == 0) {
                                       lVar18 = *(long*)( lVar27 + 0x20 );
                                       *(undefined8*)( lVar27 + 0x20 ) = 0;
                                       Memory::free_static((void*)( lVar18 + -0x10 ), false);
                                    }

                                 }

                                 uVar19 = uVar19 + 1;
                              }
;
                              LAB_00115e74:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
                              ( *pcVar2 )();
                           }

                           LAB_00113770:if (uVar29 == 0) {
                              puVar14 = (undefined8*)Memory::alloc_static(lVar23 + 0x10, false);
                              if (puVar14 == (undefined8*)0x0) {
                                 _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                                 iVar6 = *piVar1;
                              }
 else {
                                 puVar20 = puVar14 + 2;
                                 *puVar14 = 1;
                                 puVar14[1] = 0;
                                 *(undefined8**)( piVar1 + 10 ) = puVar20;
                                 lVar23 = 0;
                                 LAB_00112f23:if (lVar23 < (long)uVar24) {
                                    pauVar11 = (undefined1(*) [16])( puVar20 + lVar23 * 0xf );
                                    do {
                                       *(undefined8*)pauVar11[1] = 0;
                                       pauVar3 = pauVar11 + 7;
                                       *pauVar11 = (undefined1[16])0x0;
                                       *(undefined8*)pauVar11[2] = 0;
                                       *(undefined8*)( pauVar11[2] + 8 ) = 0;
                                       pauVar11[3][0] = 1;
                                       *(undefined8*)pauVar11[4] = 0;
                                       for (int i = 0; i < 3; i++) {
                                          *(undefined1(*) [16])( pauVar11[( i + 4 )] + 8 ) = (undefined1[16])0;
                                       }

                                       pauVar11 = (undefined1(*) [16])( *pauVar3 + 8 );
                                    }
 while ( (undefined1(*) [16])( puVar20 + uVar24 * 0xf ) != (undefined1(*) [16])( *pauVar3 + 8 ) );
                                 }

                                 puVar20[-1] = uVar24;
                                 LAB_00112f91:iVar6 = *piVar1;
                              }

                           }
 else {
                              iVar6 = CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_realloc(this_00, lVar23);
                              if (iVar6 == 0) {
                                 LAB_00112f12:puVar20 = *(undefined8**)( piVar1 + 10 );
                                 if (puVar20 == (undefined8*)0x0) goto LAB_00115e74;
                                 lVar23 = puVar20[-1];
                                 goto LAB_00112f23;
                              }

                              iVar6 = *piVar1;
                           }

                           goto LAB_00112f93;
                        }

                     }

                     lStack_90 = 0;
                     Vector<RID>::push_back((Vector<RID>*)&local_98, *(undefined8*)( piVar1 + 4 ));
                     pVVar12 = (Vector*)RenderingDevice::get_singleton();
                     uVar9 = RenderingDevice::framebuffer_create(pVVar12, (long)&local_98, 0xffffffff);
                     *(undefined8*)( piVar1 + 6 ) = uVar9;
                     RenderSceneBuffersRD::configure_for_reflections(*(undefined8*)( piVar1 + 0xc ));
                     lVar23 = lStack_90;
                     if (lStack_90 != 0) {
                        LOCK();
                        plVar21 = (long*)( lStack_90 + -0x10 );
                        *plVar21 = *plVar21 + -1;
                        UNLOCK();
                        if (*plVar21 == 0) {
                           lStack_90 = 0;
                           Memory::free_static((void*)( lVar23 + -0x10 ), false);
                        }

                     }

                  }

                  iVar6 = *(int*)( puVar17 + 1 );
                  plVar21 = *(long**)( piVar1 + 10 );
                  if (iVar6 != -1) goto LAB_00112ad1;
                  if (plVar21 == (long*)0x0) goto LAB_00112b15;
                  LAB_00113331:plVar13 = plVar21;
                  lVar23 = 0;
                  do {
                     lVar15 = lVar23;
                     if (plVar21[-1] <= lVar15) {
                        lVar15 = 0;
                        lVar23 = 0;
                        goto LAB_00113810;
                     }

                     lVar27 = *plVar13;
                     plVar13 = plVar13 + 0xf;
                     lVar23 = lVar15 + 1;
                  }
 while ( lVar27 != 0 );
                  iVar6 = (int)lVar15;
                  *(int*)( puVar17 + 1 ) = iVar6;
                  lVar15 = (long)iVar6;
                  goto LAB_00112add;
               }

               if (*(long*)( piVar1 + 2 ) == 0) goto LAB_00112b9b;
               plVar21 = *(long**)( piVar1 + 10 );
               if (plVar21 == (long*)0x0) {
                  LAB_00113480:lVar23 = 0;
                  LAB_00113483:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar23, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar23 = plVar21[-1];
               if (lVar23 < 1) goto LAB_00113483;
               lVar15 = plVar21[8];
               if (lVar15 == 0) goto LAB_00113480;
               lVar23 = *(long*)( lVar15 + -8 );
               if (lVar23 < 1) goto LAB_00113483;
               if (( *(long*)( lVar15 + 8 ) == 0 ) || ( *(long*)( *(long*)( lVar15 + 8 ) + -8 ) != 8 )) {
                  uVar9 = RenderingDevice::get_singleton();
                  RenderingDevice::free(uVar9, *(undefined8*)( piVar1 + 2 ));
                  lVar23 = *(long*)( piVar1 + 10 );
                  piVar1[2] = 0;
                  piVar1[3] = 0;
                  if (lVar23 != 0) {
                     lVar27 = 0;
                     lVar15 = 0;
                     do {
                        if (*(long*)( lVar23 + -8 ) <= lVar15) {
                           if (*(long*)( lVar23 + -8 ) != 0) {
                              CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( piVar1 + 10 ));
                           }

                           break;
                        }

                        if (*(long*)( lVar23 + lVar27 ) != 0) {
                           ( **(code**)( *(long*)this + 0x2a0 ) )(this, *(long*)( lVar23 + lVar27 ));
                           lVar23 = *(long*)( piVar1 + 10 );
                        }

                        lVar15 = lVar15 + 1;
                        lVar27 = lVar27 + 0x78;
                     }
 while ( lVar23 != 0 );
                     goto LAB_00112ab2;
                  }

                  goto LAB_00112b9b;
               }

               iVar6 = *(int*)( puVar17 + 1 );
               if (iVar6 == -1) goto LAB_00113331;
               lVar15 = (long)iVar6;
               if (lVar15 < 0) goto LAB_00113559;
               goto LAB_00112ae6;
            }

            if (*(int*)( puVar17 + 0xd ) + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("reflection_probe_instance_begin_render", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x5d2, "Parameter \"rpi\" is null.", 0, 0);
         uVar9 = 0;
         goto LAB_00112b42;
      }

      if (piVar1[0x10] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("reflection_probe_instance_begin_render", "servers/rendering/renderer_rd/storage_rd/light_storage.cpp", 0x5cf, "Parameter \"atlas\" is null.", 0, 0);
   uVar9 = 0;
   goto LAB_00112b42;
   while (true) {
      uVar24 = *(ulong*)( (long)plVar21 + lVar15 );
      if (( ( ( uVar24 != 0 ) && ( (uint)uVar24 < *(uint*)( this + 0x1e4 ) ) ) && ( iVar6 = *(int*)( ( ( uVar24 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1e0 ) ) * 0x70 + *(long*)( *(long*)( this + 0x1d0 ) + ( ( uVar24 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1e0 ) ) * 8 ) + 0x68 ) ),iVar6 != (int)( uVar24 >> 0x20 ) )) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         plVar21 = *(long**)( piVar1 + 10 );
      }

      lVar23 = lVar23 + 1;
      lVar15 = lVar15 + 0x78;
      if (plVar21 == (long*)0x0) break;
      LAB_00113810:if (plVar21[-1] <= lVar23) break;
   }
;
   iVar6 = *(int*)( puVar17 + 1 );
   if (iVar6 == -1) {
      LAB_00112b15:*(undefined8*)( (long)puVar17 + 0x1c ) = 1;
      *(undefined2*)( puVar17 + 3 ) = 0x100;
      puVar17[2] = param_3;
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      uVar9 = 1;
      LAB_00112b42:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar9;
   }

   LAB_00112ad1:lVar15 = (long)iVar6;
   if (lVar15 < 0) {
      if (plVar21 != (long*)0x0) {
         LAB_00113559:lVar23 = plVar21[-1];
         goto LAB_00113391;
      }

   }
 else {
      LAB_00112add:if (plVar21 != (long*)0x0) {
         LAB_00112ae6:lVar23 = plVar21[-1];
         if (lVar23 <= lVar15) goto LAB_00113391;
         CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( piVar1 + 10 ));
         *(ulong*)( *(long*)( piVar1 + 10 ) + (long)iVar6 * 0x78 ) = param_2;
         goto LAB_00112b15;
      }

   }

   lVar23 = 0;
   LAB_00113391:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar15, lVar23, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::shadow_atlas_create() */undefined8 RendererRD::LightStorage::shadow_atlas_create(LightStorage *this) {
   long *plVar1;
   ShadowAtlas *pSVar2;
   undefined8 uVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ShadowAtlas *pSVar7;
   long in_FS_OFFSET;
   ShadowAtlas local_e8[96];
   undefined8 local_88;
   undefined8 uStack_80;
   undefined8 local_78;
   undefined1 local_70;
   undefined1 local_68[16];
   undefined1 local_50[16];
   undefined1 local_40[16];
   undefined8 local_30;
   long local_20;
   pSVar2 = local_e8;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar7 = local_e8;
   for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8*)pSVar7 = 0;
      pSVar7 = (ShadowAtlas*)( (long)pSVar7 + 8 );
   }

   do {
      *(undefined4*)pSVar2 = 0;
      puVar5 = (undefined8*)( (long)pSVar2 + 0x18 );
      *(undefined8*)( (long)pSVar2 + 0x10 ) = 0;
      pSVar2 = (ShadowAtlas*)puVar5;
   }
 while ( &local_88 != puVar5 );
   local_78 = 0;
   local_70 = 1;
   local_88 = __LC300;
   uStack_80 = _UNK_0011e088;
   local_30 = 2;
   local_68 = (undefined1[16])0x0;
   local_50 = (undefined1[16])0x0;
   local_40 = (undefined1[16])0x0;
   uVar3 = RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>::make_rid((RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>*)( this + 0x330 ), local_e8);
   puVar5 = &local_88;
   do {
      puVar6 = puVar5 + -3;
      if (puVar5[-1] != 0) {
         LOCK();
         plVar1 = (long*)( puVar5[-1] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( puVar5[-1] + -0x10 ), false);
         }

      }

      puVar5 = puVar6;
   }
 while ( (ShadowAtlas*)puVar6 != local_e8 );
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* RendererRD::ForwardIDStorage::allocate_forward_id(RendererRD::ForwardIDType) */undefined8 RendererRD::ForwardIDStorage::allocate_forward_id(void) {
   return 0xffffffff;
}
/* RendererRD::ForwardIDStorage::free_forward_id(RendererRD::ForwardIDType, int) */void RendererRD::ForwardIDStorage::free_forward_id(void) {
   return;
}
/* RendererRD::ForwardIDStorage::map_forward_id(RendererRD::ForwardIDType, int, unsigned int,
   unsigned long) */void RendererRD::ForwardIDStorage::map_forward_id(void) {
   return;
}
/* RendererRD::ForwardIDStorage::uses_forward_ids() const */undefined8 RendererRD::ForwardIDStorage::uses_forward_ids(void) {
   return 0;
}
/* RendererLightStorage::light_instances_can_render_shadow_cube() const */undefined8 RendererLightStorage::light_instances_can_render_shadow_cube(void) {
   return 1;
}
/* RendererRD::LightStorage::lightmap_get_probe_capture_update_speed() const */undefined4 RendererRD::LightStorage::lightmap_get_probe_capture_update_speed(LightStorage *this) {
   return *(undefined4*)( this + 0x260 );
}
/* RendererSceneRenderRD::setup_added_reflection_probe(Transform3D const&, Vector3 const&) */void RendererSceneRenderRD::setup_added_reflection_probe(Transform3D *param_1, Vector3 *param_2) {
   return;
}
/* RendererSceneRenderRD::setup_added_light(RenderingServer::LightType, Transform3D const&, float,
   float) */void RendererSceneRenderRD::setup_added_light(void) {
   return;
}
/* RendererRD::LightStorage::light_instance_is_shadow_visible_at_position(RID, Vector3 const&) const
    */bool RendererRD::LightStorage::light_instance_is_shadow_visible_at_position(LightStorage *this, ulong param_2, float *param_3) {
   ulong uVar1;
   long lVar2;
   long lVar3;
   float fVar4;
   float fVar5;
   float fVar6;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x84 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x498 + *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 );
      if (*(int*)( lVar3 + 0x490 ) == (int)( param_2 >> 0x20 )) {
         if (*(long*)( lVar3 + 0x3d0 ) != 0) {
            uVar1 = *(ulong*)( lVar3 + 0x3d0 );
            if ((uint)uVar1 < *(uint*)( this + 0x2c )) {
               lVar2 = ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
               if (*(int*)( lVar2 + 0xe0 ) == (int)( uVar1 >> 0x20 )) {
                  if (*(char*)( lVar2 + 0x70 ) == '\0') {
                     return false;
                  }

                  if (*(char*)( lVar2 + 0x84 ) != '\0') {
                     fVar6 = *(float*)( lVar3 + 0x400 ) - param_3[1];
                     fVar4 = *(float*)( lVar3 + 0x3fc ) - *param_3;
                     fVar5 = *(float*)( lVar3 + 0x404 ) - param_3[2];
                     return SQRT(fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5) <= *(float*)( lVar2 + 0x8c ) + *(float*)( lVar2 + 0x90 );
                  }

                  return (bool)*(char*)( lVar2 + 0x70 );
               }

               if (*(int*)( lVar2 + 0xe0 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

         }

         _err_print_error("light_instance_is_shadow_visible_at_position", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x267, "Parameter \"light\" is null.", 0, 0);
         return false;
      }

      if (*(int*)( lVar3 + 0x490 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_instance_is_shadow_visible_at_position", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x265, "Parameter \"light_instance\" is null.", 0, 0);
   return false;
}
/* RendererRD::LightStorage::light_get_type(RID) const */undefined4 RendererRD::LightStorage::light_get_type(LightStorage *this, ulong param_2) {
   int iVar1;
   undefined4 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      puVar2 = (undefined4*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      iVar1 = puVar2[0x38];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_type", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x1ff, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_get_reverse_cull_face_mode(RID) const */undefined1 RendererRD::LightStorage::light_get_reverse_cull_face_mode(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x72 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_reverse_cull_face_mode", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x24c, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_get_color(RID) */undefined1  [16] __thiscallRendererRD::LightStorage::light_get_color(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1(*) [16])( lVar2 + 0x58 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_get_color", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x215, "Parameter \"light\" is null.", 0, 0);
   return ZEXT816(0x3f80000000000000) << 0x40;
}
/* RendererRD::LightStorage::light_get_param(RID, RenderingServer::LightParam) */undefined4 RendererRD::LightStorage::light_get_param(LightStorage *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         iVar1 = *(int*)( lVar2 + 0xe0 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            return *(undefined4*)( lVar2 + 4 + (long)param_3 * 4 );
         }

         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("light_get_param", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x207, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* RendererRD::LightStorage::light_has_shadow(RID) const */undefined1 RendererRD::LightStorage::light_has_shadow(LightStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0xe0 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x70 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_has_shadow", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x230, "Parameter \"light\" is null.", 0, 0);
   return 0;
}
/* CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write() [clone
   .isra.0] [clone .cold] */void CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::LightStorage::reflection_probe_instance_free(RID) [clone .cold] */void RendererRD::LightStorage::reflection_probe_instance_free(void) {
   code *pcVar1;
   undefined8 in_RCX;
   int unaff_R12D;
   if (unaff_R12D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
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
/* RendererRD::LightStorage::reflection_probe_instance_get_cluster_builder(RID,
   ClusterBuilderSharedDataRD*) [clone .cold] */void RendererRD::LightStorage::reflection_probe_instance_get_cluster_builder(undefined8 param_1, undefined8 param_2, int param_3, undefined8 param_4) {
   code *pcVar1;
   if (param_3 + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_4);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::LightStorage::update_reflection_probe_buffer(RenderDataRD*, PagedArray<RID> const&,
   Transform3D const&, RID) [clone .cold] */void RendererRD::LightStorage::update_reflection_probe_buffer(void) {
   code *pcVar1;
   int in_EAX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_EAX + 0x80000000U);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::light_instance_create(RID) [clone .cold] */void RendererRD::LightStorage::light_instance_create(undefined8 param_1, undefined8 param_2) {
   code *pcVar1;
   int in_EAX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2);
   }

   _DAT_000003c8 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::LightStorage::light_instance_free(RID) [clone .cold] */void RendererRD::LightStorage::light_instance_free(void) {
   code *pcVar1;
   int unaff_R14D;
   if (unaff_R14D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::LightStorage::update_light_buffers(RenderDataRD*, PagedArray<RID> const&, Transform3D
   const&, RID, bool, unsigned int&, unsigned int&, bool&) [clone .cold] */void RendererRD::LightStorage::update_light_buffers(void) {
   code *pcVar1;
   int in_EAX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(long)
   [clone .isra.0] [clone .cold] */void CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00115e52(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::LightStorage::reflection_probe_instance_begin_render(RID, RID) [clone .cold] */void RendererRD::LightStorage::reflection_probe_instance_begin_render(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RendererRD::LightStorage::light_has_projector(RID) const */bool RendererRD::LightStorage::light_has_projector(LightStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   ulong uVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   bool bVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar4 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0xe8 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar2 = *(int*)( lVar4 + 0xe0 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         lVar3 = RendererRD::TextureStorage::get_singleton();
         uVar1 = *(ulong*)( lVar4 + 0x68 );
         __mutex = (pthread_mutex_t*)( lVar3 + 0x138 );
         iVar2 = pthread_mutex_lock(__mutex);
         if (iVar2 == 0) {
            if ((uint)uVar1 < *(uint*)( lVar3 + 0x124 )) {
               bVar5 = false;
               if (uVar1 >> 0x20 != 0x7fffffff) {
                  bVar5 = ( *(uint*)( ( ( uVar1 & 0xffffffff ) % ( ulong ) * (uint*)( lVar3 + 0x120 ) ) * 0x118 + *(long*)( *(long*)( lVar3 + 0x110 ) + ( ( uVar1 & 0xffffffff ) / ( ulong ) * (uint*)( lVar3 + 0x120 ) ) * 8 ) + 0x110 ) & 0x7fffffff ) == ( uint )(uVar1 >> 0x20);
               }

               pthread_mutex_unlock(__mutex);
            }
 else {
               bVar5 = false;
               pthread_mutex_unlock(__mutex);
            }

            return bVar5;
         }

         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("light_has_projector", "servers/rendering/renderer_rd/storage_rd/light_storage.h", 0x237, "Parameter \"light\" is null.", 0, 0);
   return false;
}
/* WARNING: Removing unreachable block (ram,0x00116198) *//* WARNING: Removing unreachable block (ram,0x001162c8) *//* WARNING: Removing unreachable block (ram,0x00116490) *//* WARNING: Removing unreachable block (ram,0x001162d4) *//* WARNING: Removing unreachable block (ram,0x001162de) *//* WARNING: Removing unreachable block (ram,0x00116470) *//* WARNING: Removing unreachable block (ram,0x001162ea) *//* WARNING: Removing unreachable block (ram,0x001162f4) *//* WARNING: Removing unreachable block (ram,0x00116450) *//* WARNING: Removing unreachable block (ram,0x00116300) *//* WARNING: Removing unreachable block (ram,0x0011630a) *//* WARNING: Removing unreachable block (ram,0x00116430) *//* WARNING: Removing unreachable block (ram,0x00116316) *//* WARNING: Removing unreachable block (ram,0x00116320) *//* WARNING: Removing unreachable block (ram,0x00116410) *//* WARNING: Removing unreachable block (ram,0x0011632c) *//* WARNING: Removing unreachable block (ram,0x00116336) *//* WARNING: Removing unreachable block (ram,0x001163f0) *//* WARNING: Removing unreachable block (ram,0x00116342) *//* WARNING: Removing unreachable block (ram,0x0011634c) *//* WARNING: Removing unreachable block (ram,0x001163d0) *//* WARNING: Removing unreachable block (ram,0x00116354) *//* WARNING: Removing unreachable block (ram,0x0011636a) *//* WARNING: Removing unreachable block (ram,0x00116376) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */undefined1[16];HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1) {
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
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   lVar34 = *in_RSI;
   if (lVar34 == 0) {
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
      lVar34 = *in_RSI;
      local_70 = *in_RDX;
      uVar32 = *(uint*)( in_RSI + 4 );
      if (lVar34 != 0) goto LAB_001165bf;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_001165bf:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = local_70 * 0x3ffff - 1;
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
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_00116a71;
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

   if ((float)uVar31 * __LC175 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_00116a71;
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
      lVar34 = *in_RSI;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   lVar36 = *in_RDX;
   *(long*)( lVar34 + uVar42 * 8 ) = lVar36;
   uVar33 = lVar36 * 0x3ffff - 1;
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
   lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar2;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar36 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar6 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar36 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar2;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar2;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar36 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar36 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar2;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar36 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar36 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar36 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_00116a71:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Removing unreachable block (ram,0x00116cb8) *//* WARNING: Removing unreachable block (ram,0x00116de8) *//* WARNING: Removing unreachable block (ram,0x00116fb0) *//* WARNING: Removing unreachable block (ram,0x00116df4) *//* WARNING: Removing unreachable block (ram,0x00116dfe) *//* WARNING: Removing unreachable block (ram,0x00116f90) *//* WARNING: Removing unreachable block (ram,0x00116e0a) *//* WARNING: Removing unreachable block (ram,0x00116e14) *//* WARNING: Removing unreachable block (ram,0x00116f70) *//* WARNING: Removing unreachable block (ram,0x00116e20) *//* WARNING: Removing unreachable block (ram,0x00116e2a) *//* WARNING: Removing unreachable block (ram,0x00116f50) *//* WARNING: Removing unreachable block (ram,0x00116e36) *//* WARNING: Removing unreachable block (ram,0x00116e40) *//* WARNING: Removing unreachable block (ram,0x00116f30) *//* WARNING: Removing unreachable block (ram,0x00116e4c) *//* WARNING: Removing unreachable block (ram,0x00116e56) *//* WARNING: Removing unreachable block (ram,0x00116f10) *//* WARNING: Removing unreachable block (ram,0x00116e62) *//* WARNING: Removing unreachable block (ram,0x00116e6c) *//* WARNING: Removing unreachable block (ram,0x00116ef0) *//* WARNING: Removing unreachable block (ram,0x00116e74) *//* WARNING: Removing unreachable block (ram,0x00116e8a) *//* WARNING: Removing unreachable block (ram,0x00116e96) *//* String vformat<long>(String const&, long const) */String_conflict *vformat<long>(String_conflict *param_1, long param_2) {
   char cVar1;
   Variant *this;
   long in_RDX;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_RDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)param_2);
   *(undefined8*)param_1 = local_c0[0];
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, RendererRD::LightStorage::ShadowCubemap, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   RendererRD::LightStorage::ShadowCubemap> > >::operator[](int const&) */undefined1 * __thiscallHashMap<int,RendererRD::LightStorage::ShadowCubemap,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RendererRD::LightStorage::ShadowCubemap>>>::operator [](HashMap<int,RendererRD::LightStorage::ShadowCubemap,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RendererRD::LightStorage::ShadowCubemap>>> * this, int, *param_1) * puVar1 ;undefined8 *puVar2long lVar3void *pvVar4void *__slong lVar5undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]undefined1(*pauVar38)[16];uint uVar39uint uVar40uint uVar41ulong uVar42undefined8 uVar43void *__s_00undefined1(*pauVar44)[16];ulong uVar45ulong uVar46int iVar47long lVar48long lVar49long lVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined1(*pauVar55)[16];long in_FS_OFFSETvoid *local_108uVar40 = *param_1;local_108 = *(void**)( this + 8 );lVar3 = *(long*)( in_FS_OFFSET + 0x28 );uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar42 = CONCAT44(0, uVar41);if (local_108 == (void*)0x0) {
   uVar45 = uVar42 * 4;
   uVar46 = uVar42 * 8;
   uVar43 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   local_108 = (void*)Memory::alloc_static(uVar46, false);
   *(void**)( this + 8 ) = local_108;
   if (uVar41 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_108 + uVar46 ) ) && ( local_108 < (void*)( (long)pvVar4 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)local_108 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar42 != uVar45 );
         iVar47 = *(int*)( this + 0x2c );
         uVar40 = *param_1;
      }
 else {
         memset(pvVar4, 0, uVar45);
         memset(local_108, 0, uVar46);
         iVar47 = *(int*)( this + 0x2c );
         uVar40 = *param_1;
      }

      goto LAB_001171c0;
   }

   iVar47 = *(int*)( this + 0x2c );
   uVar40 = *param_1;
   if (local_108 != (void*)0x0) goto LAB_001171c0;
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar45 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = ( uVar40 >> 0x10 ^ uVar40 ) * -0x7a143595;
      uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
      uVar54 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar54 = 1;
         uVar46 = uVar45;
      }
 else {
         uVar46 = uVar54 * uVar45;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar42;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar46;
      lVar48 = SUB168(auVar6 * auVar22, 8);
      uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
      uVar52 = SUB164(auVar6 * auVar22, 8);
      if (uVar39 != 0) {
         uVar53 = 0;
         do {
            if (( uVar54 == uVar39 ) && ( uVar40 == *(uint*)( *(long*)( (long)local_108 + lVar48 * 8 ) + 0x10 ) )) {
               pauVar44 = *(undefined1(**) [16])( (long)local_108 + (ulong)uVar52 * 8 );
               goto LAB_00117175;
            }

            uVar53 = uVar53 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( uVar52 + 1 ) * uVar45;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar42;
            lVar48 = SUB168(auVar7 * auVar23, 8);
            uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
            uVar52 = SUB164(auVar7 * auVar23, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar39 * uVar45,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( uVar52 + uVar41 ) - SUB164(auVar8 * auVar24, 8) ) * uVar45,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,uVar53 <= SUB164(auVar9 * auVar25, 8) );
      }

   }

   iVar47 = *(int*)( this + 0x2c );
   LAB_001171c0:if (iVar47 != 0) {
      uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
      uVar42 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = ( uVar40 >> 0x10 ^ uVar40 ) * -0x7a143595;
      uVar39 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;
      uVar54 = uVar39 ^ uVar39 >> 0x10;
      if (uVar39 == uVar39 >> 0x10) {
         uVar54 = 1;
         uVar46 = uVar42;
      }
 else {
         uVar46 = uVar54 * uVar42;
      }

      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar45;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar46;
      lVar48 = SUB168(auVar10 * auVar26, 8);
      uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
      uVar52 = SUB164(auVar10 * auVar26, 8);
      if (uVar39 != 0) {
         uVar53 = 0;
         do {
            if (( uVar54 == uVar39 ) && ( *(uint*)( *(long*)( (long)local_108 + lVar48 * 8 ) + 0x10 ) == uVar40 )) {
               pauVar44 = *(undefined1(**) [16])( (long)local_108 + (ulong)uVar52 * 8 );
               *(undefined8*)( pauVar44[4] + 8 ) = 0;
               for (int i = 0; i < 3; i++) {
                  *(undefined8*)( pauVar44[( i + 1 )] + 8 ) = 0;
                  *(undefined8*)pauVar44[( i + 2 )] = 0;
               }

               goto LAB_00117175;
            }

            uVar53 = uVar53 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( uVar52 + 1 ) * uVar42;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            lVar48 = SUB168(auVar11 * auVar27, 8);
            uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
            uVar52 = SUB164(auVar11 * auVar27, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = uVar39 * uVar42,auVar28._8_8_ = 0,auVar28._0_8_ = uVar45,auVar13._8_8_ = 0,auVar13._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar52 ) - SUB164(auVar12 * auVar28, 8) ) * uVar42,auVar29._8_8_ = 0,auVar29._0_8_ = uVar45,uVar53 <= SUB164(auVar13 * auVar29, 8) );
      }

   }

}
if ((float)uVar41 * __LC175 < (float)( iVar47 + 1 )) {
   uVar40 = *(uint*)( this + 0x28 );
   if (uVar40 == 0x1c) {
      pauVar44 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00117175;
   }

   uVar42 = ( ulong )(uVar40 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar41 = *(uint*)( hash_table_size_primes + (ulong)uVar40 * 4 );
   if (uVar40 + 1 < 2) {
      uVar42 = 2;
   }

   uVar40 = *(uint*)( hash_table_size_primes + uVar42 * 4 );
   uVar46 = (ulong)uVar40;
   *(int*)( this + 0x28 ) = (int)uVar42;
   pvVar4 = *(void**)( this + 0x10 );
   uVar42 = uVar46 * 4;
   uVar45 = uVar46 * 8;
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar40 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)__s + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar42 != uVar46 );
      }
 else {
         memset(__s, 0, uVar42);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar41 != 0) {
      uVar42 = 0;
      do {
         uVar40 = *(uint*)( (long)pvVar4 + uVar42 * 4 );
         if (uVar40 != 0) {
            lVar48 = *(long*)( this + 0x10 );
            uVar52 = 0;
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar39);
            lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar40 * lVar5;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar45;
            lVar49 = SUB168(auVar14 * auVar30, 8);
            puVar1 = (uint*)( lVar48 + lVar49 * 4 );
            iVar47 = SUB164(auVar14 * auVar30, 8);
            uVar54 = *puVar1;
            uVar43 = *(undefined8*)( (long)local_108 + uVar42 * 8 );
            while (uVar54 != 0) {
               auVar15._8_8_ = 0;
               auVar15._0_8_ = (ulong)uVar54 * lVar5;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar45;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(( uVar39 + iVar47 ) - SUB164(auVar15 * auVar31, 8)) * lVar5;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar45;
               uVar53 = SUB164(auVar16 * auVar32, 8);
               uVar51 = uVar43;
               if (uVar53 < uVar52) {
                  *puVar1 = uVar40;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar49 * 8 );
                  uVar51 = *puVar2;
                  *puVar2 = uVar43;
                  uVar40 = uVar54;
                  uVar52 = uVar53;
               }

               uVar52 = uVar52 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(iVar47 + 1) * lVar5;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               lVar49 = SUB168(auVar17 * auVar33, 8);
               puVar1 = (uint*)( lVar48 + lVar49 * 4 );
               iVar47 = SUB164(auVar17 * auVar33, 8);
               uVar43 = uVar51;
               uVar54 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar49 * 8 ) = uVar43;
            *puVar1 = uVar40;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar42 = uVar42 + 1;
      }
 while ( uVar41 != uVar42 );
      Memory::free_static(local_108, false);
      Memory::free_static(pvVar4, false);
   }

}
iVar47 = *param_1;pauVar44 = (undefined1(*) [16])operator_new(0x50, "");*pauVar44 = (undefined1[16])0x0;*(int*)pauVar44[1] = iVar47;*(undefined8*)( pauVar44[1] + 8 ) = 0;*(undefined8*)pauVar44[2] = 0;*(undefined8*)( pauVar44[2] + 8 ) = 0;*(undefined8*)pauVar44[3] = 0;*(undefined8*)( pauVar44[3] + 8 ) = 0;*(undefined8*)pauVar44[4] = 0;*(undefined8*)( pauVar44[4] + 8 ) = 0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar44;
}
 else {
   *puVar2 = pauVar44;
   *(undefined8**)( *pauVar44 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar44;uVar40 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar41 = ( uVar40 ^ uVar40 >> 0xd ) * -0x3d4d51cb;uVar40 = uVar41 ^ uVar41 >> 0x10;if (uVar41 == uVar41 >> 0x10) {
   uVar42 = 1;
   uVar40 = 1;
}
 else {
   uVar42 = (ulong)uVar40;
}
uVar54 = 0;lVar48 = *(long*)( this + 0x10 );lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar41);auVar18._8_8_ = 0;auVar18._0_8_ = uVar42 * lVar5;auVar34._8_8_ = 0;auVar34._0_8_ = uVar45;lVar50 = SUB168(auVar18 * auVar34, 8);lVar49 = *(long*)( this + 8 );puVar1 = (uint*)( lVar48 + lVar50 * 4 );iVar47 = SUB164(auVar18 * auVar34, 8);uVar39 = *puVar1;pauVar38 = pauVar44;while (uVar39 != 0) {
   auVar19._8_8_ = 0;
   auVar19._0_8_ = (ulong)uVar39 * lVar5;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar45;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(( uVar41 + iVar47 ) - SUB164(auVar19 * auVar35, 8)) * lVar5;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar45;
   uVar52 = SUB164(auVar20 * auVar36, 8);
   pauVar55 = pauVar38;
   if (uVar52 < uVar54) {
      *puVar1 = uVar40;
      puVar2 = (undefined8*)( lVar49 + lVar50 * 8 );
      pauVar55 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar38;
      uVar40 = uVar39;
      uVar54 = uVar52;
   }

   uVar54 = uVar54 + 1;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )(iVar47 + 1) * lVar5;
   auVar37._8_8_ = 0;
   auVar37._0_8_ = uVar45;
   lVar50 = SUB168(auVar21 * auVar37, 8);
   puVar1 = (uint*)( lVar48 + lVar50 * 4 );
   iVar47 = SUB164(auVar21 * auVar37, 8);
   pauVar38 = pauVar55;
   uVar39 = *puVar1;
}
;*(undefined1(**) [16])( lVar49 + lVar50 * 8 ) = pauVar38;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00117175:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar44[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Removing unreachable block (ram,0x001179c0) *//* WARNING: Removing unreachable block (ram,0x00117af0) *//* WARNING: Removing unreachable block (ram,0x00117c69) *//* WARNING: Removing unreachable block (ram,0x00117afc) *//* WARNING: Removing unreachable block (ram,0x00117b06) *//* WARNING: Removing unreachable block (ram,0x00117c4b) *//* WARNING: Removing unreachable block (ram,0x00117b12) *//* WARNING: Removing unreachable block (ram,0x00117b1c) *//* WARNING: Removing unreachable block (ram,0x00117c2d) *//* WARNING: Removing unreachable block (ram,0x00117b28) *//* WARNING: Removing unreachable block (ram,0x00117b32) *//* WARNING: Removing unreachable block (ram,0x00117c0f) *//* WARNING: Removing unreachable block (ram,0x00117b3e) *//* WARNING: Removing unreachable block (ram,0x00117b48) *//* WARNING: Removing unreachable block (ram,0x00117bf1) *//* WARNING: Removing unreachable block (ram,0x00117b54) *//* WARNING: Removing unreachable block (ram,0x00117b5e) *//* WARNING: Removing unreachable block (ram,0x00117bd3) *//* WARNING: Removing unreachable block (ram,0x00117b66) *//* WARNING: Removing unreachable block (ram,0x00117b70) *//* WARNING: Removing unreachable block (ram,0x00117bb8) *//* WARNING: Removing unreachable block (ram,0x00117b78) *//* WARNING: Removing unreachable block (ram,0x00117b8e) *//* WARNING: Removing unreachable block (ram,0x00117b9a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */String_conflict *vformat<unsigned_int,char_const*>(String_conflict *param_1, uint param_2, char *param_3) {
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
/* RID_Alloc<RendererRD::LightStorage::Light, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::Light,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::Light,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d820;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_00117dfa:if ((uint)uVar5 < (uint)uVar8) goto LAB_00117e3b;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar6], false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar6) break;
         puVar9 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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

      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            lVar6 = ( uVar7 % uVar8 ) * 0xe8 + puVar9[uVar7 / uVar8];
            if (-1 < *(int*)( lVar6 + 0xe0 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0xb0 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar5 );
         goto LAB_00117dfa;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00117e3b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_00117e3b:if (puVar9 == (undefined8*)0x0) {
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
/* RID_Alloc<RendererRD::LightStorage::ReflectionProbe, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d860;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_0011803b:if ((uint)uVar4 < uVar8) goto LAB_0011807b;
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
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String_conflict*)&local_48);
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
            lVar7 = ( uVar6 % (ulong)uVar8 ) * 0x90 + puVar5[uVar6 / uVar8];
            if (-1 < *(int*)( lVar7 + 0x88 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x58 ));
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_0011803b;
      }

      if (uVar8 != 0) goto LAB_0011807b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_0011807b:if (puVar5 == (undefined8*)0x0) {
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
/* RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false> *this) {
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
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d8a0;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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
/* RID_Alloc<RendererRD::LightStorage::Lightmap, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::Lightmap,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::Lightmap,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_0011d8c0;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      LAB_001184e2:if ((uint)uVar5 < (uint)uVar7) goto LAB_00118523;
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
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar2);
      print_error((String_conflict*)&local_48);
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
            lVar6 = ( uVar9 % uVar7 ) * 0xb8 + puVar8[uVar9 / uVar7];
            if (-1 < *(int*)( lVar6 + 0xb0 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0x80 ));
               for (int i = 0; i < 4; i++) {
                  if (*(long*)( lVar6 + ( -16*i + 120 ) ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar6 + ( -16*i + 120 ) ) + -16 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( lVar6 + ( -16*i + 120 ) );
                        *(undefined8*)( lVar6 + ( -16*i + 120 ) ) = 0;
                        Memory::free_static((void*)( lVar3 + -16 ), false);
                     }

                  }

               }

               uVar7 = ( ulong ) * (uint*)( this + 0x18 );
               puVar8 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 < uVar5 );
         goto LAB_001184e2;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00118523;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar8 = *(undefined8**)( this + 8 );
   LAB_00118523:if (puVar8 == (undefined8*)0x0) {
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
/* RID_Alloc<RendererRD::LightStorage::Lightmap, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::Lightmap,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::Lightmap,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererRD::LightStorage::LightmapInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::LightmapInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::LightmapInstance,false> *this) {
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
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d8e0;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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
/* RID_Alloc<RendererRD::LightStorage::LightInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::LightInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::LightInstance,false> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   void *pvVar4;
   char *pcVar5;
   ulong uVar6;
   Projection *this_00;
   Projection *pPVar7;
   long lVar8;
   ulong uVar9;
   undefined8 *puVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d840;
   if (uVar3 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      LAB_0011899a:if ((uint)uVar6 < (uint)uVar9) goto LAB_001189dd;
      lVar8 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar8], false);
         lVar2 = lVar8 * 8;
         lVar8 = lVar8 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar6 / uVar9) <= (uint)lVar8) break;
         puVar10 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
      pcVar5 = local_48;
      lVar8 = local_50;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar5 + -0x10, false);
            lVar8 = local_50;
         }

      }

      local_50 = lVar8;
      if (lVar8 != 0) {
         LOCK();
         plVar1 = (long*)( lVar8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x18 );
      puVar10 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar11 = 0;
         do {
            lVar8 = ( uVar11 % uVar9 ) * 0x498 + puVar10[uVar11 / uVar9];
            if (-1 < *(int*)( lVar8 + 0x490 )) {
               pvVar4 = *(void**)( lVar8 + 0x460 );
               if (pvVar4 != (void*)0x0) {
                  if (*(int*)( lVar8 + 0x484 ) != 0) {
                     if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar8 + 0x480 ) * 4 ) != 0) {
                        memset(*(void**)( lVar8 + 0x478 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar8 + 0x480 ) * 4 ) << 2);
                     }

                     *(undefined4*)( lVar8 + 0x484 ) = 0;
                  }

                  Memory::free_static(pvVar4, false);
                  Memory::free_static(*(void**)( lVar8 + 0x470 ), false);
                  Memory::free_static(*(void**)( lVar8 + 0x468 ), false);
                  Memory::free_static(*(void**)( lVar8 + 0x478 ), false);
               }

               this_00 = (Projection*)( lVar8 + 0x310 );
               do {
                  pPVar7 = this_00 + -0x9c;
                  Projection::~Projection(this_00);
                  this_00 = pPVar7;
               }
 while ( pPVar7 != (Projection*)( lVar8 + -0x98 ) );
               uVar9 = ( ulong ) * (uint*)( this + 0x18 );
               puVar10 = *(undefined8**)( this + 8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar11 = uVar11 + 1;
         }
 while ( uVar11 < uVar6 );
         goto LAB_0011899a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001189dd;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar10 = *(undefined8**)( this + 8 );
   LAB_001189dd:if (puVar10 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar10, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::LightStorage::LightInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::LightInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::LightInstance,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererRD::LightStorage::ShadowAtlas, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   int *piVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   void *pvVar11;
   undefined8 *puVar12;
   ulong uVar13;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   uVar2 = *(uint*)( this + 0x20 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d900;
   if (uVar2 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1c );
      uVar10 = ( ulong ) * (uint*)( this + 0x18 );
      puVar12 = *(undefined8**)( this + 8 );
      LAB_00118cea:if ((uint)uVar6 < (uint)uVar10) goto LAB_00118d2d;
      lVar9 = 0;
      while (true) {
         Memory::free_static((void*)puVar12[lVar9], false);
         lVar7 = lVar9 * 8;
         lVar9 = lVar9 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar7 ), false);
         if (( uint )(uVar6 / uVar10) <= (uint)lVar9) break;
         puVar12 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar2);
      print_error((String_conflict*)&local_58);
      pcVar4 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar9 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      uVar10 = ( ulong ) * (uint*)( this + 0x18 );
      puVar12 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar13 = 0;
         do {
            lVar9 = puVar12[uVar13 / uVar10] + ( uVar13 % uVar10 ) * 200;
            if (-1 < *(int*)( lVar9 + 0xc0 )) {
               pvVar11 = *(void**)( lVar9 + 0x98 );
               if (pvVar11 != (void*)0x0) {
                  if (*(int*)( lVar9 + 0xbc ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar9 + 0xb8 ) * 4 );
                     if (uVar2 == 0) {
                        *(undefined4*)( lVar9 + 0xbc ) = 0;
                        *(undefined1(*) [16])( lVar9 + 0xa8 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar7 = 0;
                        do {
                           piVar5 = (int*)( *(long*)( lVar9 + 0xa0 ) + lVar7 );
                           if (*piVar5 != 0) {
                              *piVar5 = 0;
                              Memory::free_static(*(void**)( (long)pvVar11 + lVar7 * 2 ), false);
                              pvVar11 = *(void**)( lVar9 + 0x98 );
                              *(undefined8*)( (long)pvVar11 + lVar7 * 2 ) = 0;
                           }

                           lVar7 = lVar7 + 4;
                        }
 while ( (ulong)uVar2 << 2 != lVar7 );
                        *(undefined4*)( lVar9 + 0xbc ) = 0;
                        *(undefined1(*) [16])( lVar9 + 0xa8 ) = (undefined1[16])0x0;
                        if (pvVar11 == (void*)0x0) goto LAB_00118c87;
                     }

                  }

                  Memory::free_static(pvVar11, false);
                  Memory::free_static(*(void**)( lVar9 + 0xa0 ), false);
               }

               LAB_00118c87:lVar7 = lVar9 + 0x60;
               do {
                  lVar8 = lVar7 + -0x18;
                  if (*(long*)( lVar7 + -8 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( lVar7 + -8 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( lVar7 + -8 );
                        *(undefined8*)( lVar7 + -8 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  lVar7 = lVar8;
               }
 while ( lVar9 != lVar8 );
               uVar10 = ( ulong ) * (uint*)( this + 0x18 );
               puVar12 = *(undefined8**)( this + 8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1c );
            uVar13 = uVar13 + 1;
         }
 while ( uVar13 < uVar6 );
         goto LAB_00118cea;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00118d2d;
      Memory::free_static((void*)*puVar12, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar12 = *(undefined8**)( this + 8 );
   LAB_00118d2d:if (puVar12 == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar12, false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::LightStorage::ShadowAtlas, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false> *this) {
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
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d8a0;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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
/* RID_Alloc<RendererRD::LightStorage::LightmapInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::LightmapInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::LightmapInstance,false> *this) {
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
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d8e0;
   if (uVar3 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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
/* RID_Alloc<RendererRD::LightStorage::Light, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::Light,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::Light,true> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   char *pcVar4;
   ulong uVar5;
   long lVar6;
   ulong uVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d820;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_001192ca:if ((uint)uVar5 < (uint)uVar8) goto LAB_0011930b;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar6], false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar6) break;
         puVar9 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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

      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar7 = 0;
         do {
            lVar6 = ( uVar7 % uVar8 ) * 0xe8 + puVar9[uVar7 / uVar8];
            if (-1 < *(int*)( lVar6 + 0xe0 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0xb0 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar7 = uVar7 + 1;
         }
 while ( uVar7 < uVar5 );
         goto LAB_001192ca;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011930b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_0011930b:if (puVar9 != (undefined8*)0x0) {
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
/* RID_Alloc<RendererRD::LightStorage::ReflectionProbe, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true> *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   ulong uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   uint uVar8;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d860;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_001194eb:if ((uint)uVar4 < uVar8) goto LAB_0011952b;
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
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar8);
      print_error((String_conflict*)&local_48);
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
            lVar7 = ( uVar6 % (ulong)uVar8 ) * 0x90 + puVar5[uVar6 / uVar8];
            if (-1 < *(int*)( lVar7 + 0x88 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x58 ));
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_001194eb;
      }

      if (uVar8 != 0) goto LAB_0011952b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_0011952b:if (puVar5 != (undefined8*)0x0) {
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
/* RID_Alloc<RendererRD::LightStorage::Light, true>::allocate_rid() */ulong RID_Alloc<RendererRD::LightStorage::Light,true>::allocate_rid(RID_Alloc<RendererRD::LightStorage::Light,true> *this) {
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
         goto LAB_00119816;
      }

      lVar3 = *(long*)( this + 8 );
      uVar13 = (ulong)uVar7;
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xe8, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0xe0 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x3a;
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0xe8 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0xe0 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00119816:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::LightStorage::LightInstance,
   false>::make_rid(RendererRD::LightStorage::LightInstance const&) */ulong RID_Alloc<RendererRD::LightStorage::LightInstance,false>::make_rid(RID_Alloc<RendererRD::LightStorage::LightInstance,false> *this, LightInstance *param_1) {
   undefined4 uVar1;
   void *pvVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   long lVar20;
   uint uVar21;
   uint uVar22;
   uint uVar23;
   long lVar24;
   long lVar25;
   undefined4 *puVar26;
   uint uVar27;
   char *pcVar28;
   ulong uVar29;
   ulong uVar30;
   uVar27 = *(uint*)( this + 0x20 );
   if (uVar27 == *(uint*)( this + 0x1c )) {
      if (uVar27 == 0) {
         lVar17 = 0;
         uVar30 = 8;
      }
 else {
         uVar30 = ( ulong )((int)( (ulong)uVar27 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar17 = ( (ulong)uVar27 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar18 = Memory::realloc_static(*(void**)( this + 8 ), uVar30, false);
      *(long*)( this + 8 ) = lVar18;
      uVar16 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x498, false);
      pvVar2 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar18 + lVar17 ) = uVar16;
      lVar19 = Memory::realloc_static(pvVar2, uVar30, false);
      *(long*)( this + 0x10 ) = lVar19;
      uVar16 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar21 = *(uint*)( this + 0x18 );
      lVar18 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar19 + lVar17 ) = uVar16;
      if (uVar21 != 0) {
         lVar19 = *(long*)( lVar18 + lVar17 );
         lVar20 = 0;
         puVar26 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar17 ) + 0x490 );
         do {
            *puVar26 = 0xffffffff;
            puVar26 = puVar26 + 0x126;
            *(int*)( lVar19 + lVar20 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar20;
            uVar21 = *(uint*)( this + 0x18 );
            lVar20 = lVar20 + 1;
         }
 while ( (uint)lVar20 < uVar21 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar21;
      uVar27 = *(uint*)( this + 0x20 );
   }
 else {
      lVar18 = *(long*)( this + 0x10 );
      uVar21 = *(uint*)( this + 0x18 );
   }

   uVar27 = *(uint*)( *(long*)( lVar18 + ( (ulong)uVar27 / (ulong)uVar21 ) * 8 ) + ( (ulong)uVar27 % (ulong)uVar21 ) * 4 );
   uVar30 = (ulong)uVar27;
   LOCK();
   UNLOCK();
   uVar22 = (int)RID_AllocBase::base_id + 1;
   uVar23 = uVar22 & 0x7fffffff;
   if (uVar23 != 0x7fffffff) {
      lVar17 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar30 % (ulong)uVar21 ) * 0x498 + *(long*)( lVar17 + ( uVar30 / uVar21 ) * 8 ) + 0x490 ) = uVar23 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar29 = CONCAT44(uVar22, uVar27) & 0x7fffffffffffffff;
      if (( uVar29 != 0 ) && ( (uint)uVar29 < *(uint*)( this + 0x1c ) )) {
         puVar26 = (undefined4*)( ( uVar30 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x498 + *(long*)( lVar17 + ( uVar30 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)puVar26[0x124] < 0) {
            uVar27 = ( uint )(uVar29 >> 0x20);
            if (uVar27 == ( puVar26[0x124] & 0x7fffffff )) {
               uVar1 = *(undefined4*)param_1;
               puVar26[0x124] = uVar27;
               *puVar26 = uVar1;
               memmove(puVar26 + 1, param_1 + 4, 0x3a8);
               uVar1 = *(undefined4*)( param_1 + 0x420 );
               uVar4 = *(undefined8*)( param_1 + 0x3ac );
               uVar5 = *(undefined8*)( param_1 + 0x3b4 );
               uVar6 = *(undefined8*)( param_1 + 0x3d8 );
               uVar7 = *(undefined8*)( param_1 + 0x3e0 );
               *(undefined8*)( puVar26 + 0xef ) = *(undefined8*)( param_1 + 0x3bc );
               uVar16 = *(undefined8*)( param_1 + 0x3c8 );
               uVar8 = *(undefined8*)( param_1 + 1000 );
               uVar9 = *(undefined8*)( param_1 + 0x3f0 );
               uVar10 = *(undefined8*)( param_1 + 0x3f8 );
               uVar11 = *(undefined8*)( param_1 + 0x400 );
               puVar26[0x108] = uVar1;
               *(undefined8*)( puVar26 + 0xf2 ) = uVar16;
               uVar16 = *(undefined8*)( param_1 + 0x3d0 );
               uVar12 = *(undefined8*)( param_1 + 0x428 );
               uVar13 = *(undefined8*)( param_1 + 0x430 );
               uVar14 = *(undefined8*)( param_1 + 0x438 );
               uVar15 = *(undefined8*)( param_1 + 0x440 );
               *(undefined8*)( puVar26 + 0xeb ) = uVar4;
               *(undefined8*)( puVar26 + 0xed ) = uVar5;
               *(undefined8*)( puVar26 + 0xf4 ) = uVar16;
               uVar16 = *(undefined8*)( param_1 + 0x408 );
               uVar4 = *(undefined8*)( param_1 + 0x450 );
               uVar5 = *(undefined8*)( param_1 + 0x458 );
               *(undefined8*)( puVar26 + 0xf6 ) = uVar6;
               *(undefined8*)( puVar26 + 0xf8 ) = uVar7;
               *(undefined8*)( puVar26 + 0x102 ) = uVar16;
               uVar1 = *(undefined4*)( param_1 + 0x410 );
               *(undefined8*)( puVar26 + 0xfa ) = uVar8;
               *(undefined8*)( puVar26 + 0xfc ) = uVar9;
               puVar26[0x104] = uVar1;
               uVar16 = *(undefined8*)( param_1 + 0x414 );
               *(undefined8*)( puVar26 + 0xfe ) = uVar10;
               *(undefined8*)( puVar26 + 0x100 ) = uVar11;
               *(undefined8*)( puVar26 + 0x105 ) = uVar16;
               uVar1 = *(undefined4*)( param_1 + 0x41c );
               *(undefined8*)( puVar26 + 0x10a ) = uVar12;
               *(undefined8*)( puVar26 + 0x10c ) = uVar13;
               puVar26[0x107] = uVar1;
               uVar16 = *(undefined8*)( param_1 + 0x448 );
               *(undefined8*)( puVar26 + 0x10e ) = uVar14;
               *(undefined8*)( puVar26 + 0x110 ) = uVar15;
               *(undefined8*)( puVar26 + 0x112 ) = uVar16;
               *(undefined8*)( puVar26 + 0x114 ) = uVar4;
               *(undefined8*)( puVar26 + 0x116 ) = uVar5;
               *(undefined1(*) [16])( puVar26 + 0x118 ) = (undefined1[16])0x0;
               *(undefined8*)( puVar26 + 0x120 ) = 0;
               *(undefined1(*) [16])( puVar26 + 0x11c ) = (undefined1[16])0x0;
               uVar30 = *(ulong*)( param_1 + 0x480 );
               *(ulong*)( puVar26 + 0x120 ) = uVar30;
               if ((int)( uVar30 >> 0x20 ) != 0) {
                  uVar27 = *(uint*)( hash_table_size_primes + ( uVar30 & 0xffffffff ) * 4 );
                  uVar30 = (ulong)uVar27 * 4;
                  uVar16 = Memory::alloc_static(uVar30, false);
                  *(undefined8*)( puVar26 + 0x11e ) = uVar16;
                  uVar16 = Memory::alloc_static((ulong)uVar27 * 8, false);
                  *(undefined8*)( puVar26 + 0x118 ) = uVar16;
                  uVar16 = Memory::alloc_static(uVar30, false);
                  *(undefined8*)( puVar26 + 0x11c ) = uVar16;
                  lVar17 = Memory::alloc_static(uVar30, false);
                  *(long*)( puVar26 + 0x11a ) = lVar17;
                  if (puVar26[0x121] != 0) {
                     lVar18 = *(long*)( puVar26 + 0x118 );
                     lVar19 = *(long*)( param_1 + 0x460 );
                     lVar24 = 0;
                     lVar20 = *(long*)( param_1 + 0x470 );
                     lVar25 = *(long*)( puVar26 + 0x11c );
                     do {
                        *(undefined8*)( lVar18 + lVar24 * 8 ) = *(undefined8*)( lVar19 + lVar24 * 8 );
                        *(undefined4*)( lVar25 + lVar24 * 4 ) = *(undefined4*)( lVar20 + lVar24 * 4 );
                        lVar24 = lVar24 + 1;
                     }
 while ( (uint)lVar24 < (uint)puVar26[0x121] );
                  }

                  if (uVar27 != 0) {
                     lVar18 = *(long*)( param_1 + 0x478 );
                     lVar19 = *(long*)( puVar26 + 0x11e );
                     lVar25 = 0;
                     lVar20 = *(long*)( param_1 + 0x468 );
                     do {
                        *(undefined4*)( lVar19 + lVar25 ) = *(undefined4*)( lVar18 + lVar25 );
                        *(undefined4*)( lVar17 + lVar25 ) = *(undefined4*)( lVar20 + lVar25 );
                        lVar25 = lVar25 + 4;
                     }
 while ( uVar30 - lVar25 != 0 );
                  }

               }

               puVar26[0x122] = *(undefined4*)( param_1 + 0x488 );
               return uVar29;
            }

            pcVar28 = "Attempting to initialize the wrong RID";
            uVar16 = 0xfc;
         }
 else {
            pcVar28 = "Initializing already initialized RID";
            uVar16 = 0xf8;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar16, "Method/function failed. Returning: nullptr", pcVar28, 0, 0);
      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return uVar29;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* RID_Alloc<RendererRD::LightStorage::ReflectionProbe, true>::allocate_rid() */ulong RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true>::allocate_rid(RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true> *this) {
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
         goto LAB_0011a0a7;
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0x90 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0x88 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_0011a0a7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,
   false>::make_rid(RendererRD::LightStorage::ReflectionProbeInstance const&) */ulong RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false>::make_rid(RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false> *this, ReflectionProbeInstance *param_1) {
   void *pvVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   uint uVar9;
   undefined8 *puVar10;
   undefined4 *puVar11;
   undefined8 uVar12;
   ulong uVar13;
   uint uVar14;
   char *pcVar15;
   long lVar16;
   ulong uVar17;
   uVar14 = *(uint*)( this + 0x20 );
   if (uVar14 == *(uint*)( this + 0x1c )) {
      if (uVar14 == 0) {
         lVar16 = 0;
         uVar17 = 8;
      }
 else {
         uVar17 = ( ulong )((int)( (ulong)uVar14 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar16 = ( (ulong)uVar14 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar4 = Memory::realloc_static(*(void**)( this + 8 ), uVar17, false);
      *(long*)( this + 8 ) = lVar4;
      uVar12 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x70, false);
      pvVar1 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar16 ) = uVar12;
      lVar5 = Memory::realloc_static(pvVar1, uVar17, false);
      *(long*)( this + 0x10 ) = lVar5;
      uVar12 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar4 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar5 + lVar16 ) = uVar12;
      if (uVar7 != 0) {
         lVar5 = *(long*)( lVar4 + lVar16 );
         lVar6 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar16 ) + 0x68 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x1c;
            *(int*)( lVar5 + lVar6 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar6;
            uVar7 = *(uint*)( this + 0x18 );
            lVar6 = lVar6 + 1;
         }
 while ( (uint)lVar6 < uVar7 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar7;
      uVar14 = *(uint*)( this + 0x20 );
   }
 else {
      lVar4 = *(long*)( this + 0x10 );
      uVar7 = *(uint*)( this + 0x18 );
   }

   uVar14 = *(uint*)( *(long*)( lVar4 + ( (ulong)uVar14 / (ulong)uVar7 ) * 8 ) + ( (ulong)uVar14 % (ulong)uVar7 ) * 4 );
   uVar17 = (ulong)uVar14;
   LOCK();
   UNLOCK();
   uVar8 = (int)RID_AllocBase::base_id + 1;
   uVar9 = uVar8 & 0x7fffffff;
   if (uVar9 != 0x7fffffff) {
      lVar16 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar17 % (ulong)uVar7 ) * 0x70 + *(long*)( lVar16 + ( uVar17 / uVar7 ) * 8 ) + 0x68 ) = uVar9 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar13 = CONCAT44(uVar8, uVar14) & 0x7fffffffffffffff;
      if (( uVar13 != 0 ) && ( (uint)uVar13 < *(uint*)( this + 0x1c ) )) {
         puVar10 = (undefined8*)( ( uVar17 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x70 + *(long*)( lVar16 + ( uVar17 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar10 + 0xd ) < 0) {
            uVar14 = ( uint )(uVar13 >> 0x20);
            if (uVar14 == ( *(uint*)( puVar10 + 0xd ) & 0x7fffffff )) {
               uVar12 = *(undefined8*)param_1;
               uVar3 = *(undefined8*)( param_1 + 8 );
               *(uint*)( puVar10 + 0xd ) = uVar14;
               *puVar10 = uVar12;
               puVar10[1] = uVar3;
               for (int i = 0; i < 5; i++) {
                  uVar12 = *(undefined8*)( param_1 + ( 16*i + 24 ) );
                  puVar10[( 2*i + 2 )] = *(undefined8*)( param_1 + ( 16*i + 16 ) );
                  puVar10[( 2*i + 3 )] = uVar12;
               }

               puVar10[0xc] = *(undefined8*)( param_1 + 0x60 );
               return uVar13;
            }

            pcVar15 = "Attempting to initialize the wrong RID";
            uVar12 = 0xfc;
         }
 else {
            pcVar15 = "Initializing already initialized RID";
            uVar12 = 0xf8;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar12, "Method/function failed. Returning: nullptr", pcVar15, 0, 0);
      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return uVar13;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* RID_Alloc<RendererRD::LightStorage::Lightmap, true>::allocate_rid() */ulong RID_Alloc<RendererRD::LightStorage::Lightmap,true>::allocate_rid(RID_Alloc<RendererRD::LightStorage::Lightmap,true> *this) {
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
         goto LAB_0011a6e6;
      }

      lVar3 = *(long*)( this + 8 );
      uVar13 = (ulong)uVar7;
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0xb8, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0xb0 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x2e;
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0xb8 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0xb0 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_0011a6e6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::LightStorage::LightmapInstance,
   false>::make_rid(RendererRD::LightStorage::LightmapInstance const&) */ulong RID_Alloc<RendererRD::LightStorage::LightmapInstance,false>::make_rid(RID_Alloc<RendererRD::LightStorage::LightmapInstance,false> *this, LightmapInstance *param_1) {
   int iVar1;
   void *pvVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   undefined8 *puVar11;
   undefined8 uVar12;
   uint uVar13;
   ulong uVar14;
   char *pcVar15;
   long lVar16;
   ulong uVar17;
   uVar13 = *(uint*)( this + 0x20 );
   if (uVar13 == *(uint*)( this + 0x1c )) {
      if (uVar13 == 0) {
         lVar16 = 0;
         uVar17 = 8;
      }
 else {
         uVar17 = ( ulong )((int)( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar16 = ( (ulong)uVar13 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar6 = Memory::realloc_static(*(void**)( this + 8 ), uVar17, false);
      *(long*)( this + 8 ) = lVar6;
      uVar12 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 6, false);
      pvVar2 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar6 + lVar16 ) = uVar12;
      lVar6 = Memory::realloc_static(pvVar2, uVar17, false);
      *(long*)( this + 0x10 ) = lVar6;
      uVar12 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      iVar1 = *(int*)( this + 0x18 );
      *(undefined8*)( lVar6 + lVar16 ) = uVar12;
      if (iVar1 == 0) {
         lVar6 = *(long*)( this + 0x10 );
         uVar8 = 0;
      }
 else {
         lVar6 = *(long*)( this + 0x10 );
         lVar3 = *(long*)( lVar6 + lVar16 );
         lVar16 = *(long*)( *(long*)( this + 8 ) + lVar16 );
         lVar7 = 0;
         do {
            *(undefined4*)( lVar16 + 0x38 + lVar7 * 0x40 ) = 0xffffffff;
            *(int*)( lVar3 + lVar7 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar7;
            uVar8 = *(uint*)( this + 0x18 );
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < uVar8 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar8;
      uVar13 = *(uint*)( this + 0x20 );
   }
 else {
      lVar6 = *(long*)( this + 0x10 );
      uVar8 = *(uint*)( this + 0x18 );
   }

   uVar13 = *(uint*)( *(long*)( lVar6 + ( (ulong)uVar13 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar13 % (ulong)uVar8 ) * 4 );
   uVar17 = (ulong)uVar13;
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 != 0x7fffffff) {
      lVar16 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( uVar17 % (ulong)uVar8 ) * 0x40 + *(long*)( lVar16 + ( uVar17 / uVar8 ) * 8 ) + 0x38 ) = uVar10 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar14 = CONCAT44(uVar9, uVar13) & 0x7fffffffffffffff;
      if (( uVar14 != 0 ) && ( (uint)uVar14 < *(uint*)( this + 0x1c ) )) {
         puVar11 = (undefined8*)( ( uVar17 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x40 + *(long*)( lVar16 + ( uVar17 / *(uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar11 + 7 ) < 0) {
            uVar13 = ( uint )(uVar14 >> 0x20);
            if (uVar13 == ( *(uint*)( puVar11 + 7 ) & 0x7fffffff )) {
               uVar12 = *(undefined8*)param_1;
               uVar5 = *(undefined8*)( param_1 + 8 );
               *(uint*)( puVar11 + 7 ) = uVar13;
               *puVar11 = uVar12;
               puVar11[1] = uVar5;
               uVar12 = *(undefined8*)( param_1 + 0x18 );
               puVar11[2] = *(undefined8*)( param_1 + 0x10 );
               puVar11[3] = uVar12;
               uVar12 = *(undefined8*)( param_1 + 0x28 );
               puVar11[4] = *(undefined8*)( param_1 + 0x20 );
               puVar11[5] = uVar12;
               puVar11[6] = *(undefined8*)( param_1 + 0x30 );
               return uVar14;
            }

            pcVar15 = "Attempting to initialize the wrong RID";
            uVar12 = 0xfc;
         }
 else {
            pcVar15 = "Initializing already initialized RID";
            uVar12 = 0xf8;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar12, "Method/function failed. Returning: nullptr", pcVar15, 0, 0);
      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return uVar14;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
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
      LAB_0011af10:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_0011af10;
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
      LAB_0011ae7c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0011ae11;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0011ae7c;
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
   LAB_0011ae11:puVar9[-1] = param_1;
   return 0;
}
/* CowData<Vector<unsigned char> >::_unref() */void CowData<Vector<unsigned_char>>::_unref(CowData<Vector<unsigned_char>> *this) {
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
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x10;
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
/* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::_resize_and_rehash(unsigned int) */void HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::_resize_and_rehash(HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::operator[](RID const&) */undefined1[16];HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::operator [](HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>
             *this,RID*param_1)

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
  long lVar45;
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(__s_00 = = (void*)0x0) {
   uVar31 = uVar43 * 4;
   uVar29 = uVar43 * 8;
   uVar32 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   lStack_90 = 0x11b910;
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
         lVar45 = *(long*)param_1;
         iVar36 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar31);
         lStack_90 = 0x11b95a;
         memset(__s_00, 0, uVar29);
         lVar45 = *(long*)param_1;
         iVar36 = *(int*)( this + 0x2c );
      }

      LAB_0011b969:if (iVar36 == 0) goto LAB_0011ba00;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar39 = *(long*)( this + 0x10 );
      goto LAB_0011b614;
   }

   lVar45 = *(long*)param_1;
   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_0011b969;
}
else{iVar36 = *(int*)( this + 0x2c );if (iVar36 == 0) {
   LAB_0011ba00:iVar36 = 0;
}
 else {
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = lVar45 * 0x3ffff - 1;
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
         if (( (uint)uVar41 == uVar33 ) && ( lVar45 == *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) )) {
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

   LAB_0011b614:uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = lVar45 * 0x3ffff - 1;
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
         if (( (uint)uVar42 == uVar37 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) == lVar45 )) {
            pauVar30 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar33 * 8 );
            *(undefined4*)( pauVar30[1] + 8 ) = 0;
            lStack_90 = lVar35;
            goto LAB_0011b6fe;
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
}if ((float)uVar43 * __LC175 < (float)( iVar36 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011b6fe;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
uVar32 = *(undefined8*)param_1;pauVar30 = (undefined1(*) [16])operator_new(0x20, "");*pauVar30 = (undefined1[16])0x0;*(undefined4*)( pauVar30[1] + 8 ) = 0;*(undefined8*)pauVar30[1] = uVar32;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
}
 else {
   *puVar3 = pauVar30;
   *(undefined8**)( *pauVar30 + 8 ) = puVar3;
}
lVar45 = *(long*)param_1;lVar39 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar30;uVar31 = lVar45 * 0x3ffff - 1;uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;uVar31 = uVar31 >> 0x16 ^ uVar31;uVar43 = uVar31 & 0xffffffff;if ((int)uVar31 == 0) {
   uVar43 = 1;
}
uVar38 = 0;lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar40 = (uint)uVar43;uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar37);auVar12._8_8_ = 0;auVar12._0_8_ = uVar43 * lVar45;auVar24._8_8_ = 0;auVar24._0_8_ = uVar31;lStack_90 = SUB168(auVar12 * auVar24, 8);lVar2 = *(long*)( this + 8 );puVar1 = (uint*)( lVar39 + lStack_90 * 4 );iVar36 = SUB164(auVar12 * auVar24, 8);uVar33 = *puVar1;pauVar28 = pauVar30;while (uVar33 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar33 * lVar45;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar37 + iVar36 ) - SUB164(auVar13 * auVar25, 8)) * lVar45;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   local_88 = SUB164(auVar14 * auVar26, 8);
   pauVar44 = pauVar28;
   if (local_88 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8*)( lVar2 + lStack_90 * 8 );
      pauVar44 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_88;
   }

   uVar40 = (uint)uVar43;
   uVar38 = uVar38 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar36 + 1) * lVar45;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar31;
   lStack_90 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar39 + lStack_90 * 4 );
   iVar36 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar44;
   uVar33 = *puVar1;
}
;*(undefined1(**) [16])( lVar2 + lStack_90 * 8 ) = pauVar28;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011b6fe:auVar47._8_8_ = lStack_90;auVar47._0_8_ = pauVar30[1] + 8;return auVar47;}/* CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_realloc(long) */undefined8 CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_realloc(CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection> *this, long param_1) {
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
/* CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_realloc(long) */undefined8 CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow>::_realloc(CowData<RendererRD::LightStorage::ShadowAtlas::Quadrant::Shadow> *this, long param_1) {
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
            goto LAB_0011bb66;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_0011bb71;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_0011bb71;
   }
 else {
      LAB_0011bb66:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_0011bb71:if (uVar32 != 0) {
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
                  goto LAB_0011be38;
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

   if ((float)uVar2 * __LC175 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_0011be38;
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
   LAB_0011be38:*param_1 = pDVar25;
   return;
}
/* RID_Alloc<RendererRD::LightStorage::Lightmap, true>::initialize_rid(RID,
   RendererRD::LightStorage::Lightmap const&) */void RID_Alloc<RendererRD::LightStorage::Lightmap,true>::initialize_rid(RID_Alloc<RendererRD::LightStorage::Lightmap,true> *this, ulong param_2, undefined8 *param_3) {
   undefined4 uVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   undefined8 *puVar7;
   long *plVar8;
   uint uVar9;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x1c )) {
         puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0xb8 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar7 + 0x16 ) < 0) {
            uVar9 = ( uint )(param_2 >> 0x20);
            if (uVar9 == ( *(uint*)( puVar7 + 0x16 ) & 0x7fffffff )) {
               uVar3 = *param_3;
               uVar4 = param_3[3];
               uVar5 = param_3[4];
               *(uint*)( puVar7 + 0x16 ) = uVar9;
               uVar1 = *(undefined4*)( param_3 + 6 );
               *puVar7 = uVar3;
               uVar3 = param_3[1];
               puVar7[3] = uVar4;
               puVar7[4] = uVar5;
               puVar7[1] = uVar3;
               uVar2 = *(undefined4*)( param_3 + 2 );
               *(undefined4*)( puVar7 + 6 ) = uVar1;
               *(undefined4*)( puVar7 + 2 ) = uVar2;
               *(undefined2*)( (long)puVar7 + 0x14 ) = *(undefined2*)( (long)param_3 + 0x14 );
               puVar7[5] = param_3[5];
               *(undefined8*)( (long)puVar7 + 0x34 ) = *(undefined8*)( (long)param_3 + 0x34 );
               uVar1 = *(undefined4*)( (long)param_3 + 0x3c );
               puVar7[9] = 0;
               lVar6 = param_3[9];
               *(undefined4*)( (long)puVar7 + 0x3c ) = uVar1;
               if (lVar6 != 0) {
                  CowData<Vector3>::_ref((CowData<Vector3>*)( puVar7 + 9 ), (CowData*)( param_3 + 9 ));
               }

               puVar7[0xb] = 0;
               if (param_3[0xb] != 0) {
                  CowData<Color>::_ref((CowData<Color>*)( puVar7 + 0xb ), (CowData*)( param_3 + 0xb ));
               }

               puVar7[0xd] = 0;
               if (param_3[0xd] != 0) {
                  CowData<int>::_ref((CowData<int>*)( puVar7 + 0xd ), (CowData*)( param_3 + 0xd ));
               }

               puVar7[0xf] = 0;
               if (param_3[0xf] != 0) {
                  CowData<int>::_ref((CowData<int>*)( puVar7 + 0xf ), (CowData*)( param_3 + 0xf ));
               }

               uVar9 = *(uint*)( param_3 + 0x15 );
               puVar7[0x15] = 0;
               *(undefined1(*) [16])( puVar7 + 0x11 ) = (undefined1[16])0x0;
               uVar9 = *(uint*)( hash_table_size_primes + (ulong)uVar9 * 4 );
               *(undefined1(*) [16])( puVar7 + 0x13 ) = (undefined1[16])0x0;
               lVar6 = 1;
               if (5 < uVar9) {
                  do {
                     if (uVar9 <= *(uint*)( hash_table_size_primes + lVar6 * 4 )) {
                        *(int*)( puVar7 + 0x15 ) = (int)lVar6;
                        goto LAB_0011c100;
                     }

                     lVar6 = lVar6 + 1;
                  }
 while ( lVar6 != 0x1d );
                  _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
               }

               LAB_0011c100:if (( *(int*)( (long)param_3 + 0xac ) != 0 ) && ( plVar8 = (long*)param_3[0x13] ),plVar8 != (long*)0x0) {
                  do {
                     HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar7 + 0x10 ), (bool)( (char)plVar8 + '\x10' ));
                     plVar8 = (long*)*plVar8;
                  }
 while ( plVar8 != (long*)0x0 );
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_0011c218;
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

   LAB_0011c218:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref() */void CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref(CowData<RendererRD::SkyRD::ReflectionData::Layer> *this) {
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
               if (*(long*)( lVar6 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x18 );
                     *(undefined8*)( lVar6 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x20;
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
/* CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref() */void CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref(CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   CowData<RendererRD::SkyRD::ReflectionData::Layer> *this_00;
   long lVar6;
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
            this_00 = (CowData<RendererRD::SkyRD::ReflectionData::Layer>*)( lVar2 + 0x40 );
            lVar6 = 0;
            do {
               CowData<RendererRD::SkyRD::ReflectionData::Layer>::_unref(this_00);
               if (*(long*)( this_00 + -0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( this_00 + -0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( this_00 + -0x20 );
                     *(undefined8*)( this_00 + -0x20 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               this_00 = this_00 + 0x78;
            }
 while ( lVar3 != lVar6 );
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
/* RID_Alloc<RendererRD::LightStorage::ReflectionAtlas, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false> *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   Object *pOVar4;
   char *pcVar5;
   char cVar6;
   ulong uVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   undefined8 *puVar11;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_0011d880;
   if (uVar3 == 0) {
      uVar7 = ( ulong ) * (uint*)( this + 0x1c );
      uVar10 = ( ulong ) * (uint*)( this + 0x18 );
      puVar11 = *(undefined8**)( this + 8 );
      LAB_0011c542:if ((uint)uVar7 < (uint)uVar10) goto LAB_0011c583;
      lVar9 = 0;
      while (true) {
         Memory::free_static((void*)puVar11[lVar9], false);
         lVar2 = lVar9 * 8;
         lVar9 = lVar9 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         if (( uint )(uVar7 / uVar10) <= (uint)lVar9) break;
         puVar11 = *(undefined8**)( this + 8 );
      }
;
   }
 else {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
      print_error((String_conflict*)&local_48);
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

      lVar9 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar9 + -0x10 ), false);
         }

      }

      uVar10 = ( ulong ) * (uint*)( this + 0x18 );
      puVar11 = *(undefined8**)( this + 8 );
      if (*(int*)( this + 0x1c ) != 0) {
         uVar8 = 0;
         do {
            lVar9 = puVar11[uVar8 / uVar10] + ( uVar8 % uVar10 ) * 0x48;
            if (-1 < *(int*)( lVar9 + 0x40 )) {
               if (( *(long*)( lVar9 + 0x30 ) != 0 ) && ( cVar6 = cVar6 != '\0' )) {
                  pOVar4 = *(Object**)( lVar9 + 0x30 );
                  cVar6 = predelete_handler(pOVar4);
                  if (cVar6 != '\0') {
                     ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                     Memory::free_static(pOVar4, false);
                  }

               }

               CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( lVar9 + 0x28 ));
               uVar10 = ( ulong ) * (uint*)( this + 0x18 );
               puVar11 = *(undefined8**)( this + 8 );
            }

            uVar7 = ( ulong ) * (uint*)( this + 0x1c );
            uVar8 = uVar8 + 1;
         }
 while ( uVar8 < uVar7 );
         goto LAB_0011c542;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_0011c583;
      Memory::free_static((void*)*puVar11, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar11 = *(undefined8**)( this + 8 );
   LAB_0011c583:if (puVar11 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar11, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x10 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::LightStorage::ReflectionAtlas, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,
   false>::make_rid(RendererRD::LightStorage::ReflectionAtlas const&) */ulong RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>::make_rid(RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false> *this, ReflectionAtlas *param_1) {
   long *plVar1;
   undefined8 *puVar2;
   void *pvVar3;
   code *pcVar4;
   char cVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   undefined4 *puVar13;
   undefined8 uVar14;
   ulong uVar15;
   char *pcVar16;
   long lVar17;
   ulong uVar18;
   bool bVar19;
   uVar6 = *(uint*)( this + 0x20 );
   if (uVar6 == *(uint*)( this + 0x1c )) {
      if (uVar6 == 0) {
         lVar17 = 0;
         uVar18 = 8;
      }
 else {
         uVar18 = ( ulong )((int)( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar17 = ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar7 = Memory::realloc_static(*(void**)( this + 8 ), uVar18, false);
      *(long*)( this + 8 ) = lVar7;
      uVar14 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x48, false);
      pvVar3 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar7 + lVar17 ) = uVar14;
      lVar8 = Memory::realloc_static(pvVar3, uVar18, false);
      *(long*)( this + 0x10 ) = lVar8;
      uVar14 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar10 = *(uint*)( this + 0x18 );
      lVar7 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar8 + lVar17 ) = uVar14;
      if (uVar10 != 0) {
         lVar8 = *(long*)( lVar7 + lVar17 );
         lVar9 = 0;
         puVar13 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar17 ) + 0x40 );
         do {
            *puVar13 = 0xffffffff;
            puVar13 = puVar13 + 0x12;
            *(int*)( lVar8 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar10 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar10 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar10;
      uVar6 = *(uint*)( this + 0x20 );
   }
 else {
      lVar7 = *(long*)( this + 0x10 );
      uVar10 = *(uint*)( this + 0x18 );
   }

   uVar6 = *(uint*)( *(long*)( lVar7 + ( (ulong)uVar6 / (ulong)uVar10 ) * 8 ) + ( (ulong)uVar6 % (ulong)uVar10 ) * 4 );
   uVar18 = (ulong)uVar6;
   LOCK();
   UNLOCK();
   uVar11 = (int)RID_AllocBase::base_id + 1;
   uVar12 = uVar11 & 0x7fffffff;
   if (uVar12 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar17 = *(long*)( this + 8 );
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( *(long*)( lVar17 + ( uVar18 / uVar10 ) * 8 ) + ( uVar18 % (ulong)uVar10 ) * 0x48 + 0x40 ) = uVar12 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   uVar15 = CONCAT44(uVar11, uVar6) & 0x7fffffffffffffff;
   if (( uVar15 != 0 ) && ( (uint)uVar15 < *(uint*)( this + 0x1c ) )) {
      puVar2 = (undefined8*)( *(long*)( lVar17 + ( uVar18 / *(uint*)( this + 0x18 ) ) * 8 ) + ( uVar18 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x48 );
      if ((int)*(uint*)( puVar2 + 8 ) < 0) {
         uVar6 = *(uint*)( puVar2 + 8 ) & 0x7fffffff;
         if (uVar6 == ( uint )(uVar15 >> 0x20)) {
            *(uint*)( puVar2 + 8 ) = uVar6;
            *puVar2 = *(undefined8*)param_1;
            puVar2[1] = *(undefined8*)( param_1 + 8 );
            puVar2[2] = *(undefined8*)( param_1 + 0x10 );
            uVar14 = *(undefined8*)( param_1 + 0x18 );
            puVar2[5] = 0;
            lVar17 = *(long*)( param_1 + 0x28 );
            puVar2[3] = uVar14;
            if (lVar17 != 0) {
               CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>::_unref((CowData<RendererRD::LightStorage::ReflectionAtlas::Reflection>*)( puVar2 + 5 ));
               if (*(long*)( param_1 + 0x28 ) != 0) {
                  plVar1 = (long*)( *(long*)( param_1 + 0x28 ) + -0x10 );
                  do {
                     lVar17 = *plVar1;
                     if (lVar17 == 0) goto LAB_0011c7b1;
                     LOCK();
                     lVar7 = *plVar1;
                     bVar19 = lVar17 == lVar7;
                     if (bVar19) {
                        *plVar1 = lVar17 + 1;
                        lVar7 = lVar17;
                     }

                     UNLOCK();
                  }
 while ( !bVar19 );
                  if (lVar7 != -1) {
                     puVar2[5] = *(undefined8*)( param_1 + 0x28 );
                  }

               }

            }

            LAB_0011c7b1:puVar2[6] = 0;
            if (*(long*)( param_1 + 0x30 ) != 0) {
               puVar2[6] = *(long*)( param_1 + 0x30 );
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') {
                  puVar2[6] = 0;
               }

            }

            puVar2[7] = *(undefined8*)( param_1 + 0x38 );
            return uVar15;
         }

         pcVar16 = "Attempting to initialize the wrong RID";
         uVar14 = 0xfc;
      }
 else {
         pcVar16 = "Initializing already initialized RID";
         uVar14 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar14, "Method/function failed. Returning: nullptr", pcVar16, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return uVar15;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<RID, unsigned int, HashMapHasherDefault, HashMapComparatorDefault<RID>,
   DefaultTypedAllocator<HashMapElement<RID, unsigned int> > >::insert(RID const&, unsigned int
   const&, bool) */void HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::insert(RID *param_1, uint *param_2, bool param_3) {
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
   undefined1(*pauVar22)[16];
   uint uVar23;
   ulong uVar24;
   undefined1(*pauVar25)[16];
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
   undefined1(*pauVar37)[16];
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
            goto LAB_0011c9e6;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_0011c9f1;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_0011c9f1;
   }
 else {
      LAB_0011c9e6:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_0011c9f1:if (uVar32 != 0) {
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
                  pauVar25 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar33 * 8 );
                  *(undefined4*)( pauVar25[1] + 8 ) = *in_RCX;
                  goto LAB_0011ccc0;
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

   if ((float)uVar2 * __LC175 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar25 = (undefined1(*) [16])0x0;
         goto LAB_0011ccc0;
      }

      _resize_and_rehash((HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>*)param_2, param_2[10] + 1);
   }

   lVar36 = *plVar28;
   uVar3 = *in_RCX;
   pauVar25 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar25 = (undefined1[16])0x0;
   *(undefined4*)( pauVar25[1] + 8 ) = uVar3;
   *(long*)pauVar25[1] = lVar36;
   puVar5 = *(undefined8**)( param_2 + 8 );
   if (puVar5 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 6 ) = pauVar25;
      *(undefined1(**) [16])( param_2 + 8 ) = pauVar25;
   }
 else if (in_R8B == '\0') {
      *puVar5 = pauVar25;
      *(undefined8**)( *pauVar25 + 8 ) = puVar5;
      *(undefined1(**) [16])( param_2 + 8 ) = pauVar25;
   }
 else {
      lVar36 = *(long*)( param_2 + 6 );
      *(undefined1(**) [16])( lVar36 + 8 ) = pauVar25;
      *(long*)*pauVar25 = lVar36;
      *(undefined1(**) [16])( param_2 + 6 ) = pauVar25;
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
   pauVar22 = pauVar25;
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
      pauVar37 = pauVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar32;
         puVar5 = (undefined8*)( lVar29 + lVar30 * 8 );
         pauVar37 = (undefined1(*) [16])*puVar5;
         *puVar5 = pauVar22;
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
      pauVar22 = pauVar37;
      uVar32 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar22;
   *puVar1 = uVar23;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_0011ccc0:*(undefined1(**) [16])param_1 = pauVar25;
   return;
}
/* RID_Alloc<RendererRD::LightStorage::ShadowAtlas,
   false>::make_rid(RendererRD::LightStorage::ShadowAtlas const&) */ulong RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>::make_rid(RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false> *this, ShadowAtlas *param_1) {
   undefined4 uVar1;
   undefined8 uVar2;
   void *pvVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   ShadowAtlas *pSVar13;
   undefined4 *puVar14;
   long lVar15;
   undefined4 *puVar16;
   undefined8 uVar17;
   long *plVar18;
   uint uVar19;
   char *pcVar20;
   ulong uVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   bool bVar23;
   RID aRStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar19 = *(uint*)( this + 0x20 );
   if (uVar19 == *(uint*)( this + 0x1c )) {
      if (uVar19 == 0) {
         lVar15 = 0;
         uVar22 = 8;
      }
 else {
         uVar22 = ( ulong )((int)( (ulong)uVar19 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar15 = ( (ulong)uVar19 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar7 = Memory::realloc_static(*(void**)( this + 8 ), uVar22, false);
      *(long*)( this + 8 ) = lVar7;
      uVar17 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 200, false);
      pvVar3 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar7 + lVar15 ) = uVar17;
      lVar8 = Memory::realloc_static(pvVar3, uVar22, false);
      *(long*)( this + 0x10 ) = lVar8;
      uVar17 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar10 = *(uint*)( this + 0x18 );
      lVar7 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar8 + lVar15 ) = uVar17;
      if (uVar10 != 0) {
         lVar8 = *(long*)( lVar7 + lVar15 );
         lVar9 = 0;
         puVar16 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar15 ) + 0xc0 );
         do {
            *puVar16 = 0xffffffff;
            puVar16 = puVar16 + 0x32;
            *(int*)( lVar8 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
            uVar10 = *(uint*)( this + 0x18 );
            lVar9 = lVar9 + 1;
         }
 while ( (uint)lVar9 < uVar10 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar10;
      uVar19 = *(uint*)( this + 0x20 );
   }
 else {
      lVar7 = *(long*)( this + 0x10 );
      uVar10 = *(uint*)( this + 0x18 );
   }

   uVar19 = *(uint*)( *(long*)( lVar7 + ( (ulong)uVar19 / (ulong)uVar10 ) * 8 ) + ( (ulong)uVar19 % (ulong)uVar10 ) * 4 );
   uVar22 = (ulong)uVar19;
   LOCK();
   UNLOCK();
   uVar11 = (int)RID_AllocBase::base_id + 1;
   uVar12 = uVar11 & 0x7fffffff;
   if (uVar12 == 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar15 = *(long*)( this + 8 );
   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   *(uint*)( *(long*)( lVar15 + ( uVar22 / uVar10 ) * 8 ) + ( uVar22 % (ulong)uVar10 ) * 200 + 0xc0 ) = uVar12 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   uVar21 = CONCAT44(uVar11, uVar19) & 0x7fffffffffffffff;
   if (( uVar21 != 0 ) && ( (uint)uVar21 < *(uint*)( this + 0x1c ) )) {
      puVar16 = (undefined4*)( *(long*)( lVar15 + ( uVar22 / *(uint*)( this + 0x18 ) ) * 8 ) + ( uVar22 % ( ulong ) * (uint*)( this + 0x18 ) ) * 200 );
      if ((int)puVar16[0x30] < 0) {
         uVar19 = ( uint )(uVar21 >> 0x20);
         if (uVar19 == ( puVar16[0x30] & 0x7fffffff )) {
            puVar16[0x30] = uVar19;
            pSVar13 = param_1 + 0x10;
            puVar14 = puVar16;
            do {
               uVar1 = *(undefined4*)( pSVar13 + -0x10 );
               *(undefined8*)( puVar14 + 4 ) = 0;
               *puVar14 = uVar1;
               plVar18 = (long*)( *(long*)pSVar13 + -0x10 );
               if (*(long*)pSVar13 != 0) {
                  do {
                     lVar15 = *plVar18;
                     if (lVar15 == 0) goto LAB_0011cf2c;
                     LOCK();
                     lVar7 = *plVar18;
                     bVar23 = lVar15 == lVar7;
                     if (bVar23) {
                        *plVar18 = lVar15 + 1;
                        lVar7 = lVar15;
                     }

                     UNLOCK();
                  }
 while ( !bVar23 );
                  if (lVar7 != -1) {
                     *(long*)( puVar14 + 4 ) = *(long*)pSVar13;
                  }

               }

               LAB_0011cf2c:puVar14 = puVar14 + 6;
               pSVar13 = pSVar13 + 0x18;
            }
 while ( puVar14 != puVar16 + 0x18 );
            uVar17 = *(undefined8*)( param_1 + 0x70 );
            uVar5 = *(undefined8*)( param_1 + 0x60 );
            uVar6 = *(undefined8*)( param_1 + 0x68 );
            *(ShadowAtlas*)( puVar16 + 0x1e ) = param_1[0x78];
            uVar2 = *(undefined8*)( param_1 + 0x80 );
            *(undefined8*)( puVar16 + 0x1c ) = uVar17;
            lVar15 = 1;
            *(undefined8*)( puVar16 + 0x20 ) = uVar2;
            uVar17 = *(undefined8*)( param_1 + 0x88 );
            *(undefined8*)( puVar16 + 0x18 ) = uVar5;
            *(undefined8*)( puVar16 + 0x1a ) = uVar6;
            *(undefined8*)( puVar16 + 0x22 ) = uVar17;
            uVar19 = *(uint*)( param_1 + 0xb8 );
            *(undefined8*)( puVar16 + 0x2e ) = 0;
            uVar19 = *(uint*)( hash_table_size_primes + (ulong)uVar19 * 4 );
            *(undefined1(*) [16])( puVar16 + 0x26 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar16 + 0x2a ) = (undefined1[16])0x0;
            if (5 < uVar19) {
               do {
                  if (uVar19 <= *(uint*)( hash_table_size_primes + lVar15 * 4 )) {
                     puVar16[0x2e] = (int)lVar15;
                     goto LAB_0011cff0;
                  }

                  lVar15 = lVar15 + 1;
               }
 while ( lVar15 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
            }

            LAB_0011cff0:if (( *(int*)( param_1 + 0xbc ) != 0 ) && ( plVar18 = *(long**)( param_1 + 0xa8 ) ),plVar18 != (long*)0x0) {
               do {
                  HashMap<RID,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<RID>,DefaultTypedAllocator<HashMapElement<RID,unsigned_int>>>::insert(aRStack_38, puVar16 + 0x24, (bool)( (char)plVar18 + '\x10' ));
                  plVar18 = (long*)*plVar18;
               }
 while ( plVar18 != (long*)0x0 );
            }

            goto LAB_0011d036;
         }

         pcVar20 = "Attempting to initialize the wrong RID";
         uVar17 = 0xfc;
      }
 else {
         pcVar20 = "Initializing already initialized RID";
         uVar17 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar17, "Method/function failed. Returning: nullptr", pcVar20, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_0011d036:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar21;
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::ReflectionAtlas, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionAtlas,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::ShadowAtlas, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ShadowAtlas,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::LightInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::LightInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::LightInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::LightmapInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::LightmapInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::LightmapInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::Lightmap, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::Lightmap,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::Lightmap,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionProbeInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::ReflectionProbe, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::ReflectionProbe,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::LightStorage::Light, true>::~RID_Alloc() */void RID_Alloc<RendererRD::LightStorage::Light,true>::~RID_Alloc(RID_Alloc<RendererRD::LightStorage::Light,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


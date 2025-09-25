/* GLES3::ParticlesStorage::particles_collision_instance_set_transform(RID, Transform3D const&) */void GLES3::ParticlesStorage::particles_collision_instance_set_transform(ParticlesStorage *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   undefined8 uVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x234 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x220 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x230 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x230 ) ) * 0x48;
      if (*(int*)( lVar1 + 0x40 ) == (int)( param_2 >> 0x20 )) {
         uVar2 = param_3[1];
         *(undefined8*)( lVar1 + 8 ) = *param_3;
         *(undefined8*)( lVar1 + 0x10 ) = uVar2;
         uVar2 = param_3[3];
         *(undefined8*)( lVar1 + 0x18 ) = param_3[2];
         *(undefined8*)( lVar1 + 0x20 ) = uVar2;
         uVar2 = param_3[5];
         *(undefined8*)( lVar1 + 0x28 ) = param_3[4];
         *(undefined8*)( lVar1 + 0x30 ) = uVar2;
         return;
      }

      if (*(int*)( lVar1 + 0x40 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_instance_set_transform", "drivers/gles3/storage/particles_storage.cpp", 0x5b0, "Parameter \"pci\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_instance_set_active(RID, bool) */void GLES3::ParticlesStorage::particles_collision_instance_set_active(ParticlesStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x234 ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x220 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x230 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x230 ) ) * 0x48;
      iVar2 = *(int*)( lVar1 + 0x40 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar1 + 0x38 ) = param_3;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_instance_set_active", "drivers/gles3/storage/particles_storage.cpp", 0x5b6, "Parameter \"pci\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_instance_free(RID) */void GLES3::ParticlesStorage::particles_collision_instance_free(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   uint uVar3;
   if (*(uint*)( this + 0x234 ) <= (uint)param_2) {
      _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      return;
   }

   lVar1 = *(long*)( *(long*)( this + 0x220 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x230 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x230 ) ) * 0x48;
   iVar2 = *(int*)( lVar1 + 0x40 );
   if (-1 < iVar2) {
      if ((int)( param_2 >> 0x20 ) == iVar2) {
         *(undefined4*)( lVar1 + 0x40 ) = 0xffffffff;
         uVar3 = *(int*)( this + 0x238 ) - 1;
         *(uint*)( this + 0x238 ) = uVar3;
         *(uint*)( *(long*)( *(long*)( this + 0x228 ) + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x230 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 0x230 ) ) * 4 ) = (uint)param_2;
         return;
      }

      _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      return;
   }

   _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_emitting(RID, bool) */void GLES3::ParticlesStorage::particles_set_emitting(ParticlesStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (*(char*)( Config::singleton + 0x8a ) != '\0') {
      _err_print_error("particles_set_emitting", "drivers/gles3/storage/particles_storage.cpp", 0x7d, "Condition \"GLES3::Config::get_singleton()->disable_particles_workaround\" is true.", "Due to driver bugs, GPUParticles are not supported on Adreno 3XX devices. Please use CPUParticles instead.", 0, 0);
      return;
   }

   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x10 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_emitting", "drivers/gles3/storage/particles_storage.cpp", 0x80, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_get_emitting(RID) */undefined1 GLES3::ParticlesStorage::particles_get_emitting(ParticlesStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (*(char*)( Config::singleton + 0x8a ) != '\0') {
      return 0;
   }

   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x10 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_get_emitting", "drivers/gles3/storage/particles_storage.cpp", 0x8b, "Parameter \"particles\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_set_amount_ratio(RID, float) */void GLES3::ParticlesStorage::particles_set_amount_ratio(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x14 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_amount_ratio", "drivers/gles3/storage/particles_storage.cpp", 0xcc, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_lifetime(RID, double) */void GLES3::ParticlesStorage::particles_set_lifetime(undefined8 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( lVar2 + 0x20 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_lifetime", "drivers/gles3/storage/particles_storage.cpp", 0xd3, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_one_shot(RID, bool) */void GLES3::ParticlesStorage::particles_set_one_shot(ParticlesStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x11 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_one_shot", "drivers/gles3/storage/particles_storage.cpp", 0xd9, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_pre_process_time(RID, double) */void GLES3::ParticlesStorage::particles_set_pre_process_time(undefined8 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( lVar2 + 0x28 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_pre_process_time", "drivers/gles3/storage/particles_storage.cpp", 0xdf, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_request_process_time(RID, float) */void GLES3::ParticlesStorage::particles_request_process_time(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x30 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_request_process_time", "drivers/gles3/storage/particles_storage.cpp", 0xe5, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_seed(RID, unsigned int) */void GLES3::ParticlesStorage::particles_set_seed(ParticlesStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x138 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_seed", "drivers/gles3/storage/particles_storage.cpp", 0xeb, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_explosiveness_ratio(RID, float) */void GLES3::ParticlesStorage::particles_set_explosiveness_ratio(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x34 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_explosiveness_ratio", "drivers/gles3/storage/particles_storage.cpp", 0xf1, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_randomness_ratio(RID, float) */void GLES3::ParticlesStorage::particles_set_randomness_ratio(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x38 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_randomness_ratio", "drivers/gles3/storage/particles_storage.cpp", 0xf6, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_speed_scale(RID, double) */void GLES3::ParticlesStorage::particles_set_speed_scale(undefined8 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined8*)( lVar2 + 0x140 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_speed_scale", "drivers/gles3/storage/particles_storage.cpp", 0x103, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_interpolate(RID, bool) */void GLES3::ParticlesStorage::particles_set_interpolate(ParticlesStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x14c ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_interpolate", "drivers/gles3/storage/particles_storage.cpp", 0x121, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_fractional_delta(RID, bool) */void GLES3::ParticlesStorage::particles_set_fractional_delta(ParticlesStorage *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x14d ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_fractional_delta", "drivers/gles3/storage/particles_storage.cpp", 0x128, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_collision_base_size(RID, float) */void GLES3::ParticlesStorage::particles_set_collision_base_size(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x158 ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_collision_base_size", "drivers/gles3/storage/particles_storage.cpp", 0x13b, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_transform_align(RID,
   RenderingServer::ParticlesTransformAlign) */void GLES3::ParticlesStorage::particles_set_transform_align(ParticlesStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x94 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_transform_align", "drivers/gles3/storage/particles_storage.cpp", 0x142, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_get_process_material(RID) const */undefined8 GLES3::ParticlesStorage::particles_get_process_material(ParticlesStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0x88 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_get_process_material", "drivers/gles3/storage/particles_storage.cpp", 0x151, "Parameter \"particles\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_set_draw_order(RID, RenderingServer::ParticlesDrawOrder) */void GLES3::ParticlesStorage::particles_set_draw_order(ParticlesStorage *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x98 ) = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_draw_order", "drivers/gles3/storage/particles_storage.cpp", 0x158, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_restart(RID) */void GLES3::ParticlesStorage::particles_restart(ParticlesStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar2 + 0x3c ) = 1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_restart", "drivers/gles3/storage/particles_storage.cpp", 0x16e, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_get_aabb(RID) const */undefined8 *GLES3::ParticlesStorage::particles_get_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   long lVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x184 ) )) {
      lVar3 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x180 ) ) * 0x210 + *(long*)( *(long*)( param_2 + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x180 ) ) * 8 );
      if (*(int*)( lVar3 + 0x208 ) == (int)( param_3 >> 0x20 )) {
         uVar2 = *(undefined8*)( lVar3 + 0x48 );
         uVar1 = *(undefined8*)( lVar3 + 0x50 );
         *param_1 = *(undefined8*)( lVar3 + 0x40 );
         param_1[1] = uVar2;
         param_1[2] = uVar1;
         return param_1;
      }

      if (*(int*)( lVar3 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_get_aabb", "drivers/gles3/storage/particles_storage.cpp", 0x1c1, "Parameter \"particles\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* GLES3::ParticlesStorage::particles_set_emission_transform(RID, Transform3D const&) */void GLES3::ParticlesStorage::particles_set_emission_transform(ParticlesStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar2 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x160 ) = *param_3;
         *(undefined8*)( lVar2 + 0x168 ) = uVar1;
         uVar1 = param_3[3];
         *(undefined8*)( lVar2 + 0x170 ) = param_3[2];
         *(undefined8*)( lVar2 + 0x178 ) = uVar1;
         uVar1 = param_3[5];
         *(undefined8*)( lVar2 + 0x180 ) = param_3[4];
         *(undefined8*)( lVar2 + 0x188 ) = uVar1;
         return;
      }

      if (*(int*)( lVar2 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_emission_transform", "drivers/gles3/storage/particles_storage.cpp", 0x1c8, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_emitter_velocity(RID, Vector3 const&) */void GLES3::ParticlesStorage::particles_set_emitter_velocity(ParticlesStorage *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 400 ) = *param_3;
         *(undefined4*)( lVar1 + 0x198 ) = *(undefined4*)( param_3 + 1 );
         return;
      }

      if (*(int*)( lVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_emitter_velocity", "drivers/gles3/storage/particles_storage.cpp", 0x1cf, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_interp_to_end(RID, float) */void GLES3::ParticlesStorage::particles_set_interp_to_end(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   int iVar1;
   long lVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar2 + 0x19c ) = param_1;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_interp_to_end", "drivers/gles3/storage/particles_storage.cpp", 0x1d6, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_is_inactive(RID) const */undefined1 GLES3::ParticlesStorage::particles_is_inactive(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         if (*(char*)( lVar1 + 0x10 ) != '\0') {
            return 0;
         }

         return *(undefined1*)( lVar1 + 4 );
      }

      if (*(int*)( lVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_is_inactive", "drivers/gles3/storage/particles_storage.cpp", 0x4c8, "Parameter \"particles\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_collision_set_cull_mask(RID, unsigned int) */void GLES3::ParticlesStorage::particles_collision_set_cull_mask(ParticlesStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar1 + 4 ) = param_3;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_cull_mask", "drivers/gles3/storage/particles_storage.cpp", 0x528, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_set_attractor_strength(RID, float) */void GLES3::ParticlesStorage::particles_collision_set_attractor_strength(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   long lVar1;
   int iVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x18 ) = param_1;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_attractor_strength", "drivers/gles3/storage/particles_storage.cpp", 0x53e, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_set_attractor_directionality(RID, float) */void GLES3::ParticlesStorage::particles_collision_set_attractor_directionality(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   long lVar1;
   int iVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x20 ) = param_1;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_attractor_directionality", "drivers/gles3/storage/particles_storage.cpp", 0x545, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_set_attractor_attenuation(RID, float) */void GLES3::ParticlesStorage::particles_collision_set_attractor_attenuation(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   long lVar1;
   int iVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x1c ) = param_1;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_attractor_attenuation", "drivers/gles3/storage/particles_storage.cpp", 0x54c, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_get_aabb(RID) const */uint *GLES3::ParticlesStorage::particles_collision_get_aabb(uint *param_1, long param_2, ulong param_3) {
   int *piVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   uint uVar5;
   uint uVar6;
   uint uVar7;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x1dc ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( param_2 + 0x1c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x1d8 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x1d8 ) ) * 0x78 );
      if (piVar1[0x1c] == (int)( param_3 >> 0x20 )) {
         if (( *piVar1 != 0 ) && ( *piVar1 != 3 )) {
            fVar2 = (float)piVar1[3];
            fVar3 = (float)*(undefined8*)( piVar1 + 4 );
            uVar5 = (uint)fVar2 ^ _LC44;
            fVar4 = (float)( ( ulong ) * (undefined8*)( piVar1 + 4 ) >> 0x20 );
            uVar7 = (uint)fVar3 ^ _LC44;
            uVar6 = piVar1[5] ^ _LC44;
            *(ulong*)( param_1 + 4 ) = CONCAT44(fVar4 + fVar4, fVar3 + fVar3);
            *param_1 = uVar5;
            param_1[1] = uVar7;
            param_1[2] = uVar6;
            param_1[3] = ( uint )(fVar2 + fVar2);
            return param_1;
         }

         fVar2 = (float)piVar1[2];
         fVar4 = fVar2 + fVar2;
         uVar5 = (uint)fVar2 ^ _LC44;
         *(ulong*)( param_1 + 4 ) = CONCAT44(fVar4, fVar4);
         *param_1 = uVar5;
         param_1[1] = uVar5;
         param_1[2] = uVar5;
         param_1[3] = (uint)fVar4;
         return param_1;
      }

      if (piVar1[0x1c] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_get_aabb", "drivers/gles3/storage/particles_storage.cpp", 0x570, "Parameter \"particles_collision\" is null.", 0, 0);
   for (int i = 0; i < 6; i++) {
      param_1[i] = 0;
   }

   return param_1;
}
/* GLES3::ParticlesStorage::particles_collision_is_heightfield(RID) const */undefined8 GLES3::ParticlesStorage::particles_collision_is_heightfield(ParticlesStorage *this, ulong param_2) {
   int *piVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78 );
      if (piVar1[0x1c] == (int)( param_2 >> 0x20 )) {
         return CONCAT71(( int7 )((ulong)piVar1 >> 8), *piVar1 == 6);
      }

      if (piVar1[0x1c] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_is_heightfield", "drivers/gles3/storage/particles_storage.cpp", 0x58b, "Parameter \"particles_collision\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_collision_get_height_field_mask(RID) const */undefined4 GLES3::ParticlesStorage::particles_collision_get_height_field_mask(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar1 + 0x38 );
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_get_height_field_mask", "drivers/gles3/storage/particles_storage.cpp", 0x591, "Parameter \"particles_collision\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_collision_set_height_field_mask(RID, unsigned int) */void GLES3::ParticlesStorage::particles_collision_set_height_field_mask(ParticlesStorage *this, ulong param_2, undefined4 param_3) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar1 + 0x38 ) = param_3;
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_height_field_mask", "drivers/gles3/storage/particles_storage.cpp", 0x597, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_get_draw_passes(RID) const */undefined4 GLES3::ParticlesStorage::particles_get_draw_passes(ParticlesStorage *this, ulong param_2) {
   int iVar1;
   undefined4 uVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar3 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar3 = *(long*)( lVar3 + 0xa8 );
         if (lVar3 == 0) {
            uVar2 = 0;
         }
 else {
            uVar2 = *(undefined4*)( lVar3 + -8 );
         }

         return uVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_get_draw_passes", "drivers/gles3/storage/particles_storage.cpp", 0x1dd, "Parameter \"particles\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_set_custom_aabb(RID, AABB const&) */void GLES3::ParticlesStorage::particles_set_custom_aabb(ParticlesStorage *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar2 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *(undefined8*)( lVar2 + 0x40 ) = *param_3;
         *(undefined8*)( lVar2 + 0x48 ) = uVar1;
         *(undefined8*)( lVar2 + 0x50 ) = param_3[2];
         Dependency::changed_notify(lVar2 + 0x1c8, 0);
         return;
      }

      if (*(int*)( lVar2 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_custom_aabb", "drivers/gles3/storage/particles_storage.cpp", 0xfc, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_use_local_coordinates(RID, bool) */void GLES3::ParticlesStorage::particles_set_use_local_coordinates(ParticlesStorage *this, ulong param_2, undefined1 param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         *(undefined1*)( lVar1 + 0x58 ) = param_3;
         Dependency::changed_notify(lVar1 + 0x1c8, 5);
         return;
      }

      if (*(int*)( lVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_use_local_coordinates", "drivers/gles3/storage/particles_storage.cpp", 0x109, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_process_material(RID, RID) */void GLES3::ParticlesStorage::particles_set_process_material(ParticlesStorage *this, ulong param_2, undefined8 param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 0x88 ) = param_3;
         Dependency::changed_notify(lVar1 + 0x1c8, 5);
         return;
      }

      if (*(int*)( lVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_process_material", "drivers/gles3/storage/particles_storage.cpp", 0x149, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_set_sphere_radius(RID, float) */void GLES3::ParticlesStorage::particles_collision_set_sphere_radius(undefined4 param_1, ParticlesStorage *this, ulong param_3) {
   long lVar1;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      if (*(int*)( lVar1 + 0x70 ) == (int)( param_3 >> 0x20 )) {
         *(undefined4*)( lVar1 + 8 ) = param_1;
         Dependency::changed_notify(lVar1 + 0x40, 0);
         return;
      }

      if (*(int*)( lVar1 + 0x70 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_sphere_radius", "drivers/gles3/storage/particles_storage.cpp", 0x52e, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_set_box_extents(RID, Vector3 const&) */void GLES3::ParticlesStorage::particles_collision_set_box_extents(ParticlesStorage *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      if (*(int*)( lVar1 + 0x70 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 0xc ) = *param_3;
         *(undefined4*)( lVar1 + 0x14 ) = *(undefined4*)( param_3 + 1 );
         Dependency::changed_notify(lVar1 + 0x40, 0);
         return;
      }

      if (*(int*)( lVar1 + 0x70 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_set_box_extents", "drivers/gles3/storage/particles_storage.cpp", 0x536, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_collision_height_field_update(RID) */void GLES3::ParticlesStorage::particles_collision_height_field_update(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         Dependency::changed_notify(lVar1 + 0x40, 0);
         return;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_height_field_update", "drivers/gles3/storage/particles_storage.cpp", 0x557, "Parameter \"particles_collision\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_get_draw_pass_mesh(RID, int) const */undefined8 GLES3::ParticlesStorage::particles_get_draw_pass_mesh(ParticlesStorage *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x184 ) <= (uint)param_2 )) {
      LAB_001025d6:_err_print_error("particles_get_draw_pass_mesh", "drivers/gles3/storage/particles_storage.cpp", 0x1e4, "Parameter \"particles\" is null.", 0, 0);
      return 0;
   }

   lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
   iVar1 = *(int*)( lVar3 + 0x208 );
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001025d6;
   }

   lVar3 = *(long*)( lVar3 + 0xa8 );
   lVar2 = (long)param_3;
   if (param_3 < 0) {
      if (lVar3 != 0) {
         lVar4 = *(long*)( lVar3 + -8 );
         goto LAB_00102585;
      }

   }
 else if (lVar3 != 0) {
      lVar4 = *(long*)( lVar3 + -8 );
      if (lVar2 < lVar4) {
         return *(undefined8*)( lVar3 + lVar2 * 8 );
      }

      goto LAB_00102585;
   }

   lVar4 = 0;
   LAB_00102585:_err_print_index_error("particles_get_draw_pass_mesh", "drivers/gles3/storage/particles_storage.cpp", 0x1e5, lVar2, lVar4, "p_pass", "particles->draw_passes.size()", "", false, false);
   return 0;
}
/* GLES3::ParticlesStorage::particles_set_trails(RID, bool, double) */void GLES3::ParticlesStorage::particles_set_trails(undefined8 param_1, undefined8 param_2, char param_3) {
   if (( param_3 != '\0' ) && ( particles_set_trails(RID,bool,double):: )) {
      _err_print_error("particles_set_trails", "drivers/gles3/storage/particles_storage.cpp", 0x12f, "The Compatibility renderer does not support particle trails.", 1, 1);
      particles_set_trails(RID, bool, double)
      return;
   }

   return;
}
/* GLES3::ParticlesStorage::particles_emit(RID, Transform3D const&, Vector3 const&, Color const&,
   Color const&, unsigned int) */void GLES3::ParticlesStorage::particles_emit(void) {
   if (particles_emit(RID, Transform3D_const & Vector3_const & Color_const & Color_const & unsigned_int) == '\0') {
      return;
   }

   _err_print_error("particles_emit", "drivers/gles3/storage/particles_storage.cpp", 0x17a, "The Compatibility renderer does not support manually emitting particles.", 1, 1);
   particles_emit(RID, Transform3D_const &, Vector3_const &, Color_const &, Color_const &, unsigned_int)
   return;
}
/* GLES3::ParticlesStorage::particles_collision_set_field_texture(RID, RID) */void GLES3::ParticlesStorage::particles_collision_set_field_texture(void) {
   if (particles_collision_set_field_texture(RID, RID) == '\0') {
      return;
   }

   _err_print_error("particles_collision_set_field_texture", "drivers/gles3/storage/particles_storage.cpp", 0x552, "The Compatibility renderer does not support SDF collisions in 3D particle shaders", 1, 1);
   particles_collision_set_field_texture(RID, RID)
   return;
}
/* GLES3::ParticlesStorage::particles_set_subemitter(RID, RID) */void GLES3::ParticlesStorage::particles_set_subemitter(undefined8 param_1, undefined8 param_2, long param_3) {
   if (( param_3 != 0 ) && ( particles_set_subemitter(RID,RID) )) {
      _err_print_error("particles_set_subemitter", "drivers/gles3/storage/particles_storage.cpp", 0x175, "The Compatibility renderer does not support particle sub-emitters.", 1, 1);
      particles_set_subemitter(RID, RID)
      return;
   }

   return;
}
/* GLES3::ParticlesStorage::particles_request_process(RID) */void GLES3::ParticlesStorage::particles_request_process(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   long lVar2;
   long lVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar3 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         if (( *(char*)( lVar3 + 0xf8 ) == '\0' ) && ( *(undefined1*)( lVar3 + 0xf8 ) = 1 * (long*)( lVar3 + 0x100 ) == 0 )) {
            lVar1 = lVar3 + 0x100;
            *(ParticlesStorage**)( lVar3 + 0x100 ) = this + 0x158;
            lVar2 = *(long*)( this + 0x158 );
            *(undefined8*)( lVar3 + 0x118 ) = 0;
            *(long*)( lVar3 + 0x110 ) = lVar2;
            if (lVar2 == 0) {
               *(long*)( this + 0x160 ) = lVar1;
            }
 else {
               *(long*)( lVar2 + 0x18 ) = lVar1;
            }

            *(long*)( this + 0x158 ) = lVar1;
         }

         return;
      }

      if (*(int*)( lVar3 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_request_process", "drivers/gles3/storage/particles_storage.cpp", 0x17f, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_trail_bind_poses(RID, Vector<Transform3D> const&) */void GLES3::ParticlesStorage::particles_set_trail_bind_poses(undefined8 param_1, undefined8 param_2, long param_3) {
   if (( ( *(long*)( param_3 + 8 ) != 0 ) && ( *(long*)( *(long*)( param_3 + 8 ) + -8 ) != 0 ) ) && ( particles_set_trail_bind_poses(RID,Vector<Transform3D>const&):: )) {
      _err_print_error("particles_set_trail_bind_poses", "drivers/gles3/storage/particles_storage.cpp", 0x135, "The Compatibility renderer does not support particle trails.", 1, 1);
      particles_set_trail_bind_poses(RID, Vector<Transform3D> const &)
      return;
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
/* GLES3::ParticlesStorage::particles_set_draw_pass_mesh(RID, int, RID) */void GLES3::ParticlesStorage::particles_set_draw_pass_mesh(ParticlesStorage *this, ulong param_2, int param_3, undefined8 param_4) {
   long lVar1;
   long lVar2;
   long lVar3;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x184 ) <= (uint)param_2 )) {
      LAB_00102b8c:_err_print_error("particles_set_draw_pass_mesh", "drivers/gles3/storage/particles_storage.cpp", 0x166, "Parameter \"particles\" is null.", 0, 0);
      return;
   }

   lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
   if (*(int*)( lVar1 + 0x208 ) != (int)( param_2 >> 0x20 )) {
      if (*(int*)( lVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00102b8c;
   }

   lVar2 = *(long*)( lVar1 + 0xa8 );
   lVar3 = (long)param_3;
   if (param_3 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         goto LAB_00102b3d;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (lVar3 < lVar2) {
         CowData<RID>::_copy_on_write((CowData<RID>*)( lVar1 + 0xa8 ));
         *(undefined8*)( *(long*)( lVar1 + 0xa8 ) + lVar3 * 8 ) = param_4;
         Dependency::changed_notify(lVar1 + 0x1c8, 5);
         return;
      }

      goto LAB_00102b3d;
   }

   lVar2 = 0;
   LAB_00102b3d:_err_print_index_error("particles_set_draw_pass_mesh", "drivers/gles3/storage/particles_storage.cpp", 0x167, lVar3, lVar2, "p_pass", "particles->draw_passes.size()", "", false, false);
   return;
}
/* GLES3::ParticlesStorage::particles_remove_collision(RID, RID) */ulong GLES3::ParticlesStorage::particles_remove_collision(ParticlesStorage *this, ulong param_2, long param_3) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
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
   uint uVar30;
   ulong uVar31;
   ulong uVar32;
   uint uVar33;
   uint *puVar34;
   int iVar35;
   uint uVar36;
   long lVar37;
   long lVar38;
   ulong uVar39;
   uint *puVar40;
   ulong uVar41;
   uint *puVar42;
   ulong uVar43;
   ulong uVar44;
   uint uVar45;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar37 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar37 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         uVar32 = *(ulong*)( lVar37 + 0x1a0 );
         uVar31 = uVar32;
         if (( uVar32 != 0 ) && ( uVar31 = ( ulong ) * (uint*)( lVar37 + 0x1c4 ) * (uint*)( lVar37 + 0x1c4 ) != 0 )) {
            lVar6 = *(long*)( lVar37 + 0x1b8 );
            uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar37 + 0x1c0 ) * 4 );
            uVar43 = CONCAT44(0, uVar30);
            lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar37 + 0x1c0 ) * 8 );
            uVar31 = param_3 * 0x3ffff - 1;
            uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;
            uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;
            uVar31 = uVar31 >> 0x16 ^ uVar31;
            uVar41 = uVar31 & 0xffffffff;
            if ((int)uVar31 == 0) {
               uVar41 = 1;
            }

            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar41 * lVar7;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar43;
            auVar10 = auVar10 * auVar20;
            lVar38 = auVar10._8_8_;
            uVar31 = auVar10._0_8_;
            uVar45 = *(uint*)( lVar6 + lVar38 * 4 );
            iVar35 = auVar10._8_4_;
            if (uVar45 != 0) {
               uVar33 = 0;
               do {
                  if ((uint)uVar41 == uVar45) {
                     lVar8 = *(long*)( lVar37 + 0x1a8 );
                     uVar45 = *(uint*)( lVar8 + lVar38 * 4 );
                     uVar31 = (ulong)uVar45;
                     if (param_3 == *(long*)( uVar32 + uVar31 * 8 )) {
                        lVar9 = *(long*)( lVar37 + 0x1b0 );
                        puVar1 = (uint*)( lVar9 + uVar31 * 4 );
                        uVar33 = *puVar1;
                        uVar41 = (ulong)uVar33;
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = ( ulong )(uVar33 + 1) * lVar7;
                        auVar24._8_8_ = 0;
                        auVar24._0_8_ = uVar43;
                        lVar38 = SUB168(auVar14 * auVar24, 8) * 4;
                        uVar36 = SUB164(auVar14 * auVar24, 8);
                        uVar44 = (ulong)uVar36;
                        puVar40 = (uint*)( lVar6 + lVar38 );
                        if (( *puVar40 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = ( ulong ) * puVar40 * lVar7,auVar25._8_8_ = 0,auVar25._0_8_ = uVar43,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar36 + uVar30 ) - SUB164(auVar15 * auVar25, 8)) * lVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar43,SUB164(auVar16 * auVar26, 8) == 0) {
                           uVar44 = (ulong)uVar33;
                        }
 else {
                           while (true) {
                              puVar34 = (uint*)( lVar38 + lVar8 );
                              puVar4 = (uint*)( lVar8 + uVar41 * 4 );
                              puVar42 = (uint*)( uVar41 * 4 + lVar6 );
                              puVar2 = (undefined4*)( lVar9 + ( ulong ) * puVar34 * 4 );
                              puVar3 = (undefined4*)( lVar9 + ( ulong ) * puVar4 * 4 );
                              uVar5 = *puVar3;
                              *puVar3 = *puVar2;
                              *puVar2 = uVar5;
                              uVar33 = *puVar40;
                              *puVar40 = *puVar42;
                              *puVar42 = uVar33;
                              uVar33 = *puVar34;
                              *puVar34 = *puVar4;
                              *puVar4 = uVar33;
                              auVar19._8_8_ = 0;
                              auVar19._0_8_ = ( ulong )((int)uVar44 + 1) * lVar7;
                              auVar29._8_8_ = 0;
                              auVar29._0_8_ = uVar43;
                              uVar39 = SUB168(auVar19 * auVar29, 8);
                              lVar38 = uVar39 * 4;
                              puVar40 = (uint*)( lVar6 + lVar38 );
                              if (( *puVar40 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = ( ulong ) * puVar40 * lVar7,auVar27._8_8_ = 0,auVar27._0_8_ = uVar43,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar29, 8) + uVar30 ) - SUB164(auVar17 * auVar27, 8)) * lVar7,auVar28._8_8_ = 0,auVar28._0_8_ = uVar43,SUB164(auVar18 * auVar28, 8) == 0) break;
                              uVar41 = uVar44;
                              uVar44 = uVar39 & 0xffffffff;
                           }
;
                        }

                        *(undefined4*)( lVar6 + uVar44 * 4 ) = 0;
                        uVar30 = *(int*)( lVar37 + 0x1c4 ) - 1;
                        uVar41 = (ulong)uVar30;
                        *(uint*)( lVar37 + 0x1c4 ) = uVar30;
                        if (uVar30 <= uVar45) {
                           return uVar41;
                        }

                        uVar30 = *(uint*)( lVar9 + uVar41 * 4 );
                        *(undefined8*)( uVar32 + uVar31 * 8 ) = *(undefined8*)( uVar32 + uVar41 * 8 );
                        *puVar1 = uVar30;
                        uVar32 = ( ulong ) * (uint*)( lVar9 + ( ulong ) * (uint*)( lVar37 + 0x1c4 ) * 4 );
                        *(uint*)( lVar8 + uVar32 * 4 ) = uVar45;
                        return uVar32;
                     }

                  }

                  uVar33 = uVar33 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar35 + 1) * lVar7;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar43;
                  auVar11 = auVar11 * auVar21;
                  lVar38 = auVar11._8_8_;
                  uVar31 = auVar11._0_8_;
                  uVar45 = *(uint*)( lVar6 + lVar38 * 4 );
                  iVar35 = auVar11._8_4_;
               }
 while ( ( uVar45 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar45 * lVar7,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar30 + iVar35 ) - SUB164(auVar12 * auVar22, 8)) * lVar7,auVar23._8_8_ = 0,auVar23._0_8_ = uVar43,uVar31 = SUB168(auVar13 * auVar23, 0),uVar33 <= SUB164(auVar13 * auVar23, 8) );
            }

         }

         return uVar31;
      }

      if (*(int*)( lVar37 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar32 = _err_print_error("particles_remove_collision", "drivers/gles3/storage/particles_storage.cpp", 0x1f2, "Parameter \"particles\" is null.", 0, 0);
   return uVar32;
}
/* GLES3::ParticlesStorage::particles_get_current_aabb(RID) */float *GLES3::ParticlesStorage::particles_get_current_aabb(float *param_1, long param_2, ulong param_3) {
   int iVar1;
   code *pcVar2;
   bool bVar3;
   float *pfVar4;
   long *plVar5;
   long lVar6;
   uint uVar7;
   int iVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   float fVar12;
   float fVar13;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   float fVar18;
   float fVar19;
   float local_d0;
   float local_cc;
   float local_c8;
   float local_c4;
   undefined8 local_c0;
   float local_b8;
   undefined1 local_a8[8];
   long local_a0;
   undefined1 local_98[12];
   float local_8c;
   float local_88;
   float local_84;
   float local_78;
   float local_74;
   float local_70;
   float local_6c;
   float local_68;
   float local_64;
   float local_60;
   float local_5c;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x184 ) )) {
      lVar10 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x180 ) ) * 0x210 + *(long*)( *(long*)( param_2 + 0x170 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x180 ) ) * 8 );
      if (*(int*)( lVar10 + 0x208 ) == (int)( param_3 >> 0x20 )) {
         iVar1 = *(int*)( lVar10 + 0x18 );
         if (*(char*)( lVar10 + 0xec ) == '\0') {
            uVar7 = *(uint*)( lVar10 + 200 );
         }
 else {
            uVar7 = *(uint*)( lVar10 + 0xe8 );
         }

         GLES3::Utilities::buffer_get_data((uint)local_a8, 0x8892, uVar7);
         if (local_a0 == 0) {
            lVar6 = 0;
         }
 else {
            lVar6 = *(long*)( local_a0 + -8 );
         }

         if (iVar1 << 6 == lVar6) {
            Transform3D::affine_inverse();
            lVar6 = local_a0;
            if (( local_a0 == 0 ) || ( *(long*)( local_a0 + -8 ) == 0 )) {
               local_c0 = 0;
               local_b8 = 0.0;
               local_c8 = 0.0;
               local_cc = 0.0;
               local_d0 = 0.0;
            }
 else {
               local_c0 = 0;
               if (iVar1 < 1) {
                  local_b8 = 0.0;
                  local_c8 = 0.0;
                  local_cc = 0.0;
                  local_d0 = 0.0;
               }
 else {
                  local_c8 = 0.0;
                  iVar8 = 0;
                  bVar3 = true;
                  local_cc = 0.0;
                  local_d0 = 0.0;
                  local_b8 = 0.0;
                  do {
                     while (pfVar4 = (float*)( ( ulong )(uint)(iVar8 << 6) + lVar6 ),*pfVar4 <= 0.0) {
                        LAB_00103158:iVar8 = iVar8 + 1;
                        if (iVar1 == iVar8) goto LAB_00103248;
                     }
;
                     fVar17 = pfVar4[0xb];
                     fVar15 = pfVar4[7];
                     fVar12 = pfVar4[3];
                     if (*(char*)( lVar10 + 0x58 ) == '\0') {
                        fVar16 = local_5c * fVar15;
                        fVar14 = local_60 * fVar12;
                        fVar13 = fVar15 * local_74;
                        fVar15 = local_6c * fVar12 + local_68 * fVar15 + local_64 * fVar17 + local_50;
                        fVar12 = fVar12 * local_78 + fVar13 + fVar17 * local_70 + local_54;
                        fVar17 = local_4c + local_58 * fVar17 + fVar14 + fVar16;
                     }

                     if (!bVar3) {
                        fVar13 = (float)( (ulong)local_c0 >> 0x20 );
                        if (( ( local_b8 < 0.0 ) || ( (float)local_c0 < 0.0 ) ) || ( fVar13 < 0.0 )) {
                           _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
                        }

                        fVar16 = (float)local_c0 + local_cc;
                        fVar13 = fVar13 + local_c8;
                        fVar14 = fVar15;
                        if (local_cc <= fVar15) {
                           fVar14 = local_cc;
                        }

                        fVar19 = fVar17;
                        if (local_c8 <= fVar17) {
                           fVar19 = local_c8;
                        }

                        fVar18 = fVar12;
                        if (local_d0 <= fVar12) {
                           fVar18 = local_d0;
                        }

                        if (fVar15 <= fVar16) {
                           fVar15 = fVar16;
                        }

                        if (fVar17 <= fVar13) {
                           fVar17 = fVar13;
                        }

                        if (fVar12 <= local_b8 + local_d0) {
                           fVar12 = local_b8 + local_d0;
                        }

                        local_b8 = fVar12 - fVar18;
                        local_c0 = CONCAT44(fVar17 - fVar19, fVar15 - fVar14);
                        local_d0 = fVar18;
                        local_cc = fVar14;
                        local_c8 = fVar19;
                        goto LAB_00103158;
                     }

                     iVar8 = iVar8 + 1;
                     bVar3 = false;
                     local_d0 = fVar12;
                     local_cc = fVar15;
                     local_c8 = fVar17;
                  }
 while ( iVar1 != iVar8 );
               }

            }

            LAB_00103248:lVar6 = *(long*)( lVar10 + 0xa8 );
            if (lVar6 == 0) {
               fVar17 = 0.0;
            }
 else {
               local_c4 = 0.0;
               lVar9 = 0;
               do {
                  while (true) {
                     if (*(long*)( lVar6 + -8 ) <= lVar9) {
                        local_d0 = local_d0 - local_c4;
                        local_cc = local_cc - local_c4;
                        fVar17 = local_c4 + local_c4;
                        local_c8 = local_c8 - local_c4;
                        goto LAB_00103345;
                     }

                     if (*(long*)( lVar6 + lVar9 * 8 ) != 0) break;
                     lVar9 = lVar9 + 1;
                     if (lVar6 == 0) goto LAB_00103308;
                  }
;
                  plVar5 = (long*)GLES3::MeshStorage::get_singleton();
                  lVar6 = *(long*)( lVar10 + 0xa8 );
                  if (lVar6 == 0) {
                     lVar11 = 0;
                     LAB_00103423:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar11, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar11 = *(long*)( lVar6 + -8 );
                  if (lVar11 <= lVar9) goto LAB_00103423;
                  ( **(code**)( *plVar5 + 0x98 ) )(local_98, plVar5, *(undefined8*)( lVar6 + lVar9 * 8 ), 0);
                  fVar17 = local_88;
                  if (local_88 <= local_8c) {
                     fVar17 = local_8c;
                  }

                  fVar15 = local_84;
                  if (local_84 <= fVar17) {
                     fVar15 = fVar17;
                  }

                  if (local_c4 < fVar15) {
                     local_c4 = fVar15;
                  }

                  lVar6 = *(long*)( lVar10 + 0xa8 );
                  lVar9 = lVar9 + 1;
               }
 while ( lVar6 != 0 );
               LAB_00103308:local_d0 = local_d0 - local_c4;
               fVar17 = local_c4 + local_c4;
               local_cc = local_cc - local_c4;
               local_c8 = local_c8 - local_c4;
            }

            LAB_00103345:*param_1 = local_d0;
            param_1[1] = local_cc;
            param_1[2] = local_c8;
            param_1[3] = local_b8 + fVar17;
            *(ulong*)( param_1 + 4 ) = CONCAT44(fVar17 + (float)( (ulong)local_c0 >> 0x20 ), fVar17 + (float)local_c0);
         }
 else {
            _err_print_error("particles_get_current_aabb", "drivers/gles3/storage/particles_storage.cpp", 0x195, "Condition \"buffer.size() != (int)(total_amount * sizeof(ParticleInstanceData3D))\" is true. Returning: AABB()", 0, 0);
            for (int i = 0; i < 6; i++) {
               param_1[i] = 0;
            }

         }

         lVar10 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar5 = (long*)( local_a0 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar10 + -0x10 ), false);
            }

         }

         goto LAB_001033ad;
      }

      if (*(int*)( lVar10 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_get_current_aabb", "drivers/gles3/storage/particles_storage.cpp", 0x18c, "Parameter \"particles\" is null.", 0, 0);
   for (int i = 0; i < 6; i++) {
      param_1[i] = 0;
   }

   LAB_001033ad:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
/* GLES3::ParticlesStorage::get_singleton() */undefined8 GLES3::ParticlesStorage::get_singleton(void) {
   return singleton;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::ParticlesStorage() */void GLES3::ParticlesStorage::ParticlesStorage(ParticlesStorage *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   char *pcVar5;
   undefined8 uVar6;
   long *plVar7;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x18 ) = 0;
   *(undefined***)this = &PTR__ParticlesStorage_00114390;
   ShaderGLES3::ShaderGLES3((ShaderGLES3*)( this + 0x20 ));
   *(undefined1(*) [16])( this + 0x158 ) = (undefined1[16])0x0;
   uVar3 = _UNK_001162f8;
   uVar6 = __LC88;
   *(undefined***)( this + 0x20 ) = &PTR__init_00114308;
   *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x150 ) = 0;
   *(undefined***)( this + 0x168 ) = &PTR__RID_Alloc_00114330;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 368 ) ) = 0;
   }

   *(undefined4*)( this + 0x1a8 ) = 1;
   *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x180 ) = uVar6;
   *(undefined8*)( this + 0x188 ) = uVar3;
   uVar6 = Memory::alloc_static(0x4108, false);
   *(undefined8*)( this + 0x170 ) = uVar6;
   uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18c ) << 3, false);
   *(undefined8*)( this + 0x178 ) = uVar6;
   *(undefined1(*) [16])( this + 0x200 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x1c0 ) = &PTR__RID_Alloc_00114350;
   uVar3 = _UNK_00116308;
   uVar6 = __LC89;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 456 ) ) = 0;
   }

   *(undefined4*)( this + 0x200 ) = 1;
   *(undefined8*)( this + 0x1d8 ) = uVar6;
   *(undefined8*)( this + 0x1e0 ) = uVar3;
   *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   uVar6 = Memory::alloc_static(0xe08, false);
   *(undefined8*)( this + 0x1c8 ) = uVar6;
   uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x1e4 ) << 3, false);
   *(undefined8*)( this + 0x1d0 ) = uVar6;
   *(undefined1(*) [16])( this + 600 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x248 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x218 ) = &PTR__RID_Alloc_00114370;
   uVar3 = _UNK_00116318;
   uVar6 = __LC90;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 544 ) ) = 0;
   }

   *(undefined4*)( this + 600 ) = 1;
   *(undefined8*)( this + 0x230 ) = uVar6;
   *(undefined8*)( this + 0x238 ) = uVar3;
   singleton = this;
   plVar7 = (long*)GLES3::MaterialStorage::get_singleton();
   local_58 = (char*)0x0;
   String::operator +=((String_conflict*)&local_58, "#define MAX_GLOBAL_SHADER_UNIFORMS 256\n");
   ShaderGLES3::initialize((String_conflict*)( plVar7 + 0xa9 ), (int)(String_conflict*)&local_58);
   pcVar5 = local_58;
   if (local_58 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar5 + -0x10 ), false);
      }

   }

   uVar6 = ( **(code**)( *plVar7 + 0x70 ) )(plVar7);
   *(undefined8*)( this + 8 ) = uVar6;
   ( **(code**)( *plVar7 + 0x78 ) )(plVar7, uVar6);
   pcVar2 = *(code**)( *plVar7 + 0x88 );
   local_60 = 0;
   local_58 = "\n// Default particles shader.\n\nshader_type particles;\n\nvoid process() {\n\tCOLOR = vec4(1.0);\n}\n";
   local_50 = 0x5e;
   String::parse_latin1((StrRange*)&local_60);
   ( *pcVar2 )(plVar7, *(undefined8*)( this + 8 ), (StrRange*)&local_60);
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

   uVar6 = ( **(code**)( *plVar7 + 200 ) )(plVar7);
   *(undefined8*)( this + 0x10 ) = uVar6;
   ( **(code**)( *plVar7 + 0xd0 ) )(plVar7, uVar6);
   ( **(code**)( *plVar7 + 0xe8 ) )(plVar7, *(undefined8*)( this + 0x10 ), *(undefined8*)( this + 8 ));
   local_58 = "";
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   ShaderGLES3::initialize((String_conflict*)( this + 0x20 ), (int)(StrRange*)&local_60);
   lVar4 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar7 = (long*)( local_60 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   uVar6 = ShaderGLES3::version_create();
   *(undefined8*)( this + 0x150 ) = uVar6;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::particles_set_canvas_sdf_collision(RID, bool, Transform2D const&, Rect2
   const&, unsigned int) */void GLES3::ParticlesStorage::particles_set_canvas_sdf_collision(ParticlesStorage *this, ulong param_2, undefined1 param_3, undefined8 *param_4, undefined8 *param_5, undefined4 param_6) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long lVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      if (*(int*)( lVar5 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         uVar1 = *param_4;
         uVar2 = param_4[1];
         uVar3 = *param_5;
         uVar4 = param_5[1];
         *(undefined1*)( lVar5 + 0x5a ) = param_3;
         *(undefined8*)( lVar5 + 0x5c ) = uVar1;
         *(undefined8*)( lVar5 + 100 ) = uVar2;
         uVar1 = param_4[2];
         *(undefined4*)( lVar5 + 0x84 ) = param_6;
         *(undefined8*)( lVar5 + 0x6c ) = uVar1;
         *(undefined8*)( lVar5 + 0x74 ) = uVar3;
         *(undefined8*)( lVar5 + 0x7c ) = uVar4;
         return;
      }

      if (*(int*)( lVar5 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_canvas_sdf_collision", "drivers/gles3/storage/particles_storage.cpp", 0x1f8, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_get_dependency(RID) const */long GLES3::ParticlesStorage::particles_get_dependency(ParticlesStorage *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0x1c8;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_get_dependency", "drivers/gles3/storage/particles_storage.cpp", 0x4c1, "Parameter \"particles\" is null.", 0, 0);
   return 0;
}
/* GLES3::ParticlesStorage::particles_collision_get_extents(RID) const */undefined1  [16] __thiscallGLES3::ParticlesStorage::particles_collision_get_extents(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   undefined8 local_1c;
   undefined4 local_14;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      if (*(int*)( lVar1 + 0x70 ) == (int)( param_2 >> 0x20 )) {
         local_1c = *(undefined8*)( lVar1 + 0xc );
         local_14 = *(undefined4*)( lVar1 + 0x14 );
         goto LAB_00103ee2;
      }

      if (*(int*)( lVar1 + 0x70 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_get_extents", "drivers/gles3/storage/particles_storage.cpp", 0x585, "Parameter \"particles_collision\" is null.", 0, 0);
   local_14 = 0;
   local_1c = 0;
   LAB_00103ee2:auVar3._8_4_ = local_14;
   auVar3._0_8_ = local_1c;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar3._12_4_ = 0;
      return auVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::particles_collision_get_dependency(RID) const */long GLES3::ParticlesStorage::particles_collision_get_dependency(ParticlesStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      iVar2 = *(int*)( lVar1 + 0x70 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return lVar1 + 0x40;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_get_dependency", "drivers/gles3/storage/particles_storage.cpp", 0x59d, "Parameter \"pc\" is null.", 0, 0);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::_particles_update_instance_buffer(GLES3::ParticlesStorage::Particles*,
   Vector3 const&, Vector3 const&) */void GLES3::ParticlesStorage::_particles_update_instance_buffer(ParticlesStorage *this, Particles *param_1, Vector3 *param_2, Vector3 *param_3) {
   Version *pVVar1;
   uint uVar2;
   undefined1 auVar3[12];
   undefined1 auVar4[16];
   int iVar5;
   ulong uVar6;
   ulong uVar7;
   int iVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   code *pcVar12;
   undefined4 uVar13;
   undefined4 uVar14;
   long lVar15;
   char *pcVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   ulong uVar20;
   long *plVar21;
   int iVar22;
   undefined4 *puVar23;
   long in_FS_OFFSET;
   char *pcVar24;
   ulong local_100;
   undefined8 local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   undefined8 local_d0;
   undefined2 local_c8;
   undefined4 local_b8;
   undefined4 uStack_b4;
   ulong local_b0;
   undefined4 local_a8;
   undefined4 uStack_a4;
   undefined4 local_a0;
   undefined4 local_9c;
   undefined4 local_98;
   undefined8 local_94;
   undefined4 local_8c;
   undefined8 local_88;
   undefined4 local_80;
   undefined1 local_7c[16];
   undefined1 local_6c[16];
   undefined4 local_5c;
   undefined8 local_58;
   undefined8 uStack_50;
   long local_40;
   uVar6 = *(ulong*)( this + 0x150 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pVVar1 = (Version*)( this + 0x20 );
   uVar10 = ( ulong )(*(int*)param_1 == 1);
   local_100 = uVar10;
   if (*(int*)( this + 0x140 ) < 1) {
      _err_print_index_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbb, 0, (long)*(int*)( this + 0x140 ), "p_variant", "variant_count", "", false, false);
      LAB_00105105:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      if (( uVar6 != 0 ) && ( (uint)uVar6 < *(uint*)( this + 0x74 ) )) {
         uVar20 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
         if (*(int*)( uVar20 + 0x78 ) == (int)( uVar6 >> 0x20 )) {
            if (( *(int*)( uVar20 + 0x68 ) == 0 ) && ( ShaderGLES3::_initialize_version(pVVar1),*(int*)( uVar20 + 0x68 ) == 0 )) {
               LAB_0010514b:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, 0, 0, "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar12 = (code*)invalidInstructionException();
               ( *pcVar12 )();
            }

            uVar19 = local_100;
            plVar21 = *(long**)( uVar20 + 0x70 );
            uVar2 = *(uint*)( plVar21 + 3 );
            uVar7 = (ulong)uVar2;
            lVar9 = plVar21[2];
            uVar6 = local_100 * 0x3ffff - 1;
            uVar6 = ( uVar6 ^ uVar6 >> 0x1f ) * 0x15;
            uVar6 = ( uVar6 ^ uVar6 >> 0xb ) * 0x41;
            uVar6 = uVar6 >> 0x16 ^ uVar6;
            uVar11 = uVar6 & 0xffffffff;
            if ((int)uVar6 == 0) {
               uVar11 = 1;
            }

            uVar6 = uVar11 % uVar7;
            uVar17 = *(uint*)( lVar9 + uVar6 * 4 );
            if (uVar17 != 0) {
               uVar18 = 0;
               while (( uVar17 != (uint)uVar11 || ( local_100 != *(ulong*)( plVar21[1] + uVar6 * 8 ) ) )) {
                  uVar18 = uVar18 + 1;
                  uVar6 = ( ulong )((int)uVar6 + 1) % uVar7;
                  uVar17 = *(uint*)( lVar9 + uVar6 * 4 );
                  if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00105710;
               }
;
               puVar23 = (undefined4*)( *plVar21 + uVar6 * 0x38 );
               if (puVar23 != (undefined4*)0x0) {
                  if (*(char*)( puVar23 + 0xc ) == '\0') goto LAB_001042dc;
                  uVar6 = *(long*)( this + 0x130 ) * 0x3ffff - 1;
                  uVar6 = ( uVar6 ^ uVar6 >> 0x1f ) * 0x15;
                  uVar6 = ( uVar6 ^ uVar6 >> 0xb ) * 0x41;
                  uVar6 = uVar6 >> 0x16 ^ uVar6;
                  uVar20 = uVar6 & 0xffffffff;
                  if ((int)uVar6 == 0) {
                     uVar20 = 1;
                  }

                  uVar18 = 0;
                  uVar6 = uVar20 % uVar7;
                  uVar17 = *(uint*)( lVar9 + uVar6 * 4 );
                  if (uVar17 == 0) goto LAB_001050f8;
                  goto LAB_001042b9;
               }

            }

            LAB_00105710:local_c8 = 0;
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_d8 = 0;
            local_d0 = 0;
            ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)&local_f8, (Version*)0x0, uVar20);
            if (( *(int*)( uVar20 + 0x68 ) == 0 ) || ( OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>**)( uVar20 + 0x70 ), &local_100, (Specialization*)&local_f8),*(int*)( uVar20 + 0x68 ) == 0 )) goto LAB_0010514b;
            plVar21 = *(long**)( uVar20 + 0x70 );
            uVar2 = *(uint*)( plVar21 + 3 );
            uVar6 = uVar11 % (ulong)uVar2;
            uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
            if (uVar17 == 0) {
               LAB_001050da:if (this[0xc0] == (ParticlesStorage)0x0) {
                  ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_f8);
               }
 else {
                  ShaderGLES3::_save_to_cache(pVVar1);
                  ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_f8);
               }

            }
 else {
               uVar18 = 0;
               LAB_00105809:if (( uVar17 != (uint)uVar11 ) || ( uVar19 != *(ulong*)( plVar21[1] + uVar6 * 8 ) )) goto LAB_001057d0;
               puVar23 = (undefined4*)( *plVar21 + uVar6 * 0x38 );
               if (this[0xc0] != (ParticlesStorage)0x0) {
                  ShaderGLES3::_save_to_cache(pVVar1);
               }

               ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_f8);
               LAB_001042d3:if (puVar23 == (undefined4*)0x0) goto LAB_001050f8;
               LAB_001042dc:if (*(char*)( (long)puVar23 + 0x31 ) != '\0') {
                  ( *_glad_glUseProgram )(*puVar23);
                  *(undefined4**)( this + 0x148 ) = puVar23;
                  if (param_1[0x58] == (Particles)0x0) {
                     Transform3D::affine_inverse();
                     iVar22 = *(int*)( this + 0xf0 );
                     uVar6 = *(ulong*)( this + 0x150 );
                     if (iVar22 < 5) goto LAB_00105a1a;
                     if (( uVar6 == 0 ) || ( *(uint*)( this + 0x74 ) <= (uint)uVar6 )) goto LAB_00105930;
                     lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                     iVar22 = *(int*)( lVar9 + 0x78 );
                     if (iVar22 != (int)( uVar6 >> 0x20 )) goto joined_r0x001066eb;
                     iVar8 = *(int*)( lVar9 + 0x68 );
                     if (iVar8 < 1) goto LAB_00105d32;
                     plVar21 = *(long**)( lVar9 + 0x70 );
                     uVar2 = *(uint*)( plVar21 + 3 );
                     uVar20 = uVar10 * 0x3ffff - 1;
                     uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
                     uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
                     uVar20 = uVar20 >> 0x16 ^ uVar20;
                     uVar19 = uVar20 & 0xffffffff;
                     if ((int)uVar20 == 0) {
                        uVar19 = 1;
                     }

                     uVar20 = uVar19 % (ulong)uVar2;
                     uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                     if (uVar17 != 0) {
                        uVar18 = 0;
                        while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar20 * 8 ) != uVar10 ) )) {
                           uVar18 = uVar18 + 1;
                           uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar2;
                           uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                           if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar20 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00105ed8;
                        }
;
                        lVar9 = *plVar21 + uVar20 * 0x38;
                        if (lVar9 != 0) {
                           iVar8 = *(int*)( lVar9 + 0x10 );
                           if (iVar8 < 5) goto LAB_00105fb9;
                           lVar15 = (long)*(int*)( this + 0xf0 );
                           if (*(int*)( *(long*)( lVar9 + 0x18 ) + 0x10 ) < 0) goto LAB_001045eb;
                           local_5c = 0;
                           local_58 = local_94;
                           auVar3._4_8_ = local_b0 >> 0x20;
                           auVar3._0_4_ = local_b8;
                           local_88 = auVar3._0_8_;
                           local_80 = local_a0;
                           local_7c._4_4_ = local_a8;
                           local_7c._0_4_ = uStack_b4;
                           local_7c._8_4_ = local_9c;
                           local_7c._12_4_ = 0;
                           local_7c = local_7c << 0x20;
                           auVar4._4_4_ = uStack_a4;
                           auVar4._0_4_ = (int)local_b0;
                           auVar4._8_4_ = local_98;
                           auVar4._12_4_ = 0;
                           local_6c = auVar4 << 0x20;
                           uStack_50 = CONCAT44(0x3f800000, local_8c);
                           if (*(int*)( this + 0xf0 ) < 5) goto LAB_0010611d;
                           pcVar12 = _glad_glUniformMatrix4fv;
                           if (*(uint*)( this + 0x74 ) <= (uint)uVar6) goto LAB_001059eb;
                           lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                           iVar8 = *(int*)( lVar9 + 0x78 );
                           if (iVar22 != iVar8) goto LAB_001059aa;
                           iVar22 = *(int*)( lVar9 + 0x68 );
                           if (0 < iVar22) {
                              plVar21 = *(long**)( lVar9 + 0x70 );
                              uVar2 = *(uint*)( plVar21 + 3 );
                              uVar6 = uVar19 % (ulong)uVar2;
                              uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                              if (uVar17 != 0) {
                                 uVar18 = 0;
                                 do {
                                    if (( uVar17 == (uint)uVar19 ) && ( *(ulong*)( plVar21[1] + uVar6 * 8 ) == uVar10 )) goto LAB_001045a2;
                                    uVar18 = uVar18 + 1;
                                    uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
                                    uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                 }
 while ( ( uVar17 != 0 ) && ( uVar18 <= ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 ) );
                              }

                              goto LAB_001064b8;
                           }

                           LAB_00106473:pcVar12 = _glad_glUniformMatrix4fv;
                           local_5c = 0;
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)iVar22, "p_variant", "int(version->variants.size())", "", false, false);
                           LAB_00105a10:uVar13 = 0xffffffff;
                           goto LAB_001045d3;
                        }

                     }

                     LAB_00105ed8:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                     lVar15 = (long)*(int*)( this + 0xf0 );
                  }
 else {
                     iVar22 = *(int*)( this + 0xf0 );
                     uVar6 = *(ulong*)( this + 0x150 );
                     if (iVar22 < 5) {
                        LAB_00105a1a:lVar15 = (long)iVar22;
                        lVar9 = 4;
                        pcVar16 = "p_which";
                        iVar22 = 0xe4;
                        pcVar24 = "uniform_count";
                        LAB_00105a3f:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar22, lVar9, lVar15, pcVar16, pcVar24, "", false, false);
                        lVar15 = (long)*(int*)( this + 0xf0 );
                        goto LAB_001045eb;
                     }

                     if (( uVar6 != 0 ) && ( (uint)uVar6 < *(uint*)( this + 0x74 ) )) {
                        lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                        iVar22 = *(int*)( lVar9 + 0x78 );
                        if (iVar22 == (int)( uVar6 >> 0x20 )) {
                           iVar8 = *(int*)( lVar9 + 0x68 );
                           if (iVar8 < 1) {
                              LAB_00105d32:lVar15 = (long)iVar8;
                              lVar9 = 0;
                              iVar22 = 0xe7;
                              pcVar16 = "p_variant";
                              pcVar24 = "int(version->variants.size())";
                              goto LAB_00105a3f;
                           }

                           plVar21 = *(long**)( lVar9 + 0x70 );
                           uVar2 = *(uint*)( plVar21 + 3 );
                           uVar20 = uVar10 * 0x3ffff - 1;
                           uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
                           uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
                           uVar20 = uVar20 >> 0x16 ^ uVar20;
                           uVar19 = uVar20 & 0xffffffff;
                           if ((int)uVar20 == 0) {
                              uVar19 = 1;
                           }

                           uVar20 = uVar19 % (ulong)uVar2;
                           uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                           if (uVar17 != 0) {
                              uVar18 = 0;
                              do {
                                 if (( uVar17 == (uint)uVar19 ) && ( *(ulong*)( plVar21[1] + uVar20 * 8 ) == uVar10 )) {
                                    lVar9 = *plVar21 + uVar20 * 0x38;
                                    if (lVar9 != 0) {
                                       iVar8 = *(int*)( lVar9 + 0x10 );
                                       if (iVar8 < 5) {
                                          LAB_00105fb9:lVar15 = (long)iVar8;
                                          lVar9 = 4;
                                          pcVar16 = "p_which";
                                          iVar22 = 0xea;
                                          pcVar24 = "int(spec->uniform_location.size())";
                                          goto LAB_00105a3f;
                                       }

                                       lVar15 = (long)*(int*)( this + 0xf0 );
                                       if (*(int*)( *(long*)( lVar9 + 0x18 ) + 0x10 ) < 0) goto LAB_001045eb;
                                       local_5c = 0;
                                       local_88 = 0x3f800000;
                                       local_7c = ZEXT416(_LC117) << 0x40;
                                       local_6c._0_12_ = SUB1612((undefined1[16])0x0, 0);
                                       local_6c._12_4_ = _LC117;
                                       uStack_50 = CONCAT44(_LC117, _UNK_00116328);
                                       local_80 = 0;
                                       local_58 = __LC118;
                                       if (*(int*)( this + 0xf0 ) < 5) {
                                          LAB_0010611d:pcVar12 = _glad_glUniformMatrix4fv;
                                          local_5c = 0;
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, lVar15, "p_which", "uniform_count", "", false, false);
                                          goto LAB_00105a10;
                                       }

                                       pcVar12 = _glad_glUniformMatrix4fv;
                                       if (*(uint*)( this + 0x74 ) <= (uint)uVar6) {
                                          LAB_001059eb:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                          goto LAB_00105a10;
                                       }

                                       lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                                       iVar8 = *(int*)( lVar9 + 0x78 );
                                       if (iVar22 != iVar8) {
                                          LAB_001059aa:pcVar12 = _glad_glUniformMatrix4fv;
                                          local_5c = 0;
                                          if (iVar8 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                          goto LAB_001059eb;
                                       }

                                       iVar22 = *(int*)( lVar9 + 0x68 );
                                       if (iVar22 < 1) goto LAB_00106473;
                                       plVar21 = *(long**)( lVar9 + 0x70 );
                                       uVar2 = *(uint*)( plVar21 + 3 );
                                       uVar6 = uVar19 % (ulong)uVar2;
                                       uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                       if (uVar17 == 0) {
                                          LAB_001064b8:pcVar12 = _glad_glUniformMatrix4fv;
                                          local_5c = 0;
                                          _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                          goto LAB_00105a10;
                                       }

                                       uVar18 = 0;
                                       while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar6 * 8 ) != uVar10 ) )) {
                                          uVar18 = uVar18 + 1;
                                          uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
                                          uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                          if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_001064b8;
                                       }
;
                                       LAB_001045a2:pcVar12 = _glad_glUniformMatrix4fv;
                                       local_5c = 0;
                                       lVar9 = *plVar21 + uVar6 * 0x38;
                                       if (lVar9 == 0) goto LAB_001064b8;
                                       if (*(int*)( lVar9 + 0x10 ) < 5) {
                                          _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                          goto LAB_00105a10;
                                       }

                                       uVar13 = *(undefined4*)( *(long*)( lVar9 + 0x18 ) + 0x10 );
                                       LAB_001045d3:( *pcVar12 )(uVar13, 1, 0, &local_88);
                                       lVar15 = (long)*(int*)( this + 0xf0 );
                                       goto LAB_001045eb;
                                    }

                                    break;
                                 }

                                 uVar18 = uVar18 + 1;
                                 uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar2;
                                 uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                              }
 while ( ( uVar17 != 0 ) && ( uVar18 <= ( ( uVar2 + (int)uVar20 ) - uVar17 % uVar2 ) % uVar2 ) );
                           }

                           goto LAB_00105ed8;
                        }

                        joined_r0x001066eb:if (iVar22 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                     }

                     LAB_00105930:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     lVar15 = (long)*(int*)( this + 0xf0 );
                  }

                  LAB_001045eb:pcVar12 = _glad_glUniform1f;
                  uVar6 = *(ulong*)( this + 0x150 );
                  if ((int)lVar15 < 2) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, lVar15, "p_which", "uniform_count", "", false, false);
                     goto LAB_00104875;
                  }

                  if (uVar6 == 0) {
                     LAB_00105bb0:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                  }
 else {
                     if (*(uint*)( this + 0x74 ) <= (uint)uVar6) goto LAB_00105bb0;
                     lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                     iVar22 = *(int*)( lVar9 + 0x78 );
                     if (iVar22 != (int)( uVar6 >> 0x20 )) {
                        if (iVar22 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_00105bb0;
                     }

                     if (*(int*)( lVar9 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar9 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_00104875;
                     }

                     plVar21 = *(long**)( lVar9 + 0x70 );
                     uVar2 = *(uint*)( plVar21 + 3 );
                     uVar20 = uVar10 * 0x3ffff - 1;
                     uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
                     uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
                     uVar20 = uVar20 >> 0x16 ^ uVar20;
                     uVar19 = uVar20 & 0xffffffff;
                     if ((int)uVar20 == 0) {
                        uVar19 = 1;
                     }

                     uVar20 = uVar19 % (ulong)uVar2;
                     uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                     if (uVar17 == 0) {
                        LAB_00105f10:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                     }
 else {
                        uVar18 = 0;
                        while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar20 * 8 ) != uVar10 ) )) {
                           uVar18 = uVar18 + 1;
                           uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar2;
                           uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                           if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar20 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00105f10;
                        }
;
                        lVar9 = *plVar21 + uVar20 * 0x38;
                        if (lVar9 == 0) goto LAB_00105f10;
                        if (*(int*)( lVar9 + 0x10 ) < 2) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < *(int*)( *(long*)( lVar9 + 0x18 ) + 4 )) {
                           lVar9 = (long)*(int*)( this + 0xf0 );
                           if (*(int*)( this + 0xf0 ) < 2) {
                              lVar15 = 1;
                              iVar22 = 0xe4;
                              pcVar16 = "p_which";
                              pcVar24 = "uniform_count";
                              LAB_00106189:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar22, lVar15, lVar9, pcVar16, pcVar24, "", false, false);
                              LAB_001061a6:uVar13 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( this + 0x74 ) <= (uint)uVar6) {
                                 LAB_001062d1:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                 goto LAB_001061a6;
                              }

                              lVar15 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                              if (iVar22 != *(int*)( lVar15 + 0x78 )) {
                                 if (*(int*)( lVar15 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_001062d1;
                              }

                              lVar9 = (long)*(int*)( lVar15 + 0x68 );
                              if (*(int*)( lVar15 + 0x68 ) < 1) {
                                 lVar15 = 0;
                                 iVar22 = 0xe7;
                                 pcVar16 = "p_variant";
                                 pcVar24 = "int(version->variants.size())";
                                 goto LAB_00106189;
                              }

                              plVar21 = *(long**)( lVar15 + 0x70 );
                              uVar2 = *(uint*)( plVar21 + 3 );
                              uVar6 = uVar19 % (ulong)uVar2;
                              uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                              if (uVar17 == 0) {
                                 LAB_00106578:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 goto LAB_001061a6;
                              }

                              uVar18 = 0;
                              while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar6 * 8 ) != uVar10 ) )) {
                                 uVar18 = uVar18 + 1;
                                 uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
                                 uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                 if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00106578;
                              }
;
                              lVar15 = *plVar21 + uVar6 * 0x38;
                              if (lVar15 == 0) goto LAB_00106578;
                              lVar9 = (long)*(int*)( lVar15 + 0x10 );
                              if (*(int*)( lVar15 + 0x10 ) < 2) {
                                 lVar15 = 1;
                                 iVar22 = 0xea;
                                 pcVar16 = "p_which";
                                 pcVar24 = "int(spec->uniform_location.size())";
                                 goto LAB_00106189;
                              }

                              uVar13 = *(undefined4*)( *(long*)( lVar15 + 0x18 ) + 4 );
                           }

                           ( *pcVar12 )(uVar13);
                        }

                     }

                  }

                  LAB_00104875:pcVar12 = _glad_glUniform1ui;
                  uVar6 = *(ulong*)( this + 0x150 );
                  uVar13 = *(undefined4*)( param_1 + 0x94 );
                  if (*(int*)( this + 0xf0 ) < 4) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, (long)*(int*)( this + 0xf0 ), "p_which", "uniform_count", "", false, false);
                     goto LAB_00104af8;
                  }

                  if (( uVar6 == 0 ) || ( *(uint*)( this + 0x74 ) <= (uint)uVar6 )) {
                     LAB_00105c20:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                  }
 else {
                     lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                     iVar22 = *(int*)( lVar9 + 0x78 );
                     if (iVar22 != (int)( uVar6 >> 0x20 )) {
                        if (iVar22 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_00105c20;
                     }

                     if (*(int*)( lVar9 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar9 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_00104af8;
                     }

                     plVar21 = *(long**)( lVar9 + 0x70 );
                     uVar2 = *(uint*)( plVar21 + 3 );
                     uVar20 = uVar10 * 0x3ffff - 1;
                     uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
                     uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
                     uVar20 = uVar20 >> 0x16 ^ uVar20;
                     uVar19 = uVar20 & 0xffffffff;
                     if ((int)uVar20 == 0) {
                        uVar19 = 1;
                     }

                     uVar20 = uVar19 % (ulong)uVar2;
                     uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                     if (uVar17 == 0) {
                        LAB_00105ea8:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                     }
 else {
                        uVar18 = 0;
                        while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar20 * 8 ) != uVar10 ) )) {
                           uVar18 = uVar18 + 1;
                           uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar2;
                           uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                           if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar20 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00105ea8;
                        }
;
                        lVar9 = *plVar21 + uVar20 * 0x38;
                        if (lVar9 == 0) goto LAB_00105ea8;
                        if (*(int*)( lVar9 + 0x10 ) < 4) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < *(int*)( *(long*)( lVar9 + 0x18 ) + 0xc )) {
                           if (*(int*)( this + 0xf0 ) < 4) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, (long)*(int*)( this + 0xf0 ), "p_which", "uniform_count", "", false, false);
                              LAB_0010608a:uVar14 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( this + 0x74 ) <= (uint)uVar6) {
                                 LAB_00106346:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                 goto LAB_0010608a;
                              }

                              lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                              if (iVar22 != *(int*)( lVar9 + 0x78 )) {
                                 if (*(int*)( lVar9 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_00106346;
                              }

                              if (*(int*)( lVar9 + 0x68 ) < 1) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar9 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_0010608a;
                              }

                              plVar21 = *(long**)( lVar9 + 0x70 );
                              uVar2 = *(uint*)( plVar21 + 3 );
                              uVar6 = uVar19 % (ulong)uVar2;
                              uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                              if (uVar17 == 0) {
                                 LAB_00106518:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 goto LAB_0010608a;
                              }

                              uVar18 = 0;
                              while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar6 * 8 ) != uVar10 ) )) {
                                 uVar18 = uVar18 + 1;
                                 uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
                                 uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                 if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00106518;
                              }
;
                              lVar9 = *plVar21 + uVar6 * 0x38;
                              if (lVar9 == 0) goto LAB_00106518;
                              if (*(int*)( lVar9 + 0x10 ) < 4) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                 goto LAB_0010608a;
                              }

                              uVar14 = *(undefined4*)( *(long*)( lVar9 + 0x18 ) + 0xc );
                           }

                           ( *pcVar12 )(uVar14, uVar13);
                        }

                     }

                  }

                  LAB_00104af8:pcVar12 = _glad_glUniform3fv;
                  lVar9 = (long)*(int*)( this + 0xf0 );
                  uVar6 = *(ulong*)( this + 0x150 );
                  if (*(int*)( this + 0xf0 ) < 3) {
                     lVar15 = 2;
                     pcVar16 = "p_which";
                     iVar22 = 0xe4;
                     pcVar24 = "uniform_count";
                     LAB_00105b06:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar22, lVar15, lVar9, pcVar16, pcVar24, "", false, false);
                     lVar9 = (long)*(int*)( this + 0xf0 );
                  }
 else {
                     if (( uVar6 != 0 ) && ( (uint)uVar6 < *(uint*)( this + 0x74 ) )) {
                        lVar15 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                        iVar22 = *(int*)( lVar15 + 0x78 );
                        if (iVar22 == (int)( uVar6 >> 0x20 )) {
                           lVar9 = (long)*(int*)( lVar15 + 0x68 );
                           if (*(int*)( lVar15 + 0x68 ) < 1) {
                              lVar15 = 0;
                              iVar22 = 0xe7;
                              pcVar16 = "p_variant";
                              pcVar24 = "int(version->variants.size())";
                              goto LAB_00105b06;
                           }

                           plVar21 = *(long**)( lVar15 + 0x70 );
                           uVar2 = *(uint*)( plVar21 + 3 );
                           uVar20 = uVar10 * 0x3ffff - 1;
                           uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
                           uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
                           uVar20 = uVar20 >> 0x16 ^ uVar20;
                           uVar19 = uVar20 & 0xffffffff;
                           if ((int)uVar20 == 0) {
                              uVar19 = 1;
                           }

                           uVar20 = uVar19 % (ulong)uVar2;
                           uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                           if (uVar17 != 0) {
                              uVar18 = 0;
                              while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar20 * 8 ) != uVar10 ) )) {
                                 uVar18 = uVar18 + 1;
                                 uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar2;
                                 uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                                 if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar20 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00105e70;
                              }
;
                              lVar15 = *plVar21 + uVar20 * 0x38;
                              if (lVar15 != 0) {
                                 lVar9 = (long)*(int*)( lVar15 + 0x10 );
                                 if (*(int*)( lVar15 + 0x10 ) < 3) {
                                    lVar15 = 2;
                                    pcVar16 = "p_which";
                                    iVar22 = 0xea;
                                    pcVar24 = "int(spec->uniform_location.size())";
                                    goto LAB_00105b06;
                                 }

                                 lVar9 = (long)*(int*)( this + 0xf0 );
                                 if (*(int*)( *(long*)( lVar15 + 0x18 ) + 8 ) < 0) goto LAB_00104da1;
                                 local_88 = *(undefined8*)param_3;
                                 local_80 = *(undefined4*)( param_3 + 8 );
                                 if (*(int*)( this + 0xf0 ) < 3) {
                                    _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, lVar9, "p_which", "uniform_count", "", false, false);
                                    LAB_001060d0:uVar13 = 0xffffffff;
                                 }
 else {
                                    if (*(uint*)( this + 0x74 ) <= (uint)uVar6) {
                                       LAB_001061f1:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                       goto LAB_001060d0;
                                    }

                                    lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                                    if (iVar22 != *(int*)( lVar9 + 0x78 )) {
                                       if (*(int*)( lVar9 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                          _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                       }

                                       goto LAB_001061f1;
                                    }

                                    if (*(int*)( lVar9 + 0x68 ) < 1) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar9 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                       goto LAB_001060d0;
                                    }

                                    plVar21 = *(long**)( lVar9 + 0x70 );
                                    uVar2 = *(uint*)( plVar21 + 3 );
                                    uVar6 = uVar19 % (ulong)uVar2;
                                    uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                    if (uVar17 == 0) {
                                       LAB_001064e8:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                       goto LAB_001060d0;
                                    }

                                    uVar18 = 0;
                                    while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar6 * 8 ) != uVar10 ) )) {
                                       uVar18 = uVar18 + 1;
                                       uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
                                       uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                       if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_001064e8;
                                    }
;
                                    lVar9 = *plVar21 + uVar6 * 0x38;
                                    if (lVar9 == 0) goto LAB_001064e8;
                                    if (*(int*)( lVar9 + 0x10 ) < 3) {
                                       _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                       goto LAB_001060d0;
                                    }

                                    uVar13 = *(undefined4*)( *(long*)( lVar9 + 0x18 ) + 8 );
                                 }

                                 ( *pcVar12 )(uVar13, 1, &local_88);
                                 lVar9 = (long)*(int*)( this + 0xf0 );
                                 goto LAB_00104da1;
                              }

                           }

                           LAB_00105e70:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                           lVar9 = (long)*(int*)( this + 0xf0 );
                           goto LAB_00104da1;
                        }

                        if (iVar22 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                     }

                     _err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                     lVar9 = (long)*(int*)( this + 0xf0 );
                  }

                  LAB_00104da1:pcVar12 = _glad_glUniform3fv;
                  uVar6 = *(ulong*)( this + 0x150 );
                  if ((int)lVar9 < 1) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, lVar9, "p_which", "uniform_count", "", false, false);
                     goto LAB_0010502f;
                  }

                  if (( uVar6 == 0 ) || ( *(uint*)( this + 0x74 ) <= (uint)uVar6 )) {
                     LAB_00105d08:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                  }
 else {
                     lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                     iVar22 = *(int*)( lVar9 + 0x78 );
                     if (iVar22 != (int)( uVar6 >> 0x20 )) {
                        if (iVar22 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_00105d08;
                     }

                     if (*(int*)( lVar9 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar9 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_0010502f;
                     }

                     plVar21 = *(long**)( lVar9 + 0x70 );
                     uVar2 = *(uint*)( plVar21 + 3 );
                     uVar20 = uVar10 * 0x3ffff - 1;
                     uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
                     uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
                     uVar20 = uVar20 >> 0x16 ^ uVar20;
                     uVar19 = uVar20 & 0xffffffff;
                     if ((int)uVar20 == 0) {
                        uVar19 = 1;
                     }

                     uVar20 = uVar19 % (ulong)uVar2;
                     uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                     if (uVar17 == 0) {
                        LAB_00105e40:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                     }
 else {
                        uVar18 = 0;
                        while (( (uint)uVar19 != uVar17 || ( *(ulong*)( plVar21[1] + uVar20 * 8 ) != uVar10 ) )) {
                           uVar18 = uVar18 + 1;
                           uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar2;
                           uVar17 = *(uint*)( plVar21[2] + uVar20 * 4 );
                           if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar20 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00105e40;
                        }
;
                        lVar9 = *plVar21 + uVar20 * 0x38;
                        if (lVar9 == 0) goto LAB_00105e40;
                        if (*(int*)( lVar9 + 0x10 ) < 1) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < **(int**)( lVar9 + 0x18 )) {
                           local_88 = *(undefined8*)param_2;
                           local_80 = *(undefined4*)( param_2 + 8 );
                           if (*(int*)( this + 0xf0 ) < 1) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 0, (long)*(int*)( this + 0xf0 ), "p_which", "uniform_count", "", false, false);
                              LAB_00106113:uVar13 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( this + 0x74 ) <= (uint)uVar6) {
                                 LAB_0010625a:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                 goto LAB_00106113;
                              }

                              lVar9 = ( ( uVar6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x70 ) ) * 0x80 + *(long*)( *(long*)( this + 0x60 ) + ( ( uVar6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x70 ) ) * 8 );
                              if (iVar22 != *(int*)( lVar9 + 0x78 )) {
                                 if (*(int*)( lVar9 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_0010625a;
                              }

                              if (*(int*)( lVar9 + 0x68 ) < 1) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar9 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_00106113;
                              }

                              plVar21 = *(long**)( lVar9 + 0x70 );
                              uVar2 = *(uint*)( plVar21 + 3 );
                              uVar6 = uVar19 % (ulong)uVar2;
                              uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                              if (uVar17 == 0) {
                                 LAB_00106548:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                 goto LAB_00106113;
                              }

                              uVar18 = 0;
                              while (( uVar17 != (uint)uVar19 || ( *(ulong*)( plVar21[1] + uVar6 * 8 ) != uVar10 ) )) {
                                 uVar18 = uVar18 + 1;
                                 uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
                                 uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
                                 if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_00106548;
                              }
;
                              lVar9 = *plVar21 + uVar6 * 0x38;
                              if (lVar9 == 0) goto LAB_00106548;
                              if (*(int*)( lVar9 + 0x10 ) < 1) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 0, (long)*(int*)( lVar9 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                 goto LAB_00106113;
                              }

                              uVar13 = **(undefined4**)( lVar9 + 0x18 );
                           }

                           ( *pcVar12 )(uVar13, 1, &local_88);
                        }

                     }

                  }

                  LAB_0010502f:( *_glad_glBindVertexArray )(*(undefined4*)( param_1 + 0xc0 ));
                  ( *_glad_glBindBufferRange )(0x8c8e, 0, *(undefined4*)( param_1 + 0xbc ), 0, *(undefined4*)( param_1 + 0xcc ));
                  ( *_glad_glBeginTransformFeedback )(0);
                  if (*(int*)( param_1 + 0x98 ) == 1) {
                     iVar22 = *(int*)( param_1 + 0x18 );
                     iVar8 = *(int*)( param_1 + 0xd8 );
                     iVar5 = (int)( (double)iVar22 * *(double*)( param_1 + 0x120 ) );
                     if (iVar22 + -1 < (int)( (double)iVar22 * *(double*)( param_1 + 0x120 ) )) {
                        iVar5 = iVar22 + -1;
                     }

                     uVar6 = (long)( iVar5 + 1 ) % (long)iVar22;
                     ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 0xc4 ));
                     iVar22 = (int)uVar6;
                     if (iVar22 != *(int*)( param_1 + 0x18 )) {
                        ( *_glad_glEnableVertexAttribArray )(0);
                        uVar10 = ( ulong )(uint)(iVar22 * iVar8);
                        ( *_glad_glVertexAttribPointer )(0, 4, 0x1406, 0, iVar8, uVar10);
                        for (int i = 0; i < 4; i++) {
                           ( *_glad_glEnableVertexAttribArray )(( i + 1 ));
                           ( *_glad_glVertexAttribPointer )(( i + 1 ), 4, 5126, 0, iVar8, uVar10 + ( 16*i + 16 ));
                        }

                        if (*(int*)param_1 == 1) {
                           ( *_glad_glEnableVertexAttribArray )(5);
                           ( *_glad_glVertexAttribPointer )(5, 4, 0x1406, 0, iVar8, uVar10 + 0x50);
                        }

                        ( *_glad_glDrawArrays )(0, 0, *(int*)( param_1 + 0x18 ) - iVar22);
                     }

                     if (iVar22 != 0) {
                        ( *_glad_glEndTransformFeedback )();
                        uVar10 = 0;
                        ( *_glad_glBindBufferRange )(0x8c8e, 0, *(undefined4*)( param_1 + 0xbc ), ( *(int*)( param_1 + 0x18 ) - iVar22 ) * *(int*)( param_1 + 0xd0 ), *(int*)( param_1 + 0xd0 ) * iVar22);
                        ( *_glad_glBeginTransformFeedback )(0);
                        if (*(int*)( param_1 + 0xd4 ) != 0) {
                           do {
                              ( *_glad_glEnableVertexAttribArray )(uVar10 & 0xffffffff);
                              ( *_glad_glVertexAttribPointer )(uVar10 & 0xffffffff, 4, 0x1406, 0, iVar8, uVar10 << 4);
                              uVar10 = uVar10 + 1;
                           }
 while ( (uint)uVar10 < *(uint*)( param_1 + 0xd4 ) );
                        }

                        ( *_glad_glDrawArrays )(0, 0, uVar6 & 0xffffffff);
                     }

                  }
 else {
                     ( *_glad_glDrawArrays )(0, 0, *(undefined4*)( param_1 + 0x18 ));
                  }

                  ( *_glad_glEndTransformFeedback )();
                  ( *_glad_glBindBufferRange )(0x8c8e, 0, 0, 0, 0);
                  ( *_glad_glBindVertexArray )(0);
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Could not recover jumptable at 0x001050d4. Too many branches */
                     /* WARNING: Treating indirect jump as call */
                     ( *_glad_glBindBuffer )(0x8892, 0);
                     return;
                  }

                  goto LAB_001066f6;
               }

            }

            LAB_001050f8:if (ShaderGLES3::_version_bind_shader(RID, ,int, unsigned_long) != '\0') {
               _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xda, "shader failed to compile, unable to bind shader.", 0, 1);
               ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print =
               '\0';
            }

            goto LAB_00105105;
         }

         if (*(int*)( uVar20 + 0x78 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbe, "Parameter \"version\" is null.", 0, 0);
         return;
      }

   }

   LAB_001066f6:/* WARNING: Subroutine does not return */__stack_chk_fail();
   while (true) {
      uVar18 = uVar18 + 1;
      uVar6 = ( ulong )((int)uVar6 + 1) % uVar7;
      uVar17 = *(uint*)( lVar9 + uVar6 * 4 );
      if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) break;
      LAB_001042b9:if (( uVar17 == (uint)uVar20 ) && ( *(long*)( this + 0x130 ) == *(long*)( plVar21[1] + uVar6 * 8 ) )) {
         puVar23 = (undefined4*)( *plVar21 + uVar6 * 0x38 );
         goto LAB_001042d3;
      }

   }
;
   goto LAB_001050f8;
   LAB_001057d0:uVar18 = uVar18 + 1;
   uVar6 = ( ulong )((int)uVar6 + 1) % (ulong)uVar2;
   uVar17 = *(uint*)( plVar21[2] + uVar6 * 4 );
   if (( uVar17 == 0 ) || ( ( ( uVar2 + (int)uVar6 ) - uVar17 % uVar2 ) % uVar2 < uVar18 )) goto LAB_001050da;
   goto LAB_00105809;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::_particles_allocate_history_buffers(GLES3::ParticlesStorage::Particles*)
   [clone .part.0] */void GLES3::ParticlesStorage::_particles_allocate_history_buffers(Particles *param_1) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   uint *puVar4;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ( *_glad_glGenBuffers )(1, param_1 + 0xdc);
   ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 0xdc ));
   lVar3 = Utilities::singleton;
   local_58 = "Particles last frame buffer";
   local_60 = 0;
   local_50 = 0x1b;
   String::parse_latin1((StrRange*)&local_60);
   uVar2 = *(uint*)( param_1 + 0xcc );
   local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0xdc ));
   ( *_glad_glBufferData )(0x8892, (ulong)uVar2, 0, 0x88e9);
   plVar1 = (long*)( lVar3 + 0xf8 );
   *plVar1 = *plVar1 + (ulong)uVar2;
   puVar4 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_58);
   lVar3 = local_60;
   *puVar4 = uVar2;
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

   ( *_glad_glGenBuffers )(1, param_1 + 0xe8);
   ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 0xe8 ));
   lVar3 = Utilities::singleton;
   local_58 = "Particles sort buffer";
   local_60 = 0;
   local_50 = 0x15;
   String::parse_latin1((StrRange*)&local_60);
   uVar2 = *(uint*)( param_1 + 0xcc );
   local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0xe8 ));
   ( *_glad_glBufferData )(0x8892, (ulong)uVar2, 0, 0x88e9);
   plVar1 = (long*)( lVar3 + 0xf8 );
   *plVar1 = *plVar1 + (ulong)uVar2;
   puVar4 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_58);
   lVar3 = local_60;
   *puVar4 = uVar2;
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

   param_1[0xec] = (Particles)0x0;
   param_1[0xe0] = (Particles)0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001068a4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_glad_glBindBuffer )(0x8892, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::_particles_allocate_history_buffers(GLES3::ParticlesStorage::Particles*)
    */void GLES3::ParticlesStorage::_particles_allocate_history_buffers(ParticlesStorage *this, Particles *param_1) {
   if (*(int*)( param_1 + 0xe8 ) == 0) {
      _particles_allocate_history_buffers(param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::_particles_free_data(GLES3::ParticlesStorage::Particles*) */void GLES3::ParticlesStorage::_particles_free_data(ParticlesStorage *this, Particles *param_1) {
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
   long lVar59;
   uint uVar60;
   uint *puVar61;
   int iVar62;
   long lVar63;
   ulong uVar64;
   uint uVar65;
   ulong uVar66;
   uint uVar67;
   uint uVar68;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 0xcc ) = (undefined1[16])0x0;
   *(undefined4*)( param_1 + 0xf4 ) = 0;
   if (*(int*)( param_1 + 0xb8 ) != 0) {
      ( *_glad_glDeleteVertexArrays )(1, param_1 + 0xb4);
      lVar59 = Utilities::singleton;
      local_44 = *(uint*)( param_1 + 0xb8 );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar60 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar60 = ( uVar60 ^ uVar60 >> 0xd ) * -0x3d4d51cb;
         uVar65 = uVar60 ^ uVar60 >> 0x10;
         if (uVar60 == uVar60 >> 0x10) {
            uVar65 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar65 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar66;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar64;
         lVar63 = SUB168(auVar3 * auVar31, 8);
         uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar3 * auVar31, 8);
         if (uVar60 != 0) {
            uVar68 = 0;
            do {
               if (( uVar65 == uVar60 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_00106ae4;
               }

               uVar68 = uVar68 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar66;
               lVar63 = SUB168(auVar4 * auVar32, 8);
               uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar4 * auVar32, 8);
            }
 while ( ( uVar60 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar60 * uVar2,auVar33._8_8_ = 0,auVar33._0_8_ = uVar66,auVar6._8_8_ = 0,auVar6._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar5 * auVar33, 8) ) * uVar2,auVar34._8_8_ = 0,auVar34._0_8_ = uVar66,uVar68 <= SUB164(auVar6 * auVar34, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_00106ae4:lVar59 = Utilities::singleton;
      local_44 = *(uint*)( param_1 + 0xbc );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar60 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar60 = ( uVar60 ^ uVar60 >> 0xd ) * -0x3d4d51cb;
         uVar65 = uVar60 ^ uVar60 >> 0x10;
         if (uVar60 == uVar60 >> 0x10) {
            uVar65 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar65 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar66;
         auVar35._8_8_ = 0;
         auVar35._0_8_ = uVar64;
         lVar63 = SUB168(auVar7 * auVar35, 8);
         uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar7 * auVar35, 8);
         if (uVar60 != 0) {
            uVar68 = 0;
            do {
               if (( uVar65 == uVar60 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_00106c34;
               }

               uVar68 = uVar68 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar36._8_8_ = 0;
               auVar36._0_8_ = uVar66;
               lVar63 = SUB168(auVar8 * auVar36, 8);
               uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar8 * auVar36, 8);
            }
 while ( ( uVar60 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar60 * uVar2,auVar37._8_8_ = 0,auVar37._0_8_ = uVar66,auVar10._8_8_ = 0,auVar10._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar9 * auVar37, 8) ) * uVar2,auVar38._8_8_ = 0,auVar38._0_8_ = uVar66,uVar68 <= SUB164(auVar10 * auVar38, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_00106c34:*(undefined8*)( param_1 + 0xb4 ) = 0;
      *(undefined4*)( param_1 + 0xbc ) = 0;
      ( *_glad_glDeleteVertexArrays )(1, param_1 + 0xc0);
      lVar59 = Utilities::singleton;
      local_44 = *(uint*)( param_1 + 0xc4 );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar60 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar60 = ( uVar60 ^ uVar60 >> 0xd ) * -0x3d4d51cb;
         uVar65 = uVar60 ^ uVar60 >> 0x10;
         if (uVar60 == uVar60 >> 0x10) {
            uVar65 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar65 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uVar66;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar64;
         lVar63 = SUB168(auVar11 * auVar39, 8);
         uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar11 * auVar39, 8);
         if (uVar60 != 0) {
            uVar68 = 0;
            do {
               if (( uVar65 == uVar60 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_00106db4;
               }

               uVar68 = uVar68 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar40._8_8_ = 0;
               auVar40._0_8_ = uVar66;
               lVar63 = SUB168(auVar12 * auVar40, 8);
               uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar12 * auVar40, 8);
            }
 while ( ( uVar60 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar60 * uVar2,auVar41._8_8_ = 0,auVar41._0_8_ = uVar66,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar13 * auVar41, 8) ) * uVar2,auVar42._8_8_ = 0,auVar42._0_8_ = uVar66,uVar68 <= SUB164(auVar14 * auVar42, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_00106db4:lVar59 = Utilities::singleton;
      local_44 = *(uint*)( param_1 + 200 );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar60 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar60 = ( uVar60 ^ uVar60 >> 0xd ) * -0x3d4d51cb;
         uVar65 = uVar60 ^ uVar60 >> 0x10;
         if (uVar60 == uVar60 >> 0x10) {
            uVar65 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar65 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar66;
         auVar43._8_8_ = 0;
         auVar43._0_8_ = uVar64;
         lVar63 = SUB168(auVar15 * auVar43, 8);
         uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar15 * auVar43, 8);
         if (uVar60 != 0) {
            uVar68 = 0;
            do {
               if (( uVar65 == uVar60 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_00106f04;
               }

               uVar68 = uVar68 + 1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar44._8_8_ = 0;
               auVar44._0_8_ = uVar66;
               lVar63 = SUB168(auVar16 * auVar44, 8);
               uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar16 * auVar44, 8);
            }
 while ( ( uVar60 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = uVar60 * uVar2,auVar45._8_8_ = 0,auVar45._0_8_ = uVar66,auVar18._8_8_ = 0,auVar18._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar17 * auVar45, 8) ) * uVar2,auVar46._8_8_ = 0,auVar46._0_8_ = uVar66,uVar68 <= SUB164(auVar18 * auVar46, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_00106f04:*(undefined8*)( param_1 + 0xc0 ) = 0;
      *(undefined4*)( param_1 + 200 ) = 0;
   }

   lVar59 = Utilities::singleton;
   if (*(int*)( param_1 + 0xe8 ) != 0) {
      local_44 = *(uint*)( param_1 + 0xdc );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar60 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar60 = ( uVar60 ^ uVar60 >> 0xd ) * -0x3d4d51cb;
         uVar65 = uVar60 ^ uVar60 >> 0x10;
         if (uVar60 == uVar60 >> 0x10) {
            uVar65 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar65 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar66;
         auVar51._8_8_ = 0;
         auVar51._0_8_ = uVar64;
         lVar63 = SUB168(auVar23 * auVar51, 8);
         uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar23 * auVar51, 8);
         if (uVar60 != 0) {
            uVar68 = 0;
            do {
               if (( uVar65 == uVar60 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_0010720c;
               }

               uVar68 = uVar68 + 1;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar52._8_8_ = 0;
               auVar52._0_8_ = uVar66;
               lVar63 = SUB168(auVar24 * auVar52, 8);
               uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar24 * auVar52, 8);
            }
 while ( ( uVar60 != 0 ) && ( auVar25._8_8_ = 0 ),auVar25._0_8_ = uVar60 * uVar2,auVar53._8_8_ = 0,auVar53._0_8_ = uVar66,auVar26._8_8_ = 0,auVar26._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar25 * auVar53, 8) ) * uVar2,auVar54._8_8_ = 0,auVar54._0_8_ = uVar66,uVar68 <= SUB164(auVar26 * auVar54, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_0010720c:lVar59 = Utilities::singleton;
      local_44 = *(uint*)( param_1 + 0xe8 );
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar60 = ( local_44 >> 0x10 ^ local_44 ) * -0x7a143595;
         uVar60 = ( uVar60 ^ uVar60 >> 0xd ) * -0x3d4d51cb;
         uVar65 = uVar60 ^ uVar60 >> 0x10;
         if (uVar60 == uVar60 >> 0x10) {
            uVar65 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar65 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar66;
         auVar55._8_8_ = 0;
         auVar55._0_8_ = uVar64;
         lVar63 = SUB168(auVar27 * auVar55, 8);
         uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar27 * auVar55, 8);
         if (uVar60 != 0) {
            uVar68 = 0;
            do {
               if (( uVar65 == uVar60 ) && ( local_44 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_00107364;
               }

               uVar68 = uVar68 + 1;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar56._8_8_ = 0;
               auVar56._0_8_ = uVar66;
               lVar63 = SUB168(auVar28 * auVar56, 8);
               uVar60 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar28 * auVar56, 8);
            }
 while ( ( uVar60 != 0 ) && ( auVar29._8_8_ = 0 ),auVar29._0_8_ = uVar60 * uVar2,auVar57._8_8_ = 0,auVar57._0_8_ = uVar66,auVar30._8_8_ = 0,auVar30._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar29 * auVar57, 8) ) * uVar2,auVar58._8_8_ = 0,auVar58._0_8_ = uVar66,uVar68 <= SUB164(auVar30 * auVar58, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_00107364:*(undefined4*)( param_1 + 0xdc ) = 0;
      *(undefined4*)( param_1 + 0xe8 ) = 0;
      param_1[0xec] = (Particles)0x0;
      param_1[0xe0] = (Particles)0x0;
   }

   lVar59 = Utilities::singleton;
   uVar60 = *(uint*)( param_1 + 0xb0 );
   if (uVar60 != 0) {
      pHVar1 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 0x68 );
      local_44 = uVar60;
      if (( *(long*)( Utilities::singleton + 0x70 ) != 0 ) && ( *(int*)( Utilities::singleton + 0x94 ) != 0 )) {
         uVar2 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 8 );
         uVar65 = ( uVar60 >> 0x10 ^ uVar60 ) * -0x7a143595;
         uVar65 = ( uVar65 ^ uVar65 >> 0xd ) * -0x3d4d51cb;
         uVar68 = uVar65 ^ uVar65 >> 0x10;
         if (uVar65 == uVar65 >> 0x10) {
            uVar68 = 1;
            uVar64 = uVar2;
         }
 else {
            uVar64 = uVar68 * uVar2;
         }

         uVar66 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ));
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar66;
         auVar47._8_8_ = 0;
         auVar47._0_8_ = uVar64;
         lVar63 = SUB168(auVar19 * auVar47, 8);
         uVar65 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
         iVar62 = SUB164(auVar19 * auVar47, 8);
         if (uVar65 != 0) {
            uVar67 = 0;
            do {
               if (( uVar68 == uVar65 ) && ( uVar60 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0x70 ) + lVar63 * 8 ) + 0x10 ) )) {
                  ( *_glad_glDeleteBuffers )(1, &local_44);
                  puVar61 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](pHVar1, &local_44);
                  *(long*)( lVar59 + 0xf8 ) = *(long*)( lVar59 + 0xf8 ) - ( ulong ) * puVar61;
                  HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(pHVar1, &local_44);
                  goto LAB_001070a3;
               }

               uVar67 = uVar67 + 1;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = ( iVar62 + 1 ) * uVar2;
               auVar48._8_8_ = 0;
               auVar48._0_8_ = uVar66;
               lVar63 = SUB168(auVar20 * auVar48, 8);
               uVar65 = *(uint*)( *(long*)( Utilities::singleton + 0x78 ) + lVar63 * 4 );
               iVar62 = SUB164(auVar20 * auVar48, 8);
            }
 while ( ( uVar65 != 0 ) && ( auVar21._8_8_ = 0 ),auVar21._0_8_ = uVar65 * uVar2,auVar49._8_8_ = 0,auVar49._0_8_ = uVar66,auVar22._8_8_ = 0,auVar22._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0x90 ) * 4 ) + iVar62 ) - SUB164(auVar21 * auVar49, 8) ) * uVar2,auVar50._8_8_ = 0,auVar50._0_8_ = uVar66,uVar67 <= SUB164(auVar22 * auVar50, 8) );
         }

      }

      _err_print_error("buffer_free_data", "drivers/gles3/storage/utilities.h", 0x66, "Condition \"!buffer_allocs_cache.has(p_id)\" is true.", 0, 0);
      LAB_001070a3:*(undefined4*)( param_1 + 0xb0 ) = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::particles_set_mode(RID, RenderingServer::ParticlesMode) */void GLES3::ParticlesStorage::particles_set_mode(ParticlesStorage *this, ulong param_2, int param_3) {
   Particles *pPVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      pPVar1 = (Particles*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 ) );
      if (*(int*)( pPVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)pPVar1 != param_3) {
            _particles_free_data(this, pPVar1);
            *(int*)pPVar1 = param_3;
         }

         return;
      }

      if (*(int*)( pPVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_mode", "drivers/gles3/storage/particles_storage.cpp", 0x72, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_amount(RID, int) */void GLES3::ParticlesStorage::particles_set_amount(ParticlesStorage *this, ulong param_2, int param_3) {
   Particles *pPVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      pPVar1 = (Particles*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 ) );
      if (*(int*)( pPVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( pPVar1 + 0x18 ) != param_3) {
            _particles_free_data(this, pPVar1);
            *(int*)( pPVar1 + 0x18 ) = param_3;
            *(undefined8*)( pPVar1 + 0x130 ) = 0;
            pPVar1[0x15c] = (Particles)0x1;
            *(undefined1(*) [16])( pPVar1 + 0x120 ) = (undefined1[16])0x0;
            Dependency::changed_notify(pPVar1 + 0x1c8, 5);
            return;
         }

         return;
      }

      if (*(int*)( pPVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_amount", "drivers/gles3/storage/particles_storage.cpp", 0xb8, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_set_fixed_fps(RID, int) */void GLES3::ParticlesStorage::particles_set_fixed_fps(ParticlesStorage *this, ulong param_2, undefined4 param_3) {
   Particles *pPVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      pPVar1 = (Particles*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 ) );
      if (*(int*)( pPVar1 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( pPVar1 + 0x148 ) = param_3;
         _particles_free_data(this, pPVar1);
         pPVar1[0x15c] = (Particles)0x1;
         *(undefined8*)( pPVar1 + 0x130 ) = 0;
         *(undefined1(*) [16])( pPVar1 + 0x120 ) = (undefined1[16])0x0;
         Dependency::changed_notify(pPVar1 + 0x1c8, 5);
         return;
      }

      if (*(int*)( pPVar1 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_set_fixed_fps", "drivers/gles3/storage/particles_storage.cpp", 0x111, "Parameter \"particles\" is null.", 0, 0);
   return;
}
/* GLES3::ParticlesStorage::particles_free(RID) */void GLES3::ParticlesStorage::particles_free(ParticlesStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   ulong uVar5;
   code *pcVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   int iVar10;
   Particles *pPVar11;
   long lVar12;
   long lVar13;
   if (param_2 != 0) {
      uVar9 = (uint)param_2;
      if (uVar9 < *(uint*)( this + 0x184 )) {
         pPVar11 = (Particles*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 ) );
         iVar10 = (int)( param_2 >> 0x20 );
         if (*(int*)( pPVar11 + 0x208 ) == iVar10) {
            Dependency::deleted_notify(pPVar11 + 0x1c8);
            plVar1 = *(long**)( pPVar11 + 0x100 );
            if (plVar1 != (long*)0x0) {
               lVar12 = *(long*)( pPVar11 + 0x110 );
               if (lVar12 != 0) {
                  *(undefined8*)( lVar12 + 0x18 ) = *(undefined8*)( pPVar11 + 0x118 );
               }

               lVar13 = *(long*)( pPVar11 + 0x118 );
               if (lVar13 != 0) {
                  *(long*)( lVar13 + 0x10 ) = lVar12;
               }

               if (pPVar11 + 0x100 == (Particles*)*plVar1) {
                  *plVar1 = *(long*)( pPVar11 + 0x110 );
               }

               if (pPVar11 + 0x100 == (Particles*)plVar1[1]) {
                  plVar1[1] = lVar13;
               }

               *(undefined8*)( pPVar11 + 0x100 ) = 0;
               *(undefined1(*) [16])( pPVar11 + 0x110 ) = (undefined1[16])0x0;
            }

            __mutex = (pthread_mutex_t*)( this + 0x198 );
            _particles_free_data(this, pPVar11);
            iVar7 = pthread_mutex_lock(__mutex);
            if (iVar7 == 0) {
               if (uVar9 < *(uint*)( this + 0x184 )) {
                  uVar5 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 );
                  lVar13 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210;
                  lVar12 = *(long*)( *(long*)( this + 0x170 ) + uVar5 * 8 ) + lVar13;
                  if (*(int*)( lVar12 + 0x208 ) < 0) {
                     pthread_mutex_unlock(__mutex);
                     _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                  }
 else if (iVar10 == *(int*)( lVar12 + 0x208 )) {
                     Dependency::~Dependency((Dependency*)( lVar12 + 0x1c8 ));
                     pvVar2 = *(void**)( lVar12 + 0x1a0 );
                     if (pvVar2 != (void*)0x0) {
                        if (*(int*)( lVar12 + 0x1c4 ) != 0) {
                           if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar12 + 0x1c0 ) * 4 ) != 0) {
                              memset(*(void**)( lVar12 + 0x1b8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar12 + 0x1c0 ) * 4 ) << 2);
                           }

                           *(undefined4*)( lVar12 + 0x1c4 ) = 0;
                        }

                        Memory::free_static(pvVar2, false);
                        Memory::free_static(*(void**)( lVar12 + 0x1b0 ), false);
                        Memory::free_static(*(void**)( lVar12 + 0x1a8 ), false);
                        Memory::free_static(*(void**)( lVar12 + 0x1b8 ), false);
                     }

                     plVar1 = *(long**)( lVar12 + 0x100 );
                     if (plVar1 != (long*)0x0) {
                        lVar3 = *(long*)( lVar12 + 0x110 );
                        if (lVar3 != 0) {
                           *(undefined8*)( lVar3 + 0x18 ) = *(undefined8*)( lVar12 + 0x118 );
                        }

                        lVar4 = *(long*)( lVar12 + 0x118 );
                        if (lVar4 != 0) {
                           *(long*)( lVar4 + 0x10 ) = lVar3;
                        }

                        if (lVar12 + 0x100 == *plVar1) {
                           *plVar1 = *(long*)( lVar12 + 0x110 );
                        }

                        if (lVar12 + 0x100 == plVar1[1]) {
                           plVar1[1] = lVar4;
                        }

                     }

                     if (*(long*)( lVar12 + 0xa8 ) != 0) {
                        LOCK();
                        plVar1 = (long*)( *(long*)( lVar12 + 0xa8 ) + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar3 = *(long*)( lVar12 + 0xa8 );
                           *(undefined8*)( lVar12 + 0xa8 ) = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                     lVar12 = *(long*)( this + 0x178 );
                     *(undefined4*)( *(long*)( *(long*)( this + 0x170 ) + uVar5 * 8 ) + 0x208 + lVar13 ) = 0xffffffff;
                     uVar8 = *(int*)( this + 0x188 ) - 1;
                     *(uint*)( this + 0x188 ) = uVar8;
                     *(uint*)( *(long*)( lVar12 + ( (ulong)uVar8 / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 ) + ( (ulong)uVar8 % ( ulong ) * (uint*)( this + 0x180 ) ) * 4 ) = uVar9;
                     pthread_mutex_unlock(__mutex);
                  }
 else {
                     pthread_mutex_unlock(__mutex);
                     _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
                  }

               }
 else {
                  pthread_mutex_unlock(__mutex);
                  _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
               }

               return;
            }

            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar7);
         }

         if (*(int*)( pPVar11 + 0x208 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x170 ));
         }

      }

   }

   Dependency::deleted_notify((RID*)0x1c8);
   /* WARNING: Does not return */
   pcVar6 = (code*)invalidInstructionException();
   ( *pcVar6 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::particles_collision_get_heightfield_framebuffer(RID) const */int GLES3::ParticlesStorage::particles_collision_get_heightfield_framebuffer(ParticlesStorage *this, ulong param_2) {
   long *plVar1;
   int *piVar2;
   float fVar3;
   float fVar4;
   long lVar5;
   char *pcVar6;
   int iVar7;
   uint *puVar8;
   int iVar9;
   int iVar10;
   uint uVar11;
   long in_FS_OFFSET;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      piVar2 = (int*)( *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78 );
      if (piVar2[0x1c] == (int)( param_2 >> 0x20 )) {
         if (*piVar2 != 6) {
            _err_print_error("particles_collision_get_heightfield_framebuffer", "drivers/gles3/storage/particles_storage.cpp", 0x4e5, "Condition \"particles_collision->type != RenderingServer::PARTICLES_COLLISION_TYPE_HEIGHTFIELD_COLLIDE\" is true. Returning: 0", 0, 0);
            iVar10 = 0;
            goto LAB_00107f24;
         }

         if (piVar2[10] == 0) {
            fVar3 = (float)piVar2[5];
            local_58 = __LC140;
            uStack_50 = _UNK_00116338;
            fVar4 = (float)piVar2[3];
            local_48 = _LC141;
            if (fVar4 <= fVar3) {
               iVar9 = *(int*)( (long)&local_58 + (long)piVar2[0xf] * 4 );
               iVar10 = (int)( ( fVar4 / fVar3 ) * (float)iVar9 );
            }
 else {
               iVar10 = *(int*)( (long)&local_58 + (long)piVar2[0xf] * 4 );
               iVar9 = (int)( ( fVar3 / fVar4 ) * (float)iVar10 );
            }

            ( *_glad_glGenTextures )(1, piVar2 + 10);
            ( *_glad_glActiveTexture )(0x84c0);
            ( *_glad_glBindTexture )(0xde1, piVar2[10]);
            ( *_glad_glTexImage2D )(0xde1, 0, 0x8cac, iVar10, iVar9, 0, 0x1902, 0x1406, 0);
            ( *_glad_glTexParameteri )(0xde1, 0x2801, 0x2601);
            ( *_glad_glTexParameteri )(0xde1, 0x2800, 0x2601);
            ( *_glad_glTexParameteri )(0xde1, 0x813c, 0);
            ( *_glad_glTexParameteri )(0xde1, 0x813d, 1);
            ( *_glad_glTexParameteri )(0xde1, 0x2803, 0x812f);
            ( *_glad_glTexParameteri )(0xde1, 0x2802, 0x812f);
            ( *_glad_glGenFramebuffers )(1, piVar2 + 0xb);
            ( *_glad_glBindFramebuffer )(0x8d40, piVar2[0xb]);
            ( *_glad_glFramebufferTexture2D )(0x8d40, 0x8d00, 0xde1, piVar2[10], 0);
            iVar7 = ( *_glad_glCheckFramebufferStatus )(0x8d40);
            if (iVar7 != 0x8cd5) {
               GLES3::TextureStorage::get_singleton();
               if (iVar7 == 0x8cd6) {
                  local_68 = "GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT";
                  local_60 = 0x24;
                  LAB_0010813e:local_70 = 0;
                  String::parse_latin1((StrRange*)&local_70);
               }
 else {
                  if (iVar7 == 0x8cd7) {
                     local_68 = "GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT";
                     local_60 = 0x2c;
                     goto LAB_0010813e;
                  }

                  if (iVar7 == 0x8cdb) {
                     local_68 = "GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER";
                     local_60 = 0x25;
                     goto LAB_0010813e;
                  }

                  if (iVar7 == 0x8cdc) {
                     local_68 = "GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER";
                     local_60 = 0x25;
                     goto LAB_0010813e;
                  }

                  itos((long)&local_70);
               }

               operator+((char *)&
               local_68,(String_conflict*)"Could create heightmap texture status: ";
               _err_print_error("particles_collision_get_heightfield_framebuffer", "drivers/gles3/storage/particles_storage.cpp", 0x505, &local_68, 0, 1);
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

               lVar5 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

            }

            lVar5 = Utilities::singleton;
            local_68 = "Particles collision heightfield texture";
            local_70 = 0;
            local_60 = 0x27;
            String::parse_latin1((StrRange*)&local_70);
            uVar11 = iVar10 * iVar9 * 4;
            local_68 = (char*)CONCAT44(local_68._4_4_, piVar2[10]);
            plVar1 = (long*)( lVar5 + 0x108 );
            *plVar1 = *plVar1 + (ulong)uVar11;
            puVar8 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar5 + 200 ), (uint*)&local_68);
            lVar5 = local_70;
            *puVar8 = uVar11;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            piVar2[0xc] = iVar10;
            piVar2[0xd] = iVar9;
            ( *_glad_glBindTexture )(0xde1, 0);
            ( *_glad_glBindFramebuffer )(0x8d40, (undefined4)TextureStorage::system_fbo);
         }

         iVar10 = piVar2[0xb];
         goto LAB_00107f24;
      }

      if (piVar2[0x1c] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_collision_get_heightfield_framebuffer", "drivers/gles3/storage/particles_storage.cpp", 0x4e4, "Parameter \"particles_collision\" is null.", 0, 0);
   iVar10 = 0;
   LAB_00107f24:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar10;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::particles_collision_set_collision_type(RID,
   RenderingServer::ParticlesCollisionType) */void GLES3::ParticlesStorage::particles_collision_set_collision_type(ParticlesStorage *this, ulong param_2, int param_3) {
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   int *piVar1;
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
   long lVar12;
   uint uVar13;
   uint *puVar14;
   int iVar15;
   ulong uVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar12 = Utilities::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      piVar1 = (int*)( *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78 );
      if (piVar1[0x1c] == (int)( param_2 >> 0x20 )) {
         if (*piVar1 == param_3) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else {
            uVar2 = piVar1[10];
            if (uVar2 != 0) {
               this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
               local_44 = uVar2;
               if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
                  uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
                  uVar13 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
                  uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
                  uVar20 = uVar13 ^ uVar13 >> 0x10;
                  if (uVar13 == uVar13 >> 0x10) {
                     uVar20 = 1;
                     uVar16 = uVar3;
                  }
 else {
                     uVar16 = uVar20 * uVar3;
                  }

                  uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar18;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar16;
                  lVar17 = SUB168(auVar4 * auVar8, 8);
                  iVar15 = SUB164(auVar4 * auVar8, 8);
                  uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar17 * 4 );
                  if (uVar13 != 0) {
                     uVar19 = 0;
                     do {
                        if (( uVar13 == uVar20 ) && ( uVar2 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar17 * 8 ) + 0x10 ) )) {
                           ( *_glad_glDeleteTextures )(1, &local_44);
                           puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, &local_44);
                           *(long*)( lVar12 + 0x108 ) = *(long*)( lVar12 + 0x108 ) - ( ulong ) * puVar14;
                           HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, &local_44);
                           goto LAB_001083e9;
                        }

                        uVar19 = uVar19 + 1;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = ( iVar15 + 1 ) * uVar3;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar18;
                        lVar17 = SUB168(auVar5 * auVar9, 8);
                        uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar17 * 4 );
                        iVar15 = SUB164(auVar5 * auVar9, 8);
                     }
 while ( ( uVar13 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar13 * uVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar15 ) - SUB164(auVar6 * auVar10, 8) ) * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,uVar19 <= SUB164(auVar7 * auVar11, 8) );
                  }

               }

               _err_print_error("texture_free_data", "drivers/gles3/storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
               LAB_001083e9:piVar1[10] = 0;
               ( *_glad_glDeleteFramebuffers )(1, piVar1 + 0xb);
               piVar1[0xb] = 0;
            }

            *piVar1 = param_3;
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Dependency::changed_notify(piVar1 + 0x10, 0);
               return;
            }

         }

         goto LAB_00108501;
      }

      if (piVar1[0x1c] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("particles_collision_set_collision_type", "drivers/gles3/storage/particles_storage.cpp", 0x515, "Parameter \"particles_collision\" is null.", 0, 0);
      return;
   }

   LAB_00108501:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::particles_collision_set_height_field_resolution(RID,
   RenderingServer::ParticlesCollisionHeightfieldResolution) */void GLES3::ParticlesStorage::particles_collision_set_height_field_resolution(ParticlesStorage *this, ulong param_2, uint param_3) {
   long lVar1;
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
   long lVar12;
   uint uVar13;
   uint *puVar14;
   int iVar15;
   ulong uVar16;
   long lVar17;
   ulong uVar18;
   uint uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1dc ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
      if (*(int*)( lVar1 + 0x70 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 < 6) {
            if (*(uint*)( lVar1 + 0x3c ) != param_3) {
               uVar2 = *(uint*)( lVar1 + 0x28 );
               *(uint*)( lVar1 + 0x3c ) = param_3;
               lVar12 = Utilities::singleton;
               if (uVar2 != 0) {
                  this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
                  local_44 = uVar2;
                  if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
                     uVar3 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
                     uVar13 = ( uVar2 >> 0x10 ^ uVar2 ) * -0x7a143595;
                     uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
                     uVar20 = uVar13 ^ uVar13 >> 0x10;
                     if (uVar13 == uVar13 >> 0x10) {
                        uVar20 = 1;
                        uVar16 = uVar3;
                     }
 else {
                        uVar16 = uVar20 * uVar3;
                     }

                     uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = uVar18;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = uVar16;
                     lVar17 = SUB168(auVar4 * auVar8, 8);
                     uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar17 * 4 );
                     iVar15 = SUB164(auVar4 * auVar8, 8);
                     if (uVar13 != 0) {
                        uVar19 = 0;
                        do {
                           if (( uVar13 == uVar20 ) && ( uVar2 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar17 * 8 ) + 0x10 ) )) {
                              ( *_glad_glDeleteTextures )(1, &local_44);
                              puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, &local_44);
                              *(long*)( lVar12 + 0x108 ) = *(long*)( lVar12 + 0x108 ) - ( ulong ) * puVar14;
                              HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, &local_44);
                              goto LAB_00108713;
                           }

                           uVar19 = uVar19 + 1;
                           auVar5._8_8_ = 0;
                           auVar5._0_8_ = ( iVar15 + 1 ) * uVar3;
                           auVar9._8_8_ = 0;
                           auVar9._0_8_ = uVar18;
                           lVar17 = SUB168(auVar5 * auVar9, 8);
                           uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar17 * 4 );
                           iVar15 = SUB164(auVar5 * auVar9, 8);
                        }
 while ( ( uVar13 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar13 * uVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar15 ) - SUB164(auVar6 * auVar10, 8) ) * uVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,uVar19 <= SUB164(auVar7 * auVar11, 8) );
                     }

                  }

                  _err_print_error("texture_free_data", "drivers/gles3/storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
                  LAB_00108713:*(undefined4*)( lVar1 + 0x28 ) = 0;
                  ( *_glad_glDeleteFramebuffers )(1, lVar1 + 0x2c);
                  *(undefined4*)( lVar1 + 0x2c ) = 0;
               }

            }

         }
 else {
            _err_print_index_error("particles_collision_set_height_field_resolution", "drivers/gles3/storage/particles_storage.cpp", 0x55e, (ulong)param_3, 6, "p_resolution", "RenderingServer::PARTICLES_COLLISION_HEIGHTFIELD_RESOLUTION_MAX", "", false, false);
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010885c;
      }

      if (*(int*)( lVar1 + 0x70 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("particles_collision_set_height_field_resolution", "drivers/gles3/storage/particles_storage.cpp", 0x55d, "Parameter \"particles_collision\" is null.", 0, 0);
      return;
   }

   LAB_0010885c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::_particles_process(GLES3::ParticlesStorage::Particles*, double) */void GLES3::ParticlesStorage::_particles_process(ParticlesStorage *this, Particles *param_1, double param_2) {
   Version *pVVar1;
   ulong *puVar2;
   uint *puVar3;
   long *plVar4;
   float fVar5;
   Particles PVar6;
   ulong *puVar7;
   undefined8 uVar8;
   code *pcVar9;
   double dVar10;
   long lVar11;
   ulong uVar12;
   int iVar13;
   long lVar14;
   long lVar15;
   ulong uVar16;
   undefined4 *puVar17;
   ulong uVar18;
   uint uVar19;
   ulong uVar20;
   ulong uVar21;
   ulong uVar22;
   undefined4 uVar23;
   undefined4 uVar24;
   uint uVar25;
   uint uVar26;
   uint uVar27;
   undefined8 in_R9;
   char *pcVar28;
   int iVar29;
   ulong uVar30;
   long lVar31;
   long in_FS_OFFSET;
   ushort in_FPUStatusWord;
   float fVar32;
   double dVar33;
   float fVar34;
   float fVar35;
   double __x;
   undefined1 auVar36[12];
   char *pcVar37;
   long *local_1a48;
   uint local_1a1c;
   undefined4 local_1a18;
   undefined4 uStack_1a14;
   undefined4 uStack_1a10;
   undefined4 uStack_1a0c;
   undefined8 local_1a08;
   ulong local_19f8;
   ulong uStack_19f0;
   ulong local_19e8;
   ulong uStack_19e0;
   undefined4 local_19d8;
   undefined4 uStack_19d4;
   undefined4 uStack_19d0;
   undefined4 uStack_19cc;
   ulong local_19c0;
   char *local_19b8;
   undefined8 local_19b0;
   undefined8 local_19a8;
   undefined8 local_19a0;
   undefined8 local_1998;
   undefined8 local_1990;
   undefined2 local_1988;
   undefined8 local_1978;
   undefined8 uStack_1970;
   undefined8 local_1968;
   undefined1 local_1958[12];
   undefined4 uStack_194c;
   undefined8 local_1948;
   undefined1 local_1938[16];
   undefined1 local_1928[16];
   undefined4 local_1918;
   undefined8 uStack_1914;
   undefined4 uStack_190c;
   undefined8 local_1908;
   ulong uStack_1900;
   undefined8 local_18f8;
   undefined8 uStack_18f0;
   undefined4 local_18e8;
   undefined4 uStack_18e4;
   undefined4 uStack_18e0;
   undefined4 uStack_18dc;
   uint local_18d8;
   undefined4 local_18d4;
   undefined8 local_18d0;
   undefined8 local_18c8;
   undefined8 uStack_18c0;
   undefined8 local_18b8;
   undefined8 local_18b0;
   undefined4 local_18a8;
   undefined8 local_18a4;
   int local_189c;
   undefined1 local_1898[16];
   undefined8 local_1888;
   ulong uStack_1880;
   undefined8 local_1878;
   ulong uStack_1870;
   undefined8 local_1868;
   undefined4 local_1860;
   undefined4 local_185c;
   undefined8 local_1858;
   undefined8 local_1850;
   undefined8 uStack_1848;
   undefined4 auStack_1840[10];
   undefined8 uStack_1818;
   undefined4 auStack_1810[2];
   undefined8 uStack_1808;
   float afStack_1800[3];
   undefined8 uStack_17f4;
   uint auStack_17ec[745];
   undefined8 local_c48;
   undefined4 local_c40[2];
   undefined8 local_c38;
   undefined4 local_c30[2];
   undefined8 local_c28;
   undefined4 local_c20[2];
   ulong local_c18;
   undefined4 local_c10[2];
   undefined8 local_c08;
   float local_c00[752];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = GLES3::TextureStorage::get_singleton();
   lVar15 = GLES3::MaterialStorage::get_singleton();
   dVar33 = *(double*)( param_1 + 0x120 );
   __x = param_2 / *(double*)( param_1 + 0x20 ) + dVar33;
   dVar10 = __x;
   do {
      dVar10 = dVar10 - ( dVar10 / 1.0 ) * 1.0;
   }
 while ( ( in_FPUStatusWord & 0x400 ) != 0 );
   if (NAN(dVar10)) {
      fmod(__x, _LC155);
      if (param_1[0x15c] != (Particles)0x0) goto LAB_00108915;
      LAB_00109fc6:local_18d8 = (uint)(byte)param_1[0x10];
   }
 else if (param_1[0x15c] == (Particles)0x0) {
      if (dVar33 <= dVar10) goto LAB_00109fc6;
      if (param_1[0x11] == (Particles)0x0) {
         local_18d8 = (uint)(byte)param_1[0x10];
      }
 else {
         param_1[0x10] = (Particles)0x0;
         local_18d8 = 0;
      }

      *(int*)( param_1 + 0x13c ) = *(int*)( param_1 + 0x13c ) + 1;
   }
 else {
      LAB_00108915:*(undefined4*)( param_1 + 0x13c ) = 0;
      local_18d8 = (uint)(byte)param_1[0x10];
   }

   plVar4 = RenderingServerGlobals::rasterizer;
   *(double*)( param_1 + 0x120 ) = dVar10;
   local_18d0 = CONCAT44((float)dVar33, (float)dVar10);
   dVar33 = (double)( **(code**)( *plVar4 + 0x98 ) )();
   local_18a8 = *(undefined4*)( param_1 + 0x138 );
   uStack_18c0 = CONCAT44((float)param_2, (float)dVar33);
   local_18c8 = *(undefined8*)( param_1 + 0x34 );
   if (param_1[0x58] == (Particles)0x0) {
      local_1868 = *(undefined8*)( param_1 + 0x184 );
      local_1898._4_4_ = (int)( ( ulong ) * (undefined8*)( param_1 + 0x168 ) >> 0x20 );
      local_1898._0_4_ = (int)*(undefined8*)( param_1 + 0x160 );
      local_1860 = *(undefined4*)( param_1 + 0x18c );
      local_1898._8_4_ = *(undefined4*)( param_1 + 0x178 );
      local_1898._12_4_ = 0;
      local_1888 = CONCAT44(*(undefined4*)( param_1 + 0x170 ), *(undefined4*)( param_1 + 0x164 ));
      uStack_1880 = ( ulong ) * (uint*)( param_1 + 0x17c );
      local_1878 = CONCAT44(*(undefined4*)( param_1 + 0x174 ), *(undefined4*)( param_1 + 0x168 ));
      uStack_1870 = ( ulong ) * (uint*)( param_1 + 0x180 );
   }
 else {
      local_1898 = ZEXT416(_LC156);
      local_1868 = 0;
      local_1888 = __LC157;
      uStack_1880 = _UNK_00116358;
      local_1878 = __LC158;
      uStack_1870 = _UNK_00116368;
      local_1860 = 0;
   }

   local_1938 = ZEXT416(_LC156);
   local_18d4 = *(undefined4*)( param_1 + 0x13c );
   local_185c = 0x3f800000;
   local_189c = *(int*)( param_1 + 0x90 );
   local_18b8 = CONCAT44(*(undefined4*)( param_1 + 0x14 ), *(undefined4*)( param_1 + 0x158 ));
   local_18b0 = 0;
   local_1858 = *(undefined8*)( param_1 + 400 );
   *(int*)( param_1 + 0x90 ) = local_189c + 1;
   local_1850 = *(undefined8*)( param_1 + 0x198 );
   local_18a4 = 0;
   local_1918 = 0x3f800000;
   uStack_1914 = 0;
   uStack_190c = 0;
   local_1928 = local_1938;
   if (param_1[0x58] != (Particles)0x0) {
      Transform3D::affine_inverse();
      local_1938._8_8_ = uStack_19f0;
      local_1938._0_8_ = local_19f8;
      local_1928._8_8_ = uStack_19e0;
      local_1928._0_8_ = local_19e8;
      local_1918 = local_19d8;
      uStack_190c = uStack_19cc;
      uStack_1914 = CONCAT44(uStack_19d0, uStack_19d4);
   }

   if (( param_1[0x5a] == (Particles)0x0 ) || ( *(int*)( param_1 + 0x84 ) == 0 )) {
      iVar29 = *(int*)( param_1 + 0x1c4 );
      if (iVar29 != 0) {
         local_1a1c = 0;
         goto LAB_00108ab2;
      }

      LAB_00108ddb:uVar16 = *(ulong*)( lVar14 + 0x20 );
      if (( uVar16 == 0 ) || ( *(uint*)( lVar14 + 0xf4 ) <= (uint)uVar16 )) goto LAB_0010f2dd;
      lVar31 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( lVar14 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( lVar14 + 0xe0 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( lVar14 + 0xf0 ) ) * 8 );
      iVar29 = *(int*)( lVar31 + 0xe8 );
      if (iVar29 != (int)( uVar16 >> 0x20 )) {
         GLES3_ParticlesStorage__particles_process:if (iVar29 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R9);
         }

         LAB_0010f2dd:/* WARNING: Does not return */pcVar9 = (code*)invalidInstructionException();
         ( *pcVar9 )();
      }

      if (*(char*)( lVar31 + 8 ) != '\0') {
         if (( *(long*)( lVar31 + 0x10 ) == 0 ) || ( uVar16 = *(ulong*)( lVar31 + 0x10 ) * (uint*)( lVar14 + 0xf4 ) <= (uint)uVar16 )) goto LAB_0010f2dd;
         lVar31 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( lVar14 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( lVar14 + 0xe0 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( lVar14 + 0xf0 ) ) * 8 );
         iVar29 = *(int*)( lVar31 + 0xe8 );
         if (iVar29 != (int)( uVar16 >> 0x20 )) goto GLES3_ParticlesStorage__particles_process;
      }

      local_1a1c = *(uint*)( lVar31 + 0x74 );
   }
 else {
      local_1978 = *(undefined8*)( param_1 + 0x5c );
      uStack_1970 = *(undefined8*)( param_1 + 100 );
      local_1968 = *(undefined8*)( param_1 + 0x6c );
      if (param_1[0x58] == (Particles)0x0) {
         local_1958._8_4_ = *(undefined4*)( param_1 + 0x164 );
         local_1948 = *(undefined8*)( param_1 + 0x184 );
         uStack_194c = *(undefined4*)( param_1 + 0x170 );
         local_1958._4_4_ = *(undefined4*)( param_1 + 0x16c );
         local_1958._0_4_ = *(undefined4*)( param_1 + 0x160 );
         Transform2D::affine_inverse();
         Transform2D::operator *((Transform2D*)&local_1a18, (Transform2D*)&local_1978);
         local_1968 = local_1a08;
         local_1978 = CONCAT44(uStack_1a14, local_1a18);
         uStack_1970 = CONCAT44(uStack_1a0c, uStack_1a10);
      }

      Transform2D::affine_inverse();
      local_c48 = local_1978;
      local_c40[1] = (undefined4)local_1968;
      local_18a4 = CONCAT44(1, (uint)local_18a4);
      iVar29 = *(int*)( param_1 + 0x1c4 );
      local_c40[0] = 0;
      local_c38 = uStack_1970;
      local_c30[1] = local_1968._4_4_;
      local_c28 = local_1908;
      local_c20[1] = (undefined4)local_18f8;
      local_c18 = uStack_1900;
      local_c10[1] = local_18f8._4_4_;
      local_c08 = *(undefined8*)( param_1 + 0x7c );
      local_c00[0] = *(float*)( param_1 + 0x74 );
      local_1a1c = *(uint*)( param_1 + 0x84 );
      local_c00[3] = *(float*)( param_1 + 0x78 );
      local_c30[0] = 0;
      local_c20[0] = 0;
      local_c10[0] = 0;
      local_c00[2] = 5.60519e-45;
      if (iVar29 != 0) {
         LAB_00108ab2:puVar7 = *(ulong**)( param_1 + 0x1a0 );
         lVar31 = 0;
         uVar16 = *puVar7;
         if (uVar16 == 0) goto LAB_00108d90;
         do {
            if ((uint)uVar16 < *(uint*)( this + 0x234 )) {
               puVar2 = (ulong*)( *(long*)( *(long*)( this + 0x220 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x230 ) ) * 8 ) + ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x230 ) ) * 0x48 );
               if ((int)puVar2[8] == (int)( uVar16 >> 0x20 )) {
                  if ((char)puVar2[7] != '\0') {
                     if (*puVar2 != 0) {
                        uVar16 = *puVar2;
                        if ((uint)uVar16 < *(uint*)( this + 0x1dc )) {
                           puVar3 = (uint*)( *(long*)( *(long*)( this + 0x1c8 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78 );
                           if (puVar3[0x1c] == ( uint )(uVar16 >> 0x20)) {
                              local_1908 = puVar2[1];
                              uStack_1900 = puVar2[2];
                              local_18f8 = puVar2[3];
                              uStack_18f0 = puVar2[4];
                              local_18e8 = (undefined4)puVar2[5];
                              uStack_18e4 = ( undefined4 )(puVar2[5] >> 0x20);
                              uStack_18e0 = (undefined4)puVar2[6];
                              uStack_18dc = ( undefined4 )(puVar2[6] >> 0x20);
                              if (param_1[0x58] != (Particles)0x0) {
                                 Transform3D::operator *((Transform3D*)&local_19f8, (Transform3D*)local_1938);
                                 local_1908 = local_19f8;
                                 uStack_1900 = uStack_19f0;
                                 local_18f8 = local_19e8;
                                 uStack_18f0 = uStack_19e0;
                                 local_18e8 = local_19d8;
                                 uStack_18e4 = uStack_19d4;
                                 uStack_18e0 = uStack_19d0;
                                 uStack_18dc = uStack_19cc;
                              }

                              auVar36 = Basis::get_scale();
                              fVar35 = auVar36._8_4_;
                              fVar32 = auVar36._0_4_;
                              fVar34 = auVar36._4_4_;
                              local_1958 = auVar36;
                              Basis::orthonormalize();
                              uVar19 = *puVar3;
                              uVar23 = ( undefined4 )(uStack_1900 >> 0x20);
                              if ((int)uVar19 < 3) {
                                 if ((uint)local_18a4 < 0x20) {
                                    uVar16 = local_18a4 & 0xffffffff;
                                    ( &uStack_1848 )[uVar16 * 0xc] = CONCAT44(uVar23, (int)local_1908);
                                    auStack_1840[uVar16 * 0x18 + 1] = 0;
                                    auStack_1840[uVar16 * 0x18] = (undefined4)uStack_18f0;
                                    auStack_1840[uVar16 * 0x18 + 5] = 0;
                                    auStack_1840[uVar16 * 0x18 + 2] = local_1908._4_4_;
                                    auStack_1840[uVar16 * 0x18 + 9] = 0;
                                    auStack_1840[uVar16 * 0x18 + 3] = (undefined4)local_18f8;
                                    ( &uStack_1818 )[uVar16 * 0xc] = CONCAT44(uStack_18e0, uStack_18e4);
                                    auStack_1840[uVar16 * 0x18 + 4] = uStack_18f0._4_4_;
                                    auStack_1810[uVar16 * 0x18 + 1] = 0x3f800000;
                                    auStack_1840[uVar16 * 0x18 + 6] = (undefined4)uStack_1900;
                                    auStack_1840[uVar16 * 0x18 + 7] = local_18f8._4_4_;
                                    auStack_1840[uVar16 * 0x18 + 8] = local_18e8;
                                    auStack_1810[uVar16 * 0x18] = uStack_18dc;
                                    uVar25 = puVar3[8];
                                    ( &uStack_17f4 )[uVar16 * 0xc] = *(undefined8*)( puVar3 + 6 );
                                    auStack_17ec[uVar16 * 0x18] = uVar25;
                                    if (uVar19 == 1) {
                                       uVar8 = *(undefined8*)( puVar3 + 3 );
                                       afStack_1800[uVar16 * 0x18 + 2] = 1.4013e-45;
                                       fVar5 = (float)puVar3[5];
                                       ( &uStack_1808 )[uVar16 * 0xc] = CONCAT44(fVar34 * (float)( (ulong)uVar8 >> 0x20 ), fVar32 * (float)uVar8);
                                       afStack_1800[uVar16 * 0x18] = fVar35 * fVar5;
                                    }
 else if (uVar19 == 2) {
                                       if (_particles_process(GLES3::ParticlesStorage::Particles * ::first_print != '\0') {
                                          in_R9 = 1;
                                          _err_print_error("_particles_process", "drivers/gles3/storage/particles_storage.cpp", 0x294, "Vector field particle attractors are not available in the Compatibility renderer.", 1);
                                          _particles_process(GLES3::ParticlesStorage::Particles*,double)::
                            first_print =
                                          '\0';
                                       }

                                    }
 else if (uVar19 == 0) {
                                       afStack_1800[uVar16 * 0x18 + 2] = 0.0;
                                       fVar32 = (float)( ( (double)( fVar32 + fVar34 + fVar35 ) / __LC161 ) * (double)(float)puVar3[2] );
                                       ( &uStack_1808 )[uVar16 * 0xc] = CONCAT44(fVar32, fVar32);
                                       afStack_1800[uVar16 * 0x18] = fVar32;
                                    }

                                    local_18a4 = CONCAT44(local_18a4._4_4_, (uint)local_18a4 + 1);
                                 }

                              }
 else if (local_18a4._4_4_ < 0x20) {
                                 uVar16 = (ulong)local_18a4._4_4_;
                                 ( &local_c48 )[uVar16 * 0xc] = CONCAT44(uVar23, (int)local_1908);
                                 local_c40[uVar16 * 0x18 + 1] = 0;
                                 local_c40[uVar16 * 0x18] = (undefined4)uStack_18f0;
                                 local_c30[uVar16 * 0x18 + 1] = 0;
                                 *(undefined4*)( &local_c38 + uVar16 * 0xc ) = local_1908._4_4_;
                                 local_c20[uVar16 * 0x18 + 1] = 0;
                                 *(undefined4*)( (long)&local_c38 + uVar16 * 0x60 + 4 ) = (undefined4)local_18f8;
                                 ( &local_c18 )[uVar16 * 0xc] = CONCAT44(uStack_18e0, uStack_18e4);
                                 local_c30[uVar16 * 0x18] = uStack_18f0._4_4_;
                                 local_c10[uVar16 * 0x18 + 1] = 0x3f800000;
                                 *(undefined4*)( &local_c28 + uVar16 * 0xc ) = (undefined4)uStack_1900;
                                 *(undefined4*)( (long)&local_c28 + uVar16 * 0x60 + 4 ) = local_18f8._4_4_;
                                 local_c20[uVar16 * 0x18] = local_18e8;
                                 local_c10[uVar16 * 0x18] = uStack_18dc;
                                 if (uVar19 == 5) {
                                    if (_particles_process(GLES3::ParticlesStorage::Particles * ::first_print != '\0') {
                                       in_R9 = 1;
                                       _err_print_error("_particles_process", "drivers/gles3/storage/particles_storage.cpp", 0x2b5, "SDF Particle Colliders are not available in the Compatibility renderer.", 1);
                                       _particles_process(GLES3::ParticlesStorage::Particles*,double)::
                          first_print =
                                       '\0';
                                    }

                                 }
 else if (uVar19 < 6) {
                                    if (uVar19 == 3) {
                                       local_c00[uVar16 * 0x18 + 2] = 0.0;
                                       fVar32 = (float)( ( (double)( fVar32 + fVar34 + fVar35 ) / __LC161 ) * (double)(float)puVar3[2] );
                                       *(ulong*)( local_c00 + uVar16 * 0x18 + -2 ) = CONCAT44(fVar32, fVar32);
                                       local_c00[uVar16 * 0x18] = fVar32;
                                    }
 else {
                                       uVar8 = *(undefined8*)( puVar3 + 3 );
                                       local_c00[uVar16 * 0x18 + 2] = 1.4013e-45;
                                       fVar5 = (float)puVar3[5];
                                       *(ulong*)( local_c00 + uVar16 * 0x18 + -2 ) = CONCAT44(fVar34 * (float)( (ulong)uVar8 >> 0x20 ), fVar32 * (float)uVar8);
                                       local_c00[uVar16 * 0x18] = fVar35 * fVar5;
                                    }

                                 }
 else if (uVar19 == 6) {
                                    if (local_1a1c != 0) goto LAB_00108d90;
                                    uVar8 = *(undefined8*)( puVar3 + 3 );
                                    local_c00[uVar16 * 0x18 + 2] = 4.2039e-45;
                                    fVar5 = (float)puVar3[5];
                                    *(ulong*)( local_c00 + uVar16 * 0x18 + -2 ) = CONCAT44(fVar34 * (float)( (ulong)uVar8 >> 0x20 ), fVar32 * (float)uVar8);
                                    local_1a1c = puVar3[10];
                                    local_c00[uVar16 * 0x18] = fVar35 * fVar5;
                                 }

                                 local_18a4 = CONCAT44(local_18a4._4_4_ + 1, (uint)local_18a4);
                              }

                              goto LAB_00108d90;
                           }

                           if (puVar3[0x1c] + 0x80000000 < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                           }

                        }

                     }

                     in_R9 = 0;
                     _err_print_error("_particles_process", "drivers/gles3/storage/particles_storage.cpp", 0x26d, "Condition \"!pc\" is true. Continuing.", 0);
                  }

               }
 else if ((int)puVar2[8] + 0x80000000U < 0x7fffffff) {
                  in_R9 = 0;
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            LAB_00108d90:iVar13 = (int)lVar31 + 1;
            lVar11 = lVar31;
            while (true) {
               if (iVar29 <= iVar13) {
                  if (local_1a1c != 0) goto LAB_001090e8;
                  goto LAB_00108ddb;
               }

               lVar31 = lVar11 + 1;
               uVar16 = puVar7[lVar31];
               if (uVar16 != 0) break;
               iVar13 = (int)lVar11 + 2;
               lVar11 = lVar31;
            }
;
         }
 while ( true );
      }

      if (local_1a1c == 0) goto LAB_00108ddb;
   }

   LAB_001090e8:( *_glad_glActiveTexture )(0x84c0);
   ( *_glad_glBindTexture )(0xde1, local_1a1c);
   if (*(int*)( param_1 + 0xb0 ) == 0) {
      ( *_glad_glGenBuffers )(1, param_1 + 0xb0);
      ( *_glad_glBindBufferBase )(0x8a11, 0, *(undefined4*)( param_1 + 0xb0 ));
      lVar14 = Utilities::singleton;
      local_19b8 = "Particle Frame UBO";
      local_19c0 = 0;
      local_19b0 = 0x12;
      String::parse_latin1((StrRange*)&local_19c0);
      local_19b8 = (char*)CONCAT44(local_19b8._4_4_, *(undefined4*)( param_1 + 0xb0 ));
      ( *_glad_glBufferData )(0x8a11, 0x1890, &local_18d8, 0x88e0);
      plVar4 = (long*)( lVar14 + 0xf8 );
      *plVar4 = *plVar4 + 0x1890;
      puVar17 = (undefined4*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar14 + 0x68 ), (uint*)&local_19b8);
      uVar16 = local_19c0;
      *puVar17 = 0x1890;
      if (local_19c0 != 0) {
         LOCK();
         plVar4 = (long*)( local_19c0 - 0x10 );
         *plVar4 = *plVar4 + -1;
         UNLOCK();
         if (*plVar4 == 0) {
            local_19c0 = 0;
            Memory::free_static((void*)( uVar16 - 0x10 ), false);
         }

      }

   }
 else {
      ( *_glad_glBindBufferBase )(0x8a11, 0);
      ( *_glad_glBufferData )(0x8a11, 0x1890, &local_18d8, 0x88e0);
   }

   uVar16 = *(ulong*)( param_1 + 0x88 );
   if (( uVar16 == 0 ) || ( *(uint*)( lVar15 + 0x16c ) <= (uint)uVar16 )) {
      LAB_0010a280:uVar16 = *(ulong*)( this + 0x10 );
      if (( uVar16 != 0 ) && ( (uint)uVar16 < *(uint*)( lVar15 + 0x16c ) )) {
         lVar14 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x168 ) ) * 0xc0 + *(long*)( *(long*)( lVar15 + 0x158 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x168 ) ) * 8 );
         if (*(int*)( lVar14 + 0xb8 ) == (int)( uVar16 >> 0x20 )) {
            if (( *(int*)( lVar14 + 0x18 ) == 2 ) && ( local_1a48 = *(long**)( lVar14 + 8 ) ),local_1a48 != (long*)0x0) goto LAB_0010926e;
         }
 else if (*(int*)( lVar14 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      _err_print_error("_particles_process", "drivers/gles3/storage/particles_storage.cpp", 0x2e5, "Parameter \"m\" is null.", 0, 0);
      goto LAB_00109f92;
   }

   lVar14 = ( ( uVar16 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x168 ) ) * 0xc0 + *(long*)( *(long*)( lVar15 + 0x158 ) + ( ( uVar16 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x168 ) ) * 8 );
   if (*(int*)( lVar14 + 0xb8 ) != (int)( uVar16 >> 0x20 )) {
      if (*(int*)( lVar14 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_0010a280;
   }

   if (( *(int*)( lVar14 + 0x18 ) != 2 ) || ( local_1a48 = *(long**)( lVar14 + 8 ) ),local_1a48 == (long*)0x0) goto LAB_0010a280;
   LAB_0010926e:lVar31 = 0;
   uVar16 = 0;
   lVar14 = local_1a48[0x10];
   do {
      if (*(char*)( lVar14 + 0xb2 + lVar31 ) != '\0') {
         uVar16 = ( ulong )((uint)uVar16 | 2 << ( (byte)lVar31 & 0x1f ));
      }

      lVar31 = lVar31 + 1;
   }
 while ( lVar31 != 6 );
   if (*(int*)param_1 == 1) {
      uVar16 = ( ulong )((uint)uVar16 | 1);
   }

   uVar20 = *(ulong*)( this + 0x18 );
   if (( *(long*)( lVar14 + 0x78 ) != 0 ) && ( *(char*)( lVar14 + 0x70 ) != '\0' )) {
      ( **(code**)( *local_1a48 + 0x18 ) )(local_1a48);
      uVar20 = *(ulong*)( local_1a48[0x10] + 0x78 );
   }

   pVVar1 = (Version*)( lVar15 + 0x548 );
   uVar19 = (uint)uVar20;
   local_19c0 = uVar16;
   if (*(int*)( lVar15 + 0x668 ) < 1) {
      _err_print_index_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbb, 0, (long)*(int*)( lVar15 + 0x668 ), "p_variant", "variant_count", "", false, false);
      goto LAB_00109f92;
   }

   if (( uVar20 != 0 ) && ( uVar19 < *(uint*)( lVar15 + 0x59c ) )) {
      uVar22 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
      iVar29 = *(int*)( uVar22 + 0x78 );
      if (iVar29 == (int)( uVar20 >> 0x20 )) {
         if (*(int*)( uVar22 + 0x68 ) == 0) {
            ShaderGLES3::_initialize_version(pVVar1);
            if (*(int*)( uVar22 + 0x68 ) == 0) goto LAB_0010a566;
         }

         uVar12 = local_19c0;
         plVar4 = *(long**)( uVar22 + 0x70 );
         uVar25 = *(uint*)( plVar4 + 3 );
         uVar21 = (ulong)uVar25;
         lVar14 = plVar4[2];
         uVar18 = local_19c0 * 0x3ffff - 1;
         uVar18 = ( uVar18 ^ uVar18 >> 0x1f ) * 0x15;
         uVar18 = ( uVar18 ^ uVar18 >> 0xb ) * 0x41;
         uVar18 = uVar18 >> 0x16 ^ uVar18;
         uVar30 = uVar18 & 0xffffffff;
         if ((int)uVar18 == 0) {
            uVar30 = 1;
         }

         uVar18 = uVar30 % uVar21;
         uVar27 = *(uint*)( lVar14 + uVar18 * 4 );
         if (uVar27 != 0) {
            uVar26 = 0;
            while (( uVar27 != (uint)uVar30 || ( local_19c0 != *(ulong*)( plVar4[1] + uVar18 * 8 ) ) )) {
               uVar26 = uVar26 + 1;
               uVar18 = ( ulong )((int)uVar18 + 1) % uVar21;
               uVar27 = *(uint*)( lVar14 + uVar18 * 4 );
               if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar18 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010a660;
            }
;
            puVar17 = (undefined4*)( *plVar4 + uVar18 * 0x38 );
            if (puVar17 != (undefined4*)0x0) {
               if (*(char*)( puVar17 + 0xc ) == '\0') goto LAB_0010952b;
               uVar22 = *(long*)( lVar15 + 0x658 ) * 0x3ffff - 1;
               uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
               uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
               uVar22 = uVar22 >> 0x16 ^ uVar22;
               uVar18 = uVar22 & 0xffffffff;
               if ((int)uVar22 == 0) {
                  uVar18 = 1;
               }

               uVar26 = 0;
               uVar22 = uVar18 % uVar21;
               uVar27 = *(uint*)( lVar14 + uVar22 * 4 );
               if (uVar27 == 0) goto LAB_0010a500;
               goto LAB_00109503;
            }

         }

         LAB_0010a660:local_19b8 = (char*)0x0;
         local_19b0 = 0;
         local_19a8 = 0;
         local_19a0 = 0;
         local_1998 = 0;
         local_1990 = 0;
         local_1988 = 0;
         ShaderGLES3::_compile_specialization((Specialization*)pVVar1, (uint)(Specialization*)&local_19b8, (Version*)0x0, uVar22);
         if (*(int*)( uVar22 + 0x68 ) == 0) {
            LAB_0010a566:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, 0, 0, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar9 = (code*)invalidInstructionException();
            ( *pcVar9 )();
         }

         OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>::insert(*(OAHashMap<unsigned_long,ShaderGLES3::Version::Specialization,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>>**)( uVar22 + 0x70 ), &local_19c0, (Specialization*)&local_19b8);
         if (*(int*)( uVar22 + 0x68 ) == 0) goto LAB_0010a566;
         plVar4 = *(long**)( uVar22 + 0x70 );
         uVar25 = *(uint*)( plVar4 + 3 );
         uVar22 = uVar30 % (ulong)uVar25;
         uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
         if (uVar27 != 0) {
            uVar26 = 0;
            LAB_0010a771:if (( uVar27 != (uint)uVar30 ) || ( uVar12 != *(ulong*)( plVar4[1] + uVar22 * 8 ) )) goto LAB_0010a738;
            puVar17 = (undefined4*)( *plVar4 + uVar22 * 0x38 );
            if (*(char*)( lVar15 + 0x5e8 ) != '\0') {
               ShaderGLES3::_save_to_cache(pVVar1);
            }

            ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_19b8);
            LAB_00109522:if (puVar17 != (undefined4*)0x0) {
               LAB_0010952b:if (*(char*)( (long)puVar17 + 0x31 ) != '\0') {
                  ( *_glad_glUseProgram )(*puVar17);
                  *(undefined4**)( lVar15 + 0x670 ) = puVar17;
                  pcVar9 = _glad_glUniform1f;
                  if (*(int*)( lVar15 + 0x618 ) < 2) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 1, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                     goto LAB_001097b4;
                  }

                  if (uVar19 < *(uint*)( lVar15 + 0x59c )) {
                     lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                     if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                        if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_0010ab0a;
                     }

                     if (*(int*)( lVar14 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_001097b4;
                     }

                     plVar4 = *(long**)( lVar14 + 0x70 );
                     uVar25 = *(uint*)( plVar4 + 3 );
                     uVar22 = uVar16 * 0x3ffff - 1;
                     uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
                     uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
                     uVar22 = uVar22 >> 0x16 ^ uVar22;
                     uVar18 = uVar22 & 0xffffffff;
                     if ((int)uVar22 == 0) {
                        uVar18 = 1;
                     }

                     uVar22 = uVar18 % (ulong)uVar25;
                     uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                     if (uVar27 == 0) {
                        LAB_0010ad30:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                     }
 else {
                        uVar26 = 0;
                        while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                           uVar26 = uVar26 + 1;
                           uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                           uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                           if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010ad30;
                        }
;
                        lVar14 = *plVar4 + uVar22 * 0x38;
                        if (lVar14 == 0) goto LAB_0010ad30;
                        if (*(int*)( lVar14 + 0x10 ) < 2) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 1, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < *(int*)( *(long*)( lVar14 + 0x18 ) + 4 )) {
                           lVar14 = (long)*(int*)( lVar15 + 0x618 );
                           if (*(int*)( lVar15 + 0x618 ) < 2) {
                              lVar31 = 1;
                              iVar13 = 0xe4;
                              pcVar28 = "p_which";
                              pcVar37 = "uniform_count";
                              LAB_0010af5b:_err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", iVar13, lVar31, lVar14, pcVar28, pcVar37, "", false, false);
                              LAB_0010af78:uVar23 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( lVar15 + 0x59c ) <= uVar19) {
                                 LAB_0010afcd:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                 goto LAB_0010af78;
                              }

                              lVar31 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                              if (iVar29 != *(int*)( lVar31 + 0x78 )) {
                                 if (*(int*)( lVar31 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_0010afcd;
                              }

                              lVar14 = (long)*(int*)( lVar31 + 0x68 );
                              if (*(int*)( lVar31 + 0x68 ) < 1) {
                                 lVar31 = 0;
                                 iVar13 = 0xe7;
                                 pcVar28 = "p_variant";
                                 pcVar37 = "int(version->variants.size())";
                                 goto LAB_0010af5b;
                              }

                              plVar4 = *(long**)( lVar31 + 0x70 );
                              uVar25 = *(uint*)( plVar4 + 3 );
                              uVar22 = uVar18 % (ulong)uVar25;
                              uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                              if (uVar27 == 0) {
                                 LAB_0010b270:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 goto LAB_0010af78;
                              }

                              uVar26 = 0;
                              while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                                 uVar26 = uVar26 + 1;
                                 uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                                 uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                                 if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010b270;
                              }
;
                              lVar31 = *plVar4 + uVar22 * 0x38;
                              if (lVar31 == 0) goto LAB_0010b270;
                              lVar14 = (long)*(int*)( lVar31 + 0x10 );
                              if (*(int*)( lVar31 + 0x10 ) < 2) {
                                 lVar31 = 1;
                                 iVar13 = 0xea;
                                 pcVar28 = "p_which";
                                 pcVar37 = "int(spec->uniform_location.size())";
                                 goto LAB_0010af5b;
                              }

                              uVar23 = *(undefined4*)( *(long*)( lVar31 + 0x18 ) + 4 );
                           }

                           ( *pcVar9 )(uVar23);
                        }

                     }

                  }
 else {
                     LAB_0010ab0a:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                  }

                  LAB_001097b4:pcVar9 = _glad_glUniform1i;
                  PVar6 = param_1[0x15c];
                  if (*(int*)( lVar15 + 0x618 ) < 3) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                     goto LAB_00109a2c;
                  }

                  if (uVar19 < *(uint*)( lVar15 + 0x59c )) {
                     lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                     if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                        if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_0010aa36;
                     }

                     if (*(int*)( lVar14 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_00109a2c;
                     }

                     plVar4 = *(long**)( lVar14 + 0x70 );
                     uVar25 = *(uint*)( plVar4 + 3 );
                     uVar22 = uVar16 * 0x3ffff - 1;
                     uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
                     uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
                     uVar22 = uVar22 >> 0x16 ^ uVar22;
                     uVar18 = uVar22 & 0xffffffff;
                     if ((int)uVar22 == 0) {
                        uVar18 = 1;
                     }

                     uVar22 = uVar18 % (ulong)uVar25;
                     uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                     if (uVar27 == 0) {
                        LAB_0010acd0:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                     }
 else {
                        uVar26 = 0;
                        while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                           uVar26 = uVar26 + 1;
                           uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                           uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                           if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010acd0;
                        }
;
                        lVar14 = *plVar4 + uVar22 * 0x38;
                        if (lVar14 == 0) goto LAB_0010acd0;
                        if (*(int*)( lVar14 + 0x10 ) < 3) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < *(int*)( *(long*)( lVar14 + 0x18 ) + 8 )) {
                           if (*(int*)( lVar15 + 0x618 ) < 3) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 2, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                              LAB_0010af26:uVar23 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( lVar15 + 0x59c ) <= uVar19) {
                                 LAB_0010b135:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                 goto LAB_0010af26;
                              }

                              lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                              if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                                 if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_0010b135;
                              }

                              if (*(int*)( lVar14 + 0x68 ) < 1) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_0010af26;
                              }

                              plVar4 = *(long**)( lVar14 + 0x70 );
                              uVar25 = *(uint*)( plVar4 + 3 );
                              uVar22 = uVar18 % (ulong)uVar25;
                              uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                              if (uVar27 == 0) {
                                 LAB_0010b2d0:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 goto LAB_0010af26;
                              }

                              uVar26 = 0;
                              while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                                 uVar26 = uVar26 + 1;
                                 uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                                 uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                                 if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010b2d0;
                              }
;
                              lVar14 = *plVar4 + uVar22 * 0x38;
                              if (lVar14 == 0) goto LAB_0010b2d0;
                              if (*(int*)( lVar14 + 0x10 ) < 3) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 2, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                 goto LAB_0010af26;
                              }

                              uVar23 = *(undefined4*)( *(long*)( lVar14 + 0x18 ) + 8 );
                           }

                           ( *pcVar9 )(uVar23, PVar6);
                        }

                     }

                  }
 else {
                     LAB_0010aa36:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                  }

                  LAB_00109a2c:pcVar9 = _glad_glUniform1ui;
                  uVar23 = *(undefined4*)( param_1 + 0x18 );
                  if (*(int*)( lVar15 + 0x618 ) < 4) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                     goto LAB_00109c9b;
                  }

                  if (uVar19 < *(uint*)( lVar15 + 0x59c )) {
                     lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                     if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                        if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_0010ab75;
                     }

                     if (*(int*)( lVar14 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_00109c9b;
                     }

                     plVar4 = *(long**)( lVar14 + 0x70 );
                     uVar25 = *(uint*)( plVar4 + 3 );
                     uVar22 = uVar16 * 0x3ffff - 1;
                     uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
                     uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
                     uVar22 = uVar22 >> 0x16 ^ uVar22;
                     uVar18 = uVar22 & 0xffffffff;
                     if ((int)uVar22 == 0) {
                        uVar18 = 1;
                     }

                     uVar22 = uVar18 % (ulong)uVar25;
                     uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                     if (uVar27 == 0) {
                        LAB_0010aca0:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                     }
 else {
                        uVar26 = 0;
                        while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                           uVar26 = uVar26 + 1;
                           uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                           uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                           if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010aca0;
                        }
;
                        lVar14 = *plVar4 + uVar22 * 0x38;
                        if (lVar14 == 0) goto LAB_0010aca0;
                        if (*(int*)( lVar14 + 0x10 ) < 4) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < *(int*)( *(long*)( lVar14 + 0x18 ) + 0xc )) {
                           if (*(int*)( lVar15 + 0x618 ) < 4) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 3, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                              LAB_0010aee0:uVar24 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( lVar15 + 0x59c ) <= uVar19) {
                                 LAB_0010b0cb:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                                 goto LAB_0010aee0;
                              }

                              lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                              if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                                 if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_0010b0cb;
                              }

                              if (*(int*)( lVar14 + 0x68 ) < 1) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_0010aee0;
                              }

                              plVar4 = *(long**)( lVar14 + 0x70 );
                              uVar25 = *(uint*)( plVar4 + 3 );
                              uVar22 = uVar18 % (ulong)uVar25;
                              uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                              if (uVar27 == 0) {
                                 LAB_0010b2a6:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0);
                                 goto LAB_0010aee0;
                              }

                              uVar26 = 0;
                              while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                                 uVar26 = uVar26 + 1;
                                 uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                                 uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                                 if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010b2a6;
                              }
;
                              lVar14 = *plVar4 + uVar22 * 0x38;
                              if (lVar14 == 0) goto LAB_0010b2a6;
                              if (*(int*)( lVar14 + 0x10 ) < 4) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 3, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                 goto LAB_0010aee0;
                              }

                              uVar24 = *(undefined4*)( *(long*)( lVar14 + 0x18 ) + 0xc );
                           }

                           ( *pcVar9 )(uVar24, uVar23);
                        }

                     }

                  }
 else {
                     LAB_0010ab75:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0);
                  }

                  LAB_00109c9b:pcVar9 = _glad_glUniform1i;
                  PVar6 = param_1[0x14d];
                  if (*(int*)( lVar15 + 0x618 ) < 5) {
                     _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                     goto LAB_00109f08;
                  }

                  if (uVar19 < *(uint*)( lVar15 + 0x59c )) {
                     lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                     if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                        if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                        goto LAB_0010aa9f;
                     }

                     if (*(int*)( lVar14 + 0x68 ) < 1) {
                        _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                        goto LAB_00109f08;
                     }

                     plVar4 = *(long**)( lVar14 + 0x70 );
                     uVar25 = *(uint*)( plVar4 + 3 );
                     uVar22 = uVar16 * 0x3ffff - 1;
                     uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
                     uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
                     uVar22 = uVar22 >> 0x16 ^ uVar22;
                     uVar18 = uVar22 & 0xffffffff;
                     if ((int)uVar22 == 0) {
                        uVar18 = 1;
                     }

                     uVar22 = uVar18 % (ulong)uVar25;
                     uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                     if (uVar27 == 0) {
                        LAB_0010ad00:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                     }
 else {
                        uVar26 = 0;
                        while (( uVar27 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar22 * 8 ) ) )) {
                           uVar26 = uVar26 + 1;
                           uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
                           uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
                           if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010ad00;
                        }
;
                        lVar14 = *plVar4 + uVar22 * 0x38;
                        if (lVar14 == 0) goto LAB_0010ad00;
                        if (*(int*)( lVar14 + 0x10 ) < 5) {
                           _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                        }
 else if (-1 < *(int*)( *(long*)( lVar14 + 0x18 ) + 0x10 )) {
                           if (*(int*)( lVar15 + 0x618 ) < 5) {
                              _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe4, 4, (long)*(int*)( lVar15 + 0x618 ), "p_which", "uniform_count", "", false, false);
                              LAB_0010ae9a:uVar23 = 0xffffffff;
                           }
 else {
                              if (*(uint*)( lVar15 + 0x59c ) <= uVar19) {
                                 LAB_0010b060:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                                 goto LAB_0010ae9a;
                              }

                              lVar14 = ( ( uVar20 & 0xffffffff ) % ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 0x80 + *(long*)( *(long*)( lVar15 + 0x588 ) + ( ( uVar20 & 0xffffffff ) / ( ulong ) * (uint*)( lVar15 + 0x598 ) ) * 8 );
                              if (iVar29 != *(int*)( lVar14 + 0x78 )) {
                                 if (*(int*)( lVar14 + 0x78 ) + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                                 goto LAB_0010b060;
                              }

                              if (*(int*)( lVar14 + 0x68 ) < 1) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe7, 0, (long)*(int*)( lVar14 + 0x68 ), "p_variant", "int(version->variants.size())", "", false, false);
                                 goto LAB_0010ae9a;
                              }

                              plVar4 = *(long**)( lVar14 + 0x70 );
                              uVar19 = *(uint*)( plVar4 + 3 );
                              uVar20 = uVar18 % (ulong)uVar19;
                              uVar25 = *(uint*)( plVar4[2] + uVar20 * 4 );
                              if (uVar25 == 0) {
                                 LAB_0010b246:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe9, "Parameter \"spec\" is null.", 0, 0);
                                 goto LAB_0010ae9a;
                              }

                              uVar27 = 0;
                              while (( uVar25 != (uint)uVar18 || ( uVar16 != *(ulong*)( plVar4[1] + uVar20 * 8 ) ) )) {
                                 uVar27 = uVar27 + 1;
                                 uVar20 = ( ulong )((int)uVar20 + 1) % (ulong)uVar19;
                                 uVar25 = *(uint*)( plVar4[2] + uVar20 * 4 );
                                 if (( uVar25 == 0 ) || ( ( ( uVar19 + (int)uVar20 ) - uVar25 % uVar19 ) % uVar19 < uVar27 )) goto LAB_0010b246;
                              }
;
                              lVar14 = *plVar4 + uVar20 * 0x38;
                              if (lVar14 == 0) goto LAB_0010b246;
                              if (*(int*)( lVar14 + 0x10 ) < 5) {
                                 _err_print_index_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xea, 4, (long)*(int*)( lVar14 + 0x10 ), "p_which", "int(spec->uniform_location.size())", "", false, false);
                                 goto LAB_0010ae9a;
                              }

                              uVar23 = *(undefined4*)( *(long*)( lVar14 + 0x18 ) + 0x10 );
                           }

                           ( *pcVar9 )(uVar23, PVar6);
                        }

                     }

                  }
 else {
                     LAB_0010aa9f:_err_print_error("_version_get_uniform", "./drivers/gles3/shader_gles3.h", 0xe6, "Parameter \"version\" is null.", 0, 0);
                  }

                  LAB_00109f08:param_1[0x15c] = (Particles)0x0;
                  param_1[0x59] = *(Particles*)( local_1a48[0x10] + 0xb0 );
                  ( *_glad_glBindVertexArray )(*(undefined4*)( param_1 + 0xc0 ));
                  ( *_glad_glBindBufferBase )(0x8c8e, 0, *(undefined4*)( param_1 + 0xb8 ));
                  ( *_glad_glBeginTransformFeedback )(0);
                  ( *_glad_glDrawArrays )(0, 0, *(undefined4*)( param_1 + 0x18 ));
                  ( *_glad_glEndTransformFeedback )();
                  ( *_glad_glBindBufferBase )(0x8c8e, 0, 0);
                  ( *_glad_glBindVertexArray )(0);
                  uVar8 = *(undefined8*)( param_1 + 0xc0 );
                  *(undefined8*)( param_1 + 0xc0 ) = *(undefined8*)( param_1 + 0xb4 );
                  *(undefined8*)( param_1 + 0xb4 ) = uVar8;
                  goto LAB_00109f92;
               }

            }

            goto LAB_0010a500;
         }

         LAB_0010a4e1:if (*(char*)( lVar15 + 0x5e8 ) == '\0') {
            ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_19b8);
         }
 else {
            ShaderGLES3::_save_to_cache(pVVar1);
            ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_19b8);
         }

         goto LAB_0010a500;
      }

      if (iVar29 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xbe, "Parameter \"version\" is null.", 0, 0);
   goto LAB_00109f92;
   LAB_0010a738:uVar26 = uVar26 + 1;
   uVar22 = ( ulong )((int)uVar22 + 1) % (ulong)uVar25;
   uVar27 = *(uint*)( plVar4[2] + uVar22 * 4 );
   if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) goto LAB_0010a4e1;
   goto LAB_0010a771;
   while (true) {
      uVar26 = uVar26 + 1;
      uVar22 = ( ulong )((int)uVar22 + 1) % uVar21;
      uVar27 = *(uint*)( lVar14 + uVar22 * 4 );
      if (( uVar27 == 0 ) || ( ( ( uVar25 + (int)uVar22 ) - uVar27 % uVar25 ) % uVar25 < uVar26 )) break;
      LAB_00109503:if (( uVar27 == (uint)uVar18 ) && ( *(long*)( lVar15 + 0x658 ) == *(long*)( plVar4[1] + uVar22 * 8 ) )) {
         puVar17 = (undefined4*)( *plVar4 + uVar22 * 0x38 );
         goto LAB_00109522;
      }

   }
;
   LAB_0010a500:if (ShaderGLES3::_version_bind_shader(RID, ,int, unsigned_long) != '\0') {
      _err_print_error("_version_bind_shader", "./drivers/gles3/shader_gles3.h", 0xda, "shader failed to compile, unable to bind shader.", 0, 1);
      ShaderGLES3::_version_bind_shader(RID,int,unsigned_long)::first_print =
      '\0';
   }

   LAB_00109f92:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::particles_collision_free(RID) */void GLES3::ParticlesStorage::particles_collision_free(ParticlesStorage *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>> *this_00;
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   code *pcVar10;
   int iVar11;
   uint uVar12;
   uint uVar13;
   uint *puVar14;
   uint uVar15;
   int iVar16;
   ulong uVar17;
   long lVar18;
   long lVar19;
   long lVar20;
   ulong uVar21;
   uint uVar22;
   uint uVar23;
   long in_FS_OFFSET;
   uint local_44;
   long local_40;
   lVar19 = Utilities::singleton;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      uVar15 = (uint)param_2;
      if (uVar15 < *(uint*)( this + 0x1dc )) {
         uVar1 = ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 );
         lVar20 = *(long*)( *(long*)( this + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + uVar1 * 0x78;
         iVar16 = (int)( param_2 >> 0x20 );
         if (*(int*)( lVar20 + 0x70 ) == iVar16) {
            uVar12 = *(uint*)( lVar20 + 0x28 );
            if (uVar12 != 0) {
               this_00 = (HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( Utilities::singleton + 200 );
               local_44 = uVar12;
               if (( *(long*)( Utilities::singleton + 0xd0 ) != 0 ) && ( *(int*)( Utilities::singleton + 0xf4 ) != 0 )) {
                  uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 8 );
                  uVar13 = ( uVar12 >> 0x10 ^ uVar12 ) * -0x7a143595;
                  uVar13 = ( uVar13 ^ uVar13 >> 0xd ) * -0x3d4d51cb;
                  uVar23 = uVar13 ^ uVar13 >> 0x10;
                  if (uVar13 == uVar13 >> 0x10) {
                     uVar23 = 1;
                     uVar17 = uVar1;
                  }
 else {
                     uVar17 = uVar23 * uVar1;
                  }

                  uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ));
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar21;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar17;
                  lVar18 = SUB168(auVar2 * auVar6, 8);
                  iVar11 = SUB164(auVar2 * auVar6, 8);
                  uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar18 * 4 );
                  if (uVar13 != 0) {
                     uVar22 = 0;
                     do {
                        if (( uVar13 == uVar23 ) && ( uVar12 == *(uint*)( *(long*)( *(long*)( Utilities::singleton + 0xd0 ) + lVar18 * 8 ) + 0x10 ) )) {
                           ( *_glad_glDeleteTextures )(1, &local_44);
                           puVar14 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator [](this_00, &local_44);
                           *(long*)( lVar19 + 0x108 ) = *(long*)( lVar19 + 0x108 ) - ( ulong ) * puVar14;
                           HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::erase(this_00, &local_44);
                           goto LAB_0010b704;
                        }

                        uVar22 = uVar22 + 1;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = ( iVar11 + 1 ) * uVar1;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar21;
                        lVar18 = SUB168(auVar3 * auVar7, 8);
                        uVar13 = *(uint*)( *(long*)( Utilities::singleton + 0xd8 ) + lVar18 * 4 );
                        iVar11 = SUB164(auVar3 * auVar7, 8);
                     }
 while ( ( uVar13 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar13 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar21,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( Utilities::singleton + 0xf0 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar21,uVar22 <= SUB164(auVar5 * auVar9, 8) );
                  }

               }

               _err_print_error("texture_free_data", "drivers/gles3/storage/utilities.h", 0x90, "Condition \"!texture_allocs_cache.has(p_id)\" is true.", 0, 0);
               LAB_0010b704:*(undefined4*)( lVar20 + 0x28 ) = 0;
               ( *_glad_glDeleteFramebuffers )(1, lVar20 + 0x2c);
               *(undefined4*)( lVar20 + 0x2c ) = 0;
            }

            Dependency::deleted_notify((RID*)( lVar20 + 0x40 ));
            __mutex = (pthread_mutex_t*)( this + 0x1f0 );
            iVar11 = pthread_mutex_lock(__mutex);
            if (iVar11 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar11);
            }

            if (uVar15 < *(uint*)( this + 0x1dc )) {
               uVar1 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d8 );
               lVar19 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 0x78;
               lVar20 = *(long*)( *(long*)( this + 0x1c8 ) + uVar1 * 8 ) + lVar19;
               iVar11 = *(int*)( lVar20 + 0x70 );
               if (iVar11 < 0) {
                  pthread_mutex_unlock(__mutex);
                  _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
               }
 else if (iVar16 == iVar11) {
                  Dependency::~Dependency((Dependency*)( lVar20 + 0x40 ));
                  lVar20 = *(long*)( this + 0x1d0 );
                  *(undefined4*)( *(long*)( *(long*)( this + 0x1c8 ) + uVar1 * 8 ) + 0x70 + lVar19 ) = 0xffffffff;
                  uVar12 = *(int*)( this + 0x1e0 ) - 1;
                  *(uint*)( this + 0x1e0 ) = uVar12;
                  *(uint*)( *(long*)( lVar20 + ( (ulong)uVar12 / ( ulong ) * (uint*)( this + 0x1d8 ) ) * 8 ) + ( (ulong)uVar12 % ( ulong ) * (uint*)( this + 0x1d8 ) ) * 4 ) = uVar15;
                  pthread_mutex_unlock(__mutex);
               }
 else {
                  pthread_mutex_unlock(__mutex);
                  _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
               }

            }
 else {
               pthread_mutex_unlock(__mutex);
               _err_print_error(&_LC10, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
            }

            if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         if (*(int*)( lVar20 + 0x70 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar1 * 0xf);
         }

      }

   }

   /* WARNING: Does not return */
   pcVar10 = (code*)invalidInstructionException();
   ( *pcVar10 )();
}
/* GLES3::ParticlesStorage::particles_add_collision(RID, RID) */void GLES3::ParticlesStorage::particles_add_collision(long param_1, ulong param_2) {
   int iVar1;
   long in_FS_OFFSET;
   RID local_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x184 ) )) {
      iVar1 = *(int*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x180 ) ) * 0x210 + *(long*)( *(long*)( param_1 + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x180 ) ) * 8 ) + 0x208 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_28);
         goto LAB_0010b8a8;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("particles_add_collision", "drivers/gles3/storage/particles_storage.cpp", 0x1ec, "Parameter \"particles\" is null.", 0, 0);
   LAB_0010b8a8:if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::~ParticlesStorage() */void GLES3::ParticlesStorage::~ParticlesStorage(ParticlesStorage *this) {
   long lVar1;
   uint uVar2;
   uint uVar3;
   char *pcVar4;
   long *plVar5;
   ulong uVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__ParticlesStorage_00114390;
   singleton = 0;
   plVar5 = (long*)GLES3::MaterialStorage::get_singleton();
   ( **(code**)( *plVar5 + 0xd8 ) )(plVar5, *(undefined8*)( this + 0x10 ));
   ( **(code**)( *plVar5 + 0x80 ) )(plVar5, *(undefined8*)( this + 8 ));
   ShaderGLES3::version_free((ShaderGLES3*)( this + 0x20 ), *(undefined8*)( this + 0x150 ));
   uVar2 = *(uint*)( this + 0x238 );
   *(undefined***)( this + 0x218 ) = &PTR__RID_Alloc_00114370;
   if (uVar2 != 0) {
      local_60 = 0;
      local_50 = 0x3b;
      local_58 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_60);
      vformat<unsigned_int,char_const*>((String_conflict*)&local_58, (uint)(StrRange*)&local_60, (char*)(ulong)uVar2);
      print_error((String_conflict*)&local_58);
      pcVar4 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar5 = (long*)( local_58 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar7 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar5 = (long*)( local_60 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }

   uVar2 = *(uint*)( this + 0x234 );
   uVar3 = *(uint*)( this + 0x230 );
   lVar7 = 0;
   if (uVar3 <= uVar2) {
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x220 ) + lVar7 * 8 ), false);
         lVar1 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x228 ) + lVar1 ), false);
      }
 while ( (uint)lVar7 < uVar2 / uVar3 );
   }

   if (*(void**)( this + 0x220 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x220 ), false);
      Memory::free_static(*(void**)( this + 0x228 ), false);
   }

   *(undefined***)( this + 0x1c0 ) = &PTR__RID_Alloc_00114350;
   uVar2 = *(uint*)( this + 0x1e0 );
   if (uVar2 == 0) {
      uVar6 = ( ulong ) * (uint*)( this + 0x1dc );
      uVar9 = ( ulong ) * (uint*)( this + 0x1d8 );
      puVar10 = *(undefined8**)( this + 0x1c8 );
      LAB_0010bbfb:if ((uint)uVar6 < (uint)uVar9) goto LAB_0010bc44;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar10[lVar7], false);
         lVar1 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x1d0 ) + lVar1 ), false);
         if (( uint )(uVar6 / uVar9) <= (uint)lVar7) break;
         puVar10 = *(undefined8**)( this + 0x1c8 );
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
         plVar5 = (long*)( local_58 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar4 + -0x10, false);
         }

      }

      lVar7 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar5 = (long*)( local_60 + -0x10 );
         *plVar5 = *plVar5 + -1;
         UNLOCK();
         if (*plVar5 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar9 = ( ulong ) * (uint*)( this + 0x1d8 );
      puVar10 = *(undefined8**)( this + 0x1c8 );
      if (*(int*)( this + 0x1dc ) != 0) {
         uVar8 = 0;
         do {
            lVar7 = puVar10[uVar8 / uVar9] + ( uVar8 % uVar9 ) * 0x78;
            if (-1 < *(int*)( lVar7 + 0x70 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x40 ));
               uVar9 = ( ulong ) * (uint*)( this + 0x1d8 );
               puVar10 = *(undefined8**)( this + 0x1c8 );
            }

            uVar6 = ( ulong ) * (uint*)( this + 0x1dc );
            uVar8 = uVar8 + 1;
         }
 while ( uVar8 < uVar6 );
         goto LAB_0010bbfb;
      }

      if (*(uint*)( this + 0x1d8 ) != 0) goto LAB_0010bc44;
      Memory::free_static((void*)*puVar10, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x1d0 ), false);
   }

   puVar10 = *(undefined8**)( this + 0x1c8 );
   LAB_0010bc44:if (puVar10 != (undefined8*)0x0) {
      Memory::free_static(puVar10, false);
      Memory::free_static(*(void**)( this + 0x1d0 ), false);
   }

   RID_Alloc<GLES3::ParticlesStorage::Particles,true>::~RID_Alloc((RID_Alloc<GLES3::ParticlesStorage::Particles,true>*)( this + 0x168 ));
   *(undefined***)( this + 0x20 ) = &PTR__init_00114308;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      ShaderGLES3::~ShaderGLES3((ShaderGLES3*)( this + 0x20 ));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::~ParticlesStorage() */void GLES3::ParticlesStorage::~ParticlesStorage(ParticlesStorage *this) {
   ~ParticlesStorage(this)
   ;;
   operator_delete(this, 0x270);
   return;
}
/* GLES3::ParticlesStorage::particles_allocate() */void GLES3::ParticlesStorage::particles_allocate(ParticlesStorage *this) {
   RID_Alloc<GLES3::ParticlesStorage::Particles,true>::allocate_rid((RID_Alloc<GLES3::ParticlesStorage::Particles,true>*)( this + 0x168 ));
   return;
}
/* GLES3::ParticlesStorage::particles_initialize(RID) */void GLES3::ParticlesStorage::particles_initialize(long param_1) {
   RID_Alloc<GLES3::ParticlesStorage::Particles,true>::initialize_rid((RID_Alloc<GLES3::ParticlesStorage::Particles,true>*)( param_1 + 0x168 ));
   return;
}
/* GLES3::ParticlesStorage::particles_collision_allocate() */void GLES3::ParticlesStorage::particles_collision_allocate(ParticlesStorage *this) {
   RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::allocate_rid((RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>*)( this + 0x1c0 ));
   return;
}
/* GLES3::ParticlesStorage::particles_collision_instance_create(RID) */void GLES3::ParticlesStorage::particles_collision_instance_create(ParticlesStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined1 local_50[16];
   undefined1 local_40[16];
   undefined4 local_30;
   undefined8 local_2c;
   undefined4 local_24;
   undefined1 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0x3f800000;
   local_2c = 0;
   local_24 = 0;
   local_20 = 0;
   local_50 = ZEXT416(_LC156);
   local_40 = ZEXT416(_LC156);
   local_58 = param_2;
   RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false>::make_rid((RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false>*)( this + 0x218 ), (ParticlesCollisionInstance*)&local_58);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::ParticlesStorage::particles_set_draw_passes(RID, int) */void GLES3::ParticlesStorage::particles_set_draw_passes(ParticlesStorage *this, ulong param_2, int param_3) {
   long *plVar1;
   CowData<RID> *this_00;
   code *pcVar2;
   int iVar3;
   ulong uVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   char *pcVar12;
   char *pcVar13;
   long lVar14;
   undefined8 *puVar15;
   if (param_2 != 0) {
      lVar9 = (long)param_3;
      if ((uint)param_2 < *(uint*)( this + 0x184 )) {
         lVar10 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 );
         if (*(int*)( lVar10 + 0x208 ) == (int)( param_2 >> 0x20 )) {
            this_00 = (CowData<RID>*)( lVar10 + 0xa8 );
            if (-1 < lVar9) {
               lVar11 = *(long*)( lVar10 + 0xa8 );
               if (lVar11 == 0) {
                  if (lVar9 == 0) {
                     return;
                  }

                  lVar14 = 0;
                  CowData<RID>::_copy_on_write(this_00);
                  LAB_0010bff8:uVar4 = lVar9 * 8 - 1;
                  uVar4 = uVar4 | uVar4 >> 1;
                  uVar4 = uVar4 | uVar4 >> 2;
                  uVar4 = uVar4 | uVar4 >> 4;
                  uVar4 = uVar4 | uVar4 >> 8;
                  uVar4 = uVar4 | uVar4 >> 0x10;
                  lVar11 = ( uVar4 >> 0x20 | uVar4 ) + 1;
                  if (lVar14 < lVar9) {
                     LAB_0010c060:if (lVar14 != 0) {
                        iVar3 = CowData<RID>::_realloc(this_00, lVar11);
                        if (iVar3 != 0) {
                           return;
                        }

                        LAB_0010bf61:puVar15 = *(undefined8**)( lVar10 + 0xa8 );
                        if (puVar15 == (undefined8*)0x0) {
                           /* WARNING: Does not return */
                           pcVar2 = (code*)invalidInstructionException();
                           ( *pcVar2 )();
                        }

                        lVar10 = puVar15[-1];
                        LAB_0010bf75:if (lVar10 < lVar9) {
                           memset(puVar15 + lVar10, 0, ( lVar9 - lVar10 ) * 8);
                        }

                        puVar15[-1] = lVar9;
                        return;
                     }

                     puVar6 = (undefined8*)Memory::alloc_static(lVar11 + 0x10, false);
                     if (puVar6 != (undefined8*)0x0) {
                        puVar15 = puVar6 + 2;
                        *puVar6 = 1;
                        puVar6[1] = 0;
                        *(undefined8**)( lVar10 + 0xa8 ) = puVar15;
                        lVar10 = 0;
                        goto LAB_0010bf75;
                     }

                     uVar8 = 0x171;
                     pcVar7 = "Parameter \"mem_new\" is null.";
                     goto LAB_0010c0f2;
                  }

               }
 else {
                  lVar14 = *(long*)( lVar11 + -8 );
                  if (lVar9 == lVar14) {
                     return;
                  }

                  if (lVar9 == 0) {
                     LOCK();
                     plVar1 = (long*)( lVar11 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 != 0) {
                        *(undefined8*)( lVar10 + 0xa8 ) = 0;
                        return;
                     }

                     lVar9 = *(long*)( lVar10 + 0xa8 );
                     *(undefined8*)( lVar10 + 0xa8 ) = 0;
                     Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     return;
                  }

                  CowData<RID>::_copy_on_write(this_00);
                  uVar4 = lVar9 * 8 - 1;
                  uVar4 = uVar4 >> 1 | uVar4;
                  uVar4 = uVar4 >> 2 | uVar4;
                  uVar4 = uVar4 >> 4 | uVar4;
                  uVar4 = uVar4 >> 8 | uVar4;
                  uVar4 = uVar4 >> 0x10 | uVar4;
                  uVar4 = uVar4 >> 0x20 | uVar4;
                  lVar11 = uVar4 + 1;
                  if (lVar14 * 8 == 0) goto LAB_0010bff8;
                  uVar5 = lVar14 * 8 - 1;
                  uVar5 = uVar5 | uVar5 >> 1;
                  uVar5 = uVar5 | uVar5 >> 2;
                  uVar5 = uVar5 | uVar5 >> 4;
                  uVar5 = uVar5 | uVar5 >> 8;
                  uVar5 = uVar5 | uVar5 >> 0x10;
                  uVar5 = uVar5 | uVar5 >> 0x20;
                  if (lVar14 < lVar9) {
                     if (uVar4 != uVar5) goto LAB_0010c060;
                     goto LAB_0010bf61;
                  }

                  if (uVar4 == uVar5) goto LAB_0010bfc5;
               }

               iVar3 = CowData<RID>::_realloc(this_00, lVar11);
               if (iVar3 != 0) {
                  return;
               }

               LAB_0010bfc5:if (*(long*)( lVar10 + 0xa8 ) != 0) {
                  *(long*)( *(long*)( lVar10 + 0xa8 ) + -8 ) = lVar9;
                  return;
               }

               FUN_0010f336();
               return;
            }

            uVar8 = 0x157;
            pcVar7 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
            LAB_0010c0f2:pcVar12 = "./core/templates/cowdata.h";
            pcVar13 = "resize";
            goto LAB_0010c0d0;
         }

         if (*(int*)( lVar10 + 0x208 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   pcVar7 = "Parameter \"particles\" is null.";
   uVar8 = 0x15f;
   pcVar12 = "drivers/gles3/storage/particles_storage.cpp";
   pcVar13 = "particles_set_draw_passes";
   LAB_0010c0d0:_err_print_error(pcVar13, pcVar12, uVar8, pcVar7, 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::_particles_update_buffers(GLES3::ParticlesStorage::Particles*) */void GLES3::ParticlesStorage::_particles_update_buffers(ParticlesStorage *this, Particles *param_1) {
   int iVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   uint *puVar5;
   uint uVar6;
   ulong uVar7;
   ulong uVar8;
   long *plVar9;
   int iVar10;
   uint uVar11;
   int iVar12;
   undefined8 *__s;
   long in_FS_OFFSET;
   undefined8 *local_88;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = GLES3::MaterialStorage::get_singleton();
   uVar8 = *(ulong*)( param_1 + 0x88 );
   if (( uVar8 == 0 ) || ( *(uint*)( lVar3 + 0x16c ) <= (uint)uVar8 )) {
      LAB_0010c1dd:iVar12 = 0;
   }
 else {
      lVar3 = ( ( uVar8 & 0xffffffff ) % ( ulong ) * (uint*)( lVar3 + 0x168 ) ) * 0xc0 + *(long*)( *(long*)( lVar3 + 0x158 ) + ( ( uVar8 & 0xffffffff ) / ( ulong ) * (uint*)( lVar3 + 0x168 ) ) * 8 );
      if (*(int*)( lVar3 + 0xb8 ) != (int)( uVar8 >> 0x20 )) {
         if (*(int*)( lVar3 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_0010c1dd;
      }

      if (( ( ( *(int*)( lVar3 + 0x18 ) != 2 ) || ( *(long*)( lVar3 + 8 ) == 0 ) ) || ( lVar3 = *(long*)( *(long*)( lVar3 + 8 ) + 0x80 ) * (long*)( lVar3 + 0x78 ) == 0 ) ) || ( *(char*)( lVar3 + 0x70 ) == '\0' )) goto LAB_0010c1dd;
      iVar12 = *(int*)( lVar3 + 0xb8 );
   }

   if (*(int*)( param_1 + 0xf4 ) != iVar12) {
      _particles_free_data(this, param_1);
   }

   iVar1 = *(int*)( param_1 + 0x18 );
   if (( 0 < iVar1 ) && ( *(int*)( param_1 + 0xb8 ) == 0 )) {
      *(int*)( param_1 + 0xf4 ) = iVar12;
      iVar2 = ( -(uint)(*(int *)param_1 == 0) & 0xfffffff0 ) + 0x40;
      uVar6 = iVar1 * iVar2;
      iVar12 = ( iVar12 + 6 ) - ( uint )(*(int*)param_1 == 0);
      __s = (undefined8*)0x0;
      iVar10 = iVar12 * 0x10;
      uVar11 = iVar10 * iVar1;
      uVar8 = (ulong)uVar11;
      *(ulong*)( param_1 + 0xcc ) = CONCAT44(iVar2, uVar6);
      *(ulong*)( param_1 + 0xd4 ) = CONCAT44(iVar10, iVar12);
      if (uVar11 != 0) {
         uVar7 = uVar8 - 1 | uVar8 - 1 >> 1;
         uVar7 = uVar7 | uVar7 >> 2;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         puVar4 = (undefined8*)Memory::alloc_static(( uVar7 | uVar7 >> 0x10 ) + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            uVar6 = *(uint*)( param_1 + 0xcc );
         }
 else {
            __s = puVar4 + 2;
            *puVar4 = 1;
            memset(__s, 0, uVar8);
            puVar4[1] = uVar8;
            uVar6 = *(uint*)( param_1 + 0xcc );
         }

      }

      if (uVar6 == 0) {
         LAB_0010c8b8:local_88 = (undefined8*)0x0;
      }
 else {
         uVar7 = (ulong)uVar6;
         uVar8 = uVar7 - 1 | uVar7 - 1 >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         puVar4 = (undefined8*)Memory::alloc_static(( uVar8 | uVar8 >> 0x10 ) + 0x11, false);
         if (puVar4 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            goto LAB_0010c8b8;
         }

         local_88 = puVar4 + 2;
         *puVar4 = 1;
         memset(local_88, 0, uVar7);
         puVar4[1] = uVar7;
      }

      ( *_glad_glGenVertexArrays )(1, param_1 + 0xb4);
      ( *_glad_glBindVertexArray )(*(undefined4*)( param_1 + 0xb4 ));
      ( *_glad_glGenBuffers )(1, param_1 + 0xb8);
      ( *_glad_glGenBuffers )(1, param_1 + 0xbc);
      ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 0xb8 ));
      lVar3 = Utilities::singleton;
      local_60 = 0;
      local_50 = 0x1e;
      local_58 = "Particles front process buffer";
      String::parse_latin1((StrRange*)&local_60);
      uVar6 = *(int*)( param_1 + 0xd8 ) * iVar1;
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0xb8 ));
      ( *_glad_glBufferData )(0x8892, (ulong)uVar6, __s, 0x88ea);
      plVar9 = (long*)( lVar3 + 0xf8 );
      *plVar9 = *plVar9 + (ulong)uVar6;
      puVar5 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_58);
      lVar3 = local_60;
      *puVar5 = uVar6;
      if (local_60 != 0) {
         LOCK();
         plVar9 = (long*)( local_60 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      uVar8 = 0;
      if (*(int*)( param_1 + 0xd4 ) != 0) {
         do {
            ( *_glad_glEnableVertexAttribArray )(uVar8 & 0xffffffff);
            ( *_glad_glVertexAttribPointer )(uVar8 & 0xffffffff, 4, 0x1406, 0, *(undefined4*)( param_1 + 0xd8 ), uVar8 << 4);
            uVar8 = uVar8 + 1;
         }
 while ( (uint)uVar8 < *(uint*)( param_1 + 0xd4 ) );
      }

      ( *_glad_glBindVertexArray )(0);
      ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 0xbc ));
      lVar3 = Utilities::singleton;
      local_60 = 0;
      local_58 = "Particles front instance buffer";
      local_50 = 0x1f;
      String::parse_latin1((StrRange*)&local_60);
      uVar6 = *(uint*)( param_1 + 0xcc );
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0xbc ));
      ( *_glad_glBufferData )(0x8892, (ulong)uVar6, local_88, 0x88ea);
      plVar9 = (long*)( lVar3 + 0xf8 );
      *plVar9 = *plVar9 + (ulong)uVar6;
      puVar5 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_58);
      lVar3 = local_60;
      *puVar5 = uVar6;
      if (local_60 != 0) {
         LOCK();
         plVar9 = (long*)( local_60 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      ( *_glad_glGenVertexArrays )(1, param_1 + 0xc0);
      ( *_glad_glBindVertexArray )(*(undefined4*)( param_1 + 0xc0 ));
      ( *_glad_glGenBuffers )(1, param_1 + 0xc4);
      ( *_glad_glGenBuffers )(1, param_1 + 200);
      ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 0xc4 ));
      lVar3 = Utilities::singleton;
      local_60 = 0;
      local_58 = "Particles back process buffer";
      local_50 = 0x1d;
      String::parse_latin1((StrRange*)&local_60);
      uVar6 = iVar1 * *(int*)( param_1 + 0xd8 );
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 0xc4 ));
      ( *_glad_glBufferData )(0x8892, (ulong)uVar6, __s, 0x88ea);
      plVar9 = (long*)( lVar3 + 0xf8 );
      *plVar9 = *plVar9 + (ulong)uVar6;
      puVar5 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_58);
      lVar3 = local_60;
      *puVar5 = uVar6;
      if (local_60 != 0) {
         LOCK();
         plVar9 = (long*)( local_60 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      uVar8 = 0;
      if (*(int*)( param_1 + 0xd4 ) != 0) {
         do {
            ( *_glad_glEnableVertexAttribArray )(uVar8 & 0xffffffff);
            ( *_glad_glVertexAttribPointer )(uVar8 & 0xffffffff, 4, 0x1406, 0, *(undefined4*)( param_1 + 0xd8 ), uVar8 << 4);
            uVar8 = uVar8 + 1;
         }
 while ( (uint)uVar8 < *(uint*)( param_1 + 0xd4 ) );
      }

      ( *_glad_glBindVertexArray )(0);
      ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( param_1 + 200 ));
      lVar3 = Utilities::singleton;
      local_58 = "Particles back instance buffer";
      local_60 = 0;
      local_50 = 0x1e;
      String::parse_latin1((StrRange*)&local_60);
      uVar6 = *(uint*)( param_1 + 0xcc );
      local_58 = (char*)CONCAT44(local_58._4_4_, *(undefined4*)( param_1 + 200 ));
      ( *_glad_glBufferData )(0x8892, (ulong)uVar6, local_88, 0x88ea);
      plVar9 = (long*)( lVar3 + 0xf8 );
      *plVar9 = *plVar9 + (ulong)uVar6;
      puVar5 = (uint*)HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>::operator []((HashMap<unsigned_int,GLES3::Utilities::ResourceAllocation,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,GLES3::Utilities::ResourceAllocation>>>*)( lVar3 + 0x68 ), (uint*)&local_58);
      lVar3 = local_60;
      *puVar5 = uVar6;
      if (local_60 != 0) {
         LOCK();
         plVar9 = (long*)( local_60 + -0x10 );
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      ( *_glad_glBindBuffer )(0x8892);
      if (local_88 != (undefined8*)0x0) {
         plVar9 = local_88 + -2;
         LOCK();
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            Memory::free_static(plVar9, false);
         }

      }

      if (__s != (undefined8*)0x0) {
         plVar9 = __s + -2;
         LOCK();
         *plVar9 = *plVar9 + -1;
         UNLOCK();
         if (*plVar9 == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(plVar9, false);
               return;
            }

            goto LAB_0010c948;
         }

      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010c948:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::update_particles() */void GLES3::ParticlesStorage::update_particles(ParticlesStorage *this) {
   long *plVar1;
   float fVar2;
   undefined1 auVar3[16];
   Particles PVar4;
   Particles *pPVar5;
   long lVar6;
   code *pcVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined4 uVar15;
   int iVar16;
   long lVar17;
   undefined8 *puVar18;
   ulong uVar19;
   undefined8 *puVar20;
   undefined1(*pauVar21)[16];
   undefined1(*pauVar22)[16];
   uint uVar23;
   undefined8 *puVar24;
   undefined1(*pauVar25)[16];
   undefined1(*pauVar26)[16];
   int iVar27;
   int iVar28;
   uint uVar29;
   uint uVar30;
   long in_FS_OFFSET;
   double dVar31;
   double dVar32;
   double dVar33;
   undefined4 uVar34;
   double local_88;
   long local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_50;
   undefined4 local_48;
   undefined8 local_40;
   undefined4 local_38;
   long local_30;
   plVar1 = RenderingServerGlobals::utilities;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x158 ) == 0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_0010d2ab:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      local_70 = 0;
      local_60 = 0x13;
      pcVar7 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
      local_68 = "Update GPUParticles";
      String::parse_latin1((StrRange*)&local_70);
      ( *pcVar7 )(plVar1);
      lVar17 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }

      }

   }

   ( *_glad_glEnable )(0x8c89);
   ( *_glad_glBindFramebuffer )(0x8d40, (undefined4)TextureStorage::system_fbo);
   GLES3::MaterialStorage::get_singleton();
   uVar15 = GLES3::MaterialStorage::global_shader_parameters_get_uniform_buffer();
   ( *_glad_glBindBufferBase )(0x8a11, 1, uVar15);
   ( *_glad_glBindBuffer )(0x8a11, 0);
   LAB_0010c9d8:lVar17 = *(long*)( this + 0x158 );
   if (lVar17 != 0) {
      do {
         pPVar5 = *(Particles**)( lVar17 + 8 );
         puVar18 = *(undefined8**)( pPVar5 + 0x100 );
         if (puVar18 != (undefined8*)0x0) {
            lVar17 = *(long*)( pPVar5 + 0x110 );
            if (lVar17 != 0) {
               *(undefined8*)( lVar17 + 0x18 ) = *(undefined8*)( pPVar5 + 0x118 );
            }

            lVar6 = *(long*)( pPVar5 + 0x118 );
            if (lVar6 != 0) {
               *(long*)( lVar6 + 0x10 ) = lVar17;
            }

            if (pPVar5 + 0x100 == (Particles*)*puVar18) {
               *puVar18 = *(undefined8*)( pPVar5 + 0x110 );
            }

            if (pPVar5 + 0x100 == (Particles*)puVar18[1]) {
               puVar18[1] = lVar6;
            }

            *(undefined8*)( pPVar5 + 0x100 ) = 0;
            *(undefined1(*) [16])( pPVar5 + 0x110 ) = (undefined1[16])0x0;
         }

         pPVar5[0xf8] = (Particles)0x0;
         _particles_update_buffers(this, pPVar5);
         if (pPVar5[0x3c] != (Particles)0x0) {
            *(undefined8*)( pPVar5 + 0x130 ) = 0;
            pPVar5[0x15c] = (Particles)0x1;
            pPVar5[0x3c] = (Particles)0x0;
            *(undefined1(*) [16])( pPVar5 + 0x120 ) = (undefined1[16])0x0;
         }

         if (pPVar5[4] == (Particles)0x0) {
            if (pPVar5[0x10] != (Particles)0x0) goto LAB_0010ca9e;
            dVar32 = *(double*)( pPVar5 + 0x140 );
            dVar33 = (double)( **(code**)( *RenderingServerGlobals::rasterizer + 0x90 ) )();
            dVar31 = _LC203 * *(double*)( pPVar5 + 0x20 );
            dVar32 = dVar33 * dVar32 + *(double*)( pPVar5 + 8 );
            *(double*)( pPVar5 + 8 ) = dVar32;
            if (dVar31 < dVar32) goto code_r0x0010cc33;
         }
 else {
            if (pPVar5[0x10] == (Particles)0x0) goto LAB_0010c9d8;
            pPVar5[0x15c] = (Particles)0x1;
            *(undefined8*)( pPVar5 + 0x130 ) = 0;
            *(undefined1(*) [16])( pPVar5 + 0x120 ) = (undefined1[16])0x0;
            LAB_0010ca9e:pPVar5[4] = (Particles)0x0;
            *(undefined8*)( pPVar5 + 8 ) = 0;
         }

         if (*(int*)( pPVar5 + 0x98 ) - 2U < 2) {
            iVar16 = *(int*)( pPVar5 + 0xe8 );
            if (iVar16 == 0) {
               _particles_allocate_history_buffers(pPVar5);
               iVar16 = *(int*)( pPVar5 + 0xe8 );
            }

            uVar15 = *(undefined4*)( pPVar5 + 0xdc );
            *(int*)( pPVar5 + 0xdc ) = iVar16;
            *(undefined4*)( pPVar5 + 0xe8 ) = uVar15;
            ( *_glad_glBindBuffer )(0x8f36, *(undefined4*)( pPVar5 + 200 ));
            ( *_glad_glBindBuffer )(0x8f37, *(undefined4*)( pPVar5 + 0xdc ));
            ( *_glad_glCopyBufferSubData )(0x8f36, 0x8f37, 0, 0, *(undefined4*)( pPVar5 + 0xcc ));
            PVar4 = pPVar5[0xe0];
            pPVar5[0xe0] = (Particles)0x1;
            *(undefined4*)( pPVar5 + 0xf0 ) = *(undefined4*)( pPVar5 + 0xe4 );
            pPVar5[0xec] = PVar4;
            *(float*)( pPVar5 + 0xe4 ) = (float)*(double*)( pPVar5 + 0x120 );
            ( *_glad_glBindBuffer )(0x8f36, 0);
            ( *_glad_glBindBuffer )(0x8f37, 0);
         }

         iVar16 = *(int*)( pPVar5 + 0x148 );
         iVar28 = 0;
         if (-1 < iVar16) {
            iVar28 = iVar16;
         }

         if (( pPVar5[0x15c] != (Particles)0x0 ) && ( dVar32 = 0.0 < dVar32 )) {
            local_88 = _LC199;
            if (0 < iVar16) {
               local_88 = _LC155 / (double)iVar28;
            }

            do {
               _particles_process(this, pPVar5, local_88);
               dVar32 = dVar32 - local_88;
            }
 while ( 0.0 <= dVar32 );
         }

         dVar31 = _LC155;
         dVar32 = *(double*)( pPVar5 + 0x140 );
         if (dVar32 <= 0.0) {
            dVar32 = 0.0;
         }

         if (iVar16 < 1) {
            dVar31 = (double)( **(code**)( *RenderingServerGlobals::rasterizer + 0x90 ) )();
            _particles_process(this, pPVar5, dVar31 * dVar32);
            fVar2 = *(float*)( pPVar5 + 0x30 );
            if (0.0 < fVar2) {
               dVar32 = *(double*)( pPVar5 + 0x140 );
               local_88 = _LC199;
               dVar31 = _LC155;
               LAB_0010cdef:dVar33 = (double)fVar2;
               *(double*)( pPVar5 + 0x140 ) = dVar31;
               do {
                  _particles_process(this, pPVar5, local_88);
                  dVar33 = dVar33 - local_88;
               }
 while ( 0.0 <= dVar33 );
               *(undefined4*)( pPVar5 + 0x30 ) = 0;
               *(double*)( pPVar5 + 0x140 ) = (double)(float)dVar32;
            }

         }
 else {
            local_88 = _LC155 / (double)iVar28;
            dVar33 = (double)( **(code**)( *RenderingServerGlobals::rasterizer + 0x90 ) )();
            uVar15 = SUB84(dVar33, 0);
            uVar34 = ( undefined4 )((ulong)dVar33 >> 0x20);
            if (_LC200 < dVar33) {
               uVar15 = SUB84(_LC200, 0);
               uVar34 = ( undefined4 )((ulong)_LC200 >> 0x20);
            }
 else if (dVar33 <= 0.0) {
               uVar15 = (undefined4)_LC201;
               uVar34 = ( undefined4 )((ulong)_LC201 >> 0x20);
            }

            for (dVar32 = (double)CONCAT44(uVar34, uVar15) * dVar32 + *(double*)( pPVar5 + 0x150 ); local_88 <= dVar32; dVar32 = dVar32 - local_88) {
               _particles_process(this, pPVar5, local_88);
            }

            *(double*)( pPVar5 + 0x150 ) = dVar32;
            fVar2 = *(float*)( pPVar5 + 0x30 );
            if (0.0 < fVar2) {
               dVar32 = *(double*)( pPVar5 + 0x140 );
               goto LAB_0010cdef;
            }

         }

         if (( *(int*)( pPVar5 + 0x98 ) != 3 ) && ( ( *(uint*)( pPVar5 + 0x94 ) & 0xfffffffd ) != 1 )) {
            local_40 = 0;
            local_38 = 0;
            local_50 = 0;
            local_48 = 0;
            _particles_update_instance_buffer(this, pPVar5, (Vector3*)&local_50, (Vector3*)&local_40);
            if (( *(int*)( pPVar5 + 0x98 ) == 2 ) && ( pPVar5[0xec] != (Particles)0x0 )) {
               if (*(int*)pPVar5 == 0) {
                  ( *_glad_glBindBuffer )();
                  puVar18 = (undefined8*)( *_glad_glMapBufferRange )(0x8892, 0, *(int*)( pPVar5 + 0x18 ) * 0x30, 3);
                  if (puVar18 == (undefined8*)0x0) {
                     LAB_0010d281:_err_print_error("_particles_reverse_lifetime_sort", "drivers/gles3/storage/particles_storage.cpp", 0x4a6, "Parameter \"particle_array\" is null.", 0, 0);
                     goto LAB_0010cb61;
                  }

                  iVar16 = *(int*)( pPVar5 + 0x18 );
                  uVar23 = iVar16 - 1;
                  uVar29 = (int)( (float)iVar16 * *(float*)( pPVar5 + 0xf0 ) );
                  if ((int)uVar23 < (int)( (float)iVar16 * *(float*)( pPVar5 + 0xf0 ) )) {
                     uVar29 = uVar23;
                  }

                  uVar19 = (long)(int)( uVar29 + 1 ) % (long)iVar16;
                  iVar28 = (int)uVar19;
                  uVar29 = iVar28 - 1;
                  uVar19 = ( uVar19 & 0xffffffff ) >> 1;
                  uVar30 = uVar29 - (int)uVar19;
                  puVar24 = puVar18;
                  if (uVar19 != 0) {
                     do {
                        uVar19 = (ulong)uVar29;
                        uVar8 = *puVar24;
                        uVar9 = puVar24[1];
                        uVar10 = puVar24[2];
                        uVar11 = puVar24[3];
                        uVar29 = uVar29 - 1;
                        uVar12 = puVar24[4];
                        uVar13 = puVar24[5];
                        puVar20 = puVar18 + uVar19 * 6;
                        uVar14 = puVar20[1];
                        *puVar24 = *puVar20;
                        puVar24[1] = uVar14;
                        *(undefined1(*) [16])( puVar24 + 2 ) = *(undefined1(*) [16])( puVar20 + 2 );
                        *(undefined1(*) [16])( puVar24 + 4 ) = *(undefined1(*) [16])( puVar20 + 4 );
                        *puVar20 = uVar8;
                        puVar20[1] = uVar9;
                        puVar20[2] = uVar10;
                        puVar20[3] = uVar11;
                        puVar20[4] = uVar12;
                        puVar20[5] = uVar13;
                        puVar24 = puVar24 + 6;
                     }
 while ( uVar29 != uVar30 );
                  }

                  iVar27 = iVar28 + uVar23;
                  uVar29 = uVar23 - ( ( uint )(iVar16 - iVar28) >> 1 );
                  if (( uint )(iVar16 - iVar28) >> 1 != 0) {
                     do {
                        uVar19 = (ulong)uVar23;
                        uVar30 = iVar27 - uVar23;
                        uVar23 = uVar23 - 1;
                        puVar24 = puVar18 + uVar19 * 6;
                        uVar10 = puVar24[1];
                        puVar20 = puVar18 + (ulong)uVar30 * 6;
                        uVar8 = *puVar20;
                        uVar9 = puVar20[1];
                        uVar11 = puVar20[2];
                        uVar12 = puVar20[3];
                        *puVar20 = *puVar24;
                        puVar20[1] = uVar10;
                        uVar10 = puVar24[3];
                        uVar13 = puVar20[4];
                        uVar14 = puVar20[5];
                        puVar20[2] = puVar24[2];
                        puVar20[3] = uVar10;
                        *(undefined1(*) [16])( puVar20 + 4 ) = *(undefined1(*) [16])( puVar24 + 4 );
                        *puVar24 = uVar8;
                        puVar24[1] = uVar9;
                        puVar24[2] = uVar11;
                        puVar24[3] = uVar12;
                        puVar24[4] = uVar13;
                        puVar24[5] = uVar14;
                     }
 while ( uVar29 != uVar23 );
                  }

               }
 else {
                  ( *_glad_glBindBuffer )(0x8892, *(undefined4*)( pPVar5 + 0xe8 ));
                  pauVar21 = (undefined1(*) [16])( *_glad_glMapBufferRange )(0x8892, 0, *(int*)( pPVar5 + 0x18 ) << 6, 3);
                  if (pauVar21 == (undefined1(*) [16])0x0) goto LAB_0010d281;
                  iVar16 = *(int*)( pPVar5 + 0x18 );
                  uVar23 = iVar16 - 1;
                  uVar29 = (int)( (float)iVar16 * *(float*)( pPVar5 + 0xf0 ) );
                  if ((int)uVar23 < (int)( (float)iVar16 * *(float*)( pPVar5 + 0xf0 ) )) {
                     uVar29 = uVar23;
                  }

                  uVar29 = (int)( uVar29 + 1 ) % iVar16;
                  if (uVar29 >> 1 != 0) {
                     pauVar25 = pauVar21;
                     uVar30 = uVar29;
                     do {
                        uVar30 = uVar30 - 1;
                        auVar3 = *pauVar25;
                        uVar8 = *(undefined8*)pauVar25[1];
                        uVar9 = *(undefined8*)( pauVar25[1] + 8 );
                        pauVar26 = pauVar25 + 4;
                        uVar11 = *(undefined8*)pauVar25[2];
                        uVar12 = *(undefined8*)( pauVar25[2] + 8 );
                        uVar13 = *(undefined8*)pauVar25[3];
                        uVar14 = *(undefined8*)( pauVar25[3] + 8 );
                        pauVar22 = pauVar21 + (ulong)uVar30 * 4;
                        uVar10 = *(undefined8*)( *pauVar22 + 8 );
                        *(undefined8*)*pauVar25 = *(undefined8*)*pauVar22;
                        *(undefined8*)( *pauVar25 + 8 ) = uVar10;
                        uVar10 = *(undefined8*)( pauVar22[1] + 8 );
                        *(undefined8*)pauVar25[1] = *(undefined8*)pauVar22[1];
                        *(undefined8*)( pauVar25[1] + 8 ) = uVar10;
                        uVar10 = *(undefined8*)( pauVar22[2] + 8 );
                        *(undefined8*)pauVar25[2] = *(undefined8*)pauVar22[2];
                        *(undefined8*)( pauVar25[2] + 8 ) = uVar10;
                        pauVar25[3] = pauVar22[3];
                        *pauVar22 = auVar3;
                        *(undefined8*)pauVar22[1] = uVar8;
                        *(undefined8*)( pauVar22[1] + 8 ) = uVar9;
                        *(undefined8*)pauVar22[2] = uVar11;
                        *(undefined8*)( pauVar22[2] + 8 ) = uVar12;
                        *(undefined8*)pauVar22[3] = uVar13;
                        *(undefined8*)( pauVar22[3] + 8 ) = uVar14;
                        pauVar25 = pauVar26;
                     }
 while ( pauVar26 != pauVar21 + ( ulong )(uVar29 >> 1) * 4 );
                  }

                  iVar28 = uVar29 + uVar23;
                  uVar30 = uVar23 - ( iVar16 - uVar29 >> 1 );
                  if (iVar16 - uVar29 >> 1 != 0) {
                     do {
                        uVar19 = (ulong)uVar23;
                        uVar29 = iVar28 - uVar23;
                        uVar23 = uVar23 - 1;
                        pauVar25 = pauVar21 + uVar19 * 4;
                        uVar10 = *(undefined8*)( *pauVar25 + 8 );
                        pauVar22 = pauVar21 + (ulong)uVar29 * 4;
                        auVar3 = *pauVar22;
                        uVar8 = *(undefined8*)pauVar22[1];
                        uVar9 = *(undefined8*)( pauVar22[1] + 8 );
                        *(undefined8*)*pauVar22 = *(undefined8*)*pauVar25;
                        *(undefined8*)( *pauVar22 + 8 ) = uVar10;
                        uVar10 = *(undefined8*)( pauVar25[1] + 8 );
                        uVar11 = *(undefined8*)pauVar22[2];
                        uVar12 = *(undefined8*)( pauVar22[2] + 8 );
                        uVar13 = *(undefined8*)pauVar22[3];
                        uVar14 = *(undefined8*)( pauVar22[3] + 8 );
                        *(undefined8*)pauVar22[1] = *(undefined8*)pauVar25[1];
                        *(undefined8*)( pauVar22[1] + 8 ) = uVar10;
                        pauVar22[2] = pauVar25[2];
                        uVar10 = *(undefined8*)( pauVar25[3] + 8 );
                        *(undefined8*)pauVar22[3] = *(undefined8*)pauVar25[3];
                        *(undefined8*)( pauVar22[3] + 8 ) = uVar10;
                        *pauVar25 = auVar3;
                        *(undefined8*)pauVar25[1] = uVar8;
                        *(undefined8*)( pauVar25[1] + 8 ) = uVar9;
                        *(undefined8*)pauVar25[2] = uVar11;
                        *(undefined8*)( pauVar25[2] + 8 ) = uVar12;
                        *(undefined8*)pauVar25[3] = uVar13;
                        *(undefined8*)( pauVar25[3] + 8 ) = uVar14;
                     }
 while ( uVar30 != uVar23 );
                  }

               }

               ( *_glad_glUnmapBuffer )(0x8892);
               ( *_glad_glBindBuffer )(0x8892, 0);
            }

         }

         LAB_0010cb61:uVar15 = *(undefined4*)( pPVar5 + 200 );
         *(undefined4*)( pPVar5 + 200 ) = *(undefined4*)( pPVar5 + 0xbc );
         *(undefined4*)( pPVar5 + 0xbc ) = uVar15;
         Dependency::changed_notify(pPVar5 + 0x1c8, 0);
         lVar17 = *(long*)( this + 0x158 );
         if (lVar17 == 0) break;
      }
 while ( true );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010cbba. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *_glad_glDisable )(0x8c89);
      return;
   }

   goto LAB_0010d2ab;
   code_r0x0010cc33:pPVar5[4] = (Particles)0x1;
   goto LAB_0010c9d8;
}
/* GLES3::ParticlesStorage::particles_collision_initialize(RID) */void GLES3::ParticlesStorage::particles_collision_initialize(ParticlesStorage *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_88;
   undefined8 uStack_80;
   undefined4 uStack_78;
   undefined4 uStack_74;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined8 local_50;
   Dependency local_48[8];
   undefined1 local_40[16];
   undefined1 local_30[16];
   undefined8 local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = (undefined1[16])0x0;
   local_70 = _LC209;
   uStack_80._4_4_ = _LC117;
   uStack_80._0_4_ = _LC117;
   uStack_78 = _LC117;
   uStack_74 = _LC117;
   local_50 = _LC210;
   local_88 = 0xffffffff00000000;
   local_58 = 0;
   local_20 = 2;
   local_40 = (undefined1[16])0x0;
   local_30 = (undefined1[16])0x0;
   RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::initialize_rid((RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>*)( this + 0x1c0 ), param_2, &local_88);
   Dependency::~Dependency(local_48);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::ParticlesStorage::particles_set_view_axis(RID, Vector3 const&, Vector3 const&) */void GLES3::ParticlesStorage::particles_set_view_axis(ParticlesStorage *this, ulong param_2, uint *param_3, Vector3 *param_4) {
   float fVar1;
   float fVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   undefined4 uVar8;
   undefined4 uVar9;
   undefined4 uVar10;
   undefined4 uVar11;
   undefined4 uVar12;
   undefined4 uVar13;
   undefined4 uVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   undefined8 uVar17;
   undefined8 uVar18;
   undefined8 uVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   ParticleInstanceData3D_conflict *pPVar22;
   ParticleInstanceData3D_conflict *pPVar23;
   long lVar24;
   ParticleInstanceData3D_conflict *pPVar25;
   ParticleInstanceData3D_conflict *pPVar26;
   char *pcVar27;
   long lVar28;
   undefined8 uVar29;
   Particles *pPVar30;
   ParticleInstanceData3D_conflict *pPVar31;
   long lVar32;
   long in_FS_OFFSET;
   float fVar33;
   float fVar34;
   float fVar35;
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   float fVar38;
   undefined8 local_58;
   float local_50;
   undefined8 local_4c;
   float local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x184 ) )) {
      pPVar30 = (Particles*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x180 ) ) * 0x210 + *(long*)( *(long*)( this + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x180 ) ) * 8 ) );
      if (*(int*)( pPVar30 + 0x208 ) == (int)( param_2 >> 0x20 )) {
         if (( ( *(int*)( pPVar30 + 0x98 ) == 3 ) || ( ( *(uint*)( pPVar30 + 0x94 ) & 0xfffffffd ) == 1 ) ) && ( *(int*)( pPVar30 + 0xb8 ) != 0 )) {
            local_50 = (float)( param_3[2] ^ _LC44 );
            fVar33 = (float)( ( uint ) * (undefined8*)param_3 ^ (uint)_LC215 );
            fVar34 = (float)( ( uint )(( ulong ) * (undefined8*)param_3 >> 0x20) ^ ( uint )((ulong)_LC215 >> 0x20) );
            local_58 = CONCAT44(fVar34, fVar33);
            if (pPVar30[0x58] != (Particles)0x0) {
               fVar34 = *(float*)( pPVar30 + 0x168 ) * fVar33 + fVar34 * *(float*)( pPVar30 + 0x174 ) + *(float*)( pPVar30 + 0x180 ) * local_50;
               auVar36._0_4_ = local_50 * (float)*(undefined8*)( pPVar30 + 0x178 ) + (float)*(undefined8*)( pPVar30 + 0x160 ) * (float)( *param_3 ^ _LC44 ) + (float)*(undefined8*)( pPVar30 + 0x16c ) * (float)( param_3[1] ^ _LC44 );
               auVar36._4_4_ = local_50 * (float)( ( ulong ) * (undefined8*)( pPVar30 + 0x178 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( pPVar30 + 0x160 ) >> 0x20 ) * (float)( *param_3 ^ _LC44 ) + (float)( ( ulong ) * (undefined8*)( pPVar30 + 0x16c ) >> 0x20 ) * (float)( param_3[1] ^ _LC44 );
               auVar36._8_8_ = 0;
               fVar33 = auVar36._0_4_ * auVar36._0_4_ + auVar36._4_4_ * auVar36._4_4_ + fVar34 * fVar34;
               local_50 = 0.0;
               local_58 = 0;
               if (fVar33 != 0.0) {
                  fVar33 = SQRT(fVar33);
                  local_50 = fVar34 / fVar33;
                  auVar37._4_4_ = fVar33;
                  auVar37._0_4_ = fVar33;
                  auVar37._8_8_ = _LC209;
                  auVar36 = divps(auVar36, auVar37);
                  local_58 = auVar36._0_8_;
               }

            }

            if (( *(int*)( pPVar30 + 0x98 ) == 3 ) && ( pPVar30[0xec] != (Particles)0x0 )) {
               ( *_glad_glBindBuffer )(0x8892);
               pPVar23 = (ParticleInstanceData3D_conflict*)( *_glad_glMapBufferRange )(0x8892, 0, (long)*(int*)( pPVar30 + 0x18 ) << 6, 3);
               if (pPVar23 == (ParticleInstanceData3D_conflict*)0x0) {
                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010dd93;
                  uVar29 = 0x333;
                  pcVar27 = "Parameter \"particle_array\" is null.";
                  goto LAB_0010d929;
               }

               lVar28 = (long)*(int*)( pPVar30 + 0x18 );
               local_4c = local_58;
               local_44 = local_50;
               if (lVar28 != 0) {
                  if (lVar28 == 1) {
                     SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>::introsort((SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>*)&local_4c, 0, 1, pPVar23, 0);
                  }
 else {
                     lVar24 = 0;
                     lVar32 = lVar28;
                     do {
                        lVar32 = lVar32 >> 1;
                        lVar24 = lVar24 + 1;
                     }
 while ( lVar32 != 1 );
                     SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>::introsort((SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>*)&local_4c, 0, lVar28, pPVar23, lVar24 * 2);
                     if (0x10 < lVar28) {
                        pPVar26 = pPVar23 + 0x40;
                        lVar32 = 1;
                        pPVar31 = pPVar26;
                        fVar33 = local_44;
                        fVar34 = (float)local_4c;
                        fVar38 = local_4c._4_4_;
                        do {
                           uVar3 = *(undefined4*)( pPVar31 + 0x30 );
                           uVar4 = *(undefined4*)( pPVar31 + 0x34 );
                           uVar16 = *(undefined8*)( pPVar31 + 0x30 );
                           uVar5 = *(undefined4*)( pPVar31 + 0x38 );
                           uVar6 = *(undefined4*)( pPVar31 + 0x3c );
                           uVar21 = *(undefined8*)( pPVar31 + 0x38 );
                           uVar29 = *(undefined8*)pPVar31;
                           uVar15 = *(undefined8*)( pPVar31 + 8 );
                           uVar7 = *(undefined4*)( pPVar31 + 0x10 );
                           uVar8 = *(undefined4*)( pPVar31 + 0x14 );
                           uVar17 = *(undefined8*)( pPVar31 + 0x10 );
                           uVar9 = *(undefined4*)( pPVar31 + 0x18 );
                           uVar10 = *(undefined4*)( pPVar31 + 0x1c );
                           uVar18 = *(undefined8*)( pPVar31 + 0x18 );
                           uVar11 = *(undefined4*)( pPVar31 + 0x20 );
                           uVar12 = *(undefined4*)( pPVar31 + 0x24 );
                           uVar19 = *(undefined8*)( pPVar31 + 0x20 );
                           uVar13 = *(undefined4*)( pPVar31 + 0x28 );
                           uVar14 = *(undefined4*)( pPVar31 + 0x2c );
                           uVar20 = *(undefined8*)( pPVar31 + 0x28 );
                           fVar35 = *(float*)( pPVar31 + 0xc ) * fVar34 + *(float*)( pPVar31 + 0x1c ) * fVar38 + *(float*)( pPVar31 + 0x2c ) * fVar33;
                           if (fVar35 < *(float*)( pPVar23 + 0xc ) * fVar34 + *(float*)( pPVar23 + 0x1c ) * fVar38 + *(float*)( pPVar23 + 0x2c ) * fVar33) {
                              memmove(pPVar26, pPVar23, lVar32 << 6);
                              *(undefined8*)pPVar23 = uVar29;
                              *(undefined8*)( pPVar23 + 8 ) = uVar15;
                              *(undefined8*)( pPVar23 + 0x10 ) = uVar17;
                              *(undefined8*)( pPVar23 + 0x18 ) = uVar18;
                              *(undefined8*)( pPVar23 + 0x20 ) = uVar19;
                              *(undefined8*)( pPVar23 + 0x28 ) = uVar20;
                              *(undefined8*)( pPVar23 + 0x30 ) = uVar16;
                              *(undefined8*)( pPVar23 + 0x38 ) = uVar21;
                           }
 else {
                              pPVar25 = pPVar31;
                              pPVar22 = pPVar31;
                              lVar24 = lVar32;
                              if (fVar35 < *(float*)( pPVar31 + -0x34 ) * fVar34 + *(float*)( pPVar31 + -0x24 ) * fVar38 + *(float*)( pPVar31 + -0x14 ) * fVar33) {
                                 while (lVar24 = lVar24 + -1,lVar24 != 0) {
                                    uVar16 = *(undefined8*)( pPVar22 + -0x38 );
                                    *(undefined8*)pPVar25 = *(undefined8*)( pPVar22 + -0x40 );
                                    *(undefined8*)( pPVar25 + 8 ) = uVar16;
                                    for (int i = 0; i < 3; i++) {
                                       uVar16 = *(undefined8*)( pPVar22 + ( 16*i + -40 ) );
                                       *(undefined8*)( pPVar25 + ( 16*i + 16 ) ) = *(undefined8*)( pPVar22 + ( 16*i + -48 ) );
                                       *(undefined8*)( pPVar25 + ( 16*i + 24 ) ) = uVar16;
                                    }

                                    if (*(float*)( pPVar25 + -0x74 ) * fVar34 + *(float*)( pPVar25 + -100 ) * fVar38 + *(float*)( pPVar25 + -0x54 ) * fVar33 <= fVar35) {
                                       pPVar25 = pPVar23 + lVar24 * 0x40;
                                       goto LAB_0010d8c0;
                                    }

                                    pPVar25 = pPVar25 + -0x40;
                                    pPVar22 = pPVar22 + -0x40;
                                 }
;
                                 _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                                 pPVar25 = pPVar26;
                                 fVar33 = local_44;
                                 fVar34 = (float)local_4c;
                                 fVar38 = local_4c._4_4_;
                              }

                              LAB_0010d8c0:*(undefined8*)pPVar25 = uVar29;
                              *(undefined8*)( pPVar25 + 8 ) = uVar15;
                              *(undefined4*)( pPVar25 + 0x10 ) = uVar7;
                              *(undefined4*)( pPVar25 + 0x14 ) = uVar8;
                              *(undefined4*)( pPVar25 + 0x18 ) = uVar9;
                              *(undefined4*)( pPVar25 + 0x1c ) = uVar10;
                              *(undefined4*)( pPVar25 + 0x20 ) = uVar11;
                              *(undefined4*)( pPVar25 + 0x24 ) = uVar12;
                              *(undefined4*)( pPVar25 + 0x28 ) = uVar13;
                              *(undefined4*)( pPVar25 + 0x2c ) = uVar14;
                              *(undefined4*)( pPVar25 + 0x30 ) = uVar3;
                              *(undefined4*)( pPVar25 + 0x34 ) = uVar4;
                              *(undefined4*)( pPVar25 + 0x38 ) = uVar5;
                              *(undefined4*)( pPVar25 + 0x3c ) = uVar6;
                           }

                           lVar32 = lVar32 + 1;
                           pPVar31 = pPVar31 + 0x40;
                        }
 while ( lVar32 != 0x10 );
                        pPVar23 = pPVar23 + 0x400;
                        lVar32 = 0x10;
                        do {
                           uVar3 = *(undefined4*)( pPVar23 + 0x30 );
                           uVar4 = *(undefined4*)( pPVar23 + 0x34 );
                           uVar5 = *(undefined4*)( pPVar23 + 0x38 );
                           uVar6 = *(undefined4*)( pPVar23 + 0x3c );
                           uVar29 = *(undefined8*)pPVar23;
                           uVar15 = *(undefined8*)( pPVar23 + 8 );
                           fVar35 = *(float*)( pPVar23 + 0xc );
                           fVar1 = *(float*)( pPVar23 + 0x1c );
                           uVar7 = *(undefined4*)( pPVar23 + 0x10 );
                           uVar8 = *(undefined4*)( pPVar23 + 0x14 );
                           uVar9 = *(undefined4*)( pPVar23 + 0x18 );
                           uVar10 = *(undefined4*)( pPVar23 + 0x1c );
                           uVar11 = *(undefined4*)( pPVar23 + 0x20 );
                           uVar12 = *(undefined4*)( pPVar23 + 0x24 );
                           uVar13 = *(undefined4*)( pPVar23 + 0x28 );
                           uVar14 = *(undefined4*)( pPVar23 + 0x2c );
                           fVar2 = *(float*)( pPVar23 + 0x2c );
                           pPVar26 = pPVar23;
                           lVar24 = lVar32;
                           while (lVar24 = lVar24 + -1,fVar35 * fVar34 + fVar1 * fVar38 + fVar2 * fVar33 < *(float*)( pPVar26 + -0x34 ) * fVar34 + *(float*)( pPVar26 + -0x24 ) * fVar38 + *(float*)( pPVar26 + -0x14 ) * fVar33) {
                              if (lVar24 == 0) {
                                 _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                                 break;
                              }

                              *(undefined8*)pPVar26 = *(undefined8*)( pPVar26 + -0x40 );
                              for (int i = 0; i < 7; i++) {
                                 *(undefined8*)( pPVar26 + ( 8*i + 8 ) ) = *(undefined8*)( pPVar26 + ( 8*i + -56 ) );
                              }

                              pPVar26 = pPVar26 + -0x40;
                           }
;
                           lVar32 = lVar32 + 1;
                           *(undefined8*)pPVar26 = uVar29;
                           *(undefined8*)( pPVar26 + 8 ) = uVar15;
                           pPVar23 = pPVar23 + 0x40;
                           *(undefined4*)( pPVar26 + 0x10 ) = uVar7;
                           *(undefined4*)( pPVar26 + 0x14 ) = uVar8;
                           *(undefined4*)( pPVar26 + 0x18 ) = uVar9;
                           *(undefined4*)( pPVar26 + 0x1c ) = uVar10;
                           *(undefined4*)( pPVar26 + 0x20 ) = uVar11;
                           *(undefined4*)( pPVar26 + 0x24 ) = uVar12;
                           *(undefined4*)( pPVar26 + 0x28 ) = uVar13;
                           *(undefined4*)( pPVar26 + 0x2c ) = uVar14;
                           *(undefined4*)( pPVar26 + 0x30 ) = uVar3;
                           *(undefined4*)( pPVar26 + 0x34 ) = uVar4;
                           *(undefined4*)( pPVar26 + 0x38 ) = uVar5;
                           *(undefined4*)( pPVar26 + 0x3c ) = uVar6;
                           if (lVar28 == lVar32) goto LAB_0010d8dd;
                           fVar33 = local_44;
                           fVar34 = (float)local_4c;
                           fVar38 = local_4c._4_4_;
                        }
 while ( true );
                     }

                     pPVar26 = pPVar23 + 0x40;
                     lVar32 = 1;
                     pPVar31 = pPVar26;
                     do {
                        uVar3 = *(undefined4*)( pPVar31 + 0x30 );
                        uVar4 = *(undefined4*)( pPVar31 + 0x34 );
                        uVar16 = *(undefined8*)( pPVar31 + 0x30 );
                        uVar5 = *(undefined4*)( pPVar31 + 0x38 );
                        uVar6 = *(undefined4*)( pPVar31 + 0x3c );
                        uVar21 = *(undefined8*)( pPVar31 + 0x38 );
                        uVar29 = *(undefined8*)pPVar31;
                        uVar15 = *(undefined8*)( pPVar31 + 8 );
                        uVar7 = *(undefined4*)( pPVar31 + 0x10 );
                        uVar8 = *(undefined4*)( pPVar31 + 0x14 );
                        uVar17 = *(undefined8*)( pPVar31 + 0x10 );
                        uVar9 = *(undefined4*)( pPVar31 + 0x18 );
                        uVar10 = *(undefined4*)( pPVar31 + 0x1c );
                        uVar18 = *(undefined8*)( pPVar31 + 0x18 );
                        uVar11 = *(undefined4*)( pPVar31 + 0x20 );
                        uVar12 = *(undefined4*)( pPVar31 + 0x24 );
                        uVar19 = *(undefined8*)( pPVar31 + 0x20 );
                        uVar13 = *(undefined4*)( pPVar31 + 0x28 );
                        uVar14 = *(undefined4*)( pPVar31 + 0x2c );
                        uVar20 = *(undefined8*)( pPVar31 + 0x28 );
                        fVar33 = *(float*)( pPVar31 + 0xc ) * (float)local_4c + *(float*)( pPVar31 + 0x1c ) * local_4c._4_4_ + *(float*)( pPVar31 + 0x2c ) * local_44;
                        if (fVar33 < *(float*)( pPVar23 + 0xc ) * (float)local_4c + *(float*)( pPVar23 + 0x1c ) * local_4c._4_4_ + *(float*)( pPVar23 + 0x2c ) * local_44) {
                           memmove(pPVar26, pPVar23, lVar32 << 6);
                           *(undefined8*)pPVar23 = uVar29;
                           *(undefined8*)( pPVar23 + 8 ) = uVar15;
                           *(undefined8*)( pPVar23 + 0x10 ) = uVar17;
                           *(undefined8*)( pPVar23 + 0x18 ) = uVar18;
                           *(undefined8*)( pPVar23 + 0x20 ) = uVar19;
                           *(undefined8*)( pPVar23 + 0x28 ) = uVar20;
                           *(undefined8*)( pPVar23 + 0x30 ) = uVar16;
                           *(undefined8*)( pPVar23 + 0x38 ) = uVar21;
                        }
 else {
                           pPVar25 = pPVar31;
                           pPVar22 = pPVar31;
                           lVar24 = lVar32;
                           if (fVar33 < *(float*)( pPVar31 + -0x34 ) * (float)local_4c + *(float*)( pPVar31 + -0x24 ) * local_4c._4_4_ + *(float*)( pPVar31 + -0x14 ) * local_44) {
                              while (lVar24 = lVar24 + -1,lVar24 != 0) {
                                 uVar16 = *(undefined8*)( pPVar22 + -0x38 );
                                 *(undefined8*)pPVar25 = *(undefined8*)( pPVar22 + -0x40 );
                                 *(undefined8*)( pPVar25 + 8 ) = uVar16;
                                 for (int i = 0; i < 3; i++) {
                                    uVar16 = *(undefined8*)( pPVar22 + ( 16*i + -40 ) );
                                    *(undefined8*)( pPVar25 + ( 16*i + 16 ) ) = *(undefined8*)( pPVar22 + ( 16*i + -48 ) );
                                    *(undefined8*)( pPVar25 + ( 16*i + 24 ) ) = uVar16;
                                 }

                                 if (*(float*)( pPVar25 + -0x74 ) * (float)local_4c + *(float*)( pPVar25 + -100 ) * local_4c._4_4_ + *(float*)( pPVar25 + -0x54 ) * local_44 <= fVar33) {
                                    pPVar25 = pPVar23 + lVar24 * 0x40;
                                    goto LAB_0010db98;
                                 }

                                 pPVar25 = pPVar25 + -0x40;
                                 pPVar22 = pPVar22 + -0x40;
                              }
;
                              _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                              pPVar25 = pPVar26;
                           }

                           LAB_0010db98:*(undefined8*)pPVar25 = uVar29;
                           *(undefined8*)( pPVar25 + 8 ) = uVar15;
                           *(undefined4*)( pPVar25 + 0x10 ) = uVar7;
                           *(undefined4*)( pPVar25 + 0x14 ) = uVar8;
                           *(undefined4*)( pPVar25 + 0x18 ) = uVar9;
                           *(undefined4*)( pPVar25 + 0x1c ) = uVar10;
                           *(undefined4*)( pPVar25 + 0x20 ) = uVar11;
                           *(undefined4*)( pPVar25 + 0x24 ) = uVar12;
                           *(undefined4*)( pPVar25 + 0x28 ) = uVar13;
                           *(undefined4*)( pPVar25 + 0x2c ) = uVar14;
                           *(undefined4*)( pPVar25 + 0x30 ) = uVar3;
                           *(undefined4*)( pPVar25 + 0x34 ) = uVar4;
                           *(undefined4*)( pPVar25 + 0x38 ) = uVar5;
                           *(undefined4*)( pPVar25 + 0x3c ) = uVar6;
                        }

                        lVar32 = lVar32 + 1;
                        pPVar31 = pPVar31 + 0x40;
                     }
 while ( lVar28 != lVar32 );
                  }

               }

               LAB_0010d8dd:( *_glad_glUnmapBuffer )(0x8892);
            }

            ( *_glad_glEnable )(0x8c89);
            ( *_glad_glBindFramebuffer )(0x8d40, (undefined4)TextureStorage::system_fbo);
            _particles_update_instance_buffer(this, pPVar30, (Vector3*)&local_58, param_4);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010d55a. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *_glad_glDisable )(0x8c89);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0010dd93;
      }

      if (*(int*)( pPVar30 + 0x208 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar29 = 0x31a;
      pcVar27 = "Parameter \"particles\" is null.";
      LAB_0010d929:_err_print_error("particles_set_view_axis", "drivers/gles3/storage/particles_storage.cpp", uVar29, pcVar27, 0, 0);
      return;
   }

   LAB_0010dd93:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ParticlesCopyShaderGLES3::~ParticlesCopyShaderGLES3() */void ParticlesCopyShaderGLES3::~ParticlesCopyShaderGLES3(ParticlesCopyShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_00114308;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   return;
}
/* ParticlesCopyShaderGLES3::~ParticlesCopyShaderGLES3() */void ParticlesCopyShaderGLES3::~ParticlesCopyShaderGLES3(ParticlesCopyShaderGLES3 *this) {
   *(undefined***)this = &PTR__init_00114308;
   ShaderGLES3::~ShaderGLES3((ShaderGLES3*)this);
   operator_delete(this, 0x130);
   return;
}
/* ParticlesCopyShaderGLES3::_init() */void ParticlesCopyShaderGLES3::_init(ParticlesCopyShaderGLES3 *this) {
   ShaderGLES3::_setup((char*)this, "\n// Compatibility renames. These are exposed with the \"godot_\" prefix\n// to work around two distinct Adreno bugs:\n// 1. Some Adreno devices expose ES310 functions in ES300 shaders.\n//    Internally, we must use the \"godot_\" prefix, but user shaders\n//    will be mapped automatically.\n// 2. Adreno 3XX devices have poor implementations of the other packing\n//    functions, so we just use our own there to keep it simple.\n\n#ifdef USE_HALF2FLOAT\n// Floating point pack/unpack functions are part of the GLSL ES 300 specification used by web and mobile.\n// It appears to be safe to expose these on mobile, but when running through ANGLE this appears to break.\nuint float2half(uint f) {\n\tuint e = f & uint(0x7f800000);\n\tif (e <= uint(0x38000000)) {\n\t\treturn uint(0);\n\t} else {\n\t\treturn ((f >> uint(16)) & uint(0x8000)) |\n\t\t\t\t(((e - uint(0x38000000)) >> uint(13)) & uint(0x7c00)) |\n\t\t\t\t((f >> uint(13)) & uint(0x03ff));\n\t}\n}\n\nuint half2float(uint h) {\n\tuint h_e = h & uint(0x7c00);\n\treturn ((h & uint(0x8000)) << uint(16)) | uint((h_e >> uint(10)) != uint(0)) * (((h_e + uint(0x1c000)) << uint(13)) | ((h & uint(0x03ff)) << uint(13)));\n}\n\nuint godot_packHalf2x16(vec2 v) {\n\treturn float2half(floatBitsToUint(v.x)) | float2half(floatBitsToUint(v.y)) << uint(16);\n}\n\nvec2 godot_unpackHalf2x16(uint v) {\n\treturn vec2(uintBitsToFloat(half2float(v & uint(0xffff))),\n\t\t\tuintBitsToFloat(half2float(v >> uint(16))));\n}\n\nuint godot_packUnorm2x16(vec2 v) {\n\tuvec2 uv = uvec2(round(clamp(v, vec2(0.0), vec2(1.0)) * 65535.0));\n\treturn uv.x | uv.y << uint(16);\n}\n\nvec2 godot_unpackUnorm2x16(uint p) {\n\treturn vec2(float(p & uint(0xffff)), float(p >> uint(16))) * 0.000015259021; // 1.0 / 65535.0 optimization\n}\n\nuint godot_packSnorm2x16(vec2 v) {\n\tuvec2 uv = uvec2(round(clamp(v, vec2(-1.0), vec2(1.0)) * 32767.0) + 32767.0);\n\treturn uv.x | uv.y << uint(16);\n}\n\nvec2 godot_unpackSnorm2x16(uint p) {\n\tvec2 v = vec2(float(p & uint(0xffff)), float(p >> uint(16)));\n\treturn clamp((v - 32767.0) * vec2(0.00003051851), vec2(-1.0), vec2(1.0));\n}\n\n#define packHalf2x16 godot...", /* TRUNCATED STRING LITERAL */, "\nvoid main() {\n}\n/* clang-format on */\n", 0x10ddf5, (char**)0x5, 0x1160e0, (UBOPair*)0x0, (int)_init(), ::_ubo_pairs, (Feedback*)0x4, 0x116060, (TexUnitPair*)0x0, (int)_init(), ::_texunit_pairs, (Specialization*)0x1, 0x1160a0, (char**)0x1);
   return;
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GLES3::ParticlesStorage::_particles_process(GLES3::ParticlesStorage::Particles*, double) [clone
   .cold] */void GLES3::ParticlesStorage::_particles_process(Particles *param_1, double param_2) {
   code *pcVar1;
   int in_EDX;
   if (in_EDX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GLES3::ParticlesStorage::particles_collision_free(RID) [clone .cold] */void GLES3::ParticlesStorage::particles_collision_free(undefined8 param_1, undefined8 param_2) {
   code *pcVar1;
   int in_EAX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GLES3::ParticlesStorage::particles_set_draw_passes(RID, int) [clone .cold] */void GLES3::ParticlesStorage::particles_set_draw_passes(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010f336(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
   long lVar5;
   code *pcVar6;
   bool bVar7;
   uint uVar8;
   uint uVar9;
   ulong uVar10;
   uint uVar11;
   long lVar12;
   long lVar13;
   ulong uVar14;
   uint *puVar15;
   ulong *puVar16;
   long lVar17;
   long lVar18;
   long lVar19;
   undefined4 uVar20;
   long in_FS_OFFSET;
   undefined8 uVar21;
   undefined8 uVar22;
   uint uVar23;
   uint uVar24;
   uint uVar25;
   uint uVar26;
   ulong uVar27;
   ulong uVar28;
   undefined8 uVar29;
   long local_a0;
   undefined2 local_88;
   undefined4 local_80;
   undefined8 local_78;
   undefined4 local_70;
   uint local_68;
   uint uStack_64;
   long local_60;
   ulong local_58;
   long local_50;
   undefined2 local_48;
   long local_40;
   uVar29 = *(undefined8*)param_3;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   uStack_64 = 0;
   local_60 = 0;
   uVar14 = (ulong)param_1 % ( ulong ) * (uint*)( this + 0x18 );
   local_80 = *(undefined4*)( param_3 + 8 );
   uVar9 = *(uint*)( param_3 + 0x10 );
   local_78 = uVar29;
   local_70 = local_80;
   if (uVar9 != 0) {
      uVar8 = uVar9 - 1 | uVar9 - 1 >> 1;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uStack_64 = ( uVar8 >> 0x10 | uVar8 ) + 1;
      local_68 = 0;
      local_60 = Memory::realloc_static((void*)0x0, (ulong)uStack_64 * 4, false);
      if (local_60 == 0) goto LAB_0010f8b5;
      local_68 = uVar9;
      if (*(int*)( param_3 + 0x10 ) != 0) {
         lVar19 = *(long*)( param_3 + 0x18 );
         lVar12 = 0;
         do {
            *(undefined4*)( local_60 + lVar12 * 4 ) = *(undefined4*)( lVar19 + lVar12 * 4 );
            lVar12 = lVar12 + 1;
         }
 while ( (uint)lVar12 < *(uint*)( param_3 + 0x10 ) );
      }

   }

   local_58 = 0;
   iVar3 = *(int*)( param_3 + 0x20 );
   local_50 = 0;
   if (iVar3 != 0) {
      uVar9 = iVar3 - 1U | iVar3 - 1U >> 1;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 >> 4 | uVar9;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar9 = ( uVar9 >> 0x10 | uVar9 ) + 1;
      local_58 = (ulong)uVar9 << 0x20;
      local_50 = Memory::realloc_static((void*)0x0, (ulong)uVar9 * 4, false);
      if (local_50 == 0) goto LAB_0010f8b5;
      local_58 = CONCAT44(local_58._4_4_, iVar3);
      if (*(int*)( param_3 + 0x20 ) != 0) {
         lVar19 = *(long*)( param_3 + 0x28 );
         lVar12 = 0;
         do {
            *(undefined4*)( local_50 + lVar12 * 4 ) = *(undefined4*)( lVar19 + lVar12 * 4 );
            lVar12 = lVar12 + 1;
         }
 while ( (uint)lVar12 < *(uint*)( param_3 + 0x20 ) );
      }

   }

   local_48 = *(undefined2*)( param_3 + 0x30 );
   lVar12 = *(long*)( this + 0x10 );
   lVar19 = uVar14 * 4;
   puVar15 = (uint*)( lVar12 + lVar19 );
   lVar13 = *(long*)( this + 8 );
   uVar9 = *puVar15;
   lVar5 = *(long*)this;
   if (uVar9 != 0) {
      bVar7 = false;
      uVar8 = 0;
      uVar10 = ( ulong ) * (uint*)( this + 0x18 );
      local_a0 = local_50;
      puVar16 = param_2;
      lVar18 = local_60;
      uVar20 = local_80;
      uVar22 = uVar29;
      uVar24 = local_68;
      uVar26 = uStack_64;
      uVar28 = local_58;
      local_88 = local_48;
      do {
         uVar11 = ( uint )(( ulong )(uint)(( (int)uVar10 + (int)uVar14 ) - (int)( (ulong)uVar9 % uVar10 )) % uVar10);
         param_2 = puVar16;
         lVar17 = lVar18;
         uVar21 = uVar22;
         uVar23 = uVar24;
         uVar25 = uVar26;
         uVar27 = uVar28;
         if (uVar11 < uVar8) {
            *puVar15 = param_1;
            bVar7 = true;
            puVar1 = (undefined8*)( lVar13 + uVar14 * 8 );
            param_2 = (ulong*)*puVar1;
            *puVar1 = puVar16;
            puVar1 = (undefined8*)( lVar5 + uVar14 * 0x38 );
            uVar4 = *(undefined4*)( puVar1 + 1 );
            uVar23 = *(uint*)( puVar1 + 2 );
            uVar25 = *(uint*)( (long)puVar1 + 0x14 );
            *(undefined4*)( puVar1 + 1 ) = uVar20;
            uVar27 = puVar1[4];
            *(uint*)( puVar1 + 2 ) = uVar24;
            *(uint*)( (long)puVar1 + 0x14 ) = uVar26;
            uVar21 = *puVar1;
            lVar17 = puVar1[3];
            *puVar1 = uVar22;
            lVar19 = puVar1[5];
            uVar2 = *(undefined2*)( puVar1 + 6 );
            puVar1[5] = local_a0;
            puVar1[3] = lVar18;
            puVar1[4] = uVar28;
            *(undefined2*)( puVar1 + 6 ) = local_88;
            uVar10 = ( ulong ) * (uint*)( this + 0x18 );
            param_1 = uVar9;
            uVar20 = uVar4;
            uVar8 = uVar11;
            local_a0 = lVar19;
            local_88 = uVar2;
         }

         uVar8 = uVar8 + 1;
         uVar14 = ( ulong )((int)uVar14 + 1) % uVar10;
         lVar19 = uVar14 * 4;
         puVar15 = (uint*)( lVar12 + lVar19 );
         uVar9 = *puVar15;
         puVar16 = param_2;
         lVar18 = lVar17;
         uVar22 = uVar21;
         uVar24 = uVar23;
         uVar26 = uVar25;
         uVar28 = uVar27;
      }
 while ( uVar9 != 0 );
      if (bVar7) {
         local_50 = local_a0;
         local_48 = local_88;
         uVar29 = uVar21;
         local_80 = uVar20;
         local_78 = uVar21;
         local_70 = uVar20;
         local_60 = lVar17;
         local_58 = uVar27;
         local_68 = uVar23;
         uStack_64 = uVar25;
      }

   }

   uVar9 = local_68;
   *(ulong**)( lVar13 + uVar14 * 8 ) = param_2;
   puVar1 = (undefined8*)( lVar5 + uVar14 * 0x38 );
   puVar1[2] = 0;
   *(undefined4*)( puVar1 + 1 ) = local_80;
   puVar1[3] = 0;
   *puVar1 = uVar29;
   if (local_68 != 0) {
      uVar8 = local_68 - 1 | local_68 - 1 >> 1;
      uVar8 = uVar8 >> 2 | uVar8;
      uVar8 = uVar8 >> 4 | uVar8;
      uVar8 = uVar8 >> 8 | uVar8;
      uVar8 = ( uVar8 >> 0x10 | uVar8 ) + 1;
      *(uint*)( (long)puVar1 + 0x14 ) = uVar8;
      lVar12 = Memory::realloc_static((void*)0x0, (ulong)uVar8 * 4, false);
      puVar1[3] = lVar12;
      if (lVar12 == 0) goto LAB_0010f8b5;
      *(uint*)( puVar1 + 2 ) = uVar9;
      lVar13 = 0;
      do {
         *(undefined4*)( lVar12 + lVar13 ) = *(undefined4*)( local_60 + lVar13 );
         lVar13 = lVar13 + 4;
      }
 while ( lVar13 != (ulong)uVar9 << 2 );
   }

   uVar14 = local_58;
   iVar3 = (int)local_58;
   puVar1[4] = 0;
   puVar1[5] = 0;
   if ((int)local_58 != 0) {
      uVar9 = (int)local_58 - 1U >> 1 | (int)local_58 - 1U;
      uVar9 = uVar9 >> 2 | uVar9;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 >> 8 | uVar9;
      uVar9 = ( uVar9 >> 0x10 | uVar9 ) + 1;
      *(uint*)( (long)puVar1 + 0x24 ) = uVar9;
      lVar12 = Memory::realloc_static((void*)0x0, (ulong)uVar9 * 4, false);
      puVar1[5] = lVar12;
      if (lVar12 == 0) {
         LAB_0010f8b5:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar6 = (code*)invalidInstructionException();
         ( *pcVar6 )();
      }

      *(int*)( puVar1 + 4 ) = iVar3;
      lVar13 = 0;
      do {
         *(undefined4*)( lVar12 + lVar13 ) = *(undefined4*)( local_50 + lVar13 );
         lVar13 = lVar13 + 4;
      }
 while ( lVar13 != ( uVar14 & 0xffffffff ) << 2 );
   }

   *(undefined2*)( puVar1 + 6 ) = local_48;
   *(uint*)( *(long*)( this + 0x10 ) + lVar19 ) = param_1;
   *(int*)( this + 0x1c ) = *(int*)( this + 0x1c ) + 1;
   ShaderGLES3::Version::Specialization::~Specialization((Specialization*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
   Specialization *pSVar10;
   undefined8 *puVar11;
   uVar9 = *(uint*)( this + 0x18 );
   if ((double)uVar9 * __LC100 < (double)( *(int*)( this + 0x1c ) + 1 )) {
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
         }
 while ( puVar11 != puVar1 + uVar9 );
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
/* WARNING: Removing unreachable block (ram,0x0010fc88) *//* WARNING: Removing unreachable block (ram,0x0010fdb8) *//* WARNING: Removing unreachable block (ram,0x0010ff80) *//* WARNING: Removing unreachable block (ram,0x0010fdc4) *//* WARNING: Removing unreachable block (ram,0x0010fdce) *//* WARNING: Removing unreachable block (ram,0x0010ff60) *//* WARNING: Removing unreachable block (ram,0x0010fdda) *//* WARNING: Removing unreachable block (ram,0x0010fde4) *//* WARNING: Removing unreachable block (ram,0x0010ff40) *//* WARNING: Removing unreachable block (ram,0x0010fdf0) *//* WARNING: Removing unreachable block (ram,0x0010fdfa) *//* WARNING: Removing unreachable block (ram,0x0010ff20) *//* WARNING: Removing unreachable block (ram,0x0010fe06) *//* WARNING: Removing unreachable block (ram,0x0010fe10) *//* WARNING: Removing unreachable block (ram,0x0010ff00) *//* WARNING: Removing unreachable block (ram,0x0010fe1c) *//* WARNING: Removing unreachable block (ram,0x0010fe26) *//* WARNING: Removing unreachable block (ram,0x0010fee0) *//* WARNING: Removing unreachable block (ram,0x0010fe32) *//* WARNING: Removing unreachable block (ram,0x0010fe3c) *//* WARNING: Removing unreachable block (ram,0x0010fec0) *//* WARNING: Removing unreachable block (ram,0x0010fe44) *//* WARNING: Removing unreachable block (ram,0x0010fe5a) *//* WARNING: Removing unreachable block (ram,0x0010fe66) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
      lStack_90 = 0x11063b;
      local_70 = (void*)Memory::alloc_static(uVar48, false);
      *(void**)( this + 8 ) = local_70;
      if (uVar39 == 0) {
         iVar44 = *(int*)( this + 0x2c );
         uVar38 = *param_1;
         if (local_70 == (void*)0x0) goto LAB_001101a3;
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
            lStack_90 = 0x110684;
            memset(local_70, 0, uVar48);
            iVar44 = *(int*)( this + 0x2c );
            uVar38 = *param_1;
         }

      }

      if (iVar44 != 0) {
         uVar40 = ( ulong ) * (uint*)( this + 0x28 );
         lVar52 = *(long*)( this + 0x10 );
         goto LAB_00110523;
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

         LAB_00110523:uVar45 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar40 * 4 ));
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
                  goto LAB_00110504;
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

   LAB_001101a3:if ((float)uVar51 * __LC125 < (float)( iVar44 + 1 )) {
      uVar38 = *(uint*)( this + 0x28 );
      if (uVar38 == 0x1c) {
         pauVar42 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00110504;
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
   LAB_00110504:auVar57._8_8_ = lStack_90;
   auVar57._0_8_ = pauVar42[1] + 4;
   return auVar57;
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
      if (lVar34 != 0) goto LAB_0011085f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_0011085f:if (uVar44 != 0) {
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
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_00110d11;
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

   if ((float)uVar31 * __LC125 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_00110d11;
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
   LAB_00110d11:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Removing unreachable block (ram,0x00110f90) *//* WARNING: Removing unreachable block (ram,0x001110c0) *//* WARNING: Removing unreachable block (ram,0x00111239) *//* WARNING: Removing unreachable block (ram,0x001110cc) *//* WARNING: Removing unreachable block (ram,0x001110d6) *//* WARNING: Removing unreachable block (ram,0x0011121b) *//* WARNING: Removing unreachable block (ram,0x001110e2) *//* WARNING: Removing unreachable block (ram,0x001110ec) *//* WARNING: Removing unreachable block (ram,0x001111fd) *//* WARNING: Removing unreachable block (ram,0x001110f8) *//* WARNING: Removing unreachable block (ram,0x00111102) *//* WARNING: Removing unreachable block (ram,0x001111df) *//* WARNING: Removing unreachable block (ram,0x0011110e) *//* WARNING: Removing unreachable block (ram,0x00111118) *//* WARNING: Removing unreachable block (ram,0x001111c1) *//* WARNING: Removing unreachable block (ram,0x00111124) *//* WARNING: Removing unreachable block (ram,0x0011112e) *//* WARNING: Removing unreachable block (ram,0x001111a3) *//* WARNING: Removing unreachable block (ram,0x00111136) *//* WARNING: Removing unreachable block (ram,0x00111140) *//* WARNING: Removing unreachable block (ram,0x00111188) *//* WARNING: Removing unreachable block (ram,0x00111148) *//* WARNING: Removing unreachable block (ram,0x0011115e) *//* WARNING: Removing unreachable block (ram,0x0011116a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<GLES3::ParticlesStorage::Particles, true>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::Particles,true>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::Particles,true> *this) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   void *pvVar4;
   long lVar5;
   long lVar6;
   char *pcVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
   undefined8 *puVar11;
   ulong uVar12;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00114330;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar8 = ( ulong ) * (uint*)( this + 0x1c );
      uVar10 = ( ulong ) * (uint*)( this + 0x18 );
      puVar11 = *(undefined8**)( this + 8 );
      LAB_001114ea:if ((uint)uVar8 < (uint)uVar10) goto LAB_0011152b;
      lVar9 = 0;
      while (true) {
         Memory::free_static((void*)puVar11[lVar9], false);
         lVar5 = lVar9 * 8;
         lVar9 = lVar9 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar5 ), false);
         if (( uint )(uVar8 / uVar10) <= (uint)lVar9) break;
         puVar11 = *(undefined8**)( this + 8 );
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
      pcVar7 = local_48;
      if (local_48 == (char*)0x0) {
         LAB_00111349:if (local_50 == 0) goto LAB_0011135f;
         LAB_00111353:lVar9 = local_50;
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0011135f;
         local_50 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
         iVar3 = *(int*)( this + 0x1c );
         uVar2 = *(uint*)( this + 0x18 );
         puVar11 = *(undefined8**)( this + 8 );
      }
 else {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00111349;
         local_48 = (char*)0x0;
         Memory::free_static(pcVar7 + -0x10, false);
         if (local_50 != 0) goto LAB_00111353;
         LAB_0011135f:iVar3 = *(int*)( this + 0x1c );
         uVar2 = *(uint*)( this + 0x18 );
         puVar11 = *(undefined8**)( this + 8 );
      }

      if (iVar3 != 0) {
         uVar10 = (ulong)uVar2;
         uVar12 = 0;
         do {
            lVar9 = ( uVar12 % uVar10 ) * 0x210 + puVar11[uVar12 / uVar10];
            if (-1 < *(int*)( lVar9 + 0x208 )) {
               Dependency::~Dependency((Dependency*)( lVar9 + 0x1c8 ));
               pvVar4 = *(void**)( lVar9 + 0x1a0 );
               if (pvVar4 != (void*)0x0) {
                  if (*(int*)( lVar9 + 0x1c4 ) != 0) {
                     if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar9 + 0x1c0 ) * 4 ) != 0) {
                        memset(*(void**)( lVar9 + 0x1b8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar9 + 0x1c0 ) * 4 ) << 2);
                     }

                     *(undefined4*)( lVar9 + 0x1c4 ) = 0;
                  }

                  Memory::free_static(pvVar4, false);
                  Memory::free_static(*(void**)( lVar9 + 0x1b0 ), false);
                  Memory::free_static(*(void**)( lVar9 + 0x1a8 ), false);
                  Memory::free_static(*(void**)( lVar9 + 0x1b8 ), false);
               }

               plVar1 = *(long**)( lVar9 + 0x100 );
               if (plVar1 != (long*)0x0) {
                  lVar5 = *(long*)( lVar9 + 0x110 );
                  if (lVar5 != 0) {
                     *(undefined8*)( lVar5 + 0x18 ) = *(undefined8*)( lVar9 + 0x118 );
                  }

                  lVar6 = *(long*)( lVar9 + 0x118 );
                  if (lVar6 != 0) {
                     *(long*)( lVar6 + 0x10 ) = lVar5;
                  }

                  if (lVar9 + 0x100 == *plVar1) {
                     *plVar1 = *(long*)( lVar9 + 0x110 );
                     lVar5 = plVar1[1];
                  }
 else {
                     lVar5 = plVar1[1];
                  }

                  if (lVar9 + 0x100 == lVar5) {
                     plVar1[1] = lVar6;
                  }

               }

               if (*(long*)( lVar9 + 0xa8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar9 + 0xa8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar5 = *(long*)( lVar9 + 0xa8 );
                     *(undefined8*)( lVar9 + 0xa8 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               uVar10 = ( ulong ) * (uint*)( this + 0x18 );
               puVar11 = *(undefined8**)( this + 8 );
            }

            uVar8 = ( ulong ) * (uint*)( this + 0x1c );
            uVar12 = uVar12 + 1;
         }
 while ( uVar12 < uVar8 );
         goto LAB_001114ea;
      }

      if (uVar2 != 0) goto LAB_0011152b;
      Memory::free_static((void*)*puVar11, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar11 = *(undefined8**)( this + 8 );
   LAB_0011152b:if (puVar11 == (undefined8*)0x0) {
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
/* RID_Alloc<GLES3::ParticlesStorage::Particles, true>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::Particles,true>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::Particles,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision, true>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00114350;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0011176a:if ((uint)uVar5 < (uint)uVar8) goto LAB_001117ab;
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
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x78;
            if (-1 < *(int*)( lVar7 + 0x70 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x40 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_0011176a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001117ab;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_001117ab:if (puVar9 == (undefined8*)0x0) {
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
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance, false>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00114370;
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
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance, false>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00114370;
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
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision, true>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00114350;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_00111d0a:if ((uint)uVar5 < (uint)uVar8) goto LAB_00111d4b;
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
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x78;
            if (-1 < *(int*)( lVar7 + 0x70 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x40 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_00111d0a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00111d4b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_00111d4b:if (puVar9 != (undefined8*)0x0) {
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
/* RID_Alloc<GLES3::ParticlesStorage::Particles, true>::allocate_rid() */ulong RID_Alloc<GLES3::ParticlesStorage::Particles,true>::allocate_rid(RID_Alloc<GLES3::ParticlesStorage::Particles,true> *this) {
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
         goto LAB_00112037;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x210, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x208 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x84;
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0x210 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0x208 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00112037:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RID_Alloc<GLES3::ParticlesStorage::Particles, true>::initialize_rid(RID) */void RID_Alloc<GLES3::ParticlesStorage::Particles,true>::initialize_rid(RID_Alloc<GLES3::ParticlesStorage::Particles,true> *this, ulong param_2) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined4 uVar3;
   undefined8 uVar4;
   undefined4 *puVar5;
   uint uVar6;
   char *pcVar7;
   undefined1 auVar8[16];
   uVar2 = _LC182;
   uVar4 = _LC155;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar5 = (undefined4*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x210 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
      if ((int)puVar5[0x82] < 0) {
         uVar6 = ( uint )(param_2 >> 0x20);
         if (uVar6 == ( puVar5[0x82] & 0x7fffffff )) {
            *(undefined1*)( puVar5 + 1 ) = 1;
            puVar5[0x82] = uVar6;
            *(undefined8*)( puVar5 + 8 ) = uVar4;
            *(undefined8*)( puVar5 + 10 ) = 0;
            uVar1 = _UNK_00116388;
            uVar4 = __LC181;
            *(undefined8*)( puVar5 + 0x14 ) = uVar2;
            *(undefined8*)( puVar5 + 0x10 ) = uVar4;
            *(undefined8*)( puVar5 + 0x12 ) = uVar1;
            for (int i = 0; i < 3; i++) {
               *(undefined1(*) [16])( puVar5 + ( 4*i + 44 ) ) = (undefined1[16])0;
            }

            *(undefined2*)( puVar5 + 4 ) = 0;
            *(undefined2*)( puVar5 + 0x16 ) = 0;
            *(undefined8*)( puVar5 + 0x19 ) = 0x3f80000000000000;
            *puVar5 = 1;
            *(undefined8*)( puVar5 + 2 ) = 0;
            *(undefined8*)( puVar5 + 5 ) = 0x3f800000;
            *(undefined8*)( puVar5 + 0xc ) = 0;
            puVar5[0xe] = 0;
            *(undefined1*)( puVar5 + 0xf ) = 0;
            *(undefined1*)( (long)puVar5 + 0x5a ) = 0;
            *(undefined8*)( puVar5 + 0x17 ) = 0x3f800000;
            for (int i = 0; i < 3; i++) {
               *(undefined8*)( puVar5 + ( 4*i + 27 ) ) = 0;
               *(undefined8*)( puVar5 + ( 4*i + 29 ) ) = 0;
            }

            *(undefined8*)( puVar5 + 0x2a ) = 0;
            *(undefined1*)( puVar5 + 0x38 ) = 0;
            *(undefined8*)( puVar5 + 0x39 ) = 0;
            *(undefined1*)( puVar5 + 0x3b ) = 0;
            *(undefined8*)( puVar5 + 0x3c ) = 0;
            uVar2 = _LC185;
            uVar4 = _LC155;
            *(undefined1(*) [16])( puVar5 + 0x48 ) = (undefined1[16])0x0;
            auVar8 = ZEXT416(_LC156);
            *(undefined1(*) [16])( puVar5 + 0x58 ) = auVar8;
            *(undefined1(*) [16])( puVar5 + 0x5c ) = auVar8;
            *(undefined2*)( puVar5 + 0x53 ) = 1;
            *(undefined8*)( puVar5 + 0x70 ) = uVar2;
            *(undefined8*)( puVar5 + 0x7c ) = uVar2;
            *(undefined8*)( puVar5 + 0x50 ) = uVar4;
            *(undefined1(*) [16])( puVar5 + 0x68 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar5 + 0x6c ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar5 + 0x74 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( puVar5 + 0x78 ) = (undefined1[16])0x0;
            *(undefined8*)( puVar5 + 0x7e ) = uVar4;
            *(undefined1*)( puVar5 + 0x3e ) = 0;
            *(undefined8*)( puVar5 + 0x40 ) = 0;
            *(undefined8*)( puVar5 + 0x44 ) = 0;
            *(undefined8*)( puVar5 + 0x46 ) = 0;
            *(undefined4**)( puVar5 + 0x42 ) = puVar5;
            *(undefined8*)( puVar5 + 0x4c ) = 0;
            *(undefined8*)( puVar5 + 0x4e ) = 0;
            puVar5[0x52] = 0x1e;
            *(undefined8*)( puVar5 + 0x54 ) = 0;
            puVar5[0x56] = 0x3c23d70a;
            *(undefined1*)( puVar5 + 0x57 ) = 1;
            puVar5[0x60] = 0x3f800000;
            *(undefined8*)( puVar5 + 0x61 ) = 0;
            puVar5[99] = 0;
            *(undefined8*)( puVar5 + 100 ) = 0;
            puVar5[0x66] = 0;
            puVar5[0x67] = 0;
            *(undefined1*)( puVar5 + 0x80 ) = 0;
            uVar3 = Math::rand();
            puVar5[0x4e] = uVar3;
            return;
         }

         pcVar7 = "Attempting to initialize the wrong RID";
         uVar4 = 0xfc;
      }
 else {
         pcVar7 = "Initializing already initialized RID";
         uVar4 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar4, "Method/function failed. Returning: nullptr", pcVar7, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x114, "Parameter \"mem\" is null.", 0, 0);
   return;
}
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision, true>::allocate_rid() */ulong RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::allocate_rid(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true> *this) {
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
         goto LAB_00112739;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x78, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x70 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x1e;
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
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0x78 + 0x70 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00112739:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,
   false>::make_rid(GLES3::ParticlesStorage::ParticlesCollisionInstance const&) */ulong RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false>::make_rid(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false> *this, ParticlesCollisionInstance *param_1) {
   undefined8 *puVar1;
   void *pvVar2;
   code *pcVar3;
   undefined8 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   undefined4 *puVar11;
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

      lVar5 = Memory::realloc_static(*(void**)( this + 8 ), uVar17, false);
      *(long*)( this + 8 ) = lVar5;
      uVar12 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x48, false);
      pvVar2 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar5 + lVar16 ) = uVar12;
      lVar6 = Memory::realloc_static(pvVar2, uVar17, false);
      *(long*)( this + 0x10 ) = lVar6;
      uVar12 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar8 = *(uint*)( this + 0x18 );
      lVar5 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar6 + lVar16 ) = uVar12;
      if (uVar8 != 0) {
         lVar6 = *(long*)( lVar5 + lVar16 );
         lVar7 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar16 ) + 0x40 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x12;
            *(int*)( lVar6 + lVar7 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar7;
            uVar8 = *(uint*)( this + 0x18 );
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < uVar8 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar8;
      uVar13 = *(uint*)( this + 0x20 );
   }
 else {
      lVar5 = *(long*)( this + 0x10 );
      uVar8 = *(uint*)( this + 0x18 );
   }

   uVar13 = *(uint*)( *(long*)( lVar5 + ( (ulong)uVar13 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar13 % (ulong)uVar8 ) * 4 );
   uVar17 = (ulong)uVar13;
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 != 0x7fffffff) {
      lVar16 = *(long*)( this + 8 );
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( *(long*)( lVar16 + ( uVar17 / uVar8 ) * 8 ) + ( uVar17 % (ulong)uVar8 ) * 0x48 + 0x40 ) = uVar10 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      uVar14 = CONCAT44(uVar9, uVar13) & 0x7fffffffffffffff;
      if (( uVar14 != 0 ) && ( (uint)uVar14 < *(uint*)( this + 0x1c ) )) {
         puVar1 = (undefined8*)( *(long*)( lVar16 + ( uVar17 / *(uint*)( this + 0x18 ) ) * 8 ) + ( uVar17 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x48 );
         if ((int)*(uint*)( puVar1 + 8 ) < 0) {
            uVar13 = ( uint )(uVar14 >> 0x20);
            if (uVar13 == ( *(uint*)( puVar1 + 8 ) & 0x7fffffff )) {
               uVar12 = *(undefined8*)param_1;
               uVar4 = *(undefined8*)( param_1 + 8 );
               *(uint*)( puVar1 + 8 ) = uVar13;
               *puVar1 = uVar12;
               puVar1[1] = uVar4;
               for (int i = 0; i < 3; i++) {
                  uVar12 = *(undefined8*)( param_1 + ( 16*i + 24 ) );
                  puVar1[( 2*i + 2 )] = *(undefined8*)( param_1 + ( 16*i + 16 ) );
                  puVar1[( 2*i + 3 )] = uVar12;
               }

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
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
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
            goto LAB_00112f66;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_00112f71;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_00112f71;
   }
 else {
      LAB_00112f66:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_00112f71:if (uVar32 != 0) {
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
                  goto LAB_00113238;
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

   if ((float)uVar2 * __LC125 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_00113238;
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
   LAB_00113238:*param_1 = pDVar25;
   return;
}
/* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision, true>::initialize_rid(RID,
   GLES3::ParticlesStorage::ParticlesCollision const&) */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::initialize_rid(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true> *this, ulong param_2, undefined8 *param_3) {
   undefined8 *puVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   uint uVar6;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1c ) )) {
      puVar1 = (undefined8*)( *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x78 );
      if ((int)*(uint*)( puVar1 + 0xe ) < 0) {
         uVar6 = ( uint )(param_2 >> 0x20);
         if (uVar6 == ( *(uint*)( puVar1 + 0xe ) & 0x7fffffff )) {
            *(uint*)( puVar1 + 0xe ) = uVar6;
            uVar2 = *(undefined4*)( param_3 + 1 );
            *puVar1 = *param_3;
            uVar3 = *(undefined8*)( (long)param_3 + 0xc );
            *(undefined4*)( puVar1 + 1 ) = uVar2;
            *(undefined8*)( (long)puVar1 + 0xc ) = uVar3;
            *(undefined4*)( (long)puVar1 + 0x14 ) = *(undefined4*)( (long)param_3 + 0x14 );
            for (int i = 0; i < 4; i++) {
               puVar1[( i + 3 )] = param_3[( i + 3 )];
            }

            uVar3 = param_3[7];
            puVar1[0xd] = 0;
            puVar1[7] = uVar3;
            uVar6 = *(uint*)( param_3 + 0xd );
            *(undefined1(*) [16])( puVar1 + 9 ) = (undefined1[16])0x0;
            uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar6 * 4 );
            *(undefined1(*) [16])( puVar1 + 0xb ) = (undefined1[16])0x0;
            lVar4 = 1;
            if (5 < uVar6) {
               do {
                  if (uVar6 <= *(uint*)( hash_table_size_primes + lVar4 * 4 )) {
                     *(int*)( puVar1 + 0xd ) = (int)lVar4;
                     goto LAB_001134d8;
                  }

                  lVar4 = lVar4 + 1;
               }
 while ( lVar4 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
            }

            LAB_001134d8:if (( *(int*)( (long)param_3 + 0x6c ) != 0 ) && ( plVar5 = (long*)param_3[0xb] ),plVar5 != (long*)0x0) {
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar1 + 8 ), (bool)( (char)plVar5 + '\x10' ));
                  plVar5 = (long*)*plVar5;
               }
 while ( plVar5 != (long*)0x0 );
            }

            if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_001135e0;
         }

         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xfc, "Method/function failed. Returning: nullptr", "Attempting to initialize the wrong RID", 0, 0);
      }
 else {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0xf8, "Method/function failed. Returning: nullptr", "Initializing already initialized RID", 0, 0);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      return;
   }

   LAB_001135e0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,
   GLES3::ParticlesStorage::ParticlesViewSort, true>::adjust_heap(long, long, long,
   GLES3::ParticlesStorage::ParticleInstanceData3D,
   GLES3::ParticlesStorage::ParticleInstanceData3D*) const */void SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>::adjust_heap(float *param_1, long param_2, long param_3, long param_4, long param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   lVar7 = param_3 * 2 + 2;
   if (lVar7 < param_4) {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      lVar8 = param_3;
      do {
         puVar6 = (undefined8*)( ( param_2 + lVar7 ) * 0x40 + param_5 );
         puVar5 = (undefined8*)( ( param_2 + lVar7 + -1 ) * 0x40 + param_5 );
         lVar9 = lVar7;
         lVar10 = lVar7 + -1;
         if (*(float*)( (long)puVar5 + 0x2c ) * fVar3 + *(float*)( (long)puVar5 + 0x1c ) * fVar2 + *(float*)( (long)puVar5 + 0xc ) * fVar1 <= *(float*)( (long)puVar6 + 0x1c ) * fVar2 + *(float*)( (long)puVar6 + 0xc ) * fVar1 + *(float*)( (long)puVar6 + 0x2c ) * fVar3) {
            lVar9 = lVar7 + 1;
            puVar5 = puVar6;
            lVar10 = lVar7;
         }

         uVar4 = puVar5[1];
         lVar7 = lVar9 * 2;
         puVar6 = (undefined8*)( ( lVar8 + param_2 ) * 0x40 + param_5 );
         *puVar6 = *puVar5;
         puVar6[1] = uVar4;
         for (int i = 0; i < 3; i++) {
            uVar4 = puVar5[( 2*i + 3 )];
            puVar6[( 2*i + 2 )] = puVar5[( 2*i + 2 )];
            puVar6[( 2*i + 3 )] = uVar4;
         }

         lVar8 = lVar10;
      }
 while ( param_4 != lVar7 && SBORROW8(param_4, lVar7) == param_4 + lVar9 * -2 < 0 );
   }
 else {
      puVar5 = (undefined8*)( ( param_3 + param_2 ) * 0x40 + param_5 );
      lVar10 = param_3;
   }

   puVar6 = puVar5;
   if (param_4 == lVar7) {
      lVar10 = param_4 + -1;
      puVar6 = (undefined8*)( ( lVar10 + param_2 ) * 0x40 + param_5 );
      uVar4 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar4;
      for (int i = 0; i < 3; i++) {
         uVar4 = puVar6[( 2*i + 3 )];
         puVar5[( 2*i + 2 )] = puVar6[( 2*i + 2 )];
         puVar5[( 2*i + 3 )] = uVar4;
      }

   }

   lVar7 = ( lVar10 + -1 ) - ( lVar10 + -1 >> 0x3f );
   if (param_3 < lVar10) {
      fVar1 = *param_1;
      fVar2 = param_1[1];
      fVar3 = param_1[2];
      do {
         lVar8 = lVar7 >> 1;
         puVar5 = (undefined8*)( ( param_2 + lVar8 ) * 0x40 + param_5 );
         puVar6 = (undefined8*)( ( param_2 + lVar10 ) * 0x40 + param_5 );
         if (param_8._4_4_ * fVar1 + param_10._4_4_ * fVar2 + param_12._4_4_ * fVar3 <= *(float*)( (long)puVar5 + 0xc ) * fVar1 + *(float*)( (long)puVar5 + 0x1c ) * fVar2 + *(float*)( (long)puVar5 + 0x2c ) * fVar3) break;
         uVar4 = puVar5[1];
         *puVar6 = *puVar5;
         puVar6[1] = uVar4;
         for (int i = 0; i < 3; i++) {
            uVar4 = puVar5[( 2*i + 3 )];
            puVar6[( 2*i + 2 )] = puVar5[( 2*i + 2 )];
            puVar6[( 2*i + 3 )] = uVar4;
         }

         lVar7 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
         puVar6 = puVar5;
         lVar10 = lVar8;
      }
 while ( param_3 < lVar8 );
   }

   *puVar6 = param_7;
   puVar6[1] = param_8;
   puVar6[2] = param_9;
   puVar6[3] = param_10;
   puVar6[4] = param_11;
   puVar6[5] = param_12;
   puVar6[6] = param_13;
   puVar6[7] = param_14;
   return;
}
/* SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,
   GLES3::ParticlesStorage::ParticlesViewSort, true>::partial_sort(long, long, long,
   GLES3::ParticlesStorage::ParticleInstanceData3D*) const */void SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>::partial_sort(SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true> *this, long param_1, long param_2, long param_3, ParticleInstanceData3D_conflict *param_4) {
   long lVar1;
   bool bVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   undefined8 uVar11;
   long lVar12;
   ParticleInstanceData3D_conflict *pPVar13;
   long lVar14;
   ParticleInstanceData3D_conflict *pPVar15;
   long in_FS_OFFSET;
   lVar14 = param_3 - param_1;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar14 < 2) {
      if (param_2 <= param_3) goto LAB_00113afa;
      LAB_001138f0:pPVar13 = param_4 + param_1 * 0x40;
      lVar12 = param_3;
      pPVar15 = param_4 + param_3 * 0x40;
      do {
         while (*(float*)this * *(float*)( pPVar13 + 0xc ) + *(float*)( this + 4 ) * *(float*)( pPVar13 + 0x1c ) + *(float*)( this + 8 ) * *(float*)( pPVar13 + 0x2c ) <= *(float*)( pPVar15 + 0xc ) * *(float*)this + *(float*)( pPVar15 + 0x1c ) * *(float*)( this + 4 ) + *(float*)( pPVar15 + 0x2c ) * *(float*)( this + 8 )) {
            lVar12 = lVar12 + 1;
            pPVar15 = pPVar15 + 0x40;
            if (param_2 == lVar12) goto LAB_00113a2a;
         }
;
         uVar5 = *(undefined8*)( pPVar13 + 8 );
         uVar3 = *(undefined8*)pPVar15;
         uVar4 = *(undefined8*)( pPVar15 + 8 );
         *(undefined8*)pPVar15 = *(undefined8*)pPVar13;
         *(undefined8*)( pPVar15 + 8 ) = uVar5;
         uVar5 = *(undefined8*)( pPVar13 + 0x18 );
         uVar6 = *(undefined8*)( pPVar15 + 0x10 );
         uVar7 = *(undefined8*)( pPVar15 + 0x18 );
         uVar8 = *(undefined8*)( pPVar15 + 0x20 );
         uVar9 = *(undefined8*)( pPVar15 + 0x28 );
         uVar10 = *(undefined8*)( pPVar15 + 0x30 );
         uVar11 = *(undefined8*)( pPVar15 + 0x38 );
         *(undefined8*)( pPVar15 + 0x10 ) = *(undefined8*)( pPVar13 + 0x10 );
         *(undefined8*)( pPVar15 + 0x18 ) = uVar5;
         uVar5 = *(undefined8*)( pPVar13 + 0x28 );
         *(undefined8*)( pPVar15 + 0x20 ) = *(undefined8*)( pPVar13 + 0x20 );
         *(undefined8*)( pPVar15 + 0x28 ) = uVar5;
         uVar5 = *(undefined8*)( pPVar13 + 0x38 );
         *(undefined8*)( pPVar15 + 0x30 ) = *(undefined8*)( pPVar13 + 0x30 );
         *(undefined8*)( pPVar15 + 0x38 ) = uVar5;
         adjust_heap(this, param_1, 0, lVar14, param_4, pPVar13, uVar3, uVar4, uVar6, uVar7, uVar8, uVar9, uVar10, uVar11);
         lVar12 = lVar12 + 1;
         pPVar15 = pPVar15 + 0x40;
      }
 while ( param_2 != lVar12 );
      LAB_00113a2a:if (lVar14 < 2) goto LAB_00113afa;
   }
 else {
      for (lVar12 = lVar14 + -2 >> 1; adjust_heap(this, param_1, lVar12, lVar14, param_4),lVar12 != 0; lVar12 = lVar12 + -1) {}
      if (param_3 < param_2) goto LAB_001138f0;
   }

   pPVar13 = param_4 + param_1 * 0x40;
   pPVar15 = param_4 + param_3 * 0x40;
   lVar14 = ( param_3 + -1 ) - param_1;
   do {
      uVar3 = *(undefined8*)( pPVar13 + 8 );
      *(undefined8*)( pPVar15 + -0x40 ) = *(undefined8*)pPVar13;
      *(undefined8*)( pPVar15 + -0x38 ) = uVar3;
      for (int i = 0; i < 3; i++) {
         uVar3 = *(undefined8*)( pPVar13 + ( 16*i + 24 ) );
         *(undefined8*)( pPVar15 + ( 16*i + -48 ) ) = *(undefined8*)( pPVar13 + ( 16*i + 16 ) );
         *(undefined8*)( pPVar15 + ( 16*i + -40 ) ) = uVar3;
      }

      adjust_heap(this, param_1, 0, lVar14, param_4);
      bVar2 = 1 < lVar14;
      pPVar15 = pPVar15 + -0x40;
      lVar14 = lVar14 + -1;
   }
 while ( bVar2 );
   LAB_00113afa:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,
   GLES3::ParticlesStorage::ParticlesViewSort, true>::introsort(long, long,
   GLES3::ParticlesStorage::ParticleInstanceData3D*, long) const */void SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true>::introsort(SortArray<GLES3::ParticlesStorage::ParticleInstanceData3D,GLES3::ParticlesStorage::ParticlesViewSort,true> *this, long param_1, long param_2, ParticleInstanceData3D_conflict *param_3, long param_4) {
   ParticleInstanceData3D_conflict *pPVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   undefined8 uVar9;
   undefined8 uVar10;
   ParticleInstanceData3D_conflict *pPVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   ParticleInstanceData3D_conflict *pPVar15;
   long lVar16;
   ParticleInstanceData3D_conflict *pPVar17;
   float fVar18;
   float fVar19;
   float fVar20;
   float fVar21;
   float fVar22;
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   float fVar27;
   float fVar28;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   float local_64;
   float local_60;
   float local_5c;
   long local_50;
   lVar12 = param_2 - param_1;
   if (lVar12 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_00114027:partial_sort(this, param_1, param_2, param_2, param_3);
      return;
   }

   pPVar1 = param_3 + param_1 * 0x40;
   lVar13 = param_2;
   local_50 = param_4;
   LAB_00113be0:fVar18 = *(float*)this;
   fVar19 = *(float*)( this + 4 );
   lVar12 = ( lVar12 >> 1 ) + param_1;
   fVar20 = *(float*)( this + 8 );
   lVar16 = lVar13 * 0x40;
   local_64 = *(float*)( param_3 + lVar16 + -0x14 );
   fVar28 = *(float*)( pPVar1 + 0xc ) * fVar18;
   fVar27 = *(float*)( pPVar1 + 0x1c ) * fVar19;
   local_60 = *(float*)( param_3 + lVar16 + -0x24 );
   fVar32 = *(float*)( param_3 + lVar12 * 0x40 + 0xc ) * fVar18;
   fVar31 = *(float*)( param_3 + lVar12 * 0x40 + 0x1c ) * fVar19;
   fVar21 = *(float*)( param_3 + lVar12 * 0x40 + 0x2c ) * fVar20;
   local_50 = local_50 + -1;
   fVar25 = *(float*)( pPVar1 + 0x2c ) * fVar20;
   fVar30 = fVar28 + fVar27 + fVar25;
   fVar29 = fVar32 + fVar31 + fVar21;
   local_5c = *(float*)( param_3 + lVar16 + -0x34 );
   fVar22 = local_5c * fVar18;
   fVar23 = local_60 * fVar19;
   fVar24 = local_64 * fVar20;
   fVar26 = fVar22 + fVar23 + fVar24;
   if (fVar29 <= fVar30) {
      if (fVar26 <= fVar30) {
         if (fVar29 < fVar26) goto LAB_00113d2a;
         goto LAB_00113fcb;
      }

   }
 else {
      if (fVar29 < fVar26) {
         LAB_00113fcb:fVar22 = fVar32;
         fVar23 = fVar31;
         fVar24 = fVar21;
         local_64 = *(float*)( param_3 + lVar12 * 0x40 + 0x2c );
         local_60 = *(float*)( param_3 + lVar12 * 0x40 + 0x1c );
         local_5c = *(float*)( param_3 + lVar12 * 0x40 + 0xc );
         goto LAB_00113d2a;
      }

      if (fVar30 < fVar26) goto LAB_00113d2a;
   }

   fVar22 = fVar28;
   fVar23 = fVar27;
   fVar24 = fVar25;
   local_64 = *(float*)( pPVar1 + 0x2c );
   local_60 = *(float*)( pPVar1 + 0x1c );
   local_5c = *(float*)( pPVar1 + 0xc );
   LAB_00113d2a:pPVar15 = pPVar1;
   param_2 = param_1;
   lVar12 = lVar13;
   do {
      fVar21 = fVar22 + fVar23 + fVar24;
      if (*(float*)( pPVar15 + 0xc ) * fVar18 + *(float*)( pPVar15 + 0x1c ) * fVar19 + *(float*)( pPVar15 + 0x2c ) * fVar20 < fVar21) {
         if (lVar13 + -1 == param_2) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            fVar19 = *(float*)( this + 4 );
            fVar18 = *(float*)this;
            fVar20 = *(float*)( this + 8 );
            fVar21 = local_60 * fVar19 + local_5c * fVar18 + local_64 * fVar20;
            goto LAB_00113d9f;
         }

      }
 else {
         LAB_00113d9f:lVar12 = lVar12 + -1;
         lVar14 = lVar12 * 0x40;
         pPVar17 = param_3 + lVar14;
         lVar16 = -0x80 - (long)pPVar17;
         fVar22 = *(float*)( pPVar17 + 0xc ) * fVar18 + *(float*)( pPVar17 + 0x1c ) * fVar19 + *(float*)( pPVar17 + 0x2c ) * fVar20;
         pPVar11 = param_3 + lVar14 + 0x40;
         while (fVar21 < fVar22) {
            if (param_1 == lVar12) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
               break;
            }

            lVar12 = lVar12 + -1;
            pPVar17 = pPVar17 + (long)( param_3 + lVar14 + 0x40 + lVar16 );
            fVar22 = *(float*)( pPVar11 + -0x74 ) * fVar18 + *(float*)( pPVar11 + -100 ) * fVar19 + *(float*)( pPVar11 + -0x54 ) * fVar20;
            pPVar11 = pPVar11 + -0x40;
         }
;
         if (lVar12 <= param_2) break;
         uVar2 = *(undefined8*)( pPVar17 + 8 );
         uVar3 = *(undefined8*)pPVar15;
         uVar4 = *(undefined8*)( pPVar15 + 8 );
         uVar5 = *(undefined8*)( pPVar15 + 0x10 );
         uVar6 = *(undefined8*)( pPVar15 + 0x18 );
         uVar7 = *(undefined8*)( pPVar15 + 0x20 );
         uVar8 = *(undefined8*)( pPVar15 + 0x28 );
         *(undefined8*)pPVar15 = *(undefined8*)pPVar17;
         *(undefined8*)( pPVar15 + 8 ) = uVar2;
         uVar2 = *(undefined8*)( pPVar17 + 0x18 );
         uVar9 = *(undefined8*)( pPVar15 + 0x30 );
         uVar10 = *(undefined8*)( pPVar15 + 0x38 );
         *(undefined8*)( pPVar15 + 0x10 ) = *(undefined8*)( pPVar17 + 0x10 );
         *(undefined8*)( pPVar15 + 0x18 ) = uVar2;
         uVar2 = *(undefined8*)( pPVar17 + 0x28 );
         *(undefined8*)( pPVar15 + 0x20 ) = *(undefined8*)( pPVar17 + 0x20 );
         *(undefined8*)( pPVar15 + 0x28 ) = uVar2;
         uVar2 = *(undefined8*)( pPVar17 + 0x38 );
         *(undefined8*)( pPVar15 + 0x30 ) = *(undefined8*)( pPVar17 + 0x30 );
         *(undefined8*)( pPVar15 + 0x38 ) = uVar2;
         *(undefined8*)pPVar17 = uVar3;
         *(undefined8*)( pPVar17 + 8 ) = uVar4;
         *(undefined8*)( pPVar17 + 0x10 ) = uVar5;
         *(undefined8*)( pPVar17 + 0x18 ) = uVar6;
         *(undefined8*)( pPVar17 + 0x20 ) = uVar7;
         *(undefined8*)( pPVar17 + 0x28 ) = uVar8;
         *(undefined8*)( pPVar17 + 0x30 ) = uVar9;
         *(undefined8*)( pPVar17 + 0x38 ) = uVar10;
         fVar18 = *(float*)this;
         fVar19 = *(float*)( this + 4 );
         fVar20 = *(float*)( this + 8 );
         fVar22 = local_5c * fVar18;
         fVar23 = local_60 * fVar19;
         fVar24 = local_64 * fVar20;
      }

      pPVar15 = pPVar15 + 0x40;
      param_2 = param_2 + 1;
   }
 while ( true );
   introsort(this, param_2, lVar13, param_3, local_50);
   lVar12 = param_2 - param_1;
   if (lVar12 < 0x11) {
      return;
   }

   lVar13 = param_2;
   if (local_50 == 0) goto LAB_00114027;
   goto LAB_00113be0;
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance, false>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollisionInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision, true>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::ParticlesCollision,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::ParticlesStorage::Particles, true>::~RID_Alloc() */void RID_Alloc<GLES3::ParticlesStorage::Particles,true>::~RID_Alloc(RID_Alloc<GLES3::ParticlesStorage::Particles,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderGLES3::Version::Specialization::~Specialization() */void ShaderGLES3::Version::Specialization::~Specialization(Specialization *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ParticlesCopyShaderGLES3::~ParticlesCopyShaderGLES3() */void ParticlesCopyShaderGLES3::~ParticlesCopyShaderGLES3(ParticlesCopyShaderGLES3 *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


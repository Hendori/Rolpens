/* GLES3::Utilities::get_captured_timestamps_count() const */undefined4 GLES3::Utilities::get_captured_timestamps_count(Utilities *this) {
   return *(undefined4*)( this + ( ulong ) * (uint*)( this + 0xe50 ) * 0x468 + 0x570 );
}
/* GLES3::Utilities::get_captured_timestamps_frame() const */undefined8 GLES3::Utilities::get_captured_timestamps_frame(Utilities *this) {
   return *(undefined8*)( this + ( ulong ) * (uint*)( this + 0xe50 ) * 0x468 + 0x578 );
}
/* GLES3::Utilities::set_debug_generate_wireframes(bool) */void GLES3::Utilities::set_debug_generate_wireframes(Utilities *this, bool param_1) {
   *(bool*)( Config::singleton + 0x40 ) = param_1;
   return;
}
/* GLES3::Utilities::update_memory_info() */void GLES3::Utilities::update_memory_info(void) {
   return;
}
/* GLES3::Utilities::get_video_adapter_type() const */undefined8 GLES3::Utilities::get_video_adapter_type(void) {
   return 0;
}
/* GLES3::Utilities::visibility_notifier_get_aabb(RID) const */undefined8 *GLES3::Utilities::visibility_notifier_get_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x2c ) )) {
      puVar3 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x28 ) ) * 0x70 + *(long*)( *(long*)( param_2 + 0x18 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x28 ) ) * 8 ) );
      if (*(int*)( puVar3 + 0xd ) == (int)( param_3 >> 0x20 )) {
         uVar2 = puVar3[1];
         uVar1 = puVar3[2];
         *param_1 = *puVar3;
         param_1[1] = uVar2;
         param_1[2] = uVar1;
         return param_1;
      }

      if (*(int*)( puVar3 + 0xd ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("visibility_notifier_get_aabb", "drivers/gles3/storage/utilities.cpp", 0x123, "Parameter \"vn\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* GLES3::Utilities::visibility_notifier_free(RID) */long GLES3::Utilities::visibility_notifier_free(Utilities *this, ulong param_2) {
   ulong uVar1;
   uint uVar2;
   int iVar3;
   uint uVar4;
   long lVar5;
   long lVar6;
   uVar4 = (uint)param_2;
   iVar3 = (int)( param_2 >> 0x20 );
   if (( param_2 != 0 ) && ( uVar4 < *(uint*)( this + 0x2c ) )) {
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar5 + 0x68 ) == iVar3) goto LAB_001001bc;
      if (*(int*)( lVar5 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         lVar5 = 0;
         goto LAB_001001bc;
      }

   }

   lVar5 = 0;
   LAB_001001bc:Dependency::deleted_notify((RID*)( lVar5 + 0x38 ));
   if (uVar4 < *(uint*)( this + 0x2c )) {
      uVar1 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 );
      lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70;
      lVar6 = *(long*)( *(long*)( this + 0x18 ) + uVar1 * 8 ) + lVar5;
      if (*(int*)( lVar6 + 0x68 ) < 0) {
         lVar5 = 0;
         _err_print_error(&_LC8, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
      }
 else if (iVar3 == *(int*)( lVar6 + 0x68 )) {
         Dependency::~Dependency((Dependency*)( lVar6 + 0x38 ));
         Callable::~Callable((Callable*)( lVar6 + 0x28 ));
         Callable::~Callable((Callable*)( lVar6 + 0x18 ));
         lVar6 = *(long*)( this + 0x20 );
         *(undefined4*)( *(long*)( *(long*)( this + 0x18 ) + uVar1 * 8 ) + 0x68 + lVar5 ) = 0xffffffff;
         uVar2 = *(int*)( this + 0x30 ) - 1;
         *(uint*)( this + 0x30 ) = uVar2;
         lVar5 = *(long*)( lVar6 + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
         *(uint*)( lVar5 + ( (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x28 ) ) * 4 ) = uVar4;
      }
 else {
         lVar5 = _err_print_error(&_LC8, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      }

      return lVar5;
   }

   lVar5 = _err_print_error(&_LC8, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
   return lVar5;
}
/* GLES3::Utilities::visibility_notifier_set_aabb(RID, AABB const&) */void GLES3::Utilities::visibility_notifier_set_aabb(Utilities *this, ulong param_2, undefined8 *param_3) {
   undefined8 uVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      if (*(int*)( puVar2 + 0xd ) == (int)( param_2 >> 0x20 )) {
         uVar1 = param_3[1];
         *puVar2 = *param_3;
         puVar2[1] = uVar1;
         puVar2[2] = param_3[2];
         Dependency::changed_notify(puVar2 + 7, 0);
         return;
      }

      if (*(int*)( puVar2 + 0xd ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("visibility_notifier_set_aabb", "drivers/gles3/storage/utilities.cpp", 0x115, "Parameter \"vn\" is null.", 0, 0);
   return;
}
/* GLES3::Utilities::visibility_notifier_set_callbacks(RID, Callable const&, Callable const&) */void GLES3::Utilities::visibility_notifier_set_callbacks(Utilities *this, ulong param_2, Callable *param_3, Callable *param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar1 + 0x68 ) == (int)( param_2 >> 0x20 )) {
         Callable::operator =((Callable*)( lVar1 + 0x18 ), param_3);
         Callable::operator =((Callable*)( lVar1 + 0x28 ), param_4);
         return;
      }

      if (*(int*)( lVar1 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("visibility_notifier_set_callbacks", "drivers/gles3/storage/utilities.cpp", 0x11c, "Parameter \"vn\" is null.", 0, 0);
   return;
}
/* GLES3::Utilities::get_captured_timestamp_gpu_time(unsigned int) const */undefined8 GLES3::Utilities::get_captured_timestamp_gpu_time(Utilities *this, uint param_1) {
   uint uVar1;
   code *pcVar2;
   uVar1 = *(uint*)( this + 0xe50 );
   if (*(uint*)( this + (ulong)uVar1 * 0x468 + 0x570 ) <= param_1) {
      _err_print_index_error("get_captured_timestamp_gpu_time", "drivers/gles3/storage/utilities.cpp", 0x176, (ulong)param_1, ( ulong ) * (uint*)( this + (ulong)uVar1 * 0x468 + 0x570 ), "p_index", "frames[frame].timestamp_result_count", "", false, false);
      return 0;
   }

   if (param_1 < *(uint*)( this + (ulong)uVar1 * 0x468 + 0x560 )) {
      return *(undefined8*)( *(long*)( this + (ulong)uVar1 * 0x468 + 0x568 ) + (ulong)param_1 * 8 );
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)param_1, ( ulong ) * (uint*)( this + (ulong)uVar1 * 0x468 + 0x560 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* GLES3::Utilities::get_captured_timestamp_cpu_time(unsigned int) const */undefined8 GLES3::Utilities::get_captured_timestamp_cpu_time(Utilities *this, uint param_1) {
   uint uVar1;
   code *pcVar2;
   uVar1 = *(uint*)( this + 0xe50 );
   if (*(uint*)( this + (ulong)uVar1 * 0x468 + 0x570 ) <= param_1) {
      _err_print_index_error("get_captured_timestamp_cpu_time", "drivers/gles3/storage/utilities.cpp", 0x17b, (ulong)param_1, ( ulong ) * (uint*)( this + (ulong)uVar1 * 0x468 + 0x570 ), "p_index", "frames[frame].timestamp_result_count", "", false, false);
      return 0;
   }

   if (param_1 < *(uint*)( this + (ulong)uVar1 * 0x468 + 0x550 )) {
      return *(undefined8*)( *(long*)( this + (ulong)uVar1 * 0x468 + 0x558 ) + (ulong)param_1 * 8 );
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)param_1, ( ulong ) * (uint*)( this + (ulong)uVar1 * 0x468 + 0x550 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* GLES3::Utilities::update_dirty_resources() */void GLES3::Utilities::update_dirty_resources(void) {
   GLES3::MaterialStorage::get_singleton();
   GLES3::MaterialStorage::_update_global_shader_uniforms();
   GLES3::MaterialStorage::get_singleton();
   GLES3::MaterialStorage::_update_queued_materials();
   GLES3::MeshStorage::get_singleton();
   GLES3::MeshStorage::_update_dirty_skeletons();
   GLES3::MeshStorage::get_singleton();
   GLES3::MeshStorage::_update_dirty_multimeshes();
   GLES3::TextureStorage::get_singleton();
   GLES3::TextureStorage::update_texture_atlas();
   return;
}
/* GLES3::Utilities::has_os_feature(String const&) const */undefined1 GLES3::Utilities::has_os_feature(Utilities *this, String *param_1) {
   long lVar1;
   char cVar2;
   undefined1 uVar3;
   lVar1 = Config::singleton;
   if (Config::singleton == 0) {
      return 0;
   }

   cVar2 = String::operator ==(param_1, "rgtc");
   if (cVar2 == '\0') {
      cVar2 = String::operator ==(param_1, "s3tc");
      if (cVar2 != '\0') {
         return *(undefined1*)( lVar1 + 0x72 );
      }

      cVar2 = String::operator ==(param_1, "bptc");
      if (cVar2 == '\0') {
         cVar2 = String::operator ==(param_1, "astc");
         if (cVar2 == '\0') {
            cVar2 = String::operator ==(param_1, "etc2");
            if (cVar2 == '\0') {
               cVar2 = String::operator ==(param_1, "astc_hdr");
               if (cVar2 == '\0') {
                  return 0;
               }

               uVar3 = *(undefined1*)( lVar1 + 0x77 );
            }
 else {
               uVar3 = *(undefined1*)( lVar1 + 0x75 );
            }

         }
 else {
            uVar3 = *(undefined1*)( lVar1 + 0x76 );
         }

      }
 else {
         uVar3 = *(undefined1*)( lVar1 + 0x74 );
      }

   }
 else {
      uVar3 = *(undefined1*)( lVar1 + 0x73 );
   }

   return uVar3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::get_video_adapter_api_version() const */Utilities * __thiscall GLES3::Utilities::get_video_adapter_api_version(Utilities *this){
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = ( *_glad_glGetString )(0x1f02);
   String::utf8((char*)this, iVar2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::Utilities::get_rendering_info(RenderingServer::RenderingInfo) */long GLES3::Utilities::get_rendering_info(Utilities *this, int param_2) {
   if (param_2 == 3) {
      return *(long*)( this + 0x100 ) + *(long*)( this + 0x108 );
   }

   if (param_2 != 4) {
      if (param_2 != 5) {
         return 0;
      }

      return *(long*)( this + 0xf8 ) + *(long*)( this + 0x108 ) + *(long*)( this + 0x100 );
   }

   return *(long*)( this + 0xf8 );
}
/* GLES3::Utilities::get_maximum_viewport_size() const */undefined8 GLES3::Utilities::get_maximum_viewport_size(void) {
   if (Config::singleton != 0) {
      return *(undefined8*)( Config::singleton + 0x10 );
   }

   _err_print_error("get_maximum_viewport_size", "drivers/gles3/storage/utilities.cpp", 0x1d3, "Parameter \"config\" is null.", 0, 0);
   return 0;
}
/* GLES3::Utilities::get_maximum_shader_varyings() const */undefined4 GLES3::Utilities::get_maximum_shader_varyings(void) {
   if (Config::singleton != 0) {
      return *(undefined4*)( Config::singleton + 0x20 );
   }

   _err_print_error("get_maximum_shader_varyings", "drivers/gles3/storage/utilities.cpp", 0x1d9, "Parameter \"config\" is null.", 0, 0);
   return 0x1f;
}
/* GLES3::Utilities::get_maximum_uniform_buffer_size() const */undefined8 GLES3::Utilities::get_maximum_uniform_buffer_size(void) {
   if (Config::singleton != 0) {
      return *(undefined8*)( Config::singleton + 0x18 );
   }

   _err_print_error("get_maximum_uniform_buffer_size", "drivers/gles3/storage/utilities.cpp", 0x1df, "Parameter \"config\" is null.", 0, 0);
   return 0x10000;
}
/* GLES3::Utilities::free(RID) */undefined8 GLES3::Utilities::free(Utilities *this, ulong param_2) {
   pthread_mutex_t *ppVar1;
   int iVar2;
   long lVar3;
   long *plVar4;
   uint uVar5;
   uint uVar6;
   ulong uVar7;
   uVar5 = (uint)param_2;
   uVar7 = param_2 & 0xffffffff;
   lVar3 = GLES3::TextureStorage::get_singleton();
   uVar6 = ( uint )(param_2 >> 0x20);
   if (( ( uVar5 < *(uint*)( lVar3 + 0x194 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar3 + 400 ) ) * 0xf0 + *(long*)( *(long*)( lVar3 + 0x180 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar3 + 400 ) ) * 8 ) + 0xe8 ) & 0x7fffffff ) == uVar6 )) {
      plVar4 = (long*)GLES3::TextureStorage::get_singleton();
      ( **(code**)( *plVar4 + 0x1f0 ) )(plVar4, param_2);
      return 1;
   }

   lVar3 = GLES3::TextureStorage::get_singleton();
   ppVar1 = (pthread_mutex_t*)( lVar3 + 0x108 );
   iVar2 = pthread_mutex_lock(ppVar1);
   if (iVar2 == 0) {
      if (( ( uVar5 < *(uint*)( lVar3 + 0xf4 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0xf0 ) ) * 0xf0 + *(long*)( *(long*)( lVar3 + 0xe0 ) + ( uVar7 / *(uint*)( lVar3 + 0xf0 ) ) * 8 ) + 0xe8 ) & 0x7fffffff ) == uVar6 )) {
         pthread_mutex_unlock(ppVar1);
         plVar4 = (long*)GLES3::TextureStorage::get_singleton();
         ( **(code**)( *plVar4 + 0x50 ) )(plVar4, param_2);
         return 1;
      }

      pthread_mutex_unlock(ppVar1);
      lVar3 = GLES3::TextureStorage::get_singleton();
      ppVar1 = (pthread_mutex_t*)( lVar3 + 0xb0 );
      iVar2 = pthread_mutex_lock(ppVar1);
      if (iVar2 == 0) {
         if (( ( uVar5 < *(uint*)( lVar3 + 0x9c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x98 ) ) * 0x40 + *(long*)( *(long*)( lVar3 + 0x88 ) + ( uVar7 / *(uint*)( lVar3 + 0x98 ) ) * 8 ) + 0x38 ) & 0x7fffffff ) == uVar6 )) {
            pthread_mutex_unlock(ppVar1);
            plVar4 = (long*)GLES3::TextureStorage::get_singleton();
            ( **(code**)( *plVar4 + 0x10 ) )(plVar4, param_2);
            return 1;
         }

         pthread_mutex_unlock(ppVar1);
         lVar3 = GLES3::MaterialStorage::get_singleton();
         ppVar1 = (pthread_mutex_t*)( lVar3 + 0x100 );
         iVar2 = pthread_mutex_lock(ppVar1);
         if (iVar2 == 0) {
            if (( ( uVar5 < *(uint*)( lVar3 + 0xec ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0xe8 ) ) * 0x80 + *(long*)( *(long*)( lVar3 + 0xd8 ) + ( uVar7 / *(uint*)( lVar3 + 0xe8 ) ) * 8 ) + 0x78 ) & 0x7fffffff ) == uVar6 )) {
               pthread_mutex_unlock(ppVar1);
               plVar4 = (long*)GLES3::MaterialStorage::get_singleton();
               ( **(code**)( *plVar4 + 0x80 ) )(plVar4, param_2);
               return 1;
            }

            pthread_mutex_unlock(ppVar1);
            lVar3 = GLES3::MaterialStorage::get_singleton();
            ppVar1 = (pthread_mutex_t*)( lVar3 + 0x180 );
            iVar2 = pthread_mutex_lock(ppVar1);
            if (iVar2 == 0) {
               if (( ( uVar5 < *(uint*)( lVar3 + 0x16c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x168 ) ) * 0xc0 + *(long*)( *(long*)( lVar3 + 0x158 ) + ( uVar7 / *(uint*)( lVar3 + 0x168 ) ) * 8 ) + 0xb8 ) & 0x7fffffff ) == uVar6 )) {
                  pthread_mutex_unlock(ppVar1);
                  plVar4 = (long*)GLES3::MaterialStorage::get_singleton();
                  ( **(code**)( *plVar4 + 0xd8 ) )(plVar4, param_2);
                  return 1;
               }

               pthread_mutex_unlock(ppVar1);
               lVar3 = GLES3::MeshStorage::get_singleton();
               ppVar1 = (pthread_mutex_t*)( lVar3 + 0x1b0 );
               iVar2 = pthread_mutex_lock(ppVar1);
               if (iVar2 == 0) {
                  if (( ( uVar5 < *(uint*)( lVar3 + 0x19c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( *(long*)( *(long*)( lVar3 + 0x188 ) + ( uVar7 / *(uint*)( lVar3 + 0x198 ) ) * 8 ) + ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x198 ) ) * 0xd8 + 0xd0 ) & 0x7fffffff ) == uVar6 )) {
                     pthread_mutex_unlock(ppVar1);
                     plVar4 = (long*)GLES3::MeshStorage::get_singleton();
                     ( **(code**)( *plVar4 + 0x20 ) )(plVar4, param_2);
                     return 1;
                  }

                  pthread_mutex_unlock(ppVar1);
                  lVar3 = GLES3::MeshStorage::get_singleton();
                  ppVar1 = (pthread_mutex_t*)( lVar3 + 0x280 );
                  iVar2 = pthread_mutex_lock(ppVar1);
                  if (iVar2 == 0) {
                     if (( ( uVar5 < *(uint*)( lVar3 + 0x26c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( lVar3 + 600 ) + ( uVar7 / *(uint*)( lVar3 + 0x268 ) ) * 8 ) + 0x110 ) & 0x7fffffff ) == uVar6 )) {
                        pthread_mutex_unlock(ppVar1);
                        plVar4 = (long*)GLES3::MeshStorage::get_singleton();
                        ( **(code**)( *plVar4 + 0x118 ) )(plVar4, param_2);
                        return 1;
                     }

                     pthread_mutex_unlock(ppVar1);
                     lVar3 = GLES3::MeshStorage::get_singleton();
                     if (( ( uVar5 < *(uint*)( lVar3 + 500 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( *(long*)( *(long*)( lVar3 + 0x1e0 ) + ( uVar7 / *(uint*)( lVar3 + 0x1f0 ) ) * 8 ) + ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x1f0 ) ) * 0xa8 + 0xa0 ) & 0x7fffffff ) == uVar6 )) {
                        plVar4 = (long*)GLES3::MeshStorage::get_singleton();
                        ( **(code**)( *plVar4 + 0xd8 ) )(plVar4, param_2);
                        return 1;
                     }

                     lVar3 = GLES3::LightStorage::get_singleton();
                     ppVar1 = (pthread_mutex_t*)( lVar3 + 0x38 );
                     iVar2 = pthread_mutex_lock(ppVar1);
                     if (iVar2 == 0) {
                        if (( ( uVar5 < *(uint*)( lVar3 + 0x24 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x20 ) ) * 0xe8 + *(long*)( *(long*)( lVar3 + 0x10 ) + ( uVar7 / *(uint*)( lVar3 + 0x20 ) ) * 8 ) + 0xe0 ) & 0x7fffffff ) == uVar6 )) {
                           pthread_mutex_unlock(ppVar1);
                           plVar4 = (long*)GLES3::LightStorage::get_singleton();
                           ( **(code**)( *plVar4 + 0x40 ) )(plVar4, param_2);
                           return 1;
                        }

                        pthread_mutex_unlock(ppVar1);
                        lVar3 = GLES3::LightStorage::get_singleton();
                        ppVar1 = (pthread_mutex_t*)( lVar3 + 0x1f8 );
                        iVar2 = pthread_mutex_lock(ppVar1);
                        if (iVar2 == 0) {
                           if (( ( uVar5 < *(uint*)( lVar3 + 0x1e4 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x1e0 ) ) * 0xb8 + *(long*)( *(long*)( lVar3 + 0x1d0 ) + ( uVar7 / *(uint*)( lVar3 + 0x1e0 ) ) * 8 ) + 0xb0 ) & 0x7fffffff ) == uVar6 )) {
                              pthread_mutex_unlock(ppVar1);
                              plVar4 = (long*)GLES3::LightStorage::get_singleton();
                              ( **(code**)( *plVar4 + 0x2e0 ) )(plVar4, param_2);
                              return 1;
                           }

                           pthread_mutex_unlock(ppVar1);
                           lVar3 = GLES3::LightStorage::get_singleton();
                           ppVar1 = (pthread_mutex_t*)( lVar3 + 0xe8 );
                           iVar2 = pthread_mutex_lock(ppVar1);
                           if (iVar2 == 0) {
                              if (( ( uVar5 < *(uint*)( lVar3 + 0xd4 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0xd0 ) ) * 0x90 + *(long*)( *(long*)( lVar3 + 0xc0 ) + ( uVar7 / *(uint*)( lVar3 + 0xd0 ) ) * 8 ) + 0x88 ) & 0x7fffffff ) == uVar6 )) {
                                 pthread_mutex_unlock(ppVar1);
                                 plVar4 = (long*)GLES3::LightStorage::get_singleton();
                                 ( **(code**)( *plVar4 + 400 ) )(plVar4, param_2);
                                 return 1;
                              }

                              pthread_mutex_unlock(ppVar1);
                              lVar3 = GLES3::LightStorage::get_singleton();
                              if (uVar5 < *(uint*)( lVar3 + 300 )) {
                                 if (param_2 >> 0x20 == 0x7fffffff) {
                                    GLES3::LightStorage::get_singleton();
                                 }
 else {
                                    if (( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x128 ) ) * 0x50 + *(long*)( *(long*)( lVar3 + 0x118 ) + ( uVar7 / *(uint*)( lVar3 + 0x128 ) ) * 8 ) + 0x48 ) & 0x7fffffff ) == uVar6) {
                                       plVar4 = (long*)GLES3::LightStorage::get_singleton();
                                       ( **(code**)( *plVar4 + 0x268 ) )(plVar4, param_2);
                                       return 1;
                                    }

                                    lVar3 = GLES3::LightStorage::get_singleton();
                                    if (uVar5 < *(uint*)( lVar3 + 0x184 )) goto LAB_00100fa5;
                                 }

                              }
 else {
                                 lVar3 = GLES3::LightStorage::get_singleton();
                                 if (( uVar5 < *(uint*)( lVar3 + 0x184 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
                                    LAB_00100fa5:if (( *(uint*)( *(long*)( *(long*)( lVar3 + 0x170 ) + ( uVar7 / *(uint*)( lVar3 + 0x180 ) ) * 8 ) + ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x180 ) ) * 0x68 + 0x60 ) & 0x7fffffff ) == uVar6) {
                                       plVar4 = (long*)GLES3::LightStorage::get_singleton();
                                       ( **(code**)( *plVar4 + 0x288 ) )(plVar4, param_2);
                                       return 1;
                                    }

                                 }

                              }

                              lVar3 = GLES3::ParticlesStorage::get_singleton();
                              ppVar1 = (pthread_mutex_t*)( lVar3 + 0x198 );
                              iVar2 = pthread_mutex_lock(ppVar1);
                              if (iVar2 == 0) {
                                 if (( ( uVar5 < *(uint*)( lVar3 + 0x184 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x180 ) ) * 0x210 + *(long*)( *(long*)( lVar3 + 0x170 ) + ( uVar7 / *(uint*)( lVar3 + 0x180 ) ) * 8 ) + 0x208 ) & 0x7fffffff ) == uVar6 )) {
                                    pthread_mutex_unlock(ppVar1);
                                    plVar4 = (long*)GLES3::ParticlesStorage::get_singleton();
                                    ( **(code**)( *plVar4 + 0x20 ) )(plVar4, param_2);
                                    return 1;
                                 }

                                 pthread_mutex_unlock(ppVar1);
                                 lVar3 = GLES3::ParticlesStorage::get_singleton();
                                 ppVar1 = (pthread_mutex_t*)( lVar3 + 0x1f0 );
                                 iVar2 = pthread_mutex_lock(ppVar1);
                                 if (iVar2 == 0) {
                                    if (( ( uVar5 < *(uint*)( lVar3 + 0x1dc ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( *(long*)( *(long*)( lVar3 + 0x1c8 ) + ( uVar7 / *(uint*)( lVar3 + 0x1d8 ) ) * 8 ) + ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x1d8 ) ) * 0x78 + 0x70 ) & 0x7fffffff ) == uVar6 )) {
                                       pthread_mutex_unlock(ppVar1);
                                       plVar4 = (long*)GLES3::ParticlesStorage::get_singleton();
                                       ( **(code**)( *plVar4 + 400 ) )(plVar4, param_2);
                                       return 1;
                                    }

                                    pthread_mutex_unlock(ppVar1);
                                    lVar3 = GLES3::ParticlesStorage::get_singleton();
                                    if (( ( uVar5 < *(uint*)( lVar3 + 0x234 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( *(long*)( *(long*)( lVar3 + 0x220 ) + ( uVar7 / *(uint*)( lVar3 + 0x230 ) ) * 8 ) + ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x230 ) ) * 0x48 + 0x40 ) & 0x7fffffff ) == uVar6 )) goto LAB_00101358;
                                    lVar3 = GLES3::MeshStorage::get_singleton();
                                    ppVar1 = (pthread_mutex_t*)( lVar3 + 0x2e0 );
                                    iVar2 = pthread_mutex_lock(ppVar1);
                                    if (iVar2 == 0) {
                                       if (uVar5 < *(uint*)( lVar3 + 0x2cc )) {
                                          if (param_2 >> 0x20 == 0x7fffffff) {
                                             pthread_mutex_unlock(ppVar1);
                                             return 0;
                                          }

                                          if (( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( lVar3 + 0x2c8 ) ) * 0x90 + *(long*)( *(long*)( lVar3 + 0x2b8 ) + ( uVar7 / *(uint*)( lVar3 + 0x2c8 ) ) * 8 ) + 0x88 ) & 0x7fffffff ) == uVar6) {
                                             pthread_mutex_unlock(ppVar1);
                                             plVar4 = (long*)GLES3::MeshStorage::get_singleton();
                                             ( **(code**)( *plVar4 + 0x2c0 ) )(plVar4, param_2);
                                             return 1;
                                          }

                                          pthread_mutex_unlock(ppVar1);
                                          if (*(uint*)( this + 0x2c ) <= uVar5) {
                                             return 0;
                                          }

                                       }
 else {
                                          pthread_mutex_unlock(ppVar1);
                                          if (*(uint*)( this + 0x2c ) <= uVar5) {
                                             return 0;
                                          }

                                          if (param_2 >> 0x20 == 0x7fffffff) {
                                             return 0;
                                          }

                                       }

                                       if (( *(uint*)( ( uVar7 % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( uVar7 / *(uint*)( this + 0x28 ) ) * 8 ) + 0x68 ) & 0x7fffffff ) == uVar6) {
                                          ( **(code**)( *(long*)this + 0x38 ) )(this, param_2);
                                          return 1;
                                       }

                                       return 0;
                                    }

                                 }

                              }

                           }

                        }

                     }

                  }

               }

            }

         }

      }

   }

   std::__throw_system_error(iVar2);
   LAB_00101358:plVar4 = (long*)GLES3::ParticlesStorage::get_singleton();
   ( **(code**)( *plVar4 + 0x210 ) )(plVar4, param_2);
   return 1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::get_base_type(RID) const */char *__thiscallGLES3::Utilities::get_base_type(Utilities *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *ppVar2;
   uint uVar3;
   int iVar4;
   long lVar5;
   uint uVar6;
   uint uVar7;
   char *pcVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long lStack_60;
   long lStack_58;
   ulong uStack_48;
   long lStack_40;
   lStack_40 = 0x1013ed;
   lVar5 = GLES3::MeshStorage::get_singleton();
   ppVar2 = (pthread_mutex_t*)( lVar5 + 0x1b0 );
   lStack_40 = 0x1013ff;
   uVar3 = pthread_mutex_lock(ppVar2);
   if (uVar3 == 0) {
      uVar7 = (uint)param_2;
      uVar9 = param_2 & 0xffffffff;
      uVar6 = ( uint )(param_2 >> 0x20);
      if (( ( uVar7 < *(uint*)( lVar5 + 0x19c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( *(long*)( *(long*)( lVar5 + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x198 ) ) * 0xd8 + 0xd0 ) & 0x7fffffff ) == uVar6 )) {
         lStack_40 = 0x101548;
         pthread_mutex_unlock(ppVar2);
         return (char*)0x1;
      }

      lStack_40 = 0x101462;
      pthread_mutex_unlock(ppVar2);
      lStack_40 = 0x101467;
      lVar5 = GLES3::MeshStorage::get_singleton();
      ppVar2 = (pthread_mutex_t*)( lVar5 + 0x280 );
      lStack_40 = 0x101479;
      uVar3 = pthread_mutex_lock(ppVar2);
      if (uVar3 == 0) {
         if (( ( uVar7 < *(uint*)( lVar5 + 0x26c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar9 % ( ulong ) * (uint*)( lVar5 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( lVar5 + 600 ) + ( uVar9 / *(uint*)( lVar5 + 0x268 ) ) * 8 ) + 0x110 ) & 0x7fffffff ) == uVar6 )) {
            lStack_40 = 0x1016d8;
            pthread_mutex_unlock(ppVar2);
            return (char*)0x2;
         }

         lStack_40 = 0x1014d5;
         pthread_mutex_unlock(ppVar2);
         lStack_40 = 0x1014da;
         lVar5 = GLES3::LightStorage::get_singleton();
         ppVar2 = (pthread_mutex_t*)( lVar5 + 0x38 );
         lStack_40 = 0x1014e9;
         uVar3 = pthread_mutex_lock(ppVar2);
         if (uVar3 == 0) {
            if (( ( uVar7 < *(uint*)( lVar5 + 0x24 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar9 % ( ulong ) * (uint*)( lVar5 + 0x20 ) ) * 0xe8 + *(long*)( *(long*)( lVar5 + 0x10 ) + ( uVar9 / *(uint*)( lVar5 + 0x20 ) ) * 8 ) + 0xe0 ) & 0x7fffffff ) == uVar6 )) {
               lStack_40 = 0x101538;
               pthread_mutex_unlock(ppVar2);
               return (char*)0x5;
            }

            lStack_40 = 0x101568;
            pthread_mutex_unlock(ppVar2);
            lStack_40 = 0x10156d;
            lVar5 = GLES3::LightStorage::get_singleton();
            ppVar2 = (pthread_mutex_t*)( lVar5 + 0x1f8 );
            lStack_40 = 0x10157f;
            uVar3 = pthread_mutex_lock(ppVar2);
            if (uVar3 == 0) {
               if (( ( uVar7 < *(uint*)( lVar5 + 0x1e4 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar9 % ( ulong ) * (uint*)( lVar5 + 0x1e0 ) ) * 0xb8 + *(long*)( *(long*)( lVar5 + 0x1d0 ) + ( uVar9 / *(uint*)( lVar5 + 0x1e0 ) ) * 8 ) + 0xb0 ) & 0x7fffffff ) == uVar6 )) {
                  lStack_40 = 0x1017e8;
                  pthread_mutex_unlock(ppVar2);
                  return (char*)0x9;
               }

               lStack_40 = 0x1015db;
               pthread_mutex_unlock(ppVar2);
               lStack_40 = 0x1015e0;
               lVar5 = GLES3::ParticlesStorage::get_singleton();
               ppVar2 = (pthread_mutex_t*)( lVar5 + 0x198 );
               lStack_40 = 0x1015f2;
               uVar3 = pthread_mutex_lock(ppVar2);
               if (uVar3 == 0) {
                  if (( ( uVar7 < *(uint*)( lVar5 + 0x184 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar9 % ( ulong ) * (uint*)( lVar5 + 0x180 ) ) * 0x210 + *(long*)( *(long*)( lVar5 + 0x170 ) + ( uVar9 / *(uint*)( lVar5 + 0x180 ) ) * 8 ) + 0x208 ) & 0x7fffffff ) == uVar6 )) {
                     lStack_40 = 0x101800;
                     pthread_mutex_unlock(ppVar2);
                     return (char*)0x3;
                  }

                  lStack_40 = 0x101655;
                  pthread_mutex_unlock(ppVar2);
                  lStack_40 = 0x10165a;
                  lVar5 = GLES3::LightStorage::get_singleton();
                  ppVar2 = (pthread_mutex_t*)( lVar5 + 0xe8 );
                  lStack_40 = 0x10166c;
                  uVar3 = pthread_mutex_lock(ppVar2);
                  if (uVar3 == 0) {
                     if (( ( uVar7 < *(uint*)( lVar5 + 0xd4 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( uVar9 % ( ulong ) * (uint*)( lVar5 + 0xd0 ) ) * 0x90 + *(long*)( *(long*)( lVar5 + 0xc0 ) + ( uVar9 / *(uint*)( lVar5 + 0xd0 ) ) * 8 ) + 0x88 ) & 0x7fffffff ) == uVar6 )) {
                        lStack_40 = 0x1016c5;
                        pthread_mutex_unlock(ppVar2);
                        return (char*)0x6;
                     }

                     lStack_40 = 0x1016f0;
                     pthread_mutex_unlock(ppVar2);
                     lStack_40 = 0x1016f5;
                     lVar5 = GLES3::ParticlesStorage::get_singleton();
                     ppVar2 = (pthread_mutex_t*)( lVar5 + 0x1f0 );
                     lStack_40 = 0x101707;
                     uVar3 = pthread_mutex_lock(ppVar2);
                     if (uVar3 == 0) {
                        if (uVar7 < *(uint*)( lVar5 + 0x1dc )) {
                           if (param_2 >> 0x20 == 0x7fffffff) {
                              lStack_40 = 0x101818;
                              pthread_mutex_unlock(ppVar2);
                              return (char*)0x0;
                           }

                           if (( *(uint*)( *(long*)( *(long*)( lVar5 + 0x1c8 ) + ( uVar9 / *(uint*)( lVar5 + 0x1d8 ) ) * 8 ) + ( uVar9 % ( ulong ) * (uint*)( lVar5 + 0x1d8 ) ) * 0x78 + 0x70 ) & 0x7fffffff ) == uVar6) {
                              lStack_40 = 0x101825;
                              pthread_mutex_unlock(ppVar2);
                              return (char*)0x4;
                           }

                           lStack_40 = 0x101770;
                           pthread_mutex_unlock(ppVar2);
                           if (*(uint*)( this + 0x2c ) <= uVar7) {
                              return (char*)0x0;
                           }

                        }
 else {
                           lStack_40 = 0x1017c2;
                           pthread_mutex_unlock(ppVar2);
                           if (*(uint*)( this + 0x2c ) <= uVar7) {
                              return (char*)0x0;
                           }

                           if (param_2 >> 0x20 == 0x7fffffff) {
                              return (char*)0x0;
                           }

                        }

                        if (( *(uint*)( ( uVar9 % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( uVar9 / *(uint*)( this + 0x28 ) ) * 8 ) + 0x68 ) & 0x7fffffff ) != uVar6) {
                           return (char*)0x0;
                        }

                        return (char*)0xb;
                     }

                  }

               }

            }

         }

      }

   }

   pcVar8 = (char*)(ulong)uVar3;
   lStack_40 = 0x101836;
   std::__throw_system_error(uVar3);
   lStack_58 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_48 = param_2;
   lStack_40 = lVar5;
   iVar4 = ( *_glad_glGetString )(0x1f00);
   String::utf8((char*)&lStack_60, iVar4);
   String::trim_suffix(pcVar8);
   lVar5 = lStack_60;
   if (lStack_60 != 0) {
      LOCK();
      plVar1 = (long*)( lStack_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lStack_60 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (lStack_58 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pcVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::get_video_adapter_vendor() const */Utilities * __thiscall GLES3::Utilities::get_video_adapter_vendor(Utilities *this){
   long *plVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ( *_glad_glGetString )(0x1f00);
   String::utf8((char*)&local_28, iVar3);
   String::trim_suffix((char*)this);
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::get_video_adapter_name() const */Utilities * __thiscall GLES3::Utilities::get_video_adapter_name(Utilities *this){
   long *plVar1;
   long lVar2;
   int iVar3;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = ( *_glad_glGetString )(0x1f01);
   String::utf8((char*)&local_28, iVar3);
   String::trim_suffix((char*)this);
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::Utilities::capture_timestamps_begin() */void GLES3::Utilities::capture_timestamps_begin(Utilities *this) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0xb;
   pcVar2 = *(code**)( *(long*)this + 0x68 );
   local_38 = "Frame Begin";
   String::parse_latin1((StrRange*)&local_40);
   ( *pcVar2 )(this);
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::capture_timestamp(String const&) */void GLES3::Utilities::capture_timestamp(Utilities *this, String *param_1) {
   CowData<char32_t> *this_00;
   uint uVar1;
   uint uVar2;
   code *pcVar3;
   ulong uVar4;
   long *plVar5;
   undefined8 uVar6;
   ulong uVar7;
   uVar4 = ( ulong ) * (uint*)( this + 0xe50 );
   uVar7 = ( ulong ) * (uint*)( this + uVar4 * 0x468 + 0x538 );
   if (*(uint*)( this + 0x110 ) <= *(uint*)( this + uVar4 * 0x468 + 0x538 )) {
      _err_print_error("capture_timestamp", "drivers/gles3/storage/utilities.cpp", 0x145, "Condition \"frames[frame].timestamp_count >= max_timestamp_query_elements\" is true.", 0, 0);
      return;
   }

   if ((char)RasterizerGLES3::gles_over_gl != '\0') {
      ( *_glad_glQueryCounter )(*(undefined4*)( this + ( uVar7 + 0x44 + uVar4 * 0x11a ) * 4 + 8 ), 0x8e28);
      uVar4 = ( ulong ) * (uint*)( this + 0xe50 );
      uVar7 = ( ulong ) * (uint*)( this + uVar4 * 0x468 + 0x538 );
   }

   if ((uint)uVar7 < *(uint*)( this + uVar4 * 0x468 + 0x518 )) {
      this_00 = (CowData<char32_t>*)( *(long*)( this + uVar4 * 0x468 + 0x520 ) + uVar7 * 8 );
      if (*(long*)this_00 != *(long*)param_1) {
         CowData<char32_t>::_ref(this_00, (CowData*)param_1);
      }

      plVar5 = (long*)OS::get_singleton();
      uVar6 = ( **(code**)( *plVar5 + 0x208 ) )(plVar5);
      uVar1 = *(uint*)( this + 0xe50 );
      uVar2 = *(uint*)( this + (ulong)uVar1 * 0x468 + 0x538 );
      if (uVar2 < *(uint*)( this + (ulong)uVar1 * 0x468 + 0x528 )) {
         *(undefined8*)( *(long*)( this + (ulong)uVar1 * 0x468 + 0x530 ) + (ulong)uVar2 * 8 ) = uVar6;
         *(uint*)( this + (ulong)uVar1 * 0x468 + 0x538 ) = uVar2 + 1;
         return;
      }

      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar2, ( ulong ) * (uint*)( this + (ulong)uVar1 * 0x468 + 0x528 ), "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar7, ( ulong ) * (uint*)( this + uVar4 * 0x468 + 0x518 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GLES3::Utilities::get_captured_timestamp_name(unsigned int) const */CowData<char32_t> *GLES3::Utilities::get_captured_timestamp_name(uint param_1) {
   CowData *pCVar1;
   code *pcVar2;
   uint in_EDX;
   long in_RSI;
   long lVar3;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   lVar3 = in_RSI + ( ulong ) * (uint*)( in_RSI + 0xe50 ) * 0x468;
   if (*(uint*)( lVar3 + 0x570 ) <= in_EDX) {
      _err_print_index_error("get_captured_timestamp_name", "drivers/gles3/storage/utilities.cpp", 0x180, (ulong)in_EDX, ( ulong ) * (uint*)( lVar3 + 0x570 ), "p_index", "frames[frame].timestamp_result_count", "", false, false);
      *(undefined8*)this = 0;
      return this;
   }

   if (in_EDX < *(uint*)( lVar3 + 0x540 )) {
      lVar3 = *(long*)( lVar3 + 0x548 );
      *(undefined8*)this = 0;
      pCVar1 = (CowData*)( lVar3 + (ulong)in_EDX * 8 );
      if (*(long*)pCVar1 != 0) {
         CowData<char32_t>::_ref(this, pCVar1);
      }

      return this;
   }

   _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)in_EDX, ( ulong ) * (uint*)( lVar3 + 0x540 ), "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::Utilities() */void GLES3::Utilities::Utilities(Utilities *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   Utilities *pUVar7;
   Utilities *pUVar8;
   long *plVar9;
   Utilities *pUVar10;
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   pUVar10 = this + 0x118;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__Utilities_00106cb0;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   uVar5 = _UNK_00106f88;
   uVar4 = __LC36;
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_00106c90;
   uVar6 = _LC37;
   *(undefined8*)( this + 0x28 ) = uVar4;
   *(undefined8*)( this + 0x30 ) = uVar5;
   *(undefined8*)( this + 0x90 ) = uVar6;
   this[8] = (Utilities)0x0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 24 ) ) = 0;
   }

   *(undefined4*)( this + 0x50 ) = 1;
   *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0xc0 ) = uVar6;
   *(undefined8*)( this + 0x108 ) = 0;
   *(undefined4*)( this + 0x110 ) = 0x100;
   *(undefined8*)( this + 0xf0 ) = uVar6;
   *(undefined1(*) [16])( this + 0xd0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xf8 ) = (undefined1[16])0x0;
   pUVar7 = pUVar10;
   do {
      *(undefined8*)( pUVar7 + 0x400 ) = 0;
      pUVar8 = pUVar7 + 0x468;
      for (int i = 0; i < 3; i++) {
         *(undefined8*)( pUVar7 + ( 8*i + 1032 ) ) = 0;
      }

      *(undefined4*)( pUVar7 + 0x420 ) = 0;
      for (int i = 0; i < 6; i++) {
         *(undefined8*)( pUVar7 + ( 8*i + 1064 ) ) = 0;
      }

      *(undefined4*)( pUVar7 + 0x458 ) = 0;
      *(undefined8*)( pUVar7 + 0x460 ) = 0;
      pUVar7 = pUVar8;
   }
 while ( pUVar8 != this + 0xe50 );
   *(undefined4*)( this + 0xe50 ) = 0;
   singleton = this;
   do {
      *(undefined8*)( pUVar10 + 0x460 ) = 0;
      ( *_glad_glGenQueries )(*(undefined4*)( this + 0x110 ));
      uVar11 = *(uint*)( this + 0x110 );
      uVar14 = *(uint*)( pUVar10 + 0x400 );
      if (uVar11 < uVar14) {
         lVar13 = (ulong)uVar11 << 3;
         uVar14 = uVar11;
         do {
            plVar9 = (long*)( *(long*)( pUVar10 + 0x408 ) + lVar13 );
            if (*plVar9 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar9 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *plVar9;
                  *plVar9 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            uVar14 = uVar14 + 1;
            lVar13 = lVar13 + 8;
         }
 while ( uVar14 < *(uint*)( pUVar10 + 0x400 ) );
         *(uint*)( pUVar10 + 0x400 ) = uVar11;
         uVar11 = *(uint*)( this + 0x110 );
         LAB_00101f35:uVar14 = *(uint*)( pUVar10 + 0x410 );
         uVar12 = uVar11;
         if (uVar14 <= uVar11) goto LAB_0010206d;
         LAB_00101f43:*(uint*)( pUVar10 + 0x410 ) = uVar12;
         uVar11 = uVar12;
      }
 else {
         if (uVar11 <= uVar14) goto LAB_00101f35;
         uVar12 = uVar11;
         if (*(uint*)( pUVar10 + 0x404 ) < uVar11) {
            *(uint*)( pUVar10 + 0x404 ) = uVar11;
            lVar13 = Memory::realloc_static(*(void**)( pUVar10 + 0x408 ), (ulong)uVar11 << 3, false);
            *(long*)( pUVar10 + 0x408 ) = lVar13;
            if (lVar13 == 0) goto LAB_0010221c;
            uVar14 = *(uint*)( pUVar10 + 0x400 );
            uVar12 = *(uint*)( this + 0x110 );
            if (uVar14 < uVar11) goto LAB_00102037;
         }
 else {
            LAB_00102037:memset((void*)( *(long*)( pUVar10 + 0x408 ) + (ulong)uVar14 * 8 ), 0, ( ulong )(( uVar11 - 1 ) - uVar14) * 8 + 8);
         }

         uVar14 = *(uint*)( pUVar10 + 0x410 );
         *(uint*)( pUVar10 + 0x400 ) = uVar11;
         if (uVar12 < uVar14) goto LAB_00101f43;
         LAB_0010206d:uVar11 = uVar12;
         if (uVar14 < uVar12) {
            if (*(uint*)( pUVar10 + 0x414 ) < uVar12) {
               *(uint*)( pUVar10 + 0x414 ) = uVar12;
               lVar13 = Memory::realloc_static(*(void**)( pUVar10 + 0x418 ), (ulong)uVar12 << 3, false);
               *(long*)( pUVar10 + 0x418 ) = lVar13;
               if (lVar13 == 0) goto LAB_0010221c;
               uVar11 = *(uint*)( this + 0x110 );
            }

            *(uint*)( pUVar10 + 0x410 ) = uVar12;
         }

      }

      *(undefined4*)( pUVar10 + 0x420 ) = 0;
      uVar14 = *(uint*)( pUVar10 + 0x428 );
      if (uVar11 < uVar14) {
         lVar13 = (ulong)uVar11 << 3;
         uVar14 = uVar11;
         do {
            plVar9 = (long*)( *(long*)( pUVar10 + 0x430 ) + lVar13 );
            if (*plVar9 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar9 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar2 = *plVar9;
                  *plVar9 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }

            }

            uVar14 = uVar14 + 1;
            lVar13 = lVar13 + 8;
         }
 while ( uVar14 < *(uint*)( pUVar10 + 0x428 ) );
         *(uint*)( pUVar10 + 0x428 ) = uVar11;
         uVar11 = *(uint*)( this + 0x110 );
         LAB_00101fbd:uVar14 = *(uint*)( pUVar10 + 0x438 );
         uVar12 = uVar11;
         if (uVar14 <= uVar11) goto LAB_001020dd;
         LAB_00101fcb:*(uint*)( pUVar10 + 0x438 ) = uVar12;
         uVar11 = uVar12;
      }
 else {
         if (uVar11 <= uVar14) goto LAB_00101fbd;
         uVar12 = uVar11;
         if (*(uint*)( pUVar10 + 0x42c ) < uVar11) {
            *(uint*)( pUVar10 + 0x42c ) = uVar11;
            lVar13 = Memory::realloc_static(*(void**)( pUVar10 + 0x430 ), (ulong)uVar11 << 3, false);
            *(long*)( pUVar10 + 0x430 ) = lVar13;
            if (lVar13 == 0) goto LAB_0010221c;
            uVar14 = *(uint*)( pUVar10 + 0x428 );
            uVar12 = *(uint*)( this + 0x110 );
            if (uVar14 < uVar11) goto LAB_001020a7;
         }
 else {
            LAB_001020a7:memset((void*)( *(long*)( pUVar10 + 0x430 ) + (ulong)uVar14 * 8 ), 0, ( ulong )(( uVar11 - 1 ) - uVar14) * 8 + 8);
         }

         uVar14 = *(uint*)( pUVar10 + 0x438 );
         *(uint*)( pUVar10 + 0x428 ) = uVar11;
         if (uVar12 < uVar14) goto LAB_00101fcb;
         LAB_001020dd:uVar11 = uVar12;
         if (uVar14 < uVar12) {
            if (*(uint*)( pUVar10 + 0x43c ) < uVar12) {
               *(uint*)( pUVar10 + 0x43c ) = uVar12;
               lVar13 = Memory::realloc_static(*(void**)( pUVar10 + 0x440 ), (ulong)uVar12 << 3, false);
               *(long*)( pUVar10 + 0x440 ) = lVar13;
               if (lVar13 == 0) goto LAB_0010221c;
               uVar11 = *(uint*)( this + 0x110 );
            }

            *(uint*)( pUVar10 + 0x438 ) = uVar12;
         }

      }

      if (uVar11 < *(uint*)( pUVar10 + 0x448 )) {
         LAB_00101feb:*(uint*)( pUVar10 + 0x448 ) = uVar11;
      }
 else if (*(uint*)( pUVar10 + 0x448 ) < uVar11) {
         if (*(uint*)( pUVar10 + 0x44c ) < uVar11) {
            *(uint*)( pUVar10 + 0x44c ) = uVar11;
            lVar13 = Memory::realloc_static(*(void**)( pUVar10 + 0x450 ), (ulong)uVar11 << 3, false);
            *(long*)( pUVar10 + 0x450 ) = lVar13;
            if (lVar13 == 0) {
               LAB_0010221c:_err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

         }

         goto LAB_00101feb;
      }

      *(undefined4*)( pUVar10 + 0x458 ) = 0;
      pUVar10 = pUVar10 + 0x468;
      if (pUVar10 == this + 0xe50) {
         return;
      }

   }
 while ( true );
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::_capture_timestamps_begin() */void GLES3::Utilities::_capture_timestamps_begin(Utilities *this) {
   long *plVar1;
   uint uVar2;
   undefined8 uVar3;
   code *pcVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   uVar8 = ( ulong ) * (uint*)( this + 0xe50 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *(int*)( this + uVar8 * 0x468 + 0x538 );
   if (iVar5 != 0) {
      if ((char)RasterizerGLES3::gles_over_gl != '\0') {
         uVar9 = 0;
         do {
            local_58 = (char*)0x0;
            ( *_glad_glGetQueryObjectui64v )(*(undefined4*)( this + ( ( uVar9 & 0xffffffff ) + 0x44 + uVar8 * 0x11a ) * 4 + 8 ), 0x8866, &local_58);
            uVar8 = ( ulong ) * (uint*)( this + 0xe50 );
            if (*(uint*)( this + uVar8 * 0x468 + 0x560 ) <= (uint)uVar9) {
               _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar9, ( ulong ) * (uint*)( this + uVar8 * 0x468 + 0x560 ), "p_index", "count", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            *(char**)( *(long*)( this + uVar8 * 0x468 + 0x568 ) + uVar9 * 8 ) = local_58;
            uVar9 = uVar9 + 1;
         }
 while ( (uint)uVar9 < *(uint*)( this + uVar8 * 0x468 + 0x538 ) );
      }

      lVar7 = uVar8 * 0x468;
      uVar6 = *(undefined8*)( this + lVar7 + 0x518 );
      uVar3 = *(undefined8*)( this + lVar7 + 0x520 );
      *(undefined8*)( this + lVar7 + 0x520 ) = *(undefined8*)( this + lVar7 + 0x548 );
      *(undefined8*)( this + lVar7 + 0x518 ) = *(undefined8*)( this + lVar7 + 0x540 );
      *(undefined8*)( this + lVar7 + 0x548 ) = 0;
      *(undefined8*)( this + lVar7 + 0x540 ) = 0;
      if (*(void**)( this + lVar7 + 0x548 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + lVar7 + 0x548 ), false);
      }

      *(undefined8*)( this + uVar8 * 0x468 + 0x548 ) = uVar3;
      *(undefined8*)( this + uVar8 * 0x468 + 0x540 ) = uVar6;
      uVar9 = ( ulong ) * (uint*)( this + 0xe50 );
      lVar7 = uVar9 * 0x468;
      uVar6 = *(undefined8*)( this + lVar7 + 0x528 );
      uVar3 = *(undefined8*)( this + lVar7 + 0x530 );
      *(undefined8*)( this + lVar7 + 0x530 ) = *(undefined8*)( this + lVar7 + 0x558 );
      *(undefined8*)( this + lVar7 + 0x528 ) = *(undefined8*)( this + lVar7 + 0x550 );
      *(undefined8*)( this + lVar7 + 0x558 ) = 0;
      *(undefined8*)( this + lVar7 + 0x550 ) = 0;
      uVar8 = uVar9;
      if (*(void**)( this + lVar7 + 0x558 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + lVar7 + 0x558 ), false);
         uVar8 = ( ulong ) * (uint*)( this + 0xe50 );
      }

      *(undefined8*)( this + uVar9 * 0x468 + 0x558 ) = uVar3;
      *(undefined8*)( this + uVar9 * 0x468 + 0x550 ) = uVar6;
      iVar5 = *(int*)( this + uVar8 * 0x468 + 0x538 );
   }

   *(int*)( this + uVar8 * 0x468 + 0x570 ) = iVar5;
   *(undefined4*)( this + uVar8 * 0x468 + 0x538 ) = 0;
   Engine::get_singleton();
   uVar2 = *(uint*)( this + 0xe50 );
   uVar6 = Engine::get_frames_drawn();
   local_60 = 0;
   *(undefined8*)( this + (ulong)uVar2 * 0x468 + 0x578 ) = uVar6;
   pcVar4 = *(code**)( *(long*)this + 0x68 );
   local_50 = 0xe;
   local_58 = "Internal Begin";
   String::parse_latin1((StrRange*)&local_60);
   ( *pcVar4 )(this);
   lVar7 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::Utilities::capture_timestamps_end() */void GLES3::Utilities::capture_timestamps_end(Utilities *this) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0xc;
   pcVar2 = *(code**)( *(long*)this + 0x68 );
   local_38 = "Internal End";
   String::parse_latin1((StrRange*)&local_40);
   ( *pcVar2 )(this);
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

   *(uint*)( this + 0xe50 ) = ( *(int*)( this + 0xe50 ) + 1U ) % 3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLES3::Utilities::visibility_notifier_call(RID, bool, bool) */void GLES3::Utilities::visibility_notifier_call(Utilities *this, ulong param_2, char param_3, char param_4) {
   char cVar1;
   long lVar2;
   Variant **ppVVar3;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar2 + 0x68 ) == (int)( param_2 >> 0x20 )) {
         if (param_3 == '\0') {
            ppVVar3 = (Variant**)( lVar2 + 0x28 );
            cVar1 = Callable::is_valid();
            if (cVar1 != '\0') {
               if (param_4 == '\0') goto LAB_00102710;
               LAB_001026b0:Variant::Variant((Variant*)local_38, 0);
               Callable::call_deferredp(ppVVar3, 0);
               cVar1 = Variant::needs_deinit[local_38[0]];
               joined_r0x0010272a:if (cVar1 != '\0') {
                  Variant::_clear_internal();
               }

            }

         }
 else {
            ppVVar3 = (Variant**)( lVar2 + 0x18 );
            cVar1 = Callable::is_valid();
            if (cVar1 != '\0') {
               if (param_4 != '\0') goto LAB_001026b0;
               LAB_00102710:Callable::call<>();
               cVar1 = Variant::needs_deinit[local_38[0]];
               goto joined_r0x0010272a;
            }

         }

         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001027c3;
      }

      if (*(int*)( lVar2 + 0x68 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("visibility_notifier_call", "drivers/gles3/storage/utilities.cpp", 0x129, "Parameter \"vn\" is null.", 0, 0);
      return;
   }

   LAB_001027c3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::~Utilities() */void GLES3::Utilities::~Utilities(Utilities *this) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined8 uVar4;
   undefined8 extraout_RDX;
   Utilities *pUVar5;
   Utilities *pUVar6;
   long lVar7;
   void *pvVar8;
   uint uVar9;
   long *plVar10;
   long in_FS_OFFSET;
   long local_90;
   long local_88;
   long local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar4 = 0;
   *(undefined***)this = &PTR__Utilities_00106cb0;
   singleton = 0;
   pUVar6 = this + 0x118;
   do {
      pUVar5 = pUVar6 + 0x468;
      ( *_glad_glDeleteQueries )(*(undefined4*)( this + 0x110 ), pUVar6, uVar4);
      uVar4 = extraout_RDX;
      pUVar6 = pUVar5;
   }
 while ( this + 0xe50 != pUVar5 );
   if (*(long*)( this + 0x108 ) != 0) {
      plVar10 = *(long**)( this + 0xe0 );
      if (plVar10 != (long*)0x0) {
         uVar9 = 0;
         do {
            local_60 = 0;
            local_50 = 7;
            local_58 = " bytes.";
            String::parse_latin1((StrRange*)&local_60);
            itos((long)&local_68);
            local_70 = 0;
            local_58 = ": leaked ";
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            itos((long)&local_58);
            operator+((char *)&
            local_78,(String*)"Texture with GL ID of ";
            String::operator +((String*)&local_80, (String*)&local_78);
            String::operator +((String*)&local_88, (String*)&local_80);
            String::operator +((String*)&local_90, (String*)&local_88);
            _err_print_error("~Utilities", "drivers/gles3/storage/utilities.cpp", 0x4d, (String*)&local_90, 0, 0);
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

            lVar7 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_80;
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

            lVar7 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

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

            lVar7 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            uVar9 = uVar9 + *(int*)( (long)plVar10 + 0x14 );
            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
         if (*(ulong*)( this + 0x108 ) <= (ulong)uVar9) goto LAB_00102b56;
      }

      local_60 = 0;
      local_50 = 7;
      local_58 = " bytes.";
      String::parse_latin1((StrRange*)&local_60);
      itos((long)&local_58);
      operator+((char *)&
      local_68,(String*)"Texture cache is not empty. There may be an additional texture leak of ";
      String::operator +((String*)&local_70, (String*)&local_68);
      _err_print_error("~Utilities", "drivers/gles3/storage/utilities.cpp", 0x52, (String*)&local_70, 0, 0);
      lVar7 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar10 = (long*)( local_70 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      lVar7 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar10 = (long*)( local_68 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      pcVar3 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_58 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar7 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar10 = (long*)( local_60 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }

   LAB_00102b56:if (*(long*)( this + 0x100 ) != 0) {
      plVar10 = *(long**)( this + 0xb0 );
      if (plVar10 != (long*)0x0) {
         uVar9 = 0;
         do {
            local_60 = 0;
            local_50 = 7;
            local_58 = " bytes.";
            String::parse_latin1((StrRange*)&local_60);
            itos((long)&local_68);
            local_70 = 0;
            local_58 = ": leaked ";
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            itos((long)&local_58);
            operator+((char *)&
            local_78,(String*)"Render buffer with GL ID of ";
            String::operator +((String*)&local_80, (String*)&local_78);
            String::operator +((String*)&local_88, (String*)&local_80);
            String::operator +((String*)&local_90, (String*)&local_88);
            _err_print_error("~Utilities", "drivers/gles3/storage/utilities.cpp", 0x5c, (String*)&local_90, 0, 0);
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

            lVar7 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_80;
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

            lVar7 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

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

            lVar7 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            uVar9 = uVar9 + *(int*)( (long)plVar10 + 0x14 );
            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
         if (*(ulong*)( this + 0x100 ) <= (ulong)uVar9) goto LAB_00102e6e;
      }

      local_60 = 0;
      local_50 = 7;
      local_58 = " bytes.";
      String::parse_latin1((StrRange*)&local_60);
      itos((long)&local_58);
      operator+((char *)&
      local_68,(String*)"Render buffer cache is not empty. There may be an additional render buffer leak of ";
      String::operator +((String*)&local_70, (String*)&local_68);
      _err_print_error("~Utilities", "drivers/gles3/storage/utilities.cpp", 0x61, (String*)&local_70, 0, 0);
      lVar7 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar10 = (long*)( local_70 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      lVar7 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar10 = (long*)( local_68 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      pcVar3 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_58 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar7 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar10 = (long*)( local_60 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }

   LAB_00102e6e:if (*(long*)( this + 0xf8 ) != 0) {
      plVar10 = *(long**)( this + 0x80 );
      if (plVar10 != (long*)0x0) {
         uVar9 = 0;
         do {
            local_60 = 0;
            local_50 = 7;
            local_58 = " bytes.";
            String::parse_latin1((StrRange*)&local_60);
            itos((long)&local_68);
            local_70 = 0;
            local_58 = ": leaked ";
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            itos((long)&local_58);
            operator+((char *)&
            local_78,(String*)"Buffer with GL ID of ";
            String::operator +((String*)&local_80, (String*)&local_78);
            String::operator +((String*)&local_88, (String*)&local_80);
            String::operator +((String*)&local_90, (String*)&local_88);
            _err_print_error("~Utilities", "drivers/gles3/storage/utilities.cpp", 0x6c, (String*)&local_90, 0, 0);
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

            lVar7 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_88 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_80;
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

            lVar7 = local_78;
            if (local_78 != 0) {
               LOCK();
               plVar1 = (long*)( local_78 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

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

            lVar7 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            lVar7 = local_60;
            if (local_60 != 0) {
               LOCK();
               plVar1 = (long*)( local_60 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_60 = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

            }

            uVar9 = uVar9 + *(int*)( (long)plVar10 + 0x14 );
            plVar10 = (long*)*plVar10;
         }
 while ( plVar10 != (long*)0x0 );
         if (*(ulong*)( this + 0xf8 ) <= (ulong)uVar9) goto LAB_00103186;
      }

      local_60 = 0;
      local_50 = 7;
      local_58 = " bytes.";
      String::parse_latin1((StrRange*)&local_60);
      itos((long)&local_58);
      operator+((char *)&
      local_68,(String*)"Buffer cache is not empty. There may be an additional buffer leak of ";
      String::operator +((String*)&local_70, (String*)&local_68);
      _err_print_error("~Utilities", "drivers/gles3/storage/utilities.cpp", 0x71, (String*)&local_70, 0, 0);
      lVar7 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar10 = (long*)( local_70 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      lVar7 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar10 = (long*)( local_68 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      pcVar3 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar10 = (long*)( local_58 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar3 + -0x10, false);
         }

      }

      lVar7 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar10 = (long*)( local_60 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }

   LAB_00103186:pUVar6 = this + 0x9e8;
   do {
      if (*(void**)( pUVar6 + 0x450 ) != (void*)0x0) {
         if (*(int*)( pUVar6 + 0x448 ) != 0) {
            *(undefined4*)( pUVar6 + 0x448 ) = 0;
         }

         Memory::free_static(*(void**)( pUVar6 + 0x450 ), false);
      }

      if (*(void**)( pUVar6 + 0x440 ) != (void*)0x0) {
         if (*(int*)( pUVar6 + 0x438 ) != 0) {
            *(undefined4*)( pUVar6 + 0x438 ) = 0;
         }

         Memory::free_static(*(void**)( pUVar6 + 0x440 ), false);
      }

      pvVar8 = *(void**)( pUVar6 + 0x430 );
      if (pvVar8 != (void*)0x0) {
         if (*(int*)( pUVar6 + 0x428 ) != 0) {
            lVar7 = 0;
            do {
               plVar10 = (long*)( (long)pvVar8 + lVar7 * 8 );
               if (*plVar10 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar10 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar10;
                     *plVar10 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

                  pvVar8 = *(void**)( pUVar6 + 0x430 );
               }

               lVar7 = lVar7 + 1;
            }
 while ( (uint)lVar7 < *(uint*)( pUVar6 + 0x428 ) );
            *(undefined4*)( pUVar6 + 0x428 ) = 0;
            if (pvVar8 == (void*)0x0) goto LAB_00103257;
         }

         Memory::free_static(pvVar8, false);
      }

      LAB_00103257:if (*(void**)( pUVar6 + 0x418 ) != (void*)0x0) {
         if (*(int*)( pUVar6 + 0x410 ) != 0) {
            *(undefined4*)( pUVar6 + 0x410 ) = 0;
         }

         Memory::free_static(*(void**)( pUVar6 + 0x418 ), false);
      }

      pvVar8 = *(void**)( pUVar6 + 0x408 );
      if (pvVar8 != (void*)0x0) {
         if (*(int*)( pUVar6 + 0x400 ) != 0) {
            lVar7 = 0;
            do {
               plVar10 = (long*)( (long)pvVar8 + lVar7 * 8 );
               if (*plVar10 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar10 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar10;
                     *plVar10 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }

                  pvVar8 = *(void**)( pUVar6 + 0x408 );
               }

               lVar7 = lVar7 + 1;
            }
 while ( (uint)lVar7 < *(uint*)( pUVar6 + 0x400 ) );
            *(undefined4*)( pUVar6 + 0x400 ) = 0;
            if (pvVar8 == (void*)0x0) goto LAB_001032ef;
         }

         Memory::free_static(pvVar8, false);
      }

      LAB_001032ef:pUVar6 = pUVar6 + -0x468;
   }
 while ( this + -0x350 != pUVar6 );
   pvVar8 = *(void**)( this + 0xd0 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0xf4 ) != 0) {
         uVar9 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xf0 ) * 4 );
         if (uVar9 == 0) {
            *(undefined4*)( this + 0xf4 ) = 0;
            *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd8 ) + lVar7 ) != 0) {
                  *(int*)( *(long*)( this + 0xd8 ) + lVar7 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar8 + lVar7 * 2 ), false);
                  pvVar8 = *(void**)( this + 0xd0 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar9 << 2 != lVar7 );
            *(undefined4*)( this + 0xf4 ) = 0;
            *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0010339b;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0xd8 ), false);
   }

   LAB_0010339b:pvVar8 = *(void**)( this + 0xa0 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0xc4 ) != 0) {
         uVar9 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xc0 ) * 4 );
         if (uVar9 == 0) {
            *(undefined4*)( this + 0xc4 ) = 0;
            *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa8 ) + lVar7 ) != 0) {
                  *(int*)( *(long*)( this + 0xa8 ) + lVar7 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar8 + lVar7 * 2 ), false);
                  pvVar8 = *(void**)( this + 0xa0 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar9 << 2 );
            *(undefined4*)( this + 0xc4 ) = 0;
            *(undefined1(*) [16])( this + 0xb0 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_00103439;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0xa8 ), false);
   }

   LAB_00103439:pvVar8 = *(void**)( this + 0x70 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x94 ) != 0) {
         uVar9 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x90 ) * 4 );
         if (uVar9 == 0) {
            *(undefined4*)( this + 0x94 ) = 0;
            *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x78 ) + lVar7 ) != 0) {
                  *(int*)( *(long*)( this + 0x78 ) + lVar7 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar8 + lVar7 * 2 ), false);
                  pvVar8 = *(void**)( this + 0x70 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar9 << 2 );
            *(undefined4*)( this + 0x94 ) = 0;
            *(undefined1(*) [16])( this + 0x80 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_001034bf;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0x78 ), false);
   }

   LAB_001034bf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   RID_Alloc<GLES3::VisibilityNotifier,false>::~RID_Alloc((RID_Alloc<GLES3::VisibilityNotifier,false>*)( this + 0x10 ));
   return;
}
/* GLES3::Utilities::~Utilities() */void GLES3::Utilities::~Utilities(Utilities *this) {
   ~Utilities(this)
   ;;
   operator_delete(this, 0xe58);
   return;
}
/* GLES3::Utilities::visibility_notifier_allocate() */void GLES3::Utilities::visibility_notifier_allocate(Utilities *this) {
   RID_Alloc<GLES3::VisibilityNotifier,false>::allocate_rid((RID_Alloc<GLES3::VisibilityNotifier,false>*)( this + 0x10 ));
   return;
}
/* GLES3::Utilities::base_update_dependency(RID, DependencyTracker*) */void GLES3::Utilities::base_update_dependency(Utilities *this, ulong param_2, Dependency *param_3) {
   pthread_mutex_t *ppVar1;
   undefined4 uVar2;
   code *pcVar3;
   int iVar4;
   long lVar5;
   undefined4 *puVar6;
   undefined8 uVar7;
   HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>> *this_00;
   uint uVar8;
   uint uVar9;
   long *plVar10;
   uint uVar11;
   undefined8 in_R11;
   long in_FS_OFFSET;
   Dependency *local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar5 = GLES3::MeshStorage::get_singleton();
   ppVar1 = (pthread_mutex_t*)( lVar5 + 0x1b0 );
   iVar4 = pthread_mutex_lock(ppVar1);
   if (iVar4 == 0) {
      uVar9 = (uint)param_2;
      uVar8 = ( uint )(param_2 >> 0x20);
      if (( ( uVar9 < *(uint*)( lVar5 + 0x19c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( uVar11 = *(uint*)( *(long*)( *(long*)( lVar5 + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x198 ) ) * 0xd8 + 0xd0 ) & 0x7fffffff ),uVar11 == uVar8) {
         pthread_mutex_unlock(ppVar1);
         lVar5 = GLES3::MeshStorage::get_singleton();
         if (( param_2 == 0 ) || ( *(uint*)( lVar5 + 0x19c ) <= uVar9 )) {
            LAB_00104064:lVar5 = 0;
         }
 else {
            lVar5 = *(long*)( *(long*)( lVar5 + 0x188 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x198 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x198 ) ) * 0xd8;
            if (uVar11 != *(uint*)( lVar5 + 0xd0 )) {
               if (0x7ffffffe < *(uint*)( lVar5 + 0xd0 ) + 0x80000000) goto LAB_00104064;
               lVar5 = 0;
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         this_00 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)( lVar5 + 0xa0 );
         goto LAB_00103e5f;
      }

      pthread_mutex_unlock(ppVar1);
      lVar5 = GLES3::MeshStorage::get_singleton();
      ppVar1 = (pthread_mutex_t*)( lVar5 + 0x280 );
      iVar4 = pthread_mutex_lock(ppVar1);
      if (iVar4 != 0) goto LAB_00104194;
      if (( ( uVar9 < *(uint*)( lVar5 + 0x26c ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( uVar11 = *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( lVar5 + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x268 ) ) * 8 ) + 0x110 ) & 0x7fffffff ),uVar11 == uVar8) {
         pthread_mutex_unlock(ppVar1);
         lVar5 = GLES3::MeshStorage::get_singleton();
         if (( param_2 == 0 ) || ( *(uint*)( lVar5 + 0x26c ) <= uVar9 )) {
            LAB_001040e0:HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(local_58);
            uVar2 = *(undefined4*)( param_3 + 0x18 );
            local_58[0] = param_3;
            puVar6 = (undefined4*)HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::operator []((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)0xe0, (DependencyTracker**)local_58);
            *puVar6 = uVar2;
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         plVar10 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x268 ) ) * 0x118 + *(long*)( *(long*)( lVar5 + 600 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x268 ) ) * 8 ) );
         if (uVar11 != *(uint*)( plVar10 + 0x22 )) {
            if (*(uint*)( plVar10 + 0x22 ) + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R11);
            }

            goto LAB_001040e0;
         }

         HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(local_58);
         uVar2 = *(undefined4*)( param_3 + 0x18 );
         local_58[0] = param_3;
         puVar6 = (undefined4*)HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::operator []((HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)( plVar10 + 0x1c ), (DependencyTracker**)local_58);
         lVar5 = *plVar10;
         *puVar6 = uVar2;
         if (lVar5 != 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00103f8b. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)( *(long*)this + 0x20 ) )(this, *plVar10, param_3);
               return;
            }

            goto LAB_001041d0;
         }

         goto LAB_00103e93;
      }

      pthread_mutex_unlock(ppVar1);
      lVar5 = GLES3::LightStorage::get_singleton();
      ppVar1 = (pthread_mutex_t*)( lVar5 + 0xe8 );
      iVar4 = pthread_mutex_lock(ppVar1);
      if (iVar4 != 0) goto LAB_00104194;
      if (( ( uVar9 < *(uint*)( lVar5 + 0xd4 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0xd0 ) ) * 0x90 + *(long*)( *(long*)( lVar5 + 0xc0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0xd0 ) ) * 8 ) + 0x88 ) & 0x7fffffff ) == uVar8 )) {
         pthread_mutex_unlock(ppVar1);
         uVar7 = GLES3::LightStorage::get_singleton();
         this_00 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)GLES3::LightStorage::reflection_probe_get_dependency(uVar7, param_2);
         goto LAB_00103e5f;
      }

      pthread_mutex_unlock(ppVar1);
      lVar5 = GLES3::LightStorage::get_singleton();
      ppVar1 = (pthread_mutex_t*)( lVar5 + 0x38 );
      iVar4 = pthread_mutex_lock(ppVar1);
      if (iVar4 != 0) goto LAB_00104194;
      if (( ( uVar9 < *(uint*)( lVar5 + 0x24 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( uVar11 = *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x20 ) ) * 0xe8 + *(long*)( *(long*)( lVar5 + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x20 ) ) * 8 ) + 0xe0 ) & 0x7fffffff ),uVar11 == uVar8) {
         pthread_mutex_unlock(ppVar1);
         lVar5 = GLES3::LightStorage::get_singleton();
         if (( param_2 == 0 ) || ( *(uint*)( lVar5 + 0x24 ) <= uVar9 )) {
            LAB_00104050:lVar5 = 0;
         }
 else {
            lVar5 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x20 ) ) * 0xe8 + *(long*)( *(long*)( lVar5 + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x20 ) ) * 8 );
            if (uVar11 != *(uint*)( lVar5 + 0xe0 )) {
               if (*(uint*)( lVar5 + 0xe0 ) + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00104050;
            }

         }

         this_00 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)( lVar5 + 0xb0 );
         goto LAB_00103e5f;
      }

      pthread_mutex_unlock(ppVar1);
      lVar5 = GLES3::ParticlesStorage::get_singleton();
      ppVar1 = (pthread_mutex_t*)( lVar5 + 0x198 );
      iVar4 = pthread_mutex_lock(ppVar1);
      if (iVar4 != 0) goto LAB_00104194;
      if (( ( uVar9 < *(uint*)( lVar5 + 0x184 ) ) && ( param_2 >> 0x20 != 0x7fffffff ) ) && ( ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x180 ) ) * 0x210 + *(long*)( *(long*)( lVar5 + 0x170 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x180 ) ) * 8 ) + 0x208 ) & 0x7fffffff ) == uVar8 )) {
         pthread_mutex_unlock(ppVar1);
         uVar7 = GLES3::ParticlesStorage::get_singleton();
         this_00 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)GLES3::ParticlesStorage::particles_get_dependency(uVar7, param_2);
         goto LAB_00103e5f;
      }

      pthread_mutex_unlock(ppVar1);
      lVar5 = GLES3::ParticlesStorage::get_singleton();
      ppVar1 = (pthread_mutex_t*)( lVar5 + 0x1f0 );
      iVar4 = pthread_mutex_lock(ppVar1);
      if (iVar4 != 0) goto LAB_00104194;
      if (uVar9 < *(uint*)( lVar5 + 0x1dc )) {
         if (param_2 >> 0x20 == 0x7fffffff) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               pthread_mutex_unlock(ppVar1);
               return;
            }

            goto LAB_001041d0;
         }

         if (( *(uint*)( *(long*)( *(long*)( lVar5 + 0x1c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x1d8 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x1d8 ) ) * 0x78 + 0x70 ) & 0x7fffffff ) == uVar8) {
            pthread_mutex_unlock(ppVar1);
            uVar7 = GLES3::ParticlesStorage::get_singleton();
            this_00 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)GLES3::ParticlesStorage::particles_collision_get_dependency(uVar7, param_2);
            goto LAB_00103e5f;
         }

         pthread_mutex_unlock(ppVar1);
         if (uVar9 < *(uint*)( this + 0x2c )) {
            uVar9 = *(uint*)( this + 0x28 );
            goto LAB_00103db2;
         }

      }
 else {
         pthread_mutex_unlock(ppVar1);
         if (( uVar9 < *(uint*)( this + 0x2c ) ) && ( uVar9 = *(uint*)( this + 0x28 ) ),param_2 >> 0x20 != 0x7fffffff) {
            LAB_00103db2:lVar5 = ( ( param_2 & 0xffffffff ) % (ulong)uVar9 ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / (ulong)uVar9 ) * 8 );
            if (( *(uint*)( lVar5 + 0x68 ) & 0x7fffffff ) == uVar8) {
               if (param_2 == 0) goto LAB_001041c9;
               if ((int)*(uint*)( lVar5 + 0x68 ) < 0) goto LAB_0010419b;
               goto LAB_00103dfa;
            }

         }

      }

   }
 else {
      LAB_00104194:lVar5 = std::__throw_system_error(iVar4);
      LAB_0010419b:_err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar5);
      LAB_001041c9:lVar5 = 0;
      LAB_00103dfa:this_00 = (HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>*)( lVar5 + 0x38 );
      LAB_00103e5f:HashSet<Dependency*,HashMapHasherDefault,HashMapComparatorDefault<Dependency*>>::insert(local_58);
      uVar2 = *(undefined4*)( param_3 + 0x18 );
      local_58[0] = param_3;
      puVar6 = (undefined4*)HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::operator [](this_00, (DependencyTracker**)local_58);
      *puVar6 = uVar2;
   }

   LAB_00103e93:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001041d0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GLES3::Utilities::buffer_get_data(unsigned int, unsigned int, unsigned int) */Utilities * __thiscall
GLES3::Utilities::buffer_get_data(Utilities *this,uint param_1,uint param_2,uint param_3){
   ulong *__dest;
   size_t __n;
   ulong *puVar1;
   void *__src;
   undefined8 *puVar2;
   ulong __n_00;
   ulong uVar3;
   ulong *__src_00;
   if (param_3 == 0) {
      LAB_00104229:*(undefined8*)( this + 8 ) = 0;
   }
 else {
      __n_00 = (ulong)param_3;
      uVar3 = __n_00 - 1 | __n_00 - 1 >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      puVar1 = (ulong*)Memory::alloc_static(( uVar3 | uVar3 >> 0x10 ) + 0x11, false);
      if (puVar1 == (ulong*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         ( *_glad_glBindBuffer )(param_1, param_2);
         __src = (void*)( *_glad_glMapBufferRange )(param_1, 0, __n_00, 1);
         if (__src == (void*)0x0) {
            _err_print_error("buffer_get_data", "drivers/gles3/storage/utilities.cpp", 0x87, "Parameter \"data\" is null.", 0, 0);
            goto LAB_00104229;
         }

         __src_00 = (ulong*)0x0;
      }
 else {
         __src_00 = puVar1 + 2;
         *puVar1 = 1;
         puVar1[1] = __n_00;
         ( *_glad_glBindBuffer )(param_1);
         __src = (void*)( *_glad_glMapBufferRange )(param_1, 0, __n_00, 1);
         if (__src == (void*)0x0) {
            _err_print_error("buffer_get_data", "drivers/gles3/storage/utilities.cpp", 0x87, "Parameter \"data\" is null.", 0, 0);
            *(undefined8*)( this + 8 ) = 0;
            LOCK();
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if (*puVar1 != 0) {
               return this;
            }

            Memory::free_static(puVar1, false);
            return this;
         }

         if (1 < *puVar1) {
            __n = puVar1[1];
            uVar3 = 0x10;
            if (__n != 0) {
               uVar3 = __n - 1 | __n - 1 >> 1;
               uVar3 = uVar3 | uVar3 >> 2;
               uVar3 = uVar3 | uVar3 >> 4;
               uVar3 = uVar3 | uVar3 >> 8;
               uVar3 = uVar3 | uVar3 >> 0x10;
               uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
            }

            puVar2 = (undefined8*)Memory::alloc_static(uVar3, false);
            if (puVar2 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               __dest = puVar2 + 2;
               *puVar2 = 1;
               puVar2[1] = __n;
               memcpy(__dest, __src_00, __n);
               LOCK();
               *puVar1 = *puVar1 - 1;
               UNLOCK();
               __src_00 = __dest;
               if (*puVar1 == 0) {
                  Memory::free_static(puVar1, false);
               }

            }

         }

      }

      memcpy(__src_00, __src, __n_00);
      ( *_glad_glUnmapBuffer )(param_1);
      ( *_glad_glBindBuffer )(param_1, 0);
      *(ulong**)( this + 8 ) = __src_00;
   }

   return this;
}
/* GLES3::Utilities::visibility_notifier_initialize(RID) */void GLES3::Utilities::visibility_notifier_initialize(Utilities *this, ulong param_2) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   undefined8 *puVar4;
   uint uVar5;
   char *pcVar6;
   long in_FS_OFFSET;
   DependencyTracker *local_a0;
   undefined8 local_98;
   undefined4 uStack_90;
   undefined4 uStack_8c;
   undefined4 uStack_88;
   undefined4 local_84;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   Dependency local_60[8];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_90 = 0;
   local_98 = 0;
   uStack_8c = 0;
   uStack_88 = 0;
   local_84 = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 0;
   local_68 = 0;
   local_38 = 2;
   local_58 = (undefined1[16])0x0;
   local_48 = (undefined1[16])0x0;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x70 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      if ((int)*(uint*)( puVar4 + 0xd ) < 0) {
         uVar5 = ( uint )(param_2 >> 0x20);
         if (uVar5 == ( *(uint*)( puVar4 + 0xd ) & 0x7fffffff )) {
            *(uint*)( puVar4 + 0xd ) = uVar5;
            puVar4[2] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            Callable::Callable((Callable*)( puVar4 + 3 ), (Callable*)&local_80);
            Callable::Callable((Callable*)( puVar4 + 5 ), (Callable*)&local_70);
            puVar4[0xc] = 0;
            uVar5 = *(uint*)( hash_table_size_primes + ( local_38 & 0xffffffff ) * 4 );
            *(undefined1(*) [16])( puVar4 + 8 ) = (undefined1[16])0x0;
            lVar1 = 1;
            *(undefined1(*) [16])( puVar4 + 10 ) = (undefined1[16])0x0;
            if (5 < uVar5) {
               do {
                  if (uVar5 <= *(uint*)( hash_table_size_primes + lVar1 * 4 )) {
                     *(int*)( puVar4 + 0xc ) = (int)lVar1;
                     goto LAB_00104638;
                  }

                  lVar1 = lVar1 + 1;
               }
 while ( lVar1 != 0x1d );
               _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
            }

            LAB_00104638:if (( local_38._4_4_ != 0 ) && ( (long*)local_48._0_8_ != (long*)0x0 )) {
               plVar3 = (long*)local_48._0_8_;
               do {
                  HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&local_a0, (uint*)( puVar4 + 7 ), (bool)( (char)plVar3 + '\x10' ));
                  plVar3 = (long*)*plVar3;
               }
 while ( plVar3 != (long*)0x0 );
            }

            goto LAB_00104676;
         }

         pcVar6 = "Attempting to initialize the wrong RID";
         uVar2 = 0xfc;
      }
 else {
         pcVar6 = "Initializing already initialized RID";
         uVar2 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar2, "Method/function failed. Returning: nullptr", pcVar6, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_00104676:Dependency::~Dependency(local_60);
   Callable::~Callable((Callable*)&local_70);
   Callable::~Callable((Callable*)&local_80);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
      if (local_88 != (Dependency*)0x0) goto LAB_00104e7f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_00104e7f:if (uVar44 != 0) {
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
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_00105321;
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

   if ((float)uVar31 * __LC45 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (Dependency*)*in_RSI;
         goto LAB_00105321;
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
   LAB_00105321:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* Variant Callable::call<>() const */void Callable::call<>(void) {
   Variant **in_RSI;
   CallError *in_RDI;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_38, 0);
   *(undefined4*)in_RDI = 0;
   *(undefined1(*) [16])( in_RDI + 8 ) = (undefined1[16])0x0;
   Callable::callp(in_RSI, 0, (Variant*)0x0, in_RDI);
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x001056c0) *//* WARNING: Removing unreachable block (ram,0x001057f0) *//* WARNING: Removing unreachable block (ram,0x00105969) *//* WARNING: Removing unreachable block (ram,0x001057fc) *//* WARNING: Removing unreachable block (ram,0x00105806) *//* WARNING: Removing unreachable block (ram,0x0010594b) *//* WARNING: Removing unreachable block (ram,0x00105812) *//* WARNING: Removing unreachable block (ram,0x0010581c) *//* WARNING: Removing unreachable block (ram,0x0010592d) *//* WARNING: Removing unreachable block (ram,0x00105828) *//* WARNING: Removing unreachable block (ram,0x00105832) *//* WARNING: Removing unreachable block (ram,0x0010590f) *//* WARNING: Removing unreachable block (ram,0x0010583e) *//* WARNING: Removing unreachable block (ram,0x00105848) *//* WARNING: Removing unreachable block (ram,0x001058f1) *//* WARNING: Removing unreachable block (ram,0x00105854) *//* WARNING: Removing unreachable block (ram,0x0010585e) *//* WARNING: Removing unreachable block (ram,0x001058d3) *//* WARNING: Removing unreachable block (ram,0x00105866) *//* WARNING: Removing unreachable block (ram,0x00105870) *//* WARNING: Removing unreachable block (ram,0x001058b8) *//* WARNING: Removing unreachable block (ram,0x00105878) *//* WARNING: Removing unreachable block (ram,0x0010588e) *//* WARNING: Removing unreachable block (ram,0x0010589a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<GLES3::VisibilityNotifier, false>::~RID_Alloc() */void RID_Alloc<GLES3::VisibilityNotifier,false>::~RID_Alloc(RID_Alloc<GLES3::VisibilityNotifier,false> *this) {
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
   uVar3 = *(uint*)( this + 0x20 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__RID_Alloc_00106c90;
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar7 = ( ulong ) * (uint*)( this + 0x18 );
      puVar8 = *(undefined8**)( this + 8 );
      LAB_00105b0a:if ((uint)uVar5 < (uint)uVar7) goto LAB_00105b4b;
      lVar6 = 0;
      while (true) {
         Memory::free_static((void*)puVar8[lVar6], false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
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
            lVar6 = ( uVar9 % uVar7 ) * 0x70 + puVar8[uVar9 / uVar7];
            if (-1 < *(int*)( lVar6 + 0x68 )) {
               Dependency::~Dependency((Dependency*)( lVar6 + 0x38 ));
               Callable::~Callable((Callable*)( lVar6 + 0x28 ));
               Callable::~Callable((Callable*)( lVar6 + 0x18 ));
               uVar7 = ( ulong ) * (uint*)( this + 0x18 );
               puVar8 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar9 = uVar9 + 1;
         }
 while ( uVar9 < uVar5 );
         goto LAB_00105b0a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00105b4b;
      Memory::free_static((void*)*puVar8, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar8 = *(undefined8**)( this + 8 );
   LAB_00105b4b:if (puVar8 == (undefined8*)0x0) {
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
/* RID_Alloc<GLES3::VisibilityNotifier, false>::~RID_Alloc() */void RID_Alloc<GLES3::VisibilityNotifier,false>::~RID_Alloc(RID_Alloc<GLES3::VisibilityNotifier,false> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<GLES3::VisibilityNotifier, false>::allocate_rid() */ulong RID_Alloc<GLES3::VisibilityNotifier,false>::allocate_rid(RID_Alloc<GLES3::VisibilityNotifier,false> *this) {
   void *pvVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   uint uVar10;
   undefined4 *puVar11;
   long lVar12;
   ulong uVar13;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == *(uint*)( this + 0x1c )) {
      if (uVar3 == 0) {
         lVar12 = 0;
         uVar13 = 8;
      }
 else {
         uVar13 = ( ulong )((int)( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x18 ) ) + 1) << 3;
         lVar12 = ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x18 ) ) * 8;
      }

      lVar4 = Memory::realloc_static(*(void**)( this + 8 ), uVar13, false);
      *(long*)( this + 8 ) = lVar4;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x70, false);
      pvVar1 = *(void**)( this + 0x10 );
      *(undefined8*)( lVar4 + lVar12 ) = uVar5;
      lVar6 = Memory::realloc_static(pvVar1, uVar13, false);
      *(long*)( this + 0x10 ) = lVar6;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 2, false);
      uVar8 = *(uint*)( this + 0x18 );
      lVar4 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar6 + lVar12 ) = uVar5;
      if (uVar8 != 0) {
         lVar6 = *(long*)( lVar4 + lVar12 );
         lVar7 = 0;
         puVar11 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + lVar12 ) + 0x68 );
         do {
            *puVar11 = 0xffffffff;
            puVar11 = puVar11 + 0x1c;
            *(int*)( lVar6 + lVar7 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar7;
            uVar8 = *(uint*)( this + 0x18 );
            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < uVar8 );
      }

      *(uint*)( this + 0x1c ) = *(int*)( this + 0x1c ) + uVar8;
      uVar3 = *(uint*)( this + 0x20 );
   }
 else {
      lVar4 = *(long*)( this + 0x10 );
      uVar8 = *(uint*)( this + 0x18 );
   }

   uVar3 = *(uint*)( *(long*)( lVar4 + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + ( (ulong)uVar3 % (ulong)uVar8 ) * 4 );
   LOCK();
   UNLOCK();
   uVar9 = (int)RID_AllocBase::base_id + 1;
   uVar10 = uVar9 & 0x7fffffff;
   if (uVar10 != 0x7fffffff) {
      RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
      *(uint*)( ( (ulong)uVar3 % (ulong)uVar8 ) * 0x70 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar3 / (ulong)uVar8 ) * 8 ) + 0x68 ) = uVar10 | 0x80000000;
      *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
      return CONCAT44(uVar9, uVar3) & 0x7fffffffffffffff;
   }

   RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
   _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
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
   lStack_70 = 0x106560;
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
         lStack_70 = 0x1065aa;
         memset(__s_00, 0, uVar29);
         pDVar45 = *param_1;
         iVar36 = *(int*)( this + 0x2c );
      }

      LAB_001065b9:if (iVar36 == 0) goto LAB_00106650;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar39 = *(long*)( this + 0x10 );
      goto LAB_00106264;
   }

   pDVar45 = *param_1;
   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_001065b9;
}
else{iVar36 = *(int*)( this + 0x2c );if (iVar36 == 0) {
   LAB_00106650:iVar36 = 0;
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

   LAB_00106264:uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
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
            goto LAB_0010634e;
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
}if ((float)uVar43 * __LC45 < (float)( iVar36 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010634e;
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
;*(undefined1(**) [16])( lVar34 + lStack_70 * 8 ) = pauVar28;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010634e:auVar47._8_8_ = lStack_70;auVar47._0_8_ = pauVar30[1] + 8;return auVar47;}/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
            goto LAB_00106786;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_00106791;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_00106791;
   }
 else {
      LAB_00106786:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_00106791:if (uVar32 != 0) {
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
                  goto LAB_00106a58;
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

   if ((float)uVar2 * __LC45 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_00106a58;
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
   LAB_00106a58:*param_1 = pDVar25;
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<GLES3::VisibilityNotifier, false>::~RID_Alloc() */void RID_Alloc<GLES3::VisibilityNotifier,false>::~RID_Alloc(RID_Alloc<GLES3::VisibilityNotifier,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


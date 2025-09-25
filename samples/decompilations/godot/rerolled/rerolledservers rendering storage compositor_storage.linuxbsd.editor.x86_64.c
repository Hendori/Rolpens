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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererCompositorStorage::RendererCompositorStorage() */void RendererCompositorStorage::RendererCompositorStorage(RendererCompositorStorage *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   *(undefined***)this = &PTR__RendererCompositorStorage_00103ec0;
   uVar1 = _UNK_00103f18;
   uVar2 = __LC4;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 8 ) = 0;
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_00103e80;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 24 ) ) = 0;
   }

   *(undefined4*)( this + 0x50 ) = 1;
   *(undefined8*)( this + 0x28 ) = uVar2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   uVar2 = Memory::alloc_static(0x408, false);
   *(undefined8*)( this + 0x18 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x34 ) << 3, false);
   *(undefined8*)( this + 0x20 ) = uVar2;
   *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x68 ) = &PTR__RID_Alloc_00103ea0;
   uVar1 = _UNK_00103f28;
   uVar2 = __LC5;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 112 ) ) = 0;
   }

   *(undefined4*)( this + 0xa8 ) = 1;
   *(undefined8*)( this + 0x80 ) = uVar2;
   *(undefined8*)( this + 0x88 ) = uVar1;
   uVar2 = Memory::alloc_static(0x208, false);
   *(undefined8*)( this + 0x70 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x8c ) << 3, false);
   *(undefined8*)( this + 0x78 ) = uVar2;
   singleton = this;
   return;
}
/* RendererCompositorStorage::compositor_effect_initialize(RID) */void RendererCompositorStorage::compositor_effect_initialize(RendererCompositorStorage *this, ulong param_2) {
   undefined1 *puVar1;
   undefined8 uVar2;
   uint uVar3;
   char *pcVar4;
   long in_FS_OFFSET;
   undefined8 local_40;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   local_40 = 0;
   local_38 = 0;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      puVar1 = (undefined1*)( *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28 );
      if ((int)*(uint*)( puVar1 + 0x20 ) < 0) {
         uVar3 = ( uint )(param_2 >> 0x20);
         if (uVar3 == ( *(uint*)( puVar1 + 0x20 ) & 0x7fffffff )) {
            *(uint*)( puVar1 + 0x20 ) = uVar3;
            *puVar1 = 1;
            *(undefined4*)( puVar1 + 4 ) = 0;
            Callable::Callable((Callable*)( puVar1 + 8 ), (Callable*)&local_40);
            *(undefined8*)( puVar1 + 0x18 ) = local_30;
            goto LAB_00100364;
         }

         pcVar4 = "Attempting to initialize the wrong RID";
         uVar2 = 0xfc;
      }
 else {
         pcVar4 = "Initializing already initialized RID";
         uVar2 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar2, "Method/function failed. Returning: nullptr", pcVar4, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   LAB_00100364:Callable::~Callable((Callable*)&local_40);
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererCompositorStorage::compositor_effect_set_callback(RID,
   RenderingServer::CompositorEffectCallbackType, Callable const&) */void RendererCompositorStorage::compositor_effect_set_callback(RendererCompositorStorage *this, ulong param_2, undefined4 param_3, Callable *param_4) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28;
      if (*(int*)( lVar1 + 0x20 ) == (int)( param_2 >> 0x20 )) {
         *(undefined4*)( lVar1 + 4 ) = param_3;
         Callable::operator =((Callable*)( lVar1 + 8 ), param_4);
         return;
      }

      if (*(int*)( lVar1 + 0x20 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_effect_set_callback", "servers/rendering/storage/compositor_storage.cpp", 0x4f, "Parameter \"effect\" is null.", 0, 0);
   return;
}
/* RendererCompositorStorage::compositor_effect_set_enabled(RID, bool) */void RendererCompositorStorage::compositor_effect_set_enabled(RendererCompositorStorage *this, ulong param_2, char param_3) {
   char *pcVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      pcVar1 = (char*)( *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28 );
      if (*(int*)( pcVar1 + 0x20 ) == (int)( param_2 >> 0x20 )) {
         if (( *pcVar1 != param_3 ) && ( ( pcVar1[0x18] & 4U ) != 0 )) {
            iVar2 = *(int*)( this + 8 ) + 1;
            if (param_3 == '\0') {
               iVar2 = *(int*)( this + 8 ) + -1;
            }

            *(int*)( this + 8 ) = iVar2;
         }

         *pcVar1 = param_3;
         return;
      }

      if (*(int*)( pcVar1 + 0x20 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_effect_set_enabled", "servers/rendering/storage/compositor_storage.cpp", 0x57, "Parameter \"effect\" is null.", 0, 0);
   return;
}
/* RendererCompositorStorage::compositor_effect_get_enabled(RID) const */undefined1 RendererCompositorStorage::compositor_effect_get_enabled(RendererCompositorStorage *this, ulong param_2) {
   undefined1 *puVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      puVar1 = (undefined1*)( *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28 );
      iVar2 = *(int*)( puVar1 + 0x20 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *puVar1;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_effect_get_enabled", "servers/rendering/storage/compositor_storage.cpp", 0x66, "Parameter \"effect\" is null.", 0, 0);
   return 0;
}
/* RendererCompositorStorage::compositor_effect_get_callback_type(RID) const */undefined4 RendererCompositorStorage::compositor_effect_get_callback_type(RendererCompositorStorage *this, ulong param_2) {
   long lVar1;
   int iVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28;
      iVar2 = *(int*)( lVar1 + 0x20 );
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar1 + 4 );
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_effect_get_callback_type", "servers/rendering/storage/compositor_storage.cpp", 0x6d, "Parameter \"effect\" is null.", 0, 0);
   return 5;
}
/* RendererCompositorStorage::compositor_effect_get_callback(RID) const */Callable *RendererCompositorStorage::compositor_effect_get_callback(Callable *param_1, long param_2, ulong param_3) {
   long lVar1;
   int iVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x2c ) )) {
      lVar1 = *(long*)( *(long*)( param_2 + 0x18 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x28 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x28 ) ) * 0x28;
      iVar2 = *(int*)( lVar1 + 0x20 );
      if (iVar2 == (int)( param_3 >> 0x20 )) {
         Callable::Callable(param_1, (Callable*)( lVar1 + 8 ));
         return param_1;
      }

      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_effect_get_callback", "servers/rendering/storage/compositor_storage.cpp", 0x74, "Parameter \"effect\" is null.", 0, 0);
   *(undefined8*)param_1 = 0;
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* RendererCompositorStorage::compositor_effect_set_flag(RID,
   RenderingServer::CompositorEffectFlags, bool) */void RendererCompositorStorage::compositor_effect_set_flag(RendererCompositorStorage *this, ulong param_2, uint param_3, byte param_4) {
   char *pcVar1;
   ulong uVar2;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2c )) {
         pcVar1 = (char*)( *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28 );
         if (*(int*)( pcVar1 + 0x20 ) == (int)( param_2 >> 0x20 )) {
            uVar2 = *(ulong*)( pcVar1 + 0x18 );
            if (( ( *pcVar1 == '\0' ) || ( param_3 != 4 ) ) || ( param_4 == ( ( byte )(uVar2 >> 2) & 1 ) )) {
               if (param_4 != 0) {
                  LAB_001008ae:*(ulong*)( pcVar1 + 0x18 ) = param_3 | uVar2;
                  return;
               }

            }
 else {
               if (param_4 != 0) {
                  *(int*)( this + 8 ) = *(int*)( this + 8 ) + 1;
                  goto LAB_001008ae;
               }

               *(int*)( this + 8 ) = *(int*)( this + 8 ) + -1;
            }

            *(ulong*)( pcVar1 + 0x18 ) = ~(ulong)param_3 & uVar2;
            return;
         }

         if (*(int*)( pcVar1 + 0x20 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("compositor_effect_set_flag", "servers/rendering/storage/compositor_storage.cpp", 0x7b, "Parameter \"effect\" is null.", 0, 0);
   return;
}
/* RendererCompositorStorage::compositor_effect_get_flag(RID,
   RenderingServer::CompositorEffectFlags) const */undefined8 RendererCompositorStorage::compositor_effect_get_flag(RendererCompositorStorage *this, ulong param_2, uint param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar1 = *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28;
      if (*(int*)( lVar1 + 0x20 ) == (int)( param_2 >> 0x20 )) {
         return CONCAT71(( int7 )((ulong)lVar1 >> 8), ( *(uint*)( lVar1 + 0x18 ) & param_3 ) != 0);
      }

      if (*(int*)( lVar1 + 0x20 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_effect_get_flag", "servers/rendering/storage/compositor_storage.cpp", 0x92, "Parameter \"effect\" is null.", 0, 0);
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00100ab3) *//* WARNING: Removing unreachable block (ram,0x00100acb) *//* WARNING: Removing unreachable block (ram,0x00100af0) *//* WARNING: Removing unreachable block (ram,0x00100b04) *//* RendererCompositorStorage::compositor_initialize(RID) */void RendererCompositorStorage::compositor_initialize(RendererCompositorStorage *this, ulong param_2) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   uint uVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 == 0) {
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
         return;
      }

      goto LAB_00100bde;
   }

   if ((uint)param_2 < *(uint*)( this + 0x84 )) {
      lVar1 = *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x18;
      if (-1 < (int)*(uint*)( lVar1 + 0x10 )) {
         pcVar5 = "Initializing already initialized RID";
         uVar3 = 0xf8;
         LAB_00100b7c:_err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar3, "Method/function failed. Returning: nullptr", pcVar5, 0, 0);
         goto LAB_00100b94;
      }

      uVar4 = ( uint )(param_2 >> 0x20);
      if (uVar4 != ( *(uint*)( lVar1 + 0x10 ) & 0x7fffffff )) {
         pcVar5 = "Attempting to initialize the wrong RID";
         uVar3 = 0xfc;
         goto LAB_00100b7c;
      }

      *(uint*)( lVar1 + 0x10 ) = uVar4;
      *(undefined8*)( lVar1 + 8 ) = 0;
   }
 else {
      LAB_00100b94:_err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100bde:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererCompositorStorage::compositor_free(RID) */void RendererCompositorStorage::compositor_free(RendererCompositorStorage *this, ulong param_2) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   long lVar2;
   ulong uVar3;
   int iVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
   long lVar8;
   __mutex = (pthread_mutex_t*)( this + 0x98 );
   iVar4 = pthread_mutex_lock(__mutex);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   if ((uint)param_2 < *(uint*)( this + 0x84 )) {
      uVar3 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 );
      lVar8 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x18;
      lVar6 = *(long*)( *(long*)( this + 0x70 ) + uVar3 * 8 ) + lVar8;
      if (*(int*)( lVar6 + 0x10 ) < 0) {
         pthread_mutex_unlock(__mutex);
         _err_print_error(&_LC25, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
         return;
      }

      if ((int)( param_2 >> 0x20 ) == *(int*)( lVar6 + 0x10 )) {
         if (*(long*)( lVar6 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( lVar6 + 8 );
               *(undefined8*)( lVar6 + 8 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
               lVar6 = lVar8 + *(long*)( *(long*)( this + 0x70 ) + uVar3 * 8 );
            }
 else {
               lVar6 = lVar8 + *(long*)( *(long*)( this + 0x70 ) + uVar3 * 8 );
            }

         }

         *(undefined4*)( lVar6 + 0x10 ) = 0xffffffff;
         uVar5 = *(int*)( this + 0x88 ) - 1;
         *(uint*)( this + 0x88 ) = uVar5;
         *(uint*)( *(long*)( *(long*)( this + 0x78 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x80 ) ) * 4 ) = (uint)param_2;
         pthread_mutex_unlock(__mutex);
         return;
      }

      pthread_mutex_unlock(__mutex);
      uVar7 = 0x171;
   }
 else {
      pthread_mutex_unlock(__mutex);
      uVar7 = 0x161;
   }

   _err_print_error(&_LC25, "./core/templates/rid_owner.h", uVar7, "Method/function failed.", 0, 0);
   return;
}
/* RendererCompositorStorage::~RendererCompositorStorage() */void RendererCompositorStorage::~RendererCompositorStorage(RendererCompositorStorage *this) {
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
   *(undefined***)this = &PTR__RendererCompositorStorage_00103ec0;
   singleton = 0;
   RID_Alloc<RendererCompositorStorage::Compositor,true>::~RID_Alloc((RID_Alloc<RendererCompositorStorage::Compositor,true>*)( this + 0x68 ));
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_00103e80;
   uVar3 = *(uint*)( this + 0x30 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x2c );
      uVar8 = ( ulong ) * (uint*)( this + 0x28 );
      puVar9 = *(undefined8**)( this + 0x18 );
      LAB_00100eea:if ((uint)uVar5 < (uint)uVar8) goto LAB_00100f2b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x20 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 0x18 );
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

      uVar8 = ( ulong ) * (uint*)( this + 0x28 );
      puVar9 = *(undefined8**)( this + 0x18 );
      if (*(int*)( this + 0x2c ) != 0) {
         uVar6 = 0;
         do {
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x28;
            if (-1 < *(int*)( lVar7 + 0x20 )) {
               Callable::~Callable((Callable*)( lVar7 + 8 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x28 );
               puVar9 = *(undefined8**)( this + 0x18 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x2c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_00100eea;
      }

      if (*(uint*)( this + 0x28 ) != 0) goto LAB_00100f2b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x20 ), false);
   }

   puVar9 = *(undefined8**)( this + 0x18 );
   LAB_00100f2b:if (puVar9 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar9, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x20 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererCompositorStorage::~RendererCompositorStorage() */void RendererCompositorStorage::~RendererCompositorStorage(RendererCompositorStorage *this) {
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
   *(undefined***)this = &PTR__RendererCompositorStorage_00103ec0;
   singleton = 0;
   RID_Alloc<RendererCompositorStorage::Compositor,true>::~RID_Alloc((RID_Alloc<RendererCompositorStorage::Compositor,true>*)( this + 0x68 ));
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_00103e80;
   uVar3 = *(uint*)( this + 0x30 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x2c );
      uVar8 = ( ulong ) * (uint*)( this + 0x28 );
      puVar9 = *(undefined8**)( this + 0x18 );
      LAB_0010114a:if ((uint)uVar5 < (uint)uVar8) goto LAB_0010118b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar2 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x20 ) + lVar2 ), false);
         if (( uint )(uVar5 / uVar8) <= (uint)lVar7) break;
         puVar9 = *(undefined8**)( this + 0x18 );
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

      uVar8 = ( ulong ) * (uint*)( this + 0x28 );
      puVar9 = *(undefined8**)( this + 0x18 );
      if (*(int*)( this + 0x2c ) != 0) {
         uVar6 = 0;
         do {
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x28;
            if (-1 < *(int*)( lVar7 + 0x20 )) {
               Callable::~Callable((Callable*)( lVar7 + 8 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x28 );
               puVar9 = *(undefined8**)( this + 0x18 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x2c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_0010114a;
      }

      if (*(uint*)( this + 0x28 ) != 0) goto LAB_0010118b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x20 ), false);
   }

   puVar9 = *(undefined8**)( this + 0x18 );
   LAB_0010118b:if (puVar9 != (undefined8*)0x0) {
      Memory::free_static(puVar9, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0xc0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererCompositorStorage::compositor_effect_free(RID) */void RendererCompositorStorage::compositor_effect_free(RendererCompositorStorage *this, ulong param_2) {
   undefined1(*pauVar1)[16];
   pthread_mutex_t *ppVar2;
   int iVar3;
   ulong uVar4;
   void *pvVar5;
   int iVar6;
   uint uVar7;
   ulong *puVar8;
   undefined1(*pauVar9)[16];
   char *pcVar10;
   long lVar11;
   undefined8 uVar12;
   uint uVar13;
   char *pcVar14;
   long lVar15;
   char *pcVar16;
   long lVar17;
   ulong uVar18;
   long lVar19;
   if (( param_2 != 0 ) && ( uVar13 = (uint)param_2 ),uVar13 < *(uint*)( this + 0x2c )) {
      pcVar10 = (char*)( *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28 );
      iVar3 = *(int*)( pcVar10 + 0x20 );
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         ppVar2 = (pthread_mutex_t*)( this + 0x98 );
         iVar6 = pthread_mutex_lock(ppVar2);
         if (iVar6 == 0) {
            pauVar9 = (undefined1(*) [16])0x0;
            uVar18 = 0;
            if (*(int*)( this + 0x84 ) == 0) {
               pthread_mutex_unlock(ppVar2);
            }
 else {
               do {
                  uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x70 ) + ( uVar18 / *(uint*)( this + 0x80 ) ) * 8 ) + ( uVar18 % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x18 + 0x10 );
                  if (uVar7 != 0xffffffff) {
                     if (pauVar9 == (undefined1(*) [16])0x0) {
                        pauVar9 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined4*)pauVar9[1] = 0;
                        *pauVar9 = (undefined1[16])0x0;
                     }

                     puVar8 = (ulong*)operator_new(0x20, DefaultAllocator::alloc);
                     uVar4 = *(ulong*)( *pauVar9 + 8 );
                     puVar8[1] = 0;
                     *puVar8 = (ulong)uVar7 << 0x20 | uVar18;
                     puVar8[2] = uVar4;
                     puVar8[3] = (ulong)pauVar9;
                     if (uVar4 != 0) {
                        *(ulong**)( uVar4 + 8 ) = puVar8;
                     }

                     lVar15 = *(long*)*pauVar9;
                     *(ulong**)( *pauVar9 + 8 ) = puVar8;
                     if (lVar15 == 0) {
                        *(ulong**)*pauVar9 = puVar8;
                     }

                     *(int*)pauVar9[1] = *(int*)pauVar9[1] + 1;
                  }

                  uVar18 = uVar18 + 1;
               }
 while ( uVar18 < *(uint*)( this + 0x84 ) );
               pthread_mutex_unlock(ppVar2);
               if (pauVar9 != (undefined1(*) [16])0x0) {
                  for (puVar8 = *(ulong**)*pauVar9; puVar8 != (ulong*)0x0; puVar8 = (ulong*)puVar8[1]) {
                     if (*puVar8 != 0) {
                        uVar18 = *puVar8;
                        if ((uint)uVar18 < *(uint*)( this + 0x84 )) {
                           lVar15 = *(long*)( *(long*)( this + 0x70 ) + ( ( uVar18 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + ( ( uVar18 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x18;
                           if (*(int*)( lVar15 + 0x10 ) == (int)( uVar18 >> 0x20 )) {
                              lVar17 = *(long*)( lVar15 + 8 );
                              if (( lVar17 != 0 ) && ( lVar11= *(long *)(lVar17 + -8),0 < lVar11 )) {
                                 lVar19 = 0;
                                 do {
                                    if (param_2 == *(ulong*)( lVar17 + lVar19 * 8 )) {
                                       if (lVar19 < lVar11) {
                                          CowData<RID>::_copy_on_write((CowData<RID>*)( lVar15 + 8 ));
                                          lVar17 = *(long*)( lVar15 + 8 );
                                          if (lVar17 == 0) {
                                             lVar11 = -1;
                                          }
 else {
                                             lVar11 = *(long*)( lVar17 + -8 ) + -1;
                                             if (lVar19 < lVar11) {
                                                memmove((void*)( lVar17 + lVar19 * 8 ), (void*)( lVar17 + 8 + lVar19 * 8 ), ( lVar11 - lVar19 ) * 8);
                                             }

                                          }

                                          CowData<RID>::resize<false>((CowData<RID>*)( lVar15 + 8 ), lVar11);
                                       }
 else {
                                          _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar19, lVar11, "p_index", "size()", "", false, false);
                                       }

                                       break;
                                    }

                                    lVar19 = lVar19 + 1;
                                 }
 while ( lVar11 != lVar19 );
                              }

                           }
 else if (*(int*)( lVar15 + 0x10 ) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                           }

                        }

                     }

                  }

               }

            }

            if (( *pcVar10 != '\0' ) && ( ( pcVar10[0x18] & 4U ) != 0 )) {
               *(int*)( this + 8 ) = *(int*)( this + 8 ) + -1;
            }

            ppVar2 = (pthread_mutex_t*)( this + 0x40 );
            iVar6 = pthread_mutex_lock(ppVar2);
            if (iVar6 == 0) {
               if (uVar13 < *(uint*)( this + 0x2c )) {
                  uVar18 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 );
                  lVar17 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28;
                  lVar15 = *(long*)( *(long*)( this + 0x18 ) + uVar18 * 8 ) + lVar17;
                  iVar6 = *(int*)( lVar15 + 0x20 );
                  if (iVar6 < 0) {
                     pthread_mutex_unlock(ppVar2);
                     _err_print_error(&_LC25, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
                  }
 else if (iVar3 == iVar6) {
                     Callable::~Callable((Callable*)( lVar15 + 8 ));
                     lVar15 = *(long*)( this + 0x20 );
                     *(undefined4*)( *(long*)( *(long*)( this + 0x18 ) + uVar18 * 8 ) + 0x20 + lVar17 ) = 0xffffffff;
                     uVar7 = *(int*)( this + 0x30 ) - 1;
                     *(uint*)( this + 0x30 ) = uVar7;
                     *(uint*)( *(long*)( lVar15 + ( (ulong)uVar7 / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( (ulong)uVar7 % ( ulong ) * (uint*)( this + 0x28 ) ) * 4 ) = uVar13;
                     pthread_mutex_unlock(ppVar2);
                  }
 else {
                     pthread_mutex_unlock(ppVar2);
                     _err_print_error(&_LC25, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
                  }

               }
 else {
                  pthread_mutex_unlock(ppVar2);
                  _err_print_error(&_LC25, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
               }

               if (pauVar9 == (undefined1(*) [16])0x0) {
                  return;
               }

               do {
                  while (true) {
                     pvVar5 = *(void**)*pauVar9;
                     if (pvVar5 == (void*)0x0) {
                        if (*(int*)pauVar9[1] != 0) {
                           pcVar10 = "Condition \"_data->size_cache\" is true.";
                           uVar12 = 0x316;
                           pcVar14 = "./core/templates/list.h";
                           pcVar16 = "~List";
                           goto LAB_001015d2;
                        }

                        goto LAB_00101592;
                     }

                     if (pauVar9 != *(undefined1(**) [16])( (long)pvVar5 + 0x18 )) break;
                     lVar15 = *(long*)( (long)pvVar5 + 8 );
                     lVar17 = *(long*)( (long)pvVar5 + 0x10 );
                     *(long*)*pauVar9 = lVar15;
                     if (pvVar5 == *(void**)( *pauVar9 + 8 )) {
                        *(long*)( *pauVar9 + 8 ) = lVar17;
                     }

                     if (lVar17 != 0) {
                        *(long*)( lVar17 + 8 ) = lVar15;
                        lVar15 = *(long*)( (long)pvVar5 + 8 );
                     }

                     if (lVar15 != 0) {
                        *(long*)( lVar15 + 0x10 ) = lVar17;
                     }

                     Memory::free_static(pvVar5, false);
                     pauVar1 = pauVar9 + 1;
                     *(int*)*pauVar1 = *(int*)*pauVar1 + -1;
                     if (*(int*)*pauVar1 == 0) goto LAB_00101592;
                  }
;
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }
 while ( *(int*)pauVar9[1] != 0 );
               LAB_00101592:Memory::free_static(pauVar9, false);
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }

      if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   pcVar10 = "Parameter \"effect\" is null.";
   uVar12 = 0x39;
   pcVar14 = "servers/rendering/storage/compositor_storage.cpp";
   pcVar16 = "compositor_effect_free";
   LAB_001015d2:_err_print_error(pcVar16, pcVar14, uVar12, pcVar10, 0, 0);
   return;
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
/* RendererCompositorStorage::compositor_get_compositor_effects(RID,
   RenderingServer::CompositorEffectCallbackType, bool) const */long RendererCompositorStorage::compositor_get_compositor_effects(long param_1, RendererCompositorStorage *param_2, ulong param_3, int param_4, char param_5) {
   long lVar1;
   char cVar2;
   int iVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long in_FS_OFFSET;
   Vector<RID> local_58[8];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x84 ) )) {
      lVar1 = *(long*)( *(long*)( param_2 + 0x70 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x80 ) ) * 8 ) + ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x80 ) ) * 0x18;
      if (*(int*)( lVar1 + 0x10 ) == (int)( param_3 >> 0x20 )) {
         if (( param_4 == -1 ) && ( param_5 == '\0' )) {
            *(undefined8*)( param_1 + 8 ) = 0;
            if (*(long*)( lVar1 + 8 ) != 0) {
               CowData<RID>::_ref((CowData<RID>*)( param_1 + 8 ), (CowData*)( lVar1 + 8 ));
            }

         }
 else {
            local_50 = 0;
            CowData<RID>::_copy_on_write((CowData<RID>*)( lVar1 + 8 ));
            puVar7 = *(undefined8**)( lVar1 + 8 );
            CowData<RID>::_copy_on_write((CowData<RID>*)( lVar1 + 8 ));
            puVar5 = *(undefined8**)( lVar1 + 8 );
            if (puVar5 != (undefined8*)0x0) {
               puVar5 = puVar5 + puVar5[-1];
            }

            if (puVar5 == puVar7) {
               uVar4 = 0;
            }
 else {
               do {
                  while (true) {
                     uVar6 = *puVar7;
                     if (param_5 != '\0') {
                        cVar2 = compositor_effect_get_enabled(param_2, uVar6);
                        uVar4 = local_50;
                        while (local_50 = uVar4,cVar2 == '\0') {
                           puVar7 = puVar7 + 1;
                           if (puVar5 == puVar7) goto LAB_00101a9a;
                           uVar6 = *puVar7;
                           cVar2 = compositor_effect_get_enabled(param_2, uVar6);
                           uVar4 = local_50;
                        }
;
                     }

                     if (( param_4 != -1 ) && ( iVar3 = iVar3 != param_4 )) break;
                     puVar7 = puVar7 + 1;
                     Vector<RID>::push_back(local_58, uVar6);
                     uVar4 = local_50;
                     if (puVar5 == puVar7) goto LAB_00101a9a;
                  }
;
                  puVar7 = puVar7 + 1;
                  uVar4 = local_50;
               }
 while ( puVar5 != puVar7 );
            }

            LAB_00101a9a:*(undefined8*)( param_1 + 8 ) = uVar4;
         }

         goto LAB_001019dd;
      }

      if (*(int*)( lVar1 + 0x10 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_get_compositor_effects", "servers/rendering/storage/compositor_storage.cpp", 0xb5, "Parameter \"compositor\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   LAB_001019dd:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererCompositorStorage::compositor_set_compositor_effects(RID, Vector<RID> const&) */void RendererCompositorStorage::compositor_set_compositor_effects(RendererCompositorStorage *this, ulong param_2, long param_3) {
   pthread_mutex_t *__mutex;
   Vector<RID> *pVVar1;
   ulong *puVar2;
   ulong uVar3;
   int iVar4;
   ulong *puVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x84 ) )) {
      pVVar1 = (Vector<RID>*)( *(long*)( *(long*)( this + 0x70 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x80 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x80 ) ) * 0x18 );
      if (*(int*)( pVVar1 + 0x10 ) == (int)( param_2 >> 0x20 )) {
         CowData<RID>::resize<false>((CowData<RID>*)( pVVar1 + 8 ), 0);
         puVar5 = *(ulong**)( param_3 + 8 );
         if (( puVar5 != (ulong*)0x0 ) && ( puVar2 = puVar2 != puVar5 )) {
            __mutex = (pthread_mutex_t*)( this + 0x40 );
            do {
               while (true) {
                  uVar3 = *puVar5;
                  iVar4 = pthread_mutex_lock(__mutex);
                  if (iVar4 != 0) {
                     /* WARNING: Subroutine does not return */
                     std::__throw_system_error(iVar4);
                  }

                  if (*(uint*)( this + 0x2c ) <= (uint)uVar3) break;
                  if (( uVar3 >> 0x20 == 0x7fffffff ) || ( ( *(uint*)( *(long*)( *(long*)( this + 0x18 ) + ( ( uVar3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( ( uVar3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x28 + 0x20 ) & 0x7fffffff ) != ( uint )(uVar3 >> 0x20) )) {
                     pthread_mutex_unlock(__mutex);
                     goto LAB_00101bf5;
                  }

                  pthread_mutex_unlock(__mutex);
                  uVar3 = *puVar5;
                  puVar5 = puVar5 + 1;
                  Vector<RID>::push_back(pVVar1, uVar3);
                  if (puVar2 == puVar5) {
                     return;
                  }

               }
;
               pthread_mutex_unlock(__mutex);
               LAB_00101bf5:puVar5 = puVar5 + 1;
            }
 while ( puVar2 != puVar5 );
         }

         return;
      }

      if (*(int*)( pVVar1 + 0x10 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("compositor_set_compositor_effects", "servers/rendering/storage/compositor_storage.cpp", 0xa9, "Parameter \"compositor\" is null.", 0, 0);
   return;
}
/* RendererCompositorStorage::compositor_effect_allocate() */void RendererCompositorStorage::compositor_effect_allocate(RendererCompositorStorage *this) {
   RID_Alloc<RendererCompositorStorage::CompositorEffect,true>::allocate_rid((RID_Alloc<RendererCompositorStorage::CompositorEffect,true>*)( this + 0x10 ));
   return;
}
/* RendererCompositorStorage::compositor_allocate() */void RendererCompositorStorage::compositor_allocate(RendererCompositorStorage *this) {
   RID_Alloc<RendererCompositorStorage::Compositor,true>::allocate_rid((RID_Alloc<RendererCompositorStorage::Compositor,true>*)( this + 0x68 ));
   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Removing unreachable block (ram,0x00102360) *//* WARNING: Removing unreachable block (ram,0x00102490) *//* WARNING: Removing unreachable block (ram,0x00102609) *//* WARNING: Removing unreachable block (ram,0x0010249c) *//* WARNING: Removing unreachable block (ram,0x001024a6) *//* WARNING: Removing unreachable block (ram,0x001025eb) *//* WARNING: Removing unreachable block (ram,0x001024b2) *//* WARNING: Removing unreachable block (ram,0x001024bc) *//* WARNING: Removing unreachable block (ram,0x001025cd) *//* WARNING: Removing unreachable block (ram,0x001024c8) *//* WARNING: Removing unreachable block (ram,0x001024d2) *//* WARNING: Removing unreachable block (ram,0x001025af) *//* WARNING: Removing unreachable block (ram,0x001024de) *//* WARNING: Removing unreachable block (ram,0x001024e8) *//* WARNING: Removing unreachable block (ram,0x00102591) *//* WARNING: Removing unreachable block (ram,0x001024f4) *//* WARNING: Removing unreachable block (ram,0x001024fe) *//* WARNING: Removing unreachable block (ram,0x00102573) *//* WARNING: Removing unreachable block (ram,0x00102506) *//* WARNING: Removing unreachable block (ram,0x00102510) *//* WARNING: Removing unreachable block (ram,0x00102558) *//* WARNING: Removing unreachable block (ram,0x00102518) *//* WARNING: Removing unreachable block (ram,0x0010252e) *//* WARNING: Removing unreachable block (ram,0x0010253a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<RendererCompositorStorage::CompositorEffect, true>::~RID_Alloc() */void RID_Alloc<RendererCompositorStorage::CompositorEffect,true>::~RID_Alloc(RID_Alloc<RendererCompositorStorage::CompositorEffect,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00103e80;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_0010279a:if ((uint)uVar5 < (uint)uVar8) goto LAB_001027db;
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
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x28;
            if (-1 < *(int*)( lVar7 + 0x20 )) {
               Callable::~Callable((Callable*)( lVar7 + 8 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_0010279a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_001027db;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_001027db:if (puVar9 == (undefined8*)0x0) {
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
/* RID_Alloc<RendererCompositorStorage::Compositor, true>::~RID_Alloc() */void RID_Alloc<RendererCompositorStorage::Compositor,true>::~RID_Alloc(RID_Alloc<RendererCompositorStorage::Compositor,true> *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
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
   *(undefined***)this = &PTR__RID_Alloc_00103ea0;
   uVar2 = *(uint*)( this + 0x20 );
   if (uVar2 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_001029f2:if ((uint)uVar5 < (uint)uVar8) goto LAB_00102a33;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar9[lVar7], false);
         lVar3 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar3 ), false);
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
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x18;
            if (( -1 < *(int*)( lVar7 + 0x10 ) ) && ( *(long*)( lVar7 + 8 ) != 0 )) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar7 + 8 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( lVar7 + 8 );
                  *(undefined8*)( lVar7 + 8 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_001029f2;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00102a33;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_00102a33:if (puVar9 == (undefined8*)0x0) {
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
/* RID_Alloc<RendererCompositorStorage::Compositor, true>::~RID_Alloc() */void RID_Alloc<RendererCompositorStorage::Compositor,true>::~RID_Alloc(RID_Alloc<RendererCompositorStorage::Compositor,true> *this) {
   ~RID_Alloc(this)
   ;;
   operator_delete(this, 0x58);
   return;
}
/* RID_Alloc<RendererCompositorStorage::CompositorEffect, true>::~RID_Alloc() */void RID_Alloc<RendererCompositorStorage::CompositorEffect,true>::~RID_Alloc(RID_Alloc<RendererCompositorStorage::CompositorEffect,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00103e80;
   uVar3 = *(uint*)( this + 0x20 );
   if (uVar3 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = ( ulong ) * (uint*)( this + 0x18 );
      puVar9 = *(undefined8**)( this + 8 );
      LAB_00102c4a:if ((uint)uVar5 < (uint)uVar8) goto LAB_00102c8b;
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
            lVar7 = puVar9[uVar6 / uVar8] + ( uVar6 % uVar8 ) * 0x28;
            if (-1 < *(int*)( lVar7 + 0x20 )) {
               Callable::~Callable((Callable*)( lVar7 + 8 ));
               uVar8 = ( ulong ) * (uint*)( this + 0x18 );
               puVar9 = *(undefined8**)( this + 8 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar5 );
         goto LAB_00102c4a;
      }

      if (*(uint*)( this + 0x18 ) != 0) goto LAB_00102c8b;
      Memory::free_static((void*)*puVar9, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar9 = *(undefined8**)( this + 8 );
   LAB_00102c8b:if (puVar9 != (undefined8*)0x0) {
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
      LAB_001030b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_001030b0;
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
      LAB_0010301c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00102fb1;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010301c;
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
   LAB_00102fb1:puVar9[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00103238) *//* WARNING: Removing unreachable block (ram,0x00103368) *//* WARNING: Removing unreachable block (ram,0x00103530) *//* WARNING: Removing unreachable block (ram,0x00103374) *//* WARNING: Removing unreachable block (ram,0x0010337e) *//* WARNING: Removing unreachable block (ram,0x00103510) *//* WARNING: Removing unreachable block (ram,0x0010338a) *//* WARNING: Removing unreachable block (ram,0x00103394) *//* WARNING: Removing unreachable block (ram,0x001034f0) *//* WARNING: Removing unreachable block (ram,0x001033a0) *//* WARNING: Removing unreachable block (ram,0x001033aa) *//* WARNING: Removing unreachable block (ram,0x001034d0) *//* WARNING: Removing unreachable block (ram,0x001033b6) *//* WARNING: Removing unreachable block (ram,0x001033c0) *//* WARNING: Removing unreachable block (ram,0x001034b0) *//* WARNING: Removing unreachable block (ram,0x001033cc) *//* WARNING: Removing unreachable block (ram,0x001033d6) *//* WARNING: Removing unreachable block (ram,0x00103490) *//* WARNING: Removing unreachable block (ram,0x001033e2) *//* WARNING: Removing unreachable block (ram,0x001033ec) *//* WARNING: Removing unreachable block (ram,0x00103470) *//* WARNING: Removing unreachable block (ram,0x001033f4) *//* WARNING: Removing unreachable block (ram,0x0010340a) *//* WARNING: Removing unreachable block (ram,0x00103416) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* RID_Alloc<RendererCompositorStorage::CompositorEffect, true>::allocate_rid() */ulong RID_Alloc<RendererCompositorStorage::CompositorEffect,true>::allocate_rid(RID_Alloc<RendererCompositorStorage::CompositorEffect,true> *this) {
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
         goto LAB_00103779;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x28, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x20 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 10;
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
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0x28 + 0x20 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00103779:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererCompositorStorage::Compositor, true>::allocate_rid() */ulong RID_Alloc<RendererCompositorStorage::Compositor,true>::allocate_rid(RID_Alloc<RendererCompositorStorage::Compositor,true> *this) {
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
         goto LAB_00103ac9;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x18, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x10 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 6;
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
   *(uint*)( *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 0x18 + 0x10 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00103ac9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererCompositorStorage::Compositor, true>::~RID_Alloc() */void RID_Alloc<RendererCompositorStorage::Compositor,true>::~RID_Alloc(RID_Alloc<RendererCompositorStorage::Compositor,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererCompositorStorage::CompositorEffect, true>::~RID_Alloc() */void RID_Alloc<RendererCompositorStorage::CompositorEffect,true>::~RID_Alloc(RID_Alloc<RendererCompositorStorage::CompositorEffect,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


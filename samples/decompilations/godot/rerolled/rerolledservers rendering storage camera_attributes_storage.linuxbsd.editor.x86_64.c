/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererCameraAttributes::RendererCameraAttributes() */void RendererCameraAttributes::RendererCameraAttributes(RendererCameraAttributes *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   uVar2 = _LC0;
   *(undefined1(*) [16])( this + 0x50 ) = (undefined1[16])0x0;
   *(undefined8*)this = uVar2;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00102ba8;
   uVar2 = __LC1;
   this[8] = (RendererCameraAttributes)0x0;
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_00102b40;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 24 ) ) = 0;
   }

   *(undefined4*)( this + 0x50 ) = 1;
   *(undefined8*)( this + 0x28 ) = uVar2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   uVar2 = Memory::alloc_static(0x908, false);
   *(undefined8*)( this + 0x18 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x34 ) << 3, false);
   *(undefined8*)( this + 0x20 ) = uVar2;
   singleton = this;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererCameraAttributes::camera_attributes_initialize(RID) */void RendererCameraAttributes::camera_attributes_initialize(RendererCameraAttributes *this, ulong param_2) {
   long lVar1;
   ulong uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   uint uVar8;
   char *pcVar9;
   uVar7 = __LC7;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      puVar6 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      if ((int)*(uint*)( puVar6 + 9 ) < 0) {
         uVar8 = ( uint )(param_2 >> 0x20);
         if (uVar8 == ( *(uint*)( puVar6 + 9 ) & 0x7fffffff )) {
            *(uint*)( puVar6 + 9 ) = uVar8;
            uVar5 = __LC7;
            uVar4 = __LC9;
            uVar3 = _LC11;
            uVar2 = _LC10 >> 0x20;
            lVar1 = _LC10 << 0x20;
            *puVar6 = uVar7;
            puVar6[1] = 0x42c80000;
            puVar6[8] = 0x3dcccccd;
            puVar6[2] = uVar4;
            puVar6[3] = uVar5;
            puVar6[4] = 0;
            puVar6[5] = lVar1;
            puVar6[6] = uVar2;
            puVar6[7] = uVar3;
            return;
         }

         pcVar9 = "Attempting to initialize the wrong RID";
         uVar7 = 0xfc;
      }
 else {
         pcVar9 = "Initializing already initialized RID";
         uVar7 = 0xf8;
      }

      _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar7, "Method/function failed. Returning: nullptr", pcVar9, 0, 0);
   }

   _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
   return;
}
/* RendererCameraAttributes::camera_attributes_free(RID) */int RendererCameraAttributes::camera_attributes_free(RendererCameraAttributes *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   uint uVar1;
   int iVar2;
   undefined1 extraout_DL;
   long lVar3;
   undefined8 uVar4;
   undefined4 uVar5;
   undefined4 *puVar7;
   ulong uVar6;
   __mutex = (pthread_mutex_t*)( this + 0x40 );
   uVar6 = param_2;
   uVar1 = pthread_mutex_lock(__mutex);
   uVar5 = (undefined4)uVar6;
   if (uVar1 != 0) {
      puVar7 = (undefined4*)(ulong)uVar1;
      iVar2 = std::__throw_system_error(uVar1);
      *puVar7 = uVar5;
      *(undefined1*)( puVar7 + 2 ) = extraout_DL;
      return iVar2;
   }

   if ((uint)param_2 < *(uint*)( this + 0x2c )) {
      lVar3 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar2 = *(int*)( lVar3 + 0x48 );
      if (iVar2 < 0) {
         pthread_mutex_unlock(__mutex);
         _err_print_error(&_LC18, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         return 0;
      }

      if ((int)( param_2 >> 0x20 ) == iVar2) {
         *(undefined4*)( lVar3 + 0x48 ) = 0xffffffff;
         uVar1 = *(int*)( this + 0x30 ) - 1;
         *(uint*)( this + 0x30 ) = uVar1;
         *(uint*)( *(long*)( *(long*)( this + 0x20 ) + ( (ulong)uVar1 / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) + ( (ulong)uVar1 % ( ulong ) * (uint*)( this + 0x28 ) ) * 4 ) = (uint)param_2;
         iVar2 = pthread_mutex_unlock(__mutex);
         return iVar2;
      }

      pthread_mutex_unlock(__mutex);
      uVar4 = 0x171;
   }
 else {
      pthread_mutex_unlock(__mutex);
      uVar4 = 0x161;
   }

   iVar2 = _err_print_error(&_LC18, "./core/templates/rid_owner.h", uVar4, "Method/function failed.", 0, 0);
   return iVar2;
}
/* RendererCameraAttributes::camera_attributes_set_dof_blur_quality(RenderingServer::DOFBlurQuality,
   bool) */void RendererCameraAttributes::camera_attributes_set_dof_blur_quality(RendererCameraAttributes *this, undefined4 param_2, RendererCameraAttributes param_3) {
   *(undefined4*)this = param_2;
   this[8] = param_3;
   return;
}
/* RendererCameraAttributes::camera_attributes_set_dof_blur_bokeh_shape(RenderingServer::DOFBokehShape)
    */void RendererCameraAttributes::camera_attributes_set_dof_blur_bokeh_shape(RendererCameraAttributes *this, undefined4 param_2) {
   *(undefined4*)( this + 4 ) = param_2;
   return;
}
/* RendererCameraAttributes::camera_attributes_set_dof_blur(RID, bool, float, float, bool, float,
   float, float) */void RendererCameraAttributes::camera_attributes_set_dof_blur(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, RendererCameraAttributes *this, ulong param_7, char param_8, char param_9) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_7 != 0 ) && ( (uint)param_7 < *(uint*)( this + 0x2c ) )) {
      lVar6 = ( ( param_7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar6 + 0x48 ) == (int)( param_7 >> 0x20 )) {
         lVar4 = OS::get_singleton();
         local_48 = 0;
         plVar1 = (long*)( *(long*)( lVar4 + 0x68 ) + -0x10 );
         if (*(long*)( lVar4 + 0x68 ) != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_0010042f;
               LOCK();
               lVar5 = *plVar1;
               bVar7 = lVar2 == lVar5;
               if (bVar7) {
                  *plVar1 = lVar2 + 1;
                  lVar5 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar7 );
            if (lVar5 != -1) {
               local_48 = *(long*)( lVar4 + 0x68 );
            }

         }

         LAB_0010042f:cVar3 = String::operator ==((String_conflict*)&local_48, "gl_compatibility");
         lVar4 = local_48;
         if (cVar3 == '\0') {
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

         }
 else {
            if (local_48 != 0) {
               LOCK();
               plVar1 = (long*)( local_48 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_48 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (( param_9 != '\0' || param_8 != '\0' ) && ( camera_attributes_set_dof_blur(RID,bool,float,float,bool,float,float,float):: )) {
               _err_print_error("camera_attributes_set_dof_blur", "servers/rendering/storage/camera_attributes_storage.cpp", 0x46, "DoF blur is only available when using the Forward+ or Mobile renderers.", 1, 1);
               camera_attributes_set_dof_blur(RID,bool,float,float,bool,float,float,float)::first_print =
               '\0';
            }

         }

         *(char*)( lVar6 + 0x28 ) = param_8;
         *(ulong*)( lVar6 + 0x2c ) = CONCAT44(param_2, param_1);
         *(char*)( lVar6 + 0x34 ) = param_9;
         *(ulong*)( lVar6 + 0x38 ) = CONCAT44(param_4, param_3);
         *(undefined4*)( lVar6 + 0x40 ) = param_5;
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_001005cb;
      }

      if (*(int*)( lVar6 + 0x48 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("camera_attributes_set_dof_blur", "servers/rendering/storage/camera_attributes_storage.cpp", 0x43, "Parameter \"cam_attributes\" is null.", 0, 0);
      return;
   }

   LAB_001005cb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererCameraAttributes::camera_attributes_get_dof_far_enabled(RID) */undefined1 RendererCameraAttributes::camera_attributes_get_dof_far_enabled(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x28 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_far_enabled", "servers/rendering/storage/camera_attributes_storage.cpp", 0x56, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_dof_far_distance(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_dof_far_distance(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x2c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_far_distance", "servers/rendering/storage/camera_attributes_storage.cpp", 0x5c, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_dof_far_transition(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_dof_far_transition(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x30 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_far_transition", "servers/rendering/storage/camera_attributes_storage.cpp", 0x62, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_dof_near_enabled(RID) */undefined1 RendererCameraAttributes::camera_attributes_get_dof_near_enabled(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined1*)( lVar2 + 0x34 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_near_enabled", "servers/rendering/storage/camera_attributes_storage.cpp", 0x68, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_dof_near_distance(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_dof_near_distance(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x38 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_near_distance", "servers/rendering/storage/camera_attributes_storage.cpp", 0x6e, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_dof_near_transition(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_dof_near_transition(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x3c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_near_transition", "servers/rendering/storage/camera_attributes_storage.cpp", 0x74, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_dof_blur_amount(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_dof_blur_amount(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x40 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_dof_blur_amount", "servers/rendering/storage/camera_attributes_storage.cpp", 0x7a, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_set_exposure(RID, float, float) */void RendererCameraAttributes::camera_attributes_set_exposure(undefined4 param_1, undefined4 param_2, RendererCameraAttributes *this, ulong param_4) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( this + 0x2c ) )) {
      puVar2 = (undefined8*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      iVar1 = *(int*)( puVar2 + 9 );
      if (iVar1 == (int)( param_4 >> 0x20 )) {
         *puVar2 = CONCAT44(param_2, param_1);
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_set_exposure", "servers/rendering/storage/camera_attributes_storage.cpp", 0x80, "Parameter \"cam_attributes\" is null.", 0, 0);
   return;
}
/* RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor(RID) */float RendererCameraAttributes::camera_attributes_get_exposure_normalization_factor(RendererCameraAttributes *this, ulong param_2) {
   float *pfVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      pfVar1 = (float*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 ) );
      if (pfVar1[0x12] == (float)( param_2 >> 0x20 )) {
         return *pfVar1 * pfVar1[1];
      }

      if ((int)pfVar1[0x12] + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_exposure_normalization_factor", "servers/rendering/storage/camera_attributes_storage.cpp", 0x87, "Parameter \"cam_attributes\" is null.", 0, 0);
   return _LC7;
}
/* RendererCameraAttributes::camera_attributes_set_auto_exposure(RID, bool, float, float, float,
   float) */void RendererCameraAttributes::camera_attributes_set_auto_exposure(undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, RendererCameraAttributes *this, ulong param_6, char param_7) {
   long *plVar1;
   long lVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_6 != 0 ) && ( (uint)param_6 < *(uint*)( this + 0x2c ) )) {
      lVar6 = ( ( param_6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      if (*(int*)( lVar6 + 0x48 ) == (int)( param_6 >> 0x20 )) {
         if (( *(char*)( lVar6 + 0xc ) != '\x01' ) && ( param_7 != '\0' )) {
            auto_exposure_counter = auto_exposure_counter + 1;
            *(long*)( lVar6 + 0x20 ) = auto_exposure_counter;
         }

         lVar4 = OS::get_singleton();
         local_28 = 0;
         plVar1 = (long*)( *(long*)( lVar4 + 0x68 ) + -0x10 );
         if (*(long*)( lVar4 + 0x68 ) != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_00100d6a;
               LOCK();
               lVar5 = *plVar1;
               bVar7 = lVar2 == lVar5;
               if (bVar7) {
                  *plVar1 = lVar2 + 1;
                  lVar5 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar7 );
            if (lVar5 != -1) {
               local_28 = *(long*)( lVar4 + 0x68 );
            }

         }

         LAB_00100d6a:cVar3 = String::operator ==((String_conflict*)&local_28, "gl_compatibility");
         lVar4 = local_28;
         if (cVar3 == '\0') {
            if (local_28 != 0) {
               LOCK();
               plVar1 = (long*)( local_28 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_28 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

         }
 else {
            if (local_28 != 0) {
               LOCK();
               plVar1 = (long*)( local_28 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_28 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (( param_7 != '\0' ) && ( camera_attributes_set_auto_exposure(RID,bool,float,float,float,float):: )) {
               _err_print_error("camera_attributes_set_auto_exposure", "servers/rendering/storage/camera_attributes_storage.cpp", 0x94, "Auto exposure is only available when using the Forward+ or Mobile renderers.", 1, 1);
               camera_attributes_set_auto_exposure(RID,bool,float,float,float,float)::first_print =
               '\0';
            }

         }

         *(char*)( lVar6 + 0xc ) = param_7;
         *(ulong*)( lVar6 + 0x10 ) = CONCAT44(param_2, param_1);
         *(ulong*)( lVar6 + 0x18 ) = CONCAT44(param_4, param_3);
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00100f03;
      }

      if (*(int*)( lVar6 + 0x48 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("camera_attributes_set_auto_exposure", "servers/rendering/storage/camera_attributes_storage.cpp", 0x8e, "Parameter \"cam_attributes\" is null.", 0, 0);
      return;
   }

   LAB_00100f03:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RendererCameraAttributes::camera_attributes_get_auto_exposure_min_sensitivity(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_auto_exposure_min_sensitivity(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x10 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_auto_exposure_min_sensitivity", "servers/rendering/storage/camera_attributes_storage.cpp", 0xa0, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_auto_exposure_max_sensitivity(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_auto_exposure_max_sensitivity(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x14 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_auto_exposure_max_sensitivity", "servers/rendering/storage/camera_attributes_storage.cpp", 0xa6, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_auto_exposure_adjust_speed(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_auto_exposure_adjust_speed(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x18 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_auto_exposure_adjust_speed", "servers/rendering/storage/camera_attributes_storage.cpp", 0xac, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_auto_exposure_scale(RID) */undefined4 RendererCameraAttributes::camera_attributes_get_auto_exposure_scale(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x1c );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_auto_exposure_scale", "servers/rendering/storage/camera_attributes_storage.cpp", 0xb2, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::camera_attributes_get_auto_exposure_version(RID) */undefined8 RendererCameraAttributes::camera_attributes_get_auto_exposure_version(RendererCameraAttributes *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2c ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x28 ) ) * 0x50 + *(long*)( *(long*)( this + 0x18 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x28 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined8*)( lVar2 + 0x20 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("camera_attributes_get_auto_exposure_version", "servers/rendering/storage/camera_attributes_storage.cpp", 0xb8, "Parameter \"cam_attributes\" is null.", 0, 0);
   return 0;
}
/* RendererCameraAttributes::~RendererCameraAttributes() */void RendererCameraAttributes::~RendererCameraAttributes(RendererCameraAttributes *this) {
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
   singleton = 0;
   *(undefined***)( this + 0x10 ) = &PTR__RID_Alloc_00102b40;
   uVar3 = *(uint*)( this + 0x30 );
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

   uVar3 = *(uint*)( this + 0x2c );
   uVar4 = *(uint*)( this + 0x28 );
   if (uVar4 <= uVar3) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x18 ) + lVar6 * 8 ), false);
         lVar2 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x20 ) + lVar2 ), false);
      }
 while ( (uint)lVar6 < uVar3 / uVar4 );
   }

   if (*(void**)( this + 0x18 ) == (void*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(*(void**)( this + 0x18 ), false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x20 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererCameraAttributes::camera_attributes_allocate() */void RendererCameraAttributes::camera_attributes_allocate(RendererCameraAttributes *this) {
   RID_Alloc<RendererCameraAttributes::CameraAttributes,true>::allocate_rid((RID_Alloc<RendererCameraAttributes::CameraAttributes,true>*)( this + 0x10 ));
   return;
}
/* WARNING: Removing unreachable block (ram,0x00101bb0) *//* WARNING: Removing unreachable block (ram,0x00101ce0) *//* WARNING: Removing unreachable block (ram,0x00101e59) *//* WARNING: Removing unreachable block (ram,0x00101cec) *//* WARNING: Removing unreachable block (ram,0x00101cf6) *//* WARNING: Removing unreachable block (ram,0x00101e3b) *//* WARNING: Removing unreachable block (ram,0x00101d02) *//* WARNING: Removing unreachable block (ram,0x00101d0c) *//* WARNING: Removing unreachable block (ram,0x00101e1d) *//* WARNING: Removing unreachable block (ram,0x00101d18) *//* WARNING: Removing unreachable block (ram,0x00101d22) *//* WARNING: Removing unreachable block (ram,0x00101dff) *//* WARNING: Removing unreachable block (ram,0x00101d2e) *//* WARNING: Removing unreachable block (ram,0x00101d38) *//* WARNING: Removing unreachable block (ram,0x00101de1) *//* WARNING: Removing unreachable block (ram,0x00101d44) *//* WARNING: Removing unreachable block (ram,0x00101d4e) *//* WARNING: Removing unreachable block (ram,0x00101dc3) *//* WARNING: Removing unreachable block (ram,0x00101d56) *//* WARNING: Removing unreachable block (ram,0x00101d60) *//* WARNING: Removing unreachable block (ram,0x00101da8) *//* WARNING: Removing unreachable block (ram,0x00101d68) *//* WARNING: Removing unreachable block (ram,0x00101d7e) *//* WARNING: Removing unreachable block (ram,0x00101d8a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<RendererCameraAttributes::CameraAttributes, true>::~RID_Alloc() */void RID_Alloc<RendererCameraAttributes::CameraAttributes,true>::~RID_Alloc(RID_Alloc<RendererCameraAttributes::CameraAttributes,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00102b40;
   uVar3 = *(uint*)( this + 0x20 );
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
/* RID_Alloc<RendererCameraAttributes::CameraAttributes, true>::~RID_Alloc() */void RID_Alloc<RendererCameraAttributes::CameraAttributes,true>::~RID_Alloc(RID_Alloc<RendererCameraAttributes::CameraAttributes,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00102b40;
   uVar3 = *(uint*)( this + 0x20 );
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
/* WARNING: Removing unreachable block (ram,0x00102338) *//* WARNING: Removing unreachable block (ram,0x00102468) *//* WARNING: Removing unreachable block (ram,0x00102630) *//* WARNING: Removing unreachable block (ram,0x00102474) *//* WARNING: Removing unreachable block (ram,0x0010247e) *//* WARNING: Removing unreachable block (ram,0x00102610) *//* WARNING: Removing unreachable block (ram,0x0010248a) *//* WARNING: Removing unreachable block (ram,0x00102494) *//* WARNING: Removing unreachable block (ram,0x001025f0) *//* WARNING: Removing unreachable block (ram,0x001024a0) *//* WARNING: Removing unreachable block (ram,0x001024aa) *//* WARNING: Removing unreachable block (ram,0x001025d0) *//* WARNING: Removing unreachable block (ram,0x001024b6) *//* WARNING: Removing unreachable block (ram,0x001024c0) *//* WARNING: Removing unreachable block (ram,0x001025b0) *//* WARNING: Removing unreachable block (ram,0x001024cc) *//* WARNING: Removing unreachable block (ram,0x001024d6) *//* WARNING: Removing unreachable block (ram,0x00102590) *//* WARNING: Removing unreachable block (ram,0x001024e2) *//* WARNING: Removing unreachable block (ram,0x001024ec) *//* WARNING: Removing unreachable block (ram,0x00102570) *//* WARNING: Removing unreachable block (ram,0x001024f4) *//* WARNING: Removing unreachable block (ram,0x0010250a) *//* WARNING: Removing unreachable block (ram,0x00102516) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererCameraAttributes::CameraAttributes, true>::allocate_rid() */ulong RID_Alloc<RendererCameraAttributes::CameraAttributes,true>::allocate_rid(RID_Alloc<RendererCameraAttributes::CameraAttributes,true> *this) {
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
      std::__throw_system_error(iVar6);
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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
         goto LAB_00102879;
      }

      uVar13 = (ulong)uVar7;
      lVar3 = *(long*)( this + 8 );
      uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) * 0x50, false);
      uVar7 = *(uint*)( this + 0x18 );
      lVar9 = *(long*)( this + 0x10 );
      *(undefined8*)( lVar3 + uVar13 * 8 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
      uVar7 = *(uint*)( this + 0x18 );
      *(undefined8*)( uVar13 * 8 + lVar9 ) = uVar8;
      if (uVar7 != 0) {
         lVar3 = *(long*)( *(long*)( this + 0x10 ) + uVar13 * 8 );
         lVar9 = 0;
         puVar12 = (undefined4*)( *(long*)( *(long*)( this + 8 ) + uVar13 * 8 ) + 0x48 );
         do {
            *puVar12 = 0xffffffff;
            puVar12 = puVar12 + 0x14;
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
   *(uint*)( ( (ulong)uVar7 % (ulong)uVar2 ) * 0x50 + *(long*)( *(long*)( this + 8 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + 0x48 ) = uVar11 | 0x80000000;
   *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
   pthread_mutex_unlock(__mutex);
   LAB_00102879:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererCameraAttributes::CameraAttributes, true>::~RID_Alloc() */void RID_Alloc<RendererCameraAttributes::CameraAttributes,true>::~RID_Alloc(RID_Alloc<RendererCameraAttributes::CameraAttributes,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


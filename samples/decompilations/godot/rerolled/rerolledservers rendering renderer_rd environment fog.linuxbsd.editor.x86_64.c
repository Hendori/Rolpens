/* RendererRD::Fog::FogShaderData::casts_shadows() const */undefined8 RendererRD::Fog::FogShaderData::casts_shadows(void) {
   return 0;
}
/* RendererRD::Fog::fog_volume_set_material(RID, RID) */void RendererRD::Fog::fog_volume_set_material(Fog *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 ) );
      iVar1 = *(int*)( puVar2 + 9 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         *puVar2 = param_3;
         return;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_set_material", "servers/rendering/renderer_rd/environment/fog.cpp", 0x5f, "Parameter \"fog_volume\" is null.", 0, 0);
   return;
}
/* RendererRD::Fog::fog_volume_get_shape(RID) const */undefined4 RendererRD::Fog::fog_volume_get_shape(Fog *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *(undefined4*)( lVar2 + 0x14 );
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_get_shape", "servers/rendering/renderer_rd/environment/fog.cpp", 0x6c, "Parameter \"fog_volume\" is null.", 0, 0);
   return 3;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::Fog::fog_volume_get_aabb(RID) const */undefined8 *RendererRD::Fog::fog_volume_get_aabb(undefined8 *param_1, long param_2, ulong param_3) {
   long lVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   long lVar4;
   long in_FS_OFFSET;
   float fVar5;
   float fVar6;
   float fVar7;
   undefined4 uStack_1c;
   undefined4 uStack_18;
   uVar3 = _UNK_0011d4a8;
   uVar2 = _LC13;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x24 ) )) {
      lVar4 = ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x20 ) ) * 0x50 + *(long*)( *(long*)( param_2 + 0x10 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x20 ) ) * 8 );
      if (*(int*)( lVar4 + 0x48 ) == (int)( param_3 >> 0x20 )) {
         if (*(uint*)( lVar4 + 0x14 ) < 4) {
            uStack_1c = ( undefined4 ) * (undefined8*)( lVar4 + 8 );
            uStack_18 = ( undefined4 )(( ulong ) * (undefined8*)( lVar4 + 8 ) >> 0x20);
            fVar6 = _LC14 * (float)*(undefined8*)( lVar4 + 8 );
            fVar7 = _UNK_0011d35c * (float)( ( ulong ) * (undefined8*)( lVar4 + 8 ) >> 0x20 );
            fVar5 = _LC14 * *(float*)( lVar4 + 0x10 );
            param_1[2] = CONCAT44(*(undefined4*)( lVar4 + 0x10 ), uStack_18);
            *param_1 = CONCAT44(fVar7, fVar6);
            param_1[1] = CONCAT44(uStack_1c, fVar5);
         }
 else {
            *param_1 = __LC12;
            param_1[1] = uVar3;
            param_1[2] = uVar2;
         }

         goto LAB_0010024c;
      }

      if (*(int*)( lVar4 + 0x48 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_get_aabb", "servers/rendering/renderer_rd/environment/fog.cpp", 0x73, "Parameter \"fog_volume\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   LAB_0010024c:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::fog_volume_set_shape(RID, RenderingServer::FogVolumeShape) */void RendererRD::Fog::fog_volume_set_shape(Fog *this, ulong param_2, int param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 );
      if (*(int*)( lVar1 + 0x48 ) == (int)( param_2 >> 0x20 )) {
         if (*(int*)( lVar1 + 0x14 ) != param_3) {
            *(int*)( lVar1 + 0x14 ) = param_3;
            Dependency::changed_notify(lVar1 + 0x18, 0);
            return;
         }

         return;
      }

      if (*(int*)( lVar1 + 0x48 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_set_shape", "servers/rendering/renderer_rd/environment/fog.cpp", 0x4b, "Parameter \"fog_volume\" is null.", 0, 0);
   return;
}
/* RendererRD::Fog::fog_volume_set_size(RID, Vector3 const&) */void RendererRD::Fog::fog_volume_set_size(Fog *this, ulong param_2, undefined8 *param_3) {
   long lVar1;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      lVar1 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 );
      if (*(int*)( lVar1 + 0x48 ) == (int)( param_2 >> 0x20 )) {
         *(undefined8*)( lVar1 + 8 ) = *param_3;
         *(undefined4*)( lVar1 + 0x10 ) = *(undefined4*)( param_3 + 1 );
         Dependency::changed_notify(lVar1 + 0x18, 0);
         return;
      }

      if (*(int*)( lVar1 + 0x48 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_set_size", "servers/rendering/renderer_rd/environment/fog.cpp", 0x57, "Parameter \"fog_volume\" is null.", 0, 0);
   return;
}
/* RendererRD::Fog::FogMaterialData::update_parameters(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, bool, bool) */void RendererRD::Fog::FogMaterialData::update_parameters(FogMaterialData *this, HashMap *param_1, bool param_2, bool param_3) {
   Version *pVVar1;
   char cVar2;
   char *pcVar3;
   uint *puVar4;
   long lVar5;
   undefined8 *puVar6;
   code *pcVar7;
   ulong uVar8;
   long lVar9;
   int iVar10;
   undefined8 uVar11;
   long lVar12;
   long lVar13;
   lVar5 = singleton;
   this[0xb8] = (FogMaterialData)0x1;
   uVar8 = *(ulong*)( *(long*)( this + 0xa8 ) + 0x78 );
   if (*(long*)( lVar5 + 0x5e0 ) == 0) {
      lVar12 = 0;
      LAB_001006e3:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar12, "p_variant", "variant_defines.size()", "", false, false);
   }
 else {
      lVar12 = *(long*)( *(long*)( lVar5 + 0x5e0 ) + -8 );
      if (lVar12 < 1) goto LAB_001006e3;
      pcVar3 = *(char**)( lVar5 + 0x5f0 );
      if (pcVar3 == (char*)0x0) {
         LAB_00100790:lVar12 = 0;
         LAB_00100793:uVar8 = 0;
         LAB_001007b0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar8, lVar12, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar7 = (code*)invalidInstructionException();
         ( *pcVar7 )();
      }

      lVar12 = *(long*)( pcVar3 + -8 );
      if (lVar12 < 1) goto LAB_00100793;
      if (*pcVar3 == '\0') {
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         uVar11 = 0;
         goto LAB_0010061c;
      }

      if (( uVar8 == 0 ) || ( *(uint*)( lVar5 + 0x69c ) <= (uint)uVar8 )) {
         LAB_00100760:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         uVar11 = 0;
         goto LAB_0010061c;
      }

      lVar9 = ( ( uVar8 & 0xffffffff ) % ( ulong ) * (uint*)( lVar5 + 0x698 ) ) * 0xa0 + *(long*)( *(long*)( lVar5 + 0x688 ) + ( ( uVar8 & 0xffffffff ) / ( ulong ) * (uint*)( lVar5 + 0x698 ) ) * 8 );
      if (*(int*)( lVar9 + 0x98 ) != (int)( uVar8 >> 0x20 )) {
         if (*(int*)( lVar9 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00100760;
      }

      pVVar1 = (Version*)( lVar5 + 0x5c8 );
      iVar10 = (int)lVar9;
      if (*(char*)( lVar9 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version(pVVar1);
         lVar12 = *(long*)( lVar5 + 0x640 );
         if (lVar12 != 0) {
            lVar13 = 0;
            do {
               if (*(long*)( lVar12 + -8 ) <= lVar13) break;
               if (*(char*)( lVar12 + lVar13 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar1, iVar10);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar1, iVar10);
               }

               lVar12 = *(long*)( lVar5 + 0x640 );
               lVar13 = lVar13 + 1;
            }
 while ( lVar12 != 0 );
         }

      }

      puVar4 = *(uint**)( lVar5 + 0x600 );
      if (puVar4 == (uint*)0x0) goto LAB_00100790;
      lVar12 = *(long*)( puVar4 + -2 );
      if (lVar12 < 1) goto LAB_00100793;
      uVar8 = ( ulong ) * puVar4;
      lVar5 = *(long*)( lVar9 + 0x68 );
      if (lVar5 == 0) {
         lVar12 = 0;
         goto LAB_001007b0;
      }

      lVar12 = *(long*)( lVar5 + -8 );
      if (lVar12 <= (long)uVar8) goto LAB_001007b0;
      if (*(long*)( lVar5 + uVar8 * 8 ) == 0) {
         cVar2 = *(char*)( lVar9 + 0x90 );
      }
 else {
         ShaderRD::_compile_version_end(pVVar1, iVar10);
         cVar2 = *(char*)( lVar9 + 0x90 );
      }

      if (cVar2 != '\0') {
         puVar6 = *(undefined8**)( lVar9 + 0x88 );
         if (puVar6 == (undefined8*)0x0) goto LAB_00100790;
         lVar12 = puVar6[-1];
         if (0 < lVar12) {
            uVar11 = *puVar6;
            goto LAB_0010061c;
         }

         goto LAB_00100793;
      }

   }

   uVar11 = 0;
   LAB_0010061c:lVar5 = *(long*)( this + 0xa8 );
   RendererRD::MaterialStorage::MaterialData::update_parameters_uniform_set(this, param_1, param_2, param_3, lVar5 + 0x10, *(undefined8*)( lVar5 + 0xa0 ), lVar5 + 0x88, lVar5 + 0x40, *(undefined4*)( lVar5 + 0xa8 ), this + 0xb0, uVar11, 2, 1, 1);
   return;
}
/* RendererRD::Fog::FogMaterialData::~FogMaterialData() */void RendererRD::Fog::FogMaterialData::~FogMaterialData(FogMaterialData *this) {
   *(undefined***)this = &PTR_set_render_priority_001139d8;
   RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set(this, *(undefined8*)( this + 0xb0 ));
   RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData*)this);
   return;
}
/* RendererRD::Fog::FogShaderData::get_native_source_code() const */void RendererRD::Fog::FogShaderData::get_native_source_code(void) {
   long lVar1;
   long in_RSI;
   undefined8 in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ShaderRD::version_get_native_source_code(in_RDI, singleton + 0x5c8, *(undefined8*)( in_RSI + 0x78 ));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::fog_volume_free(RID) */ulong RendererRD::Fog::fog_volume_free(Fog *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   int iVar1;
   uint uVar2;
   uint uVar3;
   ulong uVar4;
   ulong extraout_RAX;
   int iVar5;
   long lVar6;
   MaterialData *this_00;
   long lVar7;
   uVar3 = (uint)param_2;
   iVar5 = (int)( param_2 >> 0x20 );
   if (param_2 != 0) {
      if (uVar3 < *(uint*)( this + 0x24 )) {
         lVar6 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 );
         if (*(int*)( lVar6 + 0x48 ) == iVar5) goto LAB_00100959;
         if (*(int*)( lVar6 + 0x48 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            lVar6 = 0;
            goto LAB_00100959;
         }

      }

   }

   lVar6 = 0;
   LAB_00100959:__mutex = (pthread_mutex_t*)( this + 0x38 );
   Dependency::deleted_notify((RID*)( lVar6 + 0x18 ));
   uVar2 = pthread_mutex_lock(__mutex);
   if (uVar2 == 0) {
      if (uVar3 < *(uint*)( this + 0x24 )) {
         uVar4 = ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 );
         lVar7 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50;
         lVar6 = *(long*)( *(long*)( this + 0x10 ) + uVar4 * 8 ) + lVar7;
         iVar1 = *(int*)( lVar6 + 0x48 );
         if (iVar1 < 0) {
            pthread_mutex_unlock(__mutex);
            uVar4 = 0;
            _err_print_error(&_LC30, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0);
         }
 else if (iVar5 == iVar1) {
            Dependency::~Dependency((Dependency*)( lVar6 + 0x18 ));
            lVar6 = *(long*)( this + 0x18 );
            *(undefined4*)( *(long*)( *(long*)( this + 0x10 ) + uVar4 * 8 ) + 0x48 + lVar7 ) = 0xffffffff;
            uVar2 = *(int*)( this + 0x28 ) - 1;
            *(uint*)( this + 0x28 ) = uVar2;
            *(uint*)( *(long*)( lVar6 + ( (ulong)uVar2 / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 ) + ( (ulong)uVar2 % ( ulong ) * (uint*)( this + 0x20 ) ) * 4 ) = uVar3;
            uVar3 = pthread_mutex_unlock(__mutex);
            uVar4 = (ulong)uVar3;
         }
 else {
            pthread_mutex_unlock(__mutex);
            uVar4 = _err_print_error(&_LC30, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
         }

      }
 else {
         pthread_mutex_unlock(__mutex);
         uVar4 = _err_print_error(&_LC30, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      }

      return uVar4;
   }

   this_00 = (MaterialData*)(ulong)uVar2;
   std::__throw_system_error(uVar2);
   *(undefined***)this_00 = &PTR_set_render_priority_001139d8;
   RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set();
   RendererRD::MaterialStorage::MaterialData::~MaterialData(this_00);
   operator_delete(this_00, 0xc0);
   return extraout_RAX;
}
/* RendererRD::Fog::FogMaterialData::~FogMaterialData() */void RendererRD::Fog::FogMaterialData::~FogMaterialData(FogMaterialData *this) {
   *(undefined***)this = &PTR_set_render_priority_001139d8;
   RendererRD::MaterialStorage::MaterialData::free_parameters_uniform_set(this, *(undefined8*)( this + 0xb0 ));
   RendererRD::MaterialStorage::MaterialData::~MaterialData((MaterialData*)this);
   operator_delete(this, 0xc0);
   return;
}
/* RendererRD::Fog::_create_fog_shader_funcs() */void RendererRD::Fog::_create_fog_shader_funcs(void) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)operator_new(0xc0, "");
   uVar1 = _LC33;
   puVar2[1] = 0;
   puVar2[7] = uVar1;
   puVar2[0xd] = uVar1;
   *puVar2 = &PTR_set_path_hint_00113a10;
   *(undefined1*)( puVar2 + 0xe ) = 0;
   puVar2[0x12] = 0;
   puVar2[0x14] = 0;
   *(undefined4*)( puVar2 + 0x15 ) = 0;
   puVar2[0x16] = 0;
   *(undefined1*)( puVar2 + 0x17 ) = 0;
   *(undefined1(*) [16])( puVar2 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 9 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 0xb ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 0xf ) = (undefined1[16])0x0;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::Fog::Fog() */void RendererRD::Fog::Fog(Fog *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   *(undefined***)this = &PTR__Fog_00113978;
   *(undefined***)( this + 8 ) = &PTR__RID_Alloc_00113938;
   uVar1 = _UNK_0011d4b8;
   uVar2 = __LC40;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined4*)( this + 0x48 ) = 1;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x20 ) = uVar2;
   *(undefined8*)( this + 0x28 ) = uVar1;
   uVar2 = Memory::alloc_static(0x908, false);
   *(undefined8*)( this + 0x10 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x2c ) << 3, false);
   *(undefined8*)( this + 0x18 ) = uVar2;
   *(undefined1(*) [16])( this + 0xa0 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x60 ) = &PTR__RID_Alloc_00113958;
   uVar1 = _UNK_0011d4c8;
   uVar2 = __LC41;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 104 ) ) = 0;
   }

   *(undefined4*)( this + 0xa0 ) = 1;
   *(undefined4*)( this + 0xb8 ) = 3;
   *(undefined1(*) [16])( this + 0x90 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x78 ) = uVar2;
   *(undefined8*)( this + 0x80 ) = uVar1;
   ShaderCompiler::ShaderCompiler((ShaderCompiler*)( this + 0xc0 ));
   ShaderRD::ShaderRD((ShaderRD*)( this + 0x5c8 ));
   *(undefined***)( this + 0x5c8 ) = &PTR__VolumetricFogShaderRD_001138f8;
   ShaderRD::setup((char*)( this + 0x5c8 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\nlayout(local_size_x = 4, local_size_y = 4, local_size_z = 4) in;\n\n#define DENSITY_SCALE 1024.0\n\n#define CLUSTER_COUNTER_SHIFT 20\n#define CLUSTER_POINTER_MASK ((1 << CLUSTER_COUNTER_SHIFT) - 1)\n#define CLUSTER_COUNTER_MASK 0xfff\n#define LIGHT_BAKE_DISABLED 0\n#define LIGHT_BAKE_STATIC 1\n#define LIGHT_BAKE_DYNAMIC 2\n\nstruct LightData { \n\thighp vec3 position;\n\thighp float inv_radius;\n\n\tmediump vec3 direction;\n\thighp float size;\n\n\tmediump vec3 color;\n\tmediump float attenuation;\n\n\tmediump float cone_attenuation;\n\tmediump float cone_angle;\n\tmediump float specular_amount;\n\tmediump float shadow_opacity;\n\n\thighp vec4 atlas_rect; \n\thighp mat4 shadow_matrix;\n\thighp float shadow_bias;\n\thighp float shadow_normal_bias;\n\thighp float transmittance_bias;\n\thighp float soft_shadow_size; \n\thighp float soft_shadow_scale; \n\tuint mask;\n\tmediump float volumetric_fog_energy;\n\tuint bake_mode;\n\thighp vec4 projector_rect; \n};\n\n#define REFLECTION_AMBIENT_DISABLED 0\n#define REFLECTION_AMBIENT_ENVIRONMENT 1\n#define REFLECTION_AMBIENT_COLOR 2\n\nstruct ReflectionData {\n\thighp vec3 box_extents;\n\tmediump float index;\n\thighp vec3 box_offset;\n\tuint mask;\n\tmediump vec3 ambient; \n\tmediump float intensity;\n\tmediump float blend_distance;\n\tbool exterior;\n\tbool box_project;\n\tuint ambient_mode;\n\tfloat exposure_normalization;\n\tfloat pad0;\n\tfloat pad1;\n\tfloat pad2;\n\t\n\thighp mat4 local_matrix; \n\t\n};\n\nstruct DirectionalLightData {\n\tmediump vec3 direction;\n\thighp float energy; \n\tmediump vec3 color;\n\tmediump float size;\n\tmediump float specular;\n\tuint mask;\n\thighp float softshadow_angle;\n\thighp float soft_shadow_scale;\n\tbool blend_splits;\n\tmediump float shadow_opacity;\n\thighp float fade_from;\n\thighp float fade_to;\n\tuvec2 pad;\n\tuint bake_mode;\n\tmediump float volumetric_fog_energy;\n\thighp vec4 shadow_bias;\n\thighp vec4 shadow_normal_bias;\n\thighp vec4 shadow_transmittance_bias;\n\thighp vec4 shadow_z_range;\n\thighp vec4 shadow_range_begin;\n\thighp vec4 shadow_split_offsets;\n\thighp mat4 shadow_matrix1;\n\thighp mat4 shadow_matrix2;\n\thighp mat4...", /* TRUNCATED STRING LITERAL */);
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 1856 ) ) = (undefined1[16])0;
   }

   ShaderRD::ShaderRD((ShaderRD*)( this + 0x770 ));
   *(undefined***)( this + 0x770 ) = &PTR__VolumetricFogProcessShaderRD_00113918;
   ShaderRD::setup((char*)( this + 0x770 ), (char*)0x0, (char*)0x0, "\n#version 450\n\n#VERSION_DEFINES\n\n/* Do not use subgroups here, seems there is not much advantage and causes glitches\n#if defined(has_GL_KHR_shader_subgroup_ballot) && defined(has_GL_KHR_shader_subgroup_arithmetic)\n#extension GL_KHR_shader_subgroup_ballot: enable\n#extension GL_KHR_shader_subgroup_arithmetic: enable\n\n#define USE_SUBGROUPS\n#endif\n*/\n\n#ifdef MODE_DENSITY\nlayout(local_size_x = 4, local_size_y = 4, local_size_z = 4) in;\n#else\nlayout(local_size_x = 8, local_size_y = 8, local_size_z = 1) in;\n#endif\n\n#define CLUSTER_COUNTER_SHIFT 20\n#define CLUSTER_POINTER_MASK ((1 << CLUSTER_COUNTER_SHIFT) - 1)\n#define CLUSTER_COUNTER_MASK 0xfff\n#define LIGHT_BAKE_DISABLED 0\n#define LIGHT_BAKE_STATIC 1\n#define LIGHT_BAKE_DYNAMIC 2\n\nstruct LightData { \n\thighp vec3 position;\n\thighp float inv_radius;\n\n\tmediump vec3 direction;\n\thighp float size;\n\n\tmediump vec3 color;\n\tmediump float attenuation;\n\n\tmediump float cone_attenuation;\n\tmediump float cone_angle;\n\tmediump float specular_amount;\n\tmediump float shadow_opacity;\n\n\thighp vec4 atlas_rect; \n\thighp mat4 shadow_matrix;\n\thighp float shadow_bias;\n\thighp float shadow_normal_bias;\n\thighp float transmittance_bias;\n\thighp float soft_shadow_size; \n\thighp float soft_shadow_scale; \n\tuint mask;\n\tmediump float volumetric_fog_energy;\n\tuint bake_mode;\n\thighp vec4 projector_rect; \n};\n\n#define REFLECTION_AMBIENT_DISABLED 0\n#define REFLECTION_AMBIENT_ENVIRONMENT 1\n#define REFLECTION_AMBIENT_COLOR 2\n\nstruct ReflectionData {\n\thighp vec3 box_extents;\n\tmediump float index;\n\thighp vec3 box_offset;\n\tuint mask;\n\tmediump vec3 ambient; \n\tmediump float intensity;\n\tmediump float blend_distance;\n\tbool exterior;\n\tbool box_project;\n\tuint ambient_mode;\n\tfloat exposure_normalization;\n\tfloat pad0;\n\tfloat pad1;\n\tfloat pad2;\n\t\n\thighp mat4 local_matrix; \n\t\n};\n\nstruct DirectionalLightData {\n\tmediump vec3 direction;\n\thighp float energy; \n\tmediump vec3 color;\n\tmediump float size;\n\tmediump float specular;\n\tuint mask;\n\thighp float softshadow_angle;\n\thighp float soft_shadow_scale;\n\tbool blend_splits;\n\tmediump float s...", /* TRUNCATED STRING LITERAL */);
   singleton = this;
   *(undefined8*)( this + 0x8e8 ) = 0;
   *(undefined8*)( this + 0x910 ) = 0;
   *(undefined1(*) [16])( this + 0x8f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x900 ) = (undefined1[16])0x0;
   return;
}
/* RendererRD::Fog::fog_volume_get_dependency(RID) const */long RendererRD::Fog::fog_volume_get_dependency(Fog *this, ulong param_2) {
   int iVar1;
   long lVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 );
      iVar1 = *(int*)( lVar2 + 0x48 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return lVar2 + 0x18;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_get_dependency", "servers/rendering/renderer_rd/environment/fog.cpp", 0x44, "Parameter \"fog_volume\" is null.", 0, 0);
   return 0;
}
/* RendererRD::Fog::fog_volume_get_material(RID) const */undefined8 RendererRD::Fog::fog_volume_get_material(Fog *this, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      puVar2 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 ) );
      iVar1 = *(int*)( puVar2 + 9 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         return *puVar2;
      }

      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_get_material", "servers/rendering/renderer_rd/environment/fog.cpp", 0x65, "Parameter \"fog_volume\" is null.", 0, 0);
   return 0;
}
/* RendererRD::Fog::fog_volume_get_size(RID) const */undefined1  [16] __thiscallRendererRD::Fog::fog_volume_get_size(Fog *this, ulong param_2) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined1 auVar3[16];
   undefined8 local_1c;
   undefined4 local_14;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x24 ) )) {
      lVar2 = ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x20 ) ) * 0x50 + *(long*)( *(long*)( this + 0x10 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x20 ) ) * 8 );
      if (*(int*)( lVar2 + 0x48 ) == (int)( param_2 >> 0x20 )) {
         local_1c = *(undefined8*)( lVar2 + 8 );
         local_14 = *(undefined4*)( lVar2 + 0x10 );
         goto LAB_001011ab;
      }

      if (*(int*)( lVar2 + 0x48 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("fog_volume_get_size", "servers/rendering/renderer_rd/environment/fog.cpp", 0x88, "Parameter \"fog_volume\" is null.", 0, 0);
   local_14 = 0;
   local_1c = 0;
   LAB_001011ab:auVar3._8_4_ = local_14;
   auVar3._0_8_ = local_1c;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar3._12_4_ = 0;
      return auVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::_create_fog_shader_func() */void RendererRD::Fog::_create_fog_shader_func(void) {
   undefined8 uVar1;
   undefined8 *puVar2;
   puVar2 = (undefined8*)operator_new(0xc0, "");
   uVar1 = _LC33;
   puVar2[1] = 0;
   puVar2[7] = uVar1;
   puVar2[0xd] = uVar1;
   *puVar2 = &PTR_set_path_hint_00113a10;
   *(undefined1*)( puVar2 + 0xe ) = 0;
   puVar2[0x12] = 0;
   puVar2[0x14] = 0;
   *(undefined4*)( puVar2 + 0x15 ) = 0;
   puVar2[0x16] = 0;
   *(undefined1*)( puVar2 + 0x17 ) = 0;
   *(undefined1(*) [16])( puVar2 + 3 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 5 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 9 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 0xb ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar2 + 0xf ) = (undefined1[16])0x0;
   return;
}
/* RendererRD::Fog::_create_fog_material_func(RendererRD::Fog::FogShaderData*) */void RendererRD::Fog::_create_fog_material_func(Fog *this, FogShaderData *param_1) {
   undefined8 *puVar1;
   puVar1 = (undefined8*)operator_new(0xc0, "");
   puVar1[2] = 0;
   puVar1[3] = 0;
   puVar1[6] = 0;
   puVar1[0xc] = 2;
   puVar1[0xe] = 0;
   puVar1[0x10] = 0;
   puVar1[0x14] = 0;
   *puVar1 = &PTR_set_render_priority_001139d8;
   puVar1[0x16] = 0;
   puVar1[0x15] = param_1;
   *(undefined1(*) [16])( puVar1 + 4 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar1 + 0x11 ) = (undefined1[16])0x0;
   return;
}
/* RendererRD::Fog::_create_fog_material_funcs(RendererRD::MaterialStorage::ShaderData*) */void RendererRD::Fog::_create_fog_material_funcs(ShaderData *param_1) {
   _create_fog_material_func(singleton, (FogShaderData*)param_1);
   return;
}
/* RendererRD::Fog::fog_instance_free(RID) */void RendererRD::Fog::fog_instance_free(Fog *this, ulong param_2) {
   long lVar1;
   int iVar2;
   uint uVar3;
   if (*(uint*)( this + 0x7c ) <= (uint)param_2) {
      _err_print_error(&_LC30, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
      return;
   }

   lVar1 = *(long*)( *(long*)( this + 0x68 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x78 ) ) * 8 ) + ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x78 ) ) * 0x48;
   iVar2 = *(int*)( lVar1 + 0x40 );
   if (-1 < iVar2) {
      if ((int)( param_2 >> 0x20 ) == iVar2) {
         *(undefined4*)( lVar1 + 0x40 ) = 0xffffffff;
         uVar3 = *(int*)( this + 0x80 ) - 1;
         *(uint*)( this + 0x80 ) = uVar3;
         *(uint*)( *(long*)( *(long*)( this + 0x70 ) + ( (ulong)uVar3 / ( ulong ) * (uint*)( this + 0x78 ) ) * 8 ) + ( (ulong)uVar3 % ( ulong ) * (uint*)( this + 0x78 ) ) * 4 ) = (uint)param_2;
         return;
      }

      _err_print_error(&_LC30, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      return;
   }

   _err_print_error(&_LC30, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
   return;
}
/* RendererRD::Fog::free_fog_shader() */void RendererRD::Fog::free_fog_shader(Fog *this) {
   long *plVar1;
   undefined8 uVar2;
   plVar1 = (long*)RendererRD::MaterialStorage::get_singleton();
   if (*(long*)( this + 0x8e8 ) != 0) {
      ShaderRD::version_free(this + 0x770, *(undefined8*)( this + 0x8e8 ));
   }

   if (*(long*)( this + 0x740 ) != 0) {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0x740 ));
   }

   if (*(long*)( this + 0x768 ) != 0) {
      uVar2 = RenderingDevice::get_singleton();
      RenderingDevice::free(uVar2, *(undefined8*)( this + 0x768 ));
   }

   if (*(long*)( this + 0x748 ) != 0) {
      ( **(code**)( *plVar1 + 0x80 ) )(plVar1, *(undefined8*)( this + 0x748 ));
   }

   if (*(long*)( this + 0x750 ) != 0) {
      /* WARNING: Could not recover jumptable at 0x0010150e. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( **(code**)( *plVar1 + 0xd8 ) )(plVar1, *(undefined8*)( this + 0x750 ));
      return;
   }

   return;
}
/* RendererRD::Fog::VolumetricFog::sync_gi_dependent_sets_validity(bool) */undefined8 RendererRD::Fog::VolumetricFog::sync_gi_dependent_sets_validity(VolumetricFog *this, bool param_1) {
   undefined8 uVar1;
   if (*(long*)( this + 0x1d0 ) == 0) {
      return 0;
   }

   uVar1 = RenderingDevice::get_singleton();
   uVar1 = RenderingDevice::uniform_set_is_valid(uVar1, *(undefined8*)( this + 0x1d0 ));
   if ((char)uVar1 != '\0') {
      if (!param_1) {
         return uVar1;
      }

      for (int i = 0; i < 3; i++) {
         uVar1 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar1, *(undefined8*)( this + ( 8*i + 464 ) ));
      }

   }

   *(undefined8*)( this + 0x1e0 ) = 0;
   *(undefined1(*) [16])( this + 0x1d0 ) = (undefined1[16])0x0;
   return 0;
}
/* RendererRD::Fog::VolumetricFog::~VolumetricFog() */void RendererRD::Fog::VolumetricFog::~VolumetricFog(VolumetricFog *this) {
   long lVar1;
   char cVar2;
   undefined8 uVar3;
   *(undefined***)this = &PTR__initialize_classv_00113a80;
   uVar3 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar3, *(undefined8*)( this + 0x198 ));
   uVar3 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar3, *(undefined8*)( this + 400 ));
   uVar3 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1a0 ));
   uVar3 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1a8 ));
   uVar3 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1b0 ));
   uVar3 = RenderingDevice::get_singleton();
   RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1b8 ));
   if (*(long*)( this + 0x1c0 ) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar3, *(undefined8*)( this + 0x1c0 ));
      if (cVar2 != '\0') {
         uVar3 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1c0 ));
         lVar1 = *(long*)( this + 0x1c8 );
         goto joined_r0x00101734;
      }

   }

   lVar1 = *(long*)( this + 0x1c8 );
   joined_r0x00101734:if (lVar1 != 0) {
      uVar3 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar3, *(undefined8*)( this + 0x1c8 ));
      if (cVar2 != '\0') {
         uVar3 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1c8 ));
      }

   }

   sync_gi_dependent_sets_validity(this, true);
   if (*(long*)( this + 0x1e8 ) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar3, *(undefined8*)( this + 0x1e8 ));
      if (cVar2 != '\0') {
         uVar3 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1e8 ));
      }

   }

   if (*(long*)( this + 0x1f0 ) != 0) {
      uVar3 = RenderingDevice::get_singleton();
      cVar2 = RenderingDevice::uniform_set_is_valid(uVar3, *(undefined8*)( this + 0x1f0 ));
      if (cVar2 != '\0') {
         uVar3 = RenderingDevice::get_singleton();
         RenderingDevice::free(uVar3, *(undefined8*)( this + 0x1f0 ));
      }

   }

   *(undefined***)this = &PTR__initialize_classv_00113798;
   Object::~Object((Object*)this);
   return;
}
/* RendererRD::Fog::VolumetricFog::~VolumetricFog() */void RendererRD::Fog::VolumetricFog::~VolumetricFog(VolumetricFog *this) {
   ~VolumetricFog(this)
   ;;
   operator_delete(this, 0x200);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::Fog::_point_get_position_in_froxel_volume(Vector3 const&, float, Vector2 const&,
   Vector2 const&, float, Vector3 const&, Transform3D const&) */void RendererRD::Fog::_point_get_position_in_froxel_volume(Vector3 *param_1, float param_2, Vector2 *param_3, Vector2 *param_4, float param_5, Vector3 *param_6, Transform3D *param_7) {
   float fVar1;
   float fVar2;
   long in_FS_OFFSET;
   float fVar3;
   float fVar4;
   undefined4 extraout_XMM1_Da;
   undefined1 auVar5[16];
   double dVar6;
   double dVar8;
   undefined1 auVar7[16];
   undefined8 local_78;
   float local_70;
   undefined1 local_68[8];
   float local_60;
   float local_5c;
   float local_58;
   float local_54;
   float local_50;
   float local_4c;
   float local_48;
   float local_44;
   float local_40;
   float local_3c;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Transform3D::affine_inverse();
   fVar4 = *(float*)param_3;
   fVar1 = *(float*)( param_3 + 4 );
   fVar2 = *(float*)( param_3 + 8 );
   local_3c = local_50 * fVar4 + local_4c * fVar1 + local_48 * fVar2 + local_3c;
   fVar3 = _LC48;
   if ((double)local_3c < _LC49) {
      fVar3 = (float)( (uint)local_3c ^ _LC10 );
   }

   fVar3 = fVar3 / param_2;
   auVar5._0_8_ = (double)( fVar4 * (float)local_68._0_4_ + fVar1 * (float)local_68._4_4_ + fVar2 * local_60 + local_44 );
   auVar5._8_8_ = (double)(float)( ( uint )(local_5c * fVar4 + local_58 * fVar1 + local_54 * fVar2 + local_40) ^ _LC10 );
   dVar6 = (double)( (float)*(undefined8*)param_6 * fVar3 ) + ( _LC50 - (double)fVar3 ) * (double)(float)*(undefined8*)param_4;
   dVar8 = (double)( (float)( ( ulong ) * (undefined8*)param_6 >> 0x20 ) * fVar3 ) + ( _LC50 - (double)fVar3 ) * (double)(float)( ( ulong ) * (undefined8*)param_4 >> 0x20 );
   auVar7._0_8_ = dVar6 + dVar6;
   auVar7._8_8_ = dVar8 + dVar8;
   auVar5 = divpd(auVar5, auVar7);
   dVar6 = auVar5._0_8_ + _LC52;
   dVar8 = auVar5._8_8_ + _LC52;
   fVar4 = powf(fVar3, _LC53 / param_5);
   local_68 = (undefined1[8])0x0;
   local_60 = 0.0;
   local_70 = fVar4 * *(float*)( param_7 + 8 ) - _LC11;
   local_78 = CONCAT44((float)( ( ulong ) * (undefined8*)param_7 >> 0x20 ) * (float)dVar8 + _UNK_0011d35c, (float)*(undefined8*)param_7 * (float)dVar6 + _LC14);
   local_78 = Vector3::clamp((Vector3*)&local_78, (Vector3*)local_68);
   local_70 = (float)extraout_XMM1_Da;
   _local_68 = Vector3::operator_cast_to_Vector3i((Vector3*)&local_78);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::Fog::~Fog() */void RendererRD::Fog::~Fog(Fog *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   char *pcVar4;
   ulong uVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   void *pvVar9;
   uint uVar10;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__Fog_00113978;
   *(undefined***)( this + 0x770 ) = &PTR__VolumetricFogProcessShaderRD_00113918;
   singleton = 0;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x770 ));
   *(undefined***)( this + 0x5c8 ) = &PTR__VolumetricFogShaderRD_001138f8;
   ShaderRD::~ShaderRD((ShaderRD*)( this + 0x5c8 ));
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 1464 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -8*i + 1464 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar7 = *(long*)( this + ( -8*i + 1464 ) );
            *(undefined8*)( this + ( -8*i + 1464 ) ) = 0;
            Memory::free_static((void*)( lVar7 + -16 ), false);
         }

      }

   }

   pvVar9 = *(void**)( this + 0x570 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x594 ) != 0) {
         uVar10 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x590 ) * 4 );
         if (uVar10 == 0) {
            *(undefined4*)( this + 0x594 ) = 0;
            *(undefined1(*) [16])( this + 0x580 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x578 ) + lVar7 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x578 ) + lVar7 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x570 );
                  *(undefined8*)( (long)pvVar9 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar10 << 2 != lVar7 );
            *(undefined4*)( this + 0x594 ) = 0;
            *(undefined1(*) [16])( this + 0x580 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00101bcb;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x578 ), false);
   }

   LAB_00101bcb:pvVar9 = *(void**)( this + 0x540 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x564 ) != 0) {
         uVar10 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x560 ) * 4 );
         if (uVar10 == 0) {
            *(undefined4*)( this + 0x564 ) = 0;
            *(undefined1(*) [16])( this + 0x550 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x548 ) + lVar7 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x548 ) + lVar7 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x540 );
                  *(undefined8*)( (long)pvVar9 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar10 << 2 );
            *(undefined4*)( this + 0x564 ) = 0;
            *(undefined1(*) [16])( this + 0x550 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00101cbb;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x548 ), false);
   }

   LAB_00101cbb:pvVar9 = *(void**)( this + 0x510 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x534 ) != 0) {
         uVar10 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x530 ) * 4 );
         if (uVar10 == 0) {
            *(undefined4*)( this + 0x534 ) = 0;
            *(undefined1(*) [16])( this + 0x520 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x518 ) + lVar7 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x518 ) + lVar7 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x510 );
                  *(undefined8*)( (long)pvVar9 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar10 << 2 );
            *(undefined4*)( this + 0x534 ) = 0;
            *(undefined1(*) [16])( this + 0x520 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00101da9;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x518 ), false);
   }

   LAB_00101da9:pvVar9 = *(void**)( this + 0x4e0 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x504 ) != 0) {
         uVar10 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x500 ) * 4 );
         if (uVar10 == 0) {
            *(undefined4*)( this + 0x504 ) = 0;
            *(undefined1(*) [16])( this + 0x4f0 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4e8 ) + lVar7 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x4e8 ) + lVar7 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar9 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar9 + 0x18 );
                        *(undefined8*)( (long)pvVar9 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x4e0 );
                  *(undefined8*)( (long)pvVar9 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar10 << 2 != lVar7 );
            *(undefined4*)( this + 0x504 ) = 0;
            *(undefined1(*) [16])( this + 0x4f0 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00101e99;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x4e8 ), false);
   }

   LAB_00101e99:pvVar9 = *(void**)( this + 0x4b0 );
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x4d4 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4d0 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x4c8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4d0 ) * 4 ) * 4),*(int*)( this + 0x4d4 ) != 0 ) ) )) {
         lVar7 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar7 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)( this + 0x4b0 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x4d4 ) );
         *(undefined4*)( this + 0x4d4 ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_00101f36;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x4c0 ), false);
      Memory::free_static(*(void**)( this + 0x4b8 ), false);
      Memory::free_static(*(void**)( this + 0x4c8 ), false);
   }

   LAB_00101f36:pvVar9 = *(void**)( this + 0x488 );
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x4ac ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4a8 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x4a0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4a8 ) * 4 ) * 4),*(int*)( this + 0x4ac ) != 0 ) ) )) {
         lVar7 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar7 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)( this + 0x488 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x4ac ) );
         *(undefined4*)( this + 0x4ac ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_00101fd6;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x498 ), false);
      Memory::free_static(*(void**)( this + 0x490 ), false);
      Memory::free_static(*(void**)( this + 0x4a0 ), false);
   }

   LAB_00101fd6:pvVar9 = *(void**)( this + 0x460 );
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x484 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x480 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x478 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x480 ) * 4 ) * 4),*(int*)( this + 0x484 ) != 0 ) ) )) {
         lVar7 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar7 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)( this + 0x460 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x484 ) );
         *(undefined4*)( this + 0x484 ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_0010206e;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x470 ), false);
      Memory::free_static(*(void**)( this + 0x468 ), false);
      Memory::free_static(*(void**)( this + 0x478 ), false);
   }

   LAB_0010206e:pvVar9 = *(void**)( this + 0x438 );
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x45c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x458 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x450 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x458 ) * 4 ) * 4),*(int*)( this + 0x45c ) != 0 ) ) )) {
         lVar7 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar7 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)( this + 0x438 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x45c ) );
         *(undefined4*)( this + 0x45c ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_0010210e;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x448 ), false);
      Memory::free_static(*(void**)( this + 0x440 ), false);
      Memory::free_static(*(void**)( this + 0x450 ), false);
   }

   LAB_0010210e:pvVar9 = *(void**)( this + 0x410 );
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x434 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x428 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 ) * 4),*(int*)( this + 0x434 ) != 0 ) ) )) {
         lVar7 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar7 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)( this + 0x410 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x434 ) );
         *(undefined4*)( this + 0x434 ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_001021ae;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x420 ), false);
      Memory::free_static(*(void**)( this + 0x418 ), false);
      Memory::free_static(*(void**)( this + 0x428 ), false);
   }

   LAB_001021ae:pvVar9 = *(void**)( this + 1000 );
   if (pvVar9 != (void*)0x0) {
      if (( *(int*)( this + 0x40c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x408 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x400 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x408 ) * 4 ) * 4),*(int*)( this + 0x40c ) != 0 ) ) )) {
         lVar7 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + lVar7 * 8 ) != 0 )) {
               StringName::unref();
               pvVar9 = *(void**)( this + 1000 );
            }

            lVar7 = lVar7 + 1;
         }
 while ( (uint)lVar7 < *(uint*)( this + 0x40c ) );
         *(undefined4*)( this + 0x40c ) = 0;
         if (pvVar9 == (void*)0x0) goto LAB_0010224e;
      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x3f8 ), false);
      Memory::free_static(*(void**)( this + 0x3f0 ), false);
      Memory::free_static(*(void**)( this + 0x400 ), false);
   }

   LAB_0010224e:if (( StringName::configured != '\0' ) && ( ( ( *(long*)( this + 0x3e0 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)( this + 0x3d8 ) != 0 ) ) )) {
      StringName::unref();
   }

   ShaderLanguage::~ShaderLanguage((ShaderLanguage*)( this + 0xc0 ));
   uVar10 = *(uint*)( this + 0x80 );
   *(undefined***)( this + 0x60 ) = &PTR__RID_Alloc_00113958;
   if (uVar10 != 0) {
      local_50 = 0;
      local_40 = 0x3b;
      local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
      String::parse_latin1((StrRange*)&local_50);
      vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar10);
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

   }

   uVar10 = *(uint*)( this + 0x7c );
   uVar2 = *(uint*)( this + 0x78 );
   lVar7 = 0;
   if (uVar2 <= uVar10) {
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x68 ) + lVar7 * 8 ), false);
         lVar3 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x70 ) + lVar3 ), false);
      }
 while ( (uint)lVar7 < uVar10 / uVar2 );
   }

   if (*(void**)( this + 0x68 ) != (void*)0x0) {
      Memory::free_static(*(void**)( this + 0x68 ), false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   *(undefined***)( this + 8 ) = &PTR__RID_Alloc_00113938;
   uVar10 = *(uint*)( this + 0x28 );
   if (uVar10 == 0) {
      uVar5 = ( ulong ) * (uint*)( this + 0x24 );
      uVar10 = *(uint*)( this + 0x20 );
      puVar6 = *(undefined8**)( this + 0x10 );
      LAB_001026eb:if ((uint)uVar5 < uVar10) goto LAB_0010272b;
      lVar7 = 0;
      while (true) {
         Memory::free_static((void*)puVar6[lVar7], false);
         lVar3 = lVar7 * 8;
         lVar7 = lVar7 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x18 ) + lVar3 ), false);
         if (( uint )(uVar5 / uVar10) <= (uint)lVar7) break;
         puVar6 = *(undefined8**)( this + 0x10 );
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

      uVar10 = *(uint*)( this + 0x20 );
      puVar6 = *(undefined8**)( this + 0x10 );
      if (*(int*)( this + 0x24 ) != 0) {
         uVar8 = 0;
         do {
            lVar7 = ( uVar8 % (ulong)uVar10 ) * 0x50 + puVar6[uVar8 / uVar10];
            if (-1 < *(int*)( lVar7 + 0x48 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x18 ));
               uVar10 = *(uint*)( this + 0x20 );
               puVar6 = *(undefined8**)( this + 0x10 );
            }

            uVar5 = ( ulong ) * (uint*)( this + 0x24 );
            uVar8 = uVar8 + 1;
         }
 while ( uVar8 < uVar5 );
         goto LAB_001026eb;
      }

      if (uVar10 != 0) goto LAB_0010272b;
      Memory::free_static((void*)*puVar6, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x18 ), false);
   }

   puVar6 = *(undefined8**)( this + 0x10 );
   LAB_0010272b:if (puVar6 == (undefined8*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      Memory::free_static(puVar6, false);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static(*(void**)( this + 0x18 ), false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::~Fog() */void RendererRD::Fog::~Fog(Fog *this) {
   ~Fog(this)
   ;;
   operator_delete(this, 0x918);
   return;
}
/* RendererRD::Fog::fog_volume_allocate() */void RendererRD::Fog::fog_volume_allocate(Fog *this) {
   RID_Alloc<RendererRD::Fog::FogVolume,true>::allocate_rid((RID_Alloc<RendererRD::Fog::FogVolume,true>*)( this + 8 ));
   return;
}
/* RendererRD::Fog::fog_volume_instance_create(RID) */void RendererRD::Fog::fog_volume_instance_create(Fog *this, undefined8 param_2) {
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
   local_50 = ZEXT416(_LC53);
   local_40 = ZEXT416(_LC53);
   local_58 = param_2;
   RID_Alloc<RendererRD::Fog::FogVolumeInstance,false>::make_rid((RID_Alloc<RendererRD::Fog::FogVolumeInstance,false>*)( this + 0x60 ), (FogVolumeInstance*)&local_58);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* RendererRD::Fog::FogShaderData::set_code(String const&) */void RendererRD::Fog::FogShaderData::set_code(FogShaderData *this, String *param_1) {
   Version *pVVar1;
   uint uVar2;
   char *pcVar3;
   uint *puVar4;
   undefined8 *puVar5;
   code *pcVar6;
   undefined1 auVar7[16];
   char cVar8;
   int iVar9;
   undefined4 *puVar10;
   long *plVar11;
   undefined8 uVar12;
   ulong uVar13;
   long lVar14;
   long *plVar15;
   long lVar16;
   long lVar17;
   undefined8 uVar18;
   void *pvVar19;
   long lVar20;
   long in_FS_OFFSET;
   bool bVar21;
   CowData<char32_t> *local_200;
   long local_1e8;
   long local_1e0;
   HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> local_1d8[8];
   undefined1 local_1d0[16];
   undefined1 local_1c0[16];
   ulong local_1b0;
   undefined1 local_1a0[16];
   undefined1 local_190[16];
   ulong local_180;
   undefined1 local_170[16];
   undefined1 local_160[16];
   ulong local_150;
   HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> local_148[8];
   undefined1 local_140[16];
   undefined1 local_130[16];
   ulong local_120;
   undefined1 local_110[16];
   undefined1 local_100[16];
   ulong local_f0;
   FogShaderData *local_e8;
   undefined1 local_d8[8];
   undefined8 local_d0[2];
   long local_c0[2];
   long local_b0;
   undefined4 local_a8;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   long local_80;
   undefined1 local_78[16];
   undefined1 local_68[16];
   undefined8 local_58;
   undefined4 local_50;
   undefined2 local_4c;
   undefined1 local_4a;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xb0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xb0 ), (CowData*)param_1);
   }

   this[0x70] = (FogShaderData)0x0;
   *(undefined4*)( this + 0xa8 ) = 0;
   if (( *(long*)( this + 0x18 ) != 0 ) && ( *(int*)( this + 0x3c ) != 0 )) {
      lVar17 = 0;
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
      if (uVar2 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x20 ) + lVar17 ) != 0) {
               *(int*)( *(long*)( this + 0x20 ) + lVar17 ) = 0;
               pvVar19 = *(void**)( *(long*)( this + 0x18 ) + lVar17 * 2 );
               if (*(long*)( (long)pvVar19 + 0x88 ) != 0) {
                  LOCK();
                  plVar11 = (long*)( *(long*)( (long)pvVar19 + 0x88 ) + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     lVar20 = *(long*)( (long)pvVar19 + 0x88 );
                     *(undefined8*)( (long)pvVar19 + 0x88 ) = 0;
                     Memory::free_static((void*)( lVar20 + -0x10 ), false);
                  }

               }

               if (*(long*)( (long)pvVar19 + 0x80 ) != 0) {
                  LOCK();
                  plVar11 = (long*)( *(long*)( (long)pvVar19 + 0x80 ) + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     lVar20 = *(long*)( (long)pvVar19 + 0x80 );
                     *(undefined8*)( (long)pvVar19 + 0x80 ) = 0;
                     Memory::free_static((void*)( lVar20 + -0x10 ), false);
                  }

               }

               CowData<String>::_unref((CowData<String>*)( (long)pvVar19 + 0x70 ));
               if (*(long*)( (long)pvVar19 + 0x40 ) != 0) {
                  LOCK();
                  plVar11 = (long*)( *(long*)( (long)pvVar19 + 0x40 ) + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     lVar20 = *(long*)( (long)pvVar19 + 0x40 );
                     *(undefined8*)( (long)pvVar19 + 0x40 ) = 0;
                     Memory::free_static((void*)( lVar20 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar19 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar19, false);
               *(undefined8*)( *(long*)( this + 0x18 ) + lVar17 * 2 ) = 0;
            }

            lVar17 = lVar17 + 4;
         }
 while ( (ulong)uVar2 << 2 != lVar17 );
      }

      *(undefined4*)( this + 0x3c ) = 0;
      *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( this + 0xb0 ) == 0 ) || ( *(uint*)( *(long*)( this + 0xb0 ) + -8 ) < 2 )) goto LAB_00102fa7;
   local_d0[0] = 0;
   local_58 = _LC33;
   local_1b0 = _LC33;
   local_180 = _LC33;
   local_150 = _LC33;
   local_120 = _LC33;
   local_f0 = _LC33;
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   local_1d0 = (undefined1[16])0x0;
   local_1c0 = (undefined1[16])0x0;
   local_1a0 = (undefined1[16])0x0;
   local_190 = (undefined1[16])0x0;
   local_170 = (undefined1[16])0x0;
   local_160 = (undefined1[16])0x0;
   local_140 = (undefined1[16])0x0;
   local_130 = (undefined1[16])0x0;
   local_110 = (undefined1[16])0x0;
   local_100 = (undefined1[16])0x0;
   local_c0[0] = 0;
   local_b0 = 0;
   local_a8 = 0;
   local_50 = 0;
   local_4c = 0;
   local_4a = 0;
   local_e8 = (FogShaderData*)0x0;
   StringName::StringName((StringName*)&local_1e8, "fog", false);
   puVar10 = (undefined4*)HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](local_1d8, (StringName*)&local_1e8);
   bVar21 = StringName::configured != '\0';
   *puVar10 = 2;
   if (( bVar21 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   this[0xb8] = (FogShaderData)0x0;
   StringName::StringName((StringName*)&local_1e8, "TIME", false);
   plVar11 = (long*)HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](local_148, (StringName*)&local_1e8);
   bVar21 = StringName::configured != '\0';
   *plVar11 = (long)( this + 0xb8 );
   if (( bVar21 ) && ( local_1e8 != 0 )) {
      StringName::unref();
   }

   lVar17 = singleton;
   local_e8 = this + 0x10;
   iVar9 = ShaderCompiler::compile(singleton + 0xc0, 4, (CowData<char32_t>*)( this + 0xb0 ), local_1d8, this + 8);
   if (iVar9 == 0) {
      pVVar1 = (Version*)( lVar17 + 0x5c8 );
      if (*(long*)( this + 0x78 ) == 0) {
         uVar12 = ShaderRD::version_create();
         *(undefined8*)( this + 0x78 ) = uVar12;
      }

      plVar11 = &local_80;
      ShaderRD::version_set_compute_code(pVVar1, *(undefined8*)( this + 0x78 ), plVar11, local_a0, local_90 + 8, local_d8);
      cVar8 = ShaderRD::version_is_valid(pVVar1);
      if (cVar8 == '\0') {
         _err_print_error("set_code", "servers/rendering/renderer_rd/environment/fog.cpp", 0x15a, "Condition \"!fog_singleton->volumetric_fog.shader.version_is_valid(version)\" is true.", 0, 0);
         goto LAB_001036af;
      }

      *(undefined4*)( this + 0xa8 ) = local_a8;
      lVar20 = *(long*)( this + 0xa0 );
      if (lVar20 != local_b0) {
         if (lVar20 != 0) {
            LOCK();
            plVar15 = (long*)( lVar20 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               lVar20 = *(long*)( this + 0xa0 );
               *(undefined8*)( this + 0xa0 ) = 0;
               Memory::free_static((void*)( lVar20 + -0x10 ), false);
            }
 else {
               *(undefined8*)( this + 0xa0 ) = 0;
            }

         }

         if (local_b0 != 0) {
            plVar15 = (long*)( local_b0 + -0x10 );
            do {
               lVar20 = *plVar15;
               if (lVar20 == 0) goto LAB_00103269;
               LOCK();
               lVar16 = *plVar15;
               bVar21 = lVar20 == lVar16;
               if (bVar21) {
                  *plVar15 = lVar20 + 1;
                  lVar16 = lVar20;
               }

               UNLOCK();
            }
 while ( !bVar21 );
            if (lVar16 != -1) {
               *(long*)( this + 0xa0 ) = local_b0;
            }

         }

      }

      LAB_00103269:if (( *(long*)( this + 0x90 ) != local_c0[0] ) && ( CowData<ShaderCompiler::GeneratedCode::Texture>::_unref((CowData<ShaderCompiler::GeneratedCode::Texture>*)( this + 0x90 )),local_c0[0] != 0 )) {
         plVar15 = (long*)( local_c0[0] + -0x10 );
         do {
            lVar20 = *plVar15;
            if (lVar20 == 0) goto LAB_001032bf;
            LOCK();
            lVar16 = *plVar15;
            bVar21 = lVar20 == lVar16;
            if (bVar21) {
               *plVar15 = lVar20 + 1;
               lVar16 = lVar20;
            }

            UNLOCK();
         }
 while ( !bVar21 );
         if (lVar16 != -1) {
            *(long*)( this + 0x90 ) = local_c0[0];
         }

      }

      LAB_001032bf:uVar12 = RenderingDevice::get_singleton();
      uVar13 = *(ulong*)( this + 0x78 );
      local_1e0 = 0;
      if (*(long*)( lVar17 + 0x5e0 ) == 0) {
         lVar20 = 0;
         LAB_00103616:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar20, "p_variant", "variant_defines.size()", "", false, false);
         LAB_0010364f:uVar18 = 0;
      }
 else {
         lVar20 = *(long*)( *(long*)( lVar17 + 0x5e0 ) + -8 );
         if (lVar20 < 1) goto LAB_00103616;
         pcVar3 = *(char**)( lVar17 + 0x5f0 );
         if (pcVar3 == (char*)0x0) {
            LAB_001038c0:lVar20 = 0;
            LAB_001038c3:uVar13 = 0;
            LAB_001038e0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar13, lVar20, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar20 = *(long*)( pcVar3 + -8 );
         if (lVar20 < 1) goto LAB_001038c3;
         if (*pcVar3 != '\0') {
            if (( uVar13 == 0 ) || ( *(uint*)( lVar17 + 0x69c ) <= (uint)uVar13 )) {
               LAB_00103a0a:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
               uVar18 = 0;
               goto LAB_001033e0;
            }

            lVar16 = ( ( uVar13 & 0xffffffff ) % ( ulong ) * (uint*)( lVar17 + 0x698 ) ) * 0xa0 + *(long*)( *(long*)( lVar17 + 0x688 ) + ( ( uVar13 & 0xffffffff ) / ( ulong ) * (uint*)( lVar17 + 0x698 ) ) * 8 );
            if (*(int*)( lVar16 + 0x98 ) != (int)( uVar13 >> 0x20 )) {
               if (*(int*)( lVar16 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00103a0a;
            }

            iVar9 = (int)lVar16;
            if (*(char*)( lVar16 + 0x91 ) != '\0') {
               ShaderRD::_initialize_version(pVVar1);
               lVar20 = *(long*)( lVar17 + 0x640 );
               if (lVar20 != 0) {
                  lVar14 = 0;
                  do {
                     if (*(long*)( lVar20 + -8 ) <= lVar14) break;
                     if (*(char*)( lVar20 + lVar14 ) == '\0') {
                        ShaderRD::_allocate_placeholders(pVVar1, iVar9);
                     }
 else {
                        ShaderRD::_compile_version_start(pVVar1, iVar9);
                     }

                     lVar20 = *(long*)( lVar17 + 0x640 );
                     lVar14 = lVar14 + 1;
                  }
 while ( lVar20 != 0 );
               }

            }

            puVar4 = *(uint**)( lVar17 + 0x600 );
            if (puVar4 == (uint*)0x0) goto LAB_001038c0;
            lVar20 = *(long*)( puVar4 + -2 );
            if (lVar20 < 1) goto LAB_001038c3;
            uVar13 = ( ulong ) * puVar4;
            lVar17 = *(long*)( lVar16 + 0x68 );
            if (lVar17 == 0) {
               lVar20 = 0;
               goto LAB_001038e0;
            }

            lVar20 = *(long*)( lVar17 + -8 );
            if (lVar20 <= (long)uVar13) goto LAB_001038e0;
            if (*(long*)( lVar17 + uVar13 * 8 ) != 0) {
               ShaderRD::_compile_version_end(pVVar1, iVar9);
            }

            if (*(char*)( lVar16 + 0x90 ) != '\0') {
               puVar5 = *(undefined8**)( lVar16 + 0x88 );
               if (puVar5 == (undefined8*)0x0) goto LAB_001038c0;
               lVar20 = puVar5[-1];
               if (0 < lVar20) {
                  uVar18 = *puVar5;
                  goto LAB_001033e0;
               }

               goto LAB_001038c3;
            }

            goto LAB_0010364f;
         }

         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         uVar18 = 0;
      }

      LAB_001033e0:uVar12 = RenderingDevice::compute_pipeline_create(uVar12, uVar18, (StringName*)&local_1e8);
      lVar17 = local_1e0;
      *(undefined8*)( this + 0x80 ) = uVar12;
      if (local_1e0 != 0) {
         LOCK();
         plVar15 = (long*)( local_1e0 + -0x10 );
         *plVar15 = *plVar15 + -1;
         UNLOCK();
         if (*plVar15 == 0) {
            local_1e0 = 0;
            Memory::free_static((void*)( lVar17 + -0x10 ), false);
         }

      }

      this[0x70] = (FogShaderData)0x1;
      ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions*)local_1d8);
      if ((void*)local_78._0_8_ != (void*)0x0) {
         pvVar19 = (void*)local_78._0_8_;
         if (local_58._4_4_ != 0) {
            uVar2 = *(uint*)( hash_table_size_primes + ( local_58 & 0xffffffff ) * 4 );
            if (uVar2 == 0) {
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
            }
 else {
               lVar17 = 0;
               do {
                  if (*(int*)( local_78._8_8_ + lVar17 ) != 0) {
                     pvVar19 = *(void**)( (long)pvVar19 + lVar17 * 2 );
                     *(int*)( local_78._8_8_ + lVar17 ) = 0;
                     if (*(long*)( (long)pvVar19 + 0x18 ) != 0) {
                        LOCK();
                        plVar15 = (long*)( *(long*)( (long)pvVar19 + 0x18 ) + -0x10 );
                        *plVar15 = *plVar15 + -1;
                        UNLOCK();
                        if (*plVar15 == 0) {
                           lVar20 = *(long*)( (long)pvVar19 + 0x18 );
                           *(undefined8*)( (long)pvVar19 + 0x18 ) = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     if (*(long*)( (long)pvVar19 + 0x10 ) != 0) {
                        LOCK();
                        plVar15 = (long*)( *(long*)( (long)pvVar19 + 0x10 ) + -0x10 );
                        *plVar15 = *plVar15 + -1;
                        UNLOCK();
                        if (*plVar15 == 0) {
                           lVar20 = *(long*)( (long)pvVar19 + 0x10 );
                           *(undefined8*)( (long)pvVar19 + 0x10 ) = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     Memory::free_static(pvVar19, false);
                     *(undefined8*)( local_78._0_8_ + lVar17 * 2 ) = 0;
                     pvVar19 = (void*)local_78._0_8_;
                  }

                  lVar17 = lVar17 + 4;
               }
 while ( lVar17 != (ulong)uVar2 * 4 );
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
               if (pvVar19 == (void*)0x0) goto LAB_00103535;
            }

         }

         Memory::free_static(pvVar19, false);
         Memory::free_static((void*)local_78._8_8_, false);
      }

      LAB_00103535:do {
         plVar15 = plVar11 + -1;
         plVar11 = plVar11 + -1;
         if (*plVar15 != 0) {
            LOCK();
            plVar15 = (long*)( *plVar15 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               lVar17 = *plVar11;
               *plVar11 = 0;
               Memory::free_static((void*)( lVar17 + -0x10 ), false);
            }

         }

      }
 while ( plVar11 != (long*)( local_a0 + 8 ) );
      uVar12 = local_a0._0_8_;
      if (local_a0._0_8_ != 0) {
         LOCK();
         plVar11 = (long*)( local_a0._0_8_ + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_a0._8_8_;
            local_a0 = auVar7 << 0x40;
            Memory::free_static((void*)( uVar12 + -0x10 ), false);
         }

      }

   }
 else {
      _err_print_error("set_code", "servers/rendering/renderer_rd/environment/fog.cpp", 0x153, "Condition \"err != OK\" is true.", "Fog shader compilation failed.", 0, 0);
      LAB_001036af:local_200 = (CowData<char32_t>*)local_a0;
      plVar11 = &local_80;
      ShaderCompiler::IdentifierActions::~IdentifierActions((IdentifierActions*)local_1d8);
      if ((void*)local_78._0_8_ != (void*)0x0) {
         pvVar19 = (void*)local_78._0_8_;
         if (local_58._4_4_ != 0) {
            uVar2 = *(uint*)( hash_table_size_primes + ( local_58 & 0xffffffff ) * 4 );
            if (uVar2 == 0) {
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
            }
 else {
               lVar17 = 0;
               do {
                  if (*(int*)( local_78._8_8_ + lVar17 ) != 0) {
                     pvVar19 = *(void**)( (long)pvVar19 + lVar17 * 2 );
                     *(int*)( local_78._8_8_ + lVar17 ) = 0;
                     if (*(long*)( (long)pvVar19 + 0x18 ) != 0) {
                        LOCK();
                        plVar15 = (long*)( *(long*)( (long)pvVar19 + 0x18 ) + -0x10 );
                        *plVar15 = *plVar15 + -1;
                        UNLOCK();
                        if (*plVar15 == 0) {
                           lVar20 = *(long*)( (long)pvVar19 + 0x18 );
                           *(undefined8*)( (long)pvVar19 + 0x18 ) = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     if (*(long*)( (long)pvVar19 + 0x10 ) != 0) {
                        LOCK();
                        plVar15 = (long*)( *(long*)( (long)pvVar19 + 0x10 ) + -0x10 );
                        *plVar15 = *plVar15 + -1;
                        UNLOCK();
                        if (*plVar15 == 0) {
                           lVar20 = *(long*)( (long)pvVar19 + 0x10 );
                           *(undefined8*)( (long)pvVar19 + 0x10 ) = 0;
                           Memory::free_static((void*)( lVar20 + -0x10 ), false);
                        }

                     }

                     Memory::free_static(pvVar19, false);
                     *(undefined8*)( local_78._0_8_ + lVar17 * 2 ) = 0;
                     pvVar19 = (void*)local_78._0_8_;
                  }

                  lVar17 = lVar17 + 4;
               }
 while ( lVar17 != (ulong)uVar2 * 4 );
               local_58 = local_58 & 0xffffffff;
               local_68 = (undefined1[16])0x0;
               if (pvVar19 == (void*)0x0) goto LAB_001037bd;
            }

         }

         Memory::free_static(pvVar19, false);
         Memory::free_static((void*)local_78._8_8_, false);
      }

      LAB_001037bd:do {
         plVar15 = plVar11 + -1;
         plVar11 = plVar11 + -1;
         if (*plVar15 != 0) {
            LOCK();
            plVar15 = (long*)( *plVar15 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               lVar17 = *plVar11;
               *plVar11 = 0;
               Memory::free_static((void*)( lVar17 + -0x10 ), false);
            }

         }

      }
 while ( plVar11 != (long*)( local_a0 + 8 ) );
      CowData<char32_t>::_unref(local_200);
   }

   lVar17 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar11 = (long*)( local_b0 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar17 + -0x10 ), false);
      }

   }

   CowData<ShaderCompiler::GeneratedCode::Texture>::_unref((CowData<ShaderCompiler::GeneratedCode::Texture>*)local_c0);
   CowData<String>::_unref((CowData<String>*)local_d0);
   LAB_00102fa7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RendererRD::Fog::FogShaderData::~FogShaderData() */void RendererRD::Fog::FogShaderData::~FogShaderData(FogShaderData *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR_set_path_hint_00113a10;
   if (singleton == 0) {
      _err_print_error("~FogShaderData", "servers/rendering/renderer_rd/environment/fog.cpp", 0x175, "Parameter \"fog_singleton\" is null.", 0, 0);
      lVar2 = *(long*)( this + 0xb0 );
   }
 else {
      if (*(long*)( this + 0x78 ) != 0) {
         ShaderRD::version_free(singleton + 0x5c8);
      }

      lVar2 = *(long*)( this + 0xb0 );
   }

   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xb0 );
         *(undefined8*)( this + 0xb0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0xa0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xa0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xa0 );
         *(undefined8*)( this + 0xa0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<ShaderCompiler::GeneratedCode::Texture>::_unref((CowData<ShaderCompiler::GeneratedCode::Texture>*)( this + 0x90 ));
   MaterialStorage::ShaderData::~ShaderData((ShaderData*)this);
   return;
}
/* RendererRD::Fog::FogShaderData::~FogShaderData() */void RendererRD::Fog::FogShaderData::~FogShaderData(FogShaderData *this) {
   ~FogShaderData(this)
   ;;
   operator_delete(this, 0xc0);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::Fog::volumetric_fog_update(RendererRD::Fog::VolumetricFogSettings const&, Projection
   const&, Transform3D const&, Transform3D const&, RID, int, bool, int, int, PagedArray<RID> const&)
    */void RendererRD::Fog::volumetric_fog_update(Fog *this, int *param_1, undefined8 param_3_00, float *param_3, Transform3D *param_4, undefined8 param_6, undefined4 param_7, undefined8 param_8, undefined8 param_9, float param_10, long param_11) {
   int iVar1;
   long *plVar2;
   Version *pVVar3;
   undefined8 *puVar4;
   float fVar5;
   float fVar6;
   uint *puVar7;
   code *pcVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   int iVar12;
   int iVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   int iVar20;
   undefined1 auVar21[12];
   undefined1 uVar22;
   char cVar23;
   byte bVar24;
   char cVar25;
   byte bVar26;
   int iVar27;
   uint uVar28;
   long lVar29;
   long lVar30;
   undefined8 uVar31;
   void *pvVar32;
   ulong uVar33;
   CowData<RID> *this_00;
   undefined8 uVar34;
   float *pfVar35;
   long lVar36;
   long lVar37;
   int *piVar38;
   int *piVar39;
   int iVar40;
   long lVar41;
   char *pcVar42;
   ulong uVar43;
   Vector2 *pVVar44;
   Object *this_01;
   long in_FS_OFFSET;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   undefined4 uVar49;
   float fVar50;
   float fVar51;
   float fVar52;
   uint uVar53;
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   undefined1 auVar59[16];
   float fVar60;
   float fVar61;
   float fVar62;
   float fVar63;
   uint uVar64;
   uint uVar65;
   undefined1 auVar66[16];
   float fVar67;
   float fVar68;
   uint uVar69;
   uint uVar70;
   float fVar72;
   float fVar73;
   float fVar74;
   undefined1 auVar71[16];
   uint uVar75;
   undefined1 auVar76[16];
   float fVar77;
   uint uVar78;
   uint uVar80;
   float fVar82;
   float fVar83;
   undefined1 auVar81[16];
   float fVar84;
   uint uVar85;
   float fVar93;
   float fVar94;
   float fVar95;
   undefined1 auVar87[16];
   undefined1 auVar88[16];
   undefined1 auVar89[16];
   undefined1 auVar90[16];
   undefined1 auVar91[16];
   undefined1 auVar92[16];
   float fVar96;
   uint uVar97;
   float fVar99;
   float fVar100;
   float fVar101;
   undefined1 auVar98[16];
   float fVar102;
   float fVar104;
   float fVar105;
   float fVar106;
   undefined1 auVar103[16];
   float fVar107;
   float fVar108;
   float fVar109;
   float fVar110;
   float fVar111;
   float fVar112;
   float fVar113;
   float fVar114;
   float fVar115;
   float fVar116;
   undefined1 auVar117[12];
   char *pcVar118;
   float local_478;
   long local_468;
   int local_420;
   long local_3c0;
   byte local_395;
   float local_38c;
   float local_380;
   float fStack_37c;
   Vector<RenderingDevice::Uniform> local_318[8];
   long local_310;
   Vector<RenderingDevice::Uniform> local_308[8];
   undefined8 local_300;
   char *local_2f8;
   undefined1 local_2f0;
   long local_2e8;
   Vector<RID> local_2e0[8];
   long local_2d8[2];
   char *local_2c8;
   ulong local_2c0;
   long local_2b8;
   undefined8 local_2a8[2];
   undefined8 local_298;
   float local_290;
   float fStack_28c;
   undefined8 local_288;
   float local_280;
   float local_278;
   float fStack_274;
   float fStack_270;
   float fStack_26c;
   float local_268;
   float fStack_264;
   float fStack_260;
   float fStack_25c;
   float local_258;
   undefined8 local_254;
   int local_24c;
   undefined8 local_248;
   undefined8 uStack_240;
   float local_238;
   float fStack_234;
   float fStack_230;
   float fStack_22c;
   float local_228;
   float fStack_224;
   float fStack_220;
   float fStack_21c;
   float local_218;
   float fStack_214;
   float fStack_210;
   float fStack_20c;
   float local_208;
   float fStack_204;
   float fStack_200;
   float fStack_1fc;
   float local_1f8;
   undefined8 local_1f4;
   float local_1ec;
   undefined1 local_1e8[8];
   float afStack_1e0[2];
   undefined8 local_1d8;
   float fStack_1d0;
   undefined4 uStack_1cc;
   uint local_1c8;
   uint uStack_1c4;
   uint uStack_1c0;
   undefined4 uStack_1bc;
   undefined8 local_1b8;
   float local_1b0;
   undefined4 local_1ac;
   undefined4 local_1a8;
   float local_1a4;
   float local_1a0;
   undefined4 local_19c;
   undefined4 local_198;
   float local_194;
   float local_190;
   undefined4 local_18c;
   undefined8 local_188;
   float local_180;
   undefined4 local_17c;
   undefined1 local_178[16];
   undefined1 local_168[12];
   undefined4 uStack_15c;
   undefined8 local_158;
   float local_150;
   undefined4 local_14c;
   undefined8 local_148;
   undefined4 local_140;
   undefined4 local_13c;
   undefined8 local_138;
   float local_130;
   undefined4 local_12c;
   undefined8 local_128;
   float local_120;
   undefined4 local_11c;
   float local_118;
   float local_114;
   float local_110;
   int local_10c;
   undefined8 local_108;
   int local_100;
   uint local_fc;
   float local_f8;
   float local_f4;
   float local_f0;
   undefined4 local_ec;
   undefined8 local_e8;
   float local_e0;
   undefined4 local_dc;
   float local_d8;
   float local_d4;
   float local_d0;
   undefined4 local_cc;
   undefined8 local_c8;
   float local_c0;
   undefined4 local_bc;
   undefined8 local_b8;
   float local_b0;
   undefined4 local_ac;
   undefined4 local_a8;
   undefined4 local_a4;
   undefined4 local_a0;
   undefined4 local_9c;
   float local_98;
   undefined4 local_94;
   uint local_90;
   undefined4 local_8c;
   undefined8 local_88;
   undefined4 local_80;
   undefined4 local_7c;
   undefined8 local_78;
   float local_70;
   undefined4 local_6c;
   float local_68;
   float local_64;
   float local_60;
   undefined4 local_5c;
   float local_58;
   float local_54;
   float local_50;
   undefined4 local_4c;
   long local_40;
   uint uVar79;
   uint uVar86;
   bVar26 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar29 = RendererRD::TextureStorage::get_singleton();
   lVar30 = RendererRD::MaterialStorage::get_singleton();
   plVar2 = RenderingServerGlobals::utilities;
   if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar8 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
      local_2f8 = (char*)0x0;
      local_2c8 = "> Volumetric Fog";
      local_2c0 = 0x10;
      String::parse_latin1((StrRange*)&local_2f8);
      ( *pcVar8 )(plVar2, (StrRange*)&local_2f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
   }

   uVar31 = RenderingDevice::get_singleton();
   local_2f8 = (char*)0x0;
   local_2c0 = 0xe;
   local_2c8 = "Volumetric Fog";
   local_178._8_8_ = _UNK_0011d4f8;
   local_178._0_8_ = __LC99;
   String::parse_latin1((StrRange*)&local_2f8);
   RenderingDevice::draw_command_begin_label(uVar31, (StrRange*)&local_2f8, local_178);
   pcVar42 = local_2f8;
   if (local_2f8 != (char*)0x0) {
      LOCK();
      plVar2 = (long*)( local_2f8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_2f8 = (char*)0x0;
         Memory::free_static(pcVar42 + -0x10, false);
      }

   }

   this_01 = *(Object**)( param_1 + 0x16 );
   if (( this_01 != (Object*)0x0 ) && ( cVar23 = cVar23 == '\0' )) {
      this_01 = (Object*)0x0;
   }

   if (*(long*)( param_11 + 0x28 ) != 0) {
      uVar31 = RenderingDevice::get_singleton();
      local_2f8 = (char*)0x0;
      local_2c0 = 0x1d;
      local_2c8 = "Render Volumetric Fog Volumes";
      local_178._8_8_ = _UNK_0011d4f8;
      local_178._0_8_ = __LC99;
      String::parse_latin1((StrRange*)&local_2f8);
      RenderingDevice::draw_command_begin_label(uVar31, (StrRange*)&local_2f8, local_178);
      pcVar42 = local_2f8;
      if (local_2f8 == (char*)0x0) {
         LAB_00103e94:cVar23 = (char)RenderingServerGlobals::utilities[1];
         plVar2 = RenderingServerGlobals::utilities;
      }
 else {
         LOCK();
         plVar2 = (long*)( local_2f8 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) goto LAB_00103e94;
         local_2f8 = (char*)0x0;
         Memory::free_static(pcVar42 + -0x10, false);
         cVar23 = (char)RenderingServerGlobals::utilities[1];
         plVar2 = RenderingServerGlobals::utilities;
      }

      RenderingServerGlobals::utilities = plVar2;
      if (cVar23 != '\0') {
         pcVar8 = *(code**)( *plVar2 + 0x68 );
         local_2f8 = (char*)0x0;
         local_2c8 = "Render FogVolumes";
         local_2c0 = 0x11;
         String::parse_latin1((StrRange*)&local_2f8);
         ( *pcVar8 )(plVar2, (StrRange*)&local_2f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
      }

      uVar31 = Projection::get_viewport_half_extents();
      fVar48 = (float)uVar31;
      fVar50 = (float)( (ulong)uVar31 >> 0x20 );
      uVar31 = Projection::get_far_plane_half_extents();
      fVar45 = (float)Projection::get_z_near();
      fVar46 = (float)Projection::get_z_far();
      fVar47 = (float)RendererSceneRender::environment_get_volumetric_fog_length(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
      fVar67 = ( fVar47 - fVar45 ) / ( fVar46 - fVar45 );
      fVar60 = ( (float)uVar31 - fVar48 ) * fVar67 + fVar48;
      fVar67 = ( (float)( (ulong)uVar31 >> 0x20 ) - fVar50 ) * fVar67 + fVar50;
      local_290 = fVar60;
      fStack_28c = fVar67;
      cVar23 = Projection::is_orthogonal();
      if (cVar23 == '\0') {
         fVar116 = fVar50;
         if (fVar50 <= _LC96) {
            fVar116 = _LC96;
         }

         if (fVar48 <= _LC96) {
            uVar31 = CONCAT44(fVar116, _LC96);
            local_298 = uVar31;
         }
 else {
            uVar31 = CONCAT44(fVar116, fVar48);
            local_298 = uVar31;
         }

      }
 else {
         uVar31 = CONCAT44(fVar67, fVar60);
         local_298 = CONCAT44(fStack_28c, local_290);
      }

      local_178._12_4_ = fVar67;
      local_178._8_4_ = fVar60;
      local_158 = *(undefined8*)( this_01 + 0x17c );
      uStack_15c = (float)*(double*)( param_1 + 2 );
      local_168._8_4_ = fVar46;
      local_178._0_8_ = uVar31;
      local_168._4_4_ = fVar45;
      local_168._0_4_ = fVar47;
      local_150 = *(float*)( this_01 + 0x184 );
      bVar24 = RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
      local_148 = CONCAT44(local_148._4_4_, (uint)bVar24);
      if (*(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) == RendererCompositorRD::get_frame_number) {
         uVar49 = (undefined4)RendererCompositorRD::frame;
      }
 else {
         uVar49 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
      }

      local_148 = CONCAT44(uVar49, (undefined4)local_148) & 0xfffffffff;
      local_140 = RendererSceneRender::environment_get_volumetric_fog_detail_spread(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
      local_13c = RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection_amount(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
      Transform3D::operator *((Transform3D*)&local_278, param_4);
      local_12c = 0;
      local_11c = 0;
      local_108 = local_254;
      local_10c = 0;
      local_138 = CONCAT44(fStack_26c, local_278);
      local_fc = 0x3f800000;
      local_130 = fStack_260;
      local_ec = 0;
      local_128 = CONCAT44(local_268, fStack_274);
      local_120 = fStack_25c;
      local_118 = fStack_270;
      local_114 = fStack_264;
      local_110 = local_258;
      local_100 = local_24c;
      local_f8 = *param_3;
      local_f4 = param_3[3];
      local_f0 = param_3[6];
      local_c8 = *(undefined8*)( param_3 + 9 );
      local_dc = 0;
      local_cc = 0;
      local_e8 = CONCAT44(param_3[4], param_3[1]);
      local_e0 = param_3[7];
      local_d8 = param_3[2];
      local_bc = 0x3f800000;
      local_d4 = param_3[5];
      local_d0 = param_3[8];
      local_c0 = param_3[0xb];
      uVar31 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update(uVar31, *(undefined8*)( this + 0x740 ), 0, 0xc0, local_178);
      if (*(long*)( this_01 + 0x1c0 ) == 0) {
         LAB_00106750:local_300 = 0;
         local_2f0 = 0;
         local_2f8 = _LC104;
         local_2e8 = *(long*)( this_01 + 0x1b8 );
         local_2d8[0] = 0;
         local_2c8 = _LC104;
         local_2c0 = local_2c0 & 0xffffffffffffff00;
         local_2a8[0] = 0;
         local_2b8 = local_2e8;
         Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
         CowData<RID>::_unref((CowData<RID>*)local_2a8);
         CowData<RID>::_unref((CowData<RID>*)local_2d8);
         local_2f0 = 0;
         local_2e8 = *(long*)( this + 0x740 );
         local_2d8[0] = 0;
         local_2f8 = _LC105;
         local_2c8 = _LC105;
         local_2c0 = local_2c0 & 0xffffffffffffff00;
         local_2a8[0] = 0;
         local_2b8 = local_2e8;
         Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
         CowData<RID>::_unref((CowData<RID>*)local_2a8);
         CowData<RID>::_unref((CowData<RID>*)local_2d8);
         local_2f0 = 0;
         local_2f8 = _LC106;
         local_2e8 = *(long*)( this_01 + 0x1a8 );
         local_2d8[0] = 0;
         local_2c8 = _LC106;
         local_2c0 = local_2c0 & 0xffffffffffffff00;
         local_2a8[0] = 0;
         local_2b8 = local_2e8;
         Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
         CowData<RID>::_unref((CowData<RID>*)local_2a8);
         CowData<RID>::_unref((CowData<RID>*)local_2d8);
         local_2f0 = 0;
         local_2f8 = _LC107;
         local_2e8 = *(long*)( this_01 + 0x1b0 );
         local_2d8[0] = 0;
         local_2c8 = _LC107;
         local_2c0 = local_2c0 & 0xffffffffffffff00;
         local_2a8[0] = 0;
         local_2b8 = local_2e8;
         Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
         CowData<RID>::_unref((CowData<RID>*)local_2a8);
         CowData<RID>::_unref((CowData<RID>*)local_2d8);
         uVar31 = RenderingDevice::get_singleton();
         uVar31 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar31, local_308, *(undefined8*)( this + 0x758 ), 1, 0);
         *(undefined8*)( this_01 + 0x1c0 ) = uVar31;
         CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_300);
      }
 else {
         uVar31 = RenderingDevice::get_singleton();
         cVar23 = RenderingDevice::uniform_set_is_valid(uVar31, *(undefined8*)( this_01 + 0x1c0 ));
         if (cVar23 == '\0') goto LAB_00106750;
      }

      RenderingDevice::get_singleton();
      pvVar32 = (void*)RenderingDevice::compute_list_begin();
      fVar46 = param_3[9];
      uVar43 = 0;
      fVar67 = param_3[10];
      uVar33 = *(ulong*)( param_11 + 0x28 );
      local_395 = 0;
      fVar60 = param_3[0xb];
      if ((int)uVar33 < 1) {
         LAB_001089f5:cVar23 = RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection(RendererSceneRenderRD::singleton);
         if (cVar23 != '\0') goto LAB_001045bd;
      }
 else {
         do {
            if (uVar33 <= uVar43) {
               lVar29 = (long)(int)(uint)uVar43;
               iVar27 = 0xa9;
               pcVar42 = "./core/templates/paged_array.h";
               pcVar118 = "count";
               goto LAB_00107a4a;
            }

            uVar33 = *(ulong*)( *(long*)( *(long*)( param_11 + 8 ) + ( uVar43 >> ( ( byte ) * (undefined4*)( param_11 + 0x1c ) & 0x3f ) ) * 8 ) + ( ulong )((uint)uVar43 & *(uint*)( param_11 + 0x20 )) * 8 );
            if (( uVar33 == 0 ) || ( *(uint*)( this + 0x7c ) <= (uint)uVar33 )) {
               LAB_00106b3b:_err_print_error("volumetric_fog_update", "servers/rendering/renderer_rd/environment/fog.cpp", 0x275, "Parameter \"fog_volume_instance\" is null.", 0, 0);
               LAB_001069b8:cVar23 = RefCounted::unreference();
               if (cVar23 == '\0') goto LAB_00106698;
               cVar23 = predelete_handler(this_01);
               if (cVar23 == '\0') goto LAB_00106698;
               ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(this_01, false);
                  return;
               }

               goto LAB_00108f14;
            }

            puVar4 = (undefined8*)( *(long*)( *(long*)( this + 0x68 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x78 ) ) * 8 ) + ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x78 ) ) * 0x48 );
            if (*(int*)( puVar4 + 8 ) != (int)( uVar33 >> 0x20 )) {
               if (*(int*)( puVar4 + 8 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00106b3b;
            }

            uVar31 = *puVar4;
            uVar33 = fog_volume_get_material(singleton, uVar31);
            if (( uVar33 == 0 ) || ( *(uint*)( lVar30 + 0x26c ) <= (uint)uVar33 )) {
               LAB_001043ce:uVar33 = *(ulong*)( this + 0x750 );
               if (( uVar33 == 0 ) || ( *(uint*)( lVar30 + 0x26c ) <= (uint)uVar33 )) {
                  LAB_00106993:_err_print_error("volumetric_fog_update", "servers/rendering/renderer_rd/environment/fog.cpp", 0x288, "Parameter \"material\" is null.", 0, 0);
               }
 else {
                  lVar36 = ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( lVar30 + 0x268 ) ) * 0xc0 + *(long*)( *(long*)( lVar30 + 600 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( lVar30 + 0x268 ) ) * 8 );
                  if (*(int*)( lVar36 + 0xb8 ) != (int)( uVar33 >> 0x20 )) {
                     if (*(int*)( lVar36 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }

                     goto LAB_00106993;
                  }

                  if (( *(int*)( lVar36 + 0x18 ) != 4 ) || ( local_3c0 = local_3c0 == 0 )) goto LAB_00106993;
                  lVar36 = *(long*)( local_3c0 + 0xa8 );
                  if (lVar36 != 0) goto LAB_0010445f;
                  _err_print_error("volumetric_fog_update", "servers/rendering/renderer_rd/environment/fog.cpp", 0x28c, "Parameter \"shader_data\" is null.", 0, 0);
               }

               goto LAB_001069b8;
            }

            lVar36 = ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( lVar30 + 0x268 ) ) * 0xc0 + *(long*)( *(long*)( lVar30 + 600 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( lVar30 + 0x268 ) ) * 8 );
            if (*(int*)( lVar36 + 0xb8 ) != (int)( uVar33 >> 0x20 )) {
               if (*(int*)( lVar36 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_001043ce;
            }

            if (( ( *(int*)( lVar36 + 0x18 ) != 4 ) || ( local_3c0 = local_3c0 == 0 ) ) || ( lVar36 = *(long*)( local_3c0 + 0xa8 ) * (char*)( lVar36 + 0x70 ) == '\0' )) goto LAB_001043ce;
            LAB_0010445f:uVar34 = *(undefined8*)( (long)puVar4 + 0x2c );
            fVar116 = *(float*)( (long)puVar4 + 0x34 );
            local_395 = local_395 | *(byte*)( lVar36 + 0xb8 );
            iVar27 = ( **(code**)( *(long*)singleton + 0x48 ) )(singleton, uVar31);
            auVar117 = fog_volume_get_size(singleton);
            fVar61 = auVar117._0_4_;
            local_1e8._4_4_ = auVar117._4_4_;
            if (iVar27 == 4) {
               fVar61 = *(float*)( this_01 + 0x184 );
               uVar80 = *(uint*)( this_01 + 0x180 );
               local_38c = (float)*(uint*)( this_01 + 0x184 );
               uVar28 = *(uint*)( this_01 + 0x17c );
               local_380 = (float)*(uint*)( this_01 + 0x17c );
               fStack_37c = (float)*(uint*)( this_01 + 0x180 );
               LAB_00104559:uVar65 = 0;
               uVar97 = 0;
               uVar70 = 0;
               _local_1e8 = auVar117;
            }
 else {
               local_380 = fVar61 * _LC11;
               fStack_37c = (float)local_1e8._4_4_ * _UNK_0011d3ac;
               fVar84 = (float)local_1e8._4_4_ * _LC11;
               fVar93 = (float)local_1e8._4_4_ * _LC11;
               fVar94 = (float)local_1e8._4_4_ * _LC11;
               fVar95 = fVar61 * _LC11;
               fVar96 = fVar61 * _LC11;
               fVar99 = fVar61 * _LC11;
               fVar100 = (float)local_1e8._4_4_ * _LC11;
               fVar101 = (float)local_1e8._4_4_ * _LC11;
               fVar68 = (float)local_1e8._4_4_ * _LC11;
               fVar72 = (float)local_1e8._4_4_ * _LC11;
               fVar73 = fVar61 * _LC11;
               fVar74 = fVar61 * _LC11;
               fVar102 = fVar61 * _LC11;
               fVar104 = fVar61 * _LC11;
               fVar105 = fVar61 * _LC11;
               fVar106 = (float)local_1e8._4_4_ * _LC11;
               fVar107 = (float)local_1e8._4_4_ * _LC11;
               fVar61 = fVar61 * _LC11;
               local_38c = auVar117._8_4_ * _LC11;
               local_280 = (float)*(uint*)( this_01 + 0x184 );
               local_288 = CONCAT44((float)*(uint*)( this_01 + 0x180 ), (float)*(uint*)( this_01 + 0x17c ));
               _local_1e8 = auVar117;
               fVar51 = (float)RendererSceneRender::environment_get_volumetric_fog_detail_spread(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
               fVar5 = *(float*)( puVar4 + 1 );
               fVar6 = *(float*)( (long)puVar4 + 0xc );
               fVar9 = *(float*)( (long)puVar4 + 0x14 );
               fVar10 = *(float*)( puVar4 + 3 );
               fVar11 = *(float*)( puVar4 + 4 );
               fVar72 = *(float*)( (long)puVar4 + 0x24 ) * fVar72;
               fVar115 = *(float*)( (long)puVar4 + 0x24 ) * fVar107;
               fVar105 = fVar11 * fVar105;
               auVar98 = *(undefined1(*) [16])( puVar4 + 5 );
               fStack_200 = auVar98._4_4_;
               fStack_1fc = auVar98._8_4_;
               local_1ec = auVar98._12_4_;
               fVar52 = *(float*)( (long)puVar4 + 0x14 ) * fVar61;
               fVar62 = fVar61 * *(float*)( puVar4 + 1 );
               fVar110 = fVar107 * *(float*)( puVar4 + 3 );
               local_1f4 = CONCAT44(( ( (float)( ( uint )(*(float*)( puVar4 + 3 ) * fVar107) ^ _LC117._4_4_ ) - (float)( (ulong)puVar4[2] >> 0x20 ) * fVar61 ) - (float)( (ulong)puVar4[3] >> 0x20 ) * local_38c ) + (float)( ( ulong ) * (undefined8*)( (long)puVar4 + 0x2c ) >> 0x20 ), ( ( (float)( ( uint )(*(float*)( (long)puVar4 + 0xc ) * fVar107) ^ (uint)_LC117 ) - (float)puVar4[1] * fVar61 ) - (float)puVar4[2] * local_38c ) + (float)*(undefined8*)( (long)puVar4 + 0x2c ));
               fVar63 = *(float*)( puVar4 + 2 );
               fVar107 = fVar107 * *(float*)( (long)puVar4 + 0xc );
               fVar108 = local_38c * *(float*)( (long)puVar4 + 0x1c );
               fVar109 = local_38c * *(float*)( puVar4 + 5 );
               fVar112 = *(float*)( (long)puVar4 + 0x1c ) * local_38c;
               fVar113 = *(float*)( puVar4 + 5 ) * local_38c;
               fVar114 = *(float*)( (long)puVar4 + 0x1c ) * local_38c;
               fVar111 = (float)( (uint)fVar72 ^ _LC10 ) - fVar105;
               fVar77 = fStack_200 + fVar62 + fVar107 + local_38c * fVar63;
               fVar82 = fStack_1fc + fVar52 + fVar110 + fVar108;
               fVar83 = local_1ec + *(float*)( puVar4 + 4 ) * fVar61 + fVar115 + fVar109;
               local_248 = CONCAT44(fVar82, fVar77);
               uStack_240 = CONCAT44(fStack_200 + ( fVar107 - fVar62 ) + local_38c * fVar63, fVar83);
               local_238 = ( fVar110 - fVar52 ) + fVar112 + fStack_1fc;
               fStack_234 = ( fVar115 - *(float*)( puVar4 + 4 ) * fVar61 ) + fVar113 + local_1ec;
               fStack_230 = ( fVar62 - fVar107 ) + fVar63 * local_38c + fStack_200;
               fStack_22c = ( fVar52 - fVar110 ) + fVar114 + fStack_1fc;
               local_228 = local_1ec + *(float*)( puVar4 + 5 ) * local_38c + ( fVar105 - fVar72 );
               fStack_224 = fStack_200 + fVar63 * local_38c + ( (float)( (uint)fVar107 ^ _LC10 ) - fVar62 );
               fStack_220 = fStack_1fc + *(float*)( (long)puVar4 + 0x1c ) * local_38c + ( (float)( (uint)fVar110 ^ _LC10 ) - fVar52 );
               fStack_21c = local_1ec + *(float*)( puVar4 + 5 ) * local_38c + fVar111;
               local_218 = ( ( fVar6 * fVar84 + fVar5 * fVar102 ) - local_38c * fVar63 ) + fStack_200;
               fStack_214 = ( ( fVar10 * fVar93 + fVar9 * fVar104 ) - fVar108 ) + fStack_1fc;
               fStack_210 = ( ( *(float*)( (long)puVar4 + 0x24 ) * fVar94 + fVar105 ) - fVar109 ) + local_1ec;
               fStack_20c = ( ( fVar6 * fVar106 - fVar5 * fVar95 ) - local_38c * fVar63 ) + fStack_200;
               piVar38 = (int*)local_1e8;
               for (lVar37 = 0xc; lVar37 != 0; lVar37 = lVar37 + -1) {
                  piVar38[0] = 0;
                  piVar38[1] = 0;
                  piVar38 = piVar38 + (ulong)bVar26 * -4 + 2;
               }

               local_1f8 = ( ( fVar105 - fVar72 ) - fVar109 ) + local_1ec;
               local_208 = ( ( fVar10 * fVar68 - fVar9 * fVar96 ) - fVar112 ) + fStack_1fc;
               fStack_204 = ( ( fVar72 - fVar11 * fVar99 ) - fVar113 ) + local_1ec;
               fStack_200 = ( ( fVar5 * fVar73 - fVar6 * fVar100 ) - fVar63 * local_38c ) + fStack_200;
               fStack_1fc = ( ( fVar9 * fVar74 - fVar10 * fVar101 ) - fVar114 ) + fStack_1fc;
               local_1ec = ( fVar111 - fVar109 ) + local_1ec;
               iVar27 = 0;
               pVVar44 = (Vector2*)&local_248;
               fVar61 = fVar77;
               local_468._0_4_ = fVar83;
               local_478 = fVar82;
               auVar21 = _local_1e8;
               do {
                  lVar37 = (long)iVar27;
                  iVar27 = iVar27 + 1;
                  _local_1e8 = auVar21;
                  auVar117 = _point_get_position_in_froxel_volume((Vector3*)this, fVar47, pVVar44, (Vector2*)&local_298, fVar51, (Vector3*)&local_290, (Transform3D*)&local_288);
                  fVar63 = *(float*)( pVVar44 + 8 );
                  fVar5 = *(float*)( pVVar44 + 4 );
                  fVar6 = *(float*)pVVar44;
                  *(long*)( afStack_1e0 + lVar37 * 3 + -2 ) = auVar117._0_8_;
                  if (fVar63 <= (float)local_468) {
                     local_468._0_4_ = fVar63;
                  }

                  afStack_1e0[lVar37 * 3] = auVar117._8_4_;
                  auVar21._8_4_ = afStack_1e0[0];
                  auVar21._0_8_ = local_1e8;
                  auVar117._8_4_ = afStack_1e0[0];
                  auVar117._0_8_ = local_1e8;
                  if (fVar83 <= fVar63) {
                     fVar83 = fVar63;
                  }

                  if (fVar6 <= fVar77) {
                     fVar77 = fVar6;
                  }

                  if (fVar82 <= fVar5) {
                     fVar82 = fVar5;
                  }

                  if (fVar61 <= fVar6) {
                     fVar61 = fVar6;
                  }

                  if (fVar5 <= local_478) {
                     local_478 = fVar5;
                  }

                  pVVar44 = pVVar44 + 0xc;
               }
 while ( iVar27 != 8 );
               uVar80 = *(uint*)( this_01 + 0x180 );
               uVar28 = *(uint*)( this_01 + 0x17c );
               iVar27 = *(int*)( this_01 + 0x184 ) + -1;
               iVar40 = uVar80 - 1;
               iVar1 = uVar28 - 1;
               fVar63 = SQRT(fVar48 * fVar48 + fVar50 * fVar50 + fVar45 * fVar45);
               if (( ( ( ( fVar77 - fVar63 < fVar46 ) && ( fVar46 < fVar61 + fVar63 ) ) && ( local_478 - fVar63 < fVar67 ) ) && ( ( fVar67 < fVar82 + fVar63 && ( (float)local_468 - fVar63 < fVar60 ) ) ) ) && ( fVar60 < fVar63 + fVar83 )) {
                  pfVar35 = afStack_1e0;
                  fVar61 = 1.4013e-45;
                  do {
                     if ((int)fVar61 < (int)*pfVar35) {
                        fVar61 = *pfVar35;
                     }

                     if ((int)fVar61 < (int)pfVar35[3]) {
                        fVar61 = pfVar35[3];
                     }

                     pfVar35 = pfVar35 + 6;
                  }
 while ( &local_180 != pfVar35 );
                  goto LAB_00104559;
               }

               auVar71._4_4_ = iVar1;
               auVar71._0_4_ = iVar1;
               auVar71._8_4_ = iVar1;
               auVar71._12_4_ = iVar1;
               auVar90._4_4_ = iVar40;
               auVar90._0_4_ = iVar40;
               auVar90._8_4_ = iVar40;
               auVar90._12_4_ = iVar40;
               auVar88._4_4_ = iVar27;
               auVar88._0_4_ = iVar27;
               auVar88._8_4_ = iVar27;
               auVar88._12_4_ = iVar27;
               piVar38 = (int*)local_1e8;
               auVar98 = __LC97;
               auVar103 = __LC97;
               auVar57 = __LC97;
               do {
                  iVar27 = *piVar38;
                  iVar1 = piVar38[1];
                  iVar40 = piVar38[2];
                  iVar12 = piVar38[3];
                  iVar13 = piVar38[4];
                  iVar14 = piVar38[5];
                  iVar15 = piVar38[6];
                  iVar16 = piVar38[7];
                  piVar39 = piVar38 + 0xc;
                  iVar17 = piVar38[8];
                  iVar18 = piVar38[9];
                  iVar19 = piVar38[10];
                  iVar20 = piVar38[0xb];
                  auVar76._4_4_ = iVar12;
                  auVar76._0_4_ = iVar27;
                  auVar76._8_4_ = iVar15;
                  auVar76._12_4_ = iVar18;
                  auVar54._4_4_ = iVar14;
                  auVar54._0_4_ = iVar40;
                  auVar54._8_4_ = iVar17;
                  auVar54._12_4_ = iVar20;
                  auVar87._0_4_ = -(uint)(iVar40 < auVar88._0_4_);
                  auVar87._4_4_ = -(uint)(iVar14 < auVar88._4_4_);
                  auVar87._8_4_ = -(uint)(iVar17 < auVar88._8_4_);
                  auVar87._12_4_ = -(uint)(iVar20 < auVar88._12_4_);
                  auVar81._4_4_ = iVar13;
                  auVar81._0_4_ = iVar1;
                  auVar81._8_4_ = iVar16;
                  auVar81._12_4_ = iVar19;
                  auVar88 = ~auVar87 & auVar88 | auVar54 & auVar87;
                  auVar89._0_4_ = -(uint)(iVar1 < auVar90._0_4_);
                  auVar89._4_4_ = -(uint)(iVar13 < auVar90._4_4_);
                  auVar89._8_4_ = -(uint)(iVar16 < auVar90._8_4_);
                  auVar89._12_4_ = -(uint)(iVar19 < auVar90._12_4_);
                  auVar90 = ~auVar89 & auVar90 | auVar81 & auVar89;
                  auVar91._0_4_ = -(uint)(auVar71._0_4_ < iVar27);
                  auVar91._4_4_ = -(uint)(auVar71._4_4_ < iVar12);
                  auVar91._8_4_ = -(uint)(auVar71._8_4_ < iVar15);
                  auVar91._12_4_ = -(uint)(auVar71._12_4_ < iVar18);
                  auVar71 = auVar71 & auVar91 | ~auVar91 & auVar76;
                  auVar92._0_4_ = -(uint)(iVar40 < auVar98._0_4_);
                  auVar92._4_4_ = -(uint)(iVar14 < auVar98._4_4_);
                  auVar92._8_4_ = -(uint)(iVar17 < auVar98._8_4_);
                  auVar92._12_4_ = -(uint)(iVar20 < auVar98._12_4_);
                  auVar55._0_4_ = -(uint)(iVar1 < auVar103._0_4_);
                  auVar55._4_4_ = -(uint)(iVar13 < auVar103._4_4_);
                  auVar55._8_4_ = -(uint)(iVar16 < auVar103._8_4_);
                  auVar55._12_4_ = -(uint)(iVar19 < auVar103._12_4_);
                  auVar98 = auVar98 & auVar92 | ~auVar92 & auVar54;
                  auVar103 = auVar103 & auVar55 | ~auVar55 & auVar81;
                  auVar56._0_4_ = -(uint)(auVar57._0_4_ < iVar27);
                  auVar56._4_4_ = -(uint)(auVar57._4_4_ < iVar12);
                  auVar56._8_4_ = -(uint)(auVar57._8_4_ < iVar15);
                  auVar56._12_4_ = -(uint)(auVar57._12_4_ < iVar18);
                  auVar57 = ~auVar56 & auVar57 | auVar76 & auVar56;
                  piVar38 = piVar39;
               }
 while ( piVar39 != (int*)&local_188 );
               auVar58._0_4_ = -(uint)(auVar57._0_4_ < auVar57._8_4_);
               auVar58._4_4_ = -(uint)(auVar57._4_4_ < auVar57._12_4_);
               auVar58._8_4_ = -(uint)(auVar57._8_4_ < 0);
               auVar58._12_4_ = -(uint)(auVar57._12_4_ < 0);
               auVar57 = ~auVar58 & auVar57 | auVar57 >> 0x40 & auVar58;
               uVar28 = auVar57._0_4_;
               uVar97 = auVar57._4_4_;
               uVar75 = -(uint)((int)uVar28 < (int)uVar97);
               auVar57._0_4_ = -(uint)(auVar103._0_4_ < auVar103._8_4_);
               auVar57._4_4_ = -(uint)(auVar103._4_4_ < auVar103._12_4_);
               auVar57._8_4_ = -(uint)(auVar103._8_4_ < 0);
               auVar57._12_4_ = -(uint)(auVar103._12_4_ < 0);
               auVar103 = ~auVar57 & auVar103 | auVar103 >> 0x40 & auVar57;
               uVar80 = auVar103._0_4_;
               uVar79 = auVar103._4_4_;
               uVar78 = -(uint)((int)uVar80 < (int)uVar79);
               auVar103._0_4_ = -(uint)(auVar98._0_4_ < auVar98._8_4_);
               auVar103._4_4_ = -(uint)(auVar98._4_4_ < auVar98._12_4_);
               auVar103._8_4_ = -(uint)(auVar98._8_4_ < 0);
               auVar103._12_4_ = -(uint)(auVar98._12_4_ < 0);
               auVar98 = ~auVar103 & auVar98 | auVar98 >> 0x40 & auVar103;
               uVar53 = auVar98._0_4_;
               uVar86 = auVar98._4_4_;
               uVar85 = -(uint)((int)uVar53 < (int)uVar86);
               auVar98._0_4_ = -(uint)(auVar71._0_4_ < auVar71._8_4_);
               auVar98._4_4_ = -(uint)(auVar71._4_4_ < auVar71._12_4_);
               auVar98._8_4_ = -(uint)(auVar71._8_4_ < 0);
               auVar98._12_4_ = -(uint)(auVar71._12_4_ < 0);
               auVar98 = ~auVar98 & auVar71 >> 0x40 | auVar71 & auVar98;
               uVar65 = auVar98._0_4_;
               uVar64 = auVar98._4_4_;
               uVar69 = -(uint)((int)uVar65 < (int)uVar64);
               uVar70 = ~uVar69 & uVar64 | uVar65 & uVar69;
               uVar28 = ( ~uVar75 & uVar28 | uVar97 & uVar75 ) - uVar70;
               auVar59._0_4_ = -(uint)(auVar90._0_4_ < auVar90._8_4_);
               auVar59._4_4_ = -(uint)(auVar90._4_4_ < auVar90._12_4_);
               auVar59._8_4_ = -(uint)(auVar90._8_4_ < 0);
               auVar59._12_4_ = -(uint)(auVar90._12_4_ < 0);
               auVar98 = ~auVar59 & auVar90 >> 0x40 | auVar90 & auVar59;
               uVar65 = auVar98._0_4_;
               uVar64 = auVar98._4_4_;
               uVar69 = -(uint)((int)uVar65 < (int)uVar64);
               auVar66._0_4_ = -(uint)(auVar88._0_4_ < auVar88._8_4_);
               auVar66._4_4_ = -(uint)(auVar88._4_4_ < auVar88._12_4_);
               auVar66._8_4_ = -(uint)(auVar88._8_4_ < 0);
               auVar66._12_4_ = -(uint)(auVar88._12_4_ < 0);
               uVar97 = ~uVar69 & uVar64 | uVar65 & uVar69;
               uVar80 = ( ~uVar78 & uVar80 | uVar79 & uVar78 ) - uVar97;
               auVar98 = auVar88 & auVar66 | ~auVar66 & auVar88 >> 0x40;
               uVar65 = auVar98._0_4_;
               uVar64 = auVar98._4_4_;
               uVar69 = -(uint)((int)uVar65 < (int)uVar64);
               uVar65 = ~uVar69 & uVar64 | uVar65 & uVar69;
               fVar61 = (float)( ( ~uVar85 & uVar53 | uVar86 & uVar85 ) - uVar65 );
            }

            if (( uVar28 != 0 && uVar80 != 0 ) && ( fVar61 != 0.0 )) {
               local_1d8 = CONCAT44(fStack_37c + fStack_37c, local_380 + local_380);
               fStack_1d0 = local_38c + local_38c;
               local_1e8 = (undefined1[8])uVar34;
               afStack_1e0[0] = fVar116;
               local_1c8 = uVar70;
               uStack_1c4 = uVar97;
               uStack_1c0 = uVar65;
               uStack_1bc = ( **(code**)( *(long*)singleton + 0x48 ) )(singleton, uVar31);
               Transform3D::affine_inverse();
               local_188 = CONCAT44(fStack_220, fStack_224);
               local_1ac = 0;
               local_19c = 0;
               local_18c = 0;
               local_1b8 = CONCAT44((int)( (ulong)uStack_240 >> 0x20 ), (int)local_248);
               local_17c = 0x3f800000;
               local_1b0 = fStack_230;
               local_1a8 = local_248._4_4_;
               local_1a4 = local_238;
               local_1a0 = fStack_22c;
               local_198 = (undefined4)uStack_240;
               local_194 = fStack_234;
               local_190 = local_228;
               local_180 = fStack_21c;
               uVar31 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_bind_compute_pipeline(uVar31, pvVar32, *(undefined8*)( lVar36 + 0x80 ));
               uVar31 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_bind_uniform_set(uVar31, pvVar32, *(undefined8*)( this_01 + 0x1c0 ), 1);
               lVar36 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_set_push_constant(lVar36, pvVar32, (uint)local_1e8);
               uVar31 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_bind_uniform_set(uVar31, pvVar32, *(undefined8*)( this + 0x760 ), 0);
               if (*(long*)( local_3c0 + 0xb0 ) != 0) {
                  uVar31 = RenderingDevice::get_singleton();
                  cVar23 = RenderingDevice::uniform_set_is_valid(uVar31, *(undefined8*)( local_3c0 + 0xb0 ));
                  if (cVar23 != '\0') {
                     uVar31 = RenderingDevice::get_singleton();
                     RenderingDevice::compute_list_bind_uniform_set(uVar31, pvVar32, *(undefined8*)( local_3c0 + 0xb0 ), 2);
                     RendererRD::MaterialStorage::MaterialData::set_as_used();
                  }

               }

               lVar36 = RenderingDevice::get_singleton();
               RenderingDevice::compute_list_dispatch_threads(lVar36, (uint)pvVar32, uVar28, uVar80);
            }

            uVar33 = *(ulong*)( param_11 + 0x28 );
            uVar43 = uVar43 + 1;
         }
 while ( (int)uVar43 < (int)uVar33 );
         if (local_395 == 0) goto LAB_001089f5;
         LAB_001045bd:RenderingServerDefault::changes._0_4_ = (int)RenderingServerDefault::changes + 1;
      }

      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
   }

   cVar23 = VolumetricFog::sync_gi_dependent_sets_validity((VolumetricFog*)this_01, false);
   if (*(long*)( this_01 + 0x1c8 ) != 0) {
      uVar31 = RenderingDevice::get_singleton();
      cVar25 = RenderingDevice::uniform_set_is_valid(uVar31, *(undefined8*)( this_01 + 0x1c8 ));
      if (cVar25 == '\0') {
         *(undefined8*)( this_01 + 0x1c8 ) = 0;
      }

   }

   pcVar42 = _LC118;
   if (( cVar23 == '\0' ) || ( *(long*)( this_01 + 0x1c8 ) == 0 )) {
      local_2e8 = *(long*)( param_1 + 0xc );
      local_310 = 0;
      local_300 = 0;
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC118;
      if (local_2e8 == 0) {
         local_2e8 = *(long*)( lVar29 + 0x20 );
      }

      local_2c8 = _LC118;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      pcVar42 = _LC119;
      local_2e8 = *(long*)( param_1 + 0x12 );
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC119;
      if (local_2e8 == 0) {
         local_2e8 = *(long*)( lVar29 + 0x20 );
      }

      local_2c8 = _LC119;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      pcVar42 = _LC120;
      local_2e8 = *(long*)( param_1 + 0xe );
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC120;
      local_2c8 = _LC120;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      uVar31 = *(undefined8*)( param_1 + 0x10 );
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2c8 = _LC121;
      local_2b8 = uVar31;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2c8 = _LC121;
      local_2a8[0] = 0;
      local_2b8 = uVar31;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      pcVar42 = _LC122;
      local_2e8 = *(long*)( param_1 + 0x14 );
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC122;
      local_2c8 = _LC122;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      pcVar42 = _LC123;
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC123;
      local_2e8 = ClusterBuilderRD::get_cluster_buffer();
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      uVar31 = *(undefined8*)( lVar30 + 0x50 );
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2c8 = _LC124;
      local_2b8 = uVar31;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2c8 = _LC124;
      local_2a8[0] = 0;
      local_2b8 = uVar31;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      pcVar42 = _LC125;
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC125;
      local_2e8 = *(long*)( this_01 + 400 );
      local_2c8 = _LC125;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      pcVar42 = _LC126;
      local_2b8 = *(long*)( this_01 + 0x1a0 );
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2c8 = _LC126;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2f8 = pcVar42;
      local_2e8 = *(long*)( this_01 + 0x198 );
      local_2f0 = 0;
      local_2c8 = pcVar42;
      local_2d8[0] = 0;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      uVar31 = *(undefined8*)( param_1 + 8 );
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2c8 = _LC127;
      local_2b8 = uVar31;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2c8 = _LC127;
      local_2a8[0] = 0;
      local_2b8 = uVar31;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      pcVar42 = _LC128;
      local_2e8 = *(long*)( param_1 + 10 );
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC128;
      local_2c8 = _LC128;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      iVar27 = 0;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      local_2f0 = 0;
      local_2f8 = _LC129;
      local_2e8 = 0;
      local_2d8[0] = 0;
      lVar36 = 0;
      LAB_00104e05:do {
         lVar37 = *(long*)( *(long*)( param_1 + 0x1e ) + 0x188 + (long)iVar27 * 8 );
         if (lVar36 == 0) {
            if (local_2e8 == 0) {
               iVar27 = iVar27 + 1;
               lVar41 = 0;
               local_2e8 = lVar37;
               if (iVar27 == 8) break;
               goto LAB_00104e05;
            }

            Vector<RID>::push_back(local_2e0, local_2e8);
            Vector<RID>::push_back(local_2e0, lVar37);
            local_2e8 = 0;
         }
 else {
            Vector<RID>::push_back(local_2e0, lVar37);
         }

         iVar27 = iVar27 + 1;
         lVar36 = local_2d8[0];
         lVar41 = local_2d8[0];
      }
 while ( iVar27 != 8 );
      uVar22 = local_2f0;
      pcVar42 = local_2f8;
      local_2a8[0] = 0;
      local_2c8 = local_2f8;
      local_2c0._0_1_ = local_2f0;
      local_2b8 = local_2e8;
      if (lVar41 == 0) {
         Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
         CowData<RID>::_unref((CowData<RID>*)local_2a8);
         local_2c8 = pcVar42;
         local_2c0._0_1_ = uVar22;
         local_2a8[0] = 0;
         local_2b8 = local_2e8;
      }
 else {
         CowData<RID>::_ref((CowData<RID>*)local_2a8, (CowData*)local_2d8);
         Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
         CowData<RID>::_unref((CowData<RID>*)local_2a8);
         local_2c0._0_1_ = uVar22;
         local_2c8 = pcVar42;
         local_2a8[0] = 0;
         local_2b8 = local_2e8;
         CowData<RID>::_ref((CowData<RID>*)local_2a8, (CowData*)local_2d8);
      }

      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      pcVar42 = _LC130;
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2f8 = _LC130;
      local_2e8 = *(undefined8*)( lVar30 + 0x90 );
      local_2c8 = _LC130;
      local_2c0._0_1_ = 0;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2c8 = pcVar42;
      local_2c0._0_1_ = 0;
      local_2b8 = local_2e8;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      pcVar42 = _LC131;
      local_2f0 = 0;
      local_2d8[0] = 0;
      local_2e8 = *(long*)( this + 0x768 );
      local_2f8 = _LC131;
      local_2c8 = _LC131;
      local_2c0._0_1_ = 0;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      local_2c8 = pcVar42;
      local_2c0._0_1_ = 0;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      local_2b8 = *(long*)( this_01 + 0x198 );
      local_2c0._0_1_ = 0;
      local_2c8 = _LC132;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      local_2f0 = 0;
      local_2f8 = _LC133;
      local_2e8 = *(long*)( this_01 + 0x1a8 );
      local_2d8[0] = 0;
      local_2c8 = _LC133;
      local_2c0._0_1_ = 0;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      local_2f0 = 0;
      local_2f8 = _LC134;
      local_2e8 = *(long*)( this_01 + 0x1b0 );
      local_2d8[0] = 0;
      local_2c8 = _LC134;
      local_2c0._0_1_ = 0;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      local_2b8 = *(long*)( this_01 + 0x1b8 );
      local_2c0 = (ulong)local_2c0._1_7_ << 8;
      local_2c8 = _LC135;
      local_2a8[0] = 0;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      pcVar42 = _LC136;
      local_2e8 = 0;
      local_2f0 = 0;
      local_2f8 = _LC136;
      lVar29 = *(long*)( lVar29 + 0x50 + ( ulong ) * (byte*)( param_1 + 4 ) * 8 );
      local_2d8[0] = 0;
      lVar30 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
      if (lVar30 == 0) {
         LAB_00105249:local_2e8 = lVar29;
      }
 else {
         uVar31 = *(undefined8*)( param_1 + 0x22 );
         uVar34 = RendererSceneRender::environment_get_sky(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
         local_2e8 = RendererRD::SkyRD::sky_get_radiance_texture_rd(uVar31, uVar34);
         if (local_2e8 == 0) goto LAB_00105249;
      }

      local_2c8 = pcVar42;
      local_2c0 = local_2c0 & 0xffffffffffffff00;
      local_2a8[0] = 0;
      local_2b8 = local_2e8;
      Vector<RenderingDevice::Uniform>::push_back(local_318, &local_2c8);
      CowData<RID>::_unref((CowData<RID>*)local_2a8);
      CowData<RID>::_unref((CowData<RID>*)local_2d8);
      if (*(long*)( this_01 + 0x1c8 ) != 0) {
         uVar31 = RenderingDevice::get_singleton();
         cVar25 = RenderingDevice::uniform_set_is_valid(uVar31, *(undefined8*)( this_01 + 0x1c8 ));
         if (cVar25 != '\0') {
            uVar31 = RenderingDevice::get_singleton();
            RenderingDevice::free(uVar31, *(undefined8*)( this_01 + 0x1c8 ));
         }

      }

      uVar31 = RenderingDevice::get_singleton();
      uVar33 = *(ulong*)( this + 0x8e8 );
      pVVar3 = (Version*)( this + 0x770 );
      if (*(long*)( this + 0x788 ) == 0) {
         lVar29 = 0;
         LAB_0010823a:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 4, lVar29, "p_variant", "variant_defines.size()", "", false, false);
         LAB_00108276:uVar34 = 0;
         LAB_001053e4:uVar31 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar31, local_308, uVar34);
         *(undefined8*)( this_01 + 0x1c8 ) = uVar31;
         if (cVar23 == '\0') {
            uVar31 = RenderingDevice::get_singleton();
            uVar33 = *(ulong*)( this + 0x8e8 );
            if (*(long*)( this + 0x788 ) != 0) {
               lVar29 = *(long*)( *(long*)( this + 0x788 ) + -8 );
               if (lVar29 < 4) goto LAB_00108283;
               lVar29 = *(long*)( this + 0x798 );
               if (lVar29 != 0) {
                  lVar30 = *(long*)( lVar29 + -8 );
                  if (lVar30 < 4) goto LAB_001083d6;
                  if (*(char*)( lVar29 + 3 ) == '\0') {
                     _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
                     uVar34 = 0;
                     goto LAB_0010554b;
                  }

                  if (( uVar33 == 0 ) || ( *(uint*)( this + 0x844 ) <= (uint)uVar33 )) {
                     LAB_00108b08:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
                     uVar34 = 0;
                     goto LAB_0010554b;
                  }

                  lVar29 = ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x840 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x830 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x840 ) ) * 8 );
                  if (*(int*)( lVar29 + 0x98 ) != (int)( uVar33 >> 0x20 )) {
                     if (*(int*)( lVar29 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                     }

                     goto LAB_00108b08;
                  }

                  iVar27 = (int)lVar29;
                  if (*(char*)( lVar29 + 0x91 ) != '\0') {
                     ShaderRD::_initialize_version(pVVar3);
                     lVar30 = *(long*)( this + 0x7e8 );
                     if (lVar30 != 0) {
                        lVar36 = 0;
                        do {
                           if (*(long*)( lVar30 + -8 ) <= lVar36) break;
                           if (*(char*)( lVar30 + lVar36 ) == '\0') {
                              ShaderRD::_allocate_placeholders(pVVar3, iVar27);
                           }
 else {
                              ShaderRD::_compile_version_start(pVVar3, iVar27);
                           }

                           lVar30 = *(long*)( this + 0x7e8 );
                           lVar36 = lVar36 + 1;
                        }
 while ( lVar30 != 0 );
                     }

                  }

                  lVar36 = *(long*)( this + 0x7a8 );
                  if (lVar36 == 0) goto LAB_001083d3;
                  lVar30 = *(long*)( lVar36 + -8 );
                  if (3 < lVar30) {
                     uVar33 = ( ulong ) * (uint*)( lVar36 + 0xc );
                     lVar36 = *(long*)( lVar29 + 0x68 );
                     if (lVar36 == 0) goto LAB_001083b0;
                     lVar30 = *(long*)( lVar36 + -8 );
                     if (lVar30 <= (long)uVar33) goto LAB_001081b3;
                     if (*(long*)( lVar36 + uVar33 * 8 ) != 0) {
                        ShaderRD::_compile_version_end(pVVar3, iVar27);
                     }

                     if (*(char*)( lVar29 + 0x90 ) != '\0') {
                        lVar29 = *(long*)( lVar29 + 0x88 );
                        if (lVar29 == 0) goto LAB_001083d3;
                        lVar30 = *(long*)( lVar29 + -8 );
                        if (3 < lVar30) {
                           uVar34 = *(undefined8*)( lVar29 + 0x18 );
                           goto LAB_0010554b;
                        }

                        goto LAB_001083d6;
                     }

                     goto LAB_001082bf;
                  }

                  goto LAB_001083d6;
               }

               goto LAB_001083d3;
            }

            lVar29 = 0;
            LAB_00108283:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 3, lVar29, "p_variant", "variant_defines.size()", "", false, false);
            LAB_001082bf:uVar34 = 0;
            LAB_0010554b:uVar31 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar31, local_318, uVar34, 0);
            *(undefined8*)( this_01 + 0x1d8 ) = uVar31;
            if (local_310 == 0) {
               LAB_00108968:uVar33 = 0;
            }
 else {
               uVar33 = *(ulong*)( local_310 + -8 );
               if (7 < (long)uVar33) {
                  CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)&local_310);
                  local_468 = *(long*)( local_310 + 0x128 );
                  if (local_468 == 0) {
                     plVar2 = *(long**)( local_310 + 0x138 );
                     if (plVar2 != (long*)0x0) {
                        lVar30 = plVar2[-1];
                        if (0 < lVar30) {
                           local_468 = *plVar2;
                           goto LAB_001055d2;
                        }

                        goto LAB_001089d3;
                     }

                     goto LAB_001089d0;
                  }

                  LAB_001055d2:uVar33 = *(ulong*)( local_310 + -8 );
                  if ((long)uVar33 < 9) {
                     LAB_00108454:lVar29 = 8;
                     goto LAB_00108474;
                  }

                  CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)&local_310);
                  lVar29 = *(long*)( local_310 + 0x150 );
                  if (lVar29 == 0) {
                     plVar2 = *(long**)( local_310 + 0x160 );
                     if (plVar2 == (long*)0x0) goto LAB_001089d0;
                     lVar30 = plVar2[-1];
                     if (lVar30 < 1) goto LAB_001089d3;
                     lVar29 = *plVar2;
                  }

                  uVar33 = *(ulong*)( local_310 + -8 );
                  if ((long)uVar33 < 8) goto LAB_0010896b;
                  CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)&local_310);
                  lVar30 = local_310;
                  if (*(long*)( local_310 + 0x128 ) == 0) {
                     if (*(long*)( local_310 + 0x138 ) == 0) {
                        LAB_00108b4e:uVar33 = 0;
                     }
 else {
                        uVar33 = *(ulong*)( *(long*)( local_310 + 0x138 ) + -8 );
                        if (0 < (long)uVar33) {
                           CowData<RID>::_copy_on_write((CowData<RID>*)( local_310 + 0x138 ));
                           **(long**)( lVar30 + 0x138 ) = lVar29;
                           if (local_310 == 0) {
                              uVar33 = 0;
                              goto LAB_00108454;
                           }

                           goto LAB_0010565b;
                        }

                     }

                     LAB_00108b51:lVar29 = 0;
                     goto LAB_00108474;
                  }

                  *(long*)( local_310 + 0x128 ) = lVar29;
                  LAB_0010565b:uVar33 = *(ulong*)( local_310 + -8 );
                  if ((long)uVar33 < 9) goto LAB_00108454;
                  CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)&local_310);
                  lVar29 = local_310;
                  if (*(long*)( local_310 + 0x150 ) == 0) {
                     if (*(long*)( local_310 + 0x160 ) == 0) goto LAB_00108b4e;
                     uVar33 = *(ulong*)( *(long*)( local_310 + 0x160 ) + -8 );
                     if ((long)uVar33 < 1) goto LAB_00108b51;
                     CowData<RID>::_copy_on_write((CowData<RID>*)( local_310 + 0x160 ));
                     **(long**)( lVar29 + 0x160 ) = local_468;
                  }
 else {
                     *(long*)( local_310 + 0x150 ) = local_468;
                  }

                  uVar31 = RenderingDevice::get_singleton();
                  uVar33 = *(ulong*)( this + 0x8e8 );
                  if (*(long*)( this + 0x788 ) == 0) {
                     lVar29 = 0;
                     LAB_00108317:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 3, lVar29, "p_variant", "variant_defines.size()", "", false, false);
                     LAB_0010835d:uVar34 = 0;
                  }
 else {
                     lVar29 = *(long*)( *(long*)( this + 0x788 ) + -8 );
                     if (lVar29 < 4) goto LAB_00108317;
                     lVar29 = *(long*)( this + 0x798 );
                     if (lVar29 == 0) {
                        LAB_001083d3:lVar30 = 0;
                        LAB_001083d6:uVar33 = 3;
                        goto LAB_001081b3;
                     }

                     lVar30 = *(long*)( lVar29 + -8 );
                     if (lVar30 < 4) goto LAB_001083d6;
                     if (*(char*)( lVar29 + 3 ) != '\0') {
                        if (( uVar33 == 0 ) || ( *(uint*)( this + 0x844 ) <= (uint)uVar33 )) {
                           LAB_00108da5:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
                           uVar34 = 0;
                           goto LAB_001057cc;
                        }

                        lVar29 = ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x840 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x830 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x840 ) ) * 8 );
                        if (*(int*)( lVar29 + 0x98 ) != (int)( uVar33 >> 0x20 )) {
                           if (*(int*)( lVar29 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                           }

                           goto LAB_00108da5;
                        }

                        iVar27 = (int)lVar29;
                        if (*(char*)( lVar29 + 0x91 ) != '\0') {
                           ShaderRD::_initialize_version(pVVar3);
                           lVar30 = *(long*)( this + 0x7e8 );
                           if (lVar30 != 0) {
                              lVar36 = 0;
                              do {
                                 if (*(long*)( lVar30 + -8 ) <= lVar36) break;
                                 if (*(char*)( lVar30 + lVar36 ) == '\0') {
                                    ShaderRD::_allocate_placeholders(pVVar3, iVar27);
                                 }
 else {
                                    ShaderRD::_compile_version_start(pVVar3, iVar27);
                                 }

                                 lVar30 = *(long*)( this + 0x7e8 );
                                 lVar36 = lVar36 + 1;
                              }
 while ( lVar30 != 0 );
                           }

                        }

                        lVar36 = *(long*)( this + 0x7a8 );
                        if (lVar36 == 0) goto LAB_001083d3;
                        lVar30 = *(long*)( lVar36 + -8 );
                        if (lVar30 < 4) goto LAB_001083d6;
                        uVar33 = ( ulong ) * (uint*)( lVar36 + 0xc );
                        lVar36 = *(long*)( lVar29 + 0x68 );
                        if (lVar36 == 0) goto LAB_001083b0;
                        lVar30 = *(long*)( lVar36 + -8 );
                        if (lVar30 <= (long)uVar33) goto LAB_001081b3;
                        if (*(long*)( lVar36 + uVar33 * 8 ) != 0) {
                           ShaderRD::_compile_version_end(pVVar3, iVar27);
                        }

                        if (*(char*)( lVar29 + 0x90 ) != '\0') {
                           lVar29 = *(long*)( lVar29 + 0x88 );
                           if (lVar29 == 0) goto LAB_001083d3;
                           lVar30 = *(long*)( lVar29 + -8 );
                           if (3 < lVar30) {
                              uVar34 = *(undefined8*)( lVar29 + 0x18 );
                              goto LAB_001057cc;
                           }

                           goto LAB_001083d6;
                        }

                        goto LAB_0010835d;
                     }

                     _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
                     uVar34 = 0;
                  }

                  LAB_001057cc:uVar31 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar31, local_318, uVar34);
                  *(undefined8*)( this_01 + 0x1e0 ) = uVar31;
                  if (local_310 == 0) {
                     lVar29 = 0;
                     LAB_00108b76:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, 8, lVar29, "p_index", "size()", "", false, false);
                  }
 else {
                     lVar29 = *(long*)( local_310 + -8 );
                     if (lVar29 < 9) goto LAB_00108b76;
                     CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)&local_310);
                     if (local_310 == 0) {
                        lVar29 = -1;
                     }
 else {
                        lVar30 = *(long*)( local_310 + -8 ) + -1;
                        lVar29 = lVar30;
                        if (8 < lVar30) {
                           this_00 = (CowData<RID>*)( local_310 + 0x160 );
                           lVar29 = 8;
                           do {
                              *(undefined8*)( this_00 + -0x20 ) = *(undefined8*)( this_00 + 8 );
                              this_00[-0x18] = this_00[0x10];
                              *(undefined8*)( this_00 + -0x10 ) = *(undefined8*)( this_00 + 0x18 );
                              if (*(long*)this_00 != *(long*)( this_00 + 0x28 )) {
                                 CowData<RID>::_unref(this_00);
                                 uVar31 = *(undefined8*)( this_00 + 0x28 );
                                 *(undefined8*)( this_00 + 0x28 ) = 0;
                                 *(undefined8*)this_00 = uVar31;
                              }

                              lVar29 = lVar29 + 1;
                              this_00 = this_00 + 0x28;
                           }
 while ( lVar30 != lVar29 );
                        }

                     }

                     CowData<RenderingDevice::Uniform>::resize<false>((CowData<RenderingDevice::Uniform>*)&local_310, lVar29);
                  }

                  if (local_310 == 0) goto LAB_00108968;
                  uVar33 = *(ulong*)( local_310 + -8 );
                  if ((long)uVar33 < 8) goto LAB_0010896b;
                  CowData<RenderingDevice::Uniform>::_copy_on_write((CowData<RenderingDevice::Uniform>*)&local_310);
                  lVar29 = local_310;
                  if (*(long*)( local_310 + 0x128 ) == 0) {
                     if (*(long*)( local_310 + 0x138 ) == 0) goto LAB_00108b4e;
                     uVar33 = *(ulong*)( *(long*)( local_310 + 0x138 ) + -8 );
                     if ((long)uVar33 < 1) goto LAB_00108b51;
                     CowData<RID>::_copy_on_write((CowData<RID>*)( local_310 + 0x138 ));
                     **(long**)( lVar29 + 0x138 ) = local_468;
                  }
 else {
                     *(long*)( local_310 + 0x128 ) = local_468;
                  }

                  uVar31 = RenderingDevice::get_singleton();
                  uVar33 = *(ulong*)( this + 0x8e8 );
                  if (*(long*)( this + 0x788 ) == 0) {
                     lVar29 = 0;
                     LAB_0010836b:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar29, "p_variant", "variant_defines.size()", "", false, false);
                     LAB_001083a4:uVar34 = 0;
                  }
 else {
                     lVar29 = *(long*)( *(long*)( this + 0x788 ) + -8 );
                     if (lVar29 < 1) goto LAB_0010836b;
                     pcVar42 = *(char**)( this + 0x798 );
                     if (pcVar42 == (char*)0x0) {
                        LAB_001089d0:lVar30 = 0;
                        LAB_001089d3:uVar33 = 0;
                        goto LAB_001081b3;
                     }

                     lVar30 = *(long*)( pcVar42 + -8 );
                     if (lVar30 < 1) goto LAB_001089d3;
                     if (*pcVar42 != '\0') {
                        if (( uVar33 == 0 ) || ( *(uint*)( this + 0x844 ) <= (uint)uVar33 )) {
                           LAB_00108e4e:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
                           uVar34 = 0;
                           goto LAB_00105a35;
                        }

                        lVar29 = ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x840 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x830 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x840 ) ) * 8 );
                        if (*(int*)( lVar29 + 0x98 ) != (int)( uVar33 >> 0x20 )) {
                           if (*(int*)( lVar29 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x830 ));
                           }

                           goto LAB_00108e4e;
                        }

                        iVar27 = (int)lVar29;
                        if (*(char*)( lVar29 + 0x91 ) != '\0') {
                           ShaderRD::_initialize_version(pVVar3);
                           lVar30 = *(long*)( this + 0x7e8 );
                           if (lVar30 != 0) {
                              lVar36 = 0;
                              do {
                                 if (*(long*)( lVar30 + -8 ) <= lVar36) break;
                                 if (*(char*)( lVar30 + lVar36 ) == '\0') {
                                    ShaderRD::_allocate_placeholders(pVVar3, iVar27);
                                 }
 else {
                                    ShaderRD::_compile_version_start(pVVar3, iVar27);
                                 }

                                 lVar30 = *(long*)( this + 0x7e8 );
                                 lVar36 = lVar36 + 1;
                              }
 while ( lVar30 != 0 );
                           }

                        }

                        puVar7 = *(uint**)( this + 0x7a8 );
                        if (puVar7 == (uint*)0x0) goto LAB_001089d0;
                        lVar30 = *(long*)( puVar7 + -2 );
                        if (lVar30 < 1) goto LAB_001089d3;
                        uVar33 = ( ulong ) * puVar7;
                        lVar36 = *(long*)( lVar29 + 0x68 );
                        if (lVar36 == 0) goto LAB_001083b0;
                        lVar30 = *(long*)( lVar36 + -8 );
                        if (lVar30 <= (long)uVar33) goto LAB_001081b3;
                        if (*(long*)( lVar36 + uVar33 * 8 ) != 0) {
                           ShaderRD::_compile_version_end(pVVar3, iVar27);
                        }

                        if (*(char*)( lVar29 + 0x90 ) != '\0') {
                           puVar4 = *(undefined8**)( lVar29 + 0x88 );
                           if (puVar4 == (undefined8*)0x0) goto LAB_001089d0;
                           lVar30 = puVar4[-1];
                           if (0 < lVar30) {
                              uVar34 = *puVar4;
                              goto LAB_00105a35;
                           }

                           goto LAB_001089d3;
                        }

                        goto LAB_001083a4;
                     }

                     _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
                     uVar34 = 0;
                  }

                  LAB_00105a35:uVar31 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar31, local_318, uVar34);
                  *(undefined8*)( this_01 + 0x1d0 ) = uVar31;
                  goto LAB_00105a50;
               }

            }

            LAB_0010896b:lVar29 = 7;
            LAB_00108474:pcVar118 = "((Vector<T> *)(this))->_cowdata.size()";
            iVar27 = 0x38;
            pcVar42 = "./core/templates/vector.h";
            LAB_00107a4a:_err_print_index_error("operator[]", pcVar42, iVar27, lVar29, uVar33, "p_index", pcVar118, "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar8 = (code*)invalidInstructionException();
            ( *pcVar8 )();
         }

         LAB_00105a50:CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_300);
         CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_310);
         goto LAB_00105a65;
      }

      lVar29 = *(long*)( *(long*)( this + 0x788 ) + -8 );
      if (lVar29 < 5) goto LAB_0010823a;
      lVar29 = *(long*)( this + 0x798 );
      if (lVar29 == 0) {
         LAB_00108190:lVar30 = 0;
         LAB_00108193:uVar33 = 4;
         goto LAB_001081b3;
      }

      lVar30 = *(long*)( lVar29 + -8 );
      if (lVar30 < 5) goto LAB_00108193;
      if (*(char*)( lVar29 + 4 ) == '\0') {
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         uVar34 = 0;
         goto LAB_001053e4;
      }

      if (( uVar33 == 0 ) || ( *(uint*)( this + 0x844 ) <= (uint)uVar33 )) {
         LAB_001082e8:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         uVar34 = 0;
         goto LAB_001053e4;
      }

      lVar29 = *(long*)( *(long*)( this + 0x830 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x840 ) ) * 8 ) + ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x840 ) ) * 0xa0;
      if (*(int*)( lVar29 + 0x98 ) != (int)( uVar33 >> 0x20 )) {
         if (*(int*)( lVar29 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001082e8;
      }

      iVar27 = (int)lVar29;
      if (*(char*)( lVar29 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version(pVVar3);
         lVar30 = *(long*)( this + 0x7e8 );
         if (lVar30 != 0) {
            lVar36 = 0;
            do {
               if (*(long*)( lVar30 + -8 ) <= lVar36) break;
               if (*(char*)( lVar30 + lVar36 ) == '\0') {
                  ShaderRD::_allocate_placeholders(pVVar3, iVar27);
               }
 else {
                  ShaderRD::_compile_version_start(pVVar3, iVar27);
               }

               lVar30 = *(long*)( this + 0x7e8 );
               lVar36 = lVar36 + 1;
            }
 while ( lVar30 != 0 );
         }

      }

      lVar36 = *(long*)( this + 0x7a8 );
      if (lVar36 == 0) goto LAB_00108190;
      lVar30 = *(long*)( lVar36 + -8 );
      if (lVar30 < 5) goto LAB_00108193;
      uVar33 = ( ulong ) * (uint*)( lVar36 + 0x10 );
      lVar36 = *(long*)( lVar29 + 0x68 );
      if (lVar36 != 0) {
         lVar30 = *(long*)( lVar36 + -8 );
         if (lVar30 <= (long)uVar33) goto LAB_001081b3;
         if (*(long*)( lVar36 + uVar33 * 8 ) != 0) {
            ShaderRD::_compile_version_end(pVVar3, iVar27);
         }

         if (*(char*)( lVar29 + 0x90 ) != '\0') {
            lVar29 = *(long*)( lVar29 + 0x88 );
            if (lVar29 == 0) goto LAB_00108190;
            lVar30 = *(long*)( lVar29 + -8 );
            if (4 < lVar30) {
               uVar34 = *(undefined8*)( lVar29 + 0x20 );
               goto LAB_001053e4;
            }

            goto LAB_00108193;
         }

         goto LAB_00108276;
      }

      LAB_001083b0:lVar30 = 0;
      goto LAB_001081b3;
   }

   LAB_00105a65:fVar48 = (float)RendererSceneRender::environment_get_volumetric_fog_gi_inject(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   if (__LC139 < (double)fVar48) {
      cVar23 = RendererSceneRender::environment_get_sdfgi_enabled(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
      if (( cVar23 != '\0' ) && ( *(long*)( param_1 + 0x1c ) != 0 )) {
         if (*(long*)( this_01 + 0x1e8 ) == 0) {
            LAB_00108608:local_300 = 0;
            local_2f8 = _LC140;
            local_2e8 = *(undefined8*)( *(long*)( param_1 + 0x1a ) + 0x1690 );
            local_2f0 = 0;
            local_2c8 = _LC140;
            local_2d8[0] = 0;
            local_2c0 = local_2c0 & 0xffffffffffffff00;
            local_2a8[0] = 0;
            local_2b8 = local_2e8;
            Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
            CowData<RID>::_unref((CowData<RID>*)local_2a8);
            CowData<RID>::_unref((CowData<RID>*)local_2d8);
            local_2f0 = 0;
            local_2d8[0] = 0;
            local_2f8 = _LC118;
            local_2e8 = *(undefined8*)( *(long*)( param_1 + 0x1c ) + 0x288 );
            local_2c8 = _LC118;
            local_2c0 = local_2c0 & 0xffffffffffffff00;
            local_2a8[0] = 0;
            local_2b8 = local_2e8;
            Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
            CowData<RID>::_unref((CowData<RID>*)local_2a8);
            CowData<RID>::_unref((CowData<RID>*)local_2d8);
            local_2f0 = 0;
            local_2d8[0] = 0;
            local_2f8 = _LC119;
            local_2e8 = *(long*)( *(long*)( param_1 + 0x1c ) + 0x278 );
            local_2c8 = _LC119;
            local_2c0 = local_2c0 & 0xffffffffffffff00;
            local_2a8[0] = 0;
            local_2b8 = local_2e8;
            Vector<RenderingDevice::Uniform>::push_back(local_308, &local_2c8);
            CowData<RID>::_unref((CowData<RID>*)local_2a8);
            CowData<RID>::_unref((CowData<RID>*)local_2d8);
            uVar31 = RenderingDevice::get_singleton();
            uVar33 = *(ulong*)( this + 0x8e8 );
            if (*(long*)( this + 0x788 ) == 0) {
               lVar29 = 0;
               LAB_00108915:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 1, lVar29, "p_variant", "variant_defines.size()", "", false, false);
               LAB_00108951:uVar34 = 0;
            }
 else {
               lVar29 = *(long*)( *(long*)( this + 0x788 ) + -8 );
               if (lVar29 < 2) goto LAB_00108915;
               lVar29 = *(long*)( this + 0x798 );
               if (lVar29 == 0) {
                  LAB_00108cfe:lVar30 = 0;
                  LAB_00108d01:uVar33 = 1;
                  LAB_001081b3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar33, lVar30, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar8 = (code*)invalidInstructionException();
                  ( *pcVar8 )();
               }

               lVar30 = *(long*)( lVar29 + -8 );
               if (lVar30 < 2) goto LAB_00108d01;
               if (*(char*)( lVar29 + 1 ) != '\0') {
                  if (( uVar33 == 0 ) || ( *(uint*)( this + 0x844 ) <= (uint)uVar33 )) {
                     LAB_00108ee0:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
                     uVar34 = 0;
                     goto LAB_001088e3;
                  }

                  lVar29 = ( ( uVar33 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x840 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x830 ) + ( ( uVar33 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x840 ) ) * 8 );
                  if (*(int*)( lVar29 + 0x98 ) != (int)( uVar33 >> 0x20 )) {
                     uVar28 = *(int*)( lVar29 + 0x98 ) + 0x80000000;
                     if (uVar28 < 0x7fffffff) {
                        _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar28);
                     }

                     goto LAB_00108ee0;
                  }

                  pVVar3 = (Version*)( this + 0x770 );
                  iVar27 = (int)lVar29;
                  if (*(char*)( lVar29 + 0x91 ) != '\0') {
                     ShaderRD::_initialize_version(pVVar3);
                     lVar30 = *(long*)( this + 0x7e8 );
                     if (lVar30 != 0) {
                        lVar36 = 0;
                        do {
                           if (*(long*)( lVar30 + -8 ) <= lVar36) break;
                           if (*(char*)( lVar30 + lVar36 ) == '\0') {
                              ShaderRD::_allocate_placeholders(pVVar3, iVar27);
                           }
 else {
                              ShaderRD::_compile_version_start(pVVar3, iVar27);
                           }

                           lVar30 = *(long*)( this + 0x7e8 );
                           lVar36 = lVar36 + 1;
                        }
 while ( lVar30 != 0 );
                     }

                  }

                  lVar36 = *(long*)( this + 0x7a8 );
                  if (lVar36 == 0) goto LAB_00108cfe;
                  lVar30 = *(long*)( lVar36 + -8 );
                  if (lVar30 < 2) goto LAB_00108d01;
                  uVar33 = ( ulong ) * (uint*)( lVar36 + 4 );
                  lVar36 = *(long*)( lVar29 + 0x68 );
                  if (lVar36 == 0) goto LAB_001083b0;
                  lVar30 = *(long*)( lVar36 + -8 );
                  if (lVar30 <= (long)uVar33) goto LAB_001081b3;
                  if (*(long*)( lVar36 + uVar33 * 8 ) != 0) {
                     ShaderRD::_compile_version_end(pVVar3, iVar27);
                  }

                  if (*(char*)( lVar29 + 0x90 ) != '\0') {
                     lVar29 = *(long*)( lVar29 + 0x88 );
                     if (lVar29 == 0) goto LAB_00108cfe;
                     lVar30 = *(long*)( lVar29 + -8 );
                     if (1 < lVar30) {
                        uVar34 = *(undefined8*)( lVar29 + 8 );
                        goto LAB_001088e3;
                     }

                     goto LAB_00108d01;
                  }

                  goto LAB_00108951;
               }

               _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
               uVar34 = 0;
            }

            LAB_001088e3:uVar31 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar31, local_308, uVar34, 1, 0);
            *(undefined8*)( this_01 + 0x1e8 ) = uVar31;
            CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_300);
         }
 else {
            uVar31 = RenderingDevice::get_singleton();
            cVar25 = RenderingDevice::uniform_set_is_valid(uVar31, *(undefined8*)( this_01 + 0x1e8 ));
            if (cVar25 == '\0') goto LAB_00108608;
         }

         local_420 = 1;
         goto LAB_00105a94;
      }

   }

   local_420 = 0;
   cVar23 = '\0';
   LAB_00105a94:uVar49 = RendererSceneRender::environment_get_volumetric_fog_length(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   uVar34 = RendererSceneRenderRD::singleton;
   uVar31 = *(undefined8*)( param_1 + 0x20 );
   *(undefined4*)( this_01 + 0x188 ) = uVar49;
   uVar49 = RendererSceneRender::environment_get_volumetric_fog_detail_spread(uVar34, uVar31);
   *(undefined4*)( this_01 + 0x18c ) = uVar49;
   uVar31 = Projection::get_viewport_half_extents();
   fVar50 = (float)uVar31;
   fVar48 = (float)( (ulong)uVar31 >> 0x20 );
   uVar31 = Projection::get_far_plane_half_extents();
   fVar45 = (float)Projection::get_z_near();
   fVar46 = (float)Projection::get_z_far();
   fVar47 = (float)RendererSceneRender::environment_get_volumetric_fog_length(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   fVar45 = ( fVar47 - fVar45 ) / ( fVar46 - fVar45 );
   fVar67 = ( (float)uVar31 - fVar50 ) * fVar45 + fVar50;
   fVar45 = ( (float)( (ulong)uVar31 >> 0x20 ) - fVar48 ) * fVar45 + fVar48;
   cVar25 = Projection::is_orthogonal();
   local_178._4_4_ = fVar45;
   local_178._0_4_ = fVar67;
   if (cVar25 == '\0') {
      if (fVar48 <= _LC96) {
         fVar48 = _LC96;
      }

      local_178._4_4_ = fVar48;
      local_178._0_4_ = fVar50;
      if (fVar50 <= _LC96) {
         local_178._0_4_ = _LC96;
      }

   }

   local_178._12_4_ = fVar45;
   local_178._8_4_ = fVar67;
   fVar48 = (float)RendererSceneRender::environment_get_volumetric_fog_ambient_inject(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   fVar50 = (float)RendererSceneRender::environment_get_ambient_light_energy(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_168._8_4_ = fVar46;
   auVar98 = _local_168;
   local_168._4_4_ = fVar50 * fVar48;
   local_168._0_4_ = fVar47;
   stack0xfffffffffffffea0 = auVar98._8_8_;
   auVar117 = RendererSceneRender::environment_get_ambient_light(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   fVar48 = auVar117._8_4_;
   if (_LC141 <= fVar48) {
      fVar48 = powf((float)( ( (double)fVar48 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar48 = _LC142 * fVar48;
   }

   fVar50 = auVar117._0_4_;
   fVar45 = auVar117._4_4_;
   if (_LC141 <= fVar45) {
      fVar45 = powf((float)( ( (double)fVar45 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar45 = _LC142 * fVar45;
   }

   if (_LC141 <= fVar50) {
      fVar50 = powf((float)( ( (double)fVar50 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar50 = fVar50 * _LC142;
   }

   local_158 = CONCAT44(fVar45, fVar50);
   local_150 = fVar48;
   local_14c = RendererSceneRender::environment_get_ambient_sky_contribution(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_148 = *(ulong*)( this_01 + 0x17c );
   local_140 = *(undefined4*)( this_01 + 0x184 );
   local_13c = param_7;
   auVar117 = RendererSceneRender::environment_get_volumetric_fog_emission(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_478 = auVar117._8_4_;
   if (_LC141 <= local_478) {
      local_478 = powf((float)( ( (double)local_478 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      local_478 = local_478 * _LC142;
   }

   fVar48 = auVar117._0_4_;
   local_468._0_4_ = auVar117._4_4_;
   if (_LC141 <= (float)local_468) {
      local_468._0_4_ = powf((float)( ( (double)(float)local_468 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      local_468._0_4_ = (float)local_468 * _LC142;
   }

   if (_LC141 <= fVar48) {
      fVar48 = powf((float)( ( (double)fVar48 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar48 = fVar48 * _LC142;
   }

   fVar50 = (float)RendererSceneRender::environment_get_volumetric_fog_emission_energy(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_138 = CONCAT44(local_138._4_4_, fVar50 * fVar48);
   fVar48 = (float)RendererSceneRender::environment_get_volumetric_fog_emission_energy(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_138 = CONCAT44(fVar48 * (float)local_468, (undefined4)local_138);
   local_130 = (float)RendererSceneRender::environment_get_volumetric_fog_emission_energy(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_130 = local_130 * local_478;
   local_12c = RendererSceneRender::environment_get_volumetric_fog_density(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   auVar117 = RendererSceneRender::environment_get_volumetric_fog_scattering(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   fVar48 = auVar117._8_4_;
   if (_LC141 <= fVar48) {
      fVar48 = powf((float)( ( (double)fVar48 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar48 = _LC142 * fVar48;
   }

   fVar50 = auVar117._0_4_;
   fVar45 = auVar117._4_4_;
   if (_LC141 <= fVar45) {
      fVar45 = powf((float)( ( (double)fVar45 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar45 = _LC142 * fVar45;
   }

   if (_LC141 <= fVar50) {
      fVar50 = powf((float)( ( (double)fVar50 + __LC143 ) * __LC144 ), _LC145);
   }
 else {
      fVar50 = fVar50 * _LC142;
   }

   local_128 = CONCAT44(fVar45, fVar50);
   local_120 = fVar48;
   local_11c = RendererSceneRender::environment_get_volumetric_fog_anisotropy(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_118 = (float)RendererSceneRender::environment_get_volumetric_fog_detail_spread(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_114 = (float)RendererSceneRender::environment_get_volumetric_fog_gi_inject(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_dc = 0;
   local_cc = 0;
   local_bc = 0;
   local_e8 = CONCAT44((int)( ( ulong ) * (undefined8*)( param_3 + 2 ) >> 0x20 ), (int)*(undefined8*)param_3);
   local_e0 = param_3[6];
   uStack_15c = 0;
   local_d8 = param_3[1];
   local_d4 = param_3[4];
   local_d0 = param_3[7];
   local_c8 = CONCAT44(param_3[5], param_3[2]);
   local_c0 = param_3[8];
   fVar48 = (float)RendererSceneRender::environment_get_volumetric_fog_gi_inject(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_110 = 0.0;
   if (__LC146 < (double)fVar48) {
      local_110 = param_10;
   }

   if (*(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) == RendererCompositorRD::get_frame_number) {
      uVar28 = (uint)RendererCompositorRD::frame;
   }
 else {
      uVar28 = ( **(code**)( *RenderingServerGlobals::rasterizer + 0x88 ) )();
   }

   local_f0 = (float)( uVar28 & 0xf );
   Transform3D::operator *((Transform3D*)local_1e8, param_4);
   local_88 = CONCAT44(uStack_1c0, uStack_1c4);
   local_ac = 0;
   local_9c = 0;
   local_8c = 0;
   local_b8 = CONCAT44(afStack_1e0[1], SUB124(_local_1e8, 0));
   local_7c = 0x3f800000;
   local_b0 = fStack_1d0;
   local_a8 = local_1e8._4_4_;
   local_a4 = (undefined4)local_1d8;
   local_a0 = uStack_1cc;
   local_98 = afStack_1e0[0];
   local_94 = local_1d8._4_4_;
   local_90 = local_1c8;
   local_80 = uStack_1bc;
   bVar26 = RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   local_f4 = (float)(uint)bVar26;
   local_ec = RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection_amount(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   uVar28 = ClusterBuilderRD::get_cluster_size();
   local_100 = 0;
   if (uVar28 != 1) {
      do {
         local_100 = local_100 + 1;
         if (local_100 == 0x20) {
            local_100 = -1;
            break;
         }

      }
 while ( uVar28 != 1 << ( (byte)local_100 & 0x1f ) );
   }

   iVar27 = (int)( ( ulong ) * (undefined8*)param_1 >> 0x20 );
   local_108 = CONCAT44((float)iVar27, (float)(int)*(undefined8*)param_1);
   local_fc = ( ( uVar28 - 1 ) + *param_1 ) / uVar28;
   local_f8 = (float)( (uint)param_1[5] >> 5 );
   local_10c = ( ( ( uVar28 - 1 ) + iVar27 ) / uVar28 ) * local_fc * ( (int)local_f8 + 0x20 );
   RendererSceneRender::environment_get_sky_orientation(&local_278, RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   Basis::inverse();
   fVar45 = *param_3;
   fVar46 = param_3[1];
   fVar47 = param_3[3];
   local_6c = 0;
   fVar48 = param_3[8];
   local_5c = 0;
   fVar116 = (float)( ( ulong ) * (undefined8*)( param_3 + 2 ) >> 0x20 );
   fVar67 = param_3[4];
   fVar50 = param_3[6];
   local_258 = param_3[2] * fStack_230 + param_3[5] * fStack_22c + fVar48 * local_228;
   fVar60 = (float)uStack_240;
   local_78 = CONCAT44(uStack_240._4_4_ * (float)*(undefined8*)param_3 + local_238 * fVar116 + fStack_234 * (float)*(undefined8*)( param_3 + 6 ), (float)local_248 * (float)*(undefined8*)param_3 + local_248._4_4_ * fVar116 + fVar60 * (float)*(undefined8*)( param_3 + 6 ));
   local_278 = fVar50 * fVar60 + local_248._4_4_ * fVar47 + (float)local_248 * fVar45;
   fStack_274 = (float)( ( ulong ) * (undefined8*)( param_3 + 6 ) >> 0x20 ) * fVar60 + local_248._4_4_ * fVar67 + (float)local_248 * fVar46;
   fStack_270 = fVar48 * fVar60 + local_248._4_4_ * param_3[5] + (float)local_248 * param_3[2];
   fStack_26c = fVar50 * fStack_234 + local_238 * fVar47 + uStack_240._4_4_ * fVar45;
   local_268 = fVar67 * local_238 + uStack_240._4_4_ * fVar46 + fStack_234 * param_3[7];
   fStack_264 = param_3[5] * local_238 + uStack_240._4_4_ * param_3[2] + fStack_234 * fVar48;
   fStack_260 = fVar47 * fStack_22c + fStack_230 * fVar45 + local_228 * fVar50;
   fStack_25c = fVar67 * fStack_22c + fStack_230 * fVar46 + local_228 * param_3[7];
   local_4c = 0;
   local_70 = fStack_260;
   local_68 = fStack_274;
   local_64 = local_268;
   local_60 = fStack_25c;
   local_58 = fStack_270;
   local_54 = fStack_264;
   local_50 = local_258;
   uVar31 = RenderingDevice::get_singleton();
   local_2f8 = (char*)0x0;
   local_2c0 = 0x15;
   local_2c8 = "Render Volumetric Fog";
   local_248 = __LC99;
   uStack_240 = _UNK_0011d4f8;
   String::parse_latin1((StrRange*)&local_2f8);
   RenderingDevice::draw_command_begin_label(uVar31, (StrRange*)&local_2f8, &local_248);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
   plVar2 = RenderingServerGlobals::utilities;
   if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar8 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
      local_2f8 = (char*)0x0;
      local_2c8 = "Render Fog";
      local_2c0 = 10;
      String::parse_latin1((StrRange*)&local_2f8);
      ( *pcVar8 )(plVar2, (StrRange*)&local_2f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
   }

   uVar31 = RenderingDevice::get_singleton();
   RenderingDevice::buffer_update(uVar31, *(undefined8*)( this + 0x768 ), 0, 0x130, local_178);
   RenderingDevice::get_singleton();
   uVar31 = RenderingDevice::compute_list_begin();
   uVar34 = RenderingDevice::get_singleton();
   RenderingDevice::compute_list_bind_compute_pipeline(uVar34, uVar31, *(undefined8*)( this + (long)local_420 * 8 + 0x8f0 ));
   uVar34 = RenderingDevice::get_singleton();
   RenderingDevice::compute_list_bind_uniform_set(uVar34, uVar31, *(undefined8*)( this_01 + 0x1d0 ), 0);
   if (cVar23 != '\0') {
      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar34, uVar31, *(undefined8*)( this_01 + 0x1e8 ), 1);
   }

   lVar29 = RenderingDevice::get_singleton();
   uVar28 = (uint)uVar31;
   RenderingDevice::compute_list_dispatch_threads(lVar29, uVar28, *(uint*)( this_01 + 0x17c ), *(uint*)( this_01 + 0x180 ));
   lVar29 = RenderingDevice::get_singleton();
   RenderingDevice::compute_list_add_barrier(lVar29);
   cVar23 = RendererSceneRender::environment_get_volumetric_fog_temporal_reprojection(RendererSceneRenderRD::singleton, *(undefined8*)( param_1 + 0x20 ));
   if (cVar23 != '\0') {
      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline(uVar34, uVar31, *(undefined8*)( this + 0x910 ));
      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar34, uVar31, *(undefined8*)( this_01 + 0x1c8 ), 0);
      lVar29 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar29, uVar28, *(uint*)( this_01 + 0x17c ), *(uint*)( this_01 + 0x180 ));
      lVar29 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar29);
   }

   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   if ((char)param_1[6] != '\0') {
      uVar34 = RenderingDevice::get_singleton();
      local_2f8 = (char*)0x0;
      local_248 = __LC99;
      uStack_240 = _UNK_0011d4f8;
      local_2c8 = "Filter Fog";
      local_2c0 = 10;
      String::parse_latin1((StrRange*)&local_2f8);
      RenderingDevice::draw_command_begin_label(uVar34, (StrRange*)&local_2f8, &local_248);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
      plVar2 = RenderingServerGlobals::utilities;
      if ((char)RenderingServerGlobals::utilities[1] != '\0') {
         pcVar8 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
         local_2c8 = "Filter Fog";
         local_2f8 = (char*)0x0;
         local_2c0 = 10;
         String::parse_latin1((StrRange*)&local_2f8);
         ( *pcVar8 )(plVar2, (StrRange*)&local_2f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
      }

      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline(uVar34, uVar31, *(undefined8*)( this + 0x900 ));
      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar34, uVar31, *(undefined8*)( this_01 + 0x1d8 ), 0);
      lVar29 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar29, uVar28, *(uint*)( this_01 + 0x17c ), *(uint*)( this_01 + 0x180 ));
      RenderingDevice::get_singleton();
      RenderingDevice::compute_list_end();
      uStack_15c = 1;
      uVar31 = RenderingDevice::get_singleton();
      RenderingDevice::buffer_update(uVar31, *(undefined8*)( this + 0x768 ), 0, 0x130, local_178);
      RenderingDevice::get_singleton();
      uVar31 = RenderingDevice::compute_list_begin();
      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_compute_pipeline(uVar34, uVar31, *(undefined8*)( this + 0x900 ));
      uVar34 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_bind_uniform_set(uVar34, uVar31, *(undefined8*)( this_01 + 0x1e0 ), 0);
      lVar29 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_dispatch_threads(lVar29, (uint)uVar31, *(uint*)( this_01 + 0x17c ), *(uint*)( this_01 + 0x180 ));
      lVar29 = RenderingDevice::get_singleton();
      RenderingDevice::compute_list_add_barrier(lVar29);
      RenderingDevice::get_singleton();
      RenderingDevice::draw_command_end_label();
   }

   plVar2 = RenderingServerGlobals::utilities;
   if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar8 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
      local_2c8 = "Integrate Fog";
      local_2f8 = (char*)0x0;
      local_2c0 = 0xd;
      String::parse_latin1((StrRange*)&local_2f8);
      ( *pcVar8 )(plVar2, (StrRange*)&local_2f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
   }

   uVar34 = RenderingDevice::get_singleton();
   local_2f8 = (char*)0x0;
   local_2c8 = "Integrate Fog";
   local_248 = __LC99;
   uStack_240 = _UNK_0011d4f8;
   local_2c0 = 0xd;
   String::parse_latin1((StrRange*)&local_2f8);
   RenderingDevice::draw_command_begin_label(uVar34, (StrRange*)&local_2f8, &local_248);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
   uVar34 = RenderingDevice::get_singleton();
   RenderingDevice::compute_list_bind_compute_pipeline(uVar34, uVar31, *(undefined8*)( this + 0x908 ));
   uVar34 = RenderingDevice::get_singleton();
   RenderingDevice::compute_list_bind_uniform_set(uVar34, uVar31, *(undefined8*)( this_01 + 0x1d8 ), 0);
   lVar29 = RenderingDevice::get_singleton();
   RenderingDevice::compute_list_dispatch_threads(lVar29, (uint)uVar31, *(uint*)( this_01 + 0x17c ), *(uint*)( this_01 + 0x180 ));
   RenderingDevice::get_singleton();
   RenderingDevice::compute_list_end();
   plVar2 = RenderingServerGlobals::utilities;
   if ((char)RenderingServerGlobals::utilities[1] != '\0') {
      pcVar8 = *(code**)( *RenderingServerGlobals::utilities + 0x68 );
      local_2f8 = (char*)0x0;
      local_2c8 = "< Volumetric Fog";
      local_2c0 = 0x10;
      String::parse_latin1((StrRange*)&local_2f8);
      ( *pcVar8 )(plVar2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_2f8);
   }

   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   RenderingDevice::get_singleton();
   RenderingDevice::draw_command_end_label();
   cVar23 = RefCounted::unreference();
   if (cVar23 != '\0') {
      cVar23 = predelete_handler(this_01);
      if (cVar23 != '\0') {
         ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
         Memory::free_static(this_01, false);
      }

   }

   LAB_00106698:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00108f14:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::Fog::VolumetricFog::init(Vector3i const&, RID) */void RendererRD::Fog::VolumetricFog::init(VolumetricFog *this, undefined8 *param_1, undefined8 param_3) {
   long *plVar1;
   long lVar2;
   TextureFormat *pTVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   long local_d8;
   undefined8 local_d0;
   char *local_c8;
   ulong uStack_c0;
   undefined8 local_b8;
   undefined8 local_a8;
   undefined4 local_98;
   undefined8 local_94;
   undefined4 local_8c;
   undefined8 local_88;
   undefined8 local_80;
   undefined4 local_78;
   long local_68;
   undefined2 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   local_68 = 0;
   local_98 = 0x60;
   local_80 = 2;
   *(undefined4*)( this + 0x17c ) = *(undefined4*)param_1;
   *(undefined4*)( this + 0x180 ) = *(undefined4*)( (long)param_1 + 4 );
   *(undefined4*)( this + 0x184 ) = *(undefined4*)( param_1 + 1 );
   local_94 = *param_1;
   local_8c = *(undefined4*)( param_1 + 1 );
   local_88 = 0x100000001;
   local_78 = 0x88;
   pTVar3 = (TextureFormat*)RenderingDevice::get_singleton();
   local_d0 = 0;
   local_b8 = CONCAT44(local_b8._4_4_, 6);
   local_c8 = (char*)__LC152;
   uStack_c0 = _UNK_0011d508;
   uVar4 = RenderingDevice::texture_create(pTVar3, (TextureView*)&local_98, (Vector*)&local_c8);
   *(undefined8*)( this + 400 ) = uVar4;
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
   uVar4 = RenderingDevice::get_singleton();
   local_d8 = 0;
   uStack_c0 = 0x15;
   local_c8 = "Fog light-density map";
   String::parse_latin1((StrRange*)&local_d8);
   RenderingDevice::set_resource_name(uVar4, *(undefined8*)( this + 400 ), (StrRange*)&local_d8);
   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_78 = 0x109;
   pTVar3 = (TextureFormat*)RenderingDevice::get_singleton();
   local_d0 = 0;
   local_b8 = CONCAT44(local_b8._4_4_, 6);
   local_c8 = (char*)__LC152;
   uStack_c0 = _UNK_0011d508;
   uVar4 = RenderingDevice::texture_create(pTVar3, (TextureView*)&local_98, (Vector*)&local_c8);
   *(undefined8*)( this + 0x198 ) = uVar4;
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
   uVar4 = RenderingDevice::get_singleton();
   local_d8 = 0;
   uStack_c0 = 0x1e;
   local_c8 = "Fog previous light-density map";
   String::parse_latin1((StrRange*)&local_d8);
   RenderingDevice::set_resource_name(uVar4, *(undefined8*)( this + 0x198 ), (StrRange*)&local_d8);
   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   uVar4 = RenderingDevice::get_singleton();
   local_58 = (undefined1[16])0x0;
   RenderingDevice::texture_clear(uVar4, *(undefined8*)( this + 0x198 ), local_58, 0, 1, 0, 1);
   local_78 = 9;
   pTVar3 = (TextureFormat*)RenderingDevice::get_singleton();
   local_d0 = 0;
   local_b8 = CONCAT44(local_b8._4_4_, 6);
   local_c8 = (char*)__LC152;
   uStack_c0 = _UNK_0011d508;
   uVar4 = RenderingDevice::texture_create(pTVar3, (TextureView*)&local_98, (Vector*)&local_c8);
   *(undefined8*)( this + 0x1a0 ) = uVar4;
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
   uVar4 = RenderingDevice::get_singleton();
   local_c8 = "Fog map";
   local_d8 = 0;
   uStack_c0 = 7;
   String::parse_latin1((StrRange*)&local_d8);
   RenderingDevice::set_resource_name(uVar4, *(undefined8*)( this + 0x1a0 ), (StrRange*)&local_d8);
   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   local_98 = 0x61;
   local_78 = 0x108;
   pTVar3 = (TextureFormat*)RenderingDevice::get_singleton();
   local_d0 = 0;
   local_b8 = CONCAT44(local_b8._4_4_, 6);
   local_c8 = (char*)__LC152;
   uStack_c0 = _UNK_0011d508;
   uVar4 = RenderingDevice::texture_create(pTVar3, (TextureView*)&local_98, (Vector*)&local_c8);
   *(undefined8*)( this + 0x1a8 ) = uVar4;
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
   uVar4 = RenderingDevice::get_singleton();
   local_c8 = "Fog density map";
   local_d8 = 0;
   uStack_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_d8);
   RenderingDevice::set_resource_name(uVar4, *(undefined8*)( this + 0x1a8 ), (StrRange*)&local_d8);
   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   uVar4 = RenderingDevice::get_singleton();
   local_58 = (undefined1[16])0x0;
   RenderingDevice::texture_clear(uVar4, *(undefined8*)( this + 0x1a8 ), local_58, 0, 1, 0, 1);
   pTVar3 = (TextureFormat*)RenderingDevice::get_singleton();
   local_d0 = 0;
   local_b8 = CONCAT44(local_b8._4_4_, 6);
   local_c8 = (char*)__LC152;
   uStack_c0 = _UNK_0011d508;
   uVar4 = RenderingDevice::texture_create(pTVar3, (TextureView*)&local_98, (Vector*)&local_c8);
   *(undefined8*)( this + 0x1b0 ) = uVar4;
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
   uVar4 = RenderingDevice::get_singleton();
   local_c8 = "Fog light map";
   local_d8 = 0;
   uStack_c0 = 0xd;
   String::parse_latin1((StrRange*)&local_d8);
   RenderingDevice::set_resource_name(uVar4, *(undefined8*)( this + 0x1b0 ), (StrRange*)&local_d8);
   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   uVar4 = RenderingDevice::get_singleton();
   local_58 = (undefined1[16])0x0;
   RenderingDevice::texture_clear(uVar4, *(undefined8*)( this + 0x1b0 ), local_58, 0, 1, 0, 1);
   pTVar3 = (TextureFormat*)RenderingDevice::get_singleton();
   local_d0 = 0;
   local_b8 = CONCAT44(local_b8._4_4_, 6);
   local_c8 = (char*)__LC152;
   uStack_c0 = _UNK_0011d508;
   uVar4 = RenderingDevice::texture_create(pTVar3, (TextureView*)&local_98, (Vector*)&local_c8);
   *(undefined8*)( this + 0x1b8 ) = uVar4;
   CowData<Vector<unsigned_char>>::_unref((CowData<Vector<unsigned_char>>*)&local_d0);
   uVar4 = RenderingDevice::get_singleton();
   local_d8 = 0;
   uStack_c0 = 0x10;
   local_c8 = "Fog emissive map";
   String::parse_latin1((StrRange*)&local_d8);
   RenderingDevice::set_resource_name(uVar4, *(undefined8*)( this + 0x1b8 ), (StrRange*)&local_d8);
   lVar2 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   uVar4 = RenderingDevice::get_singleton();
   local_58 = (undefined1[16])0x0;
   RenderingDevice::texture_clear(uVar4, *(undefined8*)( this + 0x1b8 ), local_58, 0, 1, 0);
   uStack_c0 = uStack_c0 & 0xffffffffffffff00;
   local_d0 = 0;
   local_b8 = *(undefined8*)( this + 0x1a0 );
   local_c8 = (char*)0x2;
   local_a8 = 0;
   Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform>*)&local_d8, (Vector*)&local_c8);
   uVar4 = RenderingDevice::get_singleton();
   uVar4 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar4, (StrRange*)&local_d8, param_3, 3, 0);
   *(undefined8*)( this + 0x1f0 ) = uVar4;
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)&local_d0);
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* RendererRD::Fog::init_fog_shader(unsigned int, int, bool) */void RendererRD::Fog::init_fog_shader(Fog *this, uint param_1, int param_2, bool param_3) {
   Vector *pVVar1;
   char cVar2;
   undefined8 *puVar3;
   code *pcVar4;
   char *pcVar5;
   uint *puVar6;
   ulong uVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[8];
   long *plVar18;
   undefined8 uVar19;
   StrRange *pSVar20;
   ulong uVar21;
   long lVar22;
   long lVar23;
   long *plVar24;
   int iVar25;
   undefined8 uVar26;
   long lVar27;
   ulong uVar28;
   long in_FS_OFFSET;
   long local_240;
   long local_238;
   long local_230;
   long local_228;
   undefined1 local_220[16];
   undefined1 local_210[16];
   undefined8 local_200;
   undefined1 local_1f0[16];
   undefined1 local_1e0[16];
   undefined8 local_1d0;
   HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> local_1c8[8];
   undefined1 local_1c0[16];
   undefined1 local_1b0[16];
   undefined8 local_1a0;
   undefined1 local_190[16];
   undefined1 local_180[16];
   undefined8 local_170;
   undefined8 uStack_168;
   undefined8 local_160;
   undefined1 local_158[16];
   long local_148;
   undefined4 local_140;
   undefined2 local_13c;
   char *local_138;
   undefined1 local_130[8];
   ulong uStack_128;
   undefined1 local_120[16];
   ulong local_110;
   String local_108[8];
   undefined1 local_100[16];
   undefined1 local_f0[16];
   ulong local_e0;
   String local_d8[8];
   undefined1 local_d0[16];
   undefined1 local_c0[16];
   ulong local_b0;
   String local_a8[8];
   undefined1 local_a0[16];
   undefined1 local_90[16];
   ulong local_80;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined4 local_50;
   undefined2 local_4c;
   long local_40;
   local_220._8_8_ = local_220._0_8_;
   uStack_128 = (ulong)local_130;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar18 = (long*)RendererRD::MaterialStorage::get_singleton();
   local_228 = 0;
   local_138 = "\n";
   local_130 = (undefined1[8])0x1;
   String::parse_latin1((StrRange*)&local_228);
   itos((long)&local_230);
   operator+((char *)&
   local_138,(String*)"#define SAMPLERS_BINDING_FIRST_INDEX ";
   String::operator +((String*)&local_238, (String*)&local_138);
   pcVar5 = local_138;
   if (local_138 != (undefined*)0x0) {
      LOCK();
      plVar24 = (long*)( local_138 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_138 = (undefined*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar24 = (long*)( local_230 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   lVar22 = local_228;
   if (local_228 != 0) {
      LOCK();
      plVar24 = (long*)( local_228 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_228 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   auVar13._8_8_ = 0;
   auVar13._0_8_ = local_220._8_8_;
   local_220 = auVar13 << 0x40;
   local_138 = "";
   local_230 = 0;
   local_130 = (undefined1[8])0x0;
   String::parse_latin1((StrRange*)&local_230);
   Vector<String>::push_back((Vector<String>*)&local_228);
   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar24 = (long*)( local_230 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   pVVar1 = (Vector*)( this + 0x5c8 );
   local_130 = (undefined1[8])0x0;
   ShaderRD::initialize(pVVar1, (String*)&local_228, (Vector*)&local_238);
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)local_130);
   RendererRD::MaterialStorage::shader_set_data_request_function(plVar18, 4, _create_fog_shader_funcs);
   RendererRD::MaterialStorage::material_set_data_request_function(plVar18, 4, _create_fog_material_funcs);
   uVar19 = RenderingDevice::get_singleton();
   local_130 = (undefined1[8])0x0;
   uVar19 = RenderingDevice::uniform_buffer_create(uVar19, 0xc0, (String*)&local_138, 0);
   auVar17 = local_130;
   *(undefined8*)( this + 0x740 ) = uVar19;
   if (local_130 != (undefined1[8])0x0) {
      LOCK();
      plVar24 = (long*)( (long)local_130 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_130 = (undefined1[8])0x0;
         Memory::free_static((void*)( (long)auVar17 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)local_220);
   lVar22 = local_238;
   if (local_238 != 0) {
      LOCK();
      plVar24 = (long*)( local_238 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_238 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   local_13c = 0;
   local_220 = (undefined1[16])0x0;
   local_210 = (undefined1[16])0x0;
   local_1f0 = (undefined1[16])0x0;
   local_1e0 = (undefined1[16])0x0;
   local_1c0 = (undefined1[16])0x0;
   local_1b0 = (undefined1[16])0x0;
   local_190 = (undefined1[16])0x0;
   local_180 = (undefined1[16])0x0;
   local_170 = _LC33;
   uStack_168 = _UNK_0011d518;
   local_158 = (undefined1[16])0x0;
   local_200 = _LC33;
   local_1d0 = _LC33;
   local_1a0 = _LC33;
   local_160 = 0;
   local_148 = 0;
   local_140 = 0;
   StringName::StringName((StringName*)&local_230, "TIME", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x11;
   local_138 = "scene_params.time";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "PI", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x1e;
   local_138 = "3.1415926535897932384626433833";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "TAU", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x1e;
   local_138 = "6.2831853071795864769252867666";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "E", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x1e;
   local_138 = "2.7182818284590452353602874714";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "WORLD_POSITION", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x9;
   local_138 = "world.xyz";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "OBJECT_POSITION", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0xf;
   local_138 = "params.position";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "UVW", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x3;
   local_138 = "uvw";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "SIZE", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0xb;
   local_138 = "params.size";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "ALBEDO", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x6;
   local_138 = "albedo";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "DENSITY", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x7;
   local_138 = "density";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "EMISSION", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x8;
   local_138 = "emission";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "SDF", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)&local_228, (StringName*)&local_230);
   local_130 = (undefined1[8])0x3;
   local_138 = "sdf";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "SDF", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1c8, (StringName*)&local_230);
   local_130 = (undefined1[8])0x11;
   local_138 = "#define SDF_USED\n";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "DENSITY", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1c8, (StringName*)&local_230);
   local_130 = (undefined1[8])0x15;
   local_138 = "#define DENSITY_USED\n";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "ALBEDO", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1c8, (StringName*)&local_230);
   local_130 = (undefined1[8])0x14;
   local_138 = "#define ALBEDO_USED\n";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_230, "EMISSION", false);
   pSVar20 = (StrRange*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](local_1c8, (StringName*)&local_230);
   local_130 = (undefined1[8])0x16;
   local_138 = "#define EMISSION_USED\n";
   String::parse_latin1(pSVar20);
   if (( StringName::configured != '\0' ) && ( local_230 != 0 )) {
      StringName::unref();
   }

   local_130 = (undefined1[8])0x9;
   local_160 = _LC190;
   local_138 = "material.";
   String::parse_latin1((StrRange*)local_158);
   uStack_168 = 3;
   local_138 = "global_shader_uniforms.data";
   local_130 = (undefined1[8])0x1b;
   String::parse_latin1((StrRange*)( local_158 + 8 ));
   local_110 = 0;
   _local_130 = (undefined1[16])0x0;
   local_120 = (undefined1[16])0x0;
   uVar21 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_200 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_200 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar21 * 4 )) {
            local_110 = uVar21 & 0xffffffff;
            goto LAB_00109ff4;
         }

         uVar21 = uVar21 + 1;
      }
 while ( uVar21 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00109ff4:if (local_200._4_4_ != 0) {
      for (puVar3 = (undefined8*)local_210._0_8_; puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_230, (String*)&local_138, (bool)( (char)puVar3 + '\x10' ));
      }

   }

   local_e0 = 0;
   local_100 = (undefined1[16])0x0;
   local_f0 = (undefined1[16])0x0;
   uVar21 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_1d0 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_1d0 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar21 * 4 )) {
            local_e0 = uVar21 & 0xffffffff;
            goto LAB_0010a0aa;
         }

         uVar21 = uVar21 + 1;
      }
 while ( uVar21 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0010a0aa:if (( local_1d0._4_4_ != 0 ) && ( (long*)local_1e0._0_8_ != (long*)0x0 )) {
      plVar24 = (long*)local_1e0._0_8_;
      do {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_230, local_108, (bool)( (char)plVar24 + '\x10' ));
         plVar24 = (long*)*plVar24;
      }
 while ( plVar24 != (long*)0x0 );
   }

   local_b0 = 0;
   local_d0 = (undefined1[16])0x0;
   local_c0 = (undefined1[16])0x0;
   uVar21 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_1a0 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_1a0 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar21 * 4 )) {
            local_b0 = uVar21 & 0xffffffff;
            goto LAB_0010a17a;
         }

         uVar21 = uVar21 + 1;
      }
 while ( uVar21 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0010a17a:if (( local_1a0._4_4_ != 0 ) && ( (long*)local_1b0._0_8_ != (long*)0x0 )) {
      plVar24 = (long*)local_1b0._0_8_;
      do {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_230, local_d8, (bool)( (char)plVar24 + '\x10' ));
         plVar24 = (long*)*plVar24;
      }
 while ( plVar24 != (long*)0x0 );
   }

   local_80 = 0;
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   uVar21 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( local_170 & 0xffffffff ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( local_170 & 0xffffffff ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar21 * 4 )) {
            local_80 = uVar21 & 0xffffffff;
            goto LAB_0010a254;
         }

         uVar21 = uVar21 + 1;
      }
 while ( uVar21 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0010a254:if (( local_170._4_4_ != 0 ) && ( (long*)local_180._0_8_ != (long*)0x0 )) {
      plVar24 = (long*)local_180._0_8_;
      do {
         HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::insert((StringName*)&local_230, local_a8, (bool)( (char)plVar24 + '\x10' ));
         plVar24 = (long*)*plVar24;
      }
 while ( plVar24 != (long*)0x0 );
   }

   local_68 = 0;
   local_78 = uStack_168;
   local_70 = local_160;
   if (local_158._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)local_158);
   }

   local_60 = 0;
   if (local_158._8_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_158 + 8 ));
   }

   local_58 = 0;
   if (local_148 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_148);
   }

   local_50 = local_140;
   local_4c = local_13c;
   ShaderCompiler::initialize(this + 0xc0, (String*)&local_138);
   ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions((DefaultIdentifierActions*)&local_138);
   ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions((DefaultIdentifierActions*)&local_228);
   uVar19 = ( **(code**)( *plVar18 + 0x70 ) )(plVar18);
   *(undefined8*)( this + 0x748 ) = uVar19;
   ( **(code**)( *plVar18 + 0x78 ) )(plVar18, uVar19);
   pcVar4 = *(code**)( *plVar18 + 0x88 );
   local_228 = 0;
   local_138 = "\n// Default fog shader.\n\nshader_type fog;\n\nvoid fog() {\nDENSITY = 1.0;\nALBEDO = vec3(1.0);\n}\n";
   local_130 = (undefined1[8])0x5d;
   String::parse_latin1((StrRange*)&local_228);
   ( *pcVar4 )(plVar18, *(undefined8*)( this + 0x748 ), (StrRange*)&local_228);
   lVar22 = local_228;
   if (local_228 != 0) {
      LOCK();
      plVar24 = (long*)( local_228 + -0x10 );
      *plVar24 = *plVar24 + -1;
      UNLOCK();
      if (*plVar24 == 0) {
         local_228 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   uVar19 = ( **(code**)( *plVar18 + 200 ) )(plVar18);
   *(undefined8*)( this + 0x750 ) = uVar19;
   ( **(code**)( *plVar18 + 0xd0 ) )(plVar18, uVar19);
   plVar24 = plVar18;
   ( **(code**)( *plVar18 + 0xe8 ) )(plVar18, *(undefined8*)( this + 0x750 ), *(undefined8*)( this + 0x748 ));
   uVar21 = *(ulong*)( this + 0x750 );
   if (( uVar21 == 0 ) || ( *(uint*)( (long)plVar18 + 0x26c ) <= (uint)uVar21 )) {
      LAB_0010d228:/* WARNING: Does not return */pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar22 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( plVar18 + 0x4d ) ) * 0xc0 + *(long*)( plVar18[0x4b] + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( plVar18 + 0x4d ) ) * 8 );
   if (*(int*)( lVar22 + 0xb8 ) != (int)( uVar21 >> 0x20 )) {
      if (*(int*)( lVar22 + 0xb8 ) + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, plVar24);
      }

      goto LAB_0010d228;
   }

   if (*(int*)( lVar22 + 0x18 ) != 4) goto LAB_0010d228;
   uVar21 = *(ulong*)( *(long*)( *(long*)( lVar22 + 8 ) + 0xa8 ) + 0x78 );
   if (*(long*)( this + 0x5e0 ) == 0) {
      lVar22 = 0;
      LAB_0010afc7:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, 0, lVar22, "p_variant", "variant_defines.size()", "", false, false);
   }
 else {
      lVar22 = *(long*)( *(long*)( this + 0x5e0 ) + -8 );
      if (lVar22 < 1) goto LAB_0010afc7;
      pcVar5 = *(char**)( this + 0x5f0 );
      if (pcVar5 == (char*)0x0) {
         LAB_0010b0c0:lVar22 = 0;
         LAB_0010b0c3:uVar21 = 0;
         LAB_0010af21:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar21, lVar22, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      lVar22 = *(long*)( pcVar5 + -8 );
      if (lVar22 < 1) goto LAB_0010b0c3;
      if (*pcVar5 == '\0') {
         _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
         uVar19 = 0;
         goto LAB_0010a5c1;
      }

      if (( uVar21 == 0 ) || ( *(uint*)( this + 0x69c ) <= (uint)uVar21 )) {
         LAB_0010b090:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
         uVar19 = 0;
         goto LAB_0010a5c1;
      }

      lVar27 = ( ( uVar21 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x698 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x688 ) + ( ( uVar21 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x698 ) ) * 8 );
      if (*(int*)( lVar27 + 0x98 ) != (int)( uVar21 >> 0x20 )) {
         if (*(int*)( lVar27 + 0x98 ) + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_0010b090;
      }

      iVar25 = (int)lVar27;
      if (*(char*)( lVar27 + 0x91 ) != '\0') {
         ShaderRD::_initialize_version((Version*)pVVar1);
         lVar22 = *(long*)( this + 0x640 );
         if (lVar22 != 0) {
            lVar23 = 0;
            do {
               if (*(long*)( lVar22 + -8 ) <= lVar23) break;
               if (*(char*)( lVar22 + lVar23 ) == '\0') {
                  ShaderRD::_allocate_placeholders((Version*)pVVar1, iVar25);
               }
 else {
                  ShaderRD::_compile_version_start((Version*)pVVar1, iVar25);
               }

               lVar22 = *(long*)( this + 0x640 );
               lVar23 = lVar23 + 1;
            }
 while ( lVar22 != 0 );
         }

      }

      puVar6 = *(uint**)( this + 0x600 );
      if (puVar6 == (uint*)0x0) goto LAB_0010b0c0;
      lVar22 = *(long*)( puVar6 + -2 );
      if (lVar22 < 1) goto LAB_0010b0c3;
      uVar21 = ( ulong ) * puVar6;
      lVar23 = *(long*)( lVar27 + 0x68 );
      if (lVar23 == 0) {
         LAB_0010b130:lVar22 = 0;
         goto LAB_0010af21;
      }

      lVar22 = *(long*)( lVar23 + -8 );
      if (lVar22 <= (long)uVar21) goto LAB_0010af21;
      if (*(long*)( lVar23 + uVar21 * 8 ) == 0) {
         cVar2 = *(char*)( lVar27 + 0x90 );
      }
 else {
         ShaderRD::_compile_version_end((Version*)pVVar1, iVar25);
         cVar2 = *(char*)( lVar27 + 0x90 );
      }

      if (cVar2 != '\0') {
         puVar3 = *(undefined8**)( lVar27 + 0x88 );
         if (puVar3 == (undefined8*)0x0) goto LAB_0010b0c0;
         lVar22 = puVar3[-1];
         if (0 < lVar22) {
            uVar19 = *puVar3;
            goto LAB_0010a5c1;
         }

         goto LAB_0010b0c3;
      }

   }

   uVar19 = 0;
   LAB_0010a5c1:*(undefined8*)( this + 0x758 ) = uVar19;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = local_220._8_8_;
   local_220 = auVar14 << 0x40;
   RendererRD::MaterialStorage::get_singleton();
   uVar19 = RendererRD::MaterialStorage::global_shader_uniforms_get_storage_buffer();
   uStack_128 = uVar19;
   local_138 = (char*)_LC196;
   auVar8[0xf] = 0;
   auVar8._0_15_ = stack0xfffffffffffffed1;
   _local_130 = auVar8 << 8;
   local_120._8_8_ = 0;
   Vector<RenderingDevice::Uniform>::push_back((Vector<RenderingDevice::Uniform>*)&local_228, (String*)&local_138);
   RendererRD::MaterialStorage::Samplers::append_uniforms<Vector<RenderingDevice::Uniform>>((Vector*)( plVar18 + 1 ), (int)(StrRange*)&local_228);
   uVar19 = RenderingDevice::get_singleton();
   uVar19 = RenderingDevice::uniform_set_create<Vector<RenderingDevice::Uniform>>(uVar19, (StrRange*)&local_228, *(undefined8*)( this + 0x758 ), 0);
   *(undefined8*)( this + 0x760 ) = uVar19;
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)local_220);
   local_138 = "\n";
   local_228 = 0;
   local_130 = (undefined1[8])0x1;
   String::parse_latin1((StrRange*)&local_228);
   itos((long)&local_230);
   operator+((char *)&
   local_138,(String*)"\n#define MAX_DIRECTIONAL_LIGHT_DATA_STRUCTS ";
   String::operator +((String*)&local_240, (String*)&local_138);
   pcVar5 = local_138;
   if (local_138 != (undefined*)0x0) {
      LOCK();
      plVar18 = (long*)( local_138 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_138 = (undefined*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   lVar22 = local_228;
   if (local_228 != 0) {
      LOCK();
      plVar18 = (long*)( local_228 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_228 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   local_228 = 0;
   local_138 = ".0\n";
   local_130 = (undefined1[8])0x3;
   String::parse_latin1((StrRange*)&local_228);
   itos((long)&local_238);
   operator+((char *)&
   local_230,(String*)"\n#define MAX_SKY_LOD ";
   String::operator +((String*)&local_138, (String*)&local_230);
   String::operator +=((String*)&local_240, (String*)&local_138);
   pcVar5 = local_138;
   if (local_138 != (undefined*)0x0) {
      LOCK();
      plVar18 = (long*)( local_138 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_138 = (undefined*)0x0;
         Memory::free_static(pcVar5 + -0x10, false);
      }

   }

   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   lVar22 = local_238;
   if (local_238 != 0) {
      LOCK();
      plVar18 = (long*)( local_238 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_238 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   lVar22 = local_228;
   if (local_228 != 0) {
      LOCK();
      plVar18 = (long*)( local_228 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_228 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   if (param_3) {
      String::operator +=((String*)&local_240, "\n#define USE_RADIANCE_CUBEMAP_ARRAY \n");
   }

   auVar15._8_8_ = 0;
   auVar15._0_8_ = local_220._8_8_;
   local_220 = auVar15 << 0x40;
   local_138 = "\n#define MODE_DENSITY\n";
   local_230 = 0;
   local_130 = (undefined1[8])0x16;
   String::parse_latin1((StrRange*)&local_230);
   Vector<String>::push_back((Vector<String>*)&local_228);
   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   local_230 = 0;
   local_138 = "\n#define MODE_DENSITY\n#define ENABLE_SDFGI\n";
   local_130 = (undefined1[8])0x2b;
   String::parse_latin1((StrRange*)&local_230);
   Vector<String>::push_back((Vector<String>*)&local_228);
   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   local_230 = 0;
   local_138 = "\n#define MODE_FILTER\n";
   local_130 = (undefined1[8])0x15;
   String::parse_latin1((StrRange*)&local_230);
   Vector<String>::push_back((Vector<String>*)&local_228);
   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   local_230 = 0;
   local_138 = "\n#define MODE_FOG\n";
   local_130 = (undefined1[8])0x12;
   String::parse_latin1((StrRange*)&local_230);
   Vector<String>::push_back((Vector<String>*)&local_228);
   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   local_230 = 0;
   local_138 = "\n#define MODE_COPY\n";
   local_130 = (undefined1[8])0x13;
   String::parse_latin1((StrRange*)&local_230);
   Vector<String>::push_back((Vector<String>*)&local_228);
   lVar22 = local_230;
   if (local_230 != 0) {
      LOCK();
      plVar18 = (long*)( local_230 + -0x10 );
      *plVar18 = *plVar18 + -1;
      UNLOCK();
      if (*plVar18 == 0) {
         local_230 = 0;
         Memory::free_static((void*)( lVar22 + -0x10 ), false);
      }

   }

   uVar28 = 0;
   pVVar1 = (Vector*)( this + 0x770 );
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uStack_128;
   _local_130 = auVar16 << 0x40;
   ShaderRD::initialize(pVVar1, (String*)&local_228, (Vector*)&local_240);
   CowData<RenderingDevice::Uniform>::_unref((CowData<RenderingDevice::Uniform>*)local_130);
   uVar19 = ShaderRD::version_create();
   *(undefined8*)( this + 0x8e8 ) = uVar19;
   do {
      uVar19 = RenderingDevice::get_singleton();
      uVar7 = *(ulong*)( this + 0x8e8 );
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uStack_128;
      _local_130 = auVar9 << 0x40;
      if (*(long*)( this + 0x788 ) == 0) {
         lVar22 = 0;
         LAB_0010b0eb:_err_print_index_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa6, uVar28, lVar22, "p_variant", "variant_defines.size()", "", false, false);
         uVar26 = 0;
      }
 else {
         lVar22 = *(long*)( *(long*)( this + 0x788 ) + -8 );
         if (lVar22 <= (long)uVar28) goto LAB_0010b0eb;
         lVar27 = *(long*)( this + 0x798 );
         uVar21 = uVar28;
         if (lVar27 == 0) goto LAB_0010af00;
         lVar22 = *(long*)( lVar27 + -8 );
         if (lVar22 <= (long)uVar28) goto LAB_0010af21;
         if (*(char*)( lVar27 + uVar28 ) == '\0') {
            _err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xa7, "Condition \"!variants_enabled[p_variant]\" is true. Returning: RID()", 0, 0);
            uVar26 = 0;
            goto LAB_0010ac2b;
         }

         if (( uVar7 == 0 ) || ( *(uint*)( this + 0x844 ) <= (uint)uVar7 )) {
            LAB_0010b1a0:_err_print_error("version_get_shader", "./servers/rendering/renderer_rd/shader_rd.h", 0xaa, "Parameter \"version\" is null.", 0, 0);
            uVar26 = 0;
         }
 else {
            lVar27 = ( ( uVar7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x840 ) ) * 0xa0 + *(long*)( *(long*)( this + 0x830 ) + ( ( uVar7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x840 ) ) * 8 );
            if (*(int*)( lVar27 + 0x98 ) != (int)( uVar7 >> 0x20 )) {
               if (*(int*)( lVar27 + 0x98 ) + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_0010b1a0;
            }

            iVar25 = (int)lVar27;
            if (*(char*)( lVar27 + 0x91 ) != '\0') {
               ShaderRD::_initialize_version((Version*)pVVar1);
               lVar22 = *(long*)( this + 0x7e8 );
               if (lVar22 != 0) {
                  lVar23 = 0;
                  do {
                     if (*(long*)( lVar22 + -8 ) <= lVar23) break;
                     if (*(char*)( lVar22 + lVar23 ) == '\0') {
                        ShaderRD::_allocate_placeholders((Version*)pVVar1, iVar25);
                     }
 else {
                        ShaderRD::_compile_version_start((Version*)pVVar1, iVar25);
                     }

                     lVar22 = *(long*)( this + 0x7e8 );
                     lVar23 = lVar23 + 1;
                  }
 while ( lVar22 != 0 );
               }

            }

            lVar23 = *(long*)( this + 0x7a8 );
            if (lVar23 == 0) {
               LAB_0010af00:lVar22 = 0;
               uVar21 = uVar28;
               goto LAB_0010af21;
            }

            lVar22 = *(long*)( lVar23 + -8 );
            if (lVar22 <= (long)uVar28) goto LAB_0010af21;
            uVar21 = ( ulong ) * (uint*)( lVar23 + uVar28 * 4 );
            lVar23 = *(long*)( lVar27 + 0x68 );
            if (lVar23 == 0) goto LAB_0010b130;
            lVar22 = *(long*)( lVar23 + -8 );
            if (lVar22 <= (long)uVar21) goto LAB_0010af21;
            if (*(long*)( lVar23 + uVar21 * 8 ) == 0) {
               cVar2 = *(char*)( lVar27 + 0x90 );
            }
 else {
               ShaderRD::_compile_version_end((Version*)pVVar1, iVar25);
               cVar2 = *(char*)( lVar27 + 0x90 );
            }

            if (cVar2 == '\0') {
               uVar26 = 0;
            }
 else {
               lVar27 = *(long*)( lVar27 + 0x88 );
               if (lVar27 == 0) goto LAB_0010af00;
               lVar22 = *(long*)( lVar27 + -8 );
               uVar21 = uVar28;
               if (lVar22 <= (long)uVar28) goto LAB_0010af21;
               uVar26 = *(undefined8*)( lVar27 + uVar28 * 8 );
            }

         }

      }

      LAB_0010ac2b:uVar19 = RenderingDevice::compute_pipeline_create(uVar19, uVar26, (String*)&local_138);
      *(undefined8*)( this + ( (long)(int)uVar28 + 0x11e ) * 8 ) = uVar19;
      auVar17 = local_130;
      if (local_130 != (undefined1[8])0x0) {
         LOCK();
         plVar18 = (long*)( (long)local_130 + -0x10 );
         *plVar18 = *plVar18 + -1;
         UNLOCK();
         if (*plVar18 == 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uStack_128;
            _local_130 = auVar10 << 0x40;
            Memory::free_static((void*)( (long)auVar17 + -0x10 ), false);
         }

      }

      uVar28 = uVar28 + 1;
      if (uVar28 == 5) {
         uVar19 = RenderingDevice::get_singleton();
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uStack_128;
         _local_130 = auVar11 << 0x40;
         uVar19 = RenderingDevice::uniform_buffer_create(uVar19, 0x130, (String*)&local_138, 0);
         *(undefined8*)( this + 0x768 ) = uVar19;
         auVar17 = local_130;
         if (local_130 != (undefined1[8])0x0) {
            LOCK();
            plVar18 = (long*)( (long)local_130 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = uStack_128;
               _local_130 = auVar12 << 0x40;
               Memory::free_static((void*)( (long)auVar17 + -0x10 ), false);
            }

         }

         CowData<String>::_unref((CowData<String>*)local_220);
         lVar22 = local_240;
         if (local_240 != 0) {
            LOCK();
            plVar18 = (long*)( local_240 + -0x10 );
            *plVar18 = *plVar18 + -1;
            UNLOCK();
            if (*plVar18 == 0) {
               local_240 = 0;
               Memory::free_static((void*)( lVar22 + -0x10 ), false);
            }

         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

   }
 while ( true );
}
/* RendererRD::Fog::fog_volume_initialize(RID) */void RendererRD::Fog::fog_volume_initialize(Fog *this, undefined8 param_2) {
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   Dependency local_40[8];
   undefined1 local_38[16];
   undefined1 local_28[16];
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = (undefined1[16])0x0;
   local_58 = 0;
   local_50 = _LC13;
   local_48 = 0x340000000;
   local_18 = 2;
   local_28 = (undefined1[16])0x0;
   RID_Alloc<RendererRD::Fog::FogVolume,true>::initialize_rid((RID_Alloc<RendererRD::Fog::FogVolume,true>*)( this + 8 ), param_2, &local_58);
   Dependency::~Dependency(local_40);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x11d1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d1, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* RefCounted::_getv(StringName const&, Variant&) const */undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_setv(StringName const&, Variant const&) */undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_validate_propertyv(PropertyInfo&) const */void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RefCounted::_property_can_revertv(StringName const&) const */undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RefCounted::_notificationv(int, bool) */void RefCounted::_notificationv(int param_1, bool param_2) {
   return;
}
/* RendererRD::Fog::FogMaterialData::set_render_priority(int) */void RendererRD::Fog::FogMaterialData::set_render_priority(int param_1) {
   return;
}
/* RendererRD::Fog::FogMaterialData::set_next_pass(RID) */void RendererRD::Fog::FogMaterialData::set_next_pass(void) {
   return;
}
/* RendererRD::Fog::VolumetricFog::is_class_ptr(void*) const */uint RendererRD::Fog::VolumetricFog::is_class_ptr(VolumetricFog *this, void *param_1) {
   return (uint)CONCAT71(0x11d1, (undefined4*)param_1 == &RenderBufferCustomDataRD::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x113b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d1, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11d1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* RendererRD::Fog::VolumetricFog::_getv(StringName const&, Variant&) const */undefined8 RendererRD::Fog::VolumetricFog::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RendererRD::Fog::VolumetricFog::_setv(StringName const&, Variant const&) */undefined8 RendererRD::Fog::VolumetricFog::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RendererRD::Fog::VolumetricFog::_validate_propertyv(PropertyInfo&) const */void RendererRD::Fog::VolumetricFog::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* RendererRD::Fog::VolumetricFog::_property_can_revertv(StringName const&) const */undefined8 RendererRD::Fog::VolumetricFog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RendererRD::Fog::VolumetricFog::_property_get_revertv(StringName const&, Variant&) const */undefined8 RendererRD::Fog::VolumetricFog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RendererRD::Fog::VolumetricFog::_notificationv(int, bool) */void RendererRD::Fog::VolumetricFog::_notificationv(int param_1, bool param_2) {
   return;
}
/* RendererRD::Fog::VolumetricFog::configure(RenderSceneBuffersRD*) */void RendererRD::Fog::VolumetricFog::configure(RenderSceneBuffersRD *param_1) {
   return;
}
/* RendererRD::Fog::VolumetricFog::free_data() */void RendererRD::Fog::VolumetricFog::free_data(void) {
   return;
}
/* RendererCompositorRD::get_frame_number() const */undefined8 RendererCompositorRD::get_frame_number(void) {
   return frame;
}
/* VolumetricFogShaderRD::~VolumetricFogShaderRD() */void VolumetricFogShaderRD::~VolumetricFogShaderRD(VolumetricFogShaderRD *this) {
   *(undefined***)this = &PTR__VolumetricFogShaderRD_001138f8;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* VolumetricFogShaderRD::~VolumetricFogShaderRD() */void VolumetricFogShaderRD::~VolumetricFogShaderRD(VolumetricFogShaderRD *this) {
   *(undefined***)this = &PTR__VolumetricFogShaderRD_001138f8;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
}
/* VolumetricFogProcessShaderRD::~VolumetricFogProcessShaderRD() */void VolumetricFogProcessShaderRD::~VolumetricFogProcessShaderRD(VolumetricFogProcessShaderRD *this) {
   *(undefined***)this = &PTR__VolumetricFogProcessShaderRD_00113918;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   return;
}
/* VolumetricFogProcessShaderRD::~VolumetricFogProcessShaderRD() */void VolumetricFogProcessShaderRD::~VolumetricFogProcessShaderRD(VolumetricFogProcessShaderRD *this) {
   *(undefined***)this = &PTR__VolumetricFogProcessShaderRD_00113918;
   ShaderRD::~ShaderRD((ShaderRD*)this);
   operator_delete(this, 0x178);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00113798;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00113798;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* RendererRD::Fog::VolumetricFog::_get_class_namev() const */undefined8 *RendererRD::Fog::VolumetricFog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010bfe3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010bfe3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VolumetricFog");
         goto LAB_0010c04e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VolumetricFog");
   LAB_0010c04e:return &_get_class_namev();
}
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010c0c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010c0c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010c12e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010c12e:return &_get_class_namev();
}
/* RendererRD::Fog::VolumetricFog::get_class() const */void RendererRD::Fog::VolumetricFog::get_class(void) {
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
/* RefCounted::get_class() const */void RefCounted::get_class(void) {
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
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (StrRange*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (StrRange*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
      }

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

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
      }

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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010c52f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c52f:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010c5e3;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010c693;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010c693:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010c5e3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010c5e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::VolumetricFog::is_class(String const&) const */undefined8 RendererRD::Fog::VolumetricFog::is_class(VolumetricFog *this, String *param_1) {
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_0010c7cf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }

            }

         }
 else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      LAB_0010c7cf:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010c883;
   }

   cVar6 = String::operator ==((String*)param_1, "VolumetricFog");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010c943;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010c943:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010c883;
      }

      cVar6 = String::operator ==((String*)param_1, "RenderBufferCustomDataRD");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_0010c9ec;
      }

   }

   LAB_0010c883:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010c9ec:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_90 = 0;
   local_78 = "RefCounted";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RefCounted";
   local_98 = 0;
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010cb68:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010cb68;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010cb86;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010cb86:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)pLVar6;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
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

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::VolumetricFog::_initialize_classv() */void RendererRD::Fog::VolumetricFog::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_0010d04a;
   if (RenderBufferCustomDataRD::initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_58 = 0;
         local_40 = 6;
         local_48 = "Object";
         String::parse_latin1((StrRange*)&local_58);
         StringName::StringName((StringName*)&local_50, (StrRange*)&local_58, false);
         local_48 = "RefCounted";
         local_60 = 0;
         local_40 = 10;
         String::parse_latin1((StrRange*)&local_60);
         StringName::StringName((StringName*)&local_48, (StrRange*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
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

         if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
            StringName::unref();
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

         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (StrRange*)&local_58, false);
      local_48 = "RenderBufferCustomDataRD";
      local_60 = 0;
      local_40 = 0x18;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (StrRange*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
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
            RenderBufferCustomDataRD::initialize_class()::initialized =
            '\x01';
            goto LAB_0010cf4b;
         }

      }

      RenderBufferCustomDataRD::initialize_class()::initialized =
      '\x01';
   }

   LAB_0010cf4b:local_48 = "RenderBufferCustomDataRD";
   local_58 = 0;
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_58);
   StringName::StringName((StringName*)&local_50, (StrRange*)&local_58, false);
   local_48 = "VolumetricFog";
   local_60 = 0;
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_60);
   StringName::StringName((StringName*)&local_48, (StrRange*)&local_60, false);
   ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
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

   initialize_class()::initialized =
   '\x01';
   LAB_0010d04a:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
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
/* RendererRD::Fog::init_fog_shader(unsigned int, int, bool) [clone .cold] */void RendererRD::Fog::init_fog_shader(uint param_1, int param_2, bool param_3) {
   code *pcVar1;
   undefined7 in_register_00000011;
   undefined4 in_register_0000003c;
   if ((int)CONCAT71(in_register_00000011, param_3) + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, CONCAT44(in_register_0000003c, param_1));
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RenderBufferCustomDataRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void RenderBufferCustomDataRD::_get_property_listv(RenderBufferCustomDataRD *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "RenderBufferCustomDataRD";
   local_70 = 0x18;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RenderBufferCustomDataRD";
   local_98 = 0;
   local_70 = 0x18;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010d3e8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010d3e8;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010d405;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010d405:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
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

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "RenderBufferCustomDataRD", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RendererRD::Fog::VolumetricFog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void RendererRD::Fog::VolumetricFog::_get_property_listv(VolumetricFog *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VolumetricFog";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VolumetricFog";
   local_98 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010d838:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010d838;
      StringName::StringName((StringName*)&local_80, (CowData<char32_t>*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010d855;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010d855:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   *(undefined8*)( puVar5 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
   *puVar5 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
   puVar5[6] = local_60;
   if (*(long*)( puVar5 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
   }

   lVar3 = local_58;
   puVar5[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar5 + 0xc ) = 0;
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(long*)( puVar5 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar5;
   }

   plVar1[1] = (long)puVar5;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar5;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
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

   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   lVar2 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "VolumetricFog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         RenderBufferCustomDataRD::_get_property_listv((RenderBufferCustomDataRD*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */void ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   if (*(long*)( this + 0xe0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xe0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0xe0 );
         *(undefined8*)( this + 0xe0 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0xd8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xd8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0xd8 );
         *(undefined8*)( this + 0xd8 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0xd0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xd0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0xd0 );
         *(undefined8*)( this + 0xd0 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   pvVar5 = *(void**)( this + 0x98 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0xbc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa0 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0xa0 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x98 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar4 );
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010dc53;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_0010dc53:pvVar5 = *(void**)( this + 0x68 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x8c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x70 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x70 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x68 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar4 );
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010dd32;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_0010dd32:pvVar5 = *(void**)( this + 0x38 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x5c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x58 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x40 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x40 ) + lVar4 ) = 0;
                  if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                        *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x38 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010de0d;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_0010de0d:pvVar5 = *(void**)( this + 8 );
   if (pvVar5 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar2 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar4 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar4 ) != 0) {
               pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar4 ) = 0;
               if (*(long*)( (long)pvVar5 + 0x18 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x18 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( (long)pvVar5 + 0x18 );
                     *(undefined8*)( (long)pvVar5 + 0x18 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar5, false);
               pvVar5 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
            }

            lVar4 = lVar4 + 4;
         }
 while ( lVar4 != (ulong)uVar2 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar5 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* ShaderCompiler::IdentifierActions::~IdentifierActions() */void ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   bool bVar4;
   pvVar3 = *(void**)( this + 200 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xec ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0xd0 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 200 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010e10c;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }

   LAB_0010e10c:pvVar3 = *(void**)( this + 0x98 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xbc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa0 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0xa0 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x98 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010e1cc;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_0010e1cc:pvVar3 = *(void**)( this + 0x68 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x8c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x70 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x70 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x68 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010e283;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_0010e283:pvVar3 = *(void**)( this + 0x38 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x5c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x58 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x40 ) + lVar2 ) != 0) {
                  bVar4 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x40 ) + lVar2 ) = 0;
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x38 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010e32e;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_0010e32e:pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               bVar4 = StringName::configured != '\0';
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x0010e678) *//* WARNING: Removing unreachable block (ram,0x0010e7a8) *//* WARNING: Removing unreachable block (ram,0x0010e970) *//* WARNING: Removing unreachable block (ram,0x0010e7b4) *//* WARNING: Removing unreachable block (ram,0x0010e7be) *//* WARNING: Removing unreachable block (ram,0x0010e950) *//* WARNING: Removing unreachable block (ram,0x0010e7ca) *//* WARNING: Removing unreachable block (ram,0x0010e7d4) *//* WARNING: Removing unreachable block (ram,0x0010e930) *//* WARNING: Removing unreachable block (ram,0x0010e7e0) *//* WARNING: Removing unreachable block (ram,0x0010e7ea) *//* WARNING: Removing unreachable block (ram,0x0010e910) *//* WARNING: Removing unreachable block (ram,0x0010e7f6) *//* WARNING: Removing unreachable block (ram,0x0010e800) *//* WARNING: Removing unreachable block (ram,0x0010e8f0) *//* WARNING: Removing unreachable block (ram,0x0010e80c) *//* WARNING: Removing unreachable block (ram,0x0010e816) *//* WARNING: Removing unreachable block (ram,0x0010e8d0) *//* WARNING: Removing unreachable block (ram,0x0010e822) *//* WARNING: Removing unreachable block (ram,0x0010e82c) *//* WARNING: Removing unreachable block (ram,0x0010e8b0) *//* WARNING: Removing unreachable block (ram,0x0010e834) *//* WARNING: Removing unreachable block (ram,0x0010e84a) *//* WARNING: Removing unreachable block (ram,0x0010e856) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ShaderCompiler::Stage, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ShaderCompiler::Stage> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>>::operator [](HashMap<StringName,ShaderCompiler::Stage,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ShaderCompiler::Stage>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined4 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_0010f0a8:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_0010ef58;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010ef5c:if (iVar46 != 0) {
         LAB_0010ef64:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined4*)( puVar42 + 3 ) = 0;
                  goto LAB_0010eb5c;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_0010eb93;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010eb93;
   if (iVar46 != 0) goto LAB_0010ef64;
   LAB_0010ebb9:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010eb5c;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
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
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_0010eb5c;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_0010f0a8;
      LAB_0010ef58:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010ef5c;
   }

   LAB_0010eb93:if ((float)uVar40 * __LC60 < (float)( iVar46 + 1 )) goto LAB_0010ebb9;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';*(undefined4*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0010f06d;
   LAB_0010ee44:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_0010ee44;
   LAB_0010f06d:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010eb5c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, bool*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool*> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>>::operator [](HashMap<StringName,bool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool*>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined8 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_0010f818:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_0010f6c8;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010f6cc:if (iVar46 != 0) {
         LAB_0010f6d4:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  puVar42[3] = 0;
                  goto LAB_0010f2cc;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_0010f303;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_0010f303;
   if (iVar46 != 0) goto LAB_0010f6d4;
   LAB_0010f329:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010f2cc;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
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
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_0010f2cc;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_0010f818;
      LAB_0010f6c8:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010f6cc;
   }

   LAB_0010f303:if ((float)uVar40 * __LC60 < (float)( iVar46 + 1 )) goto LAB_0010f329;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';puVar42[3] = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_0010f7dd;
   LAB_0010f5b7:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_0010f5b7;
   LAB_0010f7dd:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010f2cc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* WARNING: Removing unreachable block (ram,0x0010fac0) *//* WARNING: Removing unreachable block (ram,0x0010fbf0) *//* WARNING: Removing unreachable block (ram,0x0010fd69) *//* WARNING: Removing unreachable block (ram,0x0010fbfc) *//* WARNING: Removing unreachable block (ram,0x0010fc06) *//* WARNING: Removing unreachable block (ram,0x0010fd4b) *//* WARNING: Removing unreachable block (ram,0x0010fc12) *//* WARNING: Removing unreachable block (ram,0x0010fc1c) *//* WARNING: Removing unreachable block (ram,0x0010fd2d) *//* WARNING: Removing unreachable block (ram,0x0010fc28) *//* WARNING: Removing unreachable block (ram,0x0010fc32) *//* WARNING: Removing unreachable block (ram,0x0010fd0f) *//* WARNING: Removing unreachable block (ram,0x0010fc3e) *//* WARNING: Removing unreachable block (ram,0x0010fc48) *//* WARNING: Removing unreachable block (ram,0x0010fcf1) *//* WARNING: Removing unreachable block (ram,0x0010fc54) *//* WARNING: Removing unreachable block (ram,0x0010fc5e) *//* WARNING: Removing unreachable block (ram,0x0010fcd3) *//* WARNING: Removing unreachable block (ram,0x0010fc66) *//* WARNING: Removing unreachable block (ram,0x0010fc70) *//* WARNING: Removing unreachable block (ram,0x0010fcb8) *//* WARNING: Removing unreachable block (ram,0x0010fc78) *//* WARNING: Removing unreachable block (ram,0x0010fc8e) *//* WARNING: Removing unreachable block (ram,0x0010fc9a) *//* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
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
/* RID_Alloc<RendererRD::Fog::FogVolume, true>::~RID_Alloc() */void RID_Alloc<RendererRD::Fog::FogVolume,true>::~RID_Alloc(RID_Alloc<RendererRD::Fog::FogVolume,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00113938;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_0010fefb:if ((uint)uVar4 < uVar8) goto LAB_0010ff3b;
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
            lVar7 = ( uVar6 % (ulong)uVar8 ) * 0x50 + puVar5[uVar6 / uVar8];
            if (-1 < *(int*)( lVar7 + 0x48 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x18 ));
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_0010fefb;
      }

      if (uVar8 != 0) goto LAB_0010ff3b;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_0010ff3b:if (puVar5 == (undefined8*)0x0) {
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
/* RID_Alloc<RendererRD::Fog::FogVolumeInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::Fog::FogVolumeInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::Fog::FogVolumeInstance,false> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00113958;
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
/* RID_Alloc<RendererRD::Fog::FogVolumeInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::Fog::FogVolumeInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::Fog::FogVolumeInstance,false> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00113958;
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
/* RID_Alloc<RendererRD::Fog::FogVolume, true>::~RID_Alloc() */void RID_Alloc<RendererRD::Fog::FogVolume,true>::~RID_Alloc(RID_Alloc<RendererRD::Fog::FogVolume,true> *this) {
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
   *(undefined***)this = &PTR__RID_Alloc_00113938;
   uVar8 = *(uint*)( this + 0x20 );
   if (uVar8 == 0) {
      uVar4 = ( ulong ) * (uint*)( this + 0x1c );
      uVar8 = *(uint*)( this + 0x18 );
      puVar5 = *(undefined8**)( this + 8 );
      LAB_0011049b:if ((uint)uVar4 < uVar8) goto LAB_001104db;
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
            lVar7 = ( uVar6 % (ulong)uVar8 ) * 0x50 + puVar5[uVar6 / uVar8];
            if (-1 < *(int*)( lVar7 + 0x48 )) {
               Dependency::~Dependency((Dependency*)( lVar7 + 0x18 ));
               uVar8 = *(uint*)( this + 0x18 );
               puVar5 = *(undefined8**)( this + 8 );
            }

            uVar4 = ( ulong ) * (uint*)( this + 0x1c );
            uVar6 = uVar6 + 1;
         }
 while ( uVar6 < uVar4 );
         goto LAB_0011049b;
      }

      if (uVar8 != 0) goto LAB_001104db;
      Memory::free_static((void*)*puVar5, false);
      Memory::free_static((void*)**(undefined8**)( this + 0x10 ), false);
   }

   puVar5 = *(undefined8**)( this + 8 );
   LAB_001104db:if (puVar5 != (undefined8*)0x0) {
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
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::Fog::FogVolume, true>::allocate_rid() */ulong RID_Alloc<RendererRD::Fog::FogVolume,true>::allocate_rid(RID_Alloc<RendererRD::Fog::FogVolume,true> *this) {
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
         goto LAB_001107b9;
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
   LAB_001107b9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RID_Alloc<RendererRD::Fog::FogVolumeInstance, false>::make_rid(RendererRD::Fog::FogVolumeInstance
   const&) */ulong RID_Alloc<RendererRD::Fog::FogVolumeInstance,false>::make_rid(RID_Alloc<RendererRD::Fog::FogVolumeInstance,false> *this, FogVolumeInstance *param_1) {
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
      LAB_00111140:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_00111140;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00111019:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00111019;
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
      goto LAB_00111196;
   }

   if (lVar10 == lVar7) {
      LAB_001110bf:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_00111196:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001110aa;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001110bf;
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
   LAB_001110aa:puVar9[-1] = param_1;
   return 0;
}
/* CowData<RID>::_unref() */void CowData<RID>::_unref(CowData<RID> *this) {
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
      LAB_00111490:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar7 == 0) goto LAB_00111490;
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
      LAB_001113fc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_00111391;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_001113fc;
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
   LAB_00111391:puVar9[-1] = param_1;
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
/* CowData<ShaderCompiler::GeneratedCode::Texture>::_unref() */void CowData<ShaderCompiler::GeneratedCode::Texture>::_unref(CowData<ShaderCompiler::GeneratedCode::Texture> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
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
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            lVar5 = 0;
            plVar4 = plVar1;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 5;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::_resize_and_rehash(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */CowData<char32_t> * __thiscallHashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> * this, StringName * param_1) * plVar1 ;uint *puVar2undefined8 *puVar3ulong __nlong lVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]uint uVar29uint uVar30undefined8 *puVar31undefined8 uVar32void *__s_00ulong uVar33long lVar34int iVar35long lVar36long lVar37long lVar38undefined8 *puVar39uint uVar40uint uVar41uint uVar42ulong uVar43long in_FS_OFFSETuint local_a8CowData<char32_t> *local_88long local_70undefined1 local_68[16]long local_58long local_50[2]long local_40lVar34 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar29);if (lVar34 == 0) {
   LAB_001120d8:local_70 = 0;
   uVar33 = uVar43 * 4;
   __n = uVar43 * 8;
   uVar32 = Memory::alloc_static(uVar33, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar43 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
         uVar33 = 0;
         do {
            *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
            uVar33 = uVar33 + 1;
         }
 while ( uVar43 != uVar33 );
      }
 else {
         memset(__s, 0, uVar33);
         memset(__s_00, 0, __n);
      }

      LAB_00111cf1:iVar35 = *(int*)( this + 0x2c );
      if (iVar35 != 0) {
         LAB_00111cfd:uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar33 = CONCAT44(0, uVar29);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar30 = StringName::get_empty_hash();
         }
 else {
            uVar30 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar30 == 0) {
            uVar30 = 1;
         }

         uVar42 = 0;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar30 * lVar34;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar33;
         lVar37 = SUB168(auVar9 * auVar21, 8);
         uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
         uVar41 = SUB164(auVar9 * auVar21, 8);
         if (uVar40 != 0) {
            do {
               if (( uVar40 == uVar30 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar37 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar34 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  if (*(long*)( lVar34 + 0x18 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar34 + 0x18 ), (CowData*)&local_70);
                     lVar34 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  }

                  goto LAB_00111c98;
               }

               uVar42 = uVar42 + 1;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(uVar41 + 1) * lVar34;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar33;
               lVar37 = SUB168(auVar10 * auVar22, 8);
               uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
               uVar41 = SUB164(auVar10 * auVar22, 8);
            }
 while ( ( uVar40 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar40 * lVar34,auVar23._8_8_ = 0,auVar23._0_8_ = uVar33,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar29 + uVar41 ) - SUB164(auVar11 * auVar23, 8)) * lVar34,auVar24._8_8_ = 0,auVar24._0_8_ = uVar33,uVar42 <= SUB164(auVar12 * auVar24, 8) );
         }

         iVar35 = *(int*)( this + 0x2c );
      }

      goto LAB_00111dfc;
   }

   iVar35 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00111dfc;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_00111cfd;
   LAB_00111e1e:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      lVar34 = 0;
      LAB_00111c98:local_88 = (CowData<char32_t>*)( lVar34 + 0x18 );
      goto LAB_00111ca1;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar30 = StringName::get_empty_hash();
         lVar34 = *(long*)( this + 8 );
      }
 else {
         uVar30 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar30 == 0) {
         uVar30 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar36 = SUB168(auVar5 * auVar17, 8);
      uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
      uVar41 = SUB164(auVar5 * auVar17, 8);
      if (uVar40 != 0) {
         uVar42 = 0;
         do {
            if (( uVar40 == uVar30 ) && ( *(long*)( *(long*)( lVar34 + lVar36 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar34 = *(long*)( lVar34 + (ulong)uVar41 * 8 );
               goto LAB_00111c98;
            }

            uVar42 = uVar42 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar41 + 1) * lVar37;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar43;
            lVar36 = SUB168(auVar6 * auVar18, 8);
            uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
            uVar41 = SUB164(auVar6 * auVar18, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar40 * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar41 + uVar29 ) - SUB164(auVar7 * auVar19, 8)) * lVar37,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar42 <= SUB164(auVar8 * auVar20, 8) );
      }

      local_70 = 0;
      uVar43 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar34 == 0) goto LAB_001120d8;
      goto LAB_00111cf1;
   }

   local_70 = 0;
   iVar35 = 0;
   LAB_00111dfc:if ((float)uVar43 * __LC60 < (float)( iVar35 + 1 )) goto LAB_00111e1e;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);local_50[0] = 0;puVar31 = (undefined8*)operator_new(0x20, "");*puVar31 = local_68._0_8_;puVar31[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar31 + 2 ), (StringName*)&local_58);puVar31[3] = 0;local_88 = (CowData<char32_t>*)( puVar31 + 3 );if (( local_50[0] == 0 ) || ( CowData<char32_t>::_ref(local_88, (CowData*)local_50),lVar34 = local_50[0],local_50[0] == 0 )) {
   lVar37 = 0;
}
 else {
   LOCK();
   plVar1 = (long*)( local_50[0] + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   lVar37 = local_70;
   if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void*)( lVar34 + -0x10 ), false);
      lVar37 = local_70;
   }

}
if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar39 = *(undefined8**)( this + 0x20 );if (puVar39 == (undefined8*)0x0) {
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar31;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 == 0) goto LAB_001120a5;
   LAB_00111f12:uVar29 = *(uint*)( lVar34 + 0x20 );
}
 else {
   *puVar39 = puVar31;
   puVar31[1] = puVar39;
   lVar34 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar31;
   if (lVar34 != 0) goto LAB_00111f12;
   LAB_001120a5:uVar29 = StringName::get_empty_hash();
}
lVar34 = *(long*)( this + 0x10 );if (uVar29 == 0) {
   uVar29 = 1;
}
uVar43 = (ulong)uVar29;uVar41 = 0;lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar33 = CONCAT44(0, uVar30);auVar13._8_8_ = 0;auVar13._0_8_ = uVar43 * lVar36;auVar25._8_8_ = 0;auVar25._0_8_ = uVar33;lVar38 = SUB168(auVar13 * auVar25, 8);lVar4 = *(long*)( this + 8 );puVar2 = (uint*)( lVar34 + lVar38 * 4 );iVar35 = SUB164(auVar13 * auVar25, 8);uVar40 = *puVar2;while (uVar40 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar40 * lVar36;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar33;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( iVar35 + uVar30 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar33;
   local_a8 = SUB164(auVar15 * auVar27, 8);
   puVar39 = puVar31;
   if (local_a8 < uVar41) {
      *puVar2 = (uint)uVar43;
      uVar43 = (ulong)uVar40;
      puVar3 = (undefined8*)( lVar4 + lVar38 * 8 );
      puVar39 = (undefined8*)*puVar3;
      *puVar3 = puVar31;
      uVar41 = local_a8;
   }

   uVar29 = (uint)uVar43;
   uVar41 = uVar41 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar33;
   lVar38 = SUB168(auVar16 * auVar28, 8);
   puVar2 = (uint*)( lVar34 + lVar38 * 4 );
   iVar35 = SUB164(auVar16 * auVar28, 8);
   puVar31 = puVar39;
   uVar40 = *puVar2;
}
;*(undefined8**)( lVar4 + lVar38 * 8 ) = puVar31;*puVar2 = uVar29;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (lVar37 != 0) {
   LOCK();
   plVar1 = (long*)( lVar37 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_70 + -0x10 ), false);
   }

}
LAB_00111ca1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_88;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */StringName *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName *param_1,String *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   long lVar5;
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
   ulong uVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   undefined8 uVar26;
   void *__s_00;
   CowData *in_RCX;
   uint uVar27;
   int iVar28;
   undefined7 in_register_00000011;
   StringName *pSVar29;
   long lVar30;
   long lVar31;
   ulong uVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   long *plVar36;
   long in_FS_OFFSET;
   long *local_80;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar29 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar32 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar26 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar22 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_00112222;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00112339;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0011222e;
      LAB_0011235b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_0011252b;
      }

      _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00112222:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0011222e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar29 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar29 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar25;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar32;
         lVar30 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
         uVar27 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ) == *(long*)pSVar29 )) {
                  local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  if (local_80[3] != *(long*)in_RCX) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( local_80 + 3 ), in_RCX);
                     local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  }

                  goto LAB_0011252b;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar32;
               lVar30 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar27 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar27 ) - SUB164(auVar8 * auVar16, 8)) * lVar25,auVar17._8_8_ = 0,auVar17._0_8_ = uVar32,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar28 = *(int*)( param_2 + 0x2c );
      }

      LAB_00112339:if ((float)uVar23 * __LC60 < (float)( iVar28 + 1 )) goto LAB_0011235b;
   }

   StringName::StringName((StringName*)&local_58, pSVar29);
   local_50[0] = 0;
   if (*(long*)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_50, in_RCX);
   }

   local_80 = (long*)operator_new(0x20, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName*)( local_80 + 2 ), (StringName*)&local_58);
   local_80[3] = 0;
   if (( local_50[0] != 0 ) && ( CowData<char32_t>::_ref((CowData<char32_t>*)( local_80 + 3 ), (CowData*)local_50),lVar25 = local_50[0],local_50[0] != 0 )) {
      LOCK();
      plVar1 = (long*)( local_50[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50[0] = 0;
         Memory::free_static((void*)( lVar25 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = local_80;
      *(long**)( param_2 + 0x20 ) = local_80;
      LAB_0011244c:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_00112459;
      LAB_00112581:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = local_80;
         local_80[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_0011244c;
      }

      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_00112581;
      LAB_00112459:uVar23 = *(uint*)( lVar25 + 0x20 );
   }

   lVar25 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar32 = (ulong)uVar23;
   uVar33 = 0;
   lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar32 * lVar30;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar31 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar25 + lVar31 * 4 );
   iVar28 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = local_80;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( iVar28 + uVar3 ) - SUB164(auVar11 * auVar19, 8)) * lVar30;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar36 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar32;
         uVar32 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar31 * 8 );
         plVar36 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar32;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar28 + 1) * lVar30;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar31 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar25 + lVar31 * 4 );
      iVar28 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar36;
      uVar24 = *puVar2;
   }
;
   *(long**)( lVar5 + lVar31 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011252b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void memdelete<HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > >
   >(HashMapElement<StringName, HashMap<int, RID, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int, RID> > > >*) */void memdelete<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>(HashMapElement *param_1) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( param_1 + 0x20 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( param_1 + 0x44 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x40 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( param_1 + 0x44 ) = 0;
            *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x28 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( param_1 + 0x28 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( param_1 + 0x20 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( param_1 + 0x44 ) = 0;
            *(undefined1(*) [16])( param_1 + 0x30 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00112777;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( param_1 + 0x28 ), false);
   }

   LAB_00112777:if (( StringName::configured != '\0' ) && ( *(long*)( param_1 + 0x10 ) != 0 )) {
      StringName::unref();
   }

   Memory::free_static(param_1, false);
   return;
}
/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */void RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   *(undefined8**)this = &RenderingServerGlobals::utilities;
   pvVar5 = *(void**)( this + 0x48 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x6c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x68 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x6c ) = 0;
            *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x50 ) + lVar4 ) != 0) {
                  *(int*)( *(long*)( this + 0x50 ) + lVar4 ) = 0;
                  memdelete<HashMapElement<StringName,HashMap<int,RID,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,RID>>>>>(*(HashMapElement**)( (long)pvVar5 + lVar4 * 2 ));
                  pvVar5 = *(void**)( this + 0x48 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar4 );
            *(undefined4*)( this + 0x6c ) = 0;
            *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00112869;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x50 ), false);
   }

   LAB_00112869:pvVar5 = *(void**)( this + 0x18 );
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
                  if (*(long*)( (long)pvVar5 + 0x88 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x88 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x88 );
                        *(undefined8*)( (long)pvVar5 + 0x88 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x80 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x80 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x80 );
                        *(undefined8*)( (long)pvVar5 + 0x80 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  CowData<String>::_unref((CowData<String>*)( (long)pvVar5 + 0x70 ));
                  if (*(long*)( (long)pvVar5 + 0x40 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x40 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x40 );
                        *(undefined8*)( (long)pvVar5 + 0x40 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
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
            if (pvVar5 == (void*)0x0) goto LAB_001129af;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001129af:if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* RendererRD::MaterialStorage::ShaderData::~ShaderData() */void RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this) {
   ~ShaderData(this)
   ;;
   operator_delete(this, 0x70);
   return;
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
      LAB_00112da0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar11 == 0) goto LAB_00112da0;
   if (param_1 <= lVar8) {
      lVar8 = *(long*)this;
      uVar10 = param_1;
      while (lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            LAB_00112c31:if (lVar11 != lVar9) {
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
            if (*(ulong*)( lVar8 + -8 ) <= uVar10) goto LAB_00112c31;
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
      goto LAB_00112df6;
   }

   if (lVar11 == lVar9) {
      LAB_00112d13:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_00112df6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar7[-1];
      if (param_1 <= lVar8) goto LAB_00112cf0;
   }
 else {
      if (lVar8 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00112d13;
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

   uVar4 = _LC95;
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
   LAB_00112cf0:puVar7[-1] = param_1;
   return 0;
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
            goto LAB_00112e46;
         }

         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         uVar32 = param_2[0xb];
         lVar36 = *plVar28;
         goto LAB_00112e51;
      }

      uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_00112e51;
   }
 else {
      LAB_00112e46:uVar32 = param_2[0xb];
      lVar36 = *plVar28;
      LAB_00112e51:if (uVar32 != 0) {
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
                  goto LAB_00113118;
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

   if ((float)uVar2 * __LC60 < (float)( uVar32 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pDVar25 = (DependencyTracker*)0x0;
         goto LAB_00113118;
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
   LAB_00113118:*param_1 = pDVar25;
   return;
}
/* RID_Alloc<RendererRD::Fog::FogVolume, true>::initialize_rid(RID, RendererRD::Fog::FogVolume
   const&) */void RID_Alloc<RendererRD::Fog::FogVolume,true>::initialize_rid(RID_Alloc<RendererRD::Fog::FogVolume,true> *this, ulong param_2, undefined8 *param_3) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   undefined8 *puVar5;
   uint uVar6;
   long in_FS_OFFSET;
   DependencyTracker *pDStack_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x1c )) {
         puVar5 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x50 + *(long*)( *(long*)( this + 8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x18 ) ) * 8 ) );
         if ((int)*(uint*)( puVar5 + 9 ) < 0) {
            uVar6 = ( uint )(param_2 >> 0x20);
            if (uVar6 == ( *(uint*)( puVar5 + 9 ) & 0x7fffffff )) {
               uVar2 = *param_3;
               *(uint*)( puVar5 + 9 ) = uVar6;
               *puVar5 = uVar2;
               puVar5[1] = param_3[1];
               *(undefined4*)( puVar5 + 2 ) = *(undefined4*)( param_3 + 2 );
               uVar1 = *(undefined4*)( (long)param_3 + 0x14 );
               puVar5[8] = 0;
               *(undefined4*)( (long)puVar5 + 0x14 ) = uVar1;
               uVar6 = *(uint*)( param_3 + 8 );
               *(undefined1(*) [16])( puVar5 + 4 ) = (undefined1[16])0x0;
               uVar6 = *(uint*)( hash_table_size_primes + (ulong)uVar6 * 4 );
               *(undefined1(*) [16])( puVar5 + 6 ) = (undefined1[16])0x0;
               lVar3 = 1;
               if (5 < uVar6) {
                  do {
                     if (uVar6 <= *(uint*)( hash_table_size_primes + lVar3 * 4 )) {
                        *(int*)( puVar5 + 8 ) = (int)lVar3;
                        goto LAB_00113338;
                     }

                     lVar3 = lVar3 + 1;
                  }
 while ( lVar3 != 0x1d );
                  _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
               }

               LAB_00113338:if (( *(int*)( (long)param_3 + 0x44 ) != 0 ) && ( plVar4 = (long*)param_3[6] ),plVar4 != (long*)0x0) {
                  do {
                     HashMap<DependencyTracker*,unsigned_int,HashMapHasherDefault,HashMapComparatorDefault<DependencyTracker*>,DefaultTypedAllocator<HashMapElement<DependencyTracker*,unsigned_int>>>::insert(&pDStack_28, (uint*)( puVar5 + 3 ), (bool)( (char)plVar4 + '\x10' ));
                     plVar4 = (long*)*plVar4;
                  }
 while ( plVar4 != (long*)0x0 );
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00113440;
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

   LAB_00113440:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RendererRD::MaterialStorage::ShaderData::~ShaderData() */void RendererRD::MaterialStorage::ShaderData::~ShaderData(ShaderData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::Fog::FogVolumeInstance, false>::~RID_Alloc() */void RID_Alloc<RendererRD::Fog::FogVolumeInstance,false>::~RID_Alloc(RID_Alloc<RendererRD::Fog::FogVolumeInstance,false> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RID_Alloc<RendererRD::Fog::FogVolume, true>::~RID_Alloc() */void RID_Alloc<RendererRD::Fog::FogVolume,true>::~RID_Alloc(RID_Alloc<RendererRD::Fog::FogVolume,true> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderCompiler::IdentifierActions::~IdentifierActions() */void ShaderCompiler::IdentifierActions::~IdentifierActions(IdentifierActions *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions() */void ShaderCompiler::DefaultIdentifierActions::~DefaultIdentifierActions(DefaultIdentifierActions *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VolumetricFogProcessShaderRD::~VolumetricFogProcessShaderRD() */void VolumetricFogProcessShaderRD::~VolumetricFogProcessShaderRD(VolumetricFogProcessShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VolumetricFogShaderRD::~VolumetricFogShaderRD() */void VolumetricFogShaderRD::~VolumetricFogShaderRD(VolumetricFogShaderRD *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

